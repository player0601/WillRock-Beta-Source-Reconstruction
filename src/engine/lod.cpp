
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:lod.cpp
   addr: 004DED30 */

void __thiscall lodLOD::Apply(lodLOD *this,camCAMERA *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  int local_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  if ((*(int *)(this + 4) == 0) || ((*(byte *)(*(int *)(this + 4) + 4) & 1) == 0)) {
    if (___real_42480000 <= *(float *)(param_1 + 0x14c)) {
      camCAMERA::GetOrigin(param_1,(m3dV *)&local_18);
      (**(code **)(*(int *)this + 4))(&local_c);
      fVar7 = (local_c - local_18) * (local_c - local_18) +
              (fStack_8 - fStack_14) * (fStack_8 - fStack_14) +
              (fStack_4 - fStack_10) * (fStack_4 - fStack_10);
      if (m3dSimdType == 0) {
        fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar8 = auVar9._0_4_;
        param_1 = (camCAMERA *)
                  (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7);
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar4 = (ulonglong)(uint)fVar7;
        uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
        uVar6 = PackedFloatingMUL(uVar5,uVar5);
        uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
        uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
        uVar5 = PackedFloatingMUL(uVar5,uVar4);
        param_1 = (camCAMERA *)uVar5;
        FastExitMediaState();
      }
      else {
        param_1 = (camCAMERA *)SQRT(fVar7);
      }
    }
    else {
      param_1 = (camCAMERA *)0x0;
    }
    iVar1 = *(int *)(this + 0x58);
    iVar2 = 0;
    iVar3 = -1;
    if (0 < iVar1) {
      do {
        if (((float)param_1 < *(float *)(this + iVar2 * 8 + 8)) &&
           ((iVar3 = iVar2, iVar2 == 0 || (*(float *)(this + iVar2 * 8) <= (float)param_1)))) break;
        iVar2 = iVar2 + 1;
        iVar3 = -1;
      } while (iVar2 < iVar1);
    }
    if (iVar2 == iVar1) {
      iVar3 = iVar1 + -1;
    }
    _apCfgReadInt((void **)&DAT_00934500,s_Video,s_VIDEO_MaxLod,&local_1c);
    iVar3 = iVar3 + local_1c;
    if (*(int *)(this + 0x58) <= iVar3) {
      iVar3 = *(int *)(this + 0x58) + -1;
    }
    if (iVar3 != *(int *)(this + 100)) {
      SetLodNmb(this,iVar3);
    }
  }
  return;
}




/* from: engine:lod.cpp
   addr: 004DEED0 */

void __thiscall lodLOD::SetLodNmb(lodLOD *this,int param_1)

{
  if (param_1 == -3) {
    (**(code **)(*(int *)this + 0xc))(0xfffffffd);
  }
  else {
    if (param_1 == -2) {
      (**(code **)(*(int *)this + 0xc))(*(undefined4 *)(this + 100));
      return;
    }
    if (param_1 == -1) {
      param_1 = *(int *)(this + 0x58) + -1;
    }
    else if (param_1 < *(int *)(this + 0x58)) {
      if (param_1 < 0) {
        param_1 = 0;
      }
    }
    else {
      param_1 = *(int *)(this + 0x58) + -1;
    }
    (**(code **)(*(int *)this + 0xc))(param_1);
    *(int *)(this + 100) = param_1;
  }
  if (*(animINST **)(this + 4) == (animINST *)0x0) {
    return;
  }
  animINST::Invalidate(*(animINST **)(this + 4),0x200);
  return;
}




/* from: engine:lod.cpp
   addr: 004DEF40 */

int __thiscall lodLOD::Init(lodLOD *this)

{
  int iVar1;
  lodLOD *plVar2;
  float10 fVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x58)) {
    plVar2 = this + 8;
    do {
      iVar1 = iVar1 + 1;
      fVar3 = (float10)CIpow();
      *(float *)plVar2 = (float)(fVar3 * (float10)*(float *)(this + 0x5c));
      plVar2 = plVar2 + 8;
    } while (iVar1 < *(int *)(this + 0x58));
  }
  SetLodNmb(this,0);
  return 1;
}




