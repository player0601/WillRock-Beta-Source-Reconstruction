
/* from: drv:d3d_cfg.cpp
   addr: 004ACA60 */

void __thiscall d3dDRIVER::ConfigureAlphaBlend(d3dDRIVER *this,int param_1)

{
  if ((*(uint *)(this + 4) & 0x1000000) != 0) {
    if ((param_1 & 0x20U) == 0) {
      if (DAT_006121a4 != 0) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1b,0);
        DAT_006121a4 = 0;
        return;
      }
    }
    else {
      if (DAT_006121a4 != 1) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1b,1);
        DAT_006121a4 = 1;
      }
      if ((param_1 & 0x100U) == 0) {
        if ((param_1 & 0x200U) == 0) {
          if ((char)param_1 < '\0') {
            if (DAT_0061216c != 5) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                        (*(int **)(d3dDriver + 0x77c),0x13,5);
              DAT_0061216c = 5;
            }
            if (DAT_00612170 != 6) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                        (*(int **)(d3dDriver + 0x77c),0x14,6);
              DAT_00612170 = 6;
              return;
            }
          }
          else if ((param_1 & 0x40U) == 0) {
            if ((param_1 & 0x400U) != 0) {
              if (DAT_0061216c != 1) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                          (*(int **)(d3dDriver + 0x77c),0x13,1);
                DAT_0061216c = 1;
              }
              if (DAT_00612170 != 2) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                          (*(int **)(d3dDriver + 0x77c),0x14,2);
                DAT_00612170 = 2;
              }
            }
          }
          else {
            if (DAT_0061216c != 5) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                        (*(int **)(d3dDriver + 0x77c),0x13,5);
              DAT_0061216c = 5;
            }
            if (((byte)d3dDriver[0x5b0] & 2) == 0) {
              if (DAT_00612170 != 6) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                          (*(int **)(d3dDriver + 0x77c),0x14,6);
                DAT_00612170 = 6;
                return;
              }
            }
            else if (DAT_00612170 != 2) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                        (*(int **)(d3dDriver + 0x77c),0x14,2);
              DAT_00612170 = 2;
              return;
            }
          }
        }
        else {
          if (DAT_0061216c != 5) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x13,5)
            ;
            DAT_0061216c = 5;
          }
          if (DAT_00612170 != 1) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x14,1)
            ;
            DAT_00612170 = 1;
            return;
          }
        }
      }
      else if (((*(uint *)(d3dDriver + 0x5ac) & 1) == 0) || (((byte)d3dDriver[0x5b0] & 4) == 0)) {
        if (((*(uint *)(d3dDriver + 0x5ac) & 0x100) != 0) && (((byte)d3dDriver[0x5b0] & 1) != 0)) {
          if (DAT_0061216c != 9) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x13,9)
            ;
            DAT_0061216c = 9;
          }
          if (DAT_00612170 != 1) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x14,1)
            ;
            DAT_00612170 = 1;
            return;
          }
        }
      }
      else {
        if (DAT_0061216c != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x13,1);
          DAT_0061216c = 1;
        }
        if (DAT_00612170 != 3) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x14,3);
          DAT_00612170 = 3;
          return;
        }
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:d3d_cfg.cpp
   addr: 004ACD50 */

void __thiscall d3dDRIVER::ConfigureTexBlend(d3dDRIVER *this,rendCFG *param_1,d3dCFG_PREP *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  d3dCFG_PREP *pdVar4;
  rendCFG *prVar5;
  
  if ((DAT_00612220 & 1) == 0) {
    DAT_00612220 = DAT_00612220 | 1;
    _DAT_006122f4 = 0;
    _DAT_006122f8 = 0;
    _DAT_006122fc = 0;
    _DAT_00612300 = 0;
    _DAT_00612304 = 0;
    _DAT_00612228 = &d3dCFG_PREP::_vftable_;
    atexit((_func_4879 *)&__E10);
  }
  bVar3 = false;
  bVar2 = false;
  if ((*(uint *)(this + 4) & 0x1000000) != 0) {
    if (param_2 == (d3dCFG_PREP *)0x0) {
      d3dREND_DRIVER::PrepStgBlend
                ((d3dREND_DRIVER *)rendDrv,param_1,(d3dCFG_PREP *)&DAT_00612228,(char *)0x0);
      (**(code **)(*(int *)this + 0x54))();
      pdVar4 = (d3dCFG_PREP *)&DAT_00612228;
    }
    else {
      if ((*(int *)(this + 0x1d98) == *(int *)(param_2 + 4)) &&
         (bVar3 = true, *(int *)(this + 0x1d9c) == *(int *)(param_2 + 0x124))) {
        bVar2 = true;
      }
      *(int *)(this + 0x1d98) = *(int *)(param_2 + 4);
      *(undefined4 *)(this + 0x1d9c) = *(undefined4 *)(param_2 + 0x124);
      pdVar4 = param_2;
    }
    iVar1 = *(int *)(pdVar4 + 0x120);
    param_2 = (d3dCFG_PREP *)0x0;
    *(int *)(param_1 + 0xc0) = iVar1;
    if (0 < iVar1) {
      prVar5 = param_1 + 4;
      do {
        (**(code **)(*(int *)txmManager + 0x10))(*(undefined4 *)(prVar5 + -4));
        if (*(int *)(prVar5 + 4) == 6) {
          (**(code **)(*(int *)txmManager + 0x10))(*(undefined4 *)prVar5);
        }
        param_2 = param_2 + 1;
        prVar5 = prVar5 + 0x24;
      } while ((int)param_2 < *(int *)(param_1 + 0xc0));
    }
    if (!bVar2) {
      ConfigureStageTcHwID(this,pdVar4);
    }
    if (!bVar3) {
      ConfigureStageBlend(this,param_1,pdVar4);
      if ((*(uint *)(param_1 + 0xb8) & 0x4000) != 0) {
        if ((*(uint *)(param_1 + 0xb8) & 0x2000) == 0) {
          vidDRIVER::ToggleModeParam(vidDriver,0x100000,0);
        }
        else {
          vidDRIVER::ToggleModeParam(vidDriver,0x100000,1);
          (**(code **)(*(int *)vidDriver + 0x50))
                    (0x44,*(undefined4 *)(rendDrv + 0x7c),0xffff,*(undefined4 *)(rendDrv + 0x80));
        }
      }
    }
    if (DAT_006121f0 != *(int *)(param_1 + 0xbc)) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                (*(int **)(d3dDriver + 0x77c),0x3c,*(int *)(param_1 + 0xbc));
      DAT_006121f0 = *(int *)(param_1 + 0xbc);
    }
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004ACF30 */

void __thiscall d3dDRIVER::ConfigureStageTcHwID(d3dDRIVER *this,d3dCFG_PREP *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xe0)) {
    do {
      iVar1 = *(int *)(param_1 + iVar3 * 0xc + 0xe8);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 8);
        if ((&DAT_00612368)[iVar3 * 0x13] != *(int *)(iVar1 + 0xc)) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar3,0xb,*(int *)(iVar1 + 0xc));
          (&DAT_00612368)[iVar3 * 0x13] = *(undefined4 *)(iVar1 + 0xc);
        }
        if ((iVar2 == 6) && ((&DAT_006123b4)[iVar3 * 0x13] != *(int *)(iVar1 + 0xc))) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar3 + 1,0xb,*(int *)(iVar1 + 0xc));
          (&DAT_006123b4)[iVar3 * 0x13] = *(undefined4 *)(iVar1 + 0xc);
        }
      }
      iVar3 = iVar3 + *(int *)(param_1 + iVar3 * 0xc + 0xec);
    } while (iVar3 < *(int *)(param_1 + 0xe0));
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AD000 */

void __thiscall
d3dDRIVER::ConfigureStageBlend(d3dDRIVER *this,rendCFG *param_1,d3dCFG_PREP *param_2)

