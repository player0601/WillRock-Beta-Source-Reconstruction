
/* from: gs:ent_interact.cpp
   addr: 004F8290 */

void __thiscall entIACTIVE_OBJ::entIACTIVE_OBJ(entIACTIVE_OBJ *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x4d414452;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x44] = (entIACTIVE_OBJ)0x0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x20) = 0x454e5449;
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  *(undefined4 *)(this + 0x90) = 0xfffffffd;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}




/* from: gs:ent_interact.cpp
   addr: 004F8300 */

int __thiscall
entIACTIVE_OBJ::PreProcessMsg
          (entIACTIVE_OBJ *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 < 0x405) {
    if (param_1 == 0x404) {
      (**(code **)(*(int *)this + 0x30))(param_2);
      return 1;
    }
    if (param_1 == 1) {
      *(undefined4 *)(this + 0x84) = 0;
      return 0;
    }
    if (param_1 == 1000) {
      if ((gsAppState & 0x40000U) == 0) {
        return 1;
      }
    }
    else if (param_1 == 0x3f8) {
      iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),&s_LOCK);
      if (iVar1 == 0) {
        iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_UNLOCK);
        if (iVar1 != 0) {
          iVar1 = *(int *)(this + 0x30);
          *(int *)(this + 0x30) = iVar1 + -1;
          if (iVar1 + -1 == 0) {
            *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x80;
          }
          *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x200;
          (**(code **)(*(int *)this + 0x2c))();
          apLog(s__s_Unocked__nmb__locks____d_,this + 0x44,*(undefined4 *)(this + 0x30));
          return 0;
        }
      }
      else {
        if (*(int *)(this + 0x30) == 0) {
          *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x40;
        }
        *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
        *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x100;
        (**(code **)(*(int *)this + 0x28))();
        apLog(s__s_Locked__nmb__locks____d_,this + 0x44,*(undefined4 *)(this + 0x30));
      }
    }
  }
  else if (param_1 == 0x40c) {
    if (*(int *)((int)param_2 + 4) == -99) {
      if (*(uint *)((int)param_2 + 8) < *(uint *)(this + 0x40)) {
        return 1;
      }
      *(uint *)(this + 0x40) = *(uint *)((int)param_2 + 8);
      return 0;
    }
  }
  else {
    if (param_1 == 0x40d) {
      (**(code **)(*(int *)this + 0x34))(param_2);
      return 1;
    }
    if (param_1 == 0x40e) {
      (**(code **)(*(int *)this + 0x38))(param_2);
      return 1;
    }
  }
  return 0;
}




/* from: gs:ent_interact.cpp
   addr: 004F8490 */