/* from: engine:lod.cpp
   addr: 004DEFB0 */

int __thiscall objLOD::Init(objLOD *this,objOBJ *param_1)

{
  int iVar1;
  int iVar2;
  objLOD *_Base;
  float10 fVar3;
  objOBJ *local_a0 [40];
  
  iVar1 = objMakePtrList(&param_1,1,local_a0,0x28);
  if (iVar1 < 2) {
    return 0;
  }
  iVar2 = 0;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0x58) = 0;
  if (0 < iVar1) {
    do {
      if (0 < *(int *)(local_a0[iVar2] + 0x14)) {
        *(objOBJ **)(this + *(int *)(this + 0x58) * 8 + 0xc) = local_a0[iVar2];
        *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  _Base = this + 8;
  qsort(_Base,*(size_t *)(this + 0x58),8,_lodCmpLODObj);
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::GetFloat(*(animINST **)(param_1 + 0xbc),s_LOD,s_maxDist,(float *)(this + 0x5c));
    animINST::GetFloat(*(animINST **)(param_1 + 0xbc),s_LOD,s_gamma,(float *)(this + 0x60));
  }
  if (*(psSHEET **)(param_1 + 0xf0) != (psSHEET *)0x0) {
    psSHEET::GetFloat(*(psSHEET **)(param_1 + 0xf0),s_LOD,s_maxDist,(float *)(this + 0x5c));
    psSHEET::GetFloat(*(psSHEET **)(param_1 + 0xf0),s_LOD,s_gamma,(float *)(this + 0x60));
  }
  iVar1 = 0;
  if (0 < *(int *)(this + 0x58)) {
    do {
      iVar1 = iVar1 + 1;
      fVar3 = (float10)CIpow();
      *(float *)_Base = (float)(fVar3 * (float10)*(float *)(this + 0x5c));
      _Base = _Base + 8;
    } while (iVar1 < *(int *)(this + 0x58));
  }
  lodLOD::SetLodNmb((lodLOD *)this,0);
  return 1;
}




/* from: engine:lod.cpp
   addr: 004DF120 */

void __thiscall objLOD::SetLodNmb(objLOD *this,int param_1)

{
  int iVar1;
  int iVar2;
  objLOD *poVar3;
  
  iVar2 = 0;
  if (param_1 == -3) {
    if (0 < *(int *)(this + 0x58)) {
      poVar3 = this + 0xc;
      do {
        iVar1 = *(int *)poVar3;
        poVar3 = poVar3 + 8;
        iVar2 = iVar2 + 1;
        *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffe;
      } while (iVar2 < *(int *)(this + 0x58));
      return;
    }
  }
  else {
    if (0 < *(int *)(this + 0x58)) {
      poVar3 = this + 0xc;
      do {
        iVar1 = *(int *)poVar3;
        poVar3 = poVar3 + 8;
        iVar2 = iVar2 + 1;
        *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 1;
      } while (iVar2 < *(int *)(this + 0x58));
    }
    *(uint *)(*(int *)(this + param_1 * 8 + 0xc) + 8) =
         *(uint *)(*(int *)(this + param_1 * 8 + 0xc) + 8) & 0xfffffffe;
  }
  return;
}




/* from: engine:lod.cpp
   addr: 004DF190 */

void __thiscall objLOD::GetLodCenter(objLOD *this,m3dV *param_1)

{
  if (*(animINST **)(this + 4) != (animINST *)0x0) {
    animINST::GetCenter(*(animINST **)(this + 4),param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004df1ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*(int *)(this + 0xc) + 0xc0) + 0x24))();
  return;
}




/* from: engine:lod.cpp
   addr: 004DF1C0 */

