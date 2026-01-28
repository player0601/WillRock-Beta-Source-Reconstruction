
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_video.cpp
   addr: 0051D960 */

int __fastcall gsVideoInit(void)

{
  bool bVar1;
  SHORT SVar2;
  int iVar3;
  vidDRIVER *pvVar4;
  vidMODE *pvVar5;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int local_104;
  char local_100 [256];
  
  bVar1 = false;
  apMsg(s_Init_hardware_);
  iVar3 = vidInit();
  if (iVar3 == 0) {
    apMsg(s_Error_initialising_hardware);
    return 0;
  }
  iVar3 = gsCFG_SYSTEM::Init(gsSysCfg);
  if (iVar3 == 0) {
    return 0;
  }
  apMsg(s_Get_list_of_drivers_);
  _DAT_009574d0 = vidGetDriverList((vidDRIVER ***)&DAT_009574dc);
  if (_DAT_009574d0 == 0) {
    apMsg(s_Can_t_find_any_hardware_accelera);
    return 0;
  }
  iVar3 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Show,&local_104);
  if (((iVar3 != 0) && (local_104 != 0)) && (SVar2 = GetAsyncKeyState(0x10), SVar2 < 0)) {
    bVar1 = true;
  }
  iVar3 = _apCfgReadString((void **)0x0,s_Video,s_VIDEO_Drv,local_100,0x100);
  if (((iVar3 == 0) || (local_100[0] == '\0')) ||
     (pvVar4 = vidFindDriver(local_100), pvVar4 == (vidDRIVER *)0x0)) {
    pvVar4 = vidFindBestDriver();
    if (pvVar4 == (vidDRIVER *)0x0) goto LAB_0051dbb8;
    apCfgWriteString(s_Video,s_VIDEO_Drv,(char *)(pvVar4 + 8));
  }
  if (bVar1) goto LAB_0051dbb8;
  do {
    iVar3 = _apCfgReadString((void **)0x0,s_Video,s_VIDEO_Drv,local_100,0x100);
    if (((iVar3 == 0) || (local_100[0] == '\0')) ||
       (pvVar4 = vidFindDriver(local_100), pvVar4 == (vidDRIVER *)0x0)) {
      pvVar4 = vidFindBestDriver();
      if (pvVar4 == (vidDRIVER *)0x0) {
        mbShowOk(s_You_should_select_proper_video_d);
      }
      else {
        apCfgWriteString(s_Video,s_VIDEO_Drv,(char *)(pvVar4 + 8));
      }
    }
    else {
      iVar3 = vidSelectDriver(pvVar4);
      if (iVar3 == 0) {
        return 0;
      }
      (**(code **)(*(int *)vidDriver + 0x80))();
      rendDrv = *(rendDRIVER **)(vidDriver + 0x24c);
      iStack_110 = 0x280;
      iStack_108 = 0x1e0;
      iStack_10c = 0x10;
      _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_SizeX,&iStack_110);
      _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_SizeY,&iStack_108);
      _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_BPP,&iStack_10c);
      apMsg(s__gsVideoInitVideo____gsVideoChan);
      pvVar5 = vidDRIVER::FindMode(vidDriver,iStack_110,iStack_108,iStack_10c);
      if (pvVar5 != (vidMODE *)0x0) {
        return 1;
      }
      sprintf((char *)&apBuffer,s_Can_t_find_video_mode__d__d__d,iStack_110,iStack_108,iStack_10c);
      apMsgBox((char *)&apBuffer);
    }
LAB_0051dbb8:
    iVar3 = gsCFG_SYSTEM::Show(gsSysCfg,1);
    if (iVar3 == 0) {
      return 0;
    }
  } while( true );
}




/* from: gs:gs_video.cpp
   addr: 0051DBF0 */

void __fastcall gsVideoTerm(void)

{
  if (DAT_009574e0 == 0) {
    DAT_009574e0 = 1;
    if ((vidDriver != (vidDRIVER *)0x0) && ((*(uint *)(vidDriver + 4) & 0x1000000) != 0)) {
      (**(code **)(*(int *)txmManager + 0xc))();
      (**(code **)(*(int *)vidDriver + 0x14))();
      (**(code **)(*(int *)rendDrv + 8))();
    }
    DAT_009574e0 = 0;
  }
  if (txmManager != (txmMANAGER *)0x0) {
    (*(code *)**(undefined4 **)txmManager)(1);
  }
  txmManager = (txmMANAGER *)0x0;
  gsCFG_SYSTEM::Term(gsSysCfg);
  (**(code **)(*(int *)vidDriver + 0x84))();
  rendDrv = (rendDRIVER *)0x0;
  vidTerm();
  return;
}