int __thiscall
entIACTIVE_OBJ::PostProcessMsg
          (entIACTIVE_OBJ *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 2) {
    gsSND_SYSTEM::DelChannel(gsSysSound,this);
  }
  else if (param_1 == 0x3f5) {
    iVar2 = 0;
    if (0 < *(int *)(this + 0x28)) {
      iVar3 = 0;
      do {
        apFree(*(void **)(iVar3 + 0xa4 + *(int *)(this + 0x2c)));
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xbc;
      } while (iVar2 < *(int *)(this + 0x28));
    }
    apFree(*(void **)(this + 0x2c));
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  else if (param_1 == 0x3fc) {
    PostProcessCHG_MODE_NOTIFY(this,param_2);
  }
  uVar1 = *(uint *)(this + 0x84);
  if (uVar1 != 0) {
    *(uint *)(this + 0x84) = uVar1 & 0xfffffc00;
    if ((((byte)this[0x88] & 4) != 0) && (iVar2 = 0, 0 < *(int *)(this + 0x28))) {
      iVar3 = 0;
      do {
        if ((*(uint *)((entIACTION_DATA *)(*(int *)(this + 0x2c) + iVar3) + 4) & uVar1) != 0) {
          ExecuteIAction((entIACTION_DATA *)(*(int *)(this + 0x2c) + iVar3),this);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xbc;
      } while (iVar2 < *(int *)(this + 0x28));
    }
    gsSND_SYSTEM::UpdateIAction(gsSysSound,this,uVar1);
  }
  if ((*(int *)(this + 0x8c) != -1) &&
     (((*(int *)(gsSysMP + 0x28) == 4 || (*(int *)(gsSysMP + 0x28) == 2)) &&
      (iVar2 = 0, 0 < DAT_009480f8)))) {
    do {
      if ((&DAT_009480d0)[iVar2] == param_1) {
        gsMP_SERVER::SendMsgClientAll
                  (gsSysServer,this,param_1,(msgDATA *)param_2,0xa0000,0xffffffff,0xfffffffd);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_009480f8);
  }
  return 0;
}




/* from: gs:ent_interact.cpp
   addr: 004F85D0 */

void __thiscall entIACTIVE_OBJ::PostProcessCHG_MODE_NOTIFY(entIACTIVE_OBJ *this,void *param_1)

{
                    /* WARNING: Load size is inaccurate */
  switch(*param_1) {
  case 0:
    if ((*(int *)(this + 0x20) != 0x454e5424) || (((byte)this[0xb4] & 0x40) == 0)) {
      if (_eioIsUpdSuspend == 0) {
        return;
      }
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
      return;
    }
    break;
  case 1:
    if ((*(int *)(this + 0x20) == 0x454e5424) && (((byte)this[0xb4] & 0x40) != 0))
    goto switchD_004f85e8_caseD_2;
    if (_eioIsUpdSuspend == 0) {
      return;
    }
    break;
  case 2:
switchD_004f85e8_caseD_2:
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
    return;
  case 3:
    break;
  default:
    goto switchD_004f85e8_default;
  }
  *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
switchD_004f85e8_default:
  return;
}




/* from: gs:ent_interact.cpp
   addr: 004F8640 */

void __thiscall entIACTIVE_OBJ::TermIActive(entIACTIVE_OBJ *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x28)) {
    iVar1 = 0;
    do {
      apFree(*(void **)(*(int *)(this + 0x2c) + 0xa4 + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xbc;
    } while (iVar2 < *(int *)(this + 0x28));
  }
  apFree(*(void **)(this + 0x2c));
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ent_interact.cpp
   addr: 004F8690 */

void __fastcall entIACTIVE_OBJ::ExecuteIAction(entIACTION_DATA *param_1,entIACTIVE_OBJ *param_2)

{
  apNAME *this;
  char cVar1;
  uint uVar2;
  int iVar3;
  msgADDR *pmVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  int aiStack_c8 [50];
  
  if (0 < *(int *)(param_1 + 0xb4)) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
    apLog(s_______Frame___d______);
    apLog(s_From___s);
    this = (apNAME *)(param_1 + 8);
    apLog(s_Cmd____s__s_,this);
    local_d4 = (uint)(ABS(*(float *)(param_1 + 0xa8)) < _DAT_005dc584);
    if ((float)local_d4 == ___real_00000000) {
      apLog(s_Delay____3f,(double)*(float *)(param_1 + 0xa8));
    }
    iVar3 = apNAME::IsName(this,s_ENABLE_IACTION);
    if (iVar3 == 0) {
      iVar3 = apNAME::IsName(this,s_DISABLE_IACTION);
      if (iVar3 == 0) {
        if ((param_2 != (entIACTIVE_OBJ *)0x0) && ((*(uint *)(param_2 + 0x84) & 0x10000000) != 0)) {
          apLog(s_To____IACTION_DISABLED);
          return;
        }
        iVar3 = *(int *)(param_1 + 0xb8);
        if ((iVar3 != -1) && (iVar3 != *(int *)(param_2 + 0x30))) {
          apLog(s_Skip_IAction___nmbLocks_conditio,iVar3,*(int *)(param_2 + 0x30));
          return;
        }
        local_d8 = 0;
        if (0 < *(int *)(param_1 + 0xa0)) {
          local_e0 = 0;
          do {
            uVar2 = *(uint *)(param_1 + 4);
            pcVar7 = (char *)(*(int *)(param_1 + 0xa4) + local_e0);
            pmVar4 = msgSYSTEM::GetFirstAddr(&msgSystem);
            iVar3 = 0;
            local_dc = 0;
            for (; pmVar4 != (msgADDR *)0x0; pmVar4 = (msgADDR *)(*(int *)(pmVar4 + 8) + -4)) {
              if ((*(int *)(pmVar4 + 0x20) == 0x454e5449) || (*(int *)(pmVar4 + 0x20) == 0x454e5424)
                 ) {
                if ((uVar2 & 0x20000000) == 0) {
LAB_004f8a8c:
                  iVar5 = apNAME::IsName((apNAME *)(pmVar4 + 0x44),pcVar7);
                  if (iVar5 == 0) goto LAB_004f8aa2;
                }
                else {
                  uVar6 = 0xffffffff;
                  pcVar8 = pcVar7;
                  do {
                    if (uVar6 == 0) break;
                    uVar6 = uVar6 - 1;
                    cVar1 = *pcVar8;
                    pcVar8 = pcVar8 + 1;
                  } while (cVar1 != '\0');
                  iVar5 = strnicmp(pcVar7,(char *)(pmVar4 + 0x44),~uVar6 - 1);
                  iVar3 = local_dc;
                  if (iVar5 != 0) goto LAB_004f8a8c;
                }
                aiStack_c8[iVar3] = (int)pmVar4;
                iVar3 = iVar3 + 1;
                local_dc = iVar3;
              }
LAB_004f8aa2:
              if (*(int *)(pmVar4 + 8) == 0) break;
            }
            iVar5 = 0;
            if (0 < iVar3) {
              do {
                pmVar4 = (msgADDR *)aiStack_c8[iVar5];
                apLog(s_To_____s);
                local_dc = (uint)(ABS(*(float *)(param_1 + 0xa8)) < _DAT_005dc584);
                if ((float)local_dc == ___real_00000000) {
                  msgSYSTEM::PostTimeMsgData
                            (&msgSystem,pmVar4,0x3f8,(msgDATA *)param_1,(msgADDR *)param_2,
                             *(float *)(param_1 + 0xa8));
                }
                else {
                  msgSYSTEM::SendMsg(&msgSystem,pmVar4,0x3f8,param_1,(msgADDR *)param_2);
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < iVar3);
            }
            if (iVar3 == 0) {
              apLogErr(s_NotFound___s);
            }
            local_d8 = local_d8 + 1;
            local_e0 = local_e0 + 0x40;
          } while (local_d8 < *(int *)(param_1 + 0xa0));
        }
      }
      else {
        local_d8 = 0;
        if (0 < *(int *)(param_1 + 0xa0)) {
          local_e0 = 0;
          do {
            uVar2 = *(uint *)(param_1 + 4);
            pcVar7 = (char *)(*(int *)(param_1 + 0xa4) + local_e0);
            pmVar4 = msgSYSTEM::GetFirstAddr(&msgSystem);
            iVar3 = 0;
            local_dc = 0;
            for (; pmVar4 != (msgADDR *)0x0; pmVar4 = (msgADDR *)(*(int *)(pmVar4 + 8) + -4)) {
              if ((*(int *)(pmVar4 + 0x20) == 0x454e5449) || (*(int *)(pmVar4 + 0x20) == 0x454e5424)
                 ) {
                if ((uVar2 & 0x20000000) == 0) {
LAB_004f891b:
                  iVar5 = apNAME::IsName((apNAME *)(pmVar4 + 0x44),pcVar7);
                  if (iVar5 == 0) goto LAB_004f8931;
                }
                else {
                  uVar6 = 0xffffffff;
                  pcVar8 = pcVar7;
                  do {
                    if (uVar6 == 0) break;
                    uVar6 = uVar6 - 1;
                    cVar1 = *pcVar8;
                    pcVar8 = pcVar8 + 1;
                  } while (cVar1 != '\0');
                  iVar5 = strnicmp(pcVar7,(char *)(pmVar4 + 0x44),~uVar6 - 1);
                  iVar3 = local_dc;
                  if (iVar5 != 0) goto LAB_004f891b;
                }
                aiStack_c8[iVar3] = (int)pmVar4;
                iVar3 = iVar3 + 1;
                local_dc = iVar3;
              }
LAB_004f8931:
              if (*(int *)(pmVar4 + 8) == 0) break;
            }
            iVar5 = 0;
            if (0 < iVar3) {
              do {
                *(uint *)(aiStack_c8[iVar5] + 0x84) =
                     *(uint *)(aiStack_c8[iVar5] + 0x84) | 0x10000000;
                apLog(s_To_____s);
                iVar5 = iVar5 + 1;
              } while (iVar5 < iVar3);
            }
            if (iVar3 == 0) {
              apLogErr(s_NotFound___s);
            }
            local_d8 = local_d8 + 1;
            local_e0 = local_e0 + 0x40;
            if (*(int *)(param_1 + 0xa0) <= local_d8) {
              return;
            }
          } while( true );
        }
      }
    }
    else {
      local_d8 = 0;
      if (0 < *(int *)(param_1 + 0xa0)) {
        local_e0 = 0;
        do {
          uVar2 = *(uint *)(param_1 + 4);
          pcVar7 = (char *)(*(int *)(param_1 + 0xa4) + local_e0);
          pmVar4 = msgSYSTEM::GetFirstAddr(&msgSystem);
          iVar3 = 0;
          local_dc = 0;
          for (; pmVar4 != (msgADDR *)0x0; pmVar4 = (msgADDR *)(*(int *)(pmVar4 + 8) + -4)) {
            if ((*(int *)(pmVar4 + 0x20) == 0x454e5449) || (*(int *)(pmVar4 + 0x20) == 0x454e5424))
            {
              if ((uVar2 & 0x20000000) == 0) {
LAB_004f87ea:
                iVar5 = apNAME::IsName((apNAME *)(pmVar4 + 0x44),pcVar7);
                if (iVar5 == 0) goto LAB_004f8800;
              }
              else {
                uVar6 = 0xffffffff;
                pcVar8 = pcVar7;
                do {
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                iVar5 = strnicmp(pcVar7,(char *)(pmVar4 + 0x44),~uVar6 - 1);
                iVar3 = local_dc;
                if (iVar5 != 0) goto LAB_004f87ea;
              }
              aiStack_c8[iVar3] = (int)pmVar4;
              iVar3 = iVar3 + 1;
              local_dc = iVar3;
            }
LAB_004f8800:
            if (*(int *)(pmVar4 + 8) == 0) break;
          }
          iVar5 = 0;
          if (0 < iVar3) {
            do {
              *(uint *)(aiStack_c8[iVar5] + 0x84) = *(uint *)(aiStack_c8[iVar5] + 0x84) & 0xefffffff
              ;
              apLog(s_To_____s);
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3);
          }
          if (iVar3 == 0) {
            apLogErr(s_NotFound___s);
          }
          local_d8 = local_d8 + 1;
          local_e0 = local_e0 + 0x40;
          if (*(int *)(param_1 + 0xa0) <= local_d8) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}




/* from: gs:ent_interact.cpp
   addr: 004F8BC0 */

void __thiscall entIACTIVE_OBJ::ParseIActions(entIACTIVE_OBJ *this,psSHEET *param_1)

{
  psSHEET *this_00;
  int iVar1;
  psSECT *ppVar2;
  psSECT *ppVar3;
  psSECT *ppVar4;
  psSECT *ppVar5;
  psSECT *ppVar6;
  psSECT *ppVar7;
  psSECT *ppVar8;
  psSECT *ppVar9;
  psSECT *ppVar10;
  psSECT *ppVar11;
  char local_40 [64];
  
  this_00 = param_1;
  if (param_1 != (psSHEET *)0x0) {
    iVar1 = psSHEET::GetInt(param_1,s_IACTIVE,s_nmbLocks,(int *)(this + 0x30));
    if (iVar1 != 0) {
      apLog(s__s__Read__nmbLocks_____d,this + 0x44,*(int *)(this + 0x30));
    }
    iVar1 = psSHEET::GetBool(this_00,s_IACTIVE,s_isIActionEnabled,(int *)&param_1);
    if ((iVar1 != 0) && (param_1 == (psSHEET *)0x0)) {
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x10000000;
      apLog(s__s__Read__isIActionEnabled_____d,this + 0x44,0);
    }
    iVar1 = 0;
    while( true ) {
      while( true ) {
        sprintf(local_40,s_ON_ACTIVATE);
        if (0 < iVar1) {
          sprintf(local_40,s_ON_ACTIVATE__d,iVar1);
        }
        ppVar2 = psSHEET::FindSect(this_00,local_40);
        if (ppVar2 != (psSECT *)0x0) {
          (**(code **)(*(int *)this + 0x24))(this_00,local_40,1);
        }
        sprintf(local_40,s_ON_DEACTIVATE);
        if (0 < iVar1) {
          sprintf(local_40,s_ON_DEACTIVATE__d,iVar1);
        }
        ppVar3 = psSHEET::FindSect(this_00,local_40);
        if (ppVar3 != (psSECT *)0x0) {
          (**(code **)(*(int *)this + 0x24))(this_00,local_40,2);
        }
        sprintf(local_40,s_ON_START);
        if (0 < iVar1) {
          sprintf(local_40,s_ON_START__d,iVar1);
        }
        ppVar4 = psSHEET::FindSect(this_00,local_40);
        if (ppVar4 != (psSECT *)0x0) {
          (**(code **)(*(int *)this + 0x24))(this_00,local_40,4);
        }
        sprintf(local_40,s_ON_STOP);
        if (0 < iVar1) {
          sprintf(local_40,s_ON_STOP__d,iVar1);
        }
        ppVar5 = psSHEET::FindSect(this_00,local_40);
        if (ppVar5 != (psSECT *)0x0) {
          (**(code **)(*(int *)this + 0x24))(this_00,local_40,8);
        }
        sprintf(local_40,s_ON_ACTION);
        if (0 < iVar1) {
          sprintf(local_40,s_ON_ACTION__d,iVar1);
        }
        ppVar6 = psSHEET::FindSect(this_00,local_40);
        if (ppVar6 != (psSECT *)0x0) {
          (**(code **)(*(int *)this + 0x24))(this_00,local_40,0x10);
        }
        sprintf(local_40,s_ON_COMPLETE);
        if (0 < iVar1) {
          sprintf(local_40,s_ON_COMPLETE__d,iVar1);
        }
        ppVar7 = psSHEET::FindSect(this_00,local_40);
        if (ppVar7 != (psSECT *)0x0) {
          (**(code **)(*(int *)this + 0x24))(this_00,local_40,0x20);
        }
        sprintf(local_40,s_ON_LOCK);
        if (0 < iVar1) {
          sprintf(local_40,s_ON_LOCK__d,iVar1);
        }
        ppVar8 = psSHEET::FindSect(this_00,local_40);
        if (ppVar8 != (psSECT *)0x0) {
          (**(code **)(*(int *)this + 0x24))(this_00,local_40,0x40);
        }
        sprintf(local_40,s_ON_UNLOCK);
        if (0 < iVar1) {
          sprintf(local_40,s_ON_UNLOCK__d,iVar1);
        }
        ppVar9 = psSHEET::FindSect(this_00,local_40);
        if (ppVar9 != (psSECT *)0x0) {
          (**(code **)(*(int *)this + 0x24))(this_00,local_40,0x80);
        }
        sprintf(local_40,s_ON_LOCK_CMD);
        if (0 < iVar1) {
          sprintf(local_40,s_ON_LOCK_CMD__d,iVar1);
        }
        ppVar10 = psSHEET::FindSect(this_00,local_40);
        if (ppVar10 != (psSECT *)0x0) {
          (**(code **)(*(int *)this + 0x24))(this_00,local_40,0x100);
        }
        sprintf(local_40,s_ON_UNLOCK_CMD);
        if (0 < iVar1) {
          sprintf(local_40,s_ON_UNLOCK_CMD__d,iVar1);
        }
        ppVar11 = psSHEET::FindSect(this_00,local_40);
        if (ppVar11 == (psSECT *)0x0) break;
        (**(code **)(*(int *)this + 0x24))(this_00,local_40,0x200);
        iVar1 = iVar1 + 1;
      }
      if (ppVar10 == (psSECT *)0x0 &&
          (ppVar9 == (psSECT *)0x0 &&
          (ppVar8 == (psSECT *)0x0 &&
          (ppVar7 == (psSECT *)0x0 &&
          (ppVar6 == (psSECT *)0x0 &&
          (ppVar5 == (psSECT *)0x0 &&
          (ppVar4 == (psSECT *)0x0 && (ppVar3 == (psSECT *)0x0 && ppVar2 == (psSECT *)0x0))))))))
      break;
      iVar1 = iVar1 + 1;
    }
  }
  return;
}




/* from: gs:ent_interact.cpp
   addr: 004F8F70 */

int __fastcall entIACTIVE_OBJ::ActionName2State(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 9;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_ACTIVATE;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 1;
  }
  iVar1 = 0xb;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_DEACTIVATE;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 2;
  }
  iVar1 = 6;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_START;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 4;
  }
  iVar1 = 5;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = &s_STOP;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 8;
  }
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_ACTION;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x10;
  }
  iVar1 = 9;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_COMPLETE;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x20;
  }
  iVar1 = 5;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = &s_LOCK;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x40;
  }
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_UNLOCK;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x80;
  }
  iVar1 = 9;
  bVar4 = true;
  pcVar2 = param_1;
  pcVar3 = s_LOCK_CMD;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 0x100;
  }
  iVar1 = 0xb;
  bVar4 = true;
  pcVar2 = s_UNLOCK_CMD;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *param_1 == *pcVar2;
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar4);
  return !bVar4 - 1 & 0x200;
}




