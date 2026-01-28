
/* from: gs:gs_cfg_scale.cpp
   addr: 0051C200 */

void __fastcall gsCfgScaleInit(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  _MEMORYSTATUS local_20;
  
  GlobalMemoryStatus(&local_20);
  if (local_20.dwAvailPhys < 60000000) {
    pcVar3 = s_Less_than_64MB_memory_available_;
  }
  else {
    if (119999999 < local_20.dwAvailPageFile) goto LAB_0051c236;
    pcVar3 = s_Less_than_128MB_of_swap_file_spa;
  }
  apMsgBox(pcVar3);
LAB_0051c236:
  iVar1 = _apCfgReadBool((void **)0x0,s_CONFIG,s_IsScaleInited,&iStack_24);
  if ((iVar1 == 0) || (iStack_24 == 0)) {
    apCfgWriteBool(s_CONFIG,s_IsScaleInited,1);
    gsCfgScaleDetect();
    gsCfgConfig2Scale();
    iStack_28 = 1;
    _apCfgReadBool((void **)0x0,s_CONFIG,s_GPU_VID_GF2,&iStack_28);
    iStack_2c = 1000;
    _apCfgReadInt((void **)0x0,s_CONFIG,s_CPU_Freq,&iStack_2c);
    if (iStack_2c < 700) {
      iVar1 = 0x280;
      iVar2 = 0x1e0;
    }
    else if (iStack_28 == 0) {
      iVar1 = 0x400;
      iVar2 = 0x300;
    }
    else {
      iVar1 = 800;
      iVar2 = 600;
    }
    apCfgWriteInt(s_Video,s_VIDEO_SizeX,iVar1);
    apCfgWriteInt(s_Video,s_VIDEO_SizeY,iVar2);
    apCfgWriteInt(s_Video,s_VIDEO_BPP,0x20);
    apCfgWriteBool(s_CONFIG,s_IsScaleMinimal,0);
  }
  return;
}




/* from: gs:gs_cfg_scale.cpp
   addr: 0051C330 */

