
/* from: engine:Rend_obj.cpp
   addr: 004E9910 */

void __thiscall
rendDRIVER::RenderObjListStatic(rendDRIVER *this,int param_1,objOBJ **param_2,int param_3)

{
  objOBJ *poVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_2c;
  
  local_2c = 0;
  if (0 < param_1) {
    do {
      poVar1 = param_2[local_2c];
      if ((poVar1 != (objOBJ *)0x0) && (*(int *)(poVar1 + 0x10) != 0)) {
        uVar4 = *(uint *)(poVar1 + 8);
        *(uint *)(poVar1 + 8) = uVar4 | 0x100000;
        if (((uVar4 & 0x3f) == 0) && (param_3 == 0)) {
          iVar2 = camCAMERA::QualBoxPOV(*(camCAMERA **)(this + 0x84),(m3dBOX *)(poVar1 + 0xc0));
          if (iVar2 != 1) {
            if (((byte)this[4] & 0x10) != 0) {
              iVar3 = (**(code **)(*(int *)(poVar1 + 0xc0) + 0x30))(this + 0xc,this + 0x18);
              if (iVar3 == 1) goto LAB_004e9aed;
              if (iVar3 == 0) {
                uVar4 = *(uint *)poVar1 | 0x100;
              }
              else {
                uVar4 = *(uint *)poVar1 & 0xfffffeff;
              }
              *(uint *)poVar1 = uVar4;
            }
            iVar3 = (**(code **)(*(int *)this + 0x18))(poVar1);
            if (iVar3 == 0) {
              *(uint *)(poVar1 + 8) = *(uint *)(poVar1 + 8) & 0xffefffff;
              *(uint *)poVar1 = *(uint *)poVar1 & 0xfffffffd;
              if (pteManager != (pteMANAGER *)0x0) {
                pteMANAGER::PrepareObj(pteManager,poVar1);
              }
              if ((((byte)this[4] & 0x20) != 0) && (((byte)*poVar1 & 2) != 0)) {
                SetPOVClipFlags(this,poVar1,iVar2);
              }
              if ((*(uint *)(poVar1 + 8) & 0x80000) == 0) {
                iVar2 = *(int *)(poVar1 + 0x28);
                uVar4 = *(uint *)(iVar2 + 0x5e);
                if ((((byte)poVar1[0x24] & 0x40) != 0) && (uVar4 >> 0x18 != 0xff)) {
                  uVar4 = ftol();
                  uVar5 = ftol();
                  uVar6 = ftol();
                  uVar4 = ((uVar4 | 0xffffff00) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff;
                }
                *(uint *)(iVar2 + 0x62) = uVar4;
                rnsMNG::StoreObj((rnsMNG *)(this + 0x8c),poVar1);
              }
            }
          }
        }
        else if (((uVar4 & 0x20) != 0) || (param_3 != 0)) {
          rnsMNG::UnLinkObj((rnsMNG *)(this + 0x8c),poVar1);
        }
      }
LAB_004e9aed:
      local_2c = local_2c + 1;
    } while (local_2c < param_1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Rend_obj.cpp
   addr: 004E9B10 */

int __thiscall
rendDRIVER::ProjectPoint
          (rendDRIVER *this,camCAMERA *param_1,m3dV *param_2,m3dV *param_3,m2dV *param_4)

{
  float fVar1;
  m2dV local_14 [8];
  m3dV local_c [12];
  
  if (param_3 == (m3dV *)0x0) {
    param_3 = local_c;
  }
  if (param_4 == (m2dV *)0x0) {
    param_4 = local_14;
  }
  camCAMERA::TransformPoint(param_1,param_2,param_3);
  if (*(float *)(param_1 + 0x80) < *(float *)(param_3 + 8)) {
    *(float *)param_3 =
         *(float *)(param_1 + 0x80) * *(float *)param_3 *
         (___real_3f800000 / *(float *)(param_3 + 8));
    fVar1 = *(float *)(param_1 + 0x80) * *(float *)(param_3 + 4) *
            (___real_3f800000 / *(float *)(param_3 + 8));
    *(float *)(param_3 + 4) = fVar1;
    if ((((*(float *)(param_1 + 300) <= *(float *)param_3) &&
         (*(float *)param_3 <= *(float *)(param_1 + 0x134) + *(float *)(param_1 + 300))) &&
        (*(float *)(param_1 + 0x130) <= fVar1)) &&
       (fVar1 <= *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x130))) {
      *(float *)param_4 =
           (*(float *)param_3 - *(float *)(param_1 + 300)) * *(float *)(param_1 + 0x158) +
           *(float *)(param_1 + 0x13c);
      *(float *)(param_4 + 4) =
           ((*(float *)(param_1 + 0x138) - *(float *)(param_3 + 4)) + *(float *)(param_1 + 0x130)) *
           *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x140);
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Rend_obj.cpp
   addr: 004E9C30 */

void __thiscall
rendDRIVER::ProjectPoint
          (rendDRIVER *this,camCAMERA *param_1,m3dV *param_2,m3dV *param_3,m2dV *param_4)

{
  m2dV local_14 [8];
  m3dV local_c [12];
  
  if (param_3 == (m3dV *)0x0) {
    param_3 = local_c;
  }
  if (param_4 == (m2dV *)0x0) {
    param_4 = local_14;
  }
  camCAMERA::TransformPoint(param_1,param_2,param_3);
  *(float *)param_3 =
       *(float *)(param_1 + 0x80) * *(float *)param_3 * (___real_3f800000 / *(float *)(param_3 + 8))
  ;
  *(float *)(param_3 + 4) =
       *(float *)(param_1 + 0x80) * *(float *)(param_3 + 4) *
       (___real_3f800000 / *(float *)(param_3 + 8));
  *(float *)param_4 =
       (*(float *)param_3 - *(float *)(param_1 + 300)) * *(float *)(param_1 + 0x158) +
       *(float *)(param_1 + 0x13c);
  *(float *)(param_4 + 4) =
       ((*(float *)(param_1 + 0x138) - *(float *)(param_3 + 4)) + *(float *)(param_1 + 0x130)) *
       *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x140);
  return;
}




/* from: engine:Rend_obj.cpp
   addr: 004E9CD0 */

int __thiscall rendDRIVER::RenderObj(rendDRIVER *this,objOBJ *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((byte)param_1[8] & 0x20) == 0) {
    iVar1 = QualObj(this,param_1,param_2,param_3);
    if (iVar1 == 0) {
      uVar2 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 8) = uVar2 & 0xffefffff;
      if ((uVar2 & 0x200000) != 0) {
        objOBJ::SetStateProcNo(param_1,0x200000,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      }
      goto LAB_004e9d6f;
    }
    if (iVar1 != 1) {
      if ((iVar1 == 3) &&
         (uVar2 = *(uint *)(param_1 + 8), *(uint *)(param_1 + 8) = uVar2 | 0x100000,
         (uVar2 & 0x200000) == 0)) {
        objOBJ::SetStateProcYes(param_1,0x200000,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      }
      goto LAB_004e9d6f;
    }
  }
  else {
    iVar1 = 1;
    *param_3 = param_2;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffdfffff | 0x100000;
LAB_004e9d6f:
  *(short *)(param_1 + 0xee) = (short)*param_3;
  if (iVar1 == 0) {
    if (((*(int *)(param_1 + 0x10) == 0) || (pteManager == (pteMANAGER *)0x0)) ||
       ((*(int *)(param_1 + 0xbc) != 0 && ((*(uint *)(this + 4) & 0x200) == 0)))) {
      *(uint *)param_1 = *(uint *)param_1 & 0xfffffffd;
    }
    else {
      pteMANAGER::PrepareObj(pteManager,param_1);
    }
    if ((((byte)this[4] & 0x20) != 0) && (((byte)*param_1 & 2) != 0)) {
      SetPOVClipFlags(this,param_1,*param_3);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      uVar2 = *(uint *)(iVar1 + 0x5e);
      if ((((byte)param_1[0x24] & 0x40) != 0) && (uVar2 >> 0x18 != 0xff)) {
        uVar2 = ftol();
        uVar3 = ftol();
        uVar4 = ftol();
        uVar2 = ((uVar2 | 0xffffff00) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
      }
      *(uint *)(iVar1 + 0x62) = uVar2;
      if ((*(uint *)(param_1 + 8) & 0x80000) == 0) {
        rnsMNG::StoreObj((rnsMNG *)(this + 0x8c),param_1);
      }
    }
  }
  else {
    if ((*(int *)(param_1 + 0xbc) == 0) && (((byte)param_1[8] & 0x20) != 0)) {
      rnsMNG::UnLinkObj((rnsMNG *)(this + 0x8c),param_1);
    }
    if (iVar1 == 4) {
      return 0;
    }
    if (iVar1 == 3) {
      return 0;
    }
  }
  return 1;
}




/* from: engine:Rend_obj.cpp
   addr: 004E9EF0 */

int __thiscall rendDRIVER::QualObj(rendDRIVER *this,objOBJ *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  *param_3 = param_2;
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x1c) != 0) {
    return 3;
  }
  if ((uVar1 & 0x3f) != 0) {
    return 1;
  }
  if ((*(uint *)(this + 4) & 8) == 0) {
    if ((uVar1 & 0x200) != 0) {
      return 3;
    }
  }
  else if ((uVar1 & 0x100) != 0) {
    return 3;
  }
  if (((*(uint *)(this + 4) & 0x100) != 0) && (*(int *)(param_1 + 0xbc) == 0)) {
    return 3;
  }
  iVar2 = (**(code **)(*(int *)this + 0x18))(param_1);
  if (iVar2 == 0) {
    if ((0 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0xbc) == 0)) {
      iVar2 = param_2;
      if (param_2 != -1) {
        iVar2 = camCAMERA::QualBoxPOV(*(camCAMERA **)(this + 0x84),(m3dBOX *)(param_1 + 0xc0));
      }
      *(int *)param_2 = iVar2;
      if (iVar2 == 1) {
        return 3;
      }
      if (((byte)this[4] & 0x10) != 0) {
        iVar2 = (**(code **)(*(int *)(param_1 + 0xc0) + 0x30))(this + 0xc,this + 0x18);
        if (iVar2 == 1) {
          return 3;
        }
        if (iVar2 == 0) {
          *(uint *)param_1 = *(uint *)param_1 | 0x100;
          return 0;
        }
        *(uint *)param_1 = *(uint *)param_1 & 0xfffffeff;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Rend_obj.cpp
   addr: 004EA030 */

void __thiscall rendDRIVER::SetPOVClipFlags(rendDRIVER *this,objOBJ *param_1,int param_2)

{
  objOBJ *poVar1;
  ushort *puVar2;
  float fVar3;
  int *piVar4;
  objOBJ *poVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  float *pfVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [3];
  int local_14;
  undefined8 *local_10;
  float *local_c;
  int local_8;
  
  poVar5 = param_1;
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0xa00);
  }
  if (((*(int *)(*(int *)(param_1 + 0x28) + 0x24) != 0) ||
      (iVar7 = objOBJ::AllocStateFaceList(param_1,*(int *)(param_1 + 0x10)), iVar7 != 0)) &&
     ((*(int *)(*(int *)(param_1 + 0x28) + 0x20) != 0 ||
      (iVar7 = objOBJ::AllocStateVertList(param_1,*(int *)(param_1 + 0x14)), iVar7 != 0)))) {
    camCAMERA::GetOrigin(*(camCAMERA **)(this + 0x84),(m3dV *)&local_2c);
    if (param_2 == -1) {
      uVar13 = *(uint *)(param_1 + 0x14);
      puVar16 = *(undefined4 **)(*(int *)(param_1 + 0x28) + 0x20);
      for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar16 = 0x1010101;
        puVar16 = puVar16 + 1;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar16 = 1;
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x10)) {
        do {
          iVar8 = iVar7 + 1;
          *(undefined1 *)(iVar7 + *(int *)(*(int *)(param_1 + 0x28) + 0x24)) = 1;
          iVar7 = iVar8;
        } while (iVar8 < *(int *)(param_1 + 0x10));
      }
    }
    else {
      param_1 = (objOBJ *)0x0;
      local_14 = *(int *)(this + 0x84) + 0x1b4;
      if (0 < *(int *)(poVar5 + 0x14)) {
        local_8 = 0;
        do {
          if (((byte)*poVar5 & 1) == 0) {
            puVar17 = (undefined8 *)(*(int *)(*(int *)(poVar5 + 0x28) + 0x40) + local_8);
            poVar1 = poVar5 + 0x3c;
            local_c = local_20;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar18 = (undefined4)*puVar17;
                uVar21 = CONCAT44(uVar18,uVar18);
                uVar18 = (undefined4)((ulonglong)*puVar17 >> 0x20);
                uVar24 = CONCAT44(uVar18,uVar18);
                uVar25 = CONCAT44(*(undefined4 *)(puVar17 + 1),*(undefined4 *)(puVar17 + 1));
                uVar19 = PackedFloatingMUL(uVar21,*(undefined8 *)poVar1);
                uVar20 = PackedFloatingMUL(uVar24,*(undefined8 *)(poVar5 + 0x4c));
                uVar22 = PackedFloatingMUL(uVar25,*(undefined8 *)(poVar5 + 0x5c));
                uVar19 = PackedFloatingADD(uVar19,*(undefined8 *)(poVar5 + 0x6c));
                uVar23 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar5 + 0x44));
                uVar21 = PackedFloatingADD(uVar20,uVar22);
                uVar20 = PackedFloatingMUL(uVar24,*(undefined8 *)(poVar5 + 0x54));
                uVar25 = PackedFloatingMUL(uVar25,*(undefined8 *)(poVar5 + 100));
                uVar24 = PackedFloatingADD(uVar23,*(undefined8 *)(poVar5 + 0x74));
                uVar21 = PackedFloatingADD(uVar19,uVar21);
                uVar19 = PackedFloatingADD(uVar20,uVar25);
                local_20[1] = (float)((ulonglong)uVar21 >> 0x20);
                local_20[0] = (float)uVar21;
                uVar21 = PackedFloatingADD(uVar24,uVar19);
                local_20[2] = (float)uVar21;
                FastExitMediaState();
              }
              else {
                iVar7 = 0;
                local_10 = (undefined8 *)((int)poVar1 - (int)local_20);
                pfVar10 = local_20;
                do {
                  puVar6 = local_10;
                  iVar8 = 0;
                  *pfVar10 = 0.0;
                  pfVar15 = (float *)((int)puVar6 + (int)pfVar10);
                  do {
                    iVar14 = iVar8 * 4;
                    fVar3 = *pfVar15;
                    iVar8 = iVar8 + 1;
                    pfVar15 = pfVar15 + 4;
                    *pfVar10 = *(float *)((int)puVar17 + iVar14) * fVar3 + *pfVar10;
                  } while (iVar8 < 3);
                  iVar8 = iVar7 + iVar8 * 4;
                  iVar7 = iVar7 + 1;
                  *pfVar10 = *(float *)(poVar1 + iVar8 * 4) + *pfVar10;
                  pfVar10 = pfVar10 + 1;
                } while (iVar7 < 3);
              }
            }
          }
          else {
            pfVar10 = (float *)(*(int *)(*(int *)(poVar5 + 0x28) + 0x40) + local_8);
            local_20[0] = *pfVar10;
            local_20[1] = pfVar10[1];
            local_20[2] = pfVar10[2];
          }
          iVar7 = 0;
          param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x20)] = (objOBJ)0x0;
          pfVar10 = (float *)(local_14 + 4);
          do {
            if ((local_20[1] - local_28) * *pfVar10 +
                (local_20[0] - local_2c) * pfVar10[-1] + (local_20[2] - local_24) * pfVar10[1] <
                ___real_00000000) {
              param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x20)] =
                   (objOBJ)((byte)param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x20)] |
                           '\x02' << ((byte)iVar7 & 0x1f));
            }
            iVar7 = iVar7 + 1;
            pfVar10 = pfVar10 + 3;
          } while (iVar7 < 4);
          if ((local_20[0] - local_2c) * *(float *)(local_14 + iVar7 * 0xc) +
              (local_20[1] - local_28) * *(float *)(local_14 + 4 + iVar7 * 0xc) +
              (local_20[2] - local_24) * *(float *)(local_14 + 8 + iVar7 * 0xc) < ___real_00000000)
          {
            param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x20)] =
                 (objOBJ)((byte)param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x20)] | 0x20);
          }
          if (((byte)param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x20)] & 0x3e) == 0x3e) {
            param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x20)] =
                 (objOBJ)((byte)param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x20)] | 1);
          }
          param_1 = param_1 + 1;
          local_8 = local_8 + 0xc;
        } while ((int)param_1 < *(int *)(poVar5 + 0x14));
      }
      param_1 = (objOBJ *)0x0;
      if (0 < *(int *)(poVar5 + 0x10)) {
        do {
          iVar7 = 0;
          param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x24)] = (objOBJ)0x0;
          piVar4 = *(int **)(poVar5 + 0x28);
          puVar2 = (ushort *)((uint)*(byte *)(piVar4 + 1) * (int)param_1 + 2 + *piVar4);
          puVar9 = puVar2;
          do {
            if ((*(byte *)((uint)*puVar9 + piVar4[8]) & 1) == 0) break;
            iVar7 = iVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (iVar7 < 3);
          if (iVar7 == 3) {
            param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x24)] =
                 (objOBJ)((byte)param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x24)] | 1);
          }
          else {
            param_2 = 0;
            do {
              iVar7 = 0;
              puVar9 = puVar2;
              do {
                if ((2 << ((byte)param_2 & 0x1f) & (int)*(char *)((uint)*puVar9 + piVar4[8])) != 0)
                break;
                iVar7 = iVar7 + 1;
                puVar9 = puVar9 + 1;
              } while (iVar7 < 3);
              if (iVar7 == 3) {
                if (param_2 < 5) {
                  param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x24)] =
                       (objOBJ)((byte)param_1[*(int *)(*(int *)(poVar5 + 0x28) + 0x24)] | 2);
                }
                break;
              }
              param_2 = param_2 + 1;
            } while (param_2 < 5);
          }
          param_1 = param_1 + 1;
        } while ((int)param_1 < *(int *)(poVar5 + 0x10));
      }
    }
    if ((((byte)*poVar5 & 4) == 0) && (param_1 = (objOBJ *)0x0, 0 < *(int *)(poVar5 + 0x10))) {
      local_8 = 0;
      do {
        piVar4 = *(int **)(poVar5 + 0x28);
        iVar7 = piVar4[0x10];
        if (((byte)*poVar5 & 1) == 0) {
          poVar1 = poVar5 + 0x3c;
          puVar17 = (undefined8 *)
                    (iVar7 + (uint)*(ushort *)
                                    ((uint)*(byte *)(piVar4 + 1) * (int)param_1 + 2 + *piVar4) * 0xc
                    );
          local_10 = puVar17;
          if (m3dSimdType != 0) {
            if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar18 = (undefined4)*puVar17;
              uVar21 = CONCAT44(uVar18,uVar18);
              uVar18 = (undefined4)((ulonglong)*puVar17 >> 0x20);
              uVar24 = CONCAT44(uVar18,uVar18);
              uVar25 = CONCAT44(*(undefined4 *)(puVar17 + 1),*(undefined4 *)(puVar17 + 1));
              uVar19 = PackedFloatingMUL(uVar21,*(undefined8 *)poVar1);
              uVar20 = PackedFloatingMUL(uVar24,*(undefined8 *)(poVar5 + 0x4c));
              uVar22 = PackedFloatingMUL(uVar25,*(undefined8 *)(poVar5 + 0x5c));
              uVar19 = PackedFloatingADD(uVar19,*(undefined8 *)(poVar5 + 0x6c));
              uVar23 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar5 + 0x44));
              uVar21 = PackedFloatingADD(uVar20,uVar22);
              uVar20 = PackedFloatingMUL(uVar24,*(undefined8 *)(poVar5 + 0x54));
              uVar25 = PackedFloatingMUL(uVar25,*(undefined8 *)(poVar5 + 100));
              uVar24 = PackedFloatingADD(uVar23,*(undefined8 *)(poVar5 + 0x74));
              uVar21 = PackedFloatingADD(uVar19,uVar21);
              uVar19 = PackedFloatingADD(uVar20,uVar25);
              local_20[1] = (float)((ulonglong)uVar21 >> 0x20);
              local_20[0] = (float)uVar21;
              uVar21 = PackedFloatingADD(uVar24,uVar19);
              local_20[2] = (float)uVar21;
              FastExitMediaState();
            }
            else {
              iVar7 = 0;
              local_14 = (int)poVar1 - (int)local_20;
              pfVar10 = local_20;
              do {
                iVar8 = local_14;
                iVar14 = 0;
                *pfVar10 = 0.0;
                pfVar15 = (float *)(iVar8 + (int)pfVar10);
                do {
                  iVar8 = iVar14 * 4;
                  fVar3 = *pfVar15;
                  iVar14 = iVar14 + 1;
                  pfVar15 = pfVar15 + 4;
                  *pfVar10 = *(float *)((int)puVar17 + iVar8) * fVar3 + *pfVar10;
                } while (iVar14 < 3);
                iVar8 = iVar7 + iVar14 * 4;
                iVar7 = iVar7 + 1;
                *pfVar10 = *(float *)(poVar1 + iVar8 * 4) + *pfVar10;
                pfVar10 = pfVar10 + 1;
              } while (iVar7 < 3);
            }
          }
        }
        else {
          uVar13 = (uint)*(ushort *)((uint)*(byte *)(piVar4 + 1) * (int)param_1 + 2 + *piVar4);
          iVar8 = iVar7 + uVar13 * 0xc;
          local_20[0] = *(float *)(iVar7 + uVar13 * 0xc);
          local_20[1] = *(float *)(iVar8 + 4);
          local_20[2] = *(float *)(iVar8 + 8);
        }
        pfVar10 = (float *)(*(int *)(*(int *)(poVar5 + 0x28) + 0x44) + local_8);
        if ((local_2c - local_20[0]) * *pfVar10 +
            (local_28 - local_20[1]) * pfVar10[1] + (local_24 - local_20[2]) * pfVar10[2] <
            ___real_00000000) {
          iVar7 = *(int *)(*(int *)(poVar5 + 0x28) + 0x24);
          param_1[iVar7] = (objOBJ)((byte)param_1[iVar7] | 4);
        }
        param_1 = param_1 + 1;
        local_8 = local_8 + 0xc;
      } while ((int)param_1 < *(int *)(poVar5 + 0x10));
    }
    iVar7 = 0;
    if (0 < *(int *)(poVar5 + 0x10)) {
      do {
        if ((*(byte *)(iVar7 + *(int *)(*(int *)(poVar5 + 0x28) + 0x24)) & 6) == 0) {
          iVar8 = 2;
          do {
            piVar4 = *(int **)(poVar5 + 0x28);
            iVar8 = iVar8 + 2;
            pbVar11 = (byte *)(piVar4[8] +
                              (uint)*(ushort *)
                                     ((uint)*(byte *)(piVar4 + 1) * iVar7 + *piVar4 + -2 + iVar8));
            *pbVar11 = *pbVar11 | 0x40;
          } while (iVar8 < 8);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(poVar5 + 0x10));
    }
  }
  return;
}




