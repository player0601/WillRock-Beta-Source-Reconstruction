
/* from: wr_ui_video.cpp
   addr: 00493340 */

void __thiscall wrUI_VIDEO_RECORD::wrUI_VIDEO_RECORD(wrUI_VIDEO_RECORD *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}




/* from: wr_ui_video.cpp
   addr: 00493360 */

void __thiscall wrUI_VIDEO_INFO::SetRecord(wrUI_VIDEO_INFO *this,wrUI_VIDEO_RECORD *param_1)

{
  int iVar1;
  wrUI_VIDEO_INFO *pwVar2;
  int iVar3;
  
  *(wrUI_VIDEO_RECORD **)(this + 0x138) = param_1;
  uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(this + 0x13c),*(int *)(param_1 + 0x1c));
  (**(code **)(*(int *)this + 0x10))(*(int *)(*(int *)(this + 0x138) + 0x20) == 0);
  *(undefined4 *)(this + 300) = *(undefined4 *)(*(int *)(this + 0x138) + 0x18);
  if ((*(int *)(*(int *)(this + 0x138) + 0x10) == 1) &&
     (pwVar2 = this + 0x130, *(int *)(this + 0x130) != 0)) {
    iVar3 = 2;
    do {
      iVar1 = *(int *)pwVar2;
      pwVar2 = pwVar2 + 4;
      iVar3 = iVar3 + -1;
      *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 8;
    } while (iVar3 != 0);
  }
  wrUI_TEXT_SCROLL::UpdateArrows((wrUI_TEXT_SCROLL *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_video.cpp
   addr: 004933F0 */

ushort * __thiscall wrUI_VIDEO_INFO::GetStr(wrUI_VIDEO_INFO *this,int param_1)

{
  char **ppcVar1;
  
  if (*(wrUI_STRINGS **)(this + 0x138) == (wrUI_STRINGS *)0x0) {
    return (ushort *)u_;
  }
  ppcVar1 = (char **)wrUI_STRINGS::GetStr(*(wrUI_STRINGS **)(this + 0x138),param_1);
  if (*(ushort *)ppcVar1 == 0) {
    swprintf((wchar_t *)&apBuffer,u__2_1f,
             (double)((float)param_1 * ___real_3dcccccd + ___real_3f800000));
    ppcVar1 = &apBuffer;
  }
  return (ushort *)ppcVar1;
}




/* from: wr_ui_video.cpp
   addr: 00493450
   addr: 00493450 */

void __thiscall wrUI_ADVSERV_INFO::OnScrolled(wrUI_ADVSERV_INFO *this)

{
  *(undefined4 *)(*(int *)(this + 0x138) + 0x18) = *(undefined4 *)(this + 300);
  return;
}




/* from: wr_ui_video.cpp
   addr: 00493460 */

int __thiscall wrUI_VIDEO_WINDOW::ProcessInit(wrUI_VIDEO_WINDOW *this,void *param_1)

{
  wrUI_STRINGS *pwVar1;
  int iVar2;
  gsSTRINGS *extraout_ECX;
  gsSTRINGS *extraout_ECX_00;
  gsSTRINGS *extraout_ECX_01;
  gsSTRINGS *extraout_ECX_02;
  gsSTRINGS *extraout_ECX_03;
  gsSTRINGS *pgVar3;
  gsSTRINGS *extraout_ECX_04;
  wrUI_VIDEO_WINDOW *pwVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  
  iVar6 = 0;
  pwVar4 = this + 0x98;
  pgVar3 = (gsSTRINGS *)this;
  do {
    iVar2 = gsSTRINGS::GetStringIdFmt(pgVar3,(char *)gsStrings,s_UI_VIDEO_OPT__i,iVar6);
    *(int *)pwVar4 = iVar2;
    iVar6 = iVar6 + 1;
    pwVar4 = pwVar4 + 0x24;
    pgVar3 = extraout_ECX;
  } while (iVar6 < 0x14);
  InitAdaptersList(this);
  wrUI_STRINGS::PreInit((wrUI_STRINGS *)(this + 0xa0),2,8);
  InitResolutionsList(this);
  pwVar1 = (wrUI_STRINGS *)(this + 0x10c);
  wrUI_STRINGS::PreInit(pwVar1,4,0);
  wrUI_STRINGS::Clear(pwVar1);
  uVar5 = 0;
  uVar7 = -(uint)((*(uint *)(vidDriver + 4) & 0x40000) != 0) & 2;
  pgVar3 = (gsSTRINGS *)vidDriver;
  if (uVar7 != 0xfffffffe) {
    do {
      uVar8 = uVar5;
      iVar6 = gsSTRINGS::GetStringIdFmt(pgVar3,(char *)gsStrings,s_UI_VIDEO_BUMP__i,uVar5);
      wrUI_STRINGS::AddString(pwVar1,iVar6,uVar8);
      uVar5 = uVar5 + 1;
      pgVar3 = extraout_ECX_00;
    } while ((int)uVar5 < (int)(uVar7 + 2));
  }
  wrUI_STRINGS::Compact(pwVar1);
  pwVar1 = (wrUI_STRINGS *)(this + 0x130);
  wrUI_STRINGS::PreInit(pwVar1,3,0);
  wrUI_STRINGS::Clear(pwVar1);
  uVar5 = 0;
  pgVar3 = extraout_ECX_01;
  do {
    uVar8 = uVar5;
    iVar6 = gsSTRINGS::GetStringIdFmt(pgVar3,(char *)gsStrings,s_UI_VIDEO_LOD__i,uVar5);
    wrUI_STRINGS::AddString(pwVar1,iVar6,uVar8);
    uVar5 = uVar5 + 1;
    pgVar3 = extraout_ECX_02;
  } while ((int)uVar5 < 3);
  wrUI_STRINGS::Compact(pwVar1);
  pwVar1 = (wrUI_STRINGS *)(this + 0x154);
  wrUI_STRINGS::PreInit(pwVar1,3,0);
  wrUI_STRINGS::Clear(pwVar1);
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    iVar6 = gsSTRINGS::GetStringIdFmt(gsStrings,(char *)gsStrings,s_UI_VIDEO_DETTEX__i,uVar5);
    wrUI_STRINGS::AddString(pwVar1,iVar6,uVar8);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 3);
  wrUI_STRINGS::Compact(pwVar1);
  pwVar1 = (wrUI_STRINGS *)(this + 0x178);
  wrUI_STRINGS::PreInit(pwVar1,3,0);
  wrUI_STRINGS::Clear(pwVar1);
  uVar5 = 0;
  pgVar3 = extraout_ECX_03;
  do {
    uVar8 = uVar5;
    iVar6 = gsSTRINGS::GetStringIdFmt(pgVar3,(char *)gsStrings,s_UI_VIDEO_PROJSHD__i,uVar5);
    wrUI_STRINGS::AddString(pwVar1,iVar6,uVar8);
    uVar5 = uVar5 + 1;
    pgVar3 = extraout_ECX_04;
  } while ((int)uVar5 < 3);
  wrUI_STRINGS::Compact(pwVar1);
  pwVar1 = (wrUI_STRINGS *)(this + 0x19c);
  wrUI_STRINGS::PreInit(pwVar1,2,0);
  wrUI_STRINGS::Clear(pwVar1);
  uVar5 = 0;
  iVar6 = gsSTRINGS::GetStringId(gsStrings,s_UI_LOW);
  wrUI_STRINGS::AddString(pwVar1,iVar6,uVar5);
  uVar5 = 1;
  iVar6 = gsSTRINGS::GetStringId(gsStrings,s_UI_HIGH);
  wrUI_STRINGS::AddString(pwVar1,iVar6,uVar5);
  wrUI_STRINGS::Compact(pwVar1);
  pwVar1 = (wrUI_STRINGS *)(this + 0xe8);
  wrUI_STRINGS::PreInit(pwVar1,0x29,0);
  uVar5 = 0;
  do {
    wrUI_STRINGS::AddString(pwVar1,1,uVar5);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x29);
  wrUI_STRINGS::Compact(pwVar1);
  pwVar1 = (wrUI_STRINGS *)(this + 0x1c0);
  wrUI_STRINGS::PreInit(pwVar1,2,0);
  wrUI_STRINGS::Clear(pwVar1);
  uVar5 = 0;
  iVar6 = gsSTRINGS::GetStringId(gsStrings,s_UI_OFF);
  wrUI_STRINGS::AddString(pwVar1,iVar6,uVar5);
  uVar5 = 1;
  iVar6 = gsSTRINGS::GetStringId(gsStrings,s_UI_ON);
  wrUI_STRINGS::AddString(pwVar1,iVar6,uVar5);
  wrUI_STRINGS::Compact(pwVar1);
  pwVar1 = (wrUI_STRINGS *)(this + 0x1e4);
  wrUI_STRINGS::PreInit(pwVar1,2,0);
  wrUI_STRINGS::Clear(pwVar1);
  uVar5 = 0;
  iVar6 = gsSTRINGS::GetStringId(gsStrings,s_UI_OFF);
  wrUI_STRINGS::AddString(pwVar1,iVar6,uVar5);
  uVar5 = 1;
  iVar6 = gsSTRINGS::GetStringId(gsStrings,s_UI_ON);
  wrUI_STRINGS::AddString(pwVar1,iVar6,uVar5);
  wrUI_STRINGS::Compact(pwVar1);
  pwVar1 = (wrUI_STRINGS *)(this + 0x208);
  wrUI_STRINGS::PreInit(pwVar1,2,0);
  wrUI_STRINGS::Clear(pwVar1);
  uVar5 = 0;
  iVar6 = gsSTRINGS::GetStringId(gsStrings,s_UI_OFF);
  wrUI_STRINGS::AddString(pwVar1,iVar6,uVar5);
  uVar5 = 1;
  iVar6 = gsSTRINGS::GetStringId(gsStrings,s_UI_ON);
  wrUI_STRINGS::AddString(pwVar1,iVar6,uVar5);
  wrUI_STRINGS::Compact(pwVar1);
  InitOnOff(this,0xc);
  wrUI_STRINGS::AddString((wrUI_STRINGS *)(this + 0x250),(ushort *)u__,0);
  InitOnOff(this,0xe);
  InitOnOff(this,0xf);
  InitLowHigh(this,0x10);
  InitLowHigh(this,0x11);
  InitLowHigh(this,0x12);
  InitOnOff(this,0x13);
  if ((*(uint *)(vidDriver + 4) & 0x10000) == 0) {
    *(undefined4 *)(this + 0x228) = 1;
    *(undefined4 *)(this + 0x220) = 0;
  }
  if ((*(uint *)(vidDriver + 4) & 0x1000) == 0) {
    *(undefined4 *)(this + 0x198) = 1;
    *(undefined4 *)(this + 400) = 0;
  }
  *(undefined4 *)(this + 0x78) = 0x14;
  wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::ProcessInit
            ((wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *)this,param_1);
  return 1;
}




/* from: wr_ui_video.cpp
   addr: 004937F0 */

int __thiscall wrUI_VIDEO_WINDOW::StartAppearing(wrUI_VIDEO_WINDOW *this,int param_1)

{
  wrUI_TEXT_SCROLL *this_00;
  int iVar1;
  int iVar2;
  wrUI_TEXT_SCROLL *pwVar3;
  int iVar4;
  int iVar5;
  wrUI_VIDEO_WINDOW *pwVar6;
  wrUI_VIDEO_WINDOW *pwVar7;
  int local_8;
  
  if (param_1 != 0) {
    LoadSettings(this);
    iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
    if (*(int *)(this + 0x97c) <= iVar2) {
      iVar2 = *(int *)(this + 0x97c);
    }
    iVar4 = 0;
    if (0 < iVar2) {
      pwVar6 = this + 0x980;
      pwVar7 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
      local_8 = iVar2;
      do {
        (**(code **)(**(int **)pwVar6 + 0x10))(1);
        this_00 = *(wrUI_TEXT_SCROLL **)pwVar6;
        *(wrUI_VIDEO_WINDOW **)(this_00 + 0x138) = pwVar7;
        uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(this_00 + 0x13c),*(int *)(pwVar7 + 0x1c));
        (**(code **)(*(int *)this_00 + 0x10))(*(int *)(*(int *)(this_00 + 0x138) + 0x20) == 0);
        *(undefined4 *)(this_00 + 300) = *(undefined4 *)(*(int *)(this_00 + 0x138) + 0x18);
        if ((*(int *)(*(int *)(this_00 + 0x138) + 0x10) == 1) &&
           (pwVar3 = this_00 + 0x130, *(int *)(this_00 + 0x130) != 0)) {
          iVar4 = 2;
          do {
            iVar1 = *(int *)pwVar3;
            pwVar3 = pwVar3 + 4;
            *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 8;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        wrUI_TEXT_SCROLL::UpdateArrows(this_00);
        pwVar6 = pwVar6 + 4;
        pwVar7 = pwVar7 + 0x24;
        local_8 = local_8 + -1;
        iVar4 = iVar2;
      } while (local_8 != 0);
    }
    if (iVar4 < *(int *)(this + 0x97c)) {
      pwVar6 = this + iVar4 * 4 + 0x980;
      do {
        iVar2 = *(int *)pwVar6;
        *(undefined4 *)(iVar2 + 0x138) = 0;
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x2800;
        (**(code **)(**(int **)pwVar6 + 0x10))(0);
        iVar4 = iVar4 + 1;
        pwVar6 = pwVar6 + 4;
      } while (iVar4 < *(int *)(this + 0x97c));
    }
    iVar4 = *(int *)(this + 0x78);
    iVar2 = *(int *)(this + 0x6c);
    if ((iVar4 == 0) || (iVar2 == -1)) {
LAB_00493957:
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
    }
    else {
      if (iVar2 < iVar4) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = iVar4 + -1;
      }
      iVar1 = *(int *)(this + iVar2 * 0x24 + 0x9c);
      iVar5 = iVar2;
      while (iVar1 != 0) {
        iVar5 = (iVar5 + 1) % iVar4;
        if (iVar5 == iVar2) goto LAB_00493957;
        iVar1 = *(int *)(this + iVar5 * 0x24 + 0x9c);
      }
      *(int *)(this + 0x6c) = iVar5;
    }
  }
  iVar2 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_video.cpp
   addr: 00493970 */

void __thiscall wrUI_VIDEO_WINDOW::OnChildNotify(wrUI_VIDEO_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  undefined *puVar1;
  wrUI_TEXT_SCROLL *this_00;
  int iVar2;
  int iVar3;
  wrUI_VIDEO_WINDOW *pwVar4;
  wrUI_TEXT_SCROLL *pwVar5;
  int iVar6;
  int iVar7;
  wrUI_VIDEO_WINDOW *pwVar8;
  int local_8;
  
  if (*(int *)(param_1 + 4) == 0x42544e43) {
    puVar1 = *(undefined **)(param_1 + 8);
    if (puVar1 == (undefined *)0x414343) {
      ApplySettings(this);
    }
    else if (puVar1 == &DAT_00444546) {
      gsCfgScaleDetect();
      gsCfgConfig2Scale();
      gsCfgConfig2DefVideoRes();
      LoadSettings(this);
      iVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
      if (*(int *)(this + 0x97c) <= iVar3) {
        iVar3 = *(int *)(this + 0x97c);
      }
      iVar6 = 0;
      if (0 < iVar3) {
        pwVar4 = this + 0x980;
        pwVar8 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
        local_8 = iVar3;
        do {
          (**(code **)(**(int **)pwVar4 + 0x10))(1);
          this_00 = *(wrUI_TEXT_SCROLL **)pwVar4;
          *(wrUI_VIDEO_WINDOW **)(this_00 + 0x138) = pwVar8;
          uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(this_00 + 0x13c),*(int *)(pwVar8 + 0x1c));
          (**(code **)(*(int *)this_00 + 0x10))(*(int *)(*(int *)(this_00 + 0x138) + 0x20) == 0);
          *(undefined4 *)(this_00 + 300) = *(undefined4 *)(*(int *)(this_00 + 0x138) + 0x18);
          if ((*(int *)(*(int *)(this_00 + 0x138) + 0x10) == 1) &&
             (pwVar5 = this_00 + 0x130, *(int *)(this_00 + 0x130) != 0)) {
            iVar6 = 2;
            do {
              iVar2 = *(int *)pwVar5;
              pwVar5 = pwVar5 + 4;
              *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) | 8;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          wrUI_TEXT_SCROLL::UpdateArrows(this_00);
          pwVar4 = pwVar4 + 4;
          pwVar8 = pwVar8 + 0x24;
          local_8 = local_8 + -1;
          iVar6 = iVar3;
        } while (local_8 != 0);
      }
      if (iVar6 < *(int *)(this + 0x97c)) {
        pwVar4 = this + iVar6 * 4 + 0x980;
        do {
          iVar3 = *(int *)pwVar4;
          *(undefined4 *)(iVar3 + 0x138) = 0;
          *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x2800;
          (**(code **)(**(int **)pwVar4 + 0x10))(0);
          iVar6 = iVar6 + 1;
          pwVar4 = pwVar4 + 4;
        } while (iVar6 < *(int *)(this + 0x97c));
      }
      wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::SetSelectedRec
                ((wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *)this,
                 *(int *)(this + 0x6c),1);
    }
    else if ((puVar1 == (undefined *)0x4241434b) && (*(int *)(this + 0xa0c) != 0)) {
      apCfgWriteFloat(s_Video,s_Gamma,*(float *)(this + 0xa10));
      gsVideoApplySettings();
    }
  }
  else if ((*(int *)(param_1 + 4) == 0x54534352) && (*(int *)(param_1 + 8) == 0x43484e47)) {
    iVar3 = 0;
    if (0 < *(int *)(this + 0x97c)) {
      pwVar4 = this + 0x980;
      do {
        if (*(int *)param_1 == *(int *)pwVar4) {
          iVar3 = *(int *)(this + 0x74) + iVar3;
          if (iVar3 == 0) {
            UpdateBppList(this);
          }
          else if (iVar3 == 1) {
            UpdateResolutionsList(this);
          }
          else if (iVar3 == 3) {
            *(undefined4 *)(this + 0xa0c) = 1;
            apCfgWriteFloat(s_Video,s_Gamma,
                            (float)*(int *)(this + 0x100) * ___real_3dcccccd + ___real_3f800000);
          }
          break;
        }
        iVar3 = iVar3 + 1;
        pwVar4 = pwVar4 + 4;
      } while (iVar3 < *(int *)(this + 0x97c));
    }
  }
  if (*(int *)(param_1 + 4) != 0x464f4353) {
    uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
    return;
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0x97c)) {
    pwVar4 = this + 0x980;
    while (*(int *)param_1 != *(int *)pwVar4) {
      iVar3 = iVar3 + 1;
      pwVar4 = pwVar4 + 4;
      if (*(int *)(this + 0x97c) <= iVar3) {
        return;
      }
    }
    iVar6 = *(int *)(this + 0x78);
    iVar3 = *(int *)(this + 0x74) + iVar3;
    if ((iVar3 < iVar6) && (*(int *)(param_1 + 8) != 0)) {
      if ((iVar6 != 0) && (iVar3 != -1)) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        iVar2 = *(int *)(this + iVar3 * 0x24 + 0x9c);
        iVar7 = iVar3;
        while( true ) {
          if (iVar2 == 0) {
            *(int *)(this + 0x6c) = iVar7;
            return;
          }
          iVar7 = (iVar7 + 1) % iVar6;
          if (iVar7 == iVar3) break;
          iVar2 = *(int *)(this + iVar7 * 0x24 + 0x9c);
        }
      }
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
    }
  }
  return;
}