{
  rendCFG rVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_1 + 0xb8);
  if ((&_d3dStageStateCache)[*(int *)(param_2 + 0xe0) * 0x13] != (d3dSTAGE_STATE_CACHE *)0x1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
              (*(int **)(d3dDriver + 0x77c),*(int *)(param_2 + 0xe0),1,1);
    (&_d3dStageStateCache)[*(int *)(param_2 + 0xe0) * 0x13] = (d3dSTAGE_STATE_CACHE *)0x1;
  }
  if ((&DAT_0061235c)[*(int *)(param_2 + 0xe0) * 0x13] != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
              (*(int **)(d3dDriver + 0x77c),*(int *)(param_2 + 0xe0),4,1);
    (&DAT_0061235c)[*(int *)(param_2 + 0xe0) * 0x13] = 1;
  }
  iVar5 = 0;
  if (0 < *(int *)(param_2 + 0xe0)) {
    do {
      if (*(int *)(param_2 + iVar5 * 0xc + 0xe8) != 0) {
        uVar3 = *(uint *)(*(int *)(param_2 + iVar5 * 0xc + 0xe8) + 8);
        if (uVar3 < 9) goto switchD_004ad0dd_switchD;
        goto switchD_004ad0dd_caseD_7;
      }
      uVar3 = 8;
switchD_004ad0dd_switchD:
      switch(uVar3) {
      case 0:
        if (iVar5 == 0) {
          if ((uVar2 & 2) == 0) {
            if ((uVar2 & 1) == 0) goto LAB_004adc1b;
            if (_d3dStageStateCache != (d3dSTAGE_STATE_CACHE *)&DAT_00000002) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),0,1,2);
              _d3dStageStateCache = (d3dSTAGE_STATE_CACHE *)&DAT_00000002;
            }
            if (DAT_00612354 != 2) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),0,2,2);
              DAT_00612354 = 2;
            }
          }
          else if ((uVar2 & 1) == 0) {
LAB_004adc1b:
            if ((uVar2 & 2) == 0) {
              if (_d3dStageStateCache != (d3dSTAGE_STATE_CACHE *)0x1) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),0,1,1);
                _d3dStageStateCache = (d3dSTAGE_STATE_CACHE *)0x1;
              }
            }
            else {
              if (_d3dStageStateCache != (d3dSTAGE_STATE_CACHE *)&DAT_00000002) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),0,1,2);
                _d3dStageStateCache = (d3dSTAGE_STATE_CACHE *)&DAT_00000002;
              }
              if (((uVar2 & 0x10) == 0) && ((uVar2 & 0x800) == 0)) {
                if (DAT_00612354 != 3) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),0,2,3);
                  DAT_00612354 = 3;
                }
              }
              else if (DAT_00612354 != 0) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),0,2,0);
                DAT_00612354 = 0;
              }
            }
          }
          else {
            if (_d3dStageStateCache != (d3dSTAGE_STATE_CACHE *)0x4) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),0,1,4);
              _d3dStageStateCache = (d3dSTAGE_STATE_CACHE *)0x4;
            }
            if (DAT_00612354 != 2) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),0,2,2);
              DAT_00612354 = 2;
            }
            if (((uVar2 & 0x10) == 0) && ((uVar2 & 0x800) == 0)) {
              if (DAT_00612358 != 3) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),0,3,3);
                DAT_00612358 = 3;
              }
            }
            else if (DAT_00612358 != 0) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),0,3,0);
              DAT_00612358 = 0;
            }
          }
          if ((uVar2 & 8) == 0) {
            if ((uVar2 & 4) == 0) goto LAB_004ade1e;
            if (DAT_0061235c != 2) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),0,4,2);
              DAT_0061235c = 2;
            }
            if (DAT_00612360 != 2) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),0,5,2);
              DAT_00612360 = 2;
            }
          }
          else if ((uVar2 & 4) == 0) {
LAB_004ade1e:
            if ((uVar2 & 8) == 0) {
              if (DAT_0061235c != 2) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),0,4,2);
                DAT_0061235c = 2;
              }
            }
            else {
              if (DAT_0061235c != 2) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),0,4,2);
                DAT_0061235c = 2;
              }
              if ((uVar2 & 0x10) != 0) {
                if (DAT_00612360 != 0) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),0,5,0);
                  DAT_00612360 = 0;
                }
                goto LAB_004aded5;
              }
            }
            if (DAT_00612360 != 3) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),0,5,3);
              DAT_00612360 = 3;
            }
          }
          else {
            if (DAT_0061235c != 4) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),0,4,4);
              DAT_0061235c = 4;
            }
            if (DAT_00612360 != 2) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),0,5,2);
              DAT_00612360 = 2;
            }
            if ((uVar2 & 0x10) == 0) {
              if (DAT_00612364 != 3) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),0,6,3);
                DAT_00612364 = 3;
              }
            }
            else if (DAT_00612364 != 0) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),0,6,0);
              DAT_00612364 = 0;
            }
          }