void __thiscall animLOD_SEL::SetLodNmb(animLOD_SEL *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 == 0) || (param_1 == -3)) {
    iVar2 = *(int *)(this + 0xc);
    iVar4 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + iVar4 * 4);
        iVar4 = iVar4 + 1;
        *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffffffd;
      } while (iVar4 < *(int *)(iVar2 + 4));
    }
  }
  else {
    iVar2 = *(int *)(this + 0xc);
    iVar4 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        puVar1 = (uint *)(*(int *)(*(int *)(iVar2 + 0xc) + iVar4 * 4) + 8);
        *puVar1 = *puVar1 | 2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar2 + 4));
    }
    iVar2 = *(int *)(this + param_1 * 8 + 0xc);
    iVar4 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + iVar4 * 4);
        iVar4 = iVar4 + 1;
        *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffffffd;
      } while (iVar4 < *(int *)(iVar2 + 4));
      return;
    }
  }
  return;
}




/* from: engine:lod.cpp
   addr: 004DF250 */

int __thiscall animLOD_SEL::Init(animLOD_SEL *this,animINST *param_1)

{
  char *pcVar1;
  objOBJ *poVar2;
  int iVar3;
  int iVar4;
  animLOD_SEL *paVar5;
  int iVar6;
  float10 fVar7;
  int local_8;
  int local_4;
  
  local_4 = 0;
  *(animINST **)(this + 4) = param_1;
  *(undefined4 *)(this + 0x58) = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x138) + 0xbc)) {
    local_8 = 0;
    do {
      iVar4 = 0;
      iVar6 = *(int *)(*(int *)(*(int *)(this + 4) + 0x138) + 0xc0) + local_8;
      pcVar1 = strstr((char *)(iVar6 + 4),s__lod);
      if (pcVar1 != (char *)0x0) {
        param_1 = (animINST *)operator_new(0x10);
        if (param_1 == (animINST *)0x0) {
          param_1 = (animINST *)0x0;
        }
        else {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(undefined ***)param_1 = &objSET::_vftable_;
        }
        objSET::Alloc((objSET *)param_1,*(int *)(iVar6 + 0x44));
        if (0 < *(int *)(iVar6 + 0x44)) {
          iVar3 = 0;
          do {
            poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 4) + 0x10),
                                 (char *)(iVar3 + 4 + *(int *)(iVar6 + 0x48)));
            if (poVar2 != (objOBJ *)0x0) {
              objSET::AddObj((objSET *)param_1,poVar2);
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x44;
          } while (iVar4 < *(int *)(iVar6 + 0x44));
        }
        *(animINST **)(this + *(int *)(this + 0x58) * 8 + 0xc) = param_1;
        *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
      }
      local_8 = local_8 + 0x4c;
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(*(int *)(*(int *)(this + 4) + 0x138) + 0xbc));
  }
  if (2 < (int)*(size_t *)(this + 0x58)) {
    qsort(this + 8,*(size_t *)(this + 0x58),8,_lodCmpLODSel);
    animINST::GetFloat(*(animINST **)(this + 4),s_LOD,s_maxDist,(float *)(this + 0x5c));
    animINST::GetFloat(*(animINST **)(this + 4),s_LOD,s_gamma,(float *)(this + 0x60));
    iVar4 = 0;
    paVar5 = this + 8;
    if (0 < *(int *)(this + 0x58)) {
      do {
        iVar4 = iVar4 + 1;
        fVar7 = (float10)CIpow();
        *(float *)paVar5 = (float)(fVar7 * (float10)*(float *)(this + 0x5c));
        paVar5 = paVar5 + 8;
      } while (iVar4 < *(int *)(this + 0x58));
    }
    lodLOD::SetLodNmb((lodLOD *)this,0);
    return 1;
  }
  return 0;
}




/* from: engine:lod.cpp
   addr: 004DF400 */

void __thiscall animLOD_SEL::Term(animLOD_SEL *this)

{
  animLOD_SEL *paVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x58)) {
    paVar1 = this + 0xc;
    do {
      if (*(undefined4 **)paVar1 != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)paVar1)(1);
      }
      iVar2 = iVar2 + 1;
      paVar1 = paVar1 + 8;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:lod.cpp
   addr: 004DF430 */

int __fastcall objBuildLOD(animTPL *param_1,objOBJ *param_2)