/* from: wr_ui_video.cpp
   addr: 00493C60 */

void __thiscall wrUI_VIDEO_WINDOW::LoadSettings(wrUI_VIDEO_WINDOW *this)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  int local_124;
  int local_120;
  int local_11c;
  float local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108 [2];
  byte local_100 [256];
  
  _apCfgReadString((void **)0x0,s_Video,s_VIDEO_Drv,(char *)local_100,0x100);
  local_108[1] = 0;
  local_120 = 0;
  iVar7 = 0;
  if (0 < DAT_0060ee8c) {
    do {
      pbVar8 = local_100;
      pbVar2 = (byte *)(*(int *)(DAT_0060ee94 + local_120 * 4) + 8);
      do {
        bVar1 = *pbVar2;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00493cd1:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00493cd6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00493cd1;
        pbVar2 = pbVar2 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00493cd6:
      iVar7 = local_120;
      if (iVar3 == 0) goto LAB_00493cf0;
      local_120 = local_120 + 1;
    } while (local_120 < DAT_0060ee8c);
    iVar7 = 0;
  }
LAB_00493cf0:
  iVar7 = *(int *)(DAT_0060ee94 + iVar7 * 4);
  iVar3 = 0;
  *(undefined4 *)(this + 0x94) = 0;
  if (0 < *(int *)(this + 0x8c)) {
    piVar4 = (int *)(*(int *)(this + 0x88) + 4);
    do {
      if (*(int *)(DAT_0060ee94 + *piVar4 * 4) == iVar7) {
        *(int *)(this + 0x94) = iVar3;
        break;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar3 < *(int *)(this + 0x8c));
  }
  UpdateBppList(this);
  local_110 = 0x280;
  local_10c = 0x1e0;
  local_114 = 0x10;
  _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_SizeX,&local_110);
  _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_SizeY,&local_10c);
  _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_BPP,&local_114);
  iVar7 = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  if (0 < *(int *)(this + 0xb0)) {
    piVar4 = (int *)(*(int *)(this + 0xac) + 4);
    do {
      if (*piVar4 == local_114) {
        *(int *)(this + 0xb8) = iVar7;
        break;
      }
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar7 < *(int *)(this + 0xb0));
  }
  UpdateResolutionsList(this);
  *(undefined4 *)(this + 0xdc) = 0;
  iVar7 = 0;
  if (0 < *(int *)(this + 0xd4)) {
    piVar4 = (int *)(*(int *)(this + 0xd0) + 4);
    do {
      if (*piVar4 == local_110 * 0x10000 + local_10c) {
        *(int *)(this + 0xdc) = iVar7;
        break;
      }
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar7 < *(int *)(this + 0xd4));
  }
  iVar7 = _apCfgReadFloat((void **)0x0,s_Video,s_Gamma,&local_118);
  if (iVar7 == 0) {
    local_118 = 1.4;
  }
  uVar5 = ftol();
  *(undefined4 *)(this + 0x100) = uVar5;
  *(float *)(this + 0xa10) = local_118;
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseHWLighting,&local_124);
  if (iVar7 == 0) {
    local_124 = 1;
  }
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseDOT3_Diffuse,&local_11c);
  if (iVar7 == 0) {
    local_11c = 1;
  }
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseDOT3_Specular,local_108);
  if (iVar7 == 0) {
    local_108[0] = 1;
    uVar6 = 3;
  }
  else if (local_108[0] == 0) {
    if (local_11c == 0) {
      uVar6 = (uint)(local_124 != 0);
    }
    else {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 3;
  }
  if (*(int *)(this + 0x11c) < (int)uVar6) {
    uVar6 = *(int *)(this + 0x11c) - 1;
  }
  *(uint *)(this + 0x124) = uVar6;
  iVar7 = _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_MaxLod,&local_120);
  if (iVar7 == 0) {
    local_120 = 0;
  }
  *(int *)(this + 0x148) = 2 - local_120;
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Detail,&local_124);
  if (iVar7 == 0) {
    local_124 = 1;
  }
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_DetailCompr,&local_11c);
  if (iVar7 == 0) {
    local_11c = 1;
  }
  if (local_124 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 2 - (uint)(local_11c != 0);
  }
  *(int *)(this + 0x16c) = iVar7;
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_ProjShd,&local_124);
  if (iVar7 == 0) {
    local_124 = 1;
  }
  iVar7 = _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_ProjShdQual,&local_120);
  if (iVar7 == 0) {
    local_120 = 2;
  }
  if (*(int *)(this + 0x198) == 0) {
    if (local_124 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (local_120 != 2) + 1;
    }
    *(int *)(this + 400) = iVar7;
  }
  else {
    *(undefined4 *)(this + 400) = 0;
  }
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LowResTex,&local_124);
  if (iVar7 == 0) {
    local_124 = 0;
  }
  *(uint *)(this + 0x1b4) = (uint)(local_124 == 0);
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Mirror,&local_124);
  if (iVar7 == 0) {
    local_124 = 1;
  }
  *(uint *)(this + 0x1d8) = (uint)(local_124 != 0);
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_MipMapFilter,&local_124);
  if (iVar7 == 0) {
    local_124 = 0;
  }
  *(uint *)(this + 0x1fc) = (uint)(local_124 != 0);
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_FSAA,&local_124);
  if (iVar7 == 0) {
    local_124 = 0;
  }
  if (*(int *)(this + 0x228) == 0) {
    *(uint *)(this + 0x220) = (uint)(local_124 != 0);
  }
  else {
    *(undefined4 *)(this + 0x220) = 0;
  }
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_Wait_VSync,&local_124);
  if (iVar7 == 0) {
    local_124 = 1;
  }
  *(uint *)(this + 0x244) = (uint)(local_124 != 0);
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_PlrLegs,&local_124);
  if (iVar7 == 0) {
    local_124 = 1;
  }
  *(uint *)(this + 0x28c) = (uint)(local_124 != 0);
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_WpnShdr,&local_124);
  if (iVar7 == 0) {
    local_124 = 1;
  }
  *(uint *)(this + 0x2b0) = (uint)(local_124 != 0);
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LowShatterQual,&local_124);
  if (iVar7 == 0) {
    local_124 = 1;
  }
  *(uint *)(this + 0x2d4) = (uint)(local_124 == 0);
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_NoShdUnderLM,&local_124);
  if (iVar7 == 0) {
    local_124 = 0;
  }
  *(uint *)(this + 0x2f8) = (uint)(local_124 == 0);
  iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LowScorchQuality,&local_124);
  if (iVar7 == 0) {
    local_124 = 0;
  }
  *(uint *)(this + 0x31c) = (uint)(local_124 == 0);
  iVar3 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_FlaresEnabled,&local_124);
  iVar7 = 1;
  if (iVar3 != 0) {
    iVar7 = local_124;
  }
  *(uint *)(this + 0x340) = (uint)(iVar7 != 0);
  *(undefined4 *)(this + 0xa0c) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_video.cpp
   addr: 00494210 */

