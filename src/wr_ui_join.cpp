
/* from: wr_ui_join.cpp
   addr: 0048CB30 */

void __thiscall wrUI_JOIN_INFO::Init(wrUI_JOIN_INFO *this,objOBJ *param_1)

{
  uiAREA::Init((uiAREA *)this,param_1);
  uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),0x5c000000);
  qsort(*(void **)(this + 0x118),*(size_t *)(this + 0x11c),0xac,_compareRectX);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8006;
  *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 0x10;
  return;
}




/* WARNING: Type propagation algorithm not settling */
/* from: wr_ui_join.cpp
   addr: 0048CB90 */

void __thiscall wrUI_JOIN_INFO::SetRecord(wrUI_JOIN_INFO *this,wrUI_JOIN_RECORD *param_1)

{
  uiRENDER_ELEM *this_00;
  wrUI_JOIN_INFO wVar1;
  bool bVar2;
  size_t sVar3;
  float *pfVar4;
  ushort *puVar5;
  int iVar6;
  gsSTRINGS *this_01;
  ulong uVar7;
  gsSTRINGS *pgVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  float local_138;
  wrUI_JOIN_INFO *local_134;
  int local_130;
  gsSTRINGS local_12c [32];
  char local_10c [16];
  ushort local_fc [3];
  undefined2 uStack_f6;
  undefined1 local_f4 [160];
  gsMP_SERVER_INFO local_54 [64];
  undefined4 local_14;
  undefined4 local_10;
  
  local_130 = 0x7b;
  pgVar8 = local_12c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pgVar8 = 0;
    pgVar8 = pgVar8 + 4;
  }
  local_10c[0] = '\0';
  local_10c[1] = '\0';
  local_10c[2] = '\0';
  local_10c[3] = '\0';
  local_10c[4] = '\0';
  local_10c[5] = '\0';
  local_10c[6] = '\0';
  local_10c[7] = '\0';
  this_00 = (uiRENDER_ELEM *)(this + 0x6c);
  local_10c[8] = '\0';
  local_10c[9] = '\0';
  local_10c[10] = '\0';
  local_10c[0xb] = '\0';
  local_10c[0xc] = '\0';
  local_10c[0xd] = '\0';
  local_10c[0xe] = '\0';
  local_10c[0xf] = '\0';
  iVar6 = gsMP_NETWORK::Browser_IsServerIdValid(gsSysNetwork,*(int *)param_1);
  if (iVar6 == 0) {
    iVar6 = 0;
    do {
      uiRENDER_ELEM::SetTextW
                ((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar6),(ushort *)u_,0x7fffffff);
      iVar6 = iVar6 + 0xac;
    } while (iVar6 < 0x204);
    return;
  }
  gsMP_NETWORK::Browser_GetServerInfo(gsSysNetwork,*(int *)param_1,local_54);
  local_138 = 7.28675e-44;
  gsMP_NETWORK::Browser_GetServerMainData(gsSysNetwork,*(int *)param_1,&local_130,(int *)&local_138)
  ;
  if (0x10000000 < local_130) {
    memmove(local_12c,&local_130,(size_t)local_138);
    local_130 = 0;
  }
  wVar1 = this[0x117];
  swprintf((wchar_t *)local_f4,u_v_i__i__S,(local_130 + -0x17) / 100,(local_130 + -0x17) % 100,
           local_54);
  local_134 = this + 0x58;
  local_138 = *(float *)(*(int *)(this + 0x118) + 0x4c) - *(float *)local_134;
  sVar3 = wcslen((wchar_t *)local_f4);
  puVar9 = &uStack_f6 + sVar3;
  bVar2 = false;
  if (local_f4 < puVar9) {
    do {
      pfVar4 = (float *)uiFONT::GetStringSizeW
                                  (*(uiFONT **)(this + 0xfc),local_fc,(m2dV *)local_f4,
                                   (int)(this + 0x108));
      if (*pfVar4 <= local_138) {
        if (!bVar2) goto LAB_0048ccfd;
        break;
      }
      *puVar9 = 0;
      puVar9 = puVar9 + -1;
      bVar2 = true;
    } while (local_f4 < puVar9);
    wcscat((wchar_t *)local_f4,u____);
  }