/* from: engine:Rend_obj.cpp
   addr: 004EA6C0 */

int __thiscall rendDRIVER::RenderObj(rendDRIVER *this,objOBJ *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(int *)this + 0x94))(param_1);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x90))(param_1);
  }
  iVar1 = 0;
  puVar2 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
  if (*puVar2 != 0) {
    iVar3 = 0;
    do {
      RenderObj(this,param_1,(int)param_1,(objSPLIT_ENTRY *)(*(int *)(puVar2 + 1) + iVar3));
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x70;
      puVar2 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
    } while (iVar1 < (int)(uint)*puVar2);
  }
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x004ea8de) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Rend_obj.cpp
   addr: 004EA730 */

int __thiscall
rendDRIVER::RenderObj(rendDRIVER *this,objOBJ *param_1,int param_2,objSPLIT_ENTRY *param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  m3dMATR *pmVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  m3dMATR local_194 [64];
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  float local_60 [4];
  float local_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float local_30 [3];
  undefined4 uStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float *local_14;
  float *local_10;
  float *local_c;
  int local_8;
  
  iVar6 = (**(code **)(*(int *)this + 0x20))(param_1,param_3);
  if (iVar6 != 0) {
    (**(code **)(*(int *)this + 0x24))(param_1,param_3);
    return iVar6;
  }
  iVar6 = 0x10;
  if (((byte)*param_1 & 1) == 0) {
    pfVar11 = (float *)(*(int *)(this + 0x84) + 0x40);
    pmVar13 = local_194;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(float *)pmVar13 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pmVar13 = pmVar13 + 4;
    }
    m3dMultiplyMatr((m3dMATR *)(param_1 + 0x3c),local_194,(m3dMATR *)local_60);
  }
  else {
    pfVar11 = (float *)(*(int *)(this + 0x84) + 0x40);
    pfVar7 = local_60;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar7 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar7 = pfVar7 + 1;
    }
  }
  local_8 = 0;
  pfVar11 = *(float **)(*(int *)(param_1 + 0x28) + 0x40);
  local_c = *(float **)(this + 0x1e04);
  local_10 = pfVar11;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_14 = local_60;
    do {
      if (m3dSimdType == 0) {
        fVar5 = *pfVar11;
        fVar3 = pfVar11[1];
        fVar4 = pfVar11[2];
        *(ulonglong *)local_c =
             CONCAT44(fVar5 * local_60[1] + local_30[1] + fVar3 * fStack_4c + fVar4 * fStack_3c,
                      fVar5 * local_60[0] + local_30[0] + fVar3 * local_50 + fVar4 * local_40);
        local_c[2] = fVar5 * local_60[2] + local_30[2] + fVar3 * fStack_48 + fVar4 * fStack_38;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar14 = (undefined4)*(undefined8 *)pfVar11;
        uVar17 = CONCAT44(uVar14,uVar14);
        uVar14 = (undefined4)((ulonglong)*(undefined8 *)pfVar11 >> 0x20);
        uVar20 = CONCAT44(uVar14,uVar14);
        uVar21 = CONCAT44(pfVar11[2],pfVar11[2]);
        uVar15 = PackedFloatingMUL(uVar17,CONCAT44(local_60[1],local_60[0]));
        uVar16 = PackedFloatingMUL(uVar20,CONCAT44(fStack_4c,local_50));
        uVar18 = PackedFloatingMUL(uVar21,CONCAT44(fStack_3c,local_40));
        uVar15 = PackedFloatingADD(uVar15,CONCAT44(local_30[1],local_30[0]));
        uVar19 = PackedFloatingMUL(uVar17,CONCAT44(local_60[3],local_60[2]));
        uVar17 = PackedFloatingADD(uVar16,uVar18);
        uVar16 = PackedFloatingMUL(uVar20,CONCAT44(uStack_44,fStack_48));
        uVar21 = PackedFloatingMUL(uVar21,CONCAT44(uStack_34,fStack_38));
        uVar20 = PackedFloatingADD(uVar19,CONCAT44(uStack_24,local_30[2]));
        uVar17 = PackedFloatingADD(uVar15,uVar17);
        uVar15 = PackedFloatingADD(uVar16,uVar21);
        *(undefined8 *)local_c = uVar17;
        uVar17 = PackedFloatingADD(uVar20,uVar15);
        local_c[2] = (float)uVar17;
        FastExitMediaState();
      }
      else {
        iVar6 = 0;
        local_10 = (float *)((int)local_60 - (int)local_c);
        pfVar7 = local_c;
        do {
          iVar9 = 0;
          *pfVar7 = 0.0;
          pfVar10 = (float *)(((int)local_60 - (int)local_c) + (int)pfVar7);
          do {
            pfVar1 = pfVar11 + iVar9;
            fVar5 = *pfVar10;
            iVar9 = iVar9 + 1;
            pfVar10 = pfVar10 + 4;
            *pfVar7 = *pfVar1 * fVar5 + *pfVar7;
          } while (iVar9 < 3);
          iVar9 = iVar6 + iVar9 * 4;
          iVar6 = iVar6 + 1;
          *pfVar7 = local_60[iVar9] + *pfVar7;
          pfVar7 = pfVar7 + 1;
        } while (iVar6 < 3);
      }
      local_8 = local_8 + 1;
      local_c = local_c + 3;
      pfVar11 = pfVar11 + 3;
      local_10 = pfVar11;
    } while (local_8 < *(int *)(param_1 + 0x14));
  }
  uVar12 = (uint)*(ushort *)(param_3 + 0x68);
  local_14 = (float *)(*(ushort *)(param_3 + 0x6a) + uVar12);
  if (uVar12 < local_14) {
    local_8 = uVar12 * 0xc;
    do {
      camCAMERA::TransformVector
                (*(camCAMERA **)(this + 0x84),
                 (m3dV *)(*(int *)(*(int *)(param_1 + 0x28) + 0x44) + local_8),(m3dV *)&local_20);
      iVar9 = *(byte *)(*(int **)(param_1 + 0x28) + 1) * uVar12 + **(int **)(param_1 + 0x28);
      iVar6 = *(int *)(this + 0x1e04);
      pfVar11 = (float *)(iVar6 + (uint)*(ushort *)(iVar9 + 2) * 0xc);
      local_150 = *pfVar11;
      local_14c = pfVar11[1];
      local_148 = pfVar11[2];
      puVar2 = (undefined4 *)(iVar6 + (uint)*(ushort *)(iVar9 + 4) * 0xc);
      local_144 = *puVar2;
      local_140 = puVar2[1];
      local_13c = puVar2[2];
      puVar2 = (undefined4 *)(iVar6 + (uint)*(ushort *)(iVar9 + 6) * 0xc);
      local_138 = *puVar2;
      local_134 = puVar2[1];
      local_130 = puVar2[2];
      local_154 = 3;
      if (local_150 * local_20 + local_14c * local_1c + local_148 * local_18 <= -_DAT_005dc400) {
        uVar8 = *(uint *)(this + 4) & 0xfffdffff;
LAB_004eaa77:
        *(uint *)(this + 4) = uVar8;
        if (param_2 == 0) {
          RenderObjFace_Isect(this,param_1,uVar12,(m3dPOLY *)&local_154,(m3dV *)&local_20);
        }
        else {
          RenderObjFace_Inside(this,param_1,uVar12,(m3dPOLY *)&local_154,(m3dV *)&local_20);
        }
      }
      else if ((((byte)this[4] & 1) == 0) || (((byte)*param_1 & 4) != 0)) {
        uVar8 = *(uint *)(this + 4) | 0x20000;
        goto LAB_004eaa77;
      }
      uVar12 = uVar12 + 1;
      local_8 = local_8 + 0xc;
    } while ((int)uVar12 < (int)local_14);
  }
  iVar6 = (**(code **)(*(int *)this + 0x24))(param_1,param_3);
  return iVar6;
}




