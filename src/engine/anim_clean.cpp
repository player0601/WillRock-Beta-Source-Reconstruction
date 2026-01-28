
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim_clean.cpp
   addr: 00581800 */

int __fastcall animCleanConstSpl(animTPL *param_1)

{
  m3dSPL *pmVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  objOBJ *poVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar10 = *(int *)(param_1 + 0x8c);
  if (iVar10 < 1) {
    local_2c = 0.0;
  }
  else {
    local_2c = DAT_005df614;
    pfVar9 = (float *)(*(int *)(param_1 + 0x90) + 0x40);
    local_28 = -DAT_005df614;
    do {
      fVar3 = pfVar9[1];
      if (*pfVar9 < pfVar9[1]) {
        fVar3 = *pfVar9;
      }
      if (local_2c < fVar3) {
        fVar3 = local_2c;
      }
      fVar4 = pfVar9[1];
      if (pfVar9[1] < *pfVar9) {
        fVar4 = *pfVar9;
      }
      if (fVar4 < local_28) {
        fVar4 = local_28;
      }
      pfVar9 = pfVar9 + 0x22;
      iVar10 = iVar10 + -1;
      local_2c = fVar3;
      local_28 = fVar4;
    } while (iVar10 != 0);
  }
  local_24 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    local_20 = 0;
    do {
      iVar10 = *(int *)(param_1 + 0xa0) + local_20;
      pmVar1 = *(m3dSPL **)(iVar10 + 0x14);
      if (((pmVar1 != (m3dSPL *)0x0) || (*(int *)(iVar10 + 0x28) != 0)) ||
         (bVar5 = false, *(int *)(iVar10 + 0x38) != 0)) {
        bVar5 = true;
      }
      if ((pmVar1 != (m3dSPL *)0x0) && (iVar6 = m3dSPL::IsConst(pmVar1), iVar6 != 0)) {
        (**(code **)(**(int **)(iVar10 + 0x14) + 0x10))(local_2c,iVar10 + 8,0);
        if (*(int **)(iVar10 + 0x14) != (int *)0x0) {
          (**(code **)(**(int **)(iVar10 + 0x14) + 4))(1);
        }
        *(undefined4 *)(iVar10 + 0x14) = 0;
      }
      if ((*(m3dSPL **)(iVar10 + 0x28) != (m3dSPL *)0x0) &&
         (iVar6 = m3dSPL::IsConst(*(m3dSPL **)(iVar10 + 0x28)), iVar6 != 0)) {
        (**(code **)(**(int **)(iVar10 + 0x28) + 0x10))(local_2c,iVar10 + 0x18,0);
        if (*(int **)(iVar10 + 0x28) != (int *)0x0) {
          (**(code **)(**(int **)(iVar10 + 0x28) + 4))(1);
        }
        *(undefined4 *)(iVar10 + 0x28) = 0;
      }
      if ((*(m3dSPL **)(iVar10 + 0x38) != (m3dSPL *)0x0) &&
         (iVar6 = m3dSPL::IsConst(*(m3dSPL **)(iVar10 + 0x38)), iVar6 != 0)) {
        (**(code **)(**(int **)(iVar10 + 0x38) + 0x10))(local_2c,iVar10 + 0x2c,0);
        if (*(int **)(iVar10 + 0x38) != (int *)0x0) {
          (**(code **)(**(int **)(iVar10 + 0x38) + 4))(1);
        }
        *(undefined4 *)(iVar10 + 0x38) = 0;
      }
      if ((*(m3dSPL **)(iVar10 + 0x3c) != (m3dSPL *)0x0) &&
         (iVar6 = m3dSPL::IsConst(*(m3dSPL **)(iVar10 + 0x3c)), iVar6 != 0)) {
        (**(code **)(**(int **)(iVar10 + 0x3c) + 0x10))(local_2c,&fStack_14,0);
        local_28 = (float)(uint)(ABS(___real_3f800000 - fStack_14) < _DAT_005df610);
        pmVar1 = *(m3dSPL **)(iVar10 + 0x3c);
        if ((float)(int)local_28 == ___real_00000000) {
          m3dSPL::RemoveKp(pmVar1,1,*(int *)(pmVar1 + 0xc) + -1);
        }
        else {
          if (pmVar1 != (m3dSPL *)0x0) {
            (**(code **)(*(int *)pmVar1 + 4))(1);
          }
          *(undefined4 *)(iVar10 + 0x3c) = 0;
        }
      }
      if ((((bVar5) && (*(int *)(iVar10 + 0x14) == 0)) && (*(int *)(iVar10 + 0x28) == 0)) &&
         (*(int *)(iVar10 + 0x38) == 0)) {
        poVar7 = objFindAnimNmb(*(objOBJ **)(param_1 + 0x88),local_24);
        uStack_10 = *(undefined4 *)(iVar10 + 0x18);
        uStack_c = *(undefined4 *)(iVar10 + 0x1c);
        uStack_8 = *(undefined4 *)(iVar10 + 0x20);
        uStack_4 = *(undefined4 *)(iVar10 + 0x24);
        m3dQUAT::Invert((m3dQUAT *)&uStack_10);
        _animCombineTRS((m3dV *)(iVar10 + 8),(m3dQUAT *)&uStack_10,(m3dV *)(iVar10 + 0x2c),
                        (m3dMATR *)(poVar7 + 0x7c));
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 0x40;
    } while (local_24 < *(int *)(param_1 + 0x9c));
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      iVar11 = 0;
      iVar6 = *(int *)(*(int *)(param_1 + 0xac) + iVar10 * 4);
      if (0 < *(int *)(iVar6 + 0x38)) {
        iVar12 = 0;
        do {
          pmVar1 = *(m3dSPL **)(iVar12 + 0x4c + *(int *)(iVar6 + 0x3c));
          if ((pmVar1 != (m3dSPL *)0x0) && (iVar8 = m3dSPL::IsConst(pmVar1), iVar8 != 0)) {
            iVar8 = *(int *)(iVar6 + 0x3c) + iVar12;
            (**(code **)(**(int **)(iVar8 + 0x4c) + 0x10))(local_2c,iVar8 + 0x48,0);
            piVar2 = *(int **)(iVar12 + 0x4c + *(int *)(iVar6 + 0x3c));
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 4))(1);
            }
            *(undefined4 *)(iVar12 + 0x4c + *(int *)(iVar6 + 0x3c)) = 0;
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 0x50;
        } while (iVar11 < *(int *)(iVar6 + 0x38));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0xa8));
  }
  return 1;
}