LAB_004aded5:
          rVar1 = param_1[0xb8];
        }
        else {
          if ((((uVar2 & 2) == 0) || ((uVar2 & 1) == 0)) &&
             (((uVar2 & 8) == 0 || ((uVar2 & 4) == 0)))) {
            if ((uVar2 & 1) == 0) {
              if ((uVar2 & 2) == 0) {
                if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x2) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5,1,2);
                  (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x2;
                }
                if ((&DAT_00612354)[iVar5 * 0x13] != 1) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5,2,1);
                  (&DAT_00612354)[iVar5 * 0x13] = 1;
                }
              }
              else {
                if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x4) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5,1,4);
                  (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x4;
                }
                if ((&DAT_00612354)[iVar5 * 0x13] != 1) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5,2,1);
                  (&DAT_00612354)[iVar5 * 0x13] = 1;
                }
                if (((uVar2 & 0x10) == 0) && ((uVar2 & 0x800) == 0)) {
                  if ((&DAT_00612358)[iVar5 * 0x13] != 3) {
                    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                              (*(int **)(d3dDriver + 0x77c),iVar5,3,3);
                    (&DAT_00612358)[iVar5 * 0x13] = 3;
                  }
                }
                else if ((&DAT_00612358)[iVar5 * 0x13] != 0) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5,3,0);
                  (&DAT_00612358)[iVar5 * 0x13] = 0;
                }
              }
            }
            else {
              if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x4) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5,1,4);
                (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x4;
              }
              if ((&DAT_00612354)[iVar5 * 0x13] != 1) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5,2,1);
                (&DAT_00612354)[iVar5 * 0x13] = 1;
              }
              if ((&DAT_00612358)[iVar5 * 0x13] != 2) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5,3,2);
                (&DAT_00612358)[iVar5 * 0x13] = 2;
              }
            }
            iVar6 = (&DAT_0061235c)[iVar5 * 0x13];
            if ((uVar2 & 4) == 0) {
              if ((uVar2 & 8) == 0) {
                if (iVar6 != 2) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5,4,2);
                  (&DAT_0061235c)[iVar5 * 0x13] = 2;
                }
                if ((&DAT_00612360)[iVar5 * 0x13] != 1) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5,5,1);
                  (&DAT_00612360)[iVar5 * 0x13] = 1;
                }
              }
              else {
                if (iVar6 != 4) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5,4,4);
                  (&DAT_0061235c)[iVar5 * 0x13] = 4;
                }
                if ((&DAT_00612360)[iVar5 * 0x13] != 1) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5,5,1);
                  (&DAT_00612360)[iVar5 * 0x13] = 1;
                }
                if (((uVar2 & 0x10) == 0) && ((uVar2 & 0x800) == 0)) {
                  if ((&DAT_00612364)[iVar5 * 0x13] != 3) {
                    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                              (*(int **)(d3dDriver + 0x77c),iVar5,6,3);
                    (&DAT_00612364)[iVar5 * 0x13] = 3;
                  }
                }
                else if ((&DAT_00612364)[iVar5 * 0x13] != 0) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5,6,0);
                  (&DAT_00612364)[iVar5 * 0x13] = 0;
                }
              }
            }
            else {
              if (iVar6 != 4) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5,4,4);
                (&DAT_0061235c)[iVar5 * 0x13] = 4;
              }
              if ((&DAT_00612360)[iVar5 * 0x13] != 1) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5,5,1);
                (&DAT_00612360)[iVar5 * 0x13] = 1;
              }
              if ((&DAT_00612364)[iVar5 * 0x13] != 2) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5,6,2);
                (&DAT_00612364)[iVar5 * 0x13] = 2;
              }
            }
          }
          else {
            iVar6 = iVar5 * 0x4c;
            if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x4) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),iVar5,1,4);
              (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x4;
            }
            if ((&DAT_00612354)[iVar5 * 0x13] != 1) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),iVar5,2,1);
              (&DAT_00612354)[iVar5 * 0x13] = 1;
            }
            if ((&DAT_00612358)[iVar5 * 0x13] != 2) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),iVar5,3,2);
              (&DAT_00612358)[iVar5 * 0x13] = 2;
            }
            if ((&DAT_0061235c)[iVar5 * 0x13] != 4) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),iVar5,4,4);
              (&DAT_0061235c)[iVar5 * 0x13] = 4;
            }
            if ((&DAT_00612360)[iVar5 * 0x13] != 1) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),iVar5,5,1);
              (&DAT_00612360)[iVar5 * 0x13] = 1;
            }
            if ((&DAT_00612364)[iVar5 * 0x13] != 2) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),iVar5,6,2);
              (&DAT_00612364)[iVar5 * 0x13] = 2;
            }
            if ((*(int *)(param_2 + iVar5 * 0xc + 0xdc) == 0) ||
               (*(int *)(*(int *)(param_2 + iVar5 * 0xc + 0xdc) + 8) == 8)) {
              if (*(int *)(&DAT_00612304 + iVar6) != 2) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5 + -1,1,2);
                *(undefined4 *)(&DAT_00612304 + iVar6) = 2;
              }
              if (((uVar2 & 0x10) == 0) && ((uVar2 & 0x800) == 0)) {
                if (*(int *)(&DAT_00612308 + iVar6) != 3) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5 + -1,2,3);
                  *(undefined4 *)(&DAT_00612308 + iVar6) = 3;
                }
              }
              else if (*(int *)(&DAT_00612308 + iVar6) != 0) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5 + -1,2,0);
                *(undefined4 *)(&DAT_00612308 + iVar6) = 0;
              }
              if (*(int *)(&DAT_00612310 + iVar6) != 2) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5 + -1,4,2);
                *(undefined4 *)(&DAT_00612310 + iVar6) = 2;
              }
              if (((uVar2 & 0x10) == 0) && ((uVar2 & 0x800) == 0)) {
                if (*(int *)(&DAT_00612314 + iVar6) != 3) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5 + -1,5,3);
                  *(undefined4 *)(&DAT_00612314 + iVar6) = 3;
                }
              }
              else if (*(int *)(&DAT_00612314 + iVar6) != 0) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5 + -1,5,0);
                *(undefined4 *)(&DAT_00612314 + iVar6) = 0;
              }
            }
            else {
              if (*(int *)(&DAT_0061239c + iVar6) != 4) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5 + 1,1,4);
                *(undefined4 *)(&DAT_0061239c + iVar6) = 4;
              }
              if (*(int *)(&DAT_006123a0 + iVar6) != 1) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5 + 1,2,1);
                *(undefined4 *)(&DAT_006123a0 + iVar6) = 1;
              }
              if (((uVar2 & 0x10) == 0) && ((uVar2 & 0x800) == 0)) {
                if (*(int *)(&DAT_006123a4 + iVar6) != 3) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5 + 1,3,3);
                  *(undefined4 *)(&DAT_006123a4 + iVar6) = 3;
                }
              }
              else if (*(int *)(&DAT_006123a4 + iVar6) != 0) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5 + 1,3,0);
                *(undefined4 *)(&DAT_006123a4 + iVar6) = 0;
              }
              if (*(int *)(&DAT_006123a8 + iVar6) != 4) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5 + 1,4,4);
                *(undefined4 *)(&DAT_006123a8 + iVar6) = 4;
              }
              if (*(int *)(&DAT_006123ac + iVar6) != 1) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5 + 1,5,1);
                *(undefined4 *)(&DAT_006123ac + iVar6) = 1;
              }
              if (((uVar2 & 0x10) == 0) && ((uVar2 & 0x800) == 0)) {
                if (*(int *)(&DAT_006123b0 + iVar6) != 3) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                            (*(int **)(d3dDriver + 0x77c),iVar5 + 1,6,3);
                  *(undefined4 *)(&DAT_006123b0 + iVar6) = 3;
                }
              }
              else if (*(int *)(&DAT_006123b0 + iVar6) != 0) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                          (*(int **)(d3dDriver + 0x77c),iVar5 + 1,6,0);
                *(undefined4 *)(&DAT_006123b0 + iVar6) = 0;
              }
            }
          }
          rVar1 = param_1[0xb8];
        }
        if (((byte)rVar1 & 0x10) == 0) goto LAB_004ae692;
        break;
      case 1:
        if (iVar5 < 1) {
          if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x2) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                      (*(int **)(d3dDriver + 0x77c),iVar5,1,2);
            (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x2;
          }
          if ((&DAT_00612354)[iVar5 * 0x13] != 2) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                      (*(int **)(d3dDriver + 0x77c),iVar5,2,2);
            (&DAT_00612354)[iVar5 * 0x13] = 2;
          }
        }
        else {
          if ((char)((uint)*(undefined4 *)(*(int *)(this + 0x210) + 0x14) >> 8) < '\0') {
            if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x7) {
              piVar4 = *(int **)(d3dDriver + 0x77c);
LAB_004ad2dc:
              (**(code **)(*piVar4 + 0x94))(piVar4,iVar5,1,7);
              (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x7;
            }
          }
          else if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x4) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                      (*(int **)(d3dDriver + 0x77c),iVar5,1,4);
            (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x4;
          }
LAB_004ad14e:
          if ((&DAT_00612354)[iVar5 * 0x13] != 2) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                      (*(int **)(d3dDriver + 0x77c),iVar5,2,2);
            (&DAT_00612354)[iVar5 * 0x13] = 2;
          }
          if ((&DAT_00612358)[iVar5 * 0x13] != 1) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                      (*(int **)(d3dDriver + 0x77c),iVar5,3,1);
            (&DAT_00612358)[iVar5 * 0x13] = 1;
          }
        }