/* from: engine:Rend_obj.cpp
   addr: 004EAAD0 */

int __thiscall
rendDRIVER::RenderObjFace_Isect
          (rendDRIVER *this,objOBJ *param_1,int param_2,m3dPOLY *param_3,m3dV *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  m3dPOLY *pmVar4;
  m3dPOLY *pmVar5;
  m2dPOLY local_424 [164];
  m2dPOLY local_380 [164];
  m3dPOLY local_2dc [244];
  m3dPOLY local_1e8 [244];
  m3dPOLY local_f4 [244];
  
  iVar1 = m3dClipPolyNearPlane(param_3,(float)local_2dc,*(m3dPOLY **)(*(int *)(this + 0x84) + 0x80))
  ;
  if (iVar1 == 1) {
    return 0;
  }
  if (((byte)this[4] & 0x10) == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = m3dClipPolyPlane(local_2dc,(m3dV *)(this + 0x24),(m3dV *)(this + 0x30),local_f4);
    if (iVar2 != 1) {
      pmVar4 = local_f4;
      pmVar5 = local_2dc;
      for (iVar3 = 0x3d; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pmVar5 = *(undefined4 *)pmVar4;
        pmVar4 = pmVar4 + 4;
        pmVar5 = pmVar5 + 4;
      }
    }
    if (iVar2 == 1) {
      return 0;
    }
  }
  camCAMERA::ProjPoly(*(camCAMERA **)(this + 0x84),local_2dc,local_380);
  iVar3 = m2dClipPolyRect(local_380,(m2dPOLY *)(*(int *)(this + 0x84) + 0x88),local_424);
  if (iVar3 == 1) {
    return 0;
  }
  if (((iVar1 == -1) && (iVar2 == -1)) && (iVar3 == -1)) {
    if (((byte)this[4] & 2) == 0) {
      iVar1 = RasterizeObjFace_Inside(this,param_1,param_2,param_3,param_4,local_380);
      return iVar1;
    }
    iVar1 = RasterizeObjFace_ZOnly(this,param_1,param_2,param_3,local_380);
    return iVar1;
  }
  iVar1 = camCAMERA::BackProjPoly
                    (*(camCAMERA **)(this + 0x84),local_424,param_3,local_1e8,param_4,
                     *(uint *)(this + 4) & 0x20000);
  if (iVar1 == 0) {
    return 0;
  }
  if (((byte)this[4] & 2) == 0) {
    iVar1 = RasterizeObjFace_Isect(this,param_1,param_2,param_3,param_4,local_1e8,local_424);
    return iVar1;
  }
  iVar1 = RasterizeObjFace_ZOnly(this,param_1,param_2,local_1e8,local_424);
  return iVar1;
}