void __fastcall gsCfgScaleDetect(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LSTATUS LVar4;
  BOOL BVar5;
  char *pcVar6;
  vidDRIVER *pvVar7;
  int iVar8;
  DWORD DStack_8c;
  HKEY pHStack_88;
  uint uStack_84;
  int iStack_80;
  int iStack_7c;
  LARGE_INTEGER LStack_78;
  LARGE_INTEGER LStack_70;
  int iStack_68;
  undefined4 uStack_64;
  _MEMORYSTATUS local_60;
  BYTE aBStack_40 [64];
  
  GlobalMemoryStatus(&local_60);
  if (local_60.dwTotalPhys < 90000000) {
    iVar8 = 0x40;
  }
  else if (local_60.dwTotalPhys < 180000000) {
    iVar8 = 0x80;
  }
  else {
    iVar8 = 0x100;
  }
  apCfgWriteInt(s_CONFIG,s_MEM_Size,iVar8);
  uStack_84 = 0;
  aBStack_40[0] = '\0';
  DStack_8c = 4;
  LVar4 = RegOpenKeyExA((HKEY)0x80000002,s_HARDWARE_DESCRIPTION_System_Cent,0,1,&pHStack_88);
  if (LVar4 == 0) {
    DStack_8c = 4;
    LVar4 = RegQueryValueExA(pHStack_88,s__MHz,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)&uStack_84,
                             &DStack_8c);
    if (LVar4 != 0) {
      apLogErr(s_Cannot_read_processor_info_from_);
    }
    DStack_8c = 0x40;
    LVar4 = RegQueryValueExA(pHStack_88,s_ProcessorNameString,(LPDWORD)0x0,(LPDWORD)0x0,aBStack_40,
                             &DStack_8c);
    if ((LVar4 != 0) &&
       (LVar4 = RegQueryValueExA(pHStack_88,s_VendorIdentifier,(LPDWORD)0x0,(LPDWORD)0x0,aBStack_40,
                                 &DStack_8c), LVar4 != 0)) {
      apLogErr(s_Cannot_read_processor_info_from_);
    }
  }
  RegCloseKey(pHStack_88);
  if (uStack_84 == 0) {
    BVar5 = QueryPerformanceFrequency(&LStack_70);
    if (BVar5 == 0) {
      uStack_84 = 0x309;
    }
    else {
      QueryPerformanceCounter(&LStack_78);
      uVar1 = LStack_70.s.LowPart + LStack_78.s.LowPart;
      if (LStack_70.s.LowPart == 0) {
        cpuid_basic_info(0);
      }
      else if (LStack_70.s.LowPart == 1) {
        cpuid_Version_info(1);
      }
      else if (LStack_70.s.LowPart == 2) {
        cpuid_cache_tlb_info(2);
      }
      else if (LStack_70.s.LowPart == 3) {
        cpuid_serial_info(3);
      }
      else if (LStack_70.s.LowPart == 4) {
        cpuid_Deterministic_Cache_Parameters_info(4);
      }
      else if (LStack_70.s.LowPart == 5) {
        cpuid_MONITOR_MWAIT_Features_info(5);
      }
      else if (LStack_70.s.LowPart == 6) {
        cpuid_Thermal_Power_Management_info(6);
      }
      else if (LStack_70.s.LowPart == 7) {
        cpuid_Extended_Feature_Enumeration_info(7);
      }
      else if (LStack_70.s.LowPart == 9) {
        cpuid_Direct_Cache_Access_info(9);
      }
      else if (LStack_70.s.LowPart == 10) {
        cpuid_Architectural_Performance_Monitoring_info(10);
      }
      else if (LStack_70.s.LowPart == 0xb) {
        cpuid_Extended_Topology_info(0xb);
      }
      else if (LStack_70.s.LowPart == 0xd) {
        cpuid_Processor_Extended_States_info(0xd);
      }
      else if (LStack_70.s.LowPart == 0xf) {
        cpuid_Quality_of_Service_info(0xf);
      }
      else if (LStack_70.s.LowPart == 0x80000002) {
        cpuid_brand_part1_info(0x80000002);
      }
      else if (LStack_70.s.LowPart == 0x80000003) {
        cpuid_brand_part2_info(0x80000003);
      }
      else if (LStack_70.s.LowPart == 0x80000004) {
        cpuid_brand_part3_info(0x80000004);
      }
      else {
        cpuid(LStack_70.s.LowPart);
      }
      uVar2 = rdtsc();
      uStack_64 = (undefined4)((ulonglong)uVar2 >> 0x20);
      iStack_68 = (int)uVar2;
      while (LStack_78.s.LowPart <= uVar1) {
        QueryPerformanceCounter(&LStack_78);
      }
      uVar3 = rdtsc();
      uStack_64 = (undefined4)((ulonglong)uVar3 >> 0x20);
      iStack_68 = (int)uVar3;
      uStack_84 = (uint)(iStack_68 - (int)uVar2) / 1000000;
    }
  }
  apCfgWriteInt(s_CONFIG,s_CPU_Freq,uStack_84);
  pcVar6 = strstr((char *)aBStack_40,s_AMD);
  apCfgWriteBool(s_CONFIG,s_CPU_Make,(uint)(pcVar6 == (char *)0x0));
  iVar8 = m3dGetSimdType();
  apCfgWriteBool(s_CONFIG,s_CPU_SIMD_Supp,(uint)(iVar8 != 2));
  pvVar7 = vidFindBestDriver();
  if (pvVar7 == (vidDRIVER *)0x0) {
    apLogErr(s_Video_driver_not_found);
  }
  apCfgWriteBool(s_CONFIG,s_GPU_VID_GF2,(uint)(*(int *)(pvVar7 + 0x234) < 3));
  iVar8 = sscanf((char *)(pvVar7 + 0x10c),s_RADEON__d,&iStack_7c);
  if ((iVar8 == 1) && (iStack_7c < 0x20d0)) {
    apCfgWriteBool(s_CONFIG,s_GPU_VID_GF2,1);
  }
  apCfgWriteBool(s_CONFIG,s_GPU_VID_32_MB,(uint)(*(int *)(pvVar7 + 0x23c) < 50000000));
  iVar8 = _apCfgReadBool((void **)0x0,s_CONFIG,s_IsScaleMinimal,&iStack_80);
  if ((iVar8 != 0) && (iStack_80 != 0)) {
    apCfgWriteInt(s_CONFIG,s_MEM_Size,0x40);
    apCfgWriteInt(s_CONFIG,s_CPU_Freq,0x1c2);
    apCfgWriteBool(s_CONFIG,s_CPU_SIMD_Supp,0);
    apCfgWriteBool(s_CONFIG,s_GPU_VID_GF2,1);
    apCfgWriteBool(s_CONFIG,s_GPU_VID_32_MB,1);
  }
  return;
}