LAB_0048ccfd:
  uiRENDER_ELEM::SetTextW(this_00,(ushort *)local_f4,0x7fffffff);
  uVar7 = (uint)(byte)wVar1 << 0x18;
  if (local_130 != 0x7b) {
    uVar7 = uVar7 | 0x640000;
  }
  uiRENDER_INFO::SetColorText((uiRENDER_INFO *)this_00,uVar7);
  swprintf((wchar_t *)local_f4,u__i__i,local_10,local_14);
  uiRENDER_ELEM::SetTextW(*(uiRENDER_ELEM **)(this + 0x118),(ushort *)local_f4,0x7fffffff);
  iVar6 = gsSTRINGS::GetStringIdFmt(this_01,(char *)gsStrings,s_GAME_MP_MODE_ABB__s,local_10c);
  if (iVar6 == 0) {
    gsSTRINGS::AsciiToUnicode(gsStrings,local_10c,(ushort *)local_f4,0x50);
    iVar11 = *(int *)(this + 0x118);
    iVar10 = 0x7fffffff;
    puVar5 = (ushort *)local_f4;
  }
  else {
    iVar11 = *(int *)(this + 0x118);
    iVar10 = 0x7fffffff;
    puVar5 = gsSTRINGS::GetStringById(gsStrings,iVar6);
  }
  uiRENDER_ELEM::SetTextW((uiRENDER_ELEM *)(iVar11 + 0xac),puVar5,iVar10);
  iVar6 = gsSTRINGS::GetStringIdFmt(local_12c,(char *)gsStrings,s_GAME_MP_MAP__s,local_12c);
  if (iVar6 == 0) {
    iVar6 = *(int *)(this + 0x118);
    iVar11 = 0x7fffffff;
    puVar5 = gsSTRINGS::AsciiToUnicode(gsStrings,(char *)local_12c);
    uiRENDER_ELEM::SetTextW((uiRENDER_ELEM *)(iVar6 + 0x158),puVar5,iVar11);
    uiRENDER_INFO::CalcBBox((uiRENDER_INFO *)this_00,(uiBOX *)local_134);
    return;
  }
  uiRENDER_ELEM::SetTextId((uiRENDER_ELEM *)(*(int *)(this + 0x118) + 0x158),iVar6);
  uiRENDER_INFO::CalcBBox((uiRENDER_INFO *)this_00,(uiBOX *)local_134);
  return;
}




/* from: wr_ui_join.cpp
   addr: 0048CE90 */

void __thiscall wrUI_JOIN_INFO::ClearRecord(wrUI_JOIN_INFO *this)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x7fffffff;
  puVar1 = gsSTRINGS::GetStringById(gsStrings,1);
  uiRENDER_ELEM::SetTextW((uiRENDER_ELEM *)(this + 0x6c),puVar1,iVar3);
  iVar3 = 0;
  if (0 < *(int *)(this + 0x11c)) {
    iVar2 = 0;
    do {
      uiRENDER_ELEM::SetTextW
                ((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar2),(ushort *)u_,0x7fffffff);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xac;
    } while (iVar3 < *(int *)(this + 0x11c));
  }
  return;
}




/* from: wr_ui_join.cpp
   addr: 0048CEF0 */

int __thiscall wrUI_JOIN_WINDOW::StartAppearing(wrUI_JOIN_WINDOW *this,int param_1)