/* from: engine:Rend_obj.cpp
   addr: 004EACE0 */

int __thiscall
rendDRIVER::RenderObjFace_Inside
          (rendDRIVER *this,objOBJ *param_1,int param_2,m3dPOLY *param_3,m3dV *param_4)

{
  int iVar1;
  int iVar2;
  m3dPOLY *pmVar3;
  m3dPOLY *pmVar4;
  m2dPOLY local_28c [164];
  m3dPOLY local_1e8 [244];
  m3dPOLY local_f4 [244];
  
  if (((byte)this[4] & 0x10) == 0) {
    camCAMERA::ProjPoly(*(camCAMERA **)(this + 0x84),param_3,local_28c);
  }
  else {
    pmVar3 = param_3;
    pmVar4 = local_1e8;
    for (iVar1 = 0x3d; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pmVar4 = *(undefined4 *)pmVar3;
      pmVar3 = pmVar3 + 4;
      pmVar4 = pmVar4 + 4;
    }
    iVar1 = m3dClipPolyPlane(local_1e8,(m3dV *)(this + 0x24),(m3dV *)(this + 0x30),local_f4);
    if (iVar1 != 1) {
      pmVar3 = local_f4;
      pmVar4 = local_1e8;
      for (iVar2 = 0x3d; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pmVar4 = *(undefined4 *)pmVar3;
        pmVar3 = pmVar3 + 4;
        pmVar4 = pmVar4 + 4;
      }
    }
    if (iVar1 == 1) {
      return 0;
    }
    camCAMERA::ProjPoly(*(camCAMERA **)(this + 0x84),local_1e8,local_28c);
    if (iVar1 != -1) {
      if (((byte)this[4] & 2) == 0) {
        iVar1 = RasterizeObjFace_Isect(this,param_1,param_2,param_3,param_4,local_1e8,local_28c);
        return iVar1;
      }
      iVar1 = RasterizeObjFace_ZOnly(this,param_1,param_2,local_1e8,local_28c);
      return iVar1;
    }
  }
  if (((byte)this[4] & 2) == 0) {
    iVar1 = RasterizeObjFace_Inside(this,param_1,param_2,param_3,param_4,local_28c);
    return iVar1;
  }
  iVar1 = RasterizeObjFace_ZOnly(this,param_1,param_2,param_3,local_28c);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Rend_obj.cpp
   addr: 004EAE60 */

int __thiscall
rendDRIVER::RasterizeObjFace_Isect
          (rendDRIVER *this,objOBJ *param_1,int param_2,m3dPOLY *param_3,m3dV *param_4,
          m3dPOLY *param_5,m2dPOLY *param_6)

{
  byte *pbVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  int *piVar14;
  undefined4 uVar15;
  m3dPOLY *pmVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  uint *puVar25;
  int iVar26;
  m3dPOLY *pmVar27;
  uint uVar28;
  uint uVar29;
  float fStack_210;
  int iStack_208;
  int iStack_200;
  uint local_1e4;
  uint auStack_1d8 [3];
  float fStack_1cc;
  undefined4 uStack_1c8;
  float fStack_1c4;
  undefined4 uStack_1c0;
  float fStack_1bc;
  undefined4 uStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float afStack_1a4 [3];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float afStack_174 [77];
  float afStack_40 [8];
  float afStack_20 [8];
  
  local_1e4 = 0;
  iVar26 = (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) * param_2 + **(int **)(param_1 + 0x28);
  iVar17 = (**(code **)(*(int *)this + 0x38))();
  uVar21 = *(uint *)(param_1 + 0x24);
  auStack_1d8[0] = 0;
  auStack_1d8[1] = 0;
  auStack_1d8[2] = 0;
  if ((uVar21 & 0x20000) == 0) {
    piVar14 = *(int **)(param_1 + 0x28);
    iVar18 = (uint)*(ushort *)((uint)*(byte *)(piVar14 + 1) * param_2 + *piVar14) * 0x70 +
             *(int *)(piVar14[6] + 2);
    iStack_200 = (int)*(short *)(iVar18 + 100);
    if (0 < iStack_200) {
      pcVar19 = (char *)(iVar18 + 0x18);
      do {
        bVar11 = *(byte *)(piVar14[6] + 8 + *pcVar19 * 4);
        pbVar1 = (byte *)(piVar14[6] + 6 + *pcVar19 * 4);
        if (bVar11 < 3) {
          auStack_1d8[bVar11] = 1;
          puVar2 = (ushort *)(iVar26 + 8 + (uint)*pbVar1 * 6);
          uVar12 = *puVar2;
          iVar18 = piVar14[pbVar1[1] + 3];
          fVar3 = *(float *)(iVar18 + (uint)uVar12 * 8);
          afStack_174[bVar11] = fVar3;
          fVar4 = *(float *)(iVar18 + (uint)uVar12 * 8 + 4);
          uVar12 = puVar2[1];
          uVar13 = puVar2[2];
          afStack_174[bVar11 + 9] = fVar4;
          pfVar24 = (float *)(iVar18 + (uint)uVar13 * 8);
          afStack_174[bVar11 + 6] = *(float *)(iVar18 + (uint)uVar12 * 8) - fVar3;
          afStack_1a4[bVar11] = *pfVar24 - fVar3;
          afStack_174[bVar11 + 3] = *(float *)(iVar18 + (uint)uVar12 * 8 + 4) - fVar4;
          afStack_174[bVar11 + 0xc] = pfVar24[1] - fVar4;
        }
        pcVar19 = pcVar19 + 0x19;
        iStack_200 = iStack_200 + -1;
      } while (iStack_200 != 0);
    }
    local_1e4 = uVar21 & 0x10;
  }
  fStack_198 = *(float *)(param_3 + 0x10) - *(float *)(param_3 + 4);
  fStack_194 = *(float *)(param_3 + 0x14) - *(float *)(param_3 + 8);
  fStack_190 = *(float *)(param_3 + 0x18) - *(float *)(param_3 + 0xc);
  fStack_18c = *(float *)(param_3 + 0x1c) - *(float *)(param_3 + 4);
  fStack_188 = *(float *)(param_3 + 0x20) - *(float *)(param_3 + 8);
  fStack_184 = *(float *)(param_3 + 0x24) - *(float *)(param_3 + 0xc);
  if (local_1e4 == 0) {
    fStack_210 = *(float *)(*(int *)(param_1 + 0x28) + 0x62);
  }
  else {
    uStack_1c0 = 0;
    iVar18 = *(int *)(*(int *)(param_1 + 0x28) + 0x4c);
    uVar21 = *(uint *)(iVar18 + (uint)*(ushort *)(iVar26 + 2) * 4);
    uVar22 = *(uint *)(iVar18 + (uint)*(ushort *)(iVar26 + 4) * 4);
    uVar29 = *(uint *)(iVar18 + (uint)*(ushort *)(iVar26 + 6) * 4);
    fStack_1b0 = (float)(uVar21 >> 0x10 & 0xff);
    fStack_1b4 = (float)(uVar21 >> 8 & 0xff);
    fStack_1a8 = (float)(uVar22 >> 0x10 & 0xff) - fStack_1b0;
    fStack_1b0 = (float)(uVar29 >> 0x10 & 0xff) - fStack_1b0;
    fStack_1ac = (float)(uVar22 >> 8 & 0xff) - fStack_1b4;
    fStack_1b4 = (float)(uVar29 >> 8 & 0xff) - fStack_1b4;
    fStack_210 = (float)(uVar22 & 0xff) - (float)(uVar21 & 0xff);
    fStack_1c4 = (float)(uVar29 & 0xff) - (float)(uVar21 & 0xff);
    uStack_1b8 = 0;
    uStack_1c8 = 0;
    fStack_1bc = (float)(uVar22 >> 0x18) - (float)(uVar21 >> 0x18);
    fStack_1cc = (float)(uVar29 >> 0x18) - (float)(uVar21 >> 0x18);
  }
  iVar26 = *(int *)param_5;
  if (0 < iVar26) {
    pfVar23 = afStack_40;
    pfVar24 = (float *)(iVar17 + 8);
    pmVar16 = param_5;
    iStack_208 = iVar26;
    do {
      pmVar27 = pmVar16 + 0xc;
      iVar18 = *(int *)(this + 0x84);
      pfVar24[-2] = (*(float *)(param_6 + 4) - *(float *)(iVar18 + 300)) *
                    *(float *)(iVar18 + 0x158) + *(float *)(iVar18 + 0x13c);
      iVar18 = *(int *)(this + 0x84);
      pfVar24[-1] = ((*(float *)(iVar18 + 0x138) - *(float *)(param_6 + 8)) +
                    *(float *)(iVar18 + 0x130)) * *(float *)(iVar18 + 0x15c) +
                    *(float *)(iVar18 + 0x140);
      *pfVar24 = *(float *)pmVar27;
      pfVar24[1] = *(float *)(*(int *)(this + 0x84) + 0x80) / *(float *)pmVar27;
      fStack_180 = *(float *)(pmVar16 + 4) - *(float *)(param_3 + 4);
      fStack_17c = *(float *)(pmVar16 + 8) - *(float *)(param_3 + 8);
      fStack_178 = *(float *)pmVar27 - *(float *)(param_3 + 0xc);
      m3dBasisCoord((m3dV *)&fStack_198,(m3dV *)&fStack_18c,(m3dV *)&fStack_180,pfVar23,pfVar23 + 8)
      ;
      pfVar24 = pfVar24 + 0xc;
      pfVar23 = pfVar23 + 1;
      iStack_208 = iStack_208 + -1;
      param_6 = param_6 + 8;
      pmVar16 = pmVar27;
    } while (iStack_208 != 0);
  }
  pfVar24 = (float *)(iVar17 + 0x1c);
  iVar18 = 0;
  do {
    if ((*(int *)((int)auStack_1d8 + iVar18) != 0) && (iVar20 = 0, 0 < iVar26)) {
      fVar3 = *(float *)((int)afStack_1a4 + iVar18);
      fVar4 = *(float *)((int)afStack_174 + iVar18 + 0x18);
      fVar5 = *(float *)((int)afStack_174 + iVar18);
      fVar6 = *(float *)((int)afStack_174 + iVar18 + 0x30);
      fVar7 = *(float *)((int)afStack_174 + iVar18 + 0xc);
      fVar8 = *(float *)((int)afStack_174 + iVar18 + 0x24);
      pfVar23 = pfVar24;
      do {
        fVar9 = afStack_40[iVar20];
        fVar10 = afStack_20[iVar20];
        iVar20 = iVar20 + 1;
        pfVar23[-1] = fVar3 * fVar10 + fVar4 * fVar9 + fVar5;
        *pfVar23 = fVar7 * fVar9 + fVar6 * fVar10 + fVar8;
        pfVar23 = pfVar23 + 0xc;
      } while (iVar20 < iVar26);
    }
    iVar18 = iVar18 + 4;
    pfVar24 = pfVar24 + 2;
  } while (iVar18 < 0xc);
  if (local_1e4 == 0) {
    if (0 < iVar26) {
      pfVar24 = (float *)(iVar17 + 0x10);
      do {
        *pfVar24 = fStack_210;
        pfVar24 = pfVar24 + 0xc;
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
    }
  }
  else {
    iStack_208 = 0;
    if (0 < iVar26) {
      puVar25 = (uint *)(iVar17 + 0x10);
      do {
        uVar21 = ftol();
        iVar18 = ftol();
        uVar22 = ftol();
        uVar28 = ((uVar21 & 0xff | iVar18 << 8) << 8 | uVar22 & 0xff) << 8;
        uVar21 = ftol();
        uVar29 = uVar28 | uVar21 & 0xff;
        *puVar25 = uVar29;
        if ((((byte)param_1[0x24] & 0x40) != 0) && (uVar28 >> 0x18 != 0xff)) {
          uVar29 = ftol();
          afStack_1a4[1] = 0.0;
          afStack_1a4[0] = (float)(uVar22 & 0xff);
          uVar22 = ftol();
          auStack_1d8[1] = 0;
          auStack_1d8[0] = uVar21 & 0xff;
          uVar21 = ftol();
          uVar29 = ((uVar29 | 0xffffff00) << 8 | uVar22 & 0xff) << 8 | uVar21 & 0xff;
        }
        *puVar25 = uVar29;
        iStack_208 = iStack_208 + 1;
        puVar25 = puVar25 + 0xc;
      } while (iStack_208 < iVar26);
    }
  }
  uVar15 = *(undefined4 *)param_5;
  afStack_174[0xf] = 1.4013e-45;
  pfVar24 = afStack_174 + 0x10;
  for (iVar26 = 0x3d; iVar26 != 0; iVar26 = iVar26 + -1) {
    *pfVar24 = *(float *)param_5;
    param_5 = param_5 + 4;
    pfVar24 = pfVar24 + 1;
  }
  iVar17 = (**(code **)(*(int *)this + 0x3c))(param_1,param_2,uVar15,iVar17,afStack_174 + 0xf);
  return iVar17;
}




/* from: engine:Rend_obj.cpp
   addr: 004EB600 */

int __thiscall
rendDRIVER::RasterizeObjFace_Inside
          (rendDRIVER *this,objOBJ *param_1,int param_2,m3dPOLY *param_3,m3dV *param_4,
          m2dPOLY *param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  txmTEXTURE *ptVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  m3dPOLY *pmVar17;
  ushort *puVar18;
  m3dVTX *pmVar19;
  m2dPOLY *pmVar20;
  int iVar21;
  m3dVTX *pmStack_16c;
  uint *puStack_168;
  int iStack_15c;
  undefined4 uStack_138;
  undefined4 auStack_134 [77];
  
  puVar18 = (ushort *)
            ((uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) * param_2 + **(int **)(param_1 + 0x28));
  iVar8 = (**(code **)(*(int *)this + 0x38))();
  iVar16 = *(int *)param_3;
  if (0 < iVar16) {
    pfVar9 = (float *)(iVar8 + 8);
    pmVar20 = param_5 + 8;
    pmVar17 = param_3;
    puStack_168 = (uint *)iVar16;
    do {
      pmVar17 = pmVar17 + 0xc;
      iVar21 = *(int *)(this + 0x84);
      pfVar9[-2] = (*(float *)(pmVar20 + -4) - *(float *)(iVar21 + 300)) *
                   *(float *)(iVar21 + 0x158) + *(float *)(iVar21 + 0x13c);
      iVar21 = *(int *)(this + 0x84);
      pfVar9[-1] = ((*(float *)(iVar21 + 0x138) - *(float *)pmVar20) + *(float *)(iVar21 + 0x130)) *
                   *(float *)(iVar21 + 0x15c) + *(float *)(iVar21 + 0x140);
      *pfVar9 = *(float *)pmVar17;
      puStack_168 = (uint *)((int)puStack_168 + -1);
      pfVar9[1] = *(float *)(*(int *)(this + 0x84) + 0x80) / *(float *)pmVar17;
      pfVar9 = pfVar9 + 0xc;
      pmVar20 = pmVar20 + 8;
    } while (puStack_168 != (uint *)0x0);
  }
  pmStack_16c = (m3dVTX *)(iVar8 + 0x18);
  iStack_15c = 0;
  do {
    ptVar10 = objOBJ::GetFaceTexRendMtl(param_1,param_2,iStack_15c);
    if ((ptVar10 != (txmTEXTURE *)0x0) && (iVar21 = 0, pmVar19 = pmStack_16c, 0 < iVar16)) {
      do {
        objOBJ::GetFaceTexCoord(param_1,param_2,iVar21,iStack_15c,pmVar19);
        iVar21 = iVar21 + 1;
        pmVar19 = pmVar19 + 0x30;
      } while (iVar21 < iVar16);
    }
    iStack_15c = iStack_15c + 1;
    pmStack_16c = pmStack_16c + 8;
  } while (iStack_15c < 3);
  piVar5 = *(int **)(param_1 + 0x28);
  iStack_15c = 0;
  iVar21 = (uint)*(ushort *)((uint)*(byte *)(piVar5 + 1) * param_2 + *piVar5) * 0x70 +
           *(int *)(piVar5[6] + 2);
  if (0 < *(short *)(iVar21 + 100)) {
    puStack_168 = (uint *)(iVar21 + 0x18);
    do {
      pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 6 + (char)*puStack_168 * 4);
      if (pbVar1[2] < 3) {
        bVar2 = *pbVar1;
        iVar11 = 0;
        if (0 < iVar16) {
          pmStack_16c = (m3dVTX *)0x0;
          do {
            uVar4 = puVar18[(uint)bVar2 * 3 + iVar11 + 4];
            iVar6 = *(int *)(*(int *)(param_1 + 0x28) + 0xc + (uint)pbVar1[1] * 4);
            bVar3 = pbVar1[2];
            iVar11 = iVar11 + 1;
            *(undefined4 *)(iVar8 + 0x18 + ((uint)bVar3 + (int)pmStack_16c) * 8) =
                 *(undefined4 *)(iVar6 + (uint)uVar4 * 8);
            *(undefined4 *)(iVar8 + 0x1c + ((uint)bVar3 + (int)pmStack_16c) * 8) =
                 *(undefined4 *)(iVar6 + 4 + (uint)uVar4 * 8);
            pmStack_16c = (m3dVTX *)((int)pmStack_16c + 6);
          } while (iVar11 < iVar16);
        }
      }
      puStack_168 = (uint *)((int)puStack_168 + 0x19);
      iStack_15c = iStack_15c + 1;
    } while (iStack_15c < *(short *)(iVar21 + 100));
  }
  if (((byte)param_1[0x24] & 0x10) == 0) {
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x62);
    if (0 < iVar16) {
      puVar15 = (undefined4 *)(iVar8 + 0x10);
      do {
        *puVar15 = uVar7;
        puVar15 = puVar15 + 0xc;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
  }
  else if (0 < iVar16) {
    puStack_168 = (uint *)(iVar8 + 0x10);
    pmStack_16c = (m3dVTX *)iVar16;
    do {
      puVar18 = puVar18 + 1;
      uVar12 = *(uint *)(*(int *)(*(int *)(param_1 + 0x28) + 0x4c) + (uint)*puVar18 * 4);
      if ((((byte)param_1[0x24] & 0x40) != 0) && (uVar12 >> 0x18 != 0xff)) {
        uVar12 = ftol();
        uVar13 = ftol();
        uVar14 = ftol();
        uVar12 = ((uVar12 | 0xffffff00) << 8 | uVar13 & 0xff) << 8 | uVar14 & 0xff;
      }
      *puStack_168 = uVar12;
      puStack_168 = puStack_168 + 0xc;
      pmStack_16c = (m3dVTX *)((int)pmStack_16c + -1);
    } while (pmStack_16c != (m3dVTX *)0x0);
  }
  uVar7 = *(undefined4 *)param_3;
  uStack_138 = 0;
  puVar15 = auStack_134;
  for (iVar16 = 0x3d; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar15 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    puVar15 = puVar15 + 1;
  }
  iVar16 = (**(code **)(*(int *)this + 0x3c))(param_1,param_2,uVar7,iVar8,&uStack_138);
  return iVar16;
}




/* from: engine:Rend_obj.cpp
   addr: 004EB9A0 */

int __thiscall
rendDRIVER::RasterizeObjFace_ZOnly
          (rendDRIVER *this,objOBJ *param_1,int param_2,m3dPOLY *param_3,m2dPOLY *param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  m3dPOLY *pmVar5;
  undefined4 *puVar6;
  undefined4 uStack_138;
  undefined4 auStack_134 [77];
  
  iVar2 = (**(code **)(*(int *)this + 0x38))();
  iVar4 = *(int *)param_3;
  if (0 < iVar4) {
    pfVar3 = (float *)(iVar2 + 8);
    pmVar5 = param_3;
    do {
      pmVar5 = pmVar5 + 0xc;
      iVar1 = *(int *)(this + 0x84);
      iVar4 = iVar4 + -1;
      pfVar3[-2] = (*(float *)(param_4 + 4) - *(float *)(iVar1 + 300)) * *(float *)(iVar1 + 0x158) +
                   *(float *)(iVar1 + 0x13c);
      iVar1 = *(int *)(this + 0x84);
      pfVar3[-1] = ((*(float *)(iVar1 + 0x138) - *(float *)(param_4 + 8)) +
                   *(float *)(iVar1 + 0x130)) * *(float *)(iVar1 + 0x15c) +
                   *(float *)(iVar1 + 0x140);
      *pfVar3 = *(float *)pmVar5;
      pfVar3[1] = *(float *)(*(int *)(this + 0x84) + 0x80) / *(float *)pmVar5;
      pfVar3 = pfVar3 + 0xc;
      param_4 = param_4 + 8;
    } while (iVar4 != 0);
  }
  uStack_138 = 0;
  pmVar5 = param_3;
  puVar6 = auStack_134;
  for (iVar4 = 0x3d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *(undefined4 *)pmVar5;
    pmVar5 = pmVar5 + 4;
    puVar6 = puVar6 + 1;
  }
  iVar4 = (**(code **)(*(int *)this + 0x3c))
                    (param_1,param_2,*(undefined4 *)param_3,iVar2,&uStack_138);
  return iVar4;
}