/* from: gs:gs_video.cpp
   addr: 0051DC90 */

int __fastcall gsVideoShowOptions(void)

{
  int iVar1;
  
  if (DAT_009574e0 == 0) {
    DAT_009574e0 = 1;
    if ((vidDriver != (vidDRIVER *)0x0) && ((*(uint *)(vidDriver + 4) & 0x1000000) != 0)) {
      (**(code **)(*(int *)txmManager + 0xc))();
      (**(code **)(*(int *)vidDriver + 0x14))();
      (**(code **)(*(int *)rendDrv + 8))();
    }
    DAT_009574e0 = 0;
  }
  iVar1 = gsCFG_SYSTEM::Show(gsSysCfg,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gsVideoApplySettings();
  return iVar1;
}




/* from: gs:gs_video.cpp
   addr: 0051DD00 */

int __fastcall gsVideoApplySettings(void)

{
  vidMODE *pvVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_14 = 0x280;
  local_18 = 0x1e0;
  local_1c = 0x10;
  _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_SizeX,&local_14);
  _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_SizeY,&local_18);
  _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_BPP,&local_1c);
  pvVar1 = vidDRIVER::FindMode(vidDriver,local_14,local_18,local_1c);
  if (pvVar1 == (vidMODE *)0x0) {
    apMsg(s_Can_t_find_video_mode__d__d__d,local_14,local_18,local_1c);
    return 0;
  }
  if (DAT_009574d8 != (vidMODE *)0x0) {
    _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_FullScr,&local_10);
    _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_TripleBuf,&local_c);
    _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_FSAA,&local_8);
    _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LowResTex,&local_4);
    if (DAT_009574e0 == 0) {
      DAT_009574e0 = 1;
      if ((vidDriver != (vidDRIVER *)0x0) && ((*(uint *)(vidDriver + 4) & 0x1000000) != 0)) {
        (**(code **)(*(int *)txmManager + 0xc))();
        (**(code **)(*(int *)vidDriver + 0x14))();
        (**(code **)(*(int *)rendDrv + 8))();
      }
      DAT_009574e0 = 0;
    }
  }
  DAT_009574d8 = pvVar1;
  iVar2 = gsVideoSetHWMode(0);
  return (uint)(iVar2 != 0);
}




/* from: gs:gs_video.cpp
   addr: 0051DE80 */