{
  int iVar1;
  ushort *puVar2;
  uiELEMENT *this_00;
  wrUI_JOIN_WINDOW *pwVar3;
  int iVar4;
  int iVar5;
  wrUI_JOIN_WINDOW *pwVar6;
  float fVar7;
  int local_48;
  wchar_t awStack_40 [32];
  
  if (param_1 != 0) {
    *(undefined4 *)(this + 0x78) = 0;
    iVar1 = -*(int *)(this + 0x74);
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    if (*(int *)(this + 0x17c) <= iVar1) {
      iVar1 = *(int *)(this + 0x17c);
    }
    local_48 = 0;
    if (0 < iVar1) {
      pwVar6 = this + 0x180;
      pwVar3 = this + *(int *)(this + 0x74) * 4 + 0x7c;
      iVar4 = iVar1;
      do {
        (**(code **)(**(int **)pwVar6 + 0x10))(1);
        wrUI_JOIN_INFO::SetRecord(*(wrUI_JOIN_INFO **)pwVar6,(wrUI_JOIN_RECORD *)pwVar3);
        pwVar6 = pwVar6 + 4;
        pwVar3 = (wrUI_JOIN_WINDOW *)((wrUI_JOIN_RECORD *)pwVar3 + 4);
        iVar4 = iVar4 + -1;
        local_48 = iVar1;
      } while (iVar4 != 0);
    }
    if (local_48 < *(int *)(this + 0x17c)) {
      pwVar6 = this + local_48 * 4 + 0x180;
      do {
        iVar1 = *(int *)pwVar6;
        iVar4 = 0x7fffffff;
        puVar2 = gsSTRINGS::GetStringById(gsStrings,1);
        uiRENDER_ELEM::SetTextW((uiRENDER_ELEM *)(iVar1 + 0x6c),puVar2,iVar4);
        iVar4 = 0;
        if (0 < *(int *)(iVar1 + 0x11c)) {
          iVar5 = 0;
          do {
            uiRENDER_ELEM::SetTextW
                      ((uiRENDER_ELEM *)(*(int *)(iVar1 + 0x118) + iVar5),(ushort *)u_,0x7fffffff);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 0xac;
          } while (iVar4 < *(int *)(iVar1 + 0x11c));
        }
        (**(code **)(**(int **)pwVar6 + 0x10))(0);
        local_48 = local_48 + 1;
        pwVar6 = pwVar6 + 4;
      } while (local_48 < *(int *)(this + 0x17c));
    }
    wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
              ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
               *(int *)(this + 0x6c),1);
    fVar7 = gsMP_NETWORK::Drv_GetRefreshInterval(gsSysNetwork);
    *(float *)(this + 0x20c) = fVar7;
    swprintf(awStack_40,u_v_i__i,1,0);
    this_00 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_version);
    uiAREA::SetTextW((uiAREA *)this_00,(ushort *)awStack_40,0x7fffffff);
    iVar1 = 0;
    if (0 < *(int *)(this + 0x17c)) {
      pwVar6 = this + 0x180;
      do {
        if (iVar1 == *(int *)(this + 0x6c) - *(int *)(this + 0x74)) {
          fVar7 = 207.0;
        }
        else {
          fVar7 = 92.0;
        }
        uiRENDER_INFO::SetAlphaText((uiRENDER_INFO *)(*(int *)pwVar6 + 0x6c),fVar7);
        iVar1 = iVar1 + 1;
        pwVar6 = pwVar6 + 4;
      } while (iVar1 < *(int *)(this + 0x17c));
    }
  }
  iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_join.cpp
   addr: 0048D0A0 */

void __thiscall wrUI_JOIN_WINDOW::OnChildNotify(wrUI_JOIN_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  wrUI_JOIN_WINDOW *pwVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0x42544e43) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0x4241434b) {
      gsMP_NETWORK::Browser_Stop(gsSysNetwork,0);
      (**(code **)(*(int *)uiSystem + 0x10))(s_setup_player,0);
    }
    else if (iVar2 == 0x4a4f494e) {
      Join(this);
    }
    else if (iVar2 == 0x52454652) {
      fVar3 = gsMP_NETWORK::Drv_GetRefreshInterval(gsSysNetwork);
      *(float *)(this + 0x20c) = fVar3;
      gsMP_NETWORK::Browser_RefreshServers(gsSysNetwork);
    }
  }
  else {
    if (iVar2 == 0x44424c43) {
      if (*(int *)(param_1 + 8) != 0x494e464f) {
        return;
      }
      Join(this);
      return;
    }
    if (iVar2 == 0x464f4353) {
      iVar2 = 0;
      if (0 < *(int *)(this + 0x17c)) {
        pwVar1 = this + 0x180;
        do {
          if (*(int *)param_1 == *(int *)pwVar1) {
            iVar2 = *(int *)(this + 0x74) + iVar2;
            if ((iVar2 < *(int *)(this + 0x78)) && (*(int *)(param_1 + 8) != 0)) {
              if ((*(int *)(this + 0x78) == 0) || (iVar2 == -1)) {
                *(undefined4 *)(this + 0x6c) = 0xffffffff;
              }
              else {
                if (iVar2 < 0) {
                  iVar2 = 0;
                }
                *(int *)(this + 0x6c) = iVar2;
              }
            }
            break;
          }
          iVar2 = iVar2 + 1;
          pwVar1 = pwVar1 + 4;
        } while (iVar2 < *(int *)(this + 0x17c));
      }
      iVar2 = 0;
      if (*(int *)(this + 0x17c) < 1) {
        return;
      }
      pwVar1 = this + 0x180;
      do {
        if (iVar2 == *(int *)(this + 0x6c) - *(int *)(this + 0x74)) {
          fVar3 = 207.0;
        }
        else {
          fVar3 = 92.0;
        }
        uiRENDER_INFO::SetAlphaText((uiRENDER_INFO *)(*(int *)pwVar1 + 0x6c),fVar3);
        iVar2 = iVar2 + 1;
        pwVar1 = pwVar1 + 4;
      } while (iVar2 < *(int *)(this + 0x17c));
      return;
    }
  }
  if (*(int *)(param_1 + 4) != 0x464f4353) {
    uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
    return;
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x17c)) {
    pwVar1 = this + 0x180;
    while (*(int *)param_1 != *(int *)pwVar1) {
      iVar2 = iVar2 + 1;
      pwVar1 = pwVar1 + 4;
      if (*(int *)(this + 0x17c) <= iVar2) {
        return;
      }
    }
    iVar2 = *(int *)(this + 0x74) + iVar2;
    if ((iVar2 < *(int *)(this + 0x78)) && (*(int *)(param_1 + 8) != 0)) {
      if ((*(int *)(this + 0x78) != 0) && (iVar2 != -1)) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        *(int *)(this + 0x6c) = iVar2;
        return;
      }
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
    }
  }
  return;
}