{
  objOBJ *poVar1;
  int *piVar2;
  float fVar3;
  char *pcVar4;
  float fVar5;
  void *pvVar6;
  objMOD_SKIN *poVar7;
  int iVar8;
  objMODIFIER *this;
  objOBJ *poVar9;
  objOBJ *poVar10;
  float fVar11;
  float local_d4;
  float fStack_d0;
  objOBJ *local_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  objOBJ *local_ac;
  objOBJ *local_a8;
  int local_a4;
  objOBJ *local_a0 [40];
  
  poVar10 = local_a8;
  poVar9 = (objOBJ *)0x0;
  local_cc = param_2;
  if (param_2 != (objOBJ *)0x0) {
    poVar10 = *(objOBJ **)(param_2 + 0x38);
    local_a4 = 0;
    poVar9 = poVar10;
    local_ac = poVar10;
    local_a8 = poVar10;
    if ((*(char **)(param_2 + 0x18) != (char *)0x0) &&
       (pcVar4 = strstr(*(char **)(param_2 + 0x18),s__lod), poVar9 = local_ac, pcVar4 != (char *)0x0
       )) {
      fVar5 = (float)objMakePtrList(&local_cc,1,local_a0,0x28);
      local_c0 = fVar5;
      qsort(local_a0,(size_t)fVar5,4,_lodCmpObjNVert);
      local_d4 = 1.4013e-45;
      poVar9 = local_a0[0];
      fVar11 = fVar5;
      if (1 < (int)fVar5) {
        do {
          poVar1 = local_a0[(int)local_d4];
          fVar11 = local_d4;
          if (*(int *)(poVar1 + 0x14) == 0) break;
          if ((*(short *)(poVar9 + 0x22) != -1) && (*(short *)(poVar1 + 0x22) == -1)) {
            pvVar6 = apRealloc(*(void **)(param_1 + 0xac),*(int *)(param_1 + 0xa8) * 4 + 4);
            *(void **)(param_1 + 0xac) = pvVar6;
            if (pvVar6 == (void *)0x0) {
              return 0;
            }
            poVar7 = objMOD_SKIN::Rebuild
                               (*(objMOD_SKIN **)((int)pvVar6 + *(short *)(poVar9 + 0x22) * 4),
                                *(m3dV **)(*(int *)(poVar9 + 0x28) + 0x40),
                                (m3dMATR *)(poVar9 + 0x3c),*(int *)(poVar1 + 0x14),
                                *(m3dV **)(*(int *)(poVar1 + 0x28) + 0x40),
                                (m3dMATR *)(poVar1 + 0x3c));
            *(objMOD_SKIN **)(*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8) * 4) = poVar7;
            piVar2 = *(int **)(*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8) * 4);
            if (piVar2 == (int *)0x0) {
              return 0;
            }
            iVar8 = (**(code **)(*piVar2 + 4))(poVar1);
            if (iVar8 == 0) {
              return 0;
            }
            *(undefined2 *)(poVar1 + 0x22) = *(undefined2 *)(param_1 + 0xa8);
            *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
            poVar9 = local_a0[0];
            poVar10 = local_a8;
            fVar5 = local_c0;
          }
          local_d4 = (float)((int)local_d4 + 1);
          fVar11 = fVar5;
        } while ((int)local_d4 < (int)fVar5);
      }
      local_d4 = 0.0;
      poVar9 = local_ac;
      if (0 < (int)fVar11) {
        do {
          fVar5 = local_d4;
          this = objOBJ::FindNextModifier(local_a0[(int)local_d4],(objMODIFIER *)0x0,0,0x534b494e);
          if (this != (objMODIFIER *)0x0) {
            fStack_c8 = 0.05;
            if (1 < (int)fVar11) {
              fStack_b8 = (float)(int)local_d4;
              fStack_d0 = 0.0;
              fStack_c4 = 0.5;
              fVar3 = (float)(int)((int)fVar11 - 1);
              fStack_bc = 0.05;
              local_d4 = fVar3;
              if (fVar3 < ___real_00000000) {
                local_d4 = 0.0;
                fStack_bc = 0.5;
                fStack_c4 = 0.05;
                fStack_d0 = fVar3;
              }
              if (fStack_d0 <= fStack_b8) {
                if (fStack_b8 <= local_d4) {
                  fStack_b4 = fStack_c4;
                  local_c0 = local_d4;
                  fStack_c8 = fStack_bc;
                  if (local_d4 < fStack_d0) {
                    local_c0 = fStack_d0;
                    fStack_b4 = fStack_bc;
                    fStack_d0 = local_d4;
                    fStack_c8 = fStack_c4;
                  }
                  fStack_c8 = ((fStack_b8 - fStack_d0) * (fStack_b4 - fStack_c8)) /
                              (local_c0 - fStack_d0) + fStack_c8;
                }
                else {
                  fStack_c8 = fStack_c4;
                }
              }
              else {
                fStack_c8 = fStack_bc;
              }
            }
            iVar8 = objMOD_SKIN::Reduce((objMOD_SKIN *)this,fStack_c8);
            if (iVar8 != 0) {
              return 0;
            }
          }
          local_d4 = (float)((int)fVar5 + 1);
          poVar9 = local_ac;
        } while ((int)local_d4 < (int)fVar11);
      }
    }
  }
  if (*(int *)(local_cc + 0x28) != 0) {
    for (poVar7 = (objMOD_SKIN *)objOBJ::FindNextModifier(local_cc,(objMODIFIER *)0x0,0,0x534b494e);
        poVar7 != (objMOD_SKIN *)0x0;
        poVar7 = (objMOD_SKIN *)
                 objOBJ::FindNextModifier(local_cc,(objMODIFIER *)poVar7,0,0x534b494e)) {
      objMOD_SKIN::Check1Bone(poVar7);
      iVar8 = objMOD_SKIN::Reorder(poVar7);
      if (iVar8 == 0) {
        return 0;
      }
    }
  }
  while ((poVar9 != (objOBJ *)0x0 && ((local_a4 == 0 || (poVar10 != poVar9))))) {
    iVar8 = objBuildLOD(param_1,poVar10);
    if (iVar8 == 0) {
      return 0;
    }
    poVar10 = *(objOBJ **)(poVar10 + 0x30);
    local_a4 = 1;
  }
  return 1;
}




