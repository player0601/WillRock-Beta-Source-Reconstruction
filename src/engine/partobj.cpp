
/* from: engine:partobj.cpp
   addr: 004CABC0 */

void __fastcall partDetachInst(animINST *param_1)

{
  partEMITTER_PHYS **pppVar1;
  partEMITTER_PHYS ***ppppVar2;
  
  ppppVar2 = &_partEmitList;
  do {
    pppVar1 = *ppppVar2;
    if ((pppVar1 != (partEMITTER_PHYS **)0x0) && ((animINST *)pppVar1[0xaf] == param_1)) {
      pppVar1[0xaf] = (partEMITTER_PHYS *)0x0;
    }
    ppppVar2 = ppppVar2 + 1;
  } while ((int)ppppVar2 < 0x8b78f0);
  return;
}




/* from: engine:partobj.cpp
   addr: 004CABF0 */

int __fastcall partIsOwnerInstHidden(partEMITTER_PHYS *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 700);
  if (iVar1 == 0) {
    return iVar1;
  }
  return *(uint *)(iVar1 + 4) & 3;
}




/* from: engine:partobj.cpp
   addr: 004CAC10 */

int __fastcall partIsOwnerInstVisible(partEMITTER_PHYS *param_1)

{
  if (*(int *)(param_1 + 700) == 0) {
    return 1;
  }
  return *(uint *)(*(int *)(param_1 + 700) + 4) & 0x80000000;
}




/* from: engine:partobj.cpp
   addr: 004CAC30 */

int __fastcall
partSetAreaEmissionObj(partEMITTER_PHYS *param_1,objOBJ *param_2,int param_3,m3dV *param_4)

{
  int iVar1;
  objOBJ *local_4;
  
  if (param_2 == (objOBJ *)0x0) {
    return 1;
  }
  local_4 = param_2;
  iVar1 = partSetAreaEmissionObjList(param_1,1,&local_4,param_3,param_4);
  return iVar1;
}




/* from: engine:partobj.cpp
   addr: 004CAC60 */

int __fastcall
partSetAreaEmissionObjList
          (partEMITTER_PHYS *param_1,int param_2,objOBJ **param_3,int param_4,m3dV *param_5)