/* from: gs:ent_interact.cpp
   addr: 004F9080 */

int __thiscall
entIACTIVE_OBJ::AddIAction(entIACTIVE_OBJ *this,psSHEET *param_1,char *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  entIACTION_DATA *peVar3;
  undefined4 *puVar4;
  entIACTION_DATA local_bc;
  undefined1 local_bb;
  undefined2 local_ba;
  uint local_b8;
  undefined1 local_b4;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_64;
  undefined1 local_5c;
  
  local_bc = (entIACTION_DATA)0x0;
  local_bb = 0x40;
  local_b8 = 0;
  local_b4 = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0;
  local_ba = 0xa0;
  iVar1 = ParseIActionData(param_1,param_2,s_,&local_bc,(char *)(this + 0x44));
  if (iVar1 == 0) {
    return -1;
  }
  local_b8 = local_b8 | param_3;
  pvVar2 = apRealloc(*(void **)(this + 0x2c),(*(int *)(this + 0x28) + 1) * 0xbc);
  if (pvVar2 == (void *)0x0) {
    return -1;
  }
  *(void **)(this + 0x2c) = pvVar2;
  peVar3 = &local_bc;
  puVar4 = (undefined4 *)((int)pvVar2 + *(int *)(this + 0x28) * 0xbc);
  for (iVar1 = 0x2f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)peVar3;
    peVar3 = peVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  iVar1 = *(int *)(this + 0x28);
  *(int *)(this + 0x28) = iVar1 + 1;
  return iVar1;
}