/* from: engine:lod.cpp
   addr: 004DF7C0 */

int __fastcall objInitLOD(objOBJ *param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  objOBJ *poVar4;
  objOBJ *local_8;
  int local_4;
  
  poVar4 = (objOBJ *)0x0;
  if (param_1 != (objOBJ *)0x0) {
    local_4 = 0;
    local_8 = *(objOBJ **)(param_1 + 0x38);
    poVar4 = local_8;
    if ((*(char **)(param_1 + 0x18) != (char *)0x0) &&
       (pcVar1 = strstr(*(char **)(param_1 + 0x18),s__lod), pcVar1 != (char *)0x0)) {
      piVar2 = (int *)operator_new(0x68);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      piVar2[0x16] = 0;
      piVar2[0x17] = 0x42c80000;
      piVar2[0x18] = 0x3fc00000;
      piVar2[0x19] = -1;
      *piVar2 = (int)&objLOD::_vftable_;
      iVar3 = (**(code **)(*piVar2 + 0x18))(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      *(int **)(param_1 + 0xf4) = piVar2;
    }
  }
  while ((poVar4 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar4))))) {
    iVar3 = objInitLOD(local_8);
    if (iVar3 == 0) {
      return 0;
    }
    local_8 = *(objOBJ **)(local_8 + 0x30);
    local_4 = 1;
  }
  return 1;
}




/* from: engine:lod.cpp
   addr: 004DF880 */

int __cdecl _lodCmpObjNVert(void *param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if (*(int *)(*param_1 + 0x10) < *(int *)(*param_2 + 0x10)) {
    return 1;
  }
  return (*(int *)(*param_1 + 0x10) <= *(int *)(*param_2 + 0x10)) - 1;
}




/* from: engine:lod.cpp
   addr: 004DF8B0 */

int __cdecl _lodCmpLODObj(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 0x10);
  iVar2 = *(int *)(*(int *)((int)param_2 + 4) + 0x10);
  if (iVar1 < iVar2) {
    return 1;
  }
  return (iVar1 <= iVar2) - 1;
}




/* from: engine:lod.cpp
   addr: 004DF8E0 */