/* from: engine:anim_clean.cpp
   addr: 00581B30 */

int __fastcall animOptimizeSpl(animTPL *param_1)

{
  m3dSPL *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0xa0) + iVar3;
      if (*(m3dSPL **)(iVar2 + 0x14) != (m3dSPL *)0x0) {
        m3dSPL::Optimize(*(m3dSPL **)(iVar2 + 0x14),0x1c);
      }
      if (*(m3dSPL **)(iVar2 + 0x28) != (m3dSPL *)0x0) {
        m3dSPL::Optimize(*(m3dSPL **)(iVar2 + 0x28),0x1c);
      }
      if (*(m3dSPL **)(iVar2 + 0x38) != (m3dSPL *)0x0) {
        m3dSPL::Optimize(*(m3dSPL **)(iVar2 + 0x38),0x1c);
      }
      if (*(m3dSPL **)(iVar2 + 0x3c) != (m3dSPL *)0x0) {
        m3dSPL::Optimize(*(m3dSPL **)(iVar2 + 0x3c),0x1c);
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar1 < *(int *)(param_1 + 0x9c));
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      iVar3 = 0;
      iVar1 = *(int *)(*(int *)(param_1 + 0xac) + local_4 * 4);
      if (0 < *(int *)(iVar1 + 0x38)) {
        iVar2 = 0;
        do {
          this = *(m3dSPL **)(*(int *)(iVar1 + 0x3c) + 0x4c + iVar2);
          if (this != (m3dSPL *)0x0) {
            m3dSPL::Optimize(this,0x1c);
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x50;
        } while (iVar3 < *(int *)(iVar1 + 0x38));
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0xa8));
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim_clean.cpp
   addr: 00581C00 */