/* from: wr_ui_join.cpp
   addr: 0048D260 */

void __thiscall wrUI_JOIN_WINDOW::Join(wrUI_JOIN_WINDOW *this)

{
  gsSTRINGS *pgVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  size_t local_38;
  int local_34;
  undefined4 local_30 [8];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_34 = 0x7b;
  puVar5 = local_30;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar4 = *(int *)(this + 0x6c);
  if ((-1 < iVar4) && (iVar4 < *(int *)(this + 0x78))) {
    local_38 = 0x34;
    gsMP_NETWORK::Browser_GetServerMainData
              (gsSysNetwork,*(int *)(this + iVar4 * 4 + 0x7c),&local_34,(int *)&local_38);
    if (local_34 < 0x10000001) {
      if (local_34 == 0x7b) {
        gsMP_NETWORK::Browser_Stop(gsSysNetwork,1);
        gsMP_NETWORK::Client_JoinBrowsedGame
                  (gsSysNetwork,*(int *)(this + *(int *)(this + 0x6c) * 4 + 0x7c));
        (**(code **)(*(int *)uiSystem + 0x10))(s_mp_wait_join,8);
        return;
      }
    }
    else {
      memmove(local_30,&local_34,local_38);
      local_34 = 0;
    }
    pgVar1 = gsStrings;
    iVar4 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_SERVER_VERSION);
    puVar2 = gsSTRINGS::GetStringById(pgVar1,iVar4);
    pgVar1 = gsStrings;
    iVar4 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERROR);
    puVar3 = gsSTRINGS::GetStringById(pgVar1,iVar4);
    (**(code **)(*(int *)uiSystem + 0x14))(puVar3,puVar2,0,0,0,*(int *)(this + 8) + 0x18);
  }
  return;
}




/* from: wr_ui_join.cpp
   addr: 0048D3B0 */

int __thiscall wrUI_JOIN_WINDOW::ProcessUpdate(wrUI_JOIN_WINDOW *this,void *param_1)

