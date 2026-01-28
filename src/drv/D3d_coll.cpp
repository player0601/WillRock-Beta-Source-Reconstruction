
/* from: drv:D3d_coll.cpp
   addr: 004A84F0 */

int __fastcall d3dEnumDevices(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  apLog(s_Loading_DDRAW_DLL_);
  hModule = GetModuleHandleA(s_DDRAW_DLL);
  if (hModule != (HMODULE)0x0) {
    apLog(s_Loading_DDRAW_DLL_complete_);
    apLog(s_Enumerating_direct_draw_drivers_);
    pFVar1 = GetProcAddress(hModule,s_DirectDrawEnumerateExA);
    if (pFVar1 == (FARPROC)0x0) {
      iVar2 = DirectDrawEnumerateA_8(d3dEnumDDDeviceCB_OLD,0);
    }
    else {
      iVar2 = (*pFVar1)(d3dEnumDDDeviceCB,0,7);
    }
    if (iVar2 == 0) {
      apLog(s_Enumerating_direct_draw_drivers_,DAT_00612040);
      if (DAT_00612040 != 0) {
        return 1;
      }
      apLog(s_FATAL__System_has_no_direct_draw);
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_coll.cpp
   addr: 004A8590 */

int __fastcall d3dGetDrvList(vidDRIVER **param_1,int param_2)

{
  vidDRIVER vVar1;
  vidDRIVER *this;
  uint uVar2;
  int iVar3;
  vidDRIVER *pvVar4;
  vidMODE *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  vidDRIVER *pvVar9;
  vidDRIVER *pvVar10;
  vidDRIVER *pvVar11;
  bool bVar12;
  bool bVar13;
  int local_14;
  int local_10;
  int local_c;
  
  if (DAT_00612040 == 0) {
    return 0;
  }
  apLog(s_Processing_list_of_drivers_);
  local_c = 0;
  local_10 = 0;
  if (0 < DAT_00612040) {
    do {
      this = (vidDRIVER *)(&DAT_00612054)[local_10];
      pvVar9 = this + 8;
      apLog(s_Processing_driver___s_,pvVar9);
      iVar6 = -1;
      pvVar4 = pvVar9;
      do {
        pvVar11 = pvVar4;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pvVar11 = pvVar4 + 1;
        vVar1 = *pvVar4;
        pvVar4 = pvVar11;
      } while (vVar1 != (vidDRIVER)0x0);
      *(undefined2 *)(pvVar11 + -1) = _s___;
      uVar7 = 0xffffffff;
      pvVar11[1] = DAT_005f5cb6;
      pvVar4 = this + 0x64c;
      do {
        pvVar11 = pvVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pvVar11 = pvVar4 + 1;
        vVar1 = *pvVar4;
        pvVar4 = pvVar11;
      } while (vVar1 != (vidDRIVER)0x0);
      uVar7 = ~uVar7;
      iVar6 = -1;
      pvVar4 = pvVar9;
      do {
        pvVar10 = pvVar4;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pvVar10 = pvVar4 + 1;
        vVar1 = *pvVar4;
        pvVar4 = pvVar10;
      } while (vVar1 != (vidDRIVER)0x0);
      pvVar4 = pvVar11 + -uVar7;
      pvVar11 = pvVar10 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pvVar11 = *(undefined4 *)pvVar4;
        pvVar4 = pvVar4 + 4;
        pvVar11 = pvVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pvVar11 = *pvVar4;
        pvVar4 = pvVar4 + 1;
        pvVar11 = pvVar11 + 1;
      }
      uVar7 = *(uint *)(this + 4);
      *(uint *)(this + 4) = uVar7 | 2;
      *(uint *)(this + 4) = uVar7 | 0x22;
      *(uint *)(this + 4) = uVar7 | 0x122;
      if ((*(uint *)(this + 0x560) & 0x80000) == 0) {
        if (param_2 == 0) goto LAB_004a8662;
        apLog(s_Driver___s_is_software__Skip_it_,pvVar9);
      }
      else {
        *(uint *)(this + 4) = uVar7 | 0x123;
LAB_004a8662:
        if ((*(uint *)(this + 0x560) & 0x10000) == 0) {
          if (param_2 != 0) {
            apLog(s_Driver___s_doesn_t_support_HTL__,pvVar9);
            goto LAB_004a8a45;
          }
        }
        else {
          *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2000;
        }
        if ((char)this[0x5a4] < '\0') {
          *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
        }
        if (((byte)this[4] & 1) == 0) {
          uVar7 = *(uint *)(this + 0x3ec);
        }
        else {
          uVar7 = *(uint *)(this + 0x270);
        }
        if ((uVar7 & 0x20000) != 0) {
          *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40;
        }
        if ((*(uint *)(this + 0x5a4) & 0x40000) != 0) {
          *(uint *)(this + 4) = *(uint *)(this + 4) | 0x80;
        }
        if (*(ushort *)(this + 0x618) < 5) {
          uVar7 = (uint)*(ushort *)(this + 0x618);
        }
        else {
          uVar7 = 5;
        }
        *(uint *)(this + 0x230) = uVar7;
        *(uint *)(this + 0x234) = (uint)*(ushort *)(this + 0x61a);
        if (2 < *(ushort *)(this + 0x61a)) {
          *(uint *)(this + 4) = *(uint *)(this + 4) | 0x80000;
        }
        if ((*(uint *)(this + 0x270) & 0x80000) != 0) {
          *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
        }
        if (*(short *)(this + 0x634) != 0) {
          *(uint *)(this + 4) = *(uint *)(this + 4) | 0x4000;
        }
        if ((*(uint *)(this + 0x5a4) & 0x800) != 0) {
          *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000;
        }
        if ((*(uint *)(this + 0x614) & 0x800000) != 0) {
          *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40000;
        }
        iVar6 = 0;
        if (0 < *(int *)(this + 0x6cc)) {
          pvVar4 = this + 0x6e0;
          do {
            if (((byte)pvVar4[-0xb] & 0x40) != 0) {
              if (*(int *)pvVar4 == 1) {
                *(uint *)(this + 4) = *(uint *)(this + 4) | 0x400;
              }
              if (*(int *)pvVar4 == 4) {
                this[5] = (vidDRIVER)((byte)this[5] | 8);
              }
              if (*(int *)pvVar4 == 8) {
                *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1000;
              }
              *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
            }
            iVar6 = iVar6 + 1;
            pvVar4 = pvVar4 + 0x20;
          } while (iVar6 < *(int *)(this + 0x6cc));
        }
        if (((*(uint *)(this + 0x60c) & 0x48) == 0) || ((*(uint *)(this + 0x60c) & 0x90) == 0)) {
          uVar7 = *(uint *)(this + 4);
          *(uint *)(this + 4) = uVar7 & 0xfffff7ff;
          uVar7 = uVar7 & 0xffffe7ff;
          *(uint *)(this + 4) = uVar7;
          *(uint *)(this + 4) = uVar7 | 0x400;
        }
        uVar7 = *(uint *)(this + 4);
        if ((uVar7 & 0x1000) != 0) {
          *(uint *)(this + 4) = uVar7 & 0xfffffbff;
          *(uint *)(this + 4) = uVar7 & 0xfffff3ff;
        }
        if ((*(uint *)(this + 4) & 0x800) != 0) {
          *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffbff;
        }
        if (*(int *)(this + 0x244) == 0) {
          apLog(s_Skip_driver_without_video_modes_,pvVar9);
        }
        else {
          local_14 = 0;
          if (0 < *(int *)(this + 0x244)) {
            do {
              pvVar5 = vidDRIVER::operator[](this,local_14);
              *(undefined4 *)(pvVar5 + 8) = *(undefined4 *)(pvVar5 + 0x24);
              *(undefined4 *)(pvVar5 + 0xc) = *(undefined4 *)(pvVar5 + 0x20);
              *(undefined4 *)(pvVar5 + 4) = *(undefined4 *)(pvVar5 + 0x30);
              *(undefined4 *)(pvVar5 + 0x10) = *(undefined4 *)(pvVar5 + 0x6c);
              *(undefined4 *)(pvVar5 + 0x14) = 0;
              *(undefined4 *)pvVar5 = 5;
              *(int *)(pvVar5 + 0x94) = *(int *)(this + 0x6cc) + -1;
              iVar6 = *(int *)(this + 0x6cc) + -1;
              if (-1 < iVar6) {
                pvVar9 = this + iVar6 * 0x20 + 0x6dc;
                do {
                  if (((*(uint *)(pvVar9 + -8) & 0x4000) == 0) &&
                     (*(int *)(pvVar5 + 0x6c) == *(int *)pvVar9)) {
                    *(int *)(pvVar5 + 0x94) = iVar6;
                    break;
                  }
                  iVar6 = iVar6 + -1;
                  pvVar9 = pvVar9 + -0x20;
                } while (-1 < iVar6);
              }
              *(undefined4 *)(pvVar5 + 0x98) = 0xffffffff;
              if (((*(uint *)(this + 4) & 0x200) != 0) && (iVar6 = 0, 0 < *(int *)(this + 0x6cc))) {
                pvVar9 = this + 0x6e0;
                do {
                  if (((*(uint *)(pvVar9 + -0xc) & 0x4000) != 0) &&
                     ((*(int *)(pvVar5 + 0x98) == -1 ||
                      (*(uint *)(this + (*(int *)(pvVar5 + 0x98) + 0x37) * 0x20) < *(uint *)pvVar9))
                     )) {
                    *(int *)(pvVar5 + 0x98) = iVar6;
                  }
                  iVar6 = iVar6 + 1;
                  pvVar9 = pvVar9 + 0x20;
                } while (iVar6 < *(int *)(this + 0x6cc));
              }
              iVar6 = *(int *)(pvVar5 + 0x6c) * *(int *)(pvVar5 + 0x20) * *(int *)(pvVar5 + 0x24);
              uVar8 = *(uint *)(this + *(int *)(pvVar5 + 0x94) * 0x20 + 0x6dc);
              iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
              uVar7 = (uVar8 >> 3) * *(int *)(pvVar5 + 0x20) * *(int *)(pvVar5 + 0x24) + iVar6 * 2;
              uVar2 = *(uint *)(this + 0x23c);
              if (*(uint *)(this + 0x770) < uVar2) {
                if (uVar2 - *(uint *)(this + 0x770) < uVar7) {
                  apLog(s_Skip_video_mode__d__d__d__d__bec,*(undefined4 *)(pvVar5 + 0x24),
                        *(undefined4 *)(pvVar5 + 0x20),*(undefined4 *)(pvVar5 + 0x6c),uVar8);
                  *(uint *)pvVar5 = *(uint *)pvVar5 & 0xfffffffe;
                }
                if (uVar7 + iVar6 <= (uint)(*(int *)(this + 0x23c) - *(int *)(this + 0x770))) {
                  *(uint *)pvVar5 = *(uint *)pvVar5 | 8;
                }
              }
              else if (uVar2 - uVar2 / 6 < uVar7) {
                apLog(s_Skip_video_mode__d__d__d__d__bec,*(undefined4 *)(pvVar5 + 0x24),
                      *(undefined4 *)(pvVar5 + 0x20),*(undefined4 *)(pvVar5 + 0x6c),uVar8);
                *(uint *)pvVar5 = *(uint *)pvVar5 & 0xfffffffe;
              }
              else if (uVar7 + iVar6 <= uVar2) {
                *(undefined4 *)pvVar5 = 0xd;
              }
              if (*(uint *)(this + 0x23c) < 40000000) {
                iVar6 = *(int *)(pvVar5 + 8);
                bVar13 = SBORROW4(iVar6,0x406);
                iVar3 = iVar6 + -0x406;
                bVar12 = iVar6 == 0x406;
LAB_004a8a16:
                if (!bVar12 && bVar13 == iVar3 < 0) {
                  *(uint *)pvVar5 = *(uint *)pvVar5 & 0xfffffffb;
                }
              }
              else if (*(uint *)(this + 0x23c) < 70000000) {
                iVar6 = *(int *)(pvVar5 + 8);
                bVar13 = SBORROW4(iVar6,0x65e);
                iVar3 = iVar6 + -0x65e;
                bVar12 = iVar6 == 0x65e;
                goto LAB_004a8a16;
              }
              local_14 = local_14 + 1;
            } while (local_14 < *(int *)(this + 0x244));
          }
          param_1[local_c] = this;
          local_c = local_c + 1;
        }
      }
LAB_004a8a45:
      local_10 = local_10 + 1;
    } while (local_10 < DAT_00612040);
  }
  apLog(s_Processing_list_of_drivers_compl);
  return local_c;
}




/* from: drv:D3d_coll.cpp
   addr: 004A8A80 */

void __fastcall d3dDropDrvList(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_00612040) {
    do {
      if ((undefined4 *)(&DAT_00612054)[iVar1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(&DAT_00612054)[iVar1])(1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00612040);
  }
  return;
}




/* from: drv:D3d_coll.cpp
   addr: 004A8AB0 */

int d3dEnumDDDeviceCB_OLD(_GUID *param_1,char *param_2,char *param_3,void *param_4)

{
  int iVar1;
  
  iVar1 = d3dEnumDDDeviceCB(param_1,param_2,param_3,param_4,(HMONITOR__ *)0x0);
  return iVar1;
}




/* from: drv:D3d_coll.cpp
   addr: 004A8AD0 */

int d3dEnumDDDeviceCB(_GUID *param_1,char *param_2,char *param_3,void *param_4,HMONITOR__ *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint unaff_EBP;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 auStack_724 [88];
  uint uStack_5c4;
  undefined4 auStack_5a8 [92];
  undefined1 auStack_438 [524];
  char acStack_22c [556];
  
  if (DAT_00612040 < 10) {
    if ((param_3 == (char *)0x0) || (param_2 == (char *)0x0)) {
      apLog(s_Processing_driver__UNKNOWN_);
    }
    else {
      apLog(s_Processing_driver____s____s_,param_2,param_3);
    }
    iVar2 = DirectDrawCreateEx_16(param_1,&DAT_00612044,&_IID_IDirectDraw7,0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)*DAT_00612044)(DAT_00612044,&_IID_IDirect3D7,&DAT_00612050);
      if (iVar2 == 0) {
        puVar5 = auStack_724;
        for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        puVar5 = auStack_5a8;
        for (iVar2 = 0x5f; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        auStack_724[0] = 0x17c;
        auStack_5a8[0] = 0x17c;
        (**(code **)(*DAT_00612044 + 0x2c))(DAT_00612044,auStack_724,auStack_5a8);
        apLog(s_Checking_driver_capabilities_);
        if ((unaff_EBP & 1) == 0) {
          pcVar7 = s_FATAL__Driver_have_no_DDCAPS_3D_;
        }
        else if ((unaff_EBP & 0x40) == 0) {
          pcVar7 = s_FATAL__Driver_has_no_DDCAPS_BLT_;
        }
        else if ((unaff_EBP & 0x2000000) == 0) {
          if ((uStack_5c4 & 0x1000) == 0) {
            pcVar7 = s_FATAL__Driver_has_no_DDSCAPS_TEX;
          }
          else if ((uStack_5c4 & 0x20000) == 0) {
            pcVar7 = s_FATAL__Driver_has_no_DDSCAPS_ZBU;
          }
          else {
            if ((uStack_5c4 & 0x2000) == 0) {
              apLog(s_WARNING__Driver_has_no_DDSCAPS_3);
            }
            if ((uStack_5c4 & 4) == 0) {
              apLog(s_WARNING__Driver_has_no_DDSCAPS_B);
            }
            if ((uStack_5c4 & 8) == 0) {
              apLog(s_WARNING__Driver_has_no_DDSCAPS_C);
            }
            if ((uStack_5c4 & 0x10) == 0) {
              apLog(s_WARNING__Driver_has_no_DDSCAPS_F);
            }
            if ((uStack_5c4 & 0x20) == 0) {
              apLog(s_WARNING__Driver_has_no_DDSCAPS_F);
            }
            if ((uStack_5c4 & 0x200) == 0) {
              apLog(s_WARNING__Driver_has_no_DDSCAPS_P);
            }
            pcVar7 = s_Checking_driver_capabilities_com;
          }
        }
        else {
          pcVar7 = s_FATAL__Driver_has_DDCAPS_NOHARDW;
        }
        apLog(pcVar7);
        iVar2 = (**(code **)(*DAT_00612044 + 0x6c))(DAT_00612044,auStack_438,1);
        if (iVar2 == 0) {
          apLog(s_Enumerating_direct_3D_devices_);
          iVar2 = DAT_00612040;
          iVar3 = (**(code **)(*DAT_00612050 + 0xc))(DAT_00612050,d3dEnumD3DDeviceCB,0);
          if (iVar3 == 0) {
            if (iVar2 < DAT_00612040) {
              do {
                puVar5 = auStack_724;
                puVar6 = (undefined4 *)((&DAT_00612054)[iVar2] + 0x268);
                for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar6 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar6 = puVar6 + 1;
                }
                puVar5 = auStack_5a8;
                puVar6 = (undefined4 *)((&DAT_00612054)[iVar2] + 0x3e4);
                for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar6 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar6 = puVar6 + 1;
                }
                if (param_1 == (_GUID *)0x0) {
                  *(undefined4 *)((&DAT_00612054)[iVar2] + 0x254) = 0;
                }
                else {
                  *(int *)((&DAT_00612054)[iVar2] + 0x254) = (&DAT_00612054)[iVar2] + 600;
                  iVar3 = (&DAT_00612054)[iVar2];
                  *(ulong *)(iVar3 + 600) = param_1->Data1;
                  *(undefined4 *)(iVar3 + 0x25c) = *(undefined4 *)&param_1->Data2;
                  *(undefined4 *)(iVar3 + 0x260) = *(undefined4 *)param_1->Data4;
                  *(undefined4 *)(iVar3 + 0x264) = *(undefined4 *)(param_1->Data4 + 4);
                }
                if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
                  pcVar4 = (char *)((&DAT_00612054)[iVar2] + 8);
                  pcVar7 = param_2;
                  do {
                    cVar1 = *pcVar7;
                    pcVar7 = pcVar7 + 1;
                    *pcVar4 = cVar1;
                    pcVar4 = pcVar4 + 1;
                  } while (cVar1 != '\0');
                }
                else {
                  sprintf((char *)((&DAT_00612054)[iVar2] + 8),s__s___s_,param_2,param_3);
                }
                pcVar7 = acStack_22c;
                pcVar4 = (char *)((&DAT_00612054)[iVar2] + 0x10c);
                do {
                  cVar1 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  *pcVar4 = cVar1;
                  pcVar4 = pcVar4 + 1;
                } while (cVar1 != '\0');
                iVar2 = iVar2 + 1;
              } while (iVar2 < DAT_00612040);
            }
            apLog(s_Enumerating_direct_3D_devices_co);
          }
        }
      }
    }
    if (DAT_00612044 != (int *)0x0) {
      (**(code **)(*DAT_00612044 + 8))(DAT_00612044);
    }
    DAT_00612044 = (int *)0x0;
    if (DAT_00612050 != (int *)0x0) {
      (**(code **)(*DAT_00612050 + 8))(DAT_00612050);
    }
    DAT_00612050 = (int *)0x0;
  }
  return 1;
}