LAB_004ad1a1:
        if ((&DAT_0061235c)[iVar5 * 0x13] != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,4,2);
          (&DAT_0061235c)[iVar5 * 0x13] = 2;
        }
        if ((&DAT_00612360)[iVar5 * 0x13] != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,5,1);
          (&DAT_00612360)[iVar5 * 0x13] = 1;
        }
        break;
      case 2:
      case 3:
        if (0 < iVar5) {
          if ((*(uint *)(param_1 + 0xb8) & 0x1000) == 0) {
            if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0xd) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                        (*(int **)(d3dDriver + 0x77c),iVar5,1,0xd);
              (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0xd;
            }
          }
          else if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x7) {
            piVar4 = *(int **)(d3dDriver + 0x77c);
            goto LAB_004ad2dc;
          }
          goto LAB_004ad14e;
        }
        if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,1,2);
          (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x2;
        }
        if ((&DAT_00612354)[iVar5 * 0x13] != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,2,2);
          (&DAT_00612354)[iVar5 * 0x13] = 2;
        }
        if ((&DAT_0061235c)[iVar5 * 0x13] != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,4,2);
          (&DAT_0061235c)[iVar5 * 0x13] = 2;
        }
        if ((&DAT_00612360)[iVar5 * 0x13] != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,5,2);
          (&DAT_00612360)[iVar5 * 0x13] = 2;
        }
        break;
      case 4:
        iVar6 = iVar5 * 0x4c;
        if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x18) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,1,0x18);
          (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x18;
        }
        if ((&DAT_00612354)[iVar5 * 0x13] != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,2,2);
          (&DAT_00612354)[iVar5 * 0x13] = 2;
        }
        if ((&DAT_00612358)[iVar5 * 0x13] != 4) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,3,4);
          (&DAT_00612358)[iVar5 * 0x13] = 4;
        }
        if ((&DAT_0061235c)[iVar5 * 0x13] != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,4,2);
          (&DAT_0061235c)[iVar5 * 0x13] = 2;
        }
        if ((&DAT_00612360)[iVar5 * 0x13] != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,5,1);
          (&DAT_00612360)[iVar5 * 0x13] = 1;
        }
        if (*(int *)(&DAT_0061239c + iVar6) != 7) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,1,7);
          *(undefined4 *)(&DAT_0061239c + iVar6) = 7;
        }
        if (*(int *)(&DAT_006123a0 + iVar6) != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,2,1);
          *(undefined4 *)(&DAT_006123a0 + iVar6) = 1;
        }
        if (((uVar2 & 8) == 0) || ((uVar2 & 0x20) == 0)) {
          if (*(int *)(&DAT_006123a4 + iVar6) != 0) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                      (*(int **)(d3dDriver + 0x77c),iVar5 + 1,3,0);
            *(undefined4 *)(&DAT_006123a4 + iVar6) = 0;
          }
        }
        else {
          if (*(int *)(&DAT_006123a4 + iVar6) != 3) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                      (*(int **)(d3dDriver + 0x77c),iVar5 + 1,3,3);
            *(undefined4 *)(&DAT_006123a4 + iVar6) = 3;
          }
          if (DAT_006121f0 != *(int *)(param_1 + 0xbc)) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                      (*(int **)(d3dDriver + 0x77c),0x3c,*(int *)(param_1 + 0xbc));
            DAT_006121f0 = *(int *)(param_1 + 0xbc);
          }
        }
        if (*(int *)(&DAT_006123a8 + iVar6) != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,4,2);
          *(undefined4 *)(&DAT_006123a8 + iVar6) = 2;
        }
        if (*(int *)(&DAT_006123ac + iVar6) != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,5,1);
          *(undefined4 *)(&DAT_006123ac + iVar6) = 1;
        }
        break;
      case 5:
        iVar6 = iVar5 * 0x4c;
        if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x18) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,1,0x18);
          (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x18;
        }
        if ((&DAT_00612354)[iVar5 * 0x13] != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,2,2);
          (&DAT_00612354)[iVar5 * 0x13] = 2;
        }
        if ((&DAT_00612358)[iVar5 * 0x13] != 4) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,3,4);
          (&DAT_00612358)[iVar5 * 0x13] = 4;
        }
        if ((&DAT_0061235c)[iVar5 * 0x13] != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,4,2);
          (&DAT_0061235c)[iVar5 * 0x13] = 2;
        }
        if ((&DAT_00612360)[iVar5 * 0x13] != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,5,1);
          (&DAT_00612360)[iVar5 * 0x13] = 1;
        }
        if (*(int *)(&DAT_0061239c + iVar6) != 4) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,1,4);
          *(undefined4 *)(&DAT_0061239c + iVar6) = 4;
        }
        if (*(int *)(&DAT_006123a0 + iVar6) != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,2,1);
          *(undefined4 *)(&DAT_006123a0 + iVar6) = 1;
        }
        if (*(int *)(&DAT_006123a4 + iVar6) != 3) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,3,3);
          *(undefined4 *)(&DAT_006123a4 + iVar6) = 3;
        }
        if (*(int *)(&DAT_006123a8 + iVar6) != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,4,2);
          *(undefined4 *)(&DAT_006123a8 + iVar6) = 2;
        }
        if (*(int *)(&DAT_006123ac + iVar6) != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,5,1);
          *(undefined4 *)(&DAT_006123ac + iVar6) = 1;
        }
        goto LAB_004ae692;
      case 6:
        iVar6 = iVar5 * 0x4c;
        if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x18) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,1,0x18);
          (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x18;
        }
        if ((&DAT_00612354)[iVar5 * 0x13] != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,2,2);
          (&DAT_00612354)[iVar5 * 0x13] = 2;
        }
        if ((&DAT_00612358)[iVar5 * 0x13] != 4) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,3,4);
          (&DAT_00612358)[iVar5 * 0x13] = 4;
        }
        if ((&DAT_0061235c)[iVar5 * 0x13] != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,4,2);
          (&DAT_0061235c)[iVar5 * 0x13] = 2;
        }
        if ((&DAT_00612360)[iVar5 * 0x13] != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5,5,1);
          (&DAT_00612360)[iVar5 * 0x13] = 1;
        }
        if (*(int *)(&DAT_0061239c + iVar6) != 4) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,1,4);
          *(undefined4 *)(&DAT_0061239c + iVar6) = 4;
        }
        if (*(int *)(&DAT_006123a0 + iVar6) != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,2,2);
          *(undefined4 *)(&DAT_006123a0 + iVar6) = 2;
        }
        if (*(int *)(&DAT_006123a4 + iVar6) != 3) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,3,3);
          *(undefined4 *)(&DAT_006123a4 + iVar6) = 3;
        }
        if (*(int *)(&DAT_006123a8 + iVar6) != 7) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,4,7);
          *(undefined4 *)(&DAT_006123a8 + iVar6) = 7;
        }
        if (*(int *)(&DAT_006123ac + iVar6) != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,5,1);
          *(undefined4 *)(&DAT_006123ac + iVar6) = 1;
        }
        if (*(int *)(&DAT_006123b0 + iVar6) != 0) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar5 + 1,6,0);
          *(undefined4 *)(&DAT_006123b0 + iVar6) = 0;
        }
LAB_004ae692:
        if (DAT_006121f0 != *(int *)(param_1 + 0xbc)) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                    (*(int **)(d3dDriver + 0x77c),0x3c,*(int *)(param_1 + 0xbc));
          DAT_006121f0 = *(int *)(param_1 + 0xbc);
        }
        break;
      case 7:
        break;
      default:
        if (iVar5 != 0) {
          if ((&_d3dStageStateCache)[iVar5 * 0x13] != (d3dSTAGE_STATE_CACHE *)0x2) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                      (*(int **)(d3dDriver + 0x77c),iVar5,1,2);
            (&_d3dStageStateCache)[iVar5 * 0x13] = (d3dSTAGE_STATE_CACHE *)0x2;
          }
          if ((&DAT_00612354)[iVar5 * 0x13] != 1) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                      (*(int **)(d3dDriver + 0x77c),iVar5,2,1);
            (&DAT_00612354)[iVar5 * 0x13] = 1;
          }
          goto LAB_004ad1a1;
        }
        if (_d3dStageStateCache != (d3dSTAGE_STATE_CACHE *)&DAT_00000002) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))(*(int **)(d3dDriver + 0x77c),0,1,2);
          _d3dStageStateCache = (d3dSTAGE_STATE_CACHE *)&DAT_00000002;
        }
        if (DAT_00612354 != 3) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))(*(int **)(d3dDriver + 0x77c),0,2,3);
          DAT_00612354 = 3;
        }
        if (DAT_0061235c != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))(*(int **)(d3dDriver + 0x77c),0,4,2);
          DAT_0061235c = 2;
        }
        if (DAT_00612360 != 3) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))(*(int **)(d3dDriver + 0x77c),0,5,3);
          DAT_00612360 = 3;
        }
        if (DAT_006121f0 != -1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                    (*(int **)(d3dDriver + 0x77c),0x3c,0xffffffff);
          DAT_006121f0 = -1;
        }
      }
switchD_004ad0dd_caseD_7:
      iVar5 = iVar5 + *(int *)(param_2 + iVar5 * 0xc + 0xec);
    } while (iVar5 < *(int *)(param_2 + 0xe0));
  }
  if ((uVar2 & 0x400) == 0) {
    if (((byte)this[0x250] & 1) != 0) {
      if (DAT_00612158 != 2) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),9,2);
        DAT_00612158 = 2;
      }
      if (DAT_00612184 != 1) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1a,1);
        DAT_00612184 = 1;
      }
      if (DAT_006121e8 != 1) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x10,1);
        DAT_006121e8 = 1;
      }
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      ConfigureFiltration(this,uVar2 & 0x200,uVar2 & 0x400,uVar2 & 0x20000,1);
      *(uint *)(this + 0x250) = *(uint *)(this + 0x250) & 0xfffffffe;
    }
  }
  else if (((byte)this[0x250] & 1) == 0) {
    if (DAT_00612158 != 1) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),9,1);
      DAT_00612158 = 1;
    }
    if (DAT_00612184 != 0) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1a,0);
      DAT_00612184 = 0;
    }
    if (DAT_006121e8 != 0) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x10,0);
      DAT_006121e8 = 0;
    }
    ConfigureFiltration(this,0,0,0,0);
    *(uint *)(this + 0x250) = *(uint *)(this + 0x250) | 1;
    return;
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AE8A0 */