{
  gsSTRINGS *pgVar1;
  int iVar2;
  char *pcVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  gsSTRINGS *this_00;
  int iVar7;
  wrUI_JOIN_WINDOW *pwVar8;
  wrUI_JOIN_WINDOW *pwVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_8;
  
  if ((*(uint *)(this + 4) & 0x140) == 0) {
    iVar2 = gsMP_NETWORK::Browser_IsError(gsSysNetwork);
    if (iVar2 == 0) {
      iVar2 = gsMP_NETWORK::Browser_IsStarted(gsSysNetwork);
      pgVar1 = gsStrings;
      if (iVar2 == 0) {
        iVar2 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_SERVER_LIST_ERROR);
        puVar4 = gsSTRINGS::GetStringById(pgVar1,iVar2);
        pcVar3 = s_connection;
        uVar14 = 0;
        uVar13 = 0;
        iVar2 = *(int *)uiSystem;
        uVar12 = 0;
        iVar5 = gsSTRINGS::GetStringId(pgVar1,s_UI_ERR_SERVER_LIST_DISCONNECTED);
        puVar6 = gsSTRINGS::GetStringById(pgVar1,iVar5);
        (**(code **)(iVar2 + 0x14))(puVar4,puVar6,uVar12,uVar13,uVar14,pcVar3);
      }
      else {
        iVar2 = gsMP_NETWORK::Browser_IsServerListUpdated(gsSysNetwork);
        if (iVar2 == 0) {
          iVar2 = m3dUpdateTimeField((float *)(this + 0x20c),gsElapsedTime);
          if (iVar2 != 0) {
            gsMP_NETWORK::Browser_RefreshServers(gsSysNetwork);
            fVar11 = gsMP_NETWORK::Drv_GetRefreshInterval(gsSysNetwork);
            *(float *)(this + 0x20c) = fVar11;
          }
        }
        else {
          iVar2 = *(int *)(this + 0x6c);
          if ((iVar2 < 0) || (*(int *)(this + 0x78) <= iVar2)) {
            iVar2 = -1;
          }
          else {
            iVar2 = *(int *)(this + iVar2 * 4 + 0x7c);
          }
          iVar10 = 0;
          iVar5 = gsMP_NETWORK::Browser_GetNextServer(gsSysNetwork,-1);
          if (iVar5 != -1) {
            pwVar8 = this + 0x7c;
            do {
              if (0x40 < iVar10) break;
              *(int *)pwVar8 = iVar5;
              if (iVar5 == iVar2) {
                iVar7 = *(int *)(this + 0x78);
                if ((iVar7 == 0) || (iVar10 == -1)) {
                  *(undefined4 *)(this + 0x6c) = 0xffffffff;
                }
                else if (iVar10 < iVar7) {
                  iVar7 = iVar10;
                  if (iVar10 < 0) {
                    iVar7 = 0;
                  }
                  *(int *)(this + 0x6c) = iVar7;
                }
                else {
                  *(int *)(this + 0x6c) = iVar7 + -1;
                }
              }
              iVar10 = iVar10 + 1;
              pwVar8 = pwVar8 + 4;
              iVar5 = gsMP_NETWORK::Browser_GetNextServer(gsSysNetwork,iVar5);
            } while (iVar5 != -1);
          }
          if (iVar10 != *(int *)(this + 0x78)) {
            iVar2 = iVar10 - *(int *)(this + 0x17c);
            *(int *)(this + 0x78) = iVar10;
            if (iVar2 < 0) {
              iVar2 = 0;
            }
            wrUI_SCROLL_BAR::SetWindow
                      (*(wrUI_SCROLL_BAR **)(this + 0x200),(wrUI_WINDOW *)this,iVar2,1);
            if (iVar10 == 1) {
              iVar5 = *(int *)(this + 0x78);
              iVar2 = 0;
              if (iVar5 == 0) {
                *(undefined4 *)(this + 0x6c) = 0xffffffff;
              }
              else {
                if (iVar5 < 1) {
                  iVar2 = iVar5 + -1;
                }
                *(int *)(this + 0x6c) = iVar2;
              }
            }
          }
          iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
          if (*(int *)(this + 0x17c) <= iVar2) {
            iVar2 = *(int *)(this + 0x17c);
          }
          local_8 = 0;
          if (0 < iVar2) {
            pwVar8 = this + 0x180;
            pwVar9 = this + *(int *)(this + 0x74) * 4 + 0x7c;
            iVar5 = iVar2;
            do {
              (**(code **)(**(int **)pwVar8 + 0x10))(1);
              wrUI_JOIN_INFO::SetRecord(*(wrUI_JOIN_INFO **)pwVar8,(wrUI_JOIN_RECORD *)pwVar9);
              pwVar8 = pwVar8 + 4;
              pwVar9 = (wrUI_JOIN_WINDOW *)((wrUI_JOIN_RECORD *)pwVar9 + 4);
              iVar5 = iVar5 + -1;
              local_8 = iVar2;
            } while (iVar5 != 0);
          }
          if (local_8 < *(int *)(this + 0x17c)) {
            pwVar8 = this + local_8 * 4 + 0x180;
            do {
              iVar2 = *(int *)pwVar8;
              iVar5 = 0x7fffffff;
              puVar4 = gsSTRINGS::GetStringById(gsStrings,1);
              uiRENDER_ELEM::SetTextW((uiRENDER_ELEM *)(iVar2 + 0x6c),puVar4,iVar5);
              iVar5 = 0;
              if (0 < *(int *)(iVar2 + 0x11c)) {
                iVar10 = 0;
                do {
                  uiRENDER_ELEM::SetTextW
                            ((uiRENDER_ELEM *)(*(int *)(iVar2 + 0x118) + iVar10),(ushort *)u_,
                             0x7fffffff);
                  iVar5 = iVar5 + 1;
                  iVar10 = iVar10 + 0xac;
                } while (iVar5 < *(int *)(iVar2 + 0x11c));
              }
              (**(code **)(**(int **)pwVar8 + 0x10))(0);
              local_8 = local_8 + 1;
              pwVar8 = pwVar8 + 4;
            } while (local_8 < *(int *)(this + 0x17c));
          }
          wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
                    ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
                     *(int *)(this + 0x6c),1);
          iVar2 = *(int *)(this + 0x6c);
          if ((iVar2 != -1) &&
             (((iVar5 = *(int *)(this + 0x74), iVar2 < iVar5 && (0 < iVar5)) ||
              ((iVar5 + *(int *)(this + 0x17c) <= iVar2 &&
               (iVar5 < *(int *)(this + 0x78) - *(int *)(this + 0x17c))))))) {
            *(undefined4 *)(this + 0x204) = 0x3ca3d70a;
            *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
          }
        }
      }
    }
    else {
      pcVar3 = gsMP_NETWORK::Browser_GetStatus(gsSysNetwork);
      iVar2 = gsSTRINGS::GetStringIdFmt(this_00,(char *)gsStrings,s_UI_NET_STATUS__s,pcVar3);
      if (iVar2 == 0) {
        pcVar3 = gsMP_NETWORK::Browser_GetStatus(gsSysNetwork);
        puVar4 = gsSTRINGS::AsciiToUnicode(gsStrings,pcVar3);
      }
      else {
        puVar4 = gsSTRINGS::GetStringById(gsStrings,iVar2);
      }
      pgVar1 = gsStrings;
      pcVar3 = s_connection;
      uVar14 = 0;
      iVar2 = *(int *)uiSystem;
      uVar13 = 0;
      uVar12 = 0;
      iVar5 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_SERVER_LIST_ERROR);
      puVar6 = gsSTRINGS::GetStringById(pgVar1,iVar5);
      (**(code **)(iVar2 + 0x14))(puVar6,puVar4,uVar12,uVar13,uVar14,pcVar3);
    }
  }
  iVar2 = wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO>::ProcessUpdate
                    ((wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *)this,
                     param_1);
  return iVar2;
}