void __thiscall wrUI_VIDEO_WINDOW::ApplySettings(wrUI_VIDEO_WINDOW *this)

{
  int iVar1;
  wrUI_VIDEO_WINDOW *pwVar2;
  uint uVar3;
  wrUI_VIDEO_WINDOW *pwVar4;
  uint uVar5;
  wrUI_VIDEO_WINDOW *pwVar6;
  
  iVar1 = *(int *)(DAT_0060ee94 +
                  *(int *)(*(int *)(this + 0x88) + 4 + *(int *)(this + 0x94) * 8) * 4);
  if (iVar1 != 0) {
    apCfgWriteString(s_Video,s_VIDEO_Drv,(char *)(iVar1 + 8));
  }
  if (*(int *)(this + 0xd4) == 0) {
    uVar3 = 0x280;
    uVar5 = 0x1e0;
  }
  else {
    uVar5 = *(uint *)(*(int *)(this + 0xd0) + 4 + *(int *)(this + 0xdc) * 8);
    uVar3 = uVar5 >> 0x10;
    uVar5 = uVar5 & 0xffff;
  }
  apCfgWriteInt(s_Video,s_VIDEO_SizeX,uVar3);
  apCfgWriteInt(s_Video,s_VIDEO_SizeY,uVar5);
  if (*(int *)(this + 0xb0) == 0) {
    iVar1 = 0x10;
  }
  else {
    iVar1 = *(int *)(*(int *)(this + 0xac) + 4 + *(int *)(this + 0xb8) * 8);
  }
  apCfgWriteInt(s_Video,s_VIDEO_BPP,iVar1);
  apCfgWriteFloat(s_Video,s_Gamma,
                  (float)*(int *)(this + 0x100) * ___real_3dcccccd + ___real_3f800000);
  pwVar2 = this;
  pwVar4 = this;
  pwVar6 = this;
  switch(*(undefined4 *)(this + 0x124)) {
  case 0:
    pwVar2 = (wrUI_VIDEO_WINDOW *)0x0;
    pwVar4 = (wrUI_VIDEO_WINDOW *)0x0;
    pwVar6 = (wrUI_VIDEO_WINDOW *)0x0;
    break;
  case 1:
    pwVar2 = (wrUI_VIDEO_WINDOW *)0x1;
    pwVar4 = (wrUI_VIDEO_WINDOW *)0x0;
    pwVar6 = (wrUI_VIDEO_WINDOW *)0x0;
    break;
  case 2:
    pwVar2 = (wrUI_VIDEO_WINDOW *)0x1;
    pwVar4 = (wrUI_VIDEO_WINDOW *)0x1;
    pwVar6 = (wrUI_VIDEO_WINDOW *)0x0;
    break;
  case 3:
    pwVar2 = (wrUI_VIDEO_WINDOW *)0x1;
    pwVar4 = (wrUI_VIDEO_WINDOW *)0x1;
    pwVar6 = (wrUI_VIDEO_WINDOW *)0x1;
  }
  apCfgWriteBool(s_Video,s_VIDEO_UseHWLighting,(int)pwVar2);
  apCfgWriteBool(s_Video,s_VIDEO_UseDOT3_Diffuse,(int)pwVar4);
  apCfgWriteBool(s_Video,s_VIDEO_UseDOT3_Specular,(int)pwVar6);
  apCfgWriteInt(s_Video,s_VIDEO_MaxLod,2 - *(int *)(this + 0x148));
  iVar1 = *(int *)(this + 0x16c);
  apCfgWriteBool(s_Video,s_VIDEO_Detail,(uint)(iVar1 != 0));
  apCfgWriteBool(s_Video,s_VIDEO_DetailCompr,(uint)(iVar1 == 1));
  if (*(int *)(this + 0x198) == 0) {
    iVar1 = *(int *)(this + 400);
    apCfgWriteBool(s_Video,s_VIDEO_ProjShd,(uint)(iVar1 != 0));
    apCfgWriteInt(s_Video,s_VIDEO_ProjShdQual,(iVar1 != 1) + 2);
  }
  apCfgWriteBool(s_Video,s_VIDEO_LowResTex,1 - *(int *)(this + 0x1b4));
  apCfgWriteBool(s_Video,s_VIDEO_Detail,*(int *)(this + 0x16c));
  if (*(int *)(this + 0x228) == 0) {
    apCfgWriteBool(s_Video,s_VIDEO_FSAA,*(int *)(this + 0x220));
  }
  apCfgWriteBool(s_Video,s_Wait_VSync,*(int *)(this + 0x244));
  apCfgWriteBool(s_Video,s_VIDEO_MipMapFilter,*(int *)(this + 0x1fc));
  apCfgWriteBool(s_Video,s_VIDEO_Mirror,*(int *)(this + 0x1d8));
  apCfgWriteBool(s_Video,s_VIDEO_Mirror,*(int *)(this + 0x1d8));
  apCfgWriteBool(s_Video,s_VIDEO_PlrLegs,*(int *)(this + 0x28c));
  apCfgWriteBool(s_Video,s_VIDEO_WpnShdr,*(int *)(this + 0x2b0));
  apCfgWriteBool(s_Video,s_VIDEO_LowShatterQual,1 - *(int *)(this + 0x2d4));
  apCfgWriteBool(s_Video,s_VIDEO_NoShdUnderLM,1 - *(int *)(this + 0x2f8));
  apCfgWriteBool(s_Video,s_VIDEO_LowScorchQuality,1 - *(int *)(this + 0x31c));
  apCfgWriteBool(s_Video,s_VIDEO_FlaresEnabled,*(int *)(this + 0x340));
  gsVideoApplySettings();
  *(undefined4 *)(this + 0xa0c) = 0;
  return;
}