void __thiscall
d3dDRIVER::ConfigureStencil(d3dDRIVER *this,ulong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((*(uint *)(this + 4) & 0x1000000) == 0) {
    return;
  }
  if ((*(uint *)(this + 4) & 0x200) == 0) {
    return;
  }
  if ((param_2 != -1) && (DAT_006121dc != param_2)) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x39,param_2);
    DAT_006121dc = param_2;
  }
  if (param_3 != -1) {
    if (param_3 == 0xffff) {
      if (DAT_006121d8 != -1) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                  (*(int **)(d3dDriver + 0x77c),0x3a,0xffffffff);
        DAT_006121d8 = -1;
      }
    }
    else if (DAT_006121d8 != param_3) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x3a,param_3)
      ;
      DAT_006121d8 = param_3;
    }
  }
  if (param_4 != -1) {
    if (param_4 == 0xffff) {
      if (DAT_006121d4 != -1) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                  (*(int **)(d3dDriver + 0x77c),0x3b,0xffffffff);
        DAT_006121d4 = -1;
      }
    }
    else if (DAT_006121d4 != param_4) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x3b,param_4)
      ;
      DAT_006121d4 = param_4;
    }
  }
  if ((param_1 & 4) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 0x10) == 0) {
        if ((param_1 & 0x20) == 0) goto LAB_004ae9ec;
        iVar1 = 6;
      }
      else {
        iVar1 = 3;
      }
    }
    else {
      iVar1 = 4;
    }
  }
  else {
    iVar1 = 8;
  }
  if (DAT_006121cc != iVar1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x38,iVar1);
    DAT_006121cc = iVar1;
  }
LAB_004ae9ec:
  if ((param_1 & 0x40) == 0) {
    if ((char)param_1 < '\0') {
      if (DAT_006121d0 != 1) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x37,1);
        DAT_006121d0 = 1;
      }
    }
    else if ((*(uint *)(this + 4) & 0x400) == 0) {
      if ((param_1 & 0x100) == 0) {
        if ((param_1 & 0x200) != 0) {
          if (((byte)d3dDriver[0x60c] & 0x10) == 0) {
            if (DAT_006121d0 != 8) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                        (*(int **)(d3dDriver + 0x77c),0x37,8);
              DAT_006121d0 = 8;
            }
          }
          else if (DAT_006121d0 != 5) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x37,5)
            ;
            DAT_006121d0 = 5;
          }
        }
      }
      else if (((byte)d3dDriver[0x60c] & 8) == 0) {
        if (DAT_006121d0 != 7) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x37,7);
          DAT_006121d0 = 7;
        }
      }
      else if (DAT_006121d0 != 4) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x37,4);
        DAT_006121d0 = 4;
      }
    }
  }
  else if (DAT_006121d0 != 3) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x37,3);
    DAT_006121d0 = 3;
  }
  if ((param_1 & 0x400) == 0) {
    if ((param_1 & 0x800) == 0) {
      if ((*(uint *)(this + 4) & 0x400) == 0) {
        if ((param_1 & 0x1000) == 0) {
          if ((param_1 & 0x2000) != 0) {
            if (((byte)d3dDriver[0x60c] & 0x10) == 0) {
              if (DAT_006121e0 != 8) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                          (*(int **)(d3dDriver + 0x77c),0x36,8);
                DAT_006121e0 = 8;
              }
            }
            else if (DAT_006121e0 != 5) {
              (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                        (*(int **)(d3dDriver + 0x77c),0x36,5);
              DAT_006121e0 = 5;
            }
          }
        }
        else if (((byte)d3dDriver[0x60c] & 8) == 0) {
          if (DAT_006121e0 != 7) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x36,7)
            ;
            DAT_006121e0 = 7;
          }
        }
        else if (DAT_006121e0 != 4) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x36,4);
          DAT_006121e0 = 4;
        }
      }
    }
    else if (DAT_006121e0 != 1) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x36,1);
      DAT_006121e0 = 1;
    }
  }
  else if (DAT_006121e0 != 3) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x36,3);
    DAT_006121e0 = 3;
  }
  if (DAT_006121e4 != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x35,1);
    DAT_006121e4 = 1;
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AEC80 */

void __thiscall d3dDRIVER::ToggleStencil(d3dDRIVER *this,int param_1)

{
  if ((*(uint *)(this + 4) & 0x200) != 0) {
    if (param_1 == 0) {
      if (DAT_006121c8 != 0) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x34,0);
        DAT_006121c8 = 0;
      }
    }
    else if (DAT_006121c8 != 1) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x34,1);
      DAT_006121c8 = 1;
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:d3d_cfg.cpp
   addr: 004AECF0 */

void __thiscall d3dDRIVER::SetNearFarZValue(d3dDRIVER *this,float param_1,float param_2)

{
  vidDRIVER::SetNearFarZValue((vidDRIVER *)this,param_1,param_2);
  *(float *)(this + 0x1da0) = *(float *)(this + 0x224) / param_1;
  *(float *)(this + 0x1da4) = *(float *)(this + 0x224) / param_2;
  *(float *)(this + 0x1da8) =
       ___real_3f800000 / (*(float *)(this + 0x224) / param_2 - *(float *)(this + 0x224) / param_1);
  *(float *)(this + 0x1dac) = param_1 / (param_2 - param_1) + ___real_3f800000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:d3d_cfg.cpp
   addr: 004AED50 */

int __thiscall d3dDRIVER::SetGamma(d3dDRIVER *this,float param_1)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  d3dDRIVER *pdVar6;
  
  fVar2 = ___real_3a83126f;
  if ((*(uint *)(this + 4) & 0x1000000) == 0) {
    return 1;
  }
  if (param_1 < ___real_3c23d70a) {
    param_1 = 0.01;
  }
  fVar1 = *(float *)(this + 0x218);
  iVar4 = vidDRIVER::SetGamma((vidDRIVER *)this,param_1);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x1118) == 0) {
    return 0;
  }
  if (fVar2 < ABS(fVar1 - param_1)) {
    iVar4 = 0;
    pdVar6 = this + 0x1b1c;
    do {
      CIpow();
      iVar5 = ftol();
      if (0xff < iVar5) {
        iVar5 = 0xff;
      }
      uVar3 = (undefined2)(iVar5 << 8);
      *(undefined2 *)(pdVar6 + -0x400) = uVar3;
      *(undefined2 *)pdVar6 = uVar3;
      *(undefined2 *)(pdVar6 + -0x200) = uVar3;
      iVar4 = iVar4 + 1;
      pdVar6 = pdVar6 + 2;
    } while (iVar4 < 0x100);
  }
  iVar4 = (**(code **)(**(int **)(this + 0x1118) + 0x10))(*(int **)(this + 0x1118),0,this + 0x171c);
  return (uint)(iVar4 == 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:d3d_cfg.cpp
   addr: 004AEE70 */

void __thiscall d3dDRIVER::ConfigureFog(d3dDRIVER *this,vidFOG *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  
  if ((*(uint *)(this + 4) & 0x1000000) != 0) {
    uVar5 = ftol();
    uVar6 = ftol();
    uVar7 = ftol();
    uVar7 = (uint)CONCAT11(uVar5,uVar6) << 8 | uVar7 & 0xff;
    *(uint *)(this + 0x1dc4) = uVar7;
    if (DAT_00612190 != uVar7) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x22,uVar7);
      DAT_00612190 = *(uint *)(this + 0x1dc4);
    }
    fVar2 = ___real_3f800000;
    if (___real_3f800000 <= *(float *)(param_1 + 0x10)) {
      fVar2 = *(float *)(param_1 + 0x10);
    }
    *(float *)(this + 0x1db4) = *(float *)(this + 0x224) / fVar2;
    if (*(float *)(param_1 + 0x14) <= *(float *)(param_1 + 0x10)) {
      fVar1 = *(float *)(param_1 + 0x10);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x14);
    }
    fVar4 = ___real_3f800000;
    if (___real_3f800000 <= fVar1) {
      if (*(float *)(param_1 + 0x14) <= *(float *)(param_1 + 0x10)) {
        fVar4 = *(float *)(param_1 + 0x10);
      }
      else {
        fVar4 = *(float *)(param_1 + 0x14);
      }
    }
    *(float *)(this + 0x1db8) = *(float *)(this + 0x224) / fVar4;
    fVar1 = *(float *)(param_1 + 0x18);
    fVar3 = ___real_00000000;
    if ((___real_00000000 <= fVar1) && (fVar3 = fVar1, ___real_3f800000 < fVar1)) {
      fVar3 = ___real_3f800000;
    }
    *(float *)(this + 0x1dbc) = fVar3;
    *(float *)(this + 0x1dc0) =
         (fVar3 * ___real_437f0000) /
         (*(float *)(this + 0x224) / fVar4 - *(float *)(this + 0x224) / fVar2);
    if (DAT_00612198 != 3) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x8c,3);
      DAT_00612198 = 3;
    }
    if (*(float *)(param_1 + 0x10) != _DAT_0061209c) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                (*(int **)(d3dDriver + 0x77c),0x24,*(undefined4 *)(param_1 + 0x10));
      _DAT_0061209c = *(float *)(param_1 + 0x10);
    }
    if (*(float *)(param_1 + 0x14) != _DAT_006120a0) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                (*(int **)(d3dDriver + 0x77c),0x25,*(undefined4 *)(param_1 + 0x14));
      _DAT_006120a0 = *(float *)(param_1 + 0x14);
    }
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AF050
   addr: 004AF050
   addr: 004AF050 */