/* from: drv:D3d_coll.cpp
   addr: 004A8E40 */

long d3dEnumD3DDeviceCB(char *param_1,char *param_2,_D3DDeviceDesc7 *param_3,void *param_4)

{
  d3dDRIVER *this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    apLog(s_Processing_device__UNKNOWN_);
  }
  else {
    apLog(s_Processing_device____s____s_);
  }
  if (param_3 == (_D3DDeviceDesc7 *)0x0) {
    apLog(s_WARNING__Devices_skipped_);
    return 0;
  }
  if (9 < DAT_00612040) {
    apLog(s_WARNING__Devices_skipped_);
    return 1;
  }
  this = (d3dDRIVER *)operator_new(0x1dc8);
  if (this != (d3dDRIVER *)0x0) {
    iVar1 = d3dDRIVER::d3dDRIVER(this);
    if (iVar1 != 0) {
      strncpy((char *)(iVar1 + 0x64c),param_2,0x104);
      puVar3 = (undefined4 *)(iVar1 + 0x560);
      for (iVar2 = 0x3b; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *(undefined4 *)param_3;
        param_3 = param_3 + 4;
        puVar3 = puVar3 + 1;
      }
      apLog(s_Enumerating_display_modes_);
      (**(code **)(*DAT_00612044 + 0x20))();
      if (*(int *)(iVar1 + 0x244) == 0) {
        apLog(s_Enumerating_display_modes_failed);
        return 1;
      }
      apLog(s_Enumerating_Z_Buffer_formats_);
      (**(code **)(*DAT_00612050 + 0x18))();
      if ((*(int *)(iVar1 + 0x6cc) == 0) && (-1 < (char)((uint)*(undefined4 *)(iVar1 + 0x5a4) >> 8))
         ) {
        apLog(s_Enumerating_Z_Buffer_format_fail);
        return 1;
      }
      (**(code **)(*DAT_00612044 + 0x5c))(DAT_00612044,&stack0xffffffcc,0);
      (**(code **)(*DAT_00612044 + 0x5c))(DAT_00612044,&stack0xffffffbc,0,iVar1 + 0x770);
      (&DAT_00612054)[DAT_00612040] = iVar1;
      DAT_00612040 = DAT_00612040 + 1;
    }
  }
  return 1;
}