{
  objOBJ *poVar1;
  float *pfVar2;
  float fVar3;
  animINST *this;
  int *piVar4;
  int iVar5;
  objFACE *poVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  objOBJ *poVar10;
  objOBJ *poVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float local_60 [3];
  float local_54 [3];
  float local_48 [3];
  m3dV local_3c [12];
  uint local_30;
  objOBJ *local_2c;
  float *local_28;
  int local_24;
  int local_20;
  partEMITTER_PHYS *local_1c;
  int local_18;
  objOBJ *local_14;
  objOBJ *local_10;
  int local_c;
  int local_8;
  
  iVar12 = 0;
  local_8 = 0;
  if (param_2 != 0) {
    local_2c = (objOBJ *)(*(uint *)(param_1 + 8) & 0x100);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
    if (((*(int *)(param_1 + 700) == 0) || ((*(byte *)(*(int *)(param_1 + 700) + 4) & 3) == 0)) &&
       (((*(uint *)(param_1 + 4) & 0x8000000) == 0 || (((byte)param_1[8] & 0x40) != 0)))) {
      iVar13 = 0;
      local_20 = 0;
      local_24 = param_2;
      iVar5 = local_20;
      local_1c = param_1;
      if (0 < param_2) {
        do {
          this = *(animINST **)(param_3[iVar12] + 0xbc);
          if (this == (animINST *)0x0) {
            objOBJ::GetCenter(param_3[iVar12],local_3c);
          }
          else {
            animINST::Validate(this,0x204);
            animINST::GetPos(*(animINST **)(param_3[iVar12] + 0xbc),local_3c);
          }
          iVar13 = iVar13 + *(int *)(param_3[iVar12] + 0x10);
          iVar12 = iVar12 + 1;
          iVar5 = iVar13;
        } while (iVar12 < local_24);
      }
      local_20 = iVar5;
      iVar12 = local_20;
      partEMITTER_PHYS::SetPosDirSpeed(local_1c,local_3c,(m3dV *)0x0,(m3dV *)0x0);
      if ((param_4 < 1) || (iVar12 <= param_4)) {
        param_4 = iVar12;
      }
      local_8 = param_4;
      local_18 = 0;
      if (0 < param_4) {
        local_30 = (uint)(local_2c == (objOBJ *)0x0);
        do {
          iVar5 = local_18;
          if (param_4 < iVar12) {
            iVar5 = m3dRND_GEN::RndIntMax((m3dRND_GEN *)&local_8,iVar12 + -1);
          }
          iVar12 = 0;
          iVar13 = 0;
          local_c = 0;
          if (0 < local_24) {
            do {
              if ((iVar12 <= iVar5) && (iVar5 < *(int *)(param_3[iVar13] + 0x10) + iVar12)) break;
              iVar12 = iVar12 + *(int *)(param_3[iVar13] + 0x10);
              iVar13 = iVar13 + 1;
            } while (iVar13 < local_24);
            local_c = iVar13;
          }
          poVar11 = (objOBJ *)(iVar5 - iVar12);
          poVar10 = param_3[local_c];
          local_14 = poVar11;
          if (((byte)*poVar10 & 1) == 0) {
            poVar6 = objOBJ::GetFace(poVar10,(int)poVar11);
            local_28 = local_60;
            poVar1 = (objOBJ *)
                     (*(int *)(*(int *)(poVar10 + 0x28) + 0x40) +
                     (uint)*(ushort *)(poVar6 + 2) * 0xc);
            local_10 = poVar10 + 0x3c;
            local_2c = poVar1;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar14 = (undefined4)*(undefined8 *)poVar1;
                uVar17 = CONCAT44(uVar14,uVar14);
                uVar14 = (undefined4)((ulonglong)*(undefined8 *)poVar1 >> 0x20);
                uVar20 = CONCAT44(uVar14,uVar14);
                uVar21 = CONCAT44(*(undefined4 *)(poVar1 + 8),*(undefined4 *)(poVar1 + 8));
                uVar15 = PackedFloatingMUL(uVar17,*(undefined8 *)local_10);
                uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(poVar10 + 0x4c));
                uVar18 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar10 + 0x5c));
                uVar15 = PackedFloatingADD(uVar15,*(undefined8 *)(poVar10 + 0x6c));
                uVar19 = PackedFloatingMUL(uVar17,*(undefined8 *)(poVar10 + 0x44));
                uVar17 = PackedFloatingADD(uVar16,uVar18);
                uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(poVar10 + 0x54));
                uVar21 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar10 + 100));
                uVar20 = PackedFloatingADD(uVar19,*(undefined8 *)(poVar10 + 0x74));
                uVar17 = PackedFloatingADD(uVar15,uVar17);
                uVar15 = PackedFloatingADD(uVar16,uVar21);
                local_60[1] = (float)((ulonglong)uVar17 >> 0x20);
                local_60[0] = (float)uVar17;
                uVar17 = PackedFloatingADD(uVar20,uVar15);
                local_60[2] = (float)uVar17;
                FastExitMediaState();
              }
              else {
                iVar12 = 0;
                local_2c = local_10 + -(int)local_60;
                pfVar7 = local_60;
                do {
                  poVar10 = local_2c;
                  iVar5 = 0;
                  *pfVar7 = 0.0;
                  poVar10 = poVar10 + (int)pfVar7;
                  do {
                    iVar13 = iVar5 * 4;
                    fVar3 = *(float *)poVar10;
                    iVar5 = iVar5 + 1;
                    poVar10 = poVar10 + 0x10;
                    *pfVar7 = *(float *)(poVar1 + iVar13) * fVar3 + *pfVar7;
                  } while (iVar5 < 3);
                  iVar5 = iVar12 + iVar5 * 4;
                  iVar12 = iVar12 + 1;
                  *pfVar7 = *(float *)(local_10 + iVar5 * 4) + *pfVar7;
                  pfVar7 = pfVar7 + 1;
                } while (iVar12 < 3);
              }
            }
          }
          else {
            piVar4 = *(int **)(poVar10 + 0x28);
            uVar8 = (uint)*(ushort *)((uint)*(byte *)(piVar4 + 1) * (int)poVar11 + 2 + *piVar4);
            iVar12 = piVar4[0x10] + uVar8 * 0xc;
            local_60[0] = *(float *)(piVar4[0x10] + uVar8 * 0xc);
            local_60[1] = *(float *)(iVar12 + 4);
            local_60[2] = *(float *)(iVar12 + 8);
          }
          poVar10 = param_3[local_c];
          if (((byte)*poVar10 & 1) == 0) {
            piVar4 = *(int **)(poVar10 + 0x28);
            local_2c = (objOBJ *)local_54;
            poVar1 = poVar10 + 0x3c;
            local_10 = poVar1;
            pfVar7 = (float *)(piVar4[0x10] +
                              (uint)*(ushort *)
                                     ((uint)*(byte *)(piVar4 + 1) * (int)poVar11 + 4 + *piVar4) *
                              0xc);
            local_28 = pfVar7;
            poVar11 = local_14;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar14 = (undefined4)*(undefined8 *)pfVar7;
                uVar17 = CONCAT44(uVar14,uVar14);
                uVar14 = (undefined4)((ulonglong)*(undefined8 *)pfVar7 >> 0x20);
                uVar20 = CONCAT44(uVar14,uVar14);
                uVar21 = CONCAT44(pfVar7[2],pfVar7[2]);
                uVar15 = PackedFloatingMUL(uVar17,*(undefined8 *)poVar1);
                uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(poVar10 + 0x4c));
                uVar18 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar10 + 0x5c));
                uVar15 = PackedFloatingADD(uVar15,*(undefined8 *)(poVar10 + 0x6c));
                uVar19 = PackedFloatingMUL(uVar17,*(undefined8 *)(poVar10 + 0x44));
                uVar17 = PackedFloatingADD(uVar16,uVar18);
                uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(poVar10 + 0x54));
                uVar21 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar10 + 100));
                uVar20 = PackedFloatingADD(uVar19,*(undefined8 *)(poVar10 + 0x74));
                uVar17 = PackedFloatingADD(uVar15,uVar17);
                uVar15 = PackedFloatingADD(uVar16,uVar21);
                local_54[1] = (float)((ulonglong)uVar17 >> 0x20);
                local_54[0] = (float)uVar17;
                uVar17 = PackedFloatingADD(uVar20,uVar15);
                local_54[2] = (float)uVar17;
                FastExitMediaState();
              }
              else {
                iVar12 = 0;
                local_2c = poVar1 + -(int)local_54;
                pfVar9 = local_54;
                do {
                  poVar10 = local_2c;
                  iVar5 = 0;
                  *pfVar9 = 0.0;
                  poVar10 = poVar10 + (int)pfVar9;
                  do {
                    pfVar2 = pfVar7 + iVar5;
                    fVar3 = *(float *)poVar10;
                    iVar5 = iVar5 + 1;
                    poVar10 = poVar10 + 0x10;
                    *pfVar9 = *pfVar2 * fVar3 + *pfVar9;
                  } while (iVar5 < 3);
                  iVar5 = iVar12 + iVar5 * 4;
                  iVar12 = iVar12 + 1;
                  *pfVar9 = *(float *)(poVar1 + iVar5 * 4) + *pfVar9;
                  pfVar9 = pfVar9 + 1;
                  poVar11 = local_14;
                } while (iVar12 < 3);
              }
            }
          }
          else {
            piVar4 = *(int **)(poVar10 + 0x28);
            uVar8 = (uint)*(ushort *)((uint)*(byte *)(piVar4 + 1) * (int)poVar11 + 4 + *piVar4);
            iVar12 = piVar4[0x10] + uVar8 * 0xc;
            local_54[0] = *(float *)(piVar4[0x10] + uVar8 * 0xc);
            local_54[1] = *(float *)(iVar12 + 4);
            local_54[2] = *(float *)(iVar12 + 8);
          }
          poVar10 = param_3[local_c];
          if (((byte)*poVar10 & 1) == 0) {
            local_2c = (objOBJ *)local_48;
            piVar4 = *(int **)(poVar10 + 0x28);
            poVar1 = poVar10 + 0x3c;
            local_14 = poVar1;
            pfVar7 = (float *)(piVar4[0x10] +
                              (uint)*(ushort *)
                                     ((uint)*(byte *)(piVar4 + 1) * (int)poVar11 + 6 + *piVar4) *
                              0xc);
            local_28 = pfVar7;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar14 = (undefined4)*(undefined8 *)pfVar7;
                uVar17 = CONCAT44(uVar14,uVar14);
                uVar14 = (undefined4)((ulonglong)*(undefined8 *)pfVar7 >> 0x20);
                uVar20 = CONCAT44(uVar14,uVar14);
                uVar21 = CONCAT44(pfVar7[2],pfVar7[2]);
                uVar15 = PackedFloatingMUL(uVar17,*(undefined8 *)poVar1);
                uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(poVar10 + 0x4c));
                uVar18 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar10 + 0x5c));
                uVar15 = PackedFloatingADD(uVar15,*(undefined8 *)(poVar10 + 0x6c));
                uVar19 = PackedFloatingMUL(uVar17,*(undefined8 *)(poVar10 + 0x44));
                uVar17 = PackedFloatingADD(uVar16,uVar18);
                uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(poVar10 + 0x54));
                uVar21 = PackedFloatingMUL(uVar21,*(undefined8 *)(poVar10 + 100));
                uVar20 = PackedFloatingADD(uVar19,*(undefined8 *)(poVar10 + 0x74));
                uVar17 = PackedFloatingADD(uVar15,uVar17);
                uVar15 = PackedFloatingADD(uVar16,uVar21);
                local_48[1] = (float)((ulonglong)uVar17 >> 0x20);
                local_48[0] = (float)uVar17;
                uVar17 = PackedFloatingADD(uVar20,uVar15);
                local_48[2] = (float)uVar17;
                FastExitMediaState();
              }
              else {
                iVar12 = 0;
                local_2c = poVar1 + -(int)local_48;
                pfVar9 = local_48;
                do {
                  poVar10 = local_2c;
                  iVar5 = 0;
                  *pfVar9 = 0.0;
                  poVar10 = poVar10 + (int)pfVar9;
                  do {
                    pfVar2 = pfVar7 + iVar5;
                    fVar3 = *(float *)poVar10;
                    iVar5 = iVar5 + 1;
                    poVar10 = poVar10 + 0x10;
                    *pfVar9 = *pfVar2 * fVar3 + *pfVar9;
                  } while (iVar5 < 3);
                  iVar5 = iVar12 + iVar5 * 4;
                  iVar12 = iVar12 + 1;
                  *pfVar9 = *(float *)(poVar1 + iVar5 * 4) + *pfVar9;
                  pfVar9 = pfVar9 + 1;
                } while (iVar12 < 3);
              }
            }
          }
          else {
            piVar4 = *(int **)(poVar10 + 0x28);
            uVar8 = (uint)*(ushort *)((uint)*(byte *)(piVar4 + 1) * (int)poVar11 + 6 + *piVar4);
            iVar12 = piVar4[0x10] + uVar8 * 0xc;
            local_48[0] = *(float *)(piVar4[0x10] + uVar8 * 0xc);
            local_48[1] = *(float *)(iVar12 + 4);
            local_48[2] = *(float *)(iVar12 + 8);
          }
          iVar5 = local_18;
          if (param_5 != (m3dV *)0x0) {
            local_60[0] = local_60[0] - *(float *)param_5;
            local_60[1] = local_60[1] - *(float *)(param_5 + 4);
            local_60[2] = local_60[2] - *(float *)(param_5 + 8);
            local_54[0] = local_54[0] - *(float *)param_5;
            local_54[1] = local_54[1] - *(float *)(param_5 + 4);
            local_54[2] = local_54[2] - *(float *)(param_5 + 8);
            local_48[0] = local_48[0] - *(float *)param_5;
            local_48[1] = local_48[1] - *(float *)(param_5 + 4);
            local_48[2] = local_48[2] - *(float *)(param_5 + 8);
          }
          iVar12 = partEMITTER_PHYS::SetAreaEmission
                             (local_1c,param_4,local_18,(m3dTRI *)local_60,local_30);
          if (iVar12 == 0) {
            return 0;
          }
          local_18 = iVar5 + 1;
          iVar12 = local_20;
        } while (iVar5 + 1 < param_4);
      }
      *(uint *)(local_1c + 8) = *(uint *)(local_1c + 8) | 0x100;
    }
  }
  return 1;
}