int __cdecl _lodCmpLODSel(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)((int)param_2 + 4) + 4);
  iVar2 = *(int *)(*(int *)((int)param_1 + 4) + 4);
  if (iVar2 < iVar1) {
    return 1;
  }
  return (iVar2 <= iVar1) - 1;
}




/* from: engine:lod.cpp
   addr: 004DF910 */

void __thiscall animINST::LODInit(animINST *this)

{
  undefined4 *puVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  objOBJ *poVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  objOBJ *local_8;
  int local_4;
  
  poVar5 = (objOBJ *)0x0;
  if (*(int *)(this + 0x10) != 0) {
    puVar1 = (undefined4 *)operator_new(0x160);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0xffffffff;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[0x53] = 0;
      puVar1[0x54] = 0xc2c80000;
    }
    iVar4 = *(int *)(this + 0x10);
    *(undefined4 **)(this + 0x140) = puVar1;
    iVar7 = local_4;
    if (iVar4 != 0) {
      iVar6 = *(int *)(iVar4 + 0xf4);
      poVar5 = *(objOBJ **)(iVar4 + 0x38);
      local_4 = 0;
      iVar7 = 0;
      local_8 = poVar5;
      if (iVar6 != 0) {
        if ((uint)puVar1[2] < 0x28) {
          puVar1[puVar1[2] + 3] = iVar6;
          puVar1[2] = puVar1[2] + 1;
          if ((int)puVar1[0x53] < *(int *)(iVar6 + 0x58)) {
            puVar1[0x53] = *(int *)(iVar6 + 0x58);
          }
        }
        *(undefined4 *)(iVar4 + 0xf4) = 0;
        iVar7 = local_4;
      }
    }
    for (; (poVar5 != (objOBJ *)0x0 && ((iVar7 == 0 || (local_8 != poVar5))));
        local_8 = *(objOBJ **)(local_8 + 0x30)) {
      OBJ_LODInit(this,local_8);
      iVar7 = 1;
    }
    iVar4 = *(int *)(this + 0x138);
    iVar7 = 0;
    if (0 < *(int *)(iVar4 + 0xbc)) {
      iVar6 = 0;
      do {
        pcVar2 = strstr((char *)(*(int *)(iVar4 + 0xc0) + 4 + iVar6),s__lod);
        if (pcVar2 != (char *)0x0) {
          piVar3 = (int *)operator_new(0x68);
          piVar8 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            piVar3[0x16] = 0;
            piVar3[0x17] = 0x42c80000;
            piVar3[0x18] = 0x3fc00000;
            piVar3[0x19] = -1;
            *piVar3 = (int)&animLOD_SEL::_vftable_;
            piVar8 = piVar3;
          }
          iVar4 = (**(code **)(*piVar8 + 0x18))(this);
          if (iVar4 == 0) {
            operator_delete(piVar8);
          }
          else {
            iVar4 = *(int *)(this + 0x140);
            if (*(uint *)(iVar4 + 8) < 0x28) {
              *(int **)(iVar4 + 0xc + *(uint *)(iVar4 + 8) * 4) = piVar8;
              *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
              if (*(int *)(iVar4 + 0x14c) < piVar8[0x16]) {
                *(int *)(iVar4 + 0x14c) = piVar8[0x16];
              }
            }
          }
          break;
        }
        iVar4 = *(int *)(this + 0x138);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x4c;
      } while (iVar7 < *(int *)(iVar4 + 0xbc));
    }
    if (((byte)this[4] & 0x40) == 0) {
      *(undefined1 **)(*(int *)(this + 0x140) + 0x154) = &DAT_42480000;
      *(undefined4 *)(*(int *)(this + 0x140) + 0x158) = 0x41400000;
      *(undefined4 *)(*(int *)(this + 0x140) + 0x15c) = 0x41a00000;
    }
    else {
      *(undefined4 *)(*(int *)(this + 0x140) + 0x154) = 0x43480000;
      *(undefined4 *)(*(int *)(this + 0x140) + 0x158) = 0x447a0000;
      *(undefined4 *)(*(int *)(this + 0x140) + 0x15c) = 0x447a0000;
    }
    GetFloat(this,s_LOD,s_distLODAnim,(float *)(*(int *)(this + 0x140) + 0x154));
    GetFloat(this,s_LOD,s_distLODOffMatrModel,(float *)(*(int *)(this + 0x140) + 0x158));
    GetFloat(this,s_LOD,s_distLODOffAnimBlend,(float *)(*(int *)(this + 0x140) + 0x15c));
  }
  return;
}