/* from: drv:D3d_coll.cpp
   addr: 004A9040 */

long d3dEnumDisplayModesCB(_DDSURFACEDESC2 *param_1,void *param_2)

{
  uint uVar1;
  vidMODE *pvVar2;
  int iVar3;
  vidMODE *pvVar4;
  
  if (param_1 == (_DDSURFACEDESC2 *)0x0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  uVar1 = *(uint *)((int)param_2 + 0x5d4);
  if (iVar3 == 0x20) {
    if ((uVar1 & 0x100) == 0) {
      return 1;
    }
  }
  else if (iVar3 == 0x18) {
    if ((uVar1 & 0x200) == 0) {
      return 1;
    }
  }
  else if (iVar3 == 0x10) {
    if ((uVar1 & 0x400) == 0) {
      return 1;
    }
  }
  else if (iVar3 == 8) {
    return 1;
  }
  pvVar2 = vidDRIVER::AddMode((vidDRIVER *)param_2);
  if (pvVar2 != (vidMODE *)0x0) {
    pvVar4 = pvVar2 + 0x18;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pvVar4 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pvVar4 = pvVar4 + 4;
    }
    *(undefined4 *)(pvVar2 + 0x94) = 0;
    return 1;
  }
  return 0;
}




/* from: drv:D3d_coll.cpp
   addr: 004A90D0 */