void __thiscall d3dDRIVER::ToggleMipMap(d3dDRIVER *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(this + 0x210) + 0x14);
  ConfigureFiltration(this,uVar1 & 0x200,uVar1 & 0x400,uVar1 & 0x20000,1);
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AF080 */

void __thiscall d3dDRIVER::ToggleFog(d3dDRIVER *this,int param_1)

{
  d3dREND_DRIVER::DrawPostBuf(*(d3dREND_DRIVER **)(this + 0x24c));
  *(int *)(this + 0x1db0) = param_1;
  if (param_1 == 0) {
    if (DAT_00612188 != 0) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1c,0);
      DAT_00612188 = 0;
    }
  }
  else if (DAT_00612188 != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1c,1);
    DAT_00612188 = 1;
    return;
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AF0F0 */

void __thiscall d3dDRIVER::ToggleZCompare(d3dDRIVER *this,int param_1)

{
  if (param_1 == 0) {
    if (DAT_00612178 != 8) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x17,8);
      DAT_00612178 = 8;
    }
  }
  else if (DAT_00612178 != 4) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x17,4);
    DAT_00612178 = 4;
    return;
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AF150 */

void __thiscall d3dDRIVER::ToggleZWrite(d3dDRIVER *this,int param_1)

{
  if (param_1 == 0) {
    if (DAT_0061215c != 0) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0xe,0);
      DAT_0061215c = 0;
    }
  }
  else if (DAT_0061215c != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0xe,1);
    DAT_0061215c = 1;
    return;
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AF1B0 */

void __thiscall d3dDRIVER::ToggleWBuffer(d3dDRIVER *this,int param_1)

{
  if (((*(uint *)(*(int *)(this + 0x210) + 0x14) & 0x100) == 0) ||
     ((*(uint *)(this + 0x5a4) & 0x40000) == 0)) {
    if (DAT_00612154 != 1) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),7,1);
      DAT_00612154 = 1;
    }
  }
  else if (DAT_00612154 != 2) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),7,2);
    DAT_00612154 = 2;
    return;
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AF230 */

void __thiscall d3dDRIVER::ToggleFSAA(d3dDRIVER *this,int param_1)

{
  if ((*(int *)(*(int *)(this + 0x210) + 0x14) < 0) && ((*(uint *)(this + 0x5a4) & 0x800) != 0)) {
    if (DAT_006121c4 != 2) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),2,2);
      DAT_006121c4 = 2;
      return;
    }
  }
  else if (DAT_006121c4 != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),2,0);
    DAT_006121c4 = 0;
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AF2A0 */

void __thiscall
d3dDRIVER::ConfigureFiltration(d3dDRIVER *this,int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_3 == 0) {
    param_4 = 0;
  }
  uVar1 = *(uint *)(d3dDriver + 0x5c0);
  if (((uVar1 & 0x4000000) == 0) || (param_4 == 0)) {
    iVar4 = ((uVar1 & 0x2000000) != 0) + 1;
  }
  else {
    iVar4 = 5;
  }
  if (((uVar1 & 0x400) == 0) || (param_4 == 0)) {
    iVar3 = ((uVar1 & 0x200) != 0) + 1;
  }
  else {
    iVar3 = 3;
  }
  if (((uVar1 & 0x20000) == 0) || (param_3 == 0)) {
    param_4 = 2;
  }
  else {
    param_4 = 3;
  }
  param_3 = 2;
  if (param_1 == 0) {
    iVar3 = 1;
    iVar4 = 1;
  }
  if (param_2 == 0) {
    param_3 = 1;
  }
  iVar2 = (2 < *(int *)(this + 0x238)) + 1;
  iVar6 = 0;
  if (iVar2 != 0) {
    piVar5 = &DAT_00612380;
    do {
      if (piVar5[-1] != iVar4) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                  (*(int **)(d3dDriver + 0x77c),iVar6,0x10,iVar4);
        piVar5[-1] = iVar4;
      }
      if (*piVar5 != iVar3) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                  (*(int **)(d3dDriver + 0x77c),iVar6,0x11,iVar3);
        *piVar5 = iVar3;
      }
      if (piVar5[1] != param_4) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                  (*(int **)(d3dDriver + 0x77c),iVar6,0x12,param_4);
        piVar5[1] = param_4;
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 0x13;
    } while (iVar6 < iVar2);
  }
  if (iVar2 < *(int *)(this + 0x238)) {
    piVar5 = &DAT_00612380 + iVar2 * 0x13;
    do {
      if (piVar5[-1] != iVar4) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                  (*(int **)(d3dDriver + 0x77c),iVar2,0x10,iVar4);
        piVar5[-1] = iVar4;
      }
      if (*piVar5 != iVar3) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                  (*(int **)(d3dDriver + 0x77c),iVar2,0x11,iVar3);
        *piVar5 = iVar3;
      }
      if (piVar5[1] != param_3) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                  (*(int **)(d3dDriver + 0x77c),iVar2,0x12,param_3);
        piVar5[1] = param_3;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0x13;
    } while (iVar2 < *(int *)(this + 0x238));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:d3d_cfg.cpp
   addr: 004AF490 */

void __thiscall d3dDRIVER::SetStartRenderingState(d3dDRIVER *this)