/* from: engine:lod.cpp
   addr: 004DFB50 */

void __thiscall animINST::LODTerm(animINST *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x140);
  if ((iVar1 != 0) && (iVar2 = 0, 0 < *(int *)(iVar1 + 8))) {
    iVar3 = 0xc;
    do {
      (**(code **)(**(int **)(iVar3 + iVar1) + 0x14))();
      operator_delete(*(void **)(iVar3 + *(int *)(this + 0x140)));
      iVar1 = *(int *)(this + 0x140);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  operator_delete(*(void **)(this + 0x140));
  *(undefined4 *)(this + 0x140) = 0;
  return;
}




/* from: engine:lod.cpp
   addr: 004DFBC0 */

void __thiscall animINST::OBJ_LODInit(animINST *this,objOBJ *param_1)

{
  int iVar1;
  int iVar2;
  objOBJ *poVar3;
  objOBJ *local_8;
  int local_4;
  
  poVar3 = (objOBJ *)0x0;
  if (param_1 != (objOBJ *)0x0) {
    iVar1 = *(int *)(param_1 + 0xf4);
    local_8 = *(objOBJ **)(param_1 + 0x38);
    local_4 = 0;
    poVar3 = local_8;
    if (iVar1 != 0) {
      iVar2 = *(int *)(this + 0x140);
      if (*(uint *)(iVar2 + 8) < 0x28) {
        *(int *)(iVar2 + 0xc + *(uint *)(iVar2 + 8) * 4) = iVar1;
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        if (*(int *)(iVar2 + 0x14c) < *(int *)(iVar1 + 0x58)) {
          *(int *)(iVar2 + 0x14c) = *(int *)(iVar1 + 0x58);
        }
      }
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
  }
  for (; (poVar3 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar3))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    OBJ_LODInit(this,local_8);
    local_4 = 1;
  }
  return;
}




/* from: engine:lod.cpp
   addr: 004DFC60 */

void __thiscall animINST::LODApply(animINST *this,camCAMERA *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  iVar1 = *(int *)(this + 0x140);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) & 5) == 0)) {
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      iVar3 = 0xc;
      do {
        (**(code **)**(undefined4 **)(iVar3 + iVar1))(param_1);
        iVar1 = *(int *)(this + 0x140);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < *(int *)(iVar1 + 8));
    }
    GetCenter(this,(m3dV *)&local_c);
    camCAMERA::GetOrigin(param_1,(m3dV *)&fStack_18);
    fVar8 = (local_c - fStack_18) * (local_c - fStack_18) +
            (fStack_8 - fStack_14) * (fStack_8 - fStack_14) +
            (fStack_4 - fStack_10) * (fStack_4 - fStack_10);
    if (m3dSimdType == 0) {
      fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      param_1 = (camCAMERA *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar5 = (ulonglong)(uint)fVar8;
      uVar6 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar5);
      uVar7 = PackedFloatingMUL(uVar6,uVar6);
      uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
      uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
      uVar6 = PackedFloatingMUL(uVar6,uVar5);
      param_1 = (camCAMERA *)uVar6;
      FastExitMediaState();
    }
    else {
      param_1 = (camCAMERA *)SQRT(fVar8);
    }
    iVar1 = *(int *)(this + 0x140);
    if ((float)param_1 <= *(float *)(iVar1 + 0x154)) {
      uVar2 = *(uint *)(this + 4) & 0xffdfffff;
    }
    else {
      uVar2 = *(uint *)(this + 4) | 0x200000;
    }
    *(uint *)(this + 4) = uVar2;
    if ((float)param_1 <= *(float *)(iVar1 + 0x158)) {
      uVar2 = *(uint *)(this + 4) & 0xffbfffff;
    }
    else {
      uVar2 = *(uint *)(this + 4) | 0x400000;
    }
    *(uint *)(this + 4) = uVar2;
    if (*(float *)(iVar1 + 0x15c) < (float)param_1) {
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x800000;
      return;
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xff7fffff;
  }
  return;
}