long d3dEnumTextureFormatsCB(_DDPIXELFORMAT *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  _DDPIXELFORMAT *p_Var4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *local_80;
  undefined4 local_7c [6];
  undefined4 local_64;
  undefined4 local_34 [8];
  undefined1 *local_14;
  
  if (0x1d < *(int *)((int)param_2 + 0xf84)) {
    return 1;
  }
  uVar5 = *(uint *)(param_1 + 4);
  if ((uVar5 & 0x1800) != 0) {
    return 1;
  }
  if ((uVar5 & 0x38) != 0) {
    return 1;
  }
  if ((uVar5 & 0x2200) != 0) {
    return 1;
  }
  if ((uVar5 & 0x46) == 0) {
    if ((uVar5 & 0x80000) == 0) {
      return 1;
    }
LAB_004a9133:
    if ((2 < *(ushort *)((int)param_2 + 0x61a)) && (2 < *(ushort *)((int)param_2 + 0x618))) {
      if (*(int *)(param_1 + 0xc) != 0x10) {
        return 1;
      }
      if (*(int *)(param_1 + 0x10) != 0xff) {
        return 1;
      }
      if (*(int *)(param_1 + 0x14) != 0xff00) {
        return 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        return 1;
      }
    }
  }
  else {
    if ((uVar5 & 0x80000) != 0) goto LAB_004a9133;
    puVar6 = local_7c;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_7c[3] = 0x80;
    local_7c[2] = 0x80;
    piVar1 = *(int **)((int)param_2 + 0x774);
    local_7c[0] = 0x7c;
    local_7c[1] = 0x21007;
    local_14 = &LAB_00401808;
    local_64 = 3;
    p_Var4 = param_1;
    puVar6 = local_34;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *(undefined4 *)p_Var4;
      p_Var4 = p_Var4 + 4;
      puVar6 = puVar6 + 1;
    }
    iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,local_7c,&local_80,0);
    if (iVar3 != 0) {
      return 1;
    }
    if (local_80 != (int *)0x0) {
      (**(code **)(*local_80 + 8))(local_80);
    }
  }
  puVar6 = (undefined4 *)((int)param_2 + *(int *)((int)param_2 + 0xf84) * 0x44 + 0x78c);
  p_Var4 = param_1;
  puVar7 = puVar6;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *(undefined4 *)p_Var4;
    p_Var4 = p_Var4 + 4;
    puVar7 = puVar7 + 1;
  }
  uVar5 = *(uint *)(param_1 + 4);
  if ((uVar5 & 4) != 0) {
    puVar6[8] = 0;
    *(uint *)((int)param_2 + 4) = *(uint *)((int)param_2 + 4) | 0x8000;
    goto LAB_004a94c2;
  }
  if ((uVar5 & 0x80000) != 0) {
    puVar6[8] = 2;
    *(uint *)((int)param_2 + 4) = *(uint *)((int)param_2 + 4) | 0x20000;
    goto LAB_004a94c2;
  }
  if ((uVar5 & 2) == 0) {
    puVar6[8] = *(uint *)(param_1 + 0xc) >> 3;
    if (((byte)param_1[4] & 0x40) != 0) {
      uVar5 = *(uint *)(param_1 + 0x10);
      if (uVar5 == 0) {
LAB_004a9388:
        iVar3 = 0;
        puVar6[9] = 0;
      }
      else {
        iVar3 = 0;
        do {
          if ((uVar5 & 1 << ((byte)iVar3 & 0x1f)) != 0) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x20);
        iVar2 = iVar3;
        if (iVar3 == 0x20) goto LAB_004a9388;
        for (; iVar2 < 0x20; iVar2 = iVar2 + 1) {
          if ((uVar5 & 1 << ((byte)iVar2 & 0x1f)) == 0) {
            iVar2 = iVar2 + -1;
            break;
          }
        }
        if (iVar2 == 0x20) {
          iVar2 = 0x1f;
        }
        else if ((iVar2 < 0x1f) &&
                (uVar5 != (1 << (((char)iVar2 - (byte)iVar3) + 1 & 0x1f)) + -1 <<
                          ((byte)iVar3 & 0x1f))) goto LAB_004a9388;
        puVar6[9] = iVar3;
        iVar3 = (iVar2 - iVar3) + 1;
      }
      puVar6[0xd] = iVar3;
      uVar5 = *(uint *)(param_1 + 0x14);
      if (uVar5 == 0) {
LAB_004a93ff:
        iVar3 = 0;
        puVar6[10] = 0;
      }
      else {
        iVar3 = 0;
        do {
          if ((uVar5 & 1 << ((byte)iVar3 & 0x1f)) != 0) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x20);
        iVar2 = iVar3;
        if (iVar3 == 0x20) goto LAB_004a93ff;
        for (; iVar2 < 0x20; iVar2 = iVar2 + 1) {
          if ((uVar5 & 1 << ((byte)iVar2 & 0x1f)) == 0) {
            iVar2 = iVar2 + -1;
            break;
          }
        }
        if (iVar2 == 0x20) {
          iVar2 = 0x1f;
        }
        else if ((iVar2 < 0x1f) &&
                (uVar5 != (1 << (((char)iVar2 - (byte)iVar3) + 1 & 0x1f)) + -1 <<
                          ((byte)iVar3 & 0x1f))) goto LAB_004a93ff;
        puVar6[10] = iVar3;
        iVar3 = (iVar2 - iVar3) + 1;
      }
      puVar6[0xe] = iVar3;
      uVar5 = *(uint *)(param_1 + 0x18);
      if (uVar5 == 0) {
LAB_004a947f:
        iVar3 = 0;
        puVar6[0xb] = 0;
      }
      else {
        iVar3 = 0;
        do {
          if ((uVar5 & 1 << ((byte)iVar3 & 0x1f)) != 0) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x20);
        iVar2 = iVar3;
        if (iVar3 == 0x20) goto LAB_004a947f;
        for (; iVar2 < 0x20; iVar2 = iVar2 + 1) {
          if ((uVar5 & 1 << ((byte)iVar2 & 0x1f)) == 0) {
            iVar2 = iVar2 + -1;
            break;
          }
        }
        if (iVar2 == 0x20) {
          iVar2 = 0x1f;
        }
        else if ((iVar2 < 0x1f) &&
                (uVar5 != (1 << (((char)iVar2 - (byte)iVar3) + 1 & 0x1f)) + -1 <<
                          ((byte)iVar3 & 0x1f))) goto LAB_004a947f;
        puVar6[0xb] = iVar3;
        iVar3 = (iVar2 - iVar3) + 1;
      }
      puVar6[0xf] = iVar3;
    }
    if (((byte)param_1[4] & 1) == 0) goto LAB_004a94c2;
    uVar5 = *(uint *)(param_1 + 0x1c);
    if (uVar5 != 0) {
      iVar3 = 0;
      do {
        if ((uVar5 & 1 << ((byte)iVar3 & 0x1f)) != 0) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x20);
      iVar2 = iVar3;
      if (iVar3 != 0x20) {
        for (; iVar2 < 0x20; iVar2 = iVar2 + 1) {
          if ((uVar5 & 1 << ((byte)iVar2 & 0x1f)) == 0) goto LAB_004a9486;
        }
        goto LAB_004a9487;
      }
    }
  }
  else {
    puVar6[8] = *(uint *)(param_1 + 0xc) >> 3;
    uVar5 = *(uint *)(param_1 + 0x1c);
    if (uVar5 != 0) {
      iVar3 = 0;
      do {
        if ((uVar5 & 1 << ((byte)iVar3 & 0x1f)) != 0) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x20);
      iVar2 = iVar3;
      if (iVar3 != 0x20) {
        for (; iVar2 < 0x20; iVar2 = iVar2 + 1) {
          if ((uVar5 & 1 << ((byte)iVar2 & 0x1f)) == 0) goto LAB_004a9486;
        }
        goto LAB_004a9487;
      }
    }
  }
