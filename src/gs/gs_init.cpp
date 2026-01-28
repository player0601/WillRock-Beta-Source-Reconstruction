
/* from: gs:gs_init.cpp
   addr: 004FA2E0 */

void __fastcall gsRun(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)gsAppSystem + 0x1c))();
  if (iVar1 == 0) {
    iVar1 = gsAPP_SYSTEM::InitAll(gsAppSystem);
    if (iVar1 != 0) {
      (**(code **)(*(int *)gsAppSystem + 0x14))();
      gsAPP_SYSTEM::TermAll(gsAppSystem);
      return;
    }
  }
  return;
}




/* from: gs:gs_init.cpp
   addr: 004FA330
   addr: 004FA330 */

void * __thiscall gsAPP_SYSTEM::_scalar_deleting_destructor_(gsAPP_SYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_init.cpp
   addr: 004FA360 */

int __thiscall gsAPP_SYSTEM::InitAll(gsAPP_SYSTEM *this)

{
  int iVar1;
  camCAMERA *this_00;
  gsMP_CLIENT *this_01;
  char *pcVar2;
  
  CoInitialize((LPVOID)0x0);
  iVar1 = apInit();
  if (iVar1 == 0) {
    pcVar2 = s_apInit;
  }
  else {
    iVar1 = fnmInit();
    if (iVar1 == 0) {
      pcVar2 = s_fnmInit;
    }
    else {
      pcVar2 = (char *)(**(code **)(*(int *)this + 0x18))();
      iVar1 = apCfgInit(pcVar2,1);
      if (iVar1 == 0) {
        pcVar2 = s_apCfgInit;
      }
      else {
        gsAppState = gsAppState | 0x10;
        iVar1 = (**(code **)(*(int *)gsAppSystem + 4))();
        if (iVar1 == 0) {
          apMsgBox(s_gsAppSystem_>Init___failed);
          goto LAB_004fa718;
        }
        iVar1 = m3dInit();
        if (iVar1 == 0) {
          pcVar2 = s_m3dInit;
        }
        else {
          iVar1 = pctInit();
          if (iVar1 == 0) {
            pcVar2 = s_pctInit;
          }
          else {
            iVar1 = objInit();
            if (iVar1 == 0) {
              pcVar2 = s_objInit;
            }
            else {
              _mode = _mode | 1;
              iVar1 = cdtoInit();
              if (iVar1 == 0) {
                pcVar2 = s_cdtoInit;
              }
              else {
                iVar1 = fntInit();
                if (iVar1 == 0) {
                  pcVar2 = s_fntInit;
                }
                else {
                  iVar1 = msgSYSTEM::Init(&msgSystem);
                  if (iVar1 == 0) goto LAB_004fa718;
                  iVar1 = (**(code **)(*(int *)gsSysInput + 0x10))();
                  if (iVar1 == 0) {
                    apMsgBox(s_Error_initializing_input_system);
                    goto LAB_004fa718;
                  }
                  iVar1 = gsMPInit();
                  if (iVar1 == 0) {
                    pcVar2 = s_gsMPInit;
                  }
                  else {
                    iVar1 = gsVideoInit();
                    if (iVar1 == 0) {
                      pcVar2 = s_gsVideoInit;
                    }
                    else {
                      iVar1 = gsVideoApplySettings();
                      if (iVar1 == 0) {
                        apMsgBox(s_Error_initializing_video);
                        goto LAB_004fa718;
                      }
                      iVar1 = partInit();
                      if (iVar1 == 0) {
                        pcVar2 = s_partInit;
                      }
                      else {
                        iVar1 = pteInit();
                        if (iVar1 == 0) {
                          pcVar2 = s_pteInit;
                        }
                        else {
                          iVar1 = pteSpotInit();
                          if (iVar1 == 0) {
                            pcVar2 = s_pteSpotInit;
                          }
                          else {
                            iVar1 = pteFogInit();
                            if (iVar1 == 0) {
                              pcVar2 = s_pteFogInit;
                            }
                            else {
                              iVar1 = pteEnvMapInit();
                              if (iVar1 == 0) {
                                pcVar2 = s_pteEnvMapInit;
                              }
                              else {
                                this_00 = (camCAMERA *)operator_new(0x20c);
                                if (this_00 == (camCAMERA *)0x0) {
                                  gsCameraPtr = (camCAMERA *)0x0;
                                  apMsg(s_camCreate___failed);
                                  goto LAB_004fa718;
                                }
                                gsCameraPtr = (camCAMERA *)camCAMERA::camCAMERA(this_00);
                                if (gsCameraPtr == (camCAMERA *)0x0) {
                                  apMsg(s_camCreate___failed);
                                  goto LAB_004fa718;
                                }
                                iVar1 = gsMsgInit();
                                if (iVar1 == 0) {
                                  pcVar2 = s_gsMsgInit;
                                }
                                else {
                                  iVar1 = gscInit();
                                  if (iVar1 == 0) {
                                    pcVar2 = s_gscInit;
                                  }
                                  else {
                                    iVar1 = (**(code **)(*(int *)gsSysRender + 4))();
                                    if (iVar1 == 0) {
                                      apMsgBox(s_Cannot_initialize_rendering_subs);
                                      goto LAB_004fa718;
                                    }
                                    iVar1 = gsSND_SYSTEM::Init(gsSysSound);
                                    if (iVar1 == 0) {
                                      apMsgBox(s_Cannot_initialize_sound_subsyste);
                                      goto LAB_004fa718;
                                    }
                                    iVar1 = gsLVL_SYSTEM::Init(gsSysLevel);
                                    if (iVar1 == 0) {
                                      apMsgBox(s_Cannot_initialize_level_subsyste);
                                      goto LAB_004fa718;
                                    }
                                    iVar1 = gssInit();
                                    if (iVar1 == 0) {
                                      pcVar2 = s_gssInit;
                                    }
                                    else {
                                      iVar1 = gsMP_CLIENT::Init(this_01);
                                      if (iVar1 == 0) {
                                        pcVar2 = s_entInit;
                                      }
                                      else {
                                        iVar1 = dynInit();
                                        if (iVar1 == 0) {
                                          pcVar2 = s_dynInit;
                                        }
                                        else {
                                          iVar1 = physInit();
                                          if (iVar1 == 0) {
                                            pcVar2 = s_physInit;
                                          }
                                          else {
                                            iVar1 = (**(code **)(*(int *)gsSysVis + 0x74))();
                                            if (iVar1 == 0) {
                                              apMsgBox(s_Cannot_initialize_visibility_sub);
                                              goto LAB_004fa718;
                                            }
                                            iVar1 = pshSHADOW_SYSTEM::Init(gsSysProjShd);
                                            if (iVar1 == 0) {
                                              apMsgBox(s_Cannot_initialize_shadow_subsyst);
                                              goto LAB_004fa718;
                                            }
                                            iVar1 = mrrMIRROR_SYSTEM::Init(gsSysMirror);
                                            if (iVar1 == 0) {
                                              apMsgBox(s_Cannot_initialize_mirror_subsyst);
                                              goto LAB_004fa718;
                                            }
                                            iVar1 = (**(code **)(*(int *)gsAppSystem + 8))();
                                            if (iVar1 == 0) {
                                              apMsgBox(s_Cannot_initialize_application_su);
                                              goto LAB_004fa718;
                                            }
                                            if (uiSystem != (uiUI_SYSTEM *)0x0) {
                                              iVar1 = (**(code **)(*(int *)uiSystem + 0x30))();
                                              if (iVar1 == 0) {
                                                pcVar2 = s_uiSystem_>Init;
                                                goto LAB_004fa70b;
                                              }
                                            }
                                            iVar1 = gsMP_SYSTEM::Init(gsSysMP);
                                            if (iVar1 == 0) {
                                              pcVar2 = s_gsSysMP_>Init;
                                            }
                                            else {
                                              iVar1 = gspInit();
                                              if (iVar1 == 0) {
                                                pcVar2 = s_gspInit;
                                              }
                                              else {
                                                iVar1 = gslInit();
                                                if (iVar1 != 0) {
                                                  gsAppState = gsAppState & 0xffffffefU | 1;
                                                  (**(code **)(*(int *)gsAppSystem + 0x20))();
                                                  return 1;
                                                }
                                                pcVar2 = s_gslInit;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_004fa70b:
  apMsgBox(s__s___failed,pcVar2);
LAB_004fa718:
  gsAppState = gsAppState & 0xffffffefU | 8;
  return 0;
}




/* from: gs:gs_init.cpp
   addr: 004FA760 */

void __thiscall gsAPP_SYSTEM::TermAll(gsAPP_SYSTEM *this)

{
  camCAMERA *pcVar1;
  
  (**(code **)(*(int *)gsSysLevel + 0x20))(0);
  gslTerm();
  gspTerm();
  gsMP_SYSTEM::Term(gsSysMP);
  if (uiSystem != (uiUI_SYSTEM *)0x0) {
    (**(code **)(*(int *)uiSystem + 0x34))();
  }
  (**(code **)(*(int *)gsAppSystem + 0x10))();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  wrsobTermNiche();
  pteTerm();
  partTerm();
  mrrMIRROR_SYSTEM::Term(gsSysMirror);
  pshSHADOW_SYSTEM::Term(gsSysProjShd);
  (**(code **)(*(int *)gsSysVis + 0x78))();
  gsSND_SYSTEM::Term(gsSysSound);
  wrsobTermNiche();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  gsLVL_SYSTEM::Term(gsSysLevel);
  (**(code **)(*(int *)gsSysRender + 8))();
  gscTerm();
  gssTerm();
  (**(code **)(*(int *)gsSysInput + 0x14))();
  gsVideoTerm();
  gsMPTerm();
  msgSYSTEM::Term(&msgSystem);
  fntTerm();
  cdtoTerm();
  pcVar1 = gsCameraPtr;
  if (gsCameraPtr != (camCAMERA *)0x0) {
    camCAMERA::~camCAMERA(gsCameraPtr);
    operator_delete(pcVar1);
  }
  objTerm();
  fnmTerm();
  pctTerm();
  m3dTerm();
  (**(code **)(*(int *)gsAppSystem + 0xc))();
  apCfgTerm();
  apTerm();
                    /* WARNING: Could not recover jumptable at 0x004fa87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoUninitialize();
  return;
}