{
  int iVar1;
  d3dSTATE_CACHE *pdVar2;
  d3dSTAGE_STATE_CACHE **ppdVar3;
  d3dSTAGE_STATE_FLOAT_CACHE **ppdVar4;
  
  (**(code **)(*(int *)this + 0x18))();
  pdVar2 = &_d3dStateCache;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0xffffffff;
    pdVar2 = pdVar2 + 4;
  }
  __d3dStateFloatCache = 0;
  _DAT_00612094 = 0;
  _DAT_00612218 = 0xbf800000;
  _DAT_00612098 = 0;
  _DAT_0061221c = 0xbf800000;
  _DAT_0061209c = 0;
  _DAT_006120a0 = 0;
  ppdVar3 = &_d3dStageStateCache;
  for (iVar1 = 0x72; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppdVar3 = (d3dSTAGE_STATE_CACHE *)0xffffffff;
    ppdVar3 = ppdVar3 + 1;
  }
  ppdVar4 = &_d3dStageStateFloatCache;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppdVar4 = (d3dSTAGE_STATE_FLOAT_CACHE *)0x0;
    ppdVar4 = ppdVar4 + 1;
  }
  if (DAT_00612148 != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),4,1);
    DAT_00612148 = 1;
  }
  if (DAT_00612154 != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),7,1);
    DAT_00612154 = 1;
  }
  if (DAT_0061215c != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0xe,1);
    DAT_0061215c = 1;
  }
  if (DAT_00612178 != 4) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x17,4);
    DAT_00612178 = 4;
  }
  if (DAT_00612214 != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x2f,0);
    DAT_00612214 = 0;
  }
  if (DAT_00612158 != 2) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),9,2);
    DAT_00612158 = 2;
  }
  if (DAT_0061217c != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x18,0);
    DAT_0061217c = 0;
  }
  if (DAT_00612160 != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0xf,0);
    DAT_00612160 = 0;
  }
  if (DAT_00612180 != 8) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x19,8);
    DAT_00612180 = 8;
  }
  if (((byte)this[0x5a4] & 1) == 0) {
    if (DAT_00612184 != 0) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1a,0);
      DAT_00612184 = 0;
    }
  }
  else if (DAT_00612184 != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1a,1);
    DAT_00612184 = 1;
  }
  if (DAT_006121a0 != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x29,0);
    DAT_006121a0 = 0;
  }
  if (DAT_006121bc != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x16,1);
    DAT_006121bc = 1;
  }
  if (DAT_006121c0 != 3) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),8,3);
    DAT_006121c0 = 3;
  }
  if (DAT_0061218c != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1d,0);
    DAT_0061218c = 0;
  }
  if (DAT_006121b0 != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x8a,0);
    DAT_006121b0 = 0;
  }
  if (DAT_006121b4 != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x89,0);
    DAT_006121b4 = 0;
  }
  if (DAT_006121b8 != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x88,0);
    DAT_006121b8 = 0;
  }
  if (DAT_006121f8 != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x8f,1);
    DAT_006121f8 = 1;
  }
  if (DAT_00612200 != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x93,0);
    DAT_00612200 = 0;
  }
  if (DAT_00612204 != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x91,0);
    DAT_00612204 = 0;
  }
  if (DAT_00612208 != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x92,0);
    DAT_00612208 = 0;
  }
  if (DAT_0061220c != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x94,0);
    DAT_0061220c = 0;
  }
  if (DAT_00612210 != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x8d,1);
    DAT_00612210 = 1;
  }
  if (DAT_006121ec != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x28,0);
    DAT_006121ec = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004af8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x1c))();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:d3d_cfg.cpp
   addr: 004AF8C0 */

void __thiscall d3dREND_DRIVER::ConfigureClipPlane(d3dREND_DRIVER *this,m3dV *param_1,m3dV *param_2)

{
  uint uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  rendDRIVER::ConfigureClipPlane((rendDRIVER *)this,param_1,param_2);
  uVar1 = *(uint *)(d3dDriver + 4);
  if (((((uVar1 & 0x1000000) != 0) && ((uVar1 & 0x2000) != 0)) &&
      ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x400000) != 0)) &&
     (((uVar1 & 0x4000) != 0 && (*(short *)(d3dDriver + 0x634) != 0)))) {
    local_10 = *(undefined4 *)param_2;
    local_c = *(undefined4 *)(param_2 + 4);
    local_8 = *(undefined4 *)(param_2 + 8);
    local_4 = (DAT_00963740 - *(float *)(param_1 + 4)) * *(float *)(param_2 + 4) +
              (_m3dVZero - *(float *)param_1) * *(float *)param_2 +
              (DAT_00963744 - *(float *)(param_1 + 8)) * *(float *)(param_2 + 8);
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0xb8))(*(int **)(d3dDriver + 0x77c),0,&local_10);
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AF970 */

void __thiscall d3dREND_DRIVER::EnableClipPlane(d3dREND_DRIVER *this,int param_1)

{
  rendDRIVER::EnableClipPlane((rendDRIVER *)this,param_1);
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    if (DAT_006121f4 != 0) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x98,0);
      DAT_006121f4 = 0;
    }
    if ((((*(uint *)(d3dDriver + 4) & 0x2000) != 0) &&
        ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x400000) != 0)) &&
       ((*(uint *)(d3dDriver + 4) & 0x4000) != 0)) {
      if (*(int *)(this + 0x1e0c) == 1) {
        if (param_1 == 0) {
          if (DAT_006121f4 != 0) {
            (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x98,0)
            ;
            DAT_006121f4 = 0;
            return;
          }
        }
        else if (DAT_006121f4 != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x98,1);
          DAT_006121f4 = 1;
          return;
        }
      }
      else if (param_1 == 0) {
        if (DAT_006121f4 != 0x1e) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                    (*(int **)(d3dDriver + 0x77c),0x98,0x1e);
          DAT_006121f4 = 0x1e;
        }
      }
      else if (DAT_006121f4 != 0x1f) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x98,0x1f);
        DAT_006121f4 = 0x1f;
        return;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:d3d_cfg.cpp
   addr: 004AFAA0 */

void __thiscall d3dREND_DRIVER::SetMtlCoeff(d3dREND_DRIVER *this,mtlCOEFF *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [5];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    if ((ABS(_DAT_00612218 - *(float *)param_1) < ___real_3a83126f) &&
       (ABS(_DAT_0061221c - *(float *)(param_1 + 4)) < ___real_3a83126f)) {
      return;
    }
    _DAT_00612218 = *(float *)param_1;
    _DAT_0061221c = *(float *)(param_1 + 4);
    puVar2 = local_44;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_44[4] = *(undefined4 *)param_1;
    local_28 = 0x3f800000;
    local_44[0] = *(undefined4 *)(param_1 + 4);
    local_44[3] = 0x3f800000;
    local_44[1] = local_44[0];
    local_44[2] = local_44[0];
    local_30 = local_44[4];
    local_2c = local_44[4];
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x40))(*(int **)(d3dDriver + 0x77c),local_44);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:d3d_cfg.cpp
   addr: 004AFB70 */

void __thiscall d3dREND_DRIVER::SetLight(d3dREND_DRIVER *this,rendLIGHT *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_68 [5];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_1c;
  undefined4 local_14;
  
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    local_1c = SQRT((float)___real_47efffffe0000000);
    puVar1 = local_68;
    for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_68[0] = 1;
    local_14 = 0x3f800000;
    local_68[1] = *(undefined4 *)(param_1 + 0x1c);
    local_68[2] = *(undefined4 *)(param_1 + 0x20);
    local_68[3] = *(undefined4 *)(param_1 + 0x24);
    local_54 = *(undefined4 *)(param_1 + 0x2c);
    local_50 = *(undefined4 *)(param_1 + 0x30);
    local_4c = *(undefined4 *)(param_1 + 0x34);
    local_34 = *(undefined4 *)(param_1 + 4);
    local_30 = *(undefined4 *)(param_1 + 8);
    local_2c = *(undefined4 *)(param_1 + 0xc);
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x48))(*(int **)(d3dDriver + 0x77c),0,local_68);
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AFC10 */

void __thiscall d3dREND_DRIVER::EnableLight(d3dREND_DRIVER *this,int param_1)