LAB_004a94a6:
  iVar3 = 0;
  puVar6[0xc] = 0;
LAB_004a94b8:
  puVar6[0x10] = iVar3;
LAB_004a94c2:
  *(int *)((int)param_2 + 0xf84) = *(int *)((int)param_2 + 0xf84) + 1;
  return 1;
LAB_004a9486:
  iVar2 = iVar2 + -1;
LAB_004a9487:
  if (iVar2 == 0x20) {
    iVar2 = 0x1f;
  }
  else if ((iVar2 < 0x1f) &&
          (uVar5 != (1 << (((char)iVar2 - (byte)iVar3) + 1 & 0x1f)) + -1 << ((byte)iVar3 & 0x1f)))
  goto LAB_004a94a6;
  puVar6[0xc] = iVar3;
  iVar3 = (iVar2 - iVar3) + 1;
  goto LAB_004a94b8;
}




/* from: drv:D3d_coll.cpp
   addr: 004A94F0 */

long d3dEnumZBufferFormatsCB(_DDPIXELFORMAT *param_1,void *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == (_DDPIXELFORMAT *)0x0) {
    return 0;
  }
  if (4 < *(int *)((int)param_2 + 0x6cc)) {
    return 0;
  }
  puVar2 = (undefined4 *)(*(int *)((int)param_2 + 0x6cc) * 0x20 + 0x6d0 + (int)param_2);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    puVar2 = puVar2 + 1;
  }
  *(int *)((int)param_2 + 0x6cc) = *(int *)((int)param_2 + 0x6cc) + 1;
  return 1;
}