/* from: gs:ent_interact.cpp
   addr: 004F9160 */

int __fastcall
entIACTIVE_OBJ::ParseIActionData
          (psSHEET *param_1,char *param_2,char *param_3,entIACTION_DATA *param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  psVAR *ppVar3;
  msgADDR *pmVar4;
  void *pvVar5;
  uint uVar6;
  char *pcVar7;
  int local_d4;
  int local_d0;
  char local_c8 [64];
  int local_88;
  uint local_84;
  char local_80 [64];
  char local_40 [64];
  
  apLog(s__s__Read__ON_XXX_____s,param_5);
  sprintf(local_c8,s__scmd,param_3);
  iVar2 = psSHEET::GetStr(param_1,param_2,local_c8,local_40,0x40);
  if (iVar2 == 0) {
    apLogErr(s__s_Error_Reading_command___s,param_5,local_c8);
    return 0;
  }
  *(undefined4 *)(param_4 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_4 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_4 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_4 + 0xa4) = 0;
  *(undefined4 *)(param_4 + 0xa0) = 0;
  *(undefined4 *)(param_4 + 0xa8) = 0;
  *(undefined4 *)(param_4 + 0xb4) = 0x5fffffff;
  *(undefined4 *)(param_4 + 4) = 0;
  apNAME::SetName((apNAME *)(param_4 + 8),local_40);
  apLog(s__s__Read___s_____s,param_5,local_c8);
  sprintf(local_c8,s__sisPartialName,param_3);
  ppVar3 = psSHEET::FindVarStr(param_1,param_2,local_c8);
  if (ppVar3 != (psVAR *)0x0) {
    psSHEET::GetBool(param_1,param_2,local_c8,&local_88);
    if (local_88 != 0) {
      *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 0x20000000;
    }
    apLog(s__s__Read___s_____d,param_5,*(undefined4 *)ppVar3);
  }
  local_d0 = 0;
  do {
    if (local_d0 == 0) {
      sprintf(local_c8,s__s_s,param_3);
    }
    else {
      sprintf(local_c8,s__s_s__d,param_3,s_objName);
    }
    iVar2 = psSHEET::GetStr(param_1,param_2,local_c8,local_80,0x40);
    if (iVar2 == 0) {
      if (*(int *)(param_4 + 0xa0) == 0) {
        apLogErr(s__s_Error__No_objects_were_specif,param_5);
      }
      sprintf(local_c8,s__sdelay);
      ppVar3 = psSHEET::FindVarStr(param_1,param_2,local_c8);
      if (ppVar3 != (psVAR *)0x0) {
        psSHEET::GetFloat(param_1,param_2,local_c8,(float *)(param_4 + 0xa8));
        apLog(s__s__Read___s_____f,param_5,*(undefined4 *)ppVar3,(double)*(float *)(param_4 + 0xa8))
        ;
      }
      sprintf(local_c8,s__snAction);
      ppVar3 = psSHEET::FindVarStr(param_1,param_2,local_c8);
      if (ppVar3 != (psVAR *)0x0) {
        psSHEET::GetInt(param_1,param_2,local_c8,(int *)(param_4 + 0xb4));
        apLog(s__s__Read___s_____d,param_5,*(undefined4 *)ppVar3);
      }
      sprintf(local_c8,s__scondNmbLocks);
      ppVar3 = psSHEET::FindVarStr(param_1,param_2,local_c8);
      if (ppVar3 != (psVAR *)0x0) {
        psSHEET::GetInt(param_1,param_2,local_c8,(int *)(param_4 + 0xb8));
        apLog(s__s__Read___s_____d,param_5,*(undefined4 *)ppVar3);
      }
      sprintf(local_c8,s__si1_);
      ppVar3 = psSHEET::FindVarStr(param_1,param_2,local_c8);
      if (ppVar3 != (psVAR *)0x0) {
        psSHEET::GetInt(param_1,param_2,*(char **)ppVar3,(int *)(param_4 + 0x48));
        apLog(s__s__Read___s_____d,param_5,*(undefined4 *)ppVar3);
      }
      sprintf(local_c8,s__si2_);
      ppVar3 = psSHEET::FindVarStr(param_1,param_2,local_c8);
      if (ppVar3 != (psVAR *)0x0) {
        psSHEET::GetInt(param_1,param_2,*(char **)ppVar3,(int *)(param_4 + 0x4c));
        apLog(s__s__Read___s_____d,param_5,*(undefined4 *)ppVar3);
      }
      sprintf(local_c8,s__sf1_);
      ppVar3 = psSHEET::FindVarStr(param_1,param_2,local_c8);
      if (ppVar3 != (psVAR *)0x0) {
        psSHEET::GetFloat(param_1,param_2,*(char **)ppVar3,(float *)(param_4 + 0x50));
        apLog(s__s__Read___s_____f,param_5,*(undefined4 *)ppVar3,(double)*(float *)(param_4 + 0x50))
        ;
      }
      sprintf(local_c8,s__sf2_);
      ppVar3 = psSHEET::FindVarStr(param_1,param_2,local_c8);
      if (ppVar3 != (psVAR *)0x0) {
        psSHEET::GetFloat(param_1,param_2,*(char **)ppVar3,(float *)(param_4 + 0x54));
        apLog(s__s__Read___s_____f,param_5,*(undefined4 *)ppVar3,(double)*(float *)(param_4 + 0x54))
        ;
      }
      sprintf(local_c8,s__sb1_);
      ppVar3 = psSHEET::FindVarStr(param_1,param_2,local_c8);
      if (ppVar3 != (psVAR *)0x0) {
        psSHEET::GetBool(param_1,param_2,*(char **)ppVar3,(int *)(param_4 + 0x58));
        apLog(s__s__Read___s_____d,param_5,*(undefined4 *)ppVar3);
      }
      sprintf(local_c8,s__sb2_);
      ppVar3 = psSHEET::FindVarStr(param_1,param_2,local_c8);
      if (ppVar3 != (psVAR *)0x0) {
        psSHEET::GetBool(param_1,param_2,*(char **)ppVar3,(int *)(param_4 + 0x5c));
        apLog(s__s__Read___s_____d,param_5,*(undefined4 *)ppVar3);
      }
      sprintf(local_c8,s__ss1_);
      ppVar3 = psSHEET::FindVarStr(param_1,param_2,local_c8);
      if (ppVar3 != (psVAR *)0x0) {
        psSHEET::GetStr(param_1,param_2,*(char **)ppVar3,(char *)(param_4 + 0x60),0x40);
        apLog(s__s__Read___s_____s,param_5,*(undefined4 *)ppVar3,param_4 + 0x60);
      }
      return 1;
    }
    apLog(s__s__Read___s_____s,param_5,local_c8);
    local_84 = *(uint *)(param_4 + 4) & 0x20000000;
    pmVar4 = msgSYSTEM::GetFirstAddr(&msgSystem);
    local_d4 = 0;
    if (pmVar4 == (msgADDR *)0x0) {
LAB_004f93b6:
      apLogErr(s__s_Error__Objects__s_not_found,param_5);
    }
    else {
      do {
        if ((*(int *)(pmVar4 + 0x20) == 0x454e5449) || (*(int *)(pmVar4 + 0x20) == 0x454e5424)) {
          if (local_84 == 0) {
LAB_004f938b:
            iVar2 = apNAME::IsName((apNAME *)(pmVar4 + 0x44),local_80);
            if (iVar2 == 0) goto LAB_004f93a0;
          }
          else {
            uVar6 = 0xffffffff;
            pcVar7 = local_80;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            iVar2 = strnicmp(local_80,(char *)(pmVar4 + 0x44),~uVar6 - 1);
            if (iVar2 != 0) goto LAB_004f938b;
          }
          local_d4 = local_d4 + 1;
        }
LAB_004f93a0:
      } while ((*(int *)(pmVar4 + 8) != 0) &&
              (pmVar4 = (msgADDR *)(*(int *)(pmVar4 + 8) + -4), pmVar4 != (msgADDR *)0x0));
      if (local_d4 == 0) goto LAB_004f93b6;
    }
    pvVar5 = apRealloc(*(void **)(param_4 + 0xa4),(*(int *)(param_4 + 0xa0) + 1) * 0x40);
    if (pvVar5 == (void *)0x0) {
      return -1;
    }
    *(void **)(param_4 + 0xa4) = pvVar5;
    apNAME::SetName((apNAME *)(*(int *)(param_4 + 0xa0) * 0x40 + (int)pvVar5),local_80);
    local_d0 = local_d0 + 1;
    *(int *)(param_4 + 0xa0) = *(int *)(param_4 + 0xa0) + 1;
  } while( true );
}