/* from: gs:gs_cfg_scale.cpp
   addr: 0051C630 */

void __fastcall gsCfgConfig2Scale(void)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  apCfgWriteBool(s_Video,s_VIDEO_Detail,1);
  apCfgWriteBool(s_Video,s_VIDEO_ProjShd,1);
  apCfgWriteBool(s_Video,s_VIDEO_TripleBuf,1);
  apCfgWriteBool(s_Video,s_VIDEO_MipMapFilter,1);
  apCfgWriteBool(s_Video,s_VIDEO_UseHWLighting,1);
  apCfgWriteBool(s_Video,s_VIDEO_UseDOT3_Diffuse,1);
  apCfgWriteBool(s_Video,s_VIDEO_UseDOT3_Specular,1);
  apCfgWriteBool(s_Video,s_VIDEO_FSAA,0);
  apCfgWriteBool(s_Video,s_VIDEO_Mirror,1);
  apCfgWriteBool(s_Video,s_VIDEO_LowResTex,0);
  apCfgWriteBool(s_Level,s_PreloadLev,1);
  apCfgWriteBool(s_Sound,s_PreloadSounds,1);
  apCfgWriteBool(s_Video,s_VIDEO_PlrLegs,1);
  apCfgWriteBool(s_Video,s_VIDEO_WpnShdr,1);
  apCfgWriteBool(s_Video,s_VIDEO_NoShdUnderLM,0);
  apCfgWriteBool(s_Video,s_VIDEO_WaterReflCaust,1);
  apCfgWriteBool(s_Video,s_VIDEO_LowShatterQual,0);
  apCfgWriteBool(s_Video,s_VIDEO_LowScorchQuality,0);
  apCfgWriteInt(s_Video,s_VIDEO_MaxLod,0);
  apCfgWriteBool(s_Video,s_VIDEO_Detail2,1);
  apCfgWriteBool(s_Video,s_VIDEO_DetailCompr,0);
  apCfgWriteInt(s_Video,s_VIDEO_ProjShdQual,2);
  local_18 = 1000;
  _apCfgReadInt((void **)0x0,s_CONFIG,s_CPU_Freq,&local_18);
  iVar1 = _apCfgReadBool((void **)0x0,s_CONFIG,s_CPU_SIMD_Supp,&local_4);
  if ((iVar1 != 0) && (local_4 != 0)) {
    local_18 = local_18 + 0x32;
  }
  if (local_18 < 0x37a) {
    apCfgWriteBool(s_Video,s_VIDEO_UseDOT3_Diffuse,0);
    apCfgWriteBool(s_Video,s_VIDEO_UseDOT3_Specular,0);
    apCfgWriteInt(s_Video,s_VIDEO_ProjShdQual,1);
    apCfgWriteBool(s_Video,s_VIDEO_PlrLegs,0);
  }
  if (local_18 < 0x2ee) {
    apCfgWriteBool(s_Video,s_VIDEO_ProjShd,0);
    apCfgWriteBool(s_Video,s_VIDEO_UseHWLighting,0);
    apCfgWriteBool(s_Video,s_VIDEO_MipMapFilter,0);
    apCfgWriteInt(s_Video,s_VIDEO_MaxLod,1);
    apCfgWriteBool(s_Video,s_VIDEO_WpnShdr,0);
    apCfgWriteBool(s_Video,s_VIDEO_NoShdUnderLM,1);
    apCfgWriteBool(s_Video,s_VIDEO_WaterReflCaust,0);
    apCfgWriteBool(s_Video,s_VIDEO_LowShatterQual,1);
    apCfgWriteBool(s_Video,s_VIDEO_LowScorchQuality,1);
  }
  if (local_18 < 0x24e) {
    apCfgWriteBool(s_Video,s_VIDEO_Detail,0);
    apCfgWriteBool(s_Video,s_VIDEO_Mirror,0);
    apCfgWriteInt(s_Video,s_VIDEO_MaxLod,2);
  }
  if (0x578 < local_18) {
    apCfgWriteInt(s_Video,s_VIDEO_ProjShdQual,3);
  }
  local_10 = 1;
  _apCfgReadBool((void **)0x0,s_CONFIG,s_GPU_VID_GF2,&local_10);
  if (local_10 != 0) {
    apCfgWriteBool(s_Video,s_VIDEO_UseDOT3_Specular,0);
    apCfgWriteBool(s_Video,s_VIDEO_FSAA,0);
    apCfgWriteBool(s_Video,s_VIDEO_MipMapFilter,0);
    apCfgWriteBool(s_Video,s_VIDEO_Detail2,0);
    apCfgWriteBool(s_Video,s_VIDEO_DetailCompr,1);
    apCfgWriteBool(s_Video,s_VIDEO_WaterReflCaust,0);
  }
  local_c = 1;
  _apCfgReadBool((void **)0x0,s_CONFIG,s_GPU_VID_32_MB,&local_c);
  if (local_c != 0) {
    apCfgWriteBool(s_Video,s_VIDEO_TripleBuf,0);
  }
  local_14 = 0x80;
  _apCfgReadInt((void **)0x0,s_CONFIG,s_MEM_Size,&local_14);
  if (local_14 < 0x78) {
    apCfgWriteBool(s_Video,s_VIDEO_LowResTex,1);
  }
  if (local_14 < 0xfa) {
    apCfgWriteBool(s_Level,s_PreloadLev,0);
    apCfgWriteBool(s_Sound,s_PreloadSounds,0);
  }
  local_8 = 3;
  _apCfgReadInt((void **)0x0,s_CONFIG,s_LAN_Speed,&local_8);
  switch(local_8) {
  case 1:
    apCfgWriteInt(s_Multiplayer,s_NmbSnapShots,0x1e);
    return;
  case 2:
    apCfgWriteInt(s_Multiplayer,s_NmbSnapShots,0x14);
    return;
  case 3:
    apCfgWriteInt(s_Multiplayer,s_NmbSnapShots,0xe);
    return;
  case 4:
    apCfgWriteInt(s_Multiplayer,s_NmbSnapShots,10);
    return;
  case 5:
    apCfgWriteInt(s_Multiplayer,s_NmbSnapShots,7);
  }
  return;
}