/* from: engine:lod.cpp
   addr: 004DFE00 */

void __thiscall animINST::LODSetTemp(animINST *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  animINST *paVar5;
  
  iVar2 = *(int *)(this + 0x140);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) && ((*(uint *)(iVar2 + 4) & 1) == 0)) {
    iVar3 = 0;
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
    **(undefined4 **)(this + 0x140) = *(undefined4 *)(this + 0xc);
    iVar2 = *(int *)(this + 0x140);
    if (0 < *(int *)(iVar2 + 8)) {
      iVar4 = 0xc;
      paVar5 = this;
      do {
        if (param_2 == 0) {
          paVar5 = (animINST *)(*(int *)(*(int *)(iVar4 + iVar2) + 100) + param_1);
          if ((int)paVar5 < 0) {
            paVar5 = (animINST *)0x0;
          }
          else {
            iVar1 = *(int *)(*(int *)(iVar4 + iVar2) + 0x58);
            if (iVar1 <= (int)paVar5) {
              paVar5 = (animINST *)(iVar1 + -1);
            }
          }
        }
        *(undefined4 *)(iVar4 + 0xa0 + iVar2) = *(undefined4 *)(*(int *)(iVar4 + iVar2) + 100);
        if (paVar5 == (animINST *)0xffffffff) {
          iVar2 = -1;
        }
        else {
          iVar2 = ftol();
        }
        lodLOD::SetLodNmb(*(lodLOD **)(iVar4 + *(int *)(this + 0x140)),iVar2);
        iVar2 = *(int *)(this + 0x140);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(iVar2 + 8));
    }
  }
  return;
}




/* from: engine:lod.cpp
   addr: 004DFEE0 */

void __thiscall animINST::LODRestore(animINST *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x140);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) && ((*(uint *)(iVar1 + 4) & 1) != 0)) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
    iVar1 = *(int *)(this + 0x140);
    if (*(int *)(iVar1 + 8) != 0) {
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        iVar2 = 0xc;
        do {
          lodLOD::SetLodNmb(*(lodLOD **)(iVar2 + iVar1),*(int *)(iVar2 + 0xa0 + iVar1));
          iVar1 = *(int *)(this + 0x140);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar3 < *(int *)(iVar1 + 8));
      }
      *(uint *)(this + 0xc) =
           *(uint *)(this + 0xc) ^ (**(uint **)(this + 0x140) ^ *(uint *)(this + 0xc)) & 0x1e03;
    }
  }
  return;
}




/* from: engine:lod.cpp
   addr: 004DFF60 */

void __thiscall animINST::LODEnable(animINST *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(this + 0x140);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    uVar2 = *(uint *)(iVar1 + 4);
    if (param_1 == 0) {
      if ((uVar2 & 2) != 0) {
        return;
      }
      uVar2 = uVar2 | 2;
    }
    else {
      uVar2 = uVar2 & 0xfffffffd;
    }
    *(uint *)(iVar1 + 4) = uVar2;
    iVar1 = *(int *)(this + 0x140);
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      iVar3 = 0xc;
      do {
        if (param_1 == 0) {
          iVar5 = -3;
        }
        else {
          iVar5 = -2;
        }
        lodLOD::SetLodNmb(*(lodLOD **)(iVar3 + iVar1),iVar5);
        iVar1 = *(int *)(this + 0x140);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < *(int *)(iVar1 + 8));
    }
  }
  return;
}




/* from: engine:lod.cpp
   addr: 004DFFD0 */

void __thiscall animINST::LODFreeze(animINST *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x140);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    if (param_1 != 0) {
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 4;
      return;
    }
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffb;
  }
  return;
}




/* from: engine:lod.cpp
   addr: 004E0000
   addr: 004E0000 */

void * __thiscall objSET::_scalar_deleting_destructor_(objSET *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0xc));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