/* from: gs:ent_interact.cpp
   addr: 004F9800 */

void __fastcall entRegMsgMPDispatch(int param_1)

{
  (&DAT_009480d0)[DAT_009480f8] = param_1;
  DAT_009480f8 = DAT_009480f8 + 1;
  return;
}




/* from: gs:ent_interact.cpp
   addr: 004F9820 */

void __thiscall
entIACTIVE_OBJ::PrepareMP_UPD_STATE(entIACTIVE_OBJ *this,gsMSG_MP_UPD_STATE *param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x3c);
  *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
  return;
}




/* from: gs:ent_interact.cpp
   addr: 004F9840 */

void __thiscall
entIACTIVE_OBJ::SendMP_Server_2_ClientAll(entIACTIVE_OBJ *this,msgDATA *param_1,int param_2)

{
  if (*(int *)(this + 0x8c) != -1) {
    gsMP_SERVER::SendMsgClientAll(gsSysServer,this,0x40c,param_1,param_2,0xffffffff,0xfffffffd);
  }
  return;
}




/* from: gs:ent_interact.cpp
   addr: 004F9870 */

void __thiscall
entIACTIVE_OBJ::SendMP_Client_2_Server(entIACTIVE_OBJ *this,msgDATA *param_1,int param_2)

{
  (**(code **)(*(int *)gsSysClient + 0x2c))(this,0x40c,param_1,param_2);
  return;
}