/* from: gs:gs_cfg_scale.cpp
   addr: 0051CB10 */

void __fastcall gsCfgConfig2DefVideoRes(void)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  local_4 = 1;
  _apCfgReadBool((void **)0x0,s_CONFIG,s_GPU_VID_GF2,&local_4);
  local_8 = 1000;
  _apCfgReadInt((void **)0x0,s_CONFIG,s_CPU_Freq,&local_8);
  if (local_8 < 700) {
    iVar1 = 0x280;
    iVar2 = 0x1e0;
  }
  else if (local_4 == 0) {
    iVar1 = 0x400;
    iVar2 = 0x300;
  }
  else {
    iVar1 = 800;
    iVar2 = 600;
  }
  apCfgWriteInt(s_Video,s_VIDEO_SizeX,iVar1);
  apCfgWriteInt(s_Video,s_VIDEO_SizeY,iVar2);
  apCfgWriteInt(s_Video,s_VIDEO_BPP,0x20);
  return;
}




/* from: gs:gs_cfg_scale.cpp
   addr: 0051CBC0 */

int _gsCfgScale_WND(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  UINT UVar1;
  uint uVar2;
  UINT UVar3;
  
  if (param_2 == 0x4e) {
    if (DAT_009574c8 != 0) {
      return 0;
    }
    if ((short)param_3 != 0x44d) {
      return 0;
    }
    UVar1 = SendDlgItemMessageA(param_1,0x44d,0x400,0,0);
    if ((int)UVar1 < 0x12d) {
      return 0;
    }
    UVar3 = GetDlgItemInt(param_1,0x44f,(BOOL *)0x0,0);
    if (UVar1 == UVar3) {
      return 0;
    }
    SetDlgItemInt(param_1,0x44f,UVar1,0);
  }
  else {
    if (param_2 != 0x111) {
      if (param_2 != 0x400) {
        return 0;
      }
      DAT_009574c8 = 1;
      _gsCfgConfig2Dlg(param_1);
      UVar1 = GetDlgItemInt(param_1,0x44f,(BOOL *)0x0,0);
      SendDlgItemMessageA(param_1,0x44d,0x406,1,0x5dc01c2);
      SendDlgItemMessageA(param_1,0x44d,0x405,1,UVar1);
      SendDlgItemMessageA(param_1,0x44d,0x417,0,0x32);
      SendDlgItemMessageA(param_1,0x44d,0x415,0,0x32);
      SendDlgItemMessageA(param_1,0x44d,0x414,0x32,0);
      DAT_009574c8 = 0;
      return 1;
    }
    uVar2 = param_3 & 0xffff;
    if (uVar2 < 0x45f) {
      if (uVar2 != 0x45e) {
        if (uVar2 == 1) {
          _gsCfgDlg2Config(param_1);
          return 0;
        }
        if (uVar2 < 0x453) {
          return 0;
        }
        if (0x45c < uVar2) {
          return 0;
        }
      }
    }
    else if (uVar2 != 0x463) {
      if (uVar2 != 0x466) {
        return 0;
      }
      gsCfgScaleDetect();
      gsCfgConfig2Scale();
      _gsCfgConfig2Dlg(param_1);
      UVar1 = GetDlgItemInt(param_1,0x44f,(BOOL *)0x0,0);
      SendDlgItemMessageA(param_1,0x44d,0x405,1,UVar1);
      return 0;
    }
  }
  _gsCfgDlg2Config(param_1);
  gsCfgConfig2Scale();
  _gsCfgConfig2Dlg(param_1);
  return 0;
}