/* from: wr_ui_join.cpp
   addr: 0048D700 */

void __thiscall
wrUI_WAITBROWSER_WND::OnChildNotify(wrUI_WAITBROWSER_WND *this,uiCHILD_NOTIFY *param_1)

{
  if ((*(int *)(param_1 + 4) == 0x42544e43) && (*(int *)(param_1 + 8) == 0x4241434b)) {
    gsMP_NETWORK::Browser_Stop(gsSysNetwork,0);
    (**(code **)(*(int *)uiSystem + 0x10))(s_connection,0);
    return;
  }
  uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
  return;
}




/* from: wr_ui_join.cpp
   addr: 0048D750 */

int __thiscall wrUI_WAITBROWSER_WND::StartAppearing(wrUI_WAITBROWSER_WND *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  
  if (param_1 != 0) {
    fVar3 = 0.0;
    pcVar1 = gsMP_NETWORK::Browser_GetStatus(gsSysNetwork);
    wrUI_MP_WND::SetStatusStr((wrUI_MP_WND *)this,pcVar1,fVar3);
  }
  iVar2 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar2;
}




/* from: wr_ui_join.cpp
   addr: 0048D780 */

int __thiscall wrUI_WAITBROWSER_WND::ProcessUpdate(wrUI_WAITBROWSER_WND *this,void *param_1)

{
  gsSTRINGS *this_00;
  int iVar1;
  char *pcVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  uiINPUT_INFO *unaff_EDI;
  undefined4 uVar6;
  undefined4 uVar7;
  uiINPUT_INFO *puVar8;
  float fVar9;
  
  if ((*(uint *)(this + 4) & 0x140) == 0) {
    iVar1 = gsMP_NETWORK::Browser_IsStarted(gsSysNetwork);
    if (iVar1 != 0) {
      (**(code **)(*(int *)uiSystem + 0x10))(s_join,0);
      iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,unaff_EDI);
      return iVar1;
    }
    iVar1 = gsMP_NETWORK::Browser_IsError(gsSysNetwork);
    if (iVar1 != 0) {
      pcVar2 = gsMP_NETWORK::Browser_GetStatus(gsSysNetwork);
      iVar1 = gsSTRINGS::GetStringIdFmt(gsStrings,(char *)gsStrings,s_UI_NET_STATUS__s,pcVar2);
      if (iVar1 == 0) {
        pcVar2 = gsMP_NETWORK::Browser_GetStatus(gsSysNetwork);
        puVar3 = gsSTRINGS::AsciiToUnicode(gsStrings,pcVar2);
      }
      else {
        puVar3 = gsSTRINGS::GetStringById(gsStrings,iVar1);
      }
      this_00 = gsStrings;
      iVar1 = *(int *)uiSystem;
      pcVar2 = s_connection;
      puVar8 = (uiINPUT_INFO *)0x0;
      uVar7 = 0;
      uVar6 = 0;
      iVar4 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_CANT_START_CLIENT);
      puVar5 = gsSTRINGS::GetStringById(this_00,iVar4);
      (**(code **)(iVar1 + 0x14))(puVar5,puVar3,uVar6,uVar7,puVar8,pcVar2);
      iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,puVar8);
      return iVar1;
    }
  }
  fVar9 = 0.0;
  pcVar2 = gsMP_NETWORK::Browser_GetStatus(gsSysNetwork);
  wrUI_MP_WND::SetStatusStr((wrUI_MP_WND *)this,pcVar2,fVar9);
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar1;
}