/* from: gs:ent_interact.cpp
   addr: 004F98A0 */

entIACTIVE_OBJ * __fastcall entFindNextIO(entIACTIVE_OBJ *param_1)

{
  entIACTIVE_OBJ *peVar1;
  
  if (param_1 == (entIACTIVE_OBJ *)0x0) {
    peVar1 = (entIACTIVE_OBJ *)msgSYSTEM::GetFirstAddr(&msgSystem);
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      return (entIACTIVE_OBJ *)0x0;
    }
    peVar1 = (entIACTIVE_OBJ *)(*(int *)(param_1 + 8) + -4);
  }
  if (peVar1 != (entIACTIVE_OBJ *)0x0) {
    while ((*(int *)((msgADDR *)peVar1 + 0x20) != 0x454e5424 &&
           (*(int *)((msgADDR *)peVar1 + 0x20) != 0x454e5449))) {
      if (*(int *)((msgADDR *)peVar1 + 8) == 0) {
        return (entIACTIVE_OBJ *)0x0;
      }
      peVar1 = (entIACTIVE_OBJ *)(*(int *)((msgADDR *)peVar1 + 8) + -4);
      if (peVar1 == (entIACTIVE_OBJ *)0x0) {
        return (entIACTIVE_OBJ *)0x0;
      }
    }
  }
  return peVar1;
}




/* from: gs:ent_interact.cpp
   addr: 004F98F0 */

void __thiscall entIACTION::entIACTION(entIACTION *this)

{
  *this = (entIACTION)0x0;
  this[1] = (entIACTION)0x40;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (entIACTION)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  this[0x60] = (entIACTION)0x0;
  *(undefined2 *)(this + 2) = 0xa0;
  return;
}