/* from: gs:gs_cfg_scale.cpp
   addr: 0051CD90 */

void __fastcall _gsCfgConfig2Dlg(HWND__ *param_1)

{
  int iVar1;
  uint uVar2;
  int local_8;
  UINT local_4;
  
  SetCBItemState(param_1,0x450,0);
  SetCBItemState(param_1,0x451,0);
  iVar1 = _apCfgReadBool((void **)0x0,s_CONFIG,s_CPU_Make,&local_8);
  if ((iVar1 == 0) || (local_8 == 0)) {
    uVar2 = 0x451;
  }
  else {
    uVar2 = 0x450;
  }
  SetCBItemState(param_1,uVar2,1);
  iVar1 = _apCfgReadBool((void **)0x0,s_CONFIG,s_CPU_SIMD_Supp,&local_8);
  if ((iVar1 != 0) && (local_8 != 0)) {
    SetCBItemState(param_1,0x452,1);
  }
  local_4 = 1000;
  _apCfgReadInt((void **)0x0,s_CONFIG,s_CPU_Freq,(int *)&local_4);
  SetDlgItemInt(param_1,0x44f,local_4,0);
  SetCBItemState(param_1,0x453,0);
  SetCBItemState(param_1,0x454,0);
  iVar1 = _apCfgReadBool((void **)0x0,s_CONFIG,s_GPU_VID_GF2,&local_8);
  if ((iVar1 == 0) || (local_8 == 0)) {
    uVar2 = 0x454;
  }
  else {
    uVar2 = 0x453;
  }
  SetCBItemState(param_1,uVar2,1);
  SetCBItemState(param_1,0x455,0);
  SetCBItemState(param_1,0x456,0);
  iVar1 = _apCfgReadBool((void **)0x0,s_CONFIG,s_GPU_VID_32_MB,&local_8);
  if ((iVar1 == 0) || (local_8 == 0)) {
    uVar2 = 0x456;
  }
  else {
    uVar2 = 0x455;
  }
  SetCBItemState(param_1,uVar2,1);
  SetCBItemState(param_1,0x457,0);
  SetCBItemState(param_1,0x458,0);
  SetCBItemState(param_1,0x459,0);
  local_4 = 0x80;
  _apCfgReadInt((void **)0x0,s_CONFIG,s_MEM_Size,(int *)&local_4);
  if ((int)local_4 < 0x78) {
    uVar2 = 0x457;
  }
  else if ((int)local_4 < 0xfa) {
    uVar2 = 0x458;
  }
  else {
    uVar2 = 0x459;
  }
  SetCBItemState(param_1,uVar2,1);
  SetCBItemState(param_1,0x45a,0);
  SetCBItemState(param_1,0x45b,0);
  SetCBItemState(param_1,0x45c,0);
  SetCBItemState(param_1,0x45e,0);
  SetCBItemState(param_1,0x463,0);
  local_4 = 2;
  _apCfgReadInt((void **)0x0,s_CONFIG,s_LAN_Speed,(int *)&local_4);
  switch(local_4) {
  case 1:
    uVar2 = 0x45a;
    break;
  case 2:
    uVar2 = 0x45b;
    break;
  case 3:
    uVar2 = 0x45c;
    break;
  case 4:
    uVar2 = 0x45e;
    break;
  case 5:
    uVar2 = 0x463;
    break;
  default:
    goto switchD_0051cfe8_default;
  }
  SetCBItemState(param_1,uVar2,1);
switchD_0051cfe8_default:
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Detail,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x429,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_ProjShd,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x430,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_TripleBuf,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x3fd,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_MipMapFilter,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x465,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseHWLighting,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x433,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseDOT3_Diffuse,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x435,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseDOT3_Specular,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x436,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_FSAA,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x403,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Mirror,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x434,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LowResTex,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x437,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_PlrLegs,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x468,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_WpnShdr,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x469,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_NoShdUnderLM,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x46a,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_WaterReflCaust,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x46b,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LowShatterQual,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x46c,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LowScorchQuality,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x46d,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Level,s_PreloadLev,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x43f,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Sound,s_PreloadSounds,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x440,local_8);
  }
  iVar1 = _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_MaxLod,(int *)&local_4);
  if (iVar1 != 0) {
    SetDlgItemInt(param_1,0x464,local_4,0);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Detail2,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x462,local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_DetailCompr,&local_8);
  if (iVar1 != 0) {
    SetCBItemState(param_1,0x3ff,local_8);
  }
  iVar1 = _apCfgReadInt((void **)0x0,s_Multiplayer,s_NmbSnapShots,(int *)&local_4);
  if (iVar1 != 0) {
    SetDlgItemInt(param_1,0x45d,local_4,0);
  }
  local_4 = 3;
  _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_ProjShdQual,(int *)&local_4);
  SetCBItemState(param_1,0x45f,0);
  SetCBItemState(param_1,0x460,0);
  SetCBItemState(param_1,0x461,0);
  if (local_4 == 1) {
    SetCBItemState(param_1,0x45f,1);
  }
  else {
    if (local_4 == 2) {
      SetCBItemState(param_1,0x460,1);
      return;
    }
    if (local_4 == 3) {
      SetCBItemState(param_1,0x461,1);
      return;
    }
  }
  return;
}