/* from: wr_ui_join.cpp
   addr: 0048D890 */

void __thiscall wrUI_WAITJOIN_WND::OnChildNotify(wrUI_WAITJOIN_WND *this,uiCHILD_NOTIFY *param_1)

{
  if ((*(int *)(param_1 + 4) == 0x42544e43) && (*(int *)(param_1 + 8) == 0x4241434b)) {
    gsMP_NETWORK::Client_DisconnectFromGame(gsSysNetwork);
    (**(code **)(*(int *)uiSystem + 0x10))(s_connection,0);
    return;
  }
  uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
  return;
}




/* from: wr_ui_join.cpp
   addr: 0048D8D0 */

int __thiscall wrUI_WAITJOIN_WND::StartAppearing(wrUI_WAITJOIN_WND *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  
  if (param_1 != 0) {
    fVar3 = 0.0;
    pcVar1 = gsMP_NETWORK::Client_GetStatus(gsSysNetwork);
    wrUI_MP_WND::SetStatusStr((wrUI_MP_WND *)this,pcVar1,fVar3);
  }
  iVar2 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar2;
}




/* from: wr_ui_join.cpp
   addr: 0048D900 */

int __thiscall wrUI_WAITJOIN_WND::ProcessUpdate(wrUI_WAITJOIN_WND *this,void *param_1)

{
  gsSTRINGS *this_00;
  int iVar1;
  char *pcVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  gsSTRINGS *this_01;
  undefined4 uVar6;
  undefined4 uVar7;
  uiINPUT_INFO *puVar8;
  float fVar9;
  
  if ((*(uint *)(this + 4) & 0x140) == 0) {
    iVar1 = gsMP_NETWORK::Client_IsJoined(gsSysNetwork);
    if (iVar1 != 0) {
      iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_CANT_START_GAME);
      wrUI_SYSTEM::StartLoadingAction((wrUI_SYSTEM *)uiSystem,1,3,s_,iVar1);
      iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
      return iVar1;
    }
    iVar1 = gsMP_NETWORK::Client_IsError(gsSysNetwork);
    if (iVar1 != 0) {
      pcVar2 = gsMP_NETWORK::Client_GetStatus(gsSysNetwork);
      iVar1 = gsSTRINGS::GetStringIdFmt(this_01,(char *)gsStrings,s_UI_NET_STATUS__s,pcVar2);
      if (iVar1 == 0) {
        pcVar2 = gsMP_NETWORK::Client_GetStatus(gsSysNetwork);
        puVar3 = gsSTRINGS::AsciiToUnicode(gsStrings,pcVar2);
      }
      else {
        puVar3 = gsSTRINGS::GetStringById(gsStrings,iVar1);
      }
      this_00 = gsStrings;
      iVar1 = *(int *)uiSystem;
      pcVar2 = s_connection;
      puVar8 = (uiINPUT_INFO *)0x0;
      uVar7 = 0;
      uVar6 = 0;
      iVar4 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_JOIN_GAME_ERROR);
      puVar5 = gsSTRINGS::GetStringById(this_00,iVar4);
      (**(code **)(iVar1 + 0x14))(puVar5,puVar3,uVar6,uVar7,puVar8,pcVar2);
      iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,puVar8);
      return iVar1;
    }
  }
  fVar9 = 0.0;
  pcVar2 = gsMP_NETWORK::Client_GetStatus(gsSysNetwork);
  wrUI_MP_WND::SetStatusStr((wrUI_MP_WND *)this,pcVar2,fVar9);
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar1;
}