int __fastcall animCompressAnim(animTPL *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  m3dSPL *pmVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_18;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  iVar9 = *(int *)(param_1 + 0x8c);
  if (iVar9 < 1) {
    local_c = 0.0;
    local_4 = ___real_00000000;
  }
  else {
    pfVar6 = (float *)(*(int *)(param_1 + 0x90) + 0x40);
    local_c = -DAT_005df614;
    local_4 = DAT_005df614;
    do {
      local_14 = pfVar6[1];
      if (*pfVar6 < local_14) {
        local_14 = *pfVar6;
      }
      if (local_14 <= local_4) {
        local_4 = local_14;
      }
      fVar1 = pfVar6[1];
      if (pfVar6[1] < *pfVar6) {
        fVar1 = *pfVar6;
      }
      if (fVar1 < local_c) {
        fVar1 = local_c;
      }
      pfVar6 = pfVar6 + 0x22;
      iVar9 = iVar9 + -1;
      local_c = fVar1;
    } while (iVar9 != 0);
    if (___real_00000000 < local_4) {
      local_4 = 0.0;
    }
  }
  local_14 = 0.0;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    local_8 = 0.0;
    do {
      iVar9 = *(int *)(param_1 + 0xa0) + (int)local_8;
      if ((*(m3dSPL **)(iVar9 + 0x14) != (m3dSPL *)0x0) &&
         (iVar3 = m3dSPL::IsIntegerArg(*(m3dSPL **)(iVar9 + 0x14)), iVar3 == 0)) {
        pmVar4 = (m3dSPL *)
                 (**(code **)(**(int **)(iVar9 + 0x14) + 0x20))(local_4,local_c,0x3f800000,2);
        if (pmVar4 == (m3dSPL *)0x0) {
          return 0;
        }
        m3dSPL::IsIntegerArg(pmVar4);
        if (*(int **)(iVar9 + 0x14) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + 0x14) + 4))(1);
        }
        *(m3dSPL **)(iVar9 + 0x14) = pmVar4;
      }
      if ((*(int *)(iVar9 + 0x14) != 0) &&
         (iVar3 = *(int *)(*(int *)(iVar9 + 0x14) + 0xc), (int)local_14 <= iVar3)) {
        local_14 = (float)iVar3;
      }
      if ((*(m3dSPL **)(iVar9 + 0x28) != (m3dSPL *)0x0) &&
         (iVar3 = m3dSPL::IsIntegerArg(*(m3dSPL **)(iVar9 + 0x28)), iVar3 == 0)) {
        pmVar4 = (m3dSPL *)
                 (**(code **)(**(int **)(iVar9 + 0x28) + 0x20))(local_4,local_c,0x3f800000,7);
        if (pmVar4 == (m3dSPL *)0x0) {
          return 0;
        }
        m3dSPL::IsIntegerArg(pmVar4);
        if (*(int **)(iVar9 + 0x28) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + 0x28) + 4))(1);
        }
        *(m3dSPL **)(iVar9 + 0x28) = pmVar4;
      }
      if ((*(int *)(iVar9 + 0x28) != 0) &&
         (iVar3 = *(int *)(*(int *)(iVar9 + 0x28) + 0xc), (int)local_14 <= iVar3)) {
        local_14 = (float)iVar3;
      }
      if ((*(m3dSPL **)(iVar9 + 0x38) != (m3dSPL *)0x0) &&
         (iVar3 = m3dSPL::IsIntegerArg(*(m3dSPL **)(iVar9 + 0x38)), iVar3 == 0)) {
        pmVar4 = (m3dSPL *)
                 (**(code **)(**(int **)(iVar9 + 0x38) + 0x20))(local_4,local_c,0x3f800000,2);
        if (pmVar4 == (m3dSPL *)0x0) {
          return 0;
        }
        m3dSPL::IsIntegerArg(pmVar4);
        if (*(int **)(iVar9 + 0x38) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + 0x38) + 4))(1);
        }
        *(m3dSPL **)(iVar9 + 0x38) = pmVar4;
      }
      if ((*(int *)(iVar9 + 0x38) != 0) &&
         (iVar3 = *(int *)(*(int *)(iVar9 + 0x38) + 0xc), (int)local_14 <= iVar3)) {
        local_14 = (float)iVar3;
      }
      if ((*(m3dSPL **)(iVar9 + 0x3c) != (m3dSPL *)0x0) &&
         (iVar3 = m3dSPL::IsIntegerArg(*(m3dSPL **)(iVar9 + 0x3c)), iVar3 == 0)) {
        pmVar4 = (m3dSPL *)
                 (**(code **)(**(int **)(iVar9 + 0x3c) + 0x20))(local_4,local_c,0x3f800000,0);
        if (pmVar4 == (m3dSPL *)0x0) {
          return 0;
        }
        m3dSPL::IsIntegerArg(pmVar4);
        if (*(int **)(iVar9 + 0x3c) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + 0x3c) + 4))(1);
        }
        *(m3dSPL **)(iVar9 + 0x3c) = pmVar4;
      }
      if ((*(int *)(iVar9 + 0x3c) != 0) &&
         (iVar9 = *(int *)(*(int *)(iVar9 + 0x3c) + 0xc), (int)local_14 <= iVar9)) {
        local_14 = (float)iVar9;
      }
      local_18 = local_18 + 1;
      local_8 = (float)((int)local_8 + 0x40);
    } while (local_18 < *(int *)(param_1 + 0x9c));
  }
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      iVar3 = 0;
      iVar9 = *(int *)(*(int *)(param_1 + 0xac) + local_18 * 4);
      if (0 < *(int *)(iVar9 + 0x38)) {
        iVar10 = 0;
        do {
          pmVar4 = *(m3dSPL **)(iVar10 + 0x4c + *(int *)(iVar9 + 0x3c));
          if ((pmVar4 != (m3dSPL *)0x0) && (iVar5 = m3dSPL::IsIntegerArg(pmVar4), iVar5 == 0)) {
            pmVar4 = (m3dSPL *)
                     (**(code **)(**(int **)(iVar10 + 0x4c + *(int *)(iVar9 + 0x3c)) + 0x20))
                               (local_4,local_c,0x3f800000,0);
            if (pmVar4 == (m3dSPL *)0x0) {
              return 0;
            }
            m3dSPL::IsIntegerArg(pmVar4);
            piVar8 = *(int **)(iVar10 + 0x4c + *(int *)(iVar9 + 0x3c));
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 4))(1);
            }
            *(m3dSPL **)(iVar10 + 0x4c + *(int *)(iVar9 + 0x3c)) = pmVar4;
          }
          iVar5 = *(int *)(iVar10 + 0x4c + *(int *)(iVar9 + 0x3c));
          if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0xc), (int)local_14 <= iVar5)) {
            local_14 = (float)iVar5;
          }
          iVar3 = iVar3 + 1;
          iVar10 = iVar10 + 0x50;
        } while (iVar3 < *(int *)(iVar9 + 0x38));
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0xa8));
  }
  local_18 = 0;
  if (0 < (int)local_14) {
    do {
      iVar9 = 0;
      if (0 < *(int *)(param_1 + 0x8c)) {
        fVar1 = (float)local_18;
        pfVar6 = (float *)(*(int *)(param_1 + 0x90) + 0x40);
        do {
          fVar2 = pfVar6[1];
          if (*pfVar6 < pfVar6[1]) {
            fVar2 = *pfVar6;
          }
          local_8 = pfVar6[1];
          if (local_8 < *pfVar6) {
            local_8 = *pfVar6;
          }
          if ((fVar2 - _DAT_005df610 < fVar1 != (fVar2 - _DAT_005df610 == fVar1)) &&
             (fVar1 <= local_8 + _DAT_005df610)) goto LAB_005822f5;
          iVar9 = iVar9 + 1;
          pfVar6 = pfVar6 + 0x22;
        } while (iVar9 < *(int *)(param_1 + 0x8c));
      }
      local_c = 0.0;
      if (0 < *(int *)(param_1 + 0x9c)) {
        local_4 = 0.0;
        do {
          objFindAnimNmb(*(objOBJ **)(param_1 + 0x88),(int)local_c);
          iVar9 = *(int *)(param_1 + 0xa0) + (int)local_4;
          pmVar4 = *(m3dSPL **)(iVar9 + 0x14);
          if ((((pmVar4 != (m3dSPL *)0x0) && (local_18 < *(int *)(pmVar4 + 0xc))) &&
              (1 < *(int *)(pmVar4 + 0xc))) &&
             (m3dSPL::RemoveKp(pmVar4,local_18,1), iVar3 = local_18,
             local_18 < *(int *)(pmVar4 + 0xc))) {
            do {
              iVar10 = *(int *)(pmVar4 + 0x10);
              if (iVar3 < *(int *)(pmVar4 + 0x10)) {
                iVar10 = iVar3;
              }
              pfVar6 = (float *)(*(int *)(pmVar4 + 0x24) + *(int *)(pmVar4 + 0x18) * iVar10);
              iVar3 = iVar3 + 1;
              *pfVar6 = *pfVar6 - ___real_3f800000;
            } while (iVar3 < *(int *)(pmVar4 + 0xc));
          }
          pmVar4 = *(m3dSPL **)(iVar9 + 0x28);
          if (((pmVar4 != (m3dSPL *)0x0) && (local_18 < *(int *)(pmVar4 + 0xc))) &&
             ((1 < *(int *)(pmVar4 + 0xc) &&
              (m3dSPL::RemoveKp(pmVar4,local_18,1), iVar3 = local_18,
              local_18 < *(int *)(pmVar4 + 0xc))))) {
            do {
              iVar10 = *(int *)(pmVar4 + 0x10);
              if (iVar3 < *(int *)(pmVar4 + 0x10)) {
                iVar10 = iVar3;
              }
              pfVar6 = (float *)(*(int *)(pmVar4 + 0x24) + *(int *)(pmVar4 + 0x18) * iVar10);
              iVar3 = iVar3 + 1;
              *pfVar6 = *pfVar6 - ___real_3f800000;
            } while (iVar3 < *(int *)(pmVar4 + 0xc));
          }
          pmVar4 = *(m3dSPL **)(iVar9 + 0x38);
          if (((pmVar4 != (m3dSPL *)0x0) && (local_18 < *(int *)(pmVar4 + 0xc))) &&
             ((1 < *(int *)(pmVar4 + 0xc) &&
              (m3dSPL::RemoveKp(pmVar4,local_18,1), iVar3 = local_18,
              local_18 < *(int *)(pmVar4 + 0xc))))) {
            do {
              iVar10 = *(int *)(pmVar4 + 0x10);
              if (iVar3 < *(int *)(pmVar4 + 0x10)) {
                iVar10 = iVar3;
              }
              pfVar6 = (float *)(*(int *)(pmVar4 + 0x24) + *(int *)(pmVar4 + 0x18) * iVar10);
              iVar3 = iVar3 + 1;
              *pfVar6 = *pfVar6 - ___real_3f800000;
            } while (iVar3 < *(int *)(pmVar4 + 0xc));
          }
          pmVar4 = *(m3dSPL **)(iVar9 + 0x3c);
          if ((((pmVar4 != (m3dSPL *)0x0) && (local_18 < *(int *)(pmVar4 + 0xc))) &&
              (1 < *(int *)(pmVar4 + 0xc))) &&
             (m3dSPL::RemoveKp(pmVar4,local_18,1), iVar9 = local_18,
             local_18 < *(int *)(pmVar4 + 0xc))) {
            do {
              iVar3 = *(int *)(pmVar4 + 0x10);
              if (iVar9 < *(int *)(pmVar4 + 0x10)) {
                iVar3 = iVar9;
              }
              pfVar6 = (float *)(*(int *)(pmVar4 + 0x24) + *(int *)(pmVar4 + 0x18) * iVar3);
              iVar9 = iVar9 + 1;
              *pfVar6 = *pfVar6 - ___real_3f800000;
            } while (iVar9 < *(int *)(pmVar4 + 0xc));
          }
          local_c = (float)((int)local_c + 1);
          local_4 = (float)((int)local_4 + 0x40);
        } while ((int)local_c < *(int *)(param_1 + 0x9c));
      }
      local_c = 0.0;
      if (0 < *(int *)(param_1 + 0xa8)) {
        do {
          iVar3 = 0;
          iVar9 = *(int *)(*(int *)(param_1 + 0xac) + (int)local_c * 4);
          if (0 < *(int *)(iVar9 + 0x38)) {
            iVar10 = 0;
            do {
              pmVar4 = *(m3dSPL **)(iVar10 + 0x4c + *(int *)(iVar9 + 0x3c));
              if (((pmVar4 != (m3dSPL *)0x0) && (local_18 < *(int *)(pmVar4 + 0xc))) &&
                 ((1 < *(int *)(pmVar4 + 0xc) &&
                  (m3dSPL::RemoveKp(pmVar4,local_18,1), iVar5 = local_18,
                  local_18 < *(int *)(pmVar4 + 0xc))))) {
                do {
                  iVar7 = *(int *)(pmVar4 + 0x10);
                  if (iVar5 < *(int *)(pmVar4 + 0x10)) {
                    iVar7 = iVar5;
                  }
                  pfVar6 = (float *)(*(int *)(pmVar4 + 0x24) + *(int *)(pmVar4 + 0x18) * iVar7);
                  iVar5 = iVar5 + 1;
                  *pfVar6 = *pfVar6 - ___real_3f800000;
                } while (iVar5 < *(int *)(pmVar4 + 0xc));
              }
              iVar3 = iVar3 + 1;
              iVar10 = iVar10 + 0x50;
            } while (iVar3 < *(int *)(iVar9 + 0x38));
          }
          local_c = (float)((int)local_c + 1);
        } while ((int)local_c < *(int *)(param_1 + 0xa8));
      }
      iVar9 = 0;
      if (0 < *(int *)(param_1 + 0x8c)) {
        fVar1 = (float)local_18;
        iVar3 = 0;
        do {
          iVar10 = *(int *)(param_1 + 0x90) + iVar3;
          if (fVar1 < *(float *)(iVar10 + 0x40)) {
            *(float *)(iVar10 + 0x40) = *(float *)(iVar10 + 0x40) - ___real_3f800000;
          }
          if (fVar1 < *(float *)(iVar10 + 0x44)) {
            *(float *)(iVar10 + 0x44) = *(float *)(iVar10 + 0x44) - ___real_3f800000;
          }
          if (fVar1 < *(float *)(iVar10 + 0x48)) {
            *(float *)(iVar10 + 0x48) = *(float *)(iVar10 + 0x48) - ___real_3f800000;
          }
          piVar8 = (int *)(iVar10 + 0x58);
          iVar10 = 10;
          do {
            iVar5 = *piVar8;
            if ((iVar5 != 0) && (local_18 < iVar5)) {
              *piVar8 = iVar5 + -1;
            }
            piVar8 = piVar8 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          iVar9 = iVar9 + 1;
          iVar3 = iVar3 + 0x88;
        } while (iVar9 < *(int *)(param_1 + 0x8c));
      }
      local_14 = (float)((int)local_14 + -1);
      local_18 = local_18 + -1;
LAB_005822f5:
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_14);
  }
  return 1;
}

