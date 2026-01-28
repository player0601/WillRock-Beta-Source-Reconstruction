
/* from: day_night.cpp
   addr: 004963E0 */

int __fastcall dntInit(void)

{
  dntSYSTEM *this;
  
  this = (dntSYSTEM *)operator_new(0x4b0);
  if (this == (dntSYSTEM *)0x0) {
    dntSystem = (dntSYSTEM *)0x0;
  }
  else {
    dntSystem = (dntSYSTEM *)dntSYSTEM::dntSYSTEM(this);
  }
  msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)dntSystem,0,0);
  return 1;
}




/* from: day_night.cpp
   addr: 00496420 */

void __fastcall dntTerm(void)

{
  msgSYSTEM::DestroyAddr(&msgSystem,(msgADDR *)dntSystem);
  return;
}




/* from: day_night.cpp
   addr: 00496440 */

dntSYSTEM * __thiscall dntSYSTEM::dntSYSTEM(dntSYSTEM *this)

{
  int iVar1;
  dntSYSTEM *pdVar2;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x4d414452;
  *(undefined4 *)(this + 0x14) = 0x24444e54;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0x46;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0xdc] = (dntSYSTEM)0x0;
  *(undefined4 *)(this + 0x11c) = 0;
  this[0x2b8] = (dntSYSTEM)0x0;
  *(undefined4 *)(this + 0x2f8) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x494) = DAT_005da74c;
  pdVar2 = this + 0xdc;
  for (iVar1 = 0x77; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  pdVar2 = this + 0x2b8;
  for (iVar1 = 0x77; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  *(undefined4 *)(this + 0x4a4) = 0;
  *(undefined4 *)(this + 0x4a0) = 0;
  *(undefined4 *)(this + 0x4ac) = 0;
  *(undefined4 *)(this + 0x4a8) = 0;
  *(undefined4 *)(this + 0x49c) = 0;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: day_night.cpp
   addr: 004964E0 */

int __thiscall dntSYSTEM::InitInst(dntSYSTEM *this,animINST *param_1)

{
  int iVar1;
  objOBJ *poVar2;
  m3dSPL *pmVar3;
  entENTITY *this_00;
  dntSYSTEM *pdVar4;
  int local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [64];
  char acStack_46 [70];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (((param_1 != (animINST *)0x0) &&
      (iVar1 = animINST::GetInt(param_1,s_DAY_NIGHT,s_isDayNight,&local_a8), iVar1 != 0)) &&
     (local_a8 != 0)) {
    animINST::Validate(param_1,0x204);
    pdVar4 = this + 0x494;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    *(undefined1 **)pdVar4 = &DAT_42480000;
    animINST::GetFloat(param_1,s_DAY_NIGHT,s_dayTime,(float *)pdVar4);
    *(float *)(this + 0x498) = 80.0;
    animINST::GetFloat(param_1,s_DAY_NIGHT,s_nightTime,(float *)(this + 0x498));
    *(float *)(this + 0x49c) = 10.0;
    animINST::GetFloat(param_1,s_DAY_NIGHT,s_transTime,(float *)(this + 0x49c));
    *(float *)(this + 0x4a0) = *(float *)pdVar4 * ___real_3f000000;
    animINST::GetFloat(param_1,s_DAY_NIGHT,s_curTime,(float *)(this + 0x4a0));
    pdVar4 = this + 0x3c;
    poVar2 = objFindNameN(*(objOBJ **)(param_1 + 0x10),s_SKY_DAY,7);
    *(objOBJ **)pdVar4 = poVar2;
    poVar2 = objFindNameN(*(objOBJ **)(param_1 + 0x10),s_SKY_NIGHT,9);
    *(objOBJ **)(this + 0x40) = poVar2;
    iVar1 = 2;
    do {
      if (*(objOBJ **)pdVar4 != (objOBJ *)0x0) {
        objOBJ::SetStateProcYes(*(objOBJ **)pdVar4,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      }
      pdVar4 = pdVar4 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = animINST::GetInt(param_1,s_DAY_NIGHT,s_isFlare,&local_a8);
  if ((iVar1 != 0) && (local_a8 != 0)) {
    poVar2 = objFindNameN(*(objOBJ **)(param_1 + 0x10),s_Sun_path,8);
    *(objOBJ **)(this + 0x2c) = poVar2;
    if (poVar2 == (objOBJ *)0x0) {
      animINST::GetPos(param_1,(m3dV *)&local_a4);
    }
    else {
      pmVar3 = objConvertSpl(poVar2);
      *(m3dSPL **)(this + 0x38) = pmVar3;
      if (pmVar3 == (m3dSPL *)0x0) {
        objOBJ::GetOrigin(*(objOBJ **)(this + 0x2c),(m3dV *)&local_a4);
      }
      else {
        (**(code **)(*(int *)pmVar3 + 0x10))(0,&local_a4,0);
      }
    }
    m3dMATR::Translate(local_86,local_a4,local_a0,local_9c,0);
    sprintf(acStack_46,s_sun);
    this_00 = entCreate(gsScenePtr,s_flare,s_,local_98,(void *)0x0,0);
    *(entENTITY **)(this + 0x30) = this_00;
    if (this_00 == (entENTITY *)0x0) {
      return 0;
    }
    flrFLARE::SetPos((flrFLARE *)this_00,(m3dV *)&local_a4);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: day_night.cpp
   addr: 00496700 */

int __thiscall
dntSYSTEM::ProcessMsg(dntSYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float local_30;
  float local_2c;
  void *local_24;
  void *local_20;
  m3dV local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      if (((byte)this[0x28] & 8) != 0) {
        fVar6 = gsElapsedTime + *(float *)(this + 0x4a0);
        *(float *)(this + 0x4a0) = fVar6;
        fVar7 = _DAT_005da748 * ___real_42c80000 +
                *(float *)(this + 0x498) + *(float *)(this + 0x494);
        param_1 = (int)(ABS(fVar7) < _DAT_005da748);
        fVar5 = fVar6;
        if ((float)param_1 == ___real_00000000) {
          dVar8 = floor((double)(fVar6 / fVar7));
          fVar5 = (float)dVar8 * fVar7;
        }
        pvVar1 = *(void **)(this + 0x494);
        param_2 = (void *)0x0;
        fVar6 = fVar6 - fVar5;
        local_30 = 1.0;
        local_2c = 0.0;
        param_1 = (int)pvVar1;
        if ((float)pvVar1 < ___real_00000000) {
          param_1 = 0;
          local_2c = 1.0;
          local_30 = 0.0;
          param_2 = pvVar1;
        }
        fVar5 = local_2c;
        if (((float)param_2 <= fVar6) && (fVar5 = local_30, fVar6 <= (float)param_1)) {
          local_20 = (void *)param_1;
          local_24 = (void *)local_30;
          if ((float)param_1 < (float)param_2) {
            local_20 = param_2;
            local_24 = (void *)local_2c;
            local_2c = local_30;
            param_2 = (void *)param_1;
          }
          fVar5 = ((fVar6 - (float)param_2) * ((float)local_24 - local_2c)) /
                  ((float)local_20 - (float)param_2) + local_2c;
        }
        *(float *)(this + 0x4a4) = fVar5;
        pvVar1 = (void *)(*(float *)(this + 0x49c) / *(float *)(this + 0x494));
        if ((fVar5 < ___real_00000000) || ((float)pvVar1 <= fVar5)) {
          if ((fVar5 < (float)pvVar1) || (___real_3f800000 - (float)pvVar1 <= fVar5)) {
            pvVar1 = (void *)(___real_3f800000 - (float)pvVar1);
            if ((float)pvVar1 <= fVar5) {
              param_2 = (void *)0x3f800000;
              local_2c = 1.0;
              local_30 = 0.0;
              param_1 = (int)pvVar1;
              if (___real_3f800000 < (float)pvVar1) {
                param_1 = 0x3f800000;
                local_30 = 1.0;
                local_2c = 0.0;
                param_2 = pvVar1;
              }
              if ((float)param_1 <= fVar5) {
                if (fVar5 <= (float)param_2) {
                  local_24 = param_2;
                  local_20 = (void *)local_2c;
                  if ((float)param_2 < (float)param_1) {
                    local_24 = (void *)param_1;
                    local_20 = (void *)local_30;
                    local_30 = local_2c;
                    param_1 = (int)param_2;
                  }
                  *(float *)(this + 0x4ac) =
                       ((fVar5 - (float)param_1) * ((float)local_20 - local_30)) /
                       ((float)local_24 - (float)param_1) + local_30;
                }
                else {
                  *(float *)(this + 0x4ac) = local_2c;
                }
              }
              else {
                *(float *)(this + 0x4ac) = local_30;
              }
            }
          }
          else {
            *(undefined4 *)(this + 0x4ac) = 0;
          }
        }
        else {
          param_2 = (void *)0x0;
          local_2c = 0.0;
          local_30 = 1.0;
          param_1 = (int)pvVar1;
          if ((float)pvVar1 < ___real_00000000) {
            param_1 = 0;
            local_30 = 0.0;
            local_2c = 1.0;
            param_2 = pvVar1;
          }
          if ((float)param_2 <= fVar5) {
            if (fVar5 <= (float)param_1) {
              local_20 = (void *)local_2c;
              local_24 = (void *)param_1;
              if ((float)param_1 < (float)param_2) {
                local_24 = param_2;
                local_20 = (void *)local_30;
                local_30 = local_2c;
                param_2 = (void *)param_1;
              }
              *(float *)(this + 0x4ac) =
                   ((fVar5 - (float)param_2) * ((float)local_20 - local_30)) /
                   ((float)local_24 - (float)param_2) + local_30;
            }
            else {
              *(float *)(this + 0x4ac) = local_2c;
            }
          }
          else {
            *(float *)(this + 0x4ac) = local_30;
          }
        }
        *(float *)(this + 0x4a8) = ___real_3f800000 - *(float *)(this + 0x4ac);
        if (*(int *)(this + 0x30) != 0) {
          piVar2 = *(int **)(this + 0x38);
          if (piVar2 == (int *)0x0) {
            if (*(int *)(this + 0x2c) != 0) {
              animINST::Validate(*(animINST **)(*(int *)(this + 0x2c) + 0xbc),4);
              objOBJ::GetOrigin(*(objOBJ **)(this + 0x2c),local_1c);
              flrFLARE::SetPos(*(flrFLARE **)(this + 0x30),local_1c);
            }
          }
          else {
            (**(code **)(*piVar2 + 0x10))((float)(piVar2[3] + -1) * fVar5,local_1c);
            flrFLARE::SetPos(*(flrFLARE **)(this + 0x30),local_1c);
            if (*(int **)(this + 0x34) != (int *)0x0) {
              (**(code **)(**(int **)(this + 0x34) + 0x10))
                        (*(undefined4 *)(this + 0x4a4),&local_10,0);
              iVar3 = *(int *)(this + 0x30);
              *(undefined4 *)(iVar3 + 0x163) = local_10;
              *(undefined4 *)(iVar3 + 0x167) = local_c;
              *(undefined4 *)(iVar3 + 0x16b) = local_8;
              *(undefined4 *)(iVar3 + 0x16f) = local_4;
            }
          }
        }
        if (*(int *)(this + 0x2b4) != 0) {
          txmLAYER::SetWeight((txmLAYER *)
                              (*(int *)(this + 0x2b4) + 0x7c +
                              *(int *)(*(int *)(this + 0x2b0) + 0xa8) * 0x4c),
                              *(float *)(this + 0x4a8));
        }
        if (*(int *)(this + 0x490) != 0) {
          txmLAYER::SetWeight((txmLAYER *)
                              (*(int *)(this + 0x490) + 0x7c +
                              *(int *)(*(int *)(this + 0x48c) + 0xa8) * 0x4c),
                              *(float *)(this + 0x4ac));
        }
        if ((*(float *)(this + 0x4a4) <= ___real_00000000) ||
           (___real_3f800000 <= *(float *)(this + 0x4a4))) {
          if (((byte)this[0x28] & 2) == 0) {
            msgSYSTEM::SendAll(&msgSystem,0x4cf,(void *)0x0,(msgADDR *)this);
            uVar4 = *(uint *)(this + 0x28);
            *(uint *)(this + 0x28) = uVar4 | 2;
            *(uint *)(this + 0x28) = uVar4 & 0xfffffffe | 2;
            return 0;
          }
        }
        else if (((byte)this[0x28] & 1) == 0) {
          msgSYSTEM::SendAll(&msgSystem,0x4ce,(void *)0x0,(msgADDR *)this);
          uVar4 = *(uint *)(this + 0x28);
          *(uint *)(this + 0x28) = uVar4 | 1;
          *(uint *)(this + 0x28) = uVar4 & 0xfffffffd | 1;
          return 0;
        }
      }
    }
    else {
      if (param_1 == 2) {
        return 1;
      }
      if ((param_1 == 3) && (*(void **)(this + 0x30) == param_2)) {
        *(undefined4 *)(this + 0x30) = 0;
        return 0;
      }
    }
  }
  else if (param_1 == 0x3f4) {
    (**(code **)(*(int *)this + 0x18))();
  }
  else if (param_1 == 0x3f5) {
    (**(code **)(*(int *)this + 0x1c))();
    return 0;
  }
  return 0;
}




/* from: day_night.cpp
   addr: 00496D40 */

int __thiscall dntSYSTEM::ProcessINIT_LEVEL(dntSYSTEM *this)

{
  int iVar1;
  int iVar2;
  dntSYSTEM *pdVar3;
  lgtLIGHT_GROUP *plVar4;
  int iVar5;
  int iVar6;
  lgtLIGHT_GROUP *plVar7;
  int iVar8;
  dntSYSTEM *pdVar9;
  lgtLIGHT_GROUP *local_14;
  dntSYSTEM *local_10;
  int local_c;
  txmTEXTURE_LAY **local_8;
  int local_4;
  
  local_10 = this;
  iVar1 = scnSCENE::GetAnimLights(gsScenePtr,&local_4,&local_14,&local_8);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < local_4) {
    iVar5 = 0;
    plVar4 = local_14;
    do {
      if ((local_8[iVar1] != (txmTEXTURE_LAY *)0x0) &&
         (iVar8 = 0, 0 < *(int *)(plVar4 + iVar5 + 0x40))) {
        iVar6 = iVar5 + 0x44;
        do {
          if (*(psSHEET **)(*(int *)(plVar4 + iVar6) + 0xf8) != (psSHEET *)0x0) {
            iVar2 = psSHEET::GetInt(*(psSHEET **)(*(int *)(plVar4 + iVar6) + 0xf8),s_DAY_NIGHT,
                                    s_isDay,&local_c);
            if ((iVar2 == 0) || (local_c == 0)) {
              iVar2 = psSHEET::GetInt(*(psSHEET **)(*(int *)(local_14 + iVar6) + 0xf8),s_DAY_NIGHT,
                                      s_isNight,&local_c);
              plVar4 = local_14;
              if ((iVar2 == 0) || (local_c == 0)) goto LAB_00496e01;
              pdVar3 = local_10 + 0x2b8;
            }
            else {
              pdVar3 = local_10 + 0xdc;
            }
            plVar4 = local_14;
            if (pdVar3 != (dntSYSTEM *)0x0) {
              plVar7 = local_14 + iVar5;
              pdVar9 = pdVar3;
              for (iVar8 = 0x75; iVar8 != 0; iVar8 = iVar8 + -1) {
                *(undefined4 *)pdVar9 = *(undefined4 *)plVar7;
                plVar7 = plVar7 + 4;
                pdVar9 = pdVar9 + 4;
              }
              *(undefined4 *)(pdVar3 + 0x1d4) = *(undefined4 *)(pdVar3 + 0x44);
              *(txmTEXTURE_LAY **)(pdVar3 + 0x1d8) = local_8[iVar1];
            }
            break;
          }
LAB_00496e01:
          iVar8 = iVar8 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar8 < *(int *)(plVar4 + iVar5 + 0x40));
      }
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 0x1d4;
      this = local_10;
    } while (iVar1 < local_4);
  }
  operator_delete(local_8);
  operator_delete(local_14);
  *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
  iVar1 = *(int *)(this + 0x2b4);
  if ((iVar1 != 0) && (iVar5 = 0, 0 < *(int *)(iVar1 + 0x78))) {
    iVar8 = 0;
    do {
      txmLAYER::SetWeight((txmLAYER *)(iVar8 + 0x7c + iVar1),0.0);
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 0x4c;
      iVar1 = *(int *)(local_10 + 0x2b4);
    } while (iVar5 < *(int *)(iVar1 + 0x78));
  }
  return 1;
}




/* from: day_night.cpp
   addr: 00496EF0 */

void __thiscall dntSYSTEM::ProcessTERM_LEVEL(dntSYSTEM *this)

{
  undefined4 uVar1;
  int iVar2;
  dntSYSTEM *pdVar3;
  
  *(undefined4 *)(this + 0x2c) = 0;
  if (*(int **)(this + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x38) + 4))(1);
  }
  *(undefined4 *)(this + 0x38) = 0;
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))(1);
  }
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  pdVar3 = this + 0xdc;
  for (iVar2 = 0x77; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pdVar3 = 0;
    pdVar3 = pdVar3 + 4;
  }
  pdVar3 = this + 0x2b8;
  for (iVar2 = 0x77; uVar1 = DAT_005da74c, iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pdVar3 = 0;
    pdVar3 = pdVar3 + 4;
  }
  *(undefined4 *)(this + 0x498) = 0;
  *(undefined4 *)(this + 0x494) = uVar1;
  *(undefined4 *)(this + 0x4a4) = 0;
  *(undefined4 *)(this + 0x4a0) = 0;
  *(undefined4 *)(this + 0x4ac) = 0;
  *(undefined4 *)(this + 0x4a8) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: day_night.cpp
   addr: 00496F80 */