{
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0xb0))(*(int **)(d3dDriver + 0x77c),0,param_1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:d3d_cfg.cpp
   addr: 004AFC40 */

void __thiscall
d3dREND_DRIVER::BeginCamera(d3dREND_DRIVER *this,camCAMERA *param_1,float param_2,float param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  d3dDRIVER *pdVar4;
  undefined4 *puVar5;
  camCAMERA *pcVar6;
  camCAMERA *pcVar7;
  m3dMATR *pmVar8;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  m3dV amStack_2fc [12];
  m3dV amStack_2f0 [12];
  m3dV amStack_2e4 [12];
  m3dMATR amStack_2d8 [52];
  undefined1 auStack_2a4 [12];
  _D3DMATRIX a_Stack_298 [64];
  _D3DMATRIX a_Stack_258 [64];
  camCAMERA acStack_218 [12];
  camCAMERA local_20c [52];
  undefined4 auStack_1d8 [118];
  
  camCAMERA::camCAMERA(local_20c);
  rendDRIVER::BeginCamera((rendDRIVER *)this,param_1,param_2,param_3);
  (**(code **)(*(int *)vidDriver + 0x38))(param_2);
  (**(code **)(*(int *)vidDriver + 0x3c))(param_2,param_3);
  if ((((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) && ((*(uint *)(d3dDriver + 4) & 0x2000) != 0))
     && ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x400000) != 0)) {
    if (*(float *)(param_1 + 0x13c) <= *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x13c)) {
      pcVar6 = param_1 + 0x40;
      pmVar8 = amStack_2d8;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pmVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pmVar8 = pmVar8 + 4;
      }
      *(undefined4 *)(this + 0x1e08) = 0;
    }
    else {
      pcVar6 = param_1;
      pcVar7 = acStack_218;
      for (iVar3 = 0x83; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      camCAMERA::GetParameters(acStack_218,amStack_2f0,amStack_2fc,(m3dV *)&fStack_324,amStack_2e4);
      fStack_318 = fStack_324 * ___real_bf800000;
      fStack_314 = fStack_320 * ___real_bf800000;
      fStack_310 = fStack_31c * ___real_bf800000;
      camCAMERA::SetParameters(acStack_218,amStack_2f0,amStack_2fc,(m3dV *)&fStack_318,amStack_2e4);
      *(undefined4 *)(this + 0x1e08) = 1;
      puVar5 = auStack_1d8;
      pmVar8 = amStack_2d8;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pmVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        pmVar8 = pmVar8 + 4;
      }
    }
    if (ABS(ABS(*(float *)(param_1 + 0x144)) - (float)*(int *)(*(int *)(d3dDriver + 0x210) + 8)) <=
        (float)___real_3fb999999999999a) {
      *(undefined4 *)(this + 0x1e0c) = 1;
    }
    else {
      pcVar6 = param_1 + 0x1bc;
      pdVar4 = d3dDriver;
      iVar3 = 1;
      do {
        uVar1 = *(uint *)(pdVar4 + 4);
        if ((((uVar1 & 0x1000000) != 0) && ((uVar1 & 0x2000) != 0)) &&
           (((*(byte *)(*(int *)(pdVar4 + 0x210) + 0x16) & 0x40) != 0 &&
            (((uVar1 & 0x4000) != 0 && (iVar3 < (int)(uint)*(ushort *)(pdVar4 + 0x634))))))) {
          fStack_300 = (_m3dVZero - *(float *)(param_1 + 0x1f0)) *
                       *(float *)(pcVar6 + -8) * ___real_bf800000 +
                       (DAT_00963740 - *(float *)(param_1 + 500)) *
                       *(float *)(pcVar6 + -4) * ___real_bf800000 +
                       (DAT_00963744 - *(float *)(param_1 + 0x1f8)) *
                       *(float *)pcVar6 * ___real_bf800000;
          fStack_30c = *(float *)(pcVar6 + -8) * ___real_bf800000;
          fStack_308 = *(float *)(pcVar6 + -4) * ___real_bf800000;
          fStack_304 = *(float *)pcVar6 * ___real_bf800000;
          (**(code **)(**(int **)(pdVar4 + 0x77c) + 0xb8))
                    (*(int **)(pdVar4 + 0x77c),iVar3,&fStack_30c);
          pdVar4 = d3dDriver;
        }
        pcVar6 = pcVar6 + 0xc;
        bVar2 = iVar3 < 4;
        iVar3 = iVar3 + 1;
      } while (bVar2);
      *(undefined4 *)(this + 0x1e0c) = 5;
    }
    *(undefined4 *)(this + 0x1e0c) = 1;
    ConvertMatr(this,amStack_2d8,a_Stack_258);
    MakeProjMatrix(this,param_1,a_Stack_298);
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x2c))(*(int **)(d3dDriver + 0x77c),2,a_Stack_258);
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x2c))(*(int **)(d3dDriver + 0x77c),3,auStack_2a4);
    *(undefined4 *)(this + 0x1e10) = 0;
  }
  camCAMERA::~camCAMERA(acStack_218);
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004AFF80 */

void __thiscall d3dREND_DRIVER::BeginRasterizeObj(d3dREND_DRIVER *this,objOBJ *param_1,int param_2)

{
  m3dMATR *pmVar1;
  int iVar2;
  
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    if ((param_2 == 0) && (((byte)*param_1 & 1) != 0)) {
      pmVar1 = &m3dMatrIdentity;
      iVar2 = 1;
    }
    else {
      pmVar1 = (m3dMATR *)(param_1 + 0x3c);
      iVar2 = 0;
    }
    if ((*(int *)(this + 0x1e10) == 0) || (iVar2 == 0)) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x2c))(*(int **)(d3dDriver + 0x77c),1,pmVar1);
      *(int *)(this + 0x1e10) = iVar2;
    }
    if (((byte)*param_1 & 4) == 0) {
      if (*(int *)(this + 0x1e08) == 0) {
        if (DAT_006121bc != 2) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x16,2);
          DAT_006121bc = 2;
        }
      }
      else if (DAT_006121bc != 3) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x16,3);
        DAT_006121bc = 3;
      }
    }
    else if (DAT_006121bc != 1) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x16,1);
      DAT_006121bc = 1;
    }
    if (DAT_006121b8 != 1) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x88,1);
      DAT_006121b8 = 1;
    }
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004B0080 */

void __thiscall d3dREND_DRIVER::StartUseHTL(d3dREND_DRIVER *this)

{
  if (DAT_006121b8 != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x88,1);
    DAT_006121b8 = 1;
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004B00B0 */

void __thiscall d3dREND_DRIVER::StopUseHTL(d3dREND_DRIVER *this)

{
  if (DAT_006121b8 != 0) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x88,0);
    DAT_006121b8 = 0;
  }
  if (DAT_006121bc != 1) {
    (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x16,1);
    DAT_006121bc = 1;
  }
  return;
}




/* from: drv:d3d_cfg.cpp
   addr: 004B0110 */

void __thiscall
d3dREND_DRIVER::ConvertMatr(d3dREND_DRIVER *this,m3dMATR *param_1,_D3DMATRIX *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:d3d_cfg.cpp
   addr: 004B0180 */

void __thiscall
d3dREND_DRIVER::MakeProjMatrix(d3dREND_DRIVER *this,camCAMERA *param_1,_D3DMATRIX *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float *unaff_retaddr;
  float fStack_10;
  undefined1 local_8 [4];
  float local_4;
  
  fVar1 = *(float *)(param_1 + 0x14c);
  local_4 = *(float *)(param_1 + 0x150);
  (**(code **)(*(int *)d3dDriver + 0x40))(local_8);
  fVar2 = local_4 - fStack_10;
  if ((float)___real_3f847ae140000000 <= ABS(fVar2)) {
    fVar5 = (float10)_DAT_005db650 * (float10)fVar1 * (float10)___real_3bb60b61 *
            (float10)___real_3f000000;
    fVar6 = (float10)fsin(fVar5);
    if ((float10)___real_3f847ae140000000 <= ABS(fVar6)) {
      fVar7 = (float10)(_DAT_005db650 * (float)&param_1 * ___real_3bb60b61) *
              (float10)___real_3f000000;
      iVar3 = 0x10;
      fVar8 = (float10)fcos(fVar7);
      pfVar4 = unaff_retaddr;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = 0.0;
        pfVar4 = pfVar4 + 1;
      }
      unaff_retaddr[0xb] = 1.0;
      fVar7 = (float10)fsin(fVar7);
      *unaff_retaddr = (float)(fVar8 / fVar7);
      fVar5 = (float10)fcos(fVar5);
      unaff_retaddr[5] = (float)(fVar5 / (float10)(float)fVar6);
      if ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x100) != 0) {
        unaff_retaddr[10] = local_4 / fVar2;
        unaff_retaddr[0xe] = (-fStack_10 * local_4) / fVar2;
        return;
      }
      unaff_retaddr[10] = local_4 / fVar2;
      unaff_retaddr[0xe] = -((local_4 / fVar2) * fStack_10);
      return;
    }
  }
  return;
}