/* from: wr_ui_video.cpp
   addr: 00494580 */

void __thiscall wrUI_VIDEO_WINDOW::InitAdaptersList(wrUI_VIDEO_WINDOW *this)

{
  wrUI_STRINGS *this_00;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  ushort *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  char local_100 [30];
  undefined1 local_e2;
  
  this_00 = (wrUI_STRINGS *)(this + 0x7c);
  DAT_0060ee8c = vidGetDriverList((vidDRIVER ***)&DAT_0060ee94);
  wrUI_STRINGS::PreInit(this_00,DAT_0060ee8c,DAT_0060ee8c << 5);
  wrUI_STRINGS::Clear(this_00);
  uVar6 = 0;
  if (DAT_0060ee8c < 1) {
LAB_00494679:
    wrUI_STRINGS::Compact(this_00);
    return;
  }
LAB_004945bf:
  pcVar2 = strstr((char *)(*(int *)(DAT_0060ee94 + uVar6 * 4) + 8),s_T_L);
  if (pcVar2 != (char *)0x0) {
    pcVar2 = local_100;
    pcVar3 = (char *)(*(int *)(DAT_0060ee94 + uVar6 * 4) + 0x10c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar2 = local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    do {
      if ((~uVar5 - 1 < 0x1f) ||
         ((pcVar2 = strrchr(local_100,0x20), pcVar2 == (char *)0x0 &&
          (pcVar2 = strrchr(local_100,0x2f), pcVar2 == (char *)0x0)))) goto LAB_0049464c;
      *pcVar2 = '\0';
      uVar5 = 0xffffffff;
      pcVar2 = local_100;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    } while( true );
  }
  goto LAB_0049466a;
LAB_0049464c:
  local_e2 = 0;
  uVar7 = uVar6;
  puVar4 = gsSTRINGS::AsciiToUnicode(gsStrings,local_100);
  wrUI_STRINGS::AddString(this_00,puVar4,uVar7);
LAB_0049466a:
  uVar6 = uVar6 + 1;
  if (DAT_0060ee8c <= (int)uVar6) goto LAB_00494679;
  goto LAB_004945bf;
}




/* from: wr_ui_video.cpp
   addr: 00494690 */

void __thiscall wrUI_VIDEO_WINDOW::UpdateBppList(wrUI_VIDEO_WINDOW *this)

{
  vidDRIVER *this_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  vidMODE *pvVar4;
  int *piVar5;
  int iVar6;
  int local_4;
  
  if (*(int *)(this + 0xb0) == 0) {
    local_4 = 0x10;
  }
  else {
    local_4 = *(int *)(*(int *)(this + 0xac) + 4 + *(int *)(this + 0xb8) * 8);
  }
  this_00 = *(vidDRIVER **)
             (DAT_0060ee94 + *(int *)(*(int *)(this + 0x88) + 4 + *(int *)(this + 0x94) * 8) * 4);
  bVar3 = false;
  bVar1 = false;
  iVar6 = 0;
  bVar2 = bVar1;
  if (0 < *(int *)(this_00 + 0x244)) {
    do {
      pvVar4 = vidDRIVER::operator[](this_00,iVar6);
      bVar2 = bVar1;
      if (((byte)*pvVar4 & 1) != 0) {
        pvVar4 = vidDRIVER::operator[](this_00,iVar6);
        if (*(int *)(pvVar4 + 0x10) == 0x10) {
          bVar1 = bVar3;
          bVar2 = true;
        }
        else {
          pvVar4 = vidDRIVER::operator[](this_00,iVar6);
          if (*(int *)(pvVar4 + 0x10) != 0x20) goto LAB_00494726;
          bVar3 = true;
        }
        if (bVar1) break;
      }
LAB_00494726:
      bVar1 = bVar2;
      iVar6 = iVar6 + 1;
      bVar2 = bVar1;
    } while (iVar6 < *(int *)(this_00 + 0x244));
  }
  wrUI_STRINGS::Clear((wrUI_STRINGS *)(this + 0xa0));
  if (bVar2) {
    wrUI_STRINGS::AddString((wrUI_STRINGS *)(this + 0xa0),(ushort *)u_16,0x10);
  }
  if (bVar3) {
    wrUI_STRINGS::AddString((wrUI_STRINGS *)(this + 0xa0),(ushort *)u_32,0x20);
  }
  iVar6 = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  if (0 < *(int *)(this + 0xb0)) {
    piVar5 = (int *)(*(int *)(this + 0xac) + 4);
    while (*piVar5 != local_4) {
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 2;
      if (*(int *)(this + 0xb0) <= iVar6) {
        UpdateResolutionsList(this);
        return;
      }
    }
    *(int *)(this + 0xb8) = iVar6;
  }
  UpdateResolutionsList(this);
  return;
}




/* from: wr_ui_video.cpp
   addr: 004947E0 */

void __thiscall wrUI_VIDEO_WINDOW::InitResolutionsList(wrUI_VIDEO_WINDOW *this)

{
  vidDRIVER *this_00;
  vidMODE *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  if (0 < DAT_0060ee8c) {
    do {
      iVar3 = 0;
      iVar2 = 0;
      iVar4 = 0;
      this_00 = *(vidDRIVER **)(DAT_0060ee94 + local_8 * 4);
      if (0 < *(int *)(this_00 + 0x244)) {
        do {
          pvVar1 = vidDRIVER::operator[](this_00,iVar4);
          if (((byte)*pvVar1 & 1) != 0) {
            pvVar1 = vidDRIVER::operator[](this_00,iVar4);
            if (*(int *)(pvVar1 + 0x10) == 0x10) {
              iVar2 = iVar2 + 1;
            }
            else {
              iVar3 = iVar3 + 1;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(this_00 + 0x244));
      }
      if (local_c < iVar2) {
        local_c = iVar2;
      }
      if (local_c < iVar3) {
        local_c = iVar3;
      }
      local_8 = local_8 + 1;
    } while (local_8 < DAT_0060ee8c);
  }
  wrUI_STRINGS::PreInit((wrUI_STRINGS *)(this + 0xc4),0x10,0x100);
  return;
}




/* from: wr_ui_video.cpp
   addr: 00494890 */

void __thiscall wrUI_VIDEO_WINDOW::UpdateResolutionsList(wrUI_VIDEO_WINDOW *this)

{
  vidDRIVER *this_00;
  wrUI_TEXT_SCROLL *this_01;
  int iVar1;
  vidMODE *pvVar2;
  wrUI_TEXT_SCROLL *pwVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  wrUI_VIDEO_WINDOW *pwVar8;
  int iVar9;
  wrUI_VIDEO_WINDOW *pwVar10;
  undefined4 uVar11;
  int local_90;
  uint local_84;
  wchar_t local_80 [64];
  
  if (*(int *)(this + 0xd4) == 0) {
    uVar7 = 0x280;
    local_84 = 0x1e0;
  }
  else {
    local_84 = *(uint *)(*(int *)(this + 0xd0) + 4 + *(int *)(this + 0xdc) * 8);
    uVar7 = local_84 >> 0x10;
    local_84 = local_84 & 0xffff;
  }
  wrUI_STRINGS::Clear((wrUI_STRINGS *)(this + 0xc4));
  this_00 = *(vidDRIVER **)
             (DAT_0060ee94 + *(int *)(*(int *)(this + 0x88) + 4 + *(int *)(this + 0x94) * 8) * 4);
  if (*(int *)(this + 0xb0) == 0) {
    local_90 = 0x10;
  }
  else {
    local_90 = *(int *)(*(int *)(this + 0xac) + 4 + *(int *)(this + 0xb8) * 8);
  }
  iVar9 = 0;
  if (0 < *(int *)(this_00 + 0x244)) {
    do {
      pvVar2 = vidDRIVER::operator[](this_00,iVar9);
      if ((((((byte)*pvVar2 & 1) != 0) &&
           (pvVar2 = vidDRIVER::operator[](this_00,iVar9), *(int *)(pvVar2 + 0x10) == local_90)) &&
          (pvVar2 = vidDRIVER::operator[](this_00,iVar9), 0x27f < *(int *)(pvVar2 + 8))) &&
         (pvVar2 = vidDRIVER::operator[](this_00,iVar9), 0x1df < *(int *)(pvVar2 + 0xc))) {
        pvVar2 = vidDRIVER::operator[](this_00,iVar9);
        uVar11 = *(undefined4 *)(pvVar2 + 0xc);
        pvVar2 = vidDRIVER::operator[](this_00,iVar9);
        swprintf(local_80,u__ix_i,*(undefined4 *)(pvVar2 + 8),uVar11);
        pvVar2 = vidDRIVER::operator[](this_00,iVar9);
        iVar5 = *(int *)(pvVar2 + 8);
        pvVar2 = vidDRIVER::operator[](this_00,iVar9);
        wrUI_STRINGS::AddString
                  ((wrUI_STRINGS *)(this + 0xc4),(ushort *)local_80,
                   iVar5 * 0x10000 + *(int *)(pvVar2 + 0xc));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(this_00 + 0x244));
  }
  iVar9 = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  if (0 < *(int *)(this + 0xd4)) {
    piVar4 = (int *)(*(int *)(this + 0xd0) + 4);
    do {
      if (*piVar4 == uVar7 * 0x10000 + local_84) {
        *(int *)(this + 0xdc) = iVar9;
        break;
      }
      iVar9 = iVar9 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar9 < *(int *)(this + 0xd4));
  }
  iVar9 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x97c) <= iVar9) {
    iVar9 = *(int *)(this + 0x97c);
  }
  iVar5 = 0;
  if (0 < iVar9) {
    pwVar10 = this + 0x980;
    pwVar8 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
    local_90 = iVar9;
    do {
      (**(code **)(**(int **)pwVar10 + 0x10))(1);
      this_01 = *(wrUI_TEXT_SCROLL **)pwVar10;
      *(wrUI_VIDEO_WINDOW **)(this_01 + 0x138) = pwVar8;
      uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(this_01 + 0x13c),*(int *)(pwVar8 + 0x1c));
      (**(code **)(*(int *)this_01 + 0x10))(*(int *)(*(int *)(this_01 + 0x138) + 0x20) == 0);
      *(undefined4 *)(this_01 + 300) = *(undefined4 *)(*(int *)(this_01 + 0x138) + 0x18);
      if ((*(int *)(*(int *)(this_01 + 0x138) + 0x10) == 1) &&
         (pwVar3 = this_01 + 0x130, *(int *)(this_01 + 0x130) != 0)) {
        iVar5 = 2;
        do {
          iVar1 = *(int *)pwVar3;
          pwVar3 = pwVar3 + 4;
          *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 8;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      wrUI_TEXT_SCROLL::UpdateArrows(this_01);
      pwVar10 = pwVar10 + 4;
      pwVar8 = pwVar8 + 0x24;
      local_90 = local_90 + -1;
      iVar5 = iVar9;
    } while (local_90 != 0);
  }
  if (iVar5 < *(int *)(this + 0x97c)) {
    pwVar10 = this + iVar5 * 4 + 0x980;
    do {
      iVar9 = *(int *)pwVar10;
      *(undefined4 *)(iVar9 + 0x138) = 0;
      *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) | 0x2800;
      (**(code **)(**(int **)pwVar10 + 0x10))(0);
      iVar5 = iVar5 + 1;
      pwVar10 = pwVar10 + 4;
    } while (iVar5 < *(int *)(this + 0x97c));
  }
  iVar5 = *(int *)(this + 0x78);
  iVar9 = *(int *)(this + 0x6c);
  if ((iVar5 != 0) && (iVar9 != -1)) {
    if (iVar9 < iVar5) {
      if (iVar9 < 0) {
        iVar9 = 0;
      }
    }
    else {
      iVar9 = iVar5 + -1;
    }
    iVar1 = *(int *)(this + iVar9 * 0x24 + 0x9c);
    iVar6 = iVar9;
    while( true ) {
      if (iVar1 == 0) {
        *(int *)(this + 0x6c) = iVar6;
        return;
      }
      iVar6 = (iVar6 + 1) % iVar5;
      if (iVar6 == iVar9) break;
      iVar1 = *(int *)(this + iVar6 * 0x24 + 0x9c);
    }
  }
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  return;
}




/* from: wr_ui_video.cpp
   addr: 00494B80 */

void __thiscall wrUI_VIDEO_WINDOW::InitOnOff(wrUI_VIDEO_WINDOW *this,int param_1)

{
  wrUI_STRINGS *this_00;
  int iVar1;
  ulong uVar2;
  
  this_00 = (wrUI_STRINGS *)(this + param_1 * 0x24 + 0x7c);
  wrUI_STRINGS::PreInit(this_00,2,0);
  wrUI_STRINGS::Clear(this_00);
  uVar2 = 0;
  iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_OFF);
  wrUI_STRINGS::AddString(this_00,iVar1,uVar2);
  uVar2 = 1;
  iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_ON);
  wrUI_STRINGS::AddString(this_00,iVar1,uVar2);
  wrUI_STRINGS::Compact(this_00);
  return;
}




/* from: wr_ui_video.cpp
   addr: 00494BE0 */

void __thiscall wrUI_VIDEO_WINDOW::InitLowHigh(wrUI_VIDEO_WINDOW *this,int param_1)

{
  wrUI_STRINGS *this_00;
  int iVar1;
  ulong uVar2;
  
  this_00 = (wrUI_STRINGS *)(this + param_1 * 0x24 + 0x7c);
  wrUI_STRINGS::PreInit(this_00,2,0);
  wrUI_STRINGS::Clear(this_00);
  uVar2 = 0;
  iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_LOW);
  wrUI_STRINGS::AddString(this_00,iVar1,uVar2);
  uVar2 = 1;
  iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_HIGH);
  wrUI_STRINGS::AddString(this_00,iVar1,uVar2);
  wrUI_STRINGS::Compact(this_00);
  return;
}