void __thiscall dntSYSTEM::RenderSky(dntSYSTEM *this,camCAMERA *param_1)

{
  uint uVar1;
  int iVar2;
  uchar uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(*(int *)(vidDriver + 0x210) + 0x14);
  vidDRIVER::ToggleModeParam(vidDriver,0x40800,0);
  if (((*(int *)(this + 0x40) == 0) ||
      ((*(int *)(this + 0x3c) != 0 &&
       (*(float *)(this + 0x4ac) < ___real_3f7efeff !=
        (*(float *)(this + 0x4ac) == ___real_3f7efeff))))) &&
     (*(objOBJ **)(this + 0x3c) != (objOBJ *)0x0)) {
    rendDRIVER::RenderObj(rendDrv,*(objOBJ **)(this + 0x3c),0);
  }
  if ((*(int *)(this + 0x40) != 0) && (___real_3b808081 <= *(float *)(this + 0x4ac))) {
    uVar3 = ftol();
    objOBJ::SetTransparency(*(objOBJ **)(this + 0x40),0x80,uVar3);
    iVar2 = *(int *)(*(int *)(this + 0x40) + 0x28);
    uVar4 = *(uint *)(iVar2 + 0x5e);
    if (((*(byte *)(*(int *)(this + 0x40) + 0x24) & 0x40) != 0) && (uVar4 >> 0x18 != 0xff)) {
      uVar4 = ftol();
      uVar5 = ftol();
      uVar6 = ftol();
      uVar4 = ((uVar4 | 0xffffff00) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff;
    }
    *(uint *)(iVar2 + 0x62) = uVar4;
    rendDRIVER::RenderObj(rendDrv,*(objOBJ **)(this + 0x40),0);
  }
  vidDRIVER::ToggleModeParam(vidDriver,0x40000,uVar1 & 0x40000);
  vidDRIVER::ToggleModeParam(vidDriver,0x800,uVar1 & 0x800);
  return;
}




/* from: day_night.cpp
   addr: 00497150
   addr: 00497150 */

void * __thiscall dntSYSTEM::_vector_deleting_destructor_(dntSYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