int __fastcall gsVideoSetHWMode(ulong param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  char *pcVar7;
  int local_114;
  uint local_110;
  int iStack_10c;
  float fStack_108;
  char acStack_104 [260];
  
  local_110 = 1;
  bVar1 = false;
  _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_FullScr,(int *)&local_110);
  switch(param_1) {
  case 0:
    goto switchD_0051deb6_caseD_0;
  case 1:
    local_110 = (uint)(local_110 == 0);
    goto LAB_0051defe;
  case 2:
    bVar5 = local_110 == 0;
    local_110 = 0;
    break;
  case 3:
    bVar5 = local_110 != 0;
    local_110 = 1;
    break;
  default:
    goto switchD_0051deb6_default;
  }
  if (bVar5) {
switchD_0051deb6_caseD_0:
    if (DAT_009574e0 != 0) {
      return 0;
    }
  }
  else {
LAB_0051defe:
    if (DAT_009574e0 != 0) {
      return 0;
    }
    DAT_009574e0 = 1;
    if ((vidDriver != (vidDRIVER *)0x0) && ((*(uint *)(vidDriver + 4) & 0x1000000) != 0)) {
      (**(code **)(*(int *)txmManager + 0xc))();
      (**(code **)(*(int *)vidDriver + 0x14))();
      (**(code **)(*(int *)rendDrv + 8))();
    }
  }
  DAT_009574e0 = 1;
  if ((*(uint *)(vidDriver + 4) & 0x1000000) == 0) {
    bVar6 = local_110 == 0;
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_TripleBuf,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      bVar6 = bVar6 | 4;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_StencilBuf,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      bVar6 = bVar6 | 8;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_CompressTex,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      bVar6 = bVar6 | 0x10;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_FSAA,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      bVar6 = bVar6 | 0x20;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_DetailCompr,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      bVar6 = bVar6 | 0x40;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LowResTex,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      bVar6 = bVar6 | 0x80;
    }
    iVar2 = (**(code **)(*(int *)vidDriver + 0xc))(DAT_009574d8,_apHMainWindow,bVar6);
    if (iVar2 == 0) {
      pcVar7 = s_Error_settin_video_mode;
    }
    else {
      bVar1 = true;
      iStack_10c = 1;
      _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_nTexStageUse,&iStack_10c);
      (**(code **)(*(int *)vidDriver + 0x34))(iStack_10c);
      iVar2 = (**(code **)(*(int *)vidDriver + 0x10))();
      if (iVar2 != 0) {
        if (txmManager == (txmMANAGER *)0x0) {
          txmManager = (txmMANAGER *)(**(code **)(*(int *)vidDriver + 0x7c))();
          if (txmManager == (txmMANAGER *)0x0) {
            pcVar7 = s_Error_creating_a_texture_manager;
          }
          else {
            iVar2 = _apCfgReadString((void **)0x0,s_TexPath,s_Path,acStack_104,0x104);
            if (iVar2 == 0) {
              pcVar7 = s_Error_reading_texture_path__;
            }
            else {
              iVar2 = txmMANAGER::Init(txmManager,acStack_104,s_pct);
              if (iVar2 != 0) goto LAB_0051e16c;
              pcVar7 = s_Error_initializing_texture_manag;
            }
          }
          goto LAB_0051e084;
        }
LAB_0051e16c:
        iVar2 = (**(code **)(*(int *)txmManager + 8))();
        if (iVar2 != 0) goto LAB_0051e179;
      }
      (**(code **)(*(int *)vidDriver + 0x14))();
      pcVar7 = s_Error_hardware_initialisation;
    }
  }
  else {
LAB_0051e179:
    uVar4 = 0x40800;
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Filtration,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = 0x40a00;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_WBuf,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x100;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_MipMaps,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x400;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_MipMapFilter,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x20000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LightMaps,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x4000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Detail,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x200000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseHWLighting,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x800000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseEMBM,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x1000000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseDOT3_Diffuse,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x2000000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseDOT3_Specular,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x4000000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseHTL,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x400000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseWhiteTex,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x80000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseBlackTex,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x8000000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseShaders,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x10000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decomp_OFF_Rend_Low,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x10000000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decomp_OFF_Rend_High,&local_114);
    if ((iVar2 == 0) || (local_114 == 0)) {
      uVar3 = *(uint *)(rendDrv + 4) & 0xffffff7f;
    }
    else {
      uVar3 = *(uint *)(rendDrv + 4) | 0x80;
    }
    *(uint *)(rendDrv + 4) = uVar3;
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Detail2,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x20000000;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LowDynLightQuality,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      uVar4 = uVar4 | 0x40000000;
    }
    vidDRIVER::ToggleModeParam(vidDriver,-1,0);
    vidDRIVER::ToggleModeParam(vidDriver,uVar4 | 0x800,1);
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_Gamma_Changes,&local_114);
    if (((iVar2 != 0) && (local_114 != 0)) &&
       (iVar2 = _apCfgReadFloat((void **)0x0,s_Video,s_Gamma,&fStack_108), iVar2 != 0)) {
      (**(code **)(*(int *)vidDriver + 0x48))(fStack_108);
    }
    if ((!bVar1) || (iVar2 = (**(code **)(*(int *)rendDrv + 4))(gsScenePtr), iVar2 != 0)) {
      m3dInitHW();
      apCfgWriteBool(s_Video,s_VIDEO_FullScr,local_110);
      gssResize(*(int *)(DAT_009574d8 + 8),*(int *)(DAT_009574d8 + 0xc));
      fntMANAGER::SetScreenSize
                (fntManager,(float)*(int *)(DAT_009574d8 + 8),(float)*(int *)(DAT_009574d8 + 0xc));
      if (uiSystem != (uiUI_SYSTEM *)0x0) {
        uiUI_SYSTEM::Resize(uiSystem,*(int *)(DAT_009574d8 + 8),*(int *)(DAT_009574d8 + 0xc));
      }
      (**(code **)(*(int *)gsAppSystem + 0x24))();
      DAT_009574e0 = 0;
      return 1;
    }
    pcVar7 = s_Error_render_driver_hardware_ini;
  }
LAB_0051e084:
  apLogErr(pcVar7);
switchD_0051deb6_default:
  DAT_009574e0 = 0;
  return 0;
}




/* from: gs:gs_video.cpp
   addr: 0051E590 */

void __fastcall gsVideoTermHW(void)

{
  if (DAT_009574e0 == 0) {
    DAT_009574e0 = 1;
    if ((vidDriver != (vidDRIVER *)0x0) && ((*(uint *)(vidDriver + 4) & 0x1000000) != 0)) {
      (**(code **)(*(int *)txmManager + 0xc))();
      (**(code **)(*(int *)vidDriver + 0x14))();
      (**(code **)(*(int *)rendDrv + 8))();
    }
    DAT_009574e0 = 0;
  }
  return;
}