/* from: wr_ui_join.cpp
   addr: 0048DA20 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO>::ProcessUpdate
          (wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wrUI_SCROLL_BAR *this_00;
  uiELEMENT *puVar4;
  
  if (*(int *)(this + 0x208) == 0) {
    ProcessScroll(this);
    iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
    return iVar2;
  }
  if ((*(int *)(this + 0x6c) == -1) && (iVar2 = *(int *)(this + 0x78), iVar2 != 0)) {
    iVar1 = *(int *)(this + 0x74);
    if (iVar1 == -1) {
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
    }
    else if (iVar1 < iVar2) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      *(int *)(this + 0x6c) = iVar1;
    }
    else {
      *(int *)(this + 0x6c) = iVar2 + -1;
    }
  }
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == -1) goto LAB_0048dbc7;
  iVar1 = *(int *)(this + 0x74);
  if (iVar2 < iVar1) {
LAB_0048da8c:
    if (*(int *)(this + 0x78) - *(int *)(this + 0x17c) < iVar2) {
      iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x17c);
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (iVar1 != iVar2) {
      *(int *)(this + 0x74) = iVar2;
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
      UpdateContext(this);
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
      (**(code **)(*(int *)uiSystem + 0x84))(1);
      if (*(wrUI_SCROLL_BAR **)(this + 0x200) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x200),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0x200);
    if (this_00 != (wrUI_SCROLL_BAR *)0x0) {
      iVar2 = *(int *)(this + 0x74);
LAB_0048db81:
      wrUI_SCROLL_BAR::SetPos(this_00,iVar2);
    }
  }
  else if (*(int *)(this + 0x17c) + iVar1 <= iVar2) {
    if (iVar2 < iVar1) goto LAB_0048da8c;
    iVar2 = iVar2 - *(int *)(this + 0x17c);
    iVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x17c);
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (iVar1 != iVar2) {
      *(int *)(this + 0x74) = iVar2;
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
      UpdateContext(this);
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
      (**(code **)(*(int *)uiSystem + 0x84))(1);
      if (*(wrUI_SCROLL_BAR **)(this + 0x200) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x200),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0x200);
    if (this_00 == (wrUI_SCROLL_BAR *)0x0) goto LAB_0048db86;
    iVar2 = *(int *)(this + 0x74);
    goto LAB_0048db81;
  }
LAB_0048db86:
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 != -1) {
    iVar1 = *(int *)(this + 0x74);
    if ((iVar2 < iVar1) || (*(int *)(this + 0x17c) + iVar1 <= iVar2)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      puVar4 = (uiELEMENT *)0x0;
    }
    else {
      puVar4 = *(uiELEMENT **)(this + (iVar2 - iVar1) * 4 + 0x180);
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,puVar4);
  }
LAB_0048dbc7:
  *(undefined4 *)(this + 0x208) = 0;
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui_join.cpp
   addr: 0048DC00 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO>::UpdateContext
          (wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *this)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *pwVar5;
  wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *pwVar6;
  int local_8;
  
  iVar1 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x17c) <= iVar1) {
    iVar1 = *(int *)(this + 0x17c);
  }
  local_8 = 0;
  if (0 < iVar1) {
    pwVar5 = this + 0x180;
    pwVar6 = this + *(int *)(this + 0x74) * 4 + 0x7c;
    iVar4 = iVar1;
    do {
      (**(code **)(**(int **)pwVar5 + 0x10))(1);
      wrUI_JOIN_INFO::SetRecord(*(wrUI_JOIN_INFO **)pwVar5,(wrUI_JOIN_RECORD *)pwVar6);
      pwVar5 = pwVar5 + 4;
      pwVar6 = (wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *)
               ((wrUI_JOIN_RECORD *)pwVar6 + 4);
      iVar4 = iVar4 + -1;
      local_8 = iVar1;
    } while (iVar4 != 0);
  }
  if (local_8 < *(int *)(this + 0x17c)) {
    pwVar5 = this + local_8 * 4 + 0x180;
    do {
      iVar1 = *(int *)pwVar5;
      iVar4 = 0x7fffffff;
      puVar2 = gsSTRINGS::GetStringById(gsStrings,1);
      uiRENDER_ELEM::SetTextW((uiRENDER_ELEM *)(iVar1 + 0x6c),puVar2,iVar4);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x11c)) {
        iVar3 = 0;
        do {
          uiRENDER_ELEM::SetTextW
                    ((uiRENDER_ELEM *)(*(int *)(iVar1 + 0x118) + iVar3),(ushort *)u_,0x7fffffff);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0xac;
        } while (iVar4 < *(int *)(iVar1 + 0x11c));
      }
      (**(code **)(**(int **)pwVar5 + 0x10))(0);
      local_8 = local_8 + 1;
      pwVar5 = pwVar5 + 4;
    } while (local_8 < *(int *)(this + 0x17c));
  }
  iVar1 = *(int *)(this + 0x78);
  iVar4 = *(int *)(this + 0x6c);
  if ((iVar1 != 0) && (iVar4 != -1)) {
    if (iVar4 < iVar1) {
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      *(int *)(this + 0x6c) = iVar4;
      return;
    }
    *(int *)(this + 0x6c) = iVar1 + -1;
    return;
  }
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  return;
}