/* from: gs:gs_cfg_scale.cpp
   addr: 0051D4D0 */

void __fastcall _gsCfgDlg2Config(HWND__ *param_1)

{
  int iVar1;
  UINT UVar2;
  int iVar3;
  
  iVar1 = GetCBItemState(param_1,0x450);
  apCfgWriteBool(s_CONFIG,s_CPU_Make,iVar1);
  iVar1 = GetCBItemState(param_1,0x452);
  apCfgWriteBool(s_CONFIG,s_CPU_SIMD_Supp,iVar1);
  UVar2 = GetDlgItemInt(param_1,0x44f,(BOOL *)0x0,0);
  apCfgWriteInt(s_CONFIG,s_CPU_Freq,UVar2);
  iVar1 = GetCBItemState(param_1,0x453);
  apCfgWriteBool(s_CONFIG,s_GPU_VID_GF2,iVar1);
  iVar1 = GetCBItemState(param_1,0x455);
  apCfgWriteBool(s_CONFIG,s_GPU_VID_32_MB,iVar1);
  iVar1 = GetCBItemState(param_1,0x457);
  if (iVar1 == 0) {
    iVar1 = GetCBItemState(param_1,0x458);
    iVar1 = (-(uint)(iVar1 != 0) & 0xffffff80) + 0x100;
  }
  else {
    iVar1 = 0x40;
  }
  apCfgWriteInt(s_CONFIG,s_MEM_Size,iVar1);
  iVar3 = GetCBItemState(param_1,0x45a);
  if (iVar3 == 0) {
    iVar3 = GetCBItemState(param_1,0x45b);
    if (iVar3 == 0) {
      iVar3 = GetCBItemState(param_1,0x45c);
      if (iVar3 == 0) {
        iVar3 = GetCBItemState(param_1,0x45e);
        if (iVar3 == 0) {
          iVar3 = GetCBItemState(param_1,0x463);
          if (iVar3 != 0) {
            iVar1 = 5;
          }
        }
        else {
          iVar1 = 4;
        }
      }
      else {
        iVar1 = 3;
      }
    }
    else {
      iVar1 = 2;
    }
  }
  else {
    iVar1 = 1;
  }
  apCfgWriteInt(s_CONFIG,s_LAN_Speed,iVar1);
  iVar3 = GetCBItemState(param_1,0x429);
  apCfgWriteBool(s_Video,s_VIDEO_Detail,iVar3);
  iVar3 = GetCBItemState(param_1,0x430);
  apCfgWriteBool(s_Video,s_VIDEO_ProjShd,iVar3);
  iVar3 = GetCBItemState(param_1,0x3fd);
  apCfgWriteBool(s_Video,s_VIDEO_TripleBuf,iVar3);
  iVar3 = GetCBItemState(param_1,0x465);
  apCfgWriteBool(s_Video,s_VIDEO_MipMapFilter,iVar3);
  iVar3 = GetCBItemState(param_1,0x433);
  apCfgWriteBool(s_Video,s_VIDEO_UseHWLighting,iVar3);
  iVar3 = GetCBItemState(param_1,0x435);
  apCfgWriteBool(s_Video,s_VIDEO_UseDOT3_Diffuse,iVar3);
  iVar3 = GetCBItemState(param_1,0x436);
  apCfgWriteBool(s_Video,s_VIDEO_UseDOT3_Specular,iVar3);
  iVar3 = GetCBItemState(param_1,0x403);
  apCfgWriteBool(s_Video,s_VIDEO_FSAA,iVar3);
  iVar3 = GetCBItemState(param_1,0x434);
  apCfgWriteBool(s_Video,s_VIDEO_Mirror,iVar3);
  iVar3 = GetCBItemState(param_1,0x437);
  apCfgWriteBool(s_Video,s_VIDEO_LowResTex,iVar3);
  iVar3 = GetCBItemState(param_1,0x468);
  apCfgWriteBool(s_Video,s_VIDEO_PlrLegs,iVar3);
  iVar3 = GetCBItemState(param_1,0x469);
  apCfgWriteBool(s_Video,s_VIDEO_WpnShdr,iVar3);
  iVar3 = GetCBItemState(param_1,0x46a);
  apCfgWriteBool(s_Video,s_VIDEO_NoShdUnderLM,iVar3);
  iVar3 = GetCBItemState(param_1,0x46b);
  apCfgWriteBool(s_Video,s_VIDEO_WaterReflCaust,iVar3);
  iVar3 = GetCBItemState(param_1,0x46c);
  apCfgWriteBool(s_Video,s_VIDEO_LowShatterQual,iVar3);
  iVar3 = GetCBItemState(param_1,0x46d);
  apCfgWriteBool(s_Video,s_VIDEO_LowScorchQuality,iVar3);
  iVar3 = GetCBItemState(param_1,0x43f);
  apCfgWriteBool(s_Level,s_PreloadLev,iVar3);
  iVar3 = GetCBItemState(param_1,0x440);
  apCfgWriteBool(s_Sound,s_PreloadSounds,iVar3);
  UVar2 = GetDlgItemInt(param_1,0x464,(BOOL *)0x0,0);
  apCfgWriteInt(s_Video,s_VIDEO_MaxLod,UVar2);
  iVar3 = GetCBItemState(param_1,0x462);
  apCfgWriteBool(s_Video,s_VIDEO_Detail2,iVar3);
  iVar3 = GetCBItemState(param_1,0x3ff);
  apCfgWriteBool(s_Video,s_VIDEO_DetailCompr,iVar3);
  UVar2 = GetDlgItemInt(param_1,0x45d,(BOOL *)0x0,0);
  apCfgWriteInt(s_Multiplayer,s_NmbSnapShots,UVar2);
  iVar3 = GetCBItemState(param_1,0x45f);
  if (iVar3 != 0) {
    apCfgWriteInt(s_Video,s_VIDEO_ProjShdQual,1);
    return;
  }
  iVar3 = GetCBItemState(param_1,0x460);
  if (iVar3 != 0) {
    apCfgWriteInt(s_Video,s_VIDEO_ProjShdQual,2);
    return;
  }
  iVar3 = GetCBItemState(param_1,0x461);
  if (iVar3 != 0) {
    iVar1 = 3;
  }
  apCfgWriteInt(s_Video,s_VIDEO_ProjShdQual,iVar1);
  return;
}

