
/* from: m3d:m3d_matr.cpp
   addr: 005496C0 */

int __fastcall m3dInit3DMatr(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  m3dMATR *pmVar4;
  
  iVar1 = 0;
  puVar3 = &DAT_00963670;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    *(undefined4 *)((int)&DAT_00963670 + iVar1) = 0x3f800000;
    iVar1 = iVar1 + 0x14;
  } while (iVar1 < 0x50);
  iVar1 = 0;
  puVar3 = &DAT_009636b0;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    *(undefined4 *)((int)&DAT_009636b0 + iVar1) = 0x3f800000;
    iVar1 = iVar1 + 0x14;
  } while (iVar1 < 0x50);
  iVar1 = 0;
  puVar3 = &DAT_00963630;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    *(undefined4 *)((int)&DAT_00963630 + iVar1) = 0x3f800000;
    iVar1 = iVar1 + 0x14;
  } while (iVar1 < 0x50);
  iVar1 = 0;
  pmVar4 = &m3dMatrIdentity;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pmVar4 = 0;
    pmVar4 = pmVar4 + 4;
  }
  do {
    *(undefined4 *)(&m3dMatrIdentity + iVar1) = 0x3f800000;
    iVar1 = iVar1 + 0x14;
  } while (iVar1 < 0x50);
  return 1;
}




/* from: m3d:m3d_matr.cpp
   addr: 00549740 */

void __fastcall m3dAddMatr(m3dMATR *param_1,m3dMATR *param_2,m3dMATR *param_3)

{
  m3dMATR *pmVar1;
  float fVar2;
  m3dMATR *pmVar3;
  int iVar4;
  
  iVar4 = 0x10;
  pmVar3 = param_2;
  do {
    pmVar1 = pmVar3 + ((int)param_1 - (int)param_2);
    fVar2 = *(float *)pmVar3;
    pmVar3 = pmVar3 + 4;
    iVar4 = iVar4 + -1;
    *(float *)(pmVar3 + (int)(param_3 + (-4 - (int)param_2))) = *(float *)pmVar1 + fVar2;
  } while (iVar4 != 0);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 00549770 */

void __cdecl m3dMultiplyMatr(m3dMATR *param_1,m3dMATR *param_2,m3dMATR *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  m3dMATR *pmVar17;
  m3dMATR *pmVar18;
  m3dMATR *pmVar19;
  m3dMATR *pmVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar25;
  undefined8 uVar24;
  undefined4 uVar27;
  undefined8 uVar26;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  if (m3dSimdType == 0) {
    fVar1 = *(float *)param_1;
    fVar45 = (float)*(undefined8 *)param_2;
    fVar46 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    fVar47 = (float)*(undefined8 *)(param_2 + 8);
    fVar48 = (float)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
    fVar2 = *(float *)(param_1 + 4);
    fVar41 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar42 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar43 = (float)*(undefined8 *)(param_2 + 0x18);
    fVar44 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    fVar3 = *(float *)(param_1 + 8);
    fVar37 = (float)*(undefined8 *)(param_2 + 0x20);
    fVar38 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    fVar39 = (float)*(undefined8 *)(param_2 + 0x28);
    fVar40 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
    fVar4 = *(float *)(param_1 + 0xc);
    fVar33 = (float)*(undefined8 *)(param_2 + 0x30);
    fVar34 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    fVar35 = (float)*(undefined8 *)(param_2 + 0x38);
    fVar36 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
    fVar5 = *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(param_1 + 0x14);
    fVar7 = *(float *)(param_1 + 0x18);
    fVar8 = *(float *)(param_1 + 0x1c);
    fVar9 = *(float *)(param_1 + 0x20);
    fVar10 = *(float *)(param_1 + 0x24);
    fVar11 = *(float *)(param_1 + 0x28);
    fVar12 = *(float *)(param_1 + 0x2c);
    fVar13 = *(float *)(param_1 + 0x30);
    fVar14 = *(float *)(param_1 + 0x34);
    fVar15 = *(float *)(param_1 + 0x38);
    fVar16 = *(float *)(param_1 + 0x3c);
    *(ulonglong *)param_3 =
         CONCAT44(fVar1 * fVar46 + fVar2 * fVar42 + fVar3 * fVar38 + fVar4 * fVar34,
                  fVar1 * fVar45 + fVar2 * fVar41 + fVar3 * fVar37 + fVar4 * fVar33);
    *(ulonglong *)(param_3 + 8) =
         CONCAT44(fVar1 * fVar48 + fVar2 * fVar44 + fVar3 * fVar40 + fVar4 * fVar36,
                  fVar1 * fVar47 + fVar2 * fVar43 + fVar3 * fVar39 + fVar4 * fVar35);
    *(ulonglong *)(param_3 + 0x10) =
         CONCAT44(fVar5 * fVar46 + fVar6 * fVar42 + fVar7 * fVar38 + fVar8 * fVar34,
                  fVar5 * fVar45 + fVar6 * fVar41 + fVar7 * fVar37 + fVar8 * fVar33);
    *(ulonglong *)(param_3 + 0x18) =
         CONCAT44(fVar5 * fVar48 + fVar6 * fVar44 + fVar7 * fVar40 + fVar8 * fVar36,
                  fVar5 * fVar47 + fVar6 * fVar43 + fVar7 * fVar39 + fVar8 * fVar35);
    *(ulonglong *)(param_3 + 0x20) =
         CONCAT44(fVar9 * fVar46 + fVar10 * fVar42 + fVar11 * fVar38 + fVar12 * fVar34,
                  fVar9 * fVar45 + fVar10 * fVar41 + fVar11 * fVar37 + fVar12 * fVar33);
    *(ulonglong *)(param_3 + 0x28) =
         CONCAT44(fVar9 * fVar48 + fVar10 * fVar44 + fVar11 * fVar40 + fVar12 * fVar36,
                  fVar9 * fVar47 + fVar10 * fVar43 + fVar11 * fVar39 + fVar12 * fVar35);
    *(ulonglong *)(param_3 + 0x30) =
         CONCAT44(fVar13 * fVar46 + fVar14 * fVar42 + fVar15 * fVar38 + fVar16 * fVar34,
                  fVar13 * fVar45 + fVar14 * fVar41 + fVar15 * fVar37 + fVar16 * fVar33);
    *(ulonglong *)(param_3 + 0x38) =
         CONCAT44(fVar13 * fVar48 + fVar14 * fVar44 + fVar15 * fVar40 + fVar16 * fVar36,
                  fVar13 * fVar47 + fVar14 * fVar43 + fVar15 * fVar39 + fVar16 * fVar35);
    return;
  }
  if (m3dSimdType != 1) {
    iVar21 = 3;
    pmVar18 = param_1 + 4;
    pmVar20 = param_3;
    do {
      iVar22 = 4;
      pmVar17 = param_2 + 0x10;
      pmVar19 = pmVar20;
      do {
        pmVar20 = pmVar19 + 4;
        iVar22 = iVar22 + -1;
        *(float *)pmVar19 =
             *(float *)pmVar17 * *(float *)pmVar18 +
             *(float *)(pmVar17 + 0x10) * *(float *)(pmVar18 + 4) +
             *(float *)(pmVar17 + -0x10) * *(float *)(pmVar18 + -4);
        pmVar17 = pmVar17 + 4;
        pmVar19 = pmVar20;
      } while (iVar22 != 0);
      pmVar18 = pmVar18 + 0x10;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    iVar21 = 4;
    pmVar18 = param_2 + 0x20;
    pmVar20 = param_3 + 0x30;
    do {
      iVar21 = iVar21 + -1;
      *(float *)pmVar20 =
           *(float *)pmVar18 * *(float *)(param_1 + 0x38) +
           *(float *)(pmVar18 + -0x10) * *(float *)(param_1 + 0x34) +
           *(float *)(pmVar18 + -0x20) * *(float *)(param_1 + 0x30) +
           *(float *)(pmVar18 + 0x10) * *(float *)(param_1 + 0x3c);
      pmVar18 = pmVar18 + 4;
      pmVar20 = pmVar20 + 4;
    } while (iVar21 != 0);
    return;
  }
  FastExitMediaState();
  uVar25 = (undefined4)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  uVar27 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar23 = (undefined4)*(undefined8 *)param_1;
  uVar24 = CONCAT44(uVar23,uVar23);
  uVar23 = (undefined4)*(undefined8 *)(param_1 + 8);
  uVar26 = CONCAT44(uVar23,uVar23);
  uVar30 = PackedFloatingMUL(*(undefined8 *)param_2,uVar24);
  uVar28 = CONCAT44(uVar25,uVar25);
  uVar24 = PackedFloatingMUL(uVar24,*(undefined8 *)(param_2 + 8));
  uVar31 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x10),uVar28);
  uVar29 = CONCAT44(uVar27,uVar27);
  uVar28 = PackedFloatingMUL(uVar28,*(undefined8 *)(param_2 + 0x18));
  uVar32 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x20),uVar26);
  uVar30 = PackedFloatingADD(uVar31,uVar30);
  uVar26 = PackedFloatingMUL(uVar26,*(undefined8 *)(param_2 + 0x28));
  uVar24 = PackedFloatingADD(uVar28,uVar24);
  uVar31 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x30),uVar29);
  uVar30 = PackedFloatingADD(uVar32,uVar30);
  uVar28 = PackedFloatingMUL(uVar29,*(undefined8 *)(param_2 + 0x38));
  uVar26 = PackedFloatingADD(uVar24,uVar26);
  uVar30 = PackedFloatingADD(uVar31,uVar30);
  uVar24 = *(undefined8 *)(param_1 + 0x10);
  uVar29 = PackedFloatingADD(uVar28,uVar26);
  uVar26 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)param_3 = uVar30;
  uVar28 = *(undefined8 *)param_2;
  *(undefined8 *)(param_3 + 8) = uVar29;
  uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
  uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
  uVar23 = (undefined4)uVar24;
  uVar24 = CONCAT44(uVar23,uVar23);
  uVar23 = (undefined4)uVar26;
  uVar26 = CONCAT44(uVar23,uVar23);
  uVar30 = PackedFloatingMUL(uVar28,uVar24);
  uVar28 = CONCAT44(uVar25,uVar25);
  uVar24 = PackedFloatingMUL(uVar24,*(undefined8 *)(param_2 + 8));
  uVar31 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x10),uVar28);
  uVar29 = CONCAT44(uVar27,uVar27);
  uVar28 = PackedFloatingMUL(uVar28,*(undefined8 *)(param_2 + 0x18));
  uVar32 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x20),uVar26);
  uVar30 = PackedFloatingADD(uVar31,uVar30);
  uVar26 = PackedFloatingMUL(uVar26,*(undefined8 *)(param_2 + 0x28));
  uVar24 = PackedFloatingADD(uVar28,uVar24);
  uVar31 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x30),uVar29);
  uVar30 = PackedFloatingADD(uVar32,uVar30);
  uVar28 = PackedFloatingMUL(uVar29,*(undefined8 *)(param_2 + 0x38));
  uVar26 = PackedFloatingADD(uVar24,uVar26);
  uVar30 = PackedFloatingADD(uVar31,uVar30);
  uVar24 = *(undefined8 *)(param_1 + 0x20);
  uVar29 = PackedFloatingADD(uVar28,uVar26);
  uVar26 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_3 + 0x10) = uVar30;
  uVar28 = *(undefined8 *)param_2;
  *(undefined8 *)(param_3 + 0x18) = uVar29;
  uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
  uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
  uVar23 = (undefined4)uVar24;
  uVar24 = CONCAT44(uVar23,uVar23);
  uVar23 = (undefined4)uVar26;
  uVar26 = CONCAT44(uVar23,uVar23);
  uVar30 = PackedFloatingMUL(uVar28,uVar24);
  uVar28 = CONCAT44(uVar25,uVar25);
  uVar24 = PackedFloatingMUL(uVar24,*(undefined8 *)(param_2 + 8));
  uVar31 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x10),uVar28);
  uVar29 = CONCAT44(uVar27,uVar27);
  uVar28 = PackedFloatingMUL(uVar28,*(undefined8 *)(param_2 + 0x18));
  uVar32 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x20),uVar26);
  uVar30 = PackedFloatingADD(uVar31,uVar30);
  uVar26 = PackedFloatingMUL(uVar26,*(undefined8 *)(param_2 + 0x28));
  uVar24 = PackedFloatingADD(uVar28,uVar24);
  uVar31 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x30),uVar29);
  uVar30 = PackedFloatingADD(uVar32,uVar30);
  uVar28 = PackedFloatingMUL(uVar29,*(undefined8 *)(param_2 + 0x38));
  uVar26 = PackedFloatingADD(uVar24,uVar26);
  uVar30 = PackedFloatingADD(uVar31,uVar30);
  uVar24 = *(undefined8 *)(param_1 + 0x30);
  uVar29 = PackedFloatingADD(uVar28,uVar26);
  uVar26 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_3 + 0x20) = uVar30;
  uVar28 = *(undefined8 *)param_2;
  *(undefined8 *)(param_3 + 0x28) = uVar29;
  uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
  uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
  uVar23 = (undefined4)uVar24;
  uVar24 = CONCAT44(uVar23,uVar23);
  uVar23 = (undefined4)uVar26;
  uVar26 = CONCAT44(uVar23,uVar23);
  uVar30 = PackedFloatingMUL(uVar28,uVar24);
  uVar28 = CONCAT44(uVar25,uVar25);
  uVar24 = PackedFloatingMUL(uVar24,*(undefined8 *)(param_2 + 8));
  uVar31 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x10),uVar28);
  uVar29 = CONCAT44(uVar27,uVar27);
  uVar28 = PackedFloatingMUL(uVar28,*(undefined8 *)(param_2 + 0x18));
  uVar32 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x20),uVar26);
  uVar30 = PackedFloatingADD(uVar31,uVar30);
  uVar26 = PackedFloatingMUL(uVar26,*(undefined8 *)(param_2 + 0x28));
  uVar24 = PackedFloatingADD(uVar28,uVar24);
  uVar31 = PackedFloatingMUL(*(undefined8 *)(param_2 + 0x30),uVar29);
  uVar30 = PackedFloatingADD(uVar32,uVar30);
  uVar28 = PackedFloatingMUL(uVar29,*(undefined8 *)(param_2 + 0x38));
  uVar24 = PackedFloatingADD(uVar24,uVar26);
  uVar26 = PackedFloatingADD(uVar31,uVar30);
  uVar24 = PackedFloatingADD(uVar28,uVar24);
  *(undefined8 *)(param_3 + 0x30) = uVar26;
  *(undefined8 *)(param_3 + 0x38) = uVar24;
  FastExitMediaState();
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 00549B10 */

int __fastcall m3dIsEqualMatr_A(m3dMATR *param_1,m3dMATR *param_2,float param_3,float param_4)

{
  m3dMATR *pmVar1;
  m3dMATR *pmVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  pmVar2 = param_2;
  do {
    iVar4 = 0;
    pmVar1 = pmVar2;
    do {
      if (param_3 < ABS(*(float *)(pmVar1 + ((int)param_1 - (int)param_2)) - *(float *)pmVar1)) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      pmVar1 = pmVar1 + 4;
    } while (iVar4 < 4);
    iVar3 = iVar3 + 1;
    pmVar2 = pmVar2 + 0x10;
  } while (iVar3 < 3);
  iVar3 = 0;
  pmVar2 = param_2 + 0x30;
  do {
    if (param_4 < ABS(*(float *)(pmVar2 + ((int)param_1 - (int)param_2)) - *(float *)pmVar2)) {
      return 0;
    }
    iVar3 = iVar3 + 1;
    pmVar2 = pmVar2 + 4;
  } while (iVar3 < 4);
  return 1;
}




/* from: m3d:m3d_matr.cpp
   addr: 00549BA0 */

void __thiscall m3dMATR::Identity(m3dMATR *this)

{
  int iVar1;
  m3dMATR *pmVar2;
  
  pmVar2 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pmVar2 = 0;
    pmVar2 = pmVar2 + 4;
  }
  iVar1 = 4;
  do {
    *(undefined4 *)this = 0x3f800000;
    this = this + 0x14;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 00549BD0 */

void __thiscall m3dMATR::Translate(m3dMATR *this,m3dV *param_1,int param_2)

{
  Translate(this,*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8),param_2);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 00549BF0 */

void __thiscall
m3dMATR::Translate(m3dMATR *this,float param_1,float param_2,float param_3,int param_4)

{
  if (param_4 == 0) {
    *(float *)(this + 0x30) = param_1;
    *(float *)(this + 0x34) = param_2;
    *(float *)(this + 0x38) = param_3;
  }
  else {
    if (param_4 == 1) {
      *(float *)(this + 0x30) =
           param_1 * *(float *)this +
           param_3 * *(float *)(this + 0x20) + param_2 * *(float *)(this + 0x10) +
           *(float *)(this + 0x30);
      *(float *)(this + 0x34) =
           param_3 * *(float *)(this + 0x24) +
           param_2 * *(float *)(this + 0x14) + param_1 * *(float *)(this + 4) +
           *(float *)(this + 0x34);
      *(float *)(this + 0x38) =
           param_3 * *(float *)(this + 0x28) +
           param_2 * *(float *)(this + 0x18) + param_1 * *(float *)(this + 8) +
           *(float *)(this + 0x38);
      return;
    }
    if (param_4 == 2) {
      *(float *)(this + 0x30) = param_1 + *(float *)(this + 0x30);
      *(float *)(this + 0x34) = param_2 + *(float *)(this + 0x34);
      *(float *)(this + 0x38) = param_3 + *(float *)(this + 0x38);
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 00549CC0 */

void __thiscall m3dMATR::RotateX(m3dMATR *this,float param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  m3dMATR *pmVar5;
  m3dMATR *pmVar6;
  m3dMATR local_40 [64];
  
  fVar3 = (float10)_DAT_005de444 * (float10)param_1 * (float10)___real_3bb60b61;
  fVar4 = (float10)fcos(fVar3);
  fVar3 = (float10)fsin((float10)(float)fVar3);
  DAT_00963684 = (float)fVar4;
  _DAT_00963688 = (float)fVar3;
  _DAT_00963694 = (float)-fVar3;
  _DAT_00963698 = (float)fVar4;
  if (param_2 == 0) {
    puVar2 = &DAT_00963670;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)this = *puVar2;
      puVar2 = puVar2 + 1;
      this = this + 4;
    }
    return;
  }
  if (param_2 == 2) {
    pmVar5 = this;
    pmVar6 = (m3dMATR *)&DAT_00963670;
  }
  else {
    pmVar5 = (m3dMATR *)&DAT_00963670;
    pmVar6 = this;
  }
  m3dMultiplyMatr(pmVar5,pmVar6,local_40);
  pmVar5 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)this = *(undefined4 *)pmVar5;
    pmVar5 = pmVar5 + 4;
    this = this + 4;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 00549D60 */

void __thiscall m3dMATR::RotateY(m3dMATR *this,float param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  m3dMATR *pmVar5;
  m3dMATR *pmVar6;
  m3dMATR local_40 [64];
  
  fVar3 = (float10)_DAT_005de444 * (float10)param_1 * (float10)___real_3bb60b61;
  fVar4 = (float10)fcos(fVar3);
  fVar3 = (float10)fsin((float10)(float)fVar3);
  DAT_009636b0 = (float)fVar4;
  _DAT_009636b8 = (float)-fVar3;
  _DAT_009636d0 = (float)fVar3;
  _DAT_009636d8 = (float)fVar4;
  if (param_2 == 0) {
    puVar2 = &DAT_009636b0;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)this = *puVar2;
      puVar2 = puVar2 + 1;
      this = this + 4;
    }
    return;
  }
  if (param_2 == 2) {
    pmVar5 = this;
    pmVar6 = (m3dMATR *)&DAT_009636b0;
  }
  else {
    pmVar5 = (m3dMATR *)&DAT_009636b0;
    pmVar6 = this;
  }
  m3dMultiplyMatr(pmVar5,pmVar6,local_40);
  pmVar5 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)this = *(undefined4 *)pmVar5;
    pmVar5 = pmVar5 + 4;
    this = this + 4;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 00549E00 */

void __thiscall m3dMATR::RotateZ(m3dMATR *this,float param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  m3dMATR *pmVar5;
  m3dMATR *pmVar6;
  m3dMATR local_40 [64];
  
  fVar3 = (float10)_DAT_005de444 * (float10)param_1 * (float10)___real_3bb60b61;
  fVar4 = (float10)fcos(fVar3);
  fVar3 = (float10)fsin((float10)(float)fVar3);
  DAT_00963630 = (float)fVar4;
  DAT_00963634 = (float)fVar3;
  _DAT_00963640 = (float)-fVar3;
  DAT_00963644 = (float)fVar4;
  if (param_2 == 0) {
    puVar2 = &DAT_00963630;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)this = *puVar2;
      puVar2 = puVar2 + 1;
      this = this + 4;
    }
    return;
  }
  if (param_2 == 2) {
    pmVar5 = this;
    pmVar6 = (m3dMATR *)&DAT_00963630;
  }
  else {
    pmVar5 = (m3dMATR *)&DAT_00963630;
    pmVar6 = this;
  }
  m3dMultiplyMatr(pmVar5,pmVar6,local_40);
  pmVar5 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)this = *(undefined4 *)pmVar5;
    pmVar5 = pmVar5 + 4;
    this = this + 4;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 00549EA0 */

void __thiscall m3dMATR::Scale(m3dMATR *this,float param_1,float param_2,float param_3,int param_4)

{
  m3dMATR *pmVar1;
  int iVar2;
  float local_8;
  float local_4;
  
  iVar2 = param_4;
  if (param_4 == 0) {
    iVar2 = 2;
    GetScale(this,&local_4,&local_8,(float *)&param_4);
    Scale(this,___real_3f800000 / local_4,___real_3f800000 / local_8,
          ___real_3f800000 / (float)param_4,1);
  }
  if (iVar2 == 1) {
    iVar2 = 3;
    pmVar1 = this + 0x20;
    do {
      iVar2 = iVar2 + -1;
      *(float *)(pmVar1 + -0x20) = param_1 * *(float *)(pmVar1 + -0x20);
      *(float *)(pmVar1 + -0x10) = param_2 * *(float *)(pmVar1 + -0x10);
      *(float *)pmVar1 = param_3 * *(float *)pmVar1;
      pmVar1 = pmVar1 + 4;
    } while (iVar2 != 0);
  }
  else if (iVar2 == 2) {
    iVar2 = 4;
    pmVar1 = this + 8;
    do {
      iVar2 = iVar2 + -1;
      *(float *)(pmVar1 + -8) = param_1 * *(float *)(pmVar1 + -8);
      *(float *)(pmVar1 + -4) = param_2 * *(float *)(pmVar1 + -4);
      *(float *)pmVar1 = param_3 * *(float *)pmVar1;
      pmVar1 = pmVar1 + 0x10;
    } while (iVar2 != 0);
    return;
  }
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 00549F70 */

void __thiscall m3dMATR::Transform(m3dMATR *this,m3dMATR *param_1,int param_2)

{
  int iVar1;
  m3dMATR *pmVar2;
  m3dMATR *pmVar3;
  m3dMATR local_40 [64];
  
  if (param_2 != 0) {
    pmVar2 = param_1;
    pmVar3 = this;
    if (param_2 == 2) {
      pmVar2 = this;
      pmVar3 = param_1;
    }
    m3dMultiplyMatr(pmVar2,pmVar3,local_40);
    pmVar2 = local_40;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)this = *(undefined4 *)pmVar2;
      pmVar2 = pmVar2 + 4;
      this = this + 4;
    }
    return;
  }
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)this = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    this = this + 4;
  }
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 00549FD0 */

void __thiscall m3dMATR::GetOrigin(m3dMATR *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x38);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 00549FF0 */

void __thiscall m3dMATR::GetAxisX(m3dMATR *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 0054A010 */

void __thiscall m3dMATR::GetAxisY(m3dMATR *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x18);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 0054A030 */

void __thiscall m3dMATR::GetAxisZ(m3dMATR *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x28);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 0054A050 */

void __thiscall m3dMATR::GetTranslate(m3dMATR *this,float *param_1,float *param_2,float *param_3)

{
  *param_1 = *(float *)(this + 0x30);
  *param_2 = *(float *)(this + 0x34);
  *param_3 = *(float *)(this + 0x38);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054A070 */

void __thiscall m3dMATR::GetScale(m3dMATR *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  m3dV *pmVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 in_MM1;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float local_3c [3];
  float local_30 [3];
  float local_24 [6];
  float *local_c;
  m3dMATR *local_8;
  
  local_c = local_24 + 3;
  local_8 = this;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),*(undefined8 *)this);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),*(undefined8 *)(this + 0x10));
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),*(undefined8 *)(this + 0x20));
      uVar11 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),*(undefined8 *)(this + 8));
      in_MM1 = PackedFloatingADD(uVar9,uVar10);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),*(undefined8 *)(this + 0x18));
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),*(undefined8 *)(this + 0x28));
      uVar8 = PackedFloatingADD(uVar8,in_MM1);
      uVar9 = PackedFloatingADD(uVar9,uVar10);
      local_24[4] = (float)((ulonglong)uVar8 >> 0x20);
      local_24[3] = (float)uVar8;
      uVar8 = PackedFloatingADD(uVar11,uVar9);
      local_24[5] = (float)uVar8;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_24 + 3;
      iVar5 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitX;
        pfVar3 = (float *)(((int)this - (int)(local_24 + 3)) + (int)pfVar4);
        fVar13 = ___real_00000000;
        do {
          fVar14 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar13 = fVar14 * fVar1 + fVar13;
        } while ((int)pmVar2 < 0x5f9990);
        *pfVar4 = fVar13;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  fVar13 = local_24[3] * local_24[3] + local_24[4] * local_24[4] + local_24[5] * local_24[5];
  if (m3dSimdType == 0) {
    fVar13 = fVar13 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar14 = auVar15._0_4_;
    local_c = (float *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar14 *
                        (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar13 * fVar14 * fVar14) *
                       fVar13);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)fVar13;
    uVar8 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    in_MM1 = PackedFloatingMUL(uVar8,uVar7);
    local_c = (float *)in_MM1;
    FastExitMediaState();
  }
  else {
    local_c = (float *)SQRT(fVar13);
  }
  *param_1 = (float)local_c;
  local_c = local_24 + 3;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = PackedFloatingMUL(CONCAT44(_m3dVUnitY,_m3dVUnitY),*(undefined8 *)local_8);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f9994,DAT_005f9994),*(undefined8 *)(local_8 + 0x10))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f9998,DAT_005f9998),*(undefined8 *)(local_8 + 0x20)
                                );
      uVar11 = PackedFloatingMUL(CONCAT44(_m3dVUnitY,_m3dVUnitY),*(undefined8 *)(local_8 + 8));
      in_MM1 = PackedFloatingADD(uVar9,uVar10);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f9994,DAT_005f9994),*(undefined8 *)(local_8 + 0x18))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f9998,DAT_005f9998),*(undefined8 *)(local_8 + 0x28)
                                );
      uVar8 = PackedFloatingADD(uVar8,in_MM1);
      uVar9 = PackedFloatingADD(uVar9,uVar10);
      local_24[4] = (float)((ulonglong)uVar8 >> 0x20);
      local_24[3] = (float)uVar8;
      uVar8 = PackedFloatingADD(uVar11,uVar9);
      local_24[5] = (float)uVar8;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_24 + 3;
      iVar5 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitY;
        pfVar3 = (float *)((int)pfVar4 + ((int)this - (int)(local_24 + 3)));
        fVar13 = ___real_00000000;
        do {
          fVar14 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar13 = fVar14 * fVar1 + fVar13;
        } while ((int)pmVar2 < 0x5f999c);
        *pfVar4 = fVar13;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  fVar13 = local_24[3] * local_24[3] + local_24[4] * local_24[4] + local_24[5] * local_24[5];
  if (m3dSimdType == 0) {
    fVar13 = fVar13 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar14 = auVar15._0_4_;
    local_c = (float *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar14 *
                        (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar13 * fVar14 * fVar14) *
                       fVar13);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)fVar13;
    uVar8 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    in_MM1 = PackedFloatingMUL(uVar8,uVar7);
    local_c = (float *)in_MM1;
    FastExitMediaState();
  }
  else {
    local_c = (float *)SQRT(fVar13);
  }
  *param_2 = (float)local_c;
  local_c = local_24 + 3;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = PackedFloatingMUL(CONCAT44(_m3dVUnitZ,_m3dVUnitZ),*(undefined8 *)local_8);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f99a0,DAT_005f99a0),*(undefined8 *)(local_8 + 0x10))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f99a4,DAT_005f99a4),*(undefined8 *)(local_8 + 0x20)
                                );
      uVar11 = PackedFloatingMUL(CONCAT44(_m3dVUnitZ,_m3dVUnitZ),*(undefined8 *)(local_8 + 8));
      in_MM1 = PackedFloatingADD(uVar9,uVar10);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f99a0,DAT_005f99a0),*(undefined8 *)(local_8 + 0x18))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f99a4,DAT_005f99a4),*(undefined8 *)(local_8 + 0x28)
                                );
      uVar8 = PackedFloatingADD(uVar8,in_MM1);
      uVar9 = PackedFloatingADD(uVar9,uVar10);
      local_24[4] = (float)((ulonglong)uVar8 >> 0x20);
      local_24[3] = (float)uVar8;
      uVar8 = PackedFloatingADD(uVar11,uVar9);
      local_24[5] = (float)uVar8;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_24 + 3;
      iVar5 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitZ;
        pfVar3 = (float *)((int)pfVar4 + ((int)this - (int)(local_24 + 3)));
        fVar13 = ___real_00000000;
        do {
          fVar14 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar13 = fVar14 * fVar1 + fVar13;
        } while ((int)pmVar2 < 0x5f99a8);
        *pfVar4 = fVar13;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  fVar13 = local_24[3] * local_24[3] + local_24[4] * local_24[4] + local_24[5] * local_24[5];
  if (m3dSimdType == 0) {
    fVar13 = fVar13 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar14 = auVar15._0_4_;
    local_c = (float *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar14 *
                        (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar13 * fVar14 * fVar14) *
                       fVar13);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)fVar13;
    uVar8 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    uVar8 = PackedFloatingMUL(uVar8,uVar7);
    local_c = (float *)(float)uVar8;
    FastExitMediaState();
  }
  else {
    local_c = (float *)SQRT(fVar13);
  }
  *param_3 = (float)local_c;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),*(undefined8 *)local_8);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),*(undefined8 *)(local_8 + 0x10))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),*(undefined8 *)(local_8 + 0x20)
                                );
      uVar11 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),*(undefined8 *)(local_8 + 8));
      uVar9 = PackedFloatingADD(uVar9,uVar10);
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),*(undefined8 *)(local_8 + 0x18)
                                );
      uVar12 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),*(undefined8 *)(local_8 + 0x28)
                                );
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      uVar9 = PackedFloatingADD(uVar10,uVar12);
      local_24[1] = (float)((ulonglong)uVar8 >> 0x20);
      local_24[0] = (float)uVar8;
      uVar8 = PackedFloatingADD(uVar11,uVar9);
      local_24[2] = (float)uVar8;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_24;
      iVar6 = (int)local_8 - (int)local_24;
      iVar5 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitX;
        pfVar3 = (float *)(iVar6 + (int)pfVar4);
        fVar13 = ___real_00000000;
        do {
          fVar14 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar13 = fVar14 * fVar1 + fVar13;
        } while ((int)pmVar2 < 0x5f9990);
        *pfVar4 = fVar13;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = PackedFloatingMUL(CONCAT44(_m3dVUnitY,_m3dVUnitY),*(undefined8 *)local_8);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f9994,DAT_005f9994),*(undefined8 *)(local_8 + 0x10))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f9998,DAT_005f9998),*(undefined8 *)(local_8 + 0x20)
                                );
      uVar11 = PackedFloatingMUL(CONCAT44(_m3dVUnitY,_m3dVUnitY),*(undefined8 *)(local_8 + 8));
      uVar9 = PackedFloatingADD(uVar9,uVar10);
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f9994,DAT_005f9994),*(undefined8 *)(local_8 + 0x18)
                                );
      uVar12 = PackedFloatingMUL(CONCAT44(DAT_005f9998,DAT_005f9998),*(undefined8 *)(local_8 + 0x28)
                                );
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      uVar9 = PackedFloatingADD(uVar10,uVar12);
      local_30[1] = (float)((ulonglong)uVar8 >> 0x20);
      local_30[0] = (float)uVar8;
      uVar8 = PackedFloatingADD(uVar11,uVar9);
      local_30[2] = (float)uVar8;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_30;
      iVar6 = (int)local_8 - (int)local_30;
      iVar5 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitY;
        pfVar3 = (float *)(iVar6 + (int)pfVar4);
        fVar13 = ___real_00000000;
        do {
          fVar14 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar13 = fVar14 * fVar1 + fVar13;
        } while ((int)pmVar2 < 0x5f999c);
        *pfVar4 = fVar13;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = PackedFloatingMUL(CONCAT44(_m3dVUnitZ,_m3dVUnitZ),*(undefined8 *)local_8);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f99a0,DAT_005f99a0),*(undefined8 *)(local_8 + 0x10))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f99a4,DAT_005f99a4),*(undefined8 *)(local_8 + 0x20)
                                );
      uVar11 = PackedFloatingMUL(CONCAT44(_m3dVUnitZ,_m3dVUnitZ),*(undefined8 *)(local_8 + 8));
      uVar9 = PackedFloatingADD(uVar9,uVar10);
      uVar10 = PackedFloatingMUL(CONCAT44(DAT_005f99a0,DAT_005f99a0),*(undefined8 *)(local_8 + 0x18)
                                );
      uVar12 = PackedFloatingMUL(CONCAT44(DAT_005f99a4,DAT_005f99a4),*(undefined8 *)(local_8 + 0x28)
                                );
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      uVar9 = PackedFloatingADD(uVar10,uVar12);
      local_3c[1] = (float)((ulonglong)uVar8 >> 0x20);
      local_3c[0] = (float)uVar8;
      uVar8 = PackedFloatingADD(uVar11,uVar9);
      local_3c[2] = (float)uVar8;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_3c;
      iVar5 = (int)local_8 - (int)local_3c;
      iVar6 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitZ;
        pfVar3 = (float *)(iVar5 + (int)pfVar4);
        fVar13 = ___real_00000000;
        do {
          fVar14 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar13 = fVar14 * fVar1 + fVar13;
        } while ((int)pmVar2 < 0x5f99a8);
        *pfVar4 = fVar13;
        pfVar4 = pfVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  m3dNormalize((m3dV *)local_24);
  m3dNormalize((m3dV *)local_30);
  m3dNormalize((m3dV *)local_3c);
  if ((local_30[2] * local_24[1] - local_30[1] * local_24[2]) * local_3c[0] +
      local_3c[1] * (local_24[2] * local_30[0] - local_30[2] * local_24[0]) +
      local_3c[2] * (local_30[1] * local_24[0] - local_24[1] * local_30[0]) <= ___real_00000000) {
    *param_1 = *param_1 * ___real_bf800000;
    *param_2 = *param_2 * ___real_bf800000;
    *param_3 = *param_3 * ___real_bf800000;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054AAE0 */

void __thiscall m3dMATR::MakeRotY(m3dMATR *this,float param_1)

{
  int iVar1;
  m3dMATR *pmVar2;
  float10 fVar3;
  float10 fVar4;
  
  pmVar2 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pmVar2 = 0;
    pmVar2 = pmVar2 + 4;
  }
  fVar3 = (float10)_DAT_005de444 * (float10)param_1 * (float10)___real_3bb60b61;
  fVar4 = (float10)fcos(fVar3);
  fVar3 = (float10)fsin((float10)(float)fVar3);
  *(float *)this = (float)fVar4;
  *(float *)(this + 8) = (float)-fVar3;
  *(float *)(this + 0x20) = (float)fVar3;
  *(float *)(this + 0x28) = (float)fVar4;
  *(undefined4 *)(this + 0x14) = 0x3f800000;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054AB30 */

void __thiscall m3dMATR::MakeRot(m3dMATR *this,m3dV *param_1,m3dV *param_2)

{
  int iVar1;
  m3dMATR *pmVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  m3dQUAT local_10 [16];
  
  local_28 = *(float *)param_1;
  local_24 = *(float *)(param_1 + 4);
  local_34 = *(float *)param_2;
  local_20 = *(float *)(param_1 + 8);
  local_30 = *(float *)(param_2 + 4);
  local_2c = *(float *)(param_2 + 8);
  m3dNormalize((m3dV *)&local_28);
  m3dNormalize((m3dV *)&local_34);
  local_1c = local_2c * local_24 - local_30 * local_20;
  local_18 = local_20 * local_34 - local_2c * local_28;
  local_14 = local_30 * local_28 - local_24 * local_34;
  fVar8 = local_1c * local_1c + local_18 * local_18 + local_14 * local_14;
  if (m3dSimdType == 0) {
    fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar6 = auVar7._0_4_;
    param_1 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar6 * fVar6) * fVar8
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)fVar8;
    uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
    uVar5 = PackedFloatingMUL(uVar4,uVar4);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
    uVar4 = PackedFloatingMUL(uVar4,uVar3);
    param_1 = (m3dV *)uVar4;
    FastExitMediaState();
  }
  else {
    param_1 = (m3dV *)SQRT(fVar8);
  }
  param_1 = (m3dV *)(uint)(ABS((float)param_1) < _DAT_005de43c);
  if ((float)(int)param_1 != ___real_00000000) {
    pmVar2 = this;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pmVar2 = 0;
      pmVar2 = pmVar2 + 4;
    }
    iVar1 = 4;
    do {
      *(undefined4 *)this = 0x3f800000;
      this = this + 0x14;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  m3dNormalize((m3dV *)&local_1c);
  fVar8 = _m3dAngleVector((m3dV *)&local_28,(m3dV *)&local_34);
  m3dQUAT::SetAngAxis(local_10,fVar8,(m3dV *)&local_1c);
  m3dQUAT::GetMatr(local_10,this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054AD10 */

void __thiscall m3dMATR::MakeRot(m3dMATR *this,m3dV *param_1,m3dV *param_2,m3dV *param_3)

{
  m3dMATR *pmVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  m3dQUAT local_10 [16];
  
  local_28 = *(float *)param_2;
  local_24 = *(float *)(param_2 + 4);
  local_34 = *(float *)param_3;
  local_20 = *(float *)(param_2 + 8);
  local_30 = *(float *)(param_3 + 4);
  local_2c = *(float *)(param_3 + 8);
  m3dNormalize((m3dV *)&local_28);
  m3dNormalize((m3dV *)&local_34);
  local_1c = local_24 * local_2c - local_30 * local_20;
  local_18 = local_20 * local_34 - local_2c * local_28;
  local_14 = local_30 * local_28 - local_24 * local_34;
  fVar8 = local_1c * local_1c + local_18 * local_18 + local_14 * local_14;
  if (m3dSimdType == 0) {
    fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar6 = auVar7._0_4_;
    param_2 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar6 * fVar6) * fVar8
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)fVar8;
    uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
    uVar5 = PackedFloatingMUL(uVar4,uVar4);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
    uVar4 = PackedFloatingMUL(uVar4,uVar3);
    param_2 = (m3dV *)uVar4;
    FastExitMediaState();
  }
  else {
    param_2 = (m3dV *)SQRT(fVar8);
  }
  param_2 = (m3dV *)(uint)(ABS((float)param_2) < _DAT_005de43c);
  if ((float)(int)param_2 == ___real_00000000) {
    m3dNormalize((m3dV *)&local_1c);
    fVar8 = _m3dAngleVector((m3dV *)&local_28,(m3dV *)&local_34);
    m3dQUAT::SetAngAxis(local_10,fVar8,(m3dV *)&local_1c);
    m3dQUAT::GetMatr(local_10,this);
  }
  else {
    pmVar1 = this;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pmVar1 = 0;
      pmVar1 = pmVar1 + 4;
    }
    iVar2 = 4;
    pmVar1 = this;
    do {
      *(undefined4 *)pmVar1 = 0x3f800000;
      pmVar1 = pmVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  Translate(this,-*(float *)param_1,-*(float *)(param_1 + 4),-*(float *)(param_1 + 8),1);
  Translate(this,*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8),2);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 0054AF30 */

void __thiscall m3dMATR::MakeRotRay(m3dMATR *this,m3dV *param_1,m3dV *param_2,float param_3)

{
  m3dQUAT local_10 [16];
  
  m3dQUAT::SetAngAxis(local_10,param_3,param_2);
  m3dQUAT::GetMatr(local_10,this);
  Translate(this,-*(float *)param_1,-*(float *)(param_1 + 4),-*(float *)(param_1 + 8),1);
  Translate(this,*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8),2);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 0054AFA0 */

void __thiscall
m3dMATR::MakeLCS2WCS(m3dMATR *this,m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4)

{
  m3dMATR *pmVar1;
  int iVar2;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_2 == (m3dV *)0x0) {
    param_2 = (m3dV *)&local_c;
    local_c = *(float *)(param_4 + 8) * *(float *)(param_3 + 4) -
              *(float *)(param_4 + 4) * *(float *)(param_3 + 8);
    local_8 = *(float *)param_4 * *(float *)(param_3 + 8) -
              *(float *)(param_4 + 8) * *(float *)param_3;
    local_4 = *(float *)param_3 * *(float *)(param_4 + 4) -
              *(float *)(param_3 + 4) * *(float *)param_4;
  }
  if (param_3 == (m3dV *)0x0) {
    param_3 = (m3dV *)&local_c;
    local_c = *(float *)(param_2 + 8) * *(float *)(param_4 + 4) -
              *(float *)(param_4 + 8) * *(float *)(param_2 + 4);
    local_8 = *(float *)(param_4 + 8) * *(float *)param_2 -
              *(float *)(param_2 + 8) * *(float *)param_4;
    local_4 = *(float *)param_4 * *(float *)(param_2 + 4) -
              *(float *)param_2 * *(float *)(param_4 + 4);
  }
  if (param_4 == (m3dV *)0x0) {
    param_4 = (m3dV *)&local_c;
    local_c = *(float *)(param_2 + 4) * *(float *)(param_3 + 8) -
              *(float *)(param_2 + 8) * *(float *)(param_3 + 4);
    local_8 = *(float *)param_3 * *(float *)(param_2 + 8) -
              *(float *)param_2 * *(float *)(param_3 + 8);
    local_4 = *(float *)param_2 * *(float *)(param_3 + 4) -
              *(float *)param_3 * *(float *)(param_2 + 4);
  }
  pmVar1 = this;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pmVar1 = 0;
    pmVar1 = pmVar1 + 4;
  }
  iVar2 = 4;
  pmVar1 = this;
  do {
    *(undefined4 *)pmVar1 = 0x3f800000;
    pmVar1 = pmVar1 + 0x14;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(float *)this = *(float *)param_2;
  *(float *)(this + 0x10) = *(float *)param_3;
  *(float *)(this + 0x20) = *(float *)param_4;
  *(float *)(this + 4) = *(float *)(param_2 + 4);
  *(float *)(this + 0x14) = *(float *)(param_3 + 4);
  *(float *)(this + 0x24) = *(float *)(param_4 + 4);
  *(float *)(this + 8) = *(float *)(param_2 + 8);
  *(float *)(this + 0x18) = *(float *)(param_3 + 8);
  *(float *)(this + 0x28) = *(float *)(param_4 + 8);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054B0E0 */

void __thiscall m3dMATR::MakeWCS2LCS_VZ(m3dMATR *this,m3dV *param_1,m3dV *param_2)

{
  float fVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  local_30 = *(float *)param_2;
  local_2c = *(float *)(param_2 + 4);
  local_28 = *(float *)(param_2 + 8);
  m3dNormalize((m3dV *)&local_30);
  local_1c = DAT_005f9998;
  local_24 = _m3dVUnitY;
  local_20 = DAT_005f9994;
  if ((ABS(local_30) < _DAT_005de43c) && (ABS(local_28) < _DAT_005de43c)) {
    local_1c = DAT_005f998c;
    local_24 = _m3dVUnitX;
    local_20 = DAT_005f9988;
  }
  fVar1 = local_1c * local_28 + local_24 * local_30 + local_2c * local_20;
  local_8 = fVar1 * local_2c;
  local_4 = fVar1 * local_28;
  local_18 = local_24 - local_30 * fVar1;
  local_14 = local_20 - local_8;
  local_10 = local_1c - local_4;
  m3dNormalize((m3dV *)&local_18);
  MakeWCS2LCS(this,param_1,(m3dV *)0x0,(m3dV *)&local_18,(m3dV *)&local_30);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 0054B210 */

void __thiscall
m3dMATR::MakeWCS2LCS(m3dMATR *this,m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4)

{
  float local_c;
  float local_8;
  float local_4;
  
  if (param_2 == (m3dV *)0x0) {
    param_2 = (m3dV *)&local_c;
    local_c = *(float *)(param_4 + 8) * *(float *)(param_3 + 4) -
              *(float *)(param_4 + 4) * *(float *)(param_3 + 8);
    local_8 = *(float *)param_4 * *(float *)(param_3 + 8) -
              *(float *)(param_4 + 8) * *(float *)param_3;
    local_4 = *(float *)param_3 * *(float *)(param_4 + 4) -
              *(float *)(param_3 + 4) * *(float *)param_4;
  }
  if (param_3 == (m3dV *)0x0) {
    param_3 = (m3dV *)&local_c;
    local_c = *(float *)(param_2 + 8) * *(float *)(param_4 + 4) -
              *(float *)(param_4 + 8) * *(float *)(param_2 + 4);
    local_8 = *(float *)(param_4 + 8) * *(float *)param_2 -
              *(float *)(param_2 + 8) * *(float *)param_4;
    local_4 = *(float *)param_4 * *(float *)(param_2 + 4) -
              *(float *)param_2 * *(float *)(param_4 + 4);
  }
  if (param_4 == (m3dV *)0x0) {
    param_4 = (m3dV *)&local_c;
    local_c = *(float *)(param_2 + 4) * *(float *)(param_3 + 8) -
              *(float *)(param_2 + 8) * *(float *)(param_3 + 4);
    local_8 = *(float *)param_3 * *(float *)(param_2 + 8) -
              *(float *)param_2 * *(float *)(param_3 + 8);
    local_4 = *(float *)param_2 * *(float *)(param_3 + 4) -
              *(float *)param_3 * *(float *)(param_2 + 4);
  }
  *(float *)this = *(float *)param_2;
  *(float *)(this + 4) = *(float *)param_3;
  *(float *)(this + 8) = *(float *)param_4;
  *(undefined4 *)(this + 0xc) = 0;
  *(float *)(this + 0x10) = *(float *)(param_2 + 4);
  *(float *)(this + 0x14) = *(float *)(param_3 + 4);
  *(float *)(this + 0x18) = *(float *)(param_4 + 4);
  *(undefined4 *)(this + 0x1c) = 0;
  *(float *)(this + 0x20) = *(float *)(param_2 + 8);
  *(float *)(this + 0x24) = *(float *)(param_3 + 8);
  *(float *)(this + 0x28) = *(float *)(param_4 + 8);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  Translate(this,-*(float *)param_1,-*(float *)(param_1 + 4),-*(float *)(param_1 + 8),1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054B350 */

void __thiscall m3dMATR::MakeLCS2WCS_VZ(m3dMATR *this,m3dV *param_1,m3dV *param_2)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)param_2;
  local_8 = 0;
  local_4 = *(undefined4 *)(param_2 + 8);
  iVar1 = _m3dNormalize((m3dV *)&local_c);
  if (iVar1 == 0) {
    local_c = _m3dVUnitX;
    local_8 = DAT_005f9988;
    local_4 = DAT_005f998c;
  }
  MakeLCS2WCS(this,param_1,(m3dV *)0x0,&m3dVUnitY,(m3dV *)&local_c);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054B3D0 */

void __thiscall m3dMATR::MakeLCS2WCS_VX(m3dMATR *this,m3dV *param_1,m3dV *param_2)

{
  float fVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  local_30 = *(float *)param_2;
  local_2c = *(float *)(param_2 + 4);
  local_28 = *(float *)(param_2 + 8);
  m3dNormalize((m3dV *)&local_30);
  local_1c = DAT_005f9998;
  local_24 = _m3dVUnitY;
  local_20 = DAT_005f9994;
  if ((ABS(local_30) < _DAT_005de43c) && (ABS(local_28) < _DAT_005de43c)) {
    local_1c = DAT_005f998c;
    local_24 = _m3dVUnitX;
    local_20 = DAT_005f9988;
  }
  fVar1 = local_1c * local_28 + local_24 * local_30 + local_2c * local_20;
  local_8 = fVar1 * local_2c;
  local_4 = fVar1 * local_28;
  local_18 = local_24 - local_30 * fVar1;
  local_14 = local_20 - local_8;
  local_10 = local_1c - local_4;
  m3dNormalize((m3dV *)&local_18);
  MakeLCS2WCS(this,param_1,(m3dV *)&local_30,(m3dV *)&local_18,(m3dV *)0x0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054B500 */

void __thiscall m3dMATR::MakeLCS2WCS_VZ(m3dMATR *this,m3dV *param_1,m3dV *param_2)

{
  float fVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  local_30 = *(float *)param_2;
  local_2c = *(float *)(param_2 + 4);
  local_28 = *(float *)(param_2 + 8);
  m3dNormalize((m3dV *)&local_30);
  local_1c = DAT_005f9998;
  local_24 = _m3dVUnitY;
  local_20 = DAT_005f9994;
  if ((ABS(local_30) < _DAT_005de43c) && (ABS(local_28) < _DAT_005de43c)) {
    local_1c = DAT_005f998c;
    local_24 = _m3dVUnitX;
    local_20 = DAT_005f9988;
  }
  fVar1 = local_1c * local_28 + local_24 * local_30 + local_2c * local_20;
  local_8 = fVar1 * local_2c;
  local_4 = fVar1 * local_28;
  local_18 = local_24 - local_30 * fVar1;
  local_14 = local_20 - local_8;
  local_10 = local_1c - local_4;
  m3dNormalize((m3dV *)&local_18);
  MakeLCS2WCS(this,param_1,(m3dV *)0x0,(m3dV *)&local_18,(m3dV *)&local_30);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054B630 */

void __thiscall m3dMATR::MakeLCS2WCS_VY(m3dMATR *this,m3dV *param_1,m3dV *param_2)

{
  float fVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  local_30 = *(float *)param_2;
  local_2c = *(float *)(param_2 + 4);
  local_28 = *(float *)(param_2 + 8);
  m3dNormalize((m3dV *)&local_30);
  local_20 = DAT_005f9994;
  local_1c = DAT_005f9998;
  local_24 = _m3dVUnitY;
  if ((ABS(local_30) < _DAT_005de43c) && (ABS(local_28) < _DAT_005de43c)) {
    local_20 = DAT_005f9988;
    local_1c = DAT_005f998c;
    local_24 = _m3dVUnitX;
  }
  fVar1 = local_1c * local_28 + local_24 * local_30 + local_2c * local_20;
  local_8 = fVar1 * local_2c;
  local_4 = fVar1 * local_28;
  local_18 = local_24 - local_30 * fVar1;
  local_14 = local_20 - local_8;
  local_10 = local_1c - local_4;
  m3dNormalize((m3dV *)&local_18);
  MakeLCS2WCS(this,param_1,(m3dV *)&local_18,(m3dV *)&local_30,(m3dV *)0x0);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 0054B740 */

void __thiscall m3dMATR::Orthonormalize(m3dMATR *this)

{
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = *(float *)this;
  local_2c = *(float *)(this + 4);
  local_28 = *(float *)(this + 8);
  local_18 = *(float *)(this + 0x10);
  local_14 = *(float *)(this + 0x14);
  local_24 = *(float *)(this + 0x20);
  local_10 = *(float *)(this + 0x18);
  local_c = *(undefined4 *)(this + 0x30);
  local_20 = *(float *)(this + 0x24);
  local_1c = *(float *)(this + 0x28);
  local_8 = *(undefined4 *)(this + 0x34);
  local_4 = *(undefined4 *)(this + 0x38);
  m3dNormalize((m3dV *)&local_30);
  local_24 = local_10 * local_2c - local_14 * local_28;
  local_20 = local_28 * local_18 - local_10 * local_30;
  local_1c = local_14 * local_30 - local_18 * local_2c;
  m3dNormalize((m3dV *)&local_24);
  local_18 = local_20 * local_28 - local_1c * local_2c;
  local_14 = local_1c * local_30 - local_28 * local_24;
  local_10 = local_24 * local_2c - local_20 * local_30;
  m3dNormalize((m3dV *)&local_18);
  MakeLCS2WCS(this,(m3dV *)&local_c,(m3dV *)&local_30,(m3dV *)&local_18,(m3dV *)&local_24);
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 0054B860 */

void __thiscall m3dMATR::MakeProjTri(m3dMATR *this,m3dV *param_1,m3dV *param_2,m3dV *param_3)

{
  m3dMATR *pmVar1;
  int iVar2;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  
  uStack_f0 = *(undefined4 *)param_1;
  uStack_ec = *(undefined4 *)(param_1 + 4);
  uStack_f4 = 3;
  uStack_e4 = *(undefined4 *)param_2;
  uStack_e8 = *(undefined4 *)(param_1 + 8);
  uStack_e0 = *(undefined4 *)(param_2 + 4);
  uStack_d8 = *(undefined4 *)param_3;
  uStack_dc = *(undefined4 *)(param_2 + 8);
  uStack_d4 = *(undefined4 *)(param_3 + 4);
  uStack_d0 = *(undefined4 *)(param_3 + 8);
  m3dGetPolyNormal((m3dPOLY *)&uStack_f4,(m3dV *)&fStack_10c);
  fStack_118 = *(float *)param_2 - *(float *)param_1;
  fStack_114 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fStack_110 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  m3dNormalize((m3dV *)&fStack_118);
  fStack_100 = fStack_104 * fStack_114 - fStack_110 * fStack_108;
  fStack_fc = fStack_110 * fStack_10c - fStack_104 * fStack_118;
  fStack_f8 = fStack_108 * fStack_118 - fStack_114 * fStack_10c;
  m3dNormalize((m3dV *)&fStack_100);
  pmVar1 = this;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pmVar1 = 0;
    pmVar1 = pmVar1 + 4;
  }
  iVar2 = 4;
  pmVar1 = this;
  do {
    *(undefined4 *)pmVar1 = 0x3f800000;
    pmVar1 = pmVar1 + 0x14;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(float *)this = fStack_118;
  *(float *)(this + 4) = fStack_10c;
  *(float *)(this + 8) = fStack_100;
  *(float *)(this + 0x10) = fStack_114;
  *(float *)(this + 0x14) = fStack_108;
  *(float *)(this + 0x18) = fStack_fc;
  *(float *)(this + 0x20) = fStack_110;
  *(float *)(this + 0x24) = fStack_104;
  *(float *)(this + 0x28) = fStack_f8;
  Translate(this,-*(float *)param_1,-*(float *)(param_1 + 4),-*(float *)(param_1 + 8),1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054B9E0 */

int __thiscall m3dMATR::MakePolyPoly(m3dMATR *this,m3dPOLY *param_1,m3dPOLY *param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  m3dPOLY *pmVar6;
  m3dPOLY *pmVar7;
  m3dPOLY *pmVar8;
  int iVar9;
  m3dMATR *pmVar10;
  m3dMATR *pmVar11;
  m3dV *pmVar12;
  m3dMATR *pmVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  unkbyte10 in_ST2;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  m3dMATR local_4b0 [64];
  undefined4 local_470;
  m3dPOLY local_46c [240];
  undefined4 local_37c;
  m3dPOLY local_378 [240];
  m2dPOLY local_288 [164];
  m2dPOLY local_1e4 [164];
  m3dMATR local_140 [64];
  m3dMATR local_100 [48];
  undefined4 local_d0 [4];
  m3dMATR local_c0 [48];
  float local_90 [4];
  undefined4 local_80 [8];
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  float local_44;
  m3dMATR *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  m3dPOLY *local_14;
  m3dPOLY *local_10;
  m3dV *local_c;
  m3dMATR *local_8;
  
  pmVar8 = param_1;
  pmVar12 = (m3dV *)(param_1 + 4);
  local_40 = this;
  MakeProjTri(local_100,pmVar12,(m3dV *)(param_1 + 0x10),(m3dV *)(param_1 + 0x1c));
  MakeProjTri(local_c0,(m3dV *)(param_2 + 4),(m3dV *)(param_2 + 0x10),(m3dV *)(param_2 + 0x1c));
  local_10 = (m3dPOLY *)0x0;
  if (0 < *(int *)param_1) {
    param_1 = local_46c;
    local_8 = local_100;
    local_18 = 0x36c;
    do {
      local_14 = param_1;
      local_c = pmVar12;
      if (m3dSimdType == 0) {
        if (((uint)local_8 & 0xf) == 0) {
          fVar27 = *(float *)pmVar12;
          fVar25 = *(float *)(pmVar12 + 4);
          fVar2 = *(float *)(pmVar12 + 8);
          fVar23 = fVar27 * *(float *)local_8 + *(float *)(local_8 + 0x30) +
                   fVar25 * *(float *)(local_8 + 0x10) + fVar2 * *(float *)(local_8 + 0x20);
          fVar24 = fVar27 * *(float *)(local_8 + 4) + *(float *)(local_8 + 0x34) +
                   fVar25 * *(float *)(local_8 + 0x14) + fVar2 * *(float *)(local_8 + 0x24);
          fVar27 = fVar27 * *(float *)(local_8 + 8) + *(float *)(local_8 + 0x38) +
                   fVar25 * *(float *)(local_8 + 0x18) + fVar2 * *(float *)(local_8 + 0x28);
        }
        else {
          fVar27 = *(float *)pmVar12;
          fVar25 = *(float *)(pmVar12 + 4);
          fVar2 = *(float *)(pmVar12 + 8);
          fVar23 = fVar27 * (float)*(undefined8 *)local_8 +
                   fVar25 * (float)*(undefined8 *)(local_8 + 0x10) +
                   fVar2 * (float)*(undefined8 *)(local_8 + 0x20) +
                   (float)*(undefined8 *)(local_8 + 0x30);
          fVar24 = fVar27 * (float)((ulonglong)*(undefined8 *)local_8 >> 0x20) +
                   fVar25 * (float)((ulonglong)*(undefined8 *)(local_8 + 0x10) >> 0x20) +
                   fVar2 * (float)((ulonglong)*(undefined8 *)(local_8 + 0x20) >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)(local_8 + 0x30) >> 0x20);
          fVar27 = fVar27 * (float)*(undefined8 *)(local_8 + 8) +
                   fVar25 * (float)*(undefined8 *)(local_8 + 0x18) +
                   fVar2 * (float)*(undefined8 *)(local_8 + 0x28) +
                   (float)*(undefined8 *)(local_8 + 0x38);
        }
        *(ulonglong *)param_1 = CONCAT44(fVar24,fVar23);
        *(float *)(param_1 + 8) = fVar27;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar14 = (undefined4)*(undefined8 *)pmVar12;
        uVar17 = CONCAT44(uVar14,uVar14);
        uVar14 = (undefined4)((ulonglong)*(undefined8 *)pmVar12 >> 0x20);
        uVar21 = CONCAT44(uVar14,uVar14);
        uVar22 = CONCAT44(*(undefined4 *)(pmVar12 + 8),*(undefined4 *)(pmVar12 + 8));
        uVar18 = PackedFloatingMUL(uVar17,*(undefined8 *)local_8);
        uVar16 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_8 + 0x10));
        uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_8 + 0x20));
        in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar19);
        uVar18 = PackedFloatingADD(uVar18,*(undefined8 *)(local_8 + 0x30));
        uVar20 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_8 + 8));
        uVar17 = PackedFloatingADD(uVar16,uVar19);
        uVar16 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_8 + 0x18));
        uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_8 + 0x28));
        uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(local_8 + 0x38));
        uVar17 = PackedFloatingADD(uVar18,uVar17);
        uVar18 = PackedFloatingADD(uVar16,uVar22);
        *(undefined8 *)param_1 = uVar17;
        uVar17 = PackedFloatingADD(uVar21,uVar18);
        *(int *)(param_1 + 8) = (int)uVar17;
        FastExitMediaState();
      }
      else {
        iVar9 = 0;
        pmVar7 = param_1;
        do {
          iVar3 = 0;
          *(float *)pmVar7 = 0.0;
          pmVar6 = pmVar7 + local_18;
          fVar27 = ___real_00000000;
          do {
            iVar4 = iVar3 * 4;
            fVar25 = *(float *)pmVar6;
            iVar3 = iVar3 + 1;
            pmVar6 = pmVar6 + 0x10;
            fVar27 = *(float *)(pmVar12 + iVar4) * fVar25 + fVar27;
          } while (iVar3 < 3);
          *(float *)pmVar7 = fVar27;
          iVar3 = iVar9 + iVar3 * 4;
          iVar9 = iVar9 + 1;
          *(float *)pmVar7 = fVar27 + *(float *)(local_100 + iVar3 * 4);
          pmVar7 = pmVar7 + 4;
        } while (iVar9 < 3);
      }
      local_10 = local_10 + 1;
      param_1 = param_1 + 0xc;
      pmVar12 = pmVar12 + 0xc;
      local_18 = local_18 + -0xc;
    } while ((int)local_10 < *(int *)pmVar8);
  }
  uVar17 = (undefined8)in_ST2;
  local_470 = *(undefined4 *)pmVar8;
  local_14 = (m3dPOLY *)0x0;
  if (0 < *(int *)param_2) {
    param_1 = local_378;
    pmVar10 = (m3dMATR *)(param_2 + 4);
    local_c = (m3dV *)local_c0;
    iVar9 = 0x2b8;
    do {
      local_10 = param_1;
      local_8 = pmVar10;
      if (m3dSimdType == 0) {
        if (((uint)local_c & 0xf) == 0) {
          fVar27 = *(float *)pmVar10;
          fVar25 = *(float *)(pmVar10 + 4);
          fVar2 = *(float *)(pmVar10 + 8);
          fVar23 = fVar27 * *(float *)local_c + *(float *)(local_c + 0x30) +
                   fVar25 * *(float *)(local_c + 0x10) + fVar2 * *(float *)(local_c + 0x20);
          fVar24 = fVar27 * *(float *)(local_c + 4) + *(float *)(local_c + 0x34) +
                   fVar25 * *(float *)(local_c + 0x14) + fVar2 * *(float *)(local_c + 0x24);
          fVar27 = fVar27 * *(float *)(local_c + 8) + *(float *)(local_c + 0x38) +
                   fVar25 * *(float *)(local_c + 0x18) + fVar2 * *(float *)(local_c + 0x28);
        }
        else {
          fVar27 = *(float *)pmVar10;
          fVar25 = *(float *)(pmVar10 + 4);
          fVar2 = *(float *)(pmVar10 + 8);
          fVar23 = fVar27 * (float)*(undefined8 *)local_c +
                   fVar25 * (float)*(undefined8 *)(local_c + 0x10) +
                   fVar2 * (float)*(undefined8 *)(local_c + 0x20) +
                   (float)*(undefined8 *)(local_c + 0x30);
          fVar24 = fVar27 * (float)((ulonglong)*(undefined8 *)local_c >> 0x20) +
                   fVar25 * (float)((ulonglong)*(undefined8 *)(local_c + 0x10) >> 0x20) +
                   fVar2 * (float)((ulonglong)*(undefined8 *)(local_c + 0x20) >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)(local_c + 0x30) >> 0x20);
          fVar27 = fVar27 * (float)*(undefined8 *)(local_c + 8) +
                   fVar25 * (float)*(undefined8 *)(local_c + 0x18) +
                   fVar2 * (float)*(undefined8 *)(local_c + 0x28) +
                   (float)*(undefined8 *)(local_c + 0x38);
        }
        *(ulonglong *)param_1 = CONCAT44(fVar24,fVar23);
        *(float *)(param_1 + 8) = fVar27;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar14 = (undefined4)*(undefined8 *)pmVar10;
        uVar17 = CONCAT44(uVar14,uVar14);
        uVar14 = (undefined4)((ulonglong)*(undefined8 *)pmVar10 >> 0x20);
        uVar21 = CONCAT44(uVar14,uVar14);
        uVar22 = CONCAT44(*(float *)(pmVar10 + 8),*(float *)(pmVar10 + 8));
        uVar18 = PackedFloatingMUL(uVar17,*(undefined8 *)local_c);
        uVar16 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_c + 0x10));
        uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_c + 0x20));
        in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar19);
        uVar18 = PackedFloatingADD(uVar18,*(undefined8 *)(local_c + 0x30));
        uVar20 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_c + 8));
        uVar17 = PackedFloatingADD(uVar16,uVar19);
        uVar16 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_c + 0x18));
        uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_c + 0x28));
        uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(local_c + 0x38));
        uVar17 = PackedFloatingADD(uVar18,uVar17);
        uVar18 = PackedFloatingADD(uVar16,uVar22);
        *(undefined8 *)param_1 = uVar17;
        uVar17 = PackedFloatingADD(uVar21,uVar18);
        *(int *)(param_1 + 8) = (int)uVar17;
        FastExitMediaState();
      }
      else {
        iVar3 = 0;
        pmVar8 = param_1;
        do {
          *(float *)pmVar8 = 0.0;
          iVar4 = 0;
          pmVar7 = pmVar8 + iVar9;
          fVar27 = ___real_00000000;
          do {
            iVar1 = iVar4 * 4;
            fVar25 = *(float *)pmVar7;
            iVar4 = iVar4 + 1;
            pmVar7 = pmVar7 + 0x10;
            fVar27 = *(float *)(pmVar10 + iVar1) * fVar25 + fVar27;
          } while (iVar4 < 3);
          *(float *)pmVar8 = fVar27;
          iVar4 = iVar3 + iVar4 * 4;
          iVar3 = iVar3 + 1;
          *(float *)pmVar8 = fVar27 + local_90[iVar4 + -0xc];
          pmVar8 = pmVar8 + 4;
        } while (iVar3 < 3);
      }
      uVar17 = (undefined8)in_ST2;
      param_1 = param_1 + 0xc;
      local_14 = (m3dPOLY *)((int)local_14 + 1);
      iVar9 = iVar9 + -0xc;
      pmVar10 = pmVar10 + 0xc;
    } while ((int)local_14 < *(int *)param_2);
  }
  local_37c = *(undefined4 *)param_2;
  m3xzPoly3DToPoly2D((m3dPOLY *)&local_470,local_1e4);
  m3xzPoly3DToPoly2D((m3dPOLY *)&local_37c,local_288);
  iVar9 = m2dMATR::MakePolyPoly((m2dMATR *)&local_3c,local_1e4,local_288);
  if (iVar9 != 0) {
    puVar5 = local_80;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = local_80;
    iVar9 = 4;
    do {
      *puVar5 = 0x3f800000;
      puVar5 = puVar5 + 5;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    local_80[0] = local_3c;
    local_60 = local_30;
    local_80[2] = local_38;
    local_58 = local_2c;
    local_48 = local_20;
    local_50 = local_24;
    fVar27 = _m2dCalcMatrDet((m3dMATR *)local_80,0,1,2,0,1,2);
    fVar27 = ABS(fVar27 * local_44);
    if (m3dSimdType == 0) {
      fVar27 = fVar27 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar26 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
      fVar25 = auVar26._0_4_;
      param_2 = (m3dPOLY *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar25 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar27 * fVar25 * fVar25) * fVar27);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar15 = (ulonglong)(uint)fVar27;
      uVar17 = PackedFloatingReciprocalSQRAprox(uVar17,uVar15);
      uVar18 = PackedFloatingMUL(uVar17,uVar17);
      uVar18 = PackedFloatingReciprocalSQRIter1(uVar18,uVar15);
      uVar17 = PackedFloatingReciprocalIter2(uVar18,uVar17);
      uVar17 = PackedFloatingMUL(uVar17,uVar15);
      param_2 = (m3dPOLY *)uVar17;
      FastExitMediaState();
    }
    else {
      param_2 = (m3dPOLY *)SQRT(fVar27);
    }
    Scale((m3dMATR *)local_80,1.0,(float)param_2,1.0,2);
    iVar9 = Invert(local_c0,local_140);
    pmVar10 = local_40;
    if (iVar9 != 0) {
      pmVar11 = local_100;
      pmVar13 = local_40;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pmVar13 = *(undefined4 *)pmVar11;
        pmVar11 = pmVar11 + 4;
        pmVar13 = pmVar13 + 4;
      }
      m3dMultiplyMatr(local_40,(m3dMATR *)local_80,local_4b0);
      pmVar11 = local_4b0;
      pmVar13 = pmVar10;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pmVar13 = *(undefined4 *)pmVar11;
        pmVar11 = pmVar11 + 4;
        pmVar13 = pmVar13 + 4;
      }
      m3dMultiplyMatr(pmVar10,local_140,local_4b0);
      pmVar11 = local_4b0;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined4 *)pmVar10 = *(undefined4 *)pmVar11;
        pmVar11 = pmVar11 + 4;
        pmVar10 = pmVar10 + 4;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}




/* from: m3d:m3d_matr.cpp
   addr: 0054BF90 */

void __thiscall m3dMATR::Transpose(m3dMATR *this)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(this + 0x30) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(this + 0x24) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(this + 0x34) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054BFE0 */

int __thiscall m3dMATR::Invert(m3dMATR *this,m3dMATR *param_1)

{
  uint uVar1;
  m3dMATR *pmVar2;
  m3dMATR *pmVar3;
  m3dMATR *pmVar4;
  m3dMATR *pmVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  short local_24;
  int local_20;
  m3dMATR *local_1c;
  int local_18;
  m3dMATR *local_14;
  int local_8;
  int local_4;
  
  fVar7 = _m2dCalcMatrDet(this,0,1,2,0,1,2);
  local_14 = (m3dMATR *)(uint)(ABS(fVar7 * *(float *)(this + 0x3c)) < _DAT_005de43c * _DAT_005de43c)
  ;
  if ((float)(int)local_14 != ___real_00000000) {
    return 0;
  }
  fVar7 = ___real_3f800000 / (fVar7 * *(float *)(this + 0x3c));
  local_20 = 0;
  local_14 = param_1;
  local_4 = 4;
  pmVar2 = param_1;
  pmVar3 = param_1;
  pmVar4 = param_1;
  pmVar5 = param_1;
  do {
    local_18 = 0;
    local_1c = local_14;
    local_8 = 4;
    do {
      switch(local_20) {
      case 0:
        pmVar3 = (m3dMATR *)0x1;
        local_24 = 2;
        param_1 = (m3dMATR *)0x3;
        break;
      case 1:
        local_24 = 2;
        param_1 = (m3dMATR *)0x3;
        goto LAB_0054c0f8;
      case 2:
        param_1 = (m3dMATR *)0x3;
        goto LAB_0054c0f0;
      case 3:
        param_1 = (m3dMATR *)&DAT_00000002;
LAB_0054c0f0:
        local_24 = 1;
LAB_0054c0f8:
        pmVar3 = (m3dMATR *)0x0;
      }
      switch(local_18) {
      case 0:
        pmVar4 = (m3dMATR *)0x1;
        pmVar5 = (m3dMATR *)&DAT_00000002;
        pmVar2 = (m3dMATR *)0x3;
        break;
      case 1:
        pmVar5 = (m3dMATR *)&DAT_00000002;
        pmVar2 = (m3dMATR *)0x3;
        goto LAB_0054c12a;
      case 2:
        pmVar2 = (m3dMATR *)0x3;
        goto LAB_0054c125;
      case 3:
        pmVar2 = (m3dMATR *)&DAT_00000002;
LAB_0054c125:
        pmVar5 = (m3dMATR *)0x1;
LAB_0054c12a:
        pmVar4 = (m3dMATR *)0x0;
      }
      uVar1 = local_20 + local_18 & 0x80000001;
      bVar6 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar6 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar6) {
        fVar8 = _m2dCalcMatrDet(this,(short)pmVar3,local_24,(short)param_1,(short)pmVar4,
                                (short)pmVar5,(short)pmVar2);
        fVar8 = fVar8 * fVar7;
      }
      else {
        fVar8 = _m2dCalcMatrDet(this,(short)pmVar3,local_24,(short)param_1,(short)pmVar4,
                                (short)pmVar5,(short)pmVar2);
        fVar8 = -(fVar8 * fVar7);
      }
      local_18 = local_18 + 1;
      *(float *)local_1c = fVar8;
      local_1c = local_1c + 0x10;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_20 = local_20 + 1;
    local_14 = local_14 + 4;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      return 1;
    }
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054C1E0 */

void __thiscall m3dMATR::RemoveScale(m3dMATR *this)

{
  float fVar1;
  m3dV *pmVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 in_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float local_48 [3];
  float local_3c [3];
  float local_30 [7];
  float local_14;
  float local_10;
  float *local_c;
  m3dMATR *local_8;
  
  local_c = local_30 + 3;
  local_8 = this;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar7 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),*(undefined8 *)this);
      uVar8 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),*(undefined8 *)(this + 0x10));
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),*(undefined8 *)(this + 0x20));
      uVar10 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),*(undefined8 *)(this + 8));
      in_MM1 = PackedFloatingADD(uVar8,uVar9);
      uVar8 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),*(undefined8 *)(this + 0x18));
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),*(undefined8 *)(this + 0x28));
      uVar7 = PackedFloatingADD(uVar7,in_MM1);
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      local_30[4] = (float)((ulonglong)uVar7 >> 0x20);
      local_30[3] = (float)uVar7;
      uVar7 = PackedFloatingADD(uVar10,uVar8);
      local_30[5] = (float)uVar7;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_30 + 3;
      iVar5 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitX;
        pfVar3 = (float *)(((int)this - (int)(local_30 + 3)) + (int)pfVar4);
        fVar12 = ___real_00000000;
        do {
          fVar13 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar12 = fVar13 * fVar1 + fVar12;
        } while ((int)pmVar2 < 0x5f9990);
        *pfVar4 = fVar12;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  fVar12 = local_30[5] * local_30[5] + local_30[4] * local_30[4] + local_30[3] * local_30[3];
  if (m3dSimdType == 0) {
    fVar12 = fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar13 = auVar14._0_4_;
    local_c = (float *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                        (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar12 * fVar13 * fVar13) *
                       fVar12);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar6 = (ulonglong)(uint)fVar12;
    uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar6);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
    uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
    in_MM1 = PackedFloatingMUL(uVar7,uVar6);
    local_c = (float *)in_MM1;
    FastExitMediaState();
  }
  else {
    local_c = (float *)SQRT(fVar12);
  }
  local_10 = (float)local_c;
  local_c = local_30 + 3;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar7 = PackedFloatingMUL(CONCAT44(_m3dVUnitY,_m3dVUnitY),*(undefined8 *)local_8);
      uVar8 = PackedFloatingMUL(CONCAT44(DAT_005f9994,DAT_005f9994),*(undefined8 *)(local_8 + 0x10))
      ;
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f9998,DAT_005f9998),*(undefined8 *)(local_8 + 0x20))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(_m3dVUnitY,_m3dVUnitY),*(undefined8 *)(local_8 + 8));
      in_MM1 = PackedFloatingADD(uVar8,uVar9);
      uVar8 = PackedFloatingMUL(CONCAT44(DAT_005f9994,DAT_005f9994),*(undefined8 *)(local_8 + 0x18))
      ;
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f9998,DAT_005f9998),*(undefined8 *)(local_8 + 0x28))
      ;
      uVar7 = PackedFloatingADD(uVar7,in_MM1);
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      local_30[4] = (float)((ulonglong)uVar7 >> 0x20);
      local_30[3] = (float)uVar7;
      uVar7 = PackedFloatingADD(uVar10,uVar8);
      local_30[5] = (float)uVar7;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_30 + 3;
      iVar5 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitY;
        pfVar3 = (float *)((int)pfVar4 + ((int)this - (int)(local_30 + 3)));
        fVar12 = ___real_00000000;
        do {
          fVar13 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar12 = fVar13 * fVar1 + fVar12;
        } while ((int)pmVar2 < 0x5f999c);
        *pfVar4 = fVar12;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  fVar12 = local_30[5] * local_30[5] + local_30[4] * local_30[4] + local_30[3] * local_30[3];
  if (m3dSimdType == 0) {
    fVar12 = fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar13 = auVar14._0_4_;
    local_c = (float *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                        (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar12 * fVar13 * fVar13) *
                       fVar12);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar6 = (ulonglong)(uint)fVar12;
    uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar6);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
    uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
    in_MM1 = PackedFloatingMUL(uVar7,uVar6);
    local_c = (float *)in_MM1;
    FastExitMediaState();
  }
  else {
    local_c = (float *)SQRT(fVar12);
  }
  local_14 = (float)local_c;
  local_c = local_30 + 3;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar7 = PackedFloatingMUL(CONCAT44(_m3dVUnitZ,_m3dVUnitZ),*(undefined8 *)local_8);
      uVar8 = PackedFloatingMUL(CONCAT44(DAT_005f99a0,DAT_005f99a0),*(undefined8 *)(local_8 + 0x10))
      ;
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f99a4,DAT_005f99a4),*(undefined8 *)(local_8 + 0x20))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(_m3dVUnitZ,_m3dVUnitZ),*(undefined8 *)(local_8 + 8));
      in_MM1 = PackedFloatingADD(uVar8,uVar9);
      uVar8 = PackedFloatingMUL(CONCAT44(DAT_005f99a0,DAT_005f99a0),*(undefined8 *)(local_8 + 0x18))
      ;
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f99a4,DAT_005f99a4),*(undefined8 *)(local_8 + 0x28))
      ;
      uVar7 = PackedFloatingADD(uVar7,in_MM1);
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      local_30[4] = (float)((ulonglong)uVar7 >> 0x20);
      local_30[3] = (float)uVar7;
      uVar7 = PackedFloatingADD(uVar10,uVar8);
      local_30[5] = (float)uVar7;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_30 + 3;
      iVar5 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitZ;
        pfVar3 = (float *)((int)pfVar4 + ((int)this - (int)(local_30 + 3)));
        fVar12 = ___real_00000000;
        do {
          fVar13 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar12 = fVar13 * fVar1 + fVar12;
        } while ((int)pmVar2 < 0x5f99a8);
        *pfVar4 = fVar12;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  fVar12 = local_30[5] * local_30[5] + local_30[4] * local_30[4] + local_30[3] * local_30[3];
  if (m3dSimdType == 0) {
    fVar12 = fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar13 = auVar14._0_4_;
    local_c = (float *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                        (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar12 * fVar13 * fVar13) *
                       fVar12);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar6 = (ulonglong)(uint)fVar12;
    uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar6);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
    uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
    uVar7 = PackedFloatingMUL(uVar7,uVar6);
    local_c = (float *)uVar7;
    FastExitMediaState();
  }
  else {
    local_c = (float *)SQRT(fVar12);
  }
  local_30[6] = (float)local_c;
  local_c = local_30;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar7 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),*(undefined8 *)local_8);
      uVar8 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),*(undefined8 *)(local_8 + 0x10))
      ;
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),*(undefined8 *)(local_8 + 0x20))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),*(undefined8 *)(local_8 + 8));
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),*(undefined8 *)(local_8 + 0x18))
      ;
      uVar11 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),*(undefined8 *)(local_8 + 0x28)
                                );
      uVar7 = PackedFloatingADD(uVar7,uVar8);
      uVar8 = PackedFloatingADD(uVar9,uVar11);
      local_30[1] = (float)((ulonglong)uVar7 >> 0x20);
      local_30[0] = (float)uVar7;
      uVar7 = PackedFloatingADD(uVar10,uVar8);
      local_30[2] = (float)uVar7;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_30;
      iVar5 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitX;
        pfVar3 = (float *)(((int)this - (int)local_30) + (int)pfVar4);
        fVar12 = ___real_00000000;
        do {
          fVar13 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar12 = fVar13 * fVar1 + fVar12;
        } while ((int)pmVar2 < 0x5f9990);
        *pfVar4 = fVar12;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  local_c = local_3c;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar7 = PackedFloatingMUL(CONCAT44(_m3dVUnitY,_m3dVUnitY),*(undefined8 *)local_8);
      uVar8 = PackedFloatingMUL(CONCAT44(DAT_005f9994,DAT_005f9994),*(undefined8 *)(local_8 + 0x10))
      ;
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f9998,DAT_005f9998),*(undefined8 *)(local_8 + 0x20))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(_m3dVUnitY,_m3dVUnitY),*(undefined8 *)(local_8 + 8));
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f9994,DAT_005f9994),*(undefined8 *)(local_8 + 0x18))
      ;
      uVar11 = PackedFloatingMUL(CONCAT44(DAT_005f9998,DAT_005f9998),*(undefined8 *)(local_8 + 0x28)
                                );
      uVar7 = PackedFloatingADD(uVar7,uVar8);
      uVar8 = PackedFloatingADD(uVar9,uVar11);
      local_3c[1] = (float)((ulonglong)uVar7 >> 0x20);
      local_3c[0] = (float)uVar7;
      uVar7 = PackedFloatingADD(uVar10,uVar8);
      local_3c[2] = (float)uVar7;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_3c;
      iVar5 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitY;
        pfVar3 = (float *)(((int)this - (int)local_3c) + (int)pfVar4);
        fVar12 = ___real_00000000;
        do {
          fVar13 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar12 = fVar13 * fVar1 + fVar12;
        } while ((int)pmVar2 < 0x5f999c);
        *pfVar4 = fVar12;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  local_c = local_48;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar7 = PackedFloatingMUL(CONCAT44(_m3dVUnitZ,_m3dVUnitZ),*(undefined8 *)local_8);
      uVar8 = PackedFloatingMUL(CONCAT44(DAT_005f99a0,DAT_005f99a0),*(undefined8 *)(local_8 + 0x10))
      ;
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f99a4,DAT_005f99a4),*(undefined8 *)(local_8 + 0x20))
      ;
      uVar10 = PackedFloatingMUL(CONCAT44(_m3dVUnitZ,_m3dVUnitZ),*(undefined8 *)(local_8 + 8));
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      uVar9 = PackedFloatingMUL(CONCAT44(DAT_005f99a0,DAT_005f99a0),*(undefined8 *)(local_8 + 0x18))
      ;
      uVar11 = PackedFloatingMUL(CONCAT44(DAT_005f99a4,DAT_005f99a4),*(undefined8 *)(local_8 + 0x28)
                                );
      uVar7 = PackedFloatingADD(uVar7,uVar8);
      uVar8 = PackedFloatingADD(uVar9,uVar11);
      local_48[1] = (float)((ulonglong)uVar7 >> 0x20);
      local_48[0] = (float)uVar7;
      uVar7 = PackedFloatingADD(uVar10,uVar8);
      local_48[2] = (float)uVar7;
      FastExitMediaState();
    }
    else {
      pfVar4 = local_48;
      iVar5 = 3;
      do {
        *pfVar4 = 0.0;
        pmVar2 = &m3dVUnitZ;
        pfVar3 = (float *)(((int)this - (int)local_48) + (int)pfVar4);
        fVar12 = ___real_00000000;
        do {
          fVar13 = *(float *)pmVar2;
          fVar1 = *pfVar3;
          pmVar2 = pmVar2 + 4;
          pfVar3 = pfVar3 + 4;
          fVar12 = fVar13 * fVar1 + fVar12;
        } while ((int)pmVar2 < 0x5f99a8);
        *pfVar4 = fVar12;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  m3dNormalize((m3dV *)local_30);
  m3dNormalize((m3dV *)local_3c);
  m3dNormalize((m3dV *)local_48);
  fVar12 = local_10;
  fVar13 = local_14;
  fVar1 = local_30[6];
  if ((local_3c[2] * local_30[1] - local_3c[1] * local_30[2]) * local_48[0] +
      local_48[1] * (local_30[2] * local_3c[0] - local_3c[2] * local_30[0]) +
      local_48[2] * (local_3c[1] * local_30[0] - local_30[1] * local_3c[0]) <= ___real_00000000) {
    fVar12 = local_10 * ___real_bf800000;
    fVar13 = local_14 * ___real_bf800000;
    fVar1 = local_30[6] * ___real_bf800000;
  }
  Scale(this,___real_3f800000 / fVar12,___real_3f800000 / fVar13,___real_3f800000 / fVar1,1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054CC70 */

void __thiscall
m3dMATR::TransformPointList
          (m3dMATR *this,int param_1,void *param_2,int param_3,void *param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int in_stack_00000018;
  float local_10 [3];
  
  if (m3dSimdType == 0) {
    if (param_2 != (void *)0x0) {
      uVar11 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar15 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      uVar17 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      uVar13 = *(undefined8 *)(param_1 + 0x38);
      do {
        fVar20 = *(float *)param_3;
        fVar3 = *(float *)(param_3 + 4);
        fVar2 = *(float *)(param_3 + 8);
        param_3 = param_3 + (int)param_4;
        *(ulonglong *)param_5 =
             CONCAT44(fVar20 * (float)((ulonglong)uVar11 >> 0x20) +
                      (float)((ulonglong)uVar14 >> 0x20) +
                      fVar3 * (float)((ulonglong)uVar15 >> 0x20) +
                      fVar2 * (float)((ulonglong)uVar17 >> 0x20),
                      fVar20 * (float)uVar11 + (float)uVar14 + fVar3 * (float)uVar15 +
                      fVar2 * (float)uVar17);
        *(float *)(param_5 + 8) =
             fVar20 * (float)uVar9 + (float)uVar13 + fVar3 * (float)uVar10 + fVar2 * (float)uVar12;
        param_5 = param_5 + in_stack_00000018;
        param_2 = (void *)((int)param_2 + -1);
      } while (param_2 != (void *)0x0);
    }
  }
  else {
    if (m3dSimdType == 1) {
      if (param_2 != (void *)0x0) {
        FastExitMediaState();
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        do {
          uVar8 = (undefined4)*(undefined8 *)param_3;
          uVar15 = CONCAT44(uVar8,uVar8);
          uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
          uVar17 = CONCAT44(uVar8,uVar8);
          uVar14 = CONCAT44(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 8));
          uVar10 = PackedFloatingMUL(uVar15,*(undefined8 *)param_1);
          uVar12 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x10));
          uVar13 = PackedFloatingMUL(uVar14,*(undefined8 *)(param_1 + 0x20));
          uVar10 = PackedFloatingADD(uVar10,uVar11);
          uVar16 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 8));
          uVar15 = PackedFloatingADD(uVar12,uVar13);
          uVar12 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x18));
          uVar14 = PackedFloatingMUL(uVar14,*(undefined8 *)(param_1 + 0x28));
          uVar17 = PackedFloatingADD(uVar16,uVar9);
          uVar15 = PackedFloatingADD(uVar10,uVar15);
          param_3 = param_3 + (int)param_4;
          uVar10 = PackedFloatingADD(uVar12,uVar14);
          *(undefined8 *)param_5 = uVar15;
          uVar15 = PackedFloatingADD(uVar17,uVar10);
          *(int *)(param_5 + 8) = (int)uVar15;
          param_5 = param_5 + in_stack_00000018;
          param_2 = (void *)((int)param_2 + -1);
        } while (param_2 != (void *)0x0);
        FastExitMediaState();
      }
      return;
    }
    if (param_3 == param_5) {
      if (0 < (int)param_2) {
        param_5 = (int)param_2;
        do {
          if (m3dSimdType == 0) {
            if ((param_1 & 0xfU) == 0) {
              fVar20 = *(float *)param_3;
              fVar3 = *(float *)(param_3 + 4);
              fVar2 = *(float *)(param_3 + 8);
              fVar18 = fVar20 * *(float *)param_1 + *(float *)(param_1 + 0x30) +
                       fVar3 * *(float *)(param_1 + 0x10) + fVar2 * *(float *)(param_1 + 0x20);
              fVar19 = fVar20 * *(float *)(param_1 + 4) + *(float *)(param_1 + 0x34) +
                       fVar3 * *(float *)(param_1 + 0x14) + fVar2 * *(float *)(param_1 + 0x24);
              fVar20 = fVar20 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x38) +
                       fVar3 * *(float *)(param_1 + 0x18) + fVar2 * *(float *)(param_1 + 0x28);
            }
            else {
              fVar20 = *(float *)param_3;
              fVar3 = *(float *)(param_3 + 4);
              fVar2 = *(float *)(param_3 + 8);
              fVar18 = fVar20 * (float)*(undefined8 *)param_1 +
                       fVar3 * (float)*(undefined8 *)(param_1 + 0x10) +
                       fVar2 * (float)*(undefined8 *)(param_1 + 0x20) +
                       (float)*(undefined8 *)(param_1 + 0x30);
              fVar19 = fVar20 * (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) +
                       fVar3 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                       fVar2 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
              fVar20 = fVar20 * (float)*(undefined8 *)(param_1 + 8) +
                       fVar3 * (float)*(undefined8 *)(param_1 + 0x18) +
                       fVar2 * (float)*(undefined8 *)(param_1 + 0x28) +
                       (float)*(undefined8 *)(param_1 + 0x38);
            }
            *(ulonglong *)param_3 = CONCAT44(fVar19,fVar18);
            *(float *)(param_3 + 8) = fVar20;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar8 = (undefined4)*(undefined8 *)param_3;
            uVar11 = CONCAT44(uVar8,uVar8);
            uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
            uVar15 = CONCAT44(uVar8,uVar8);
            uVar17 = CONCAT44(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 8));
            uVar9 = PackedFloatingMUL(uVar11,*(undefined8 *)param_1);
            uVar10 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 0x10));
            uVar12 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x20));
            uVar9 = PackedFloatingADD(uVar9,*(undefined8 *)(param_1 + 0x30));
            uVar14 = PackedFloatingMUL(uVar11,*(undefined8 *)(param_1 + 8));
            uVar11 = PackedFloatingADD(uVar10,uVar12);
            uVar10 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 0x18));
            uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x28));
            uVar15 = PackedFloatingADD(uVar14,*(undefined8 *)(param_1 + 0x38));
            uVar11 = PackedFloatingADD(uVar9,uVar11);
            uVar9 = PackedFloatingADD(uVar10,uVar17);
            *(undefined8 *)param_3 = uVar11;
            uVar11 = PackedFloatingADD(uVar15,uVar9);
            *(int *)(param_3 + 8) = (int)uVar11;
            FastExitMediaState();
          }
          else {
            iVar7 = 0;
            pfVar5 = local_10;
            do {
              *pfVar5 = 0.0;
              iVar4 = 0;
              pfVar6 = (float *)((param_1 - (int)local_10) + (int)pfVar5);
              fVar20 = ___real_00000000;
              do {
                iVar1 = iVar4 * 4;
                fVar3 = *pfVar6;
                iVar4 = iVar4 + 1;
                pfVar6 = pfVar6 + 4;
                fVar20 = *(float *)(param_3 + iVar1) * fVar3 + fVar20;
              } while (iVar4 < 3);
              *pfVar5 = fVar20;
              iVar4 = iVar7 + iVar4 * 4;
              iVar7 = iVar7 + 1;
              *pfVar5 = fVar20 + *(float *)(param_1 + iVar4 * 4);
              pfVar5 = pfVar5 + 1;
            } while (iVar7 < 3);
            *(float *)param_3 = local_10[0];
            *(float *)(param_3 + 4) = local_10[1];
            *(float *)(param_3 + 8) = local_10[2];
          }
          param_3 = param_3 + (int)param_4;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return;
      }
    }
    else if (0 < (int)param_2) {
      do {
        if (m3dSimdType == 0) {
          if ((param_1 & 0xfU) == 0) {
            fVar20 = *(float *)param_3;
            fVar3 = *(float *)(param_3 + 4);
            fVar2 = *(float *)(param_3 + 8);
            fVar18 = fVar20 * *(float *)param_1 + *(float *)(param_1 + 0x30) +
                     fVar3 * *(float *)(param_1 + 0x10) + fVar2 * *(float *)(param_1 + 0x20);
            fVar19 = fVar20 * *(float *)(param_1 + 4) + *(float *)(param_1 + 0x34) +
                     fVar3 * *(float *)(param_1 + 0x14) + fVar2 * *(float *)(param_1 + 0x24);
            fVar20 = fVar20 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x38) +
                     fVar3 * *(float *)(param_1 + 0x18) + fVar2 * *(float *)(param_1 + 0x28);
          }
          else {
            fVar20 = *(float *)param_3;
            fVar3 = *(float *)(param_3 + 4);
            fVar2 = *(float *)(param_3 + 8);
            fVar18 = fVar20 * (float)*(undefined8 *)param_1 +
                     fVar3 * (float)*(undefined8 *)(param_1 + 0x10) +
                     fVar2 * (float)*(undefined8 *)(param_1 + 0x20) +
                     (float)*(undefined8 *)(param_1 + 0x30);
            fVar19 = fVar20 * (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) +
                     fVar3 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                     fVar2 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20) +
                     (float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
            fVar20 = fVar20 * (float)*(undefined8 *)(param_1 + 8) +
                     fVar3 * (float)*(undefined8 *)(param_1 + 0x18) +
                     fVar2 * (float)*(undefined8 *)(param_1 + 0x28) +
                     (float)*(undefined8 *)(param_1 + 0x38);
          }
          *(ulonglong *)param_5 = CONCAT44(fVar19,fVar18);
          *(float *)(param_5 + 8) = fVar20;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar8 = (undefined4)*(undefined8 *)param_3;
          uVar11 = CONCAT44(uVar8,uVar8);
          uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
          uVar15 = CONCAT44(uVar8,uVar8);
          uVar17 = CONCAT44(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 8));
          uVar9 = PackedFloatingMUL(uVar11,*(undefined8 *)param_1);
          uVar10 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 0x10));
          uVar12 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x20));
          uVar9 = PackedFloatingADD(uVar9,*(undefined8 *)(param_1 + 0x30));
          uVar14 = PackedFloatingMUL(uVar11,*(undefined8 *)(param_1 + 8));
          uVar11 = PackedFloatingADD(uVar10,uVar12);
          uVar10 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 0x18));
          uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x28));
          uVar15 = PackedFloatingADD(uVar14,*(undefined8 *)(param_1 + 0x38));
          uVar11 = PackedFloatingADD(uVar9,uVar11);
          uVar9 = PackedFloatingADD(uVar10,uVar17);
          *(undefined8 *)param_5 = uVar11;
          uVar11 = PackedFloatingADD(uVar15,uVar9);
          *(int *)(param_5 + 8) = (int)uVar11;
          FastExitMediaState();
        }
        else {
          iVar7 = 0;
          pfVar5 = (float *)param_5;
          do {
            *pfVar5 = 0.0;
            iVar4 = 0;
            pfVar6 = (float *)((param_1 - param_5) + (int)pfVar5);
            do {
              iVar1 = iVar4 * 4;
              fVar20 = *pfVar6;
              iVar4 = iVar4 + 1;
              pfVar6 = pfVar6 + 4;
              *pfVar5 = *(float *)(param_3 + iVar1) * fVar20 + *pfVar5;
            } while (iVar4 < 3);
            iVar4 = iVar7 + iVar4 * 4;
            iVar7 = iVar7 + 1;
            *pfVar5 = *(float *)(param_1 + iVar4 * 4) + *pfVar5;
            pfVar5 = pfVar5 + 1;
          } while (iVar7 < 3);
        }
        param_3 = param_3 + (int)param_4;
        param_5 = param_5 + in_stack_00000018;
        param_2 = (void *)((int)param_2 + -1);
      } while (param_2 != (void *)0x0);
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_matr.cpp
   addr: 0054D0E0 */

void __thiscall
m3dMATR::TransformVectorList
          (m3dMATR *this,int param_1,void *param_2,int param_3,void *param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int in_stack_00000018;
  float local_10 [3];
  
  if (m3dSimdType == 0) {
    if (param_2 != (void *)0x0) {
      uVar11 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar16 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      uVar17 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      do {
        fVar20 = *(float *)param_3;
        fVar3 = *(float *)(param_3 + 4);
        fVar2 = *(float *)(param_3 + 8);
        param_3 = param_3 + (int)param_4;
        *(ulonglong *)param_5 =
             CONCAT44(fVar20 * (float)((ulonglong)uVar11 >> 0x20) +
                      fVar3 * (float)((ulonglong)uVar16 >> 0x20) +
                      fVar2 * (float)((ulonglong)uVar17 >> 0x20),
                      fVar20 * (float)uVar11 + fVar3 * (float)uVar16 + fVar2 * (float)uVar17);
        *(float *)(param_5 + 8) =
             fVar20 * (float)uVar9 + fVar3 * (float)uVar10 + fVar2 * (float)uVar12;
        param_5 = param_5 + in_stack_00000018;
        param_2 = (void *)((int)param_2 + -1);
      } while (param_2 != (void *)0x0);
    }
  }
  else {
    if (m3dSimdType == 1) {
      if (param_2 != (void *)0x0) {
        FastExitMediaState();
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        do {
          uVar8 = (undefined4)*(undefined8 *)param_3;
          uVar16 = CONCAT44(uVar8,uVar8);
          uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
          uVar17 = CONCAT44(uVar8,uVar8);
          uVar14 = CONCAT44(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 8));
          uVar10 = PackedFloatingMUL(uVar16,*(undefined8 *)param_1);
          uVar12 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x10));
          uVar13 = PackedFloatingMUL(uVar14,uVar11);
          uVar15 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 8));
          uVar16 = PackedFloatingADD(uVar12,uVar13);
          uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x18));
          uVar12 = PackedFloatingMUL(uVar14,uVar9);
          uVar16 = PackedFloatingADD(uVar10,uVar16);
          param_3 = param_3 + (int)param_4;
          uVar10 = PackedFloatingADD(uVar17,uVar12);
          *(undefined8 *)param_5 = uVar16;
          uVar16 = PackedFloatingADD(uVar15,uVar10);
          *(int *)(param_5 + 8) = (int)uVar16;
          param_5 = param_5 + in_stack_00000018;
          param_2 = (void *)((int)param_2 + -1);
        } while (param_2 != (void *)0x0);
        FastExitMediaState();
      }
      return;
    }
    if (param_3 == param_5) {
      if (0 < (int)param_2) {
        param_5 = (int)param_2;
        do {
          if (m3dSimdType == 0) {
            if ((param_1 & 0xfU) == 0) {
              fVar20 = *(float *)param_3;
              fVar3 = *(float *)(param_3 + 4);
              fVar2 = *(float *)(param_3 + 8);
              fVar18 = fVar20 * *(float *)param_1 + fVar3 * *(float *)(param_1 + 0x10) +
                       fVar2 * *(float *)(param_1 + 0x20);
              fVar19 = fVar20 * *(float *)(param_1 + 4) + fVar3 * *(float *)(param_1 + 0x14) +
                       fVar2 * *(float *)(param_1 + 0x24);
              fVar20 = fVar20 * *(float *)(param_1 + 8) + fVar3 * *(float *)(param_1 + 0x18) +
                       fVar2 * *(float *)(param_1 + 0x28);
            }
            else {
              fVar20 = *(float *)param_3;
              fVar3 = *(float *)(param_3 + 4);
              fVar2 = *(float *)(param_3 + 8);
              fVar18 = fVar20 * (float)*(undefined8 *)param_1 +
                       fVar3 * (float)*(undefined8 *)(param_1 + 0x10) +
                       fVar2 * (float)*(undefined8 *)(param_1 + 0x20);
              fVar19 = fVar20 * (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) +
                       fVar3 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                       fVar2 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
              fVar20 = fVar20 * (float)*(undefined8 *)(param_1 + 8) +
                       fVar3 * (float)*(undefined8 *)(param_1 + 0x18) +
                       fVar2 * (float)*(undefined8 *)(param_1 + 0x28);
            }
            *(ulonglong *)param_3 = CONCAT44(fVar19,fVar18);
            *(float *)(param_3 + 8) = fVar20;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar8 = (undefined4)*(undefined8 *)param_3;
            uVar11 = CONCAT44(uVar8,uVar8);
            uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
            uVar16 = CONCAT44(uVar8,uVar8);
            uVar17 = CONCAT44(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 8));
            uVar9 = PackedFloatingMUL(uVar11,*(undefined8 *)param_1);
            uVar10 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x10));
            uVar12 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x20));
            uVar14 = PackedFloatingMUL(uVar11,*(undefined8 *)(param_1 + 8));
            uVar11 = PackedFloatingADD(uVar10,uVar12);
            uVar16 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x18));
            uVar10 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x28));
            uVar11 = PackedFloatingADD(uVar9,uVar11);
            uVar9 = PackedFloatingADD(uVar16,uVar10);
            *(undefined8 *)param_3 = uVar11;
            uVar11 = PackedFloatingADD(uVar14,uVar9);
            *(int *)(param_3 + 8) = (int)uVar11;
            FastExitMediaState();
          }
          else {
            pfVar6 = local_10;
            iVar7 = 3;
            do {
              *pfVar6 = 0.0;
              iVar4 = 0;
              pfVar5 = (float *)((param_1 - (int)local_10) + (int)pfVar6);
              fVar20 = ___real_00000000;
              do {
                iVar1 = iVar4 * 4;
                fVar3 = *pfVar5;
                iVar4 = iVar4 + 1;
                pfVar5 = pfVar5 + 4;
                fVar20 = *(float *)(param_3 + iVar1) * fVar3 + fVar20;
              } while (iVar4 < 3);
              *pfVar6 = fVar20;
              pfVar6 = pfVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            *(float *)param_3 = local_10[0];
            *(float *)(param_3 + 4) = local_10[1];
            *(float *)(param_3 + 8) = local_10[2];
          }
          param_3 = param_3 + (int)param_4;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
        return;
      }
    }
    else if (0 < (int)param_2) {
      do {
        if (m3dSimdType == 0) {
          if ((param_1 & 0xfU) == 0) {
            fVar20 = *(float *)param_3;
            fVar3 = *(float *)(param_3 + 4);
            fVar2 = *(float *)(param_3 + 8);
            fVar18 = fVar20 * *(float *)param_1 + fVar3 * *(float *)(param_1 + 0x10) +
                     fVar2 * *(float *)(param_1 + 0x20);
            fVar19 = fVar20 * *(float *)(param_1 + 4) + fVar3 * *(float *)(param_1 + 0x14) +
                     fVar2 * *(float *)(param_1 + 0x24);
            fVar20 = fVar20 * *(float *)(param_1 + 8) + fVar3 * *(float *)(param_1 + 0x18) +
                     fVar2 * *(float *)(param_1 + 0x28);
          }
          else {
            fVar20 = *(float *)param_3;
            fVar3 = *(float *)(param_3 + 4);
            fVar2 = *(float *)(param_3 + 8);
            fVar18 = fVar20 * (float)*(undefined8 *)param_1 +
                     fVar3 * (float)*(undefined8 *)(param_1 + 0x10) +
                     fVar2 * (float)*(undefined8 *)(param_1 + 0x20);
            fVar19 = fVar20 * (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) +
                     fVar3 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                     fVar2 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
            fVar20 = fVar20 * (float)*(undefined8 *)(param_1 + 8) +
                     fVar3 * (float)*(undefined8 *)(param_1 + 0x18) +
                     fVar2 * (float)*(undefined8 *)(param_1 + 0x28);
          }
          *(ulonglong *)param_5 = CONCAT44(fVar19,fVar18);
          *(float *)(param_5 + 8) = fVar20;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar8 = (undefined4)*(undefined8 *)param_3;
          uVar11 = CONCAT44(uVar8,uVar8);
          uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
          uVar16 = CONCAT44(uVar8,uVar8);
          uVar17 = CONCAT44(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 8));
          uVar9 = PackedFloatingMUL(uVar11,*(undefined8 *)param_1);
          uVar10 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x10));
          uVar12 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x20));
          uVar14 = PackedFloatingMUL(uVar11,*(undefined8 *)(param_1 + 8));
          uVar11 = PackedFloatingADD(uVar10,uVar12);
          uVar16 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x18));
          uVar10 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x28));
          uVar11 = PackedFloatingADD(uVar9,uVar11);
          uVar9 = PackedFloatingADD(uVar16,uVar10);
          *(undefined8 *)param_5 = uVar11;
          uVar11 = PackedFloatingADD(uVar14,uVar9);
          *(int *)(param_5 + 8) = (int)uVar11;
          FastExitMediaState();
        }
        else {
          iVar7 = 3;
          pfVar6 = (float *)param_5;
          do {
            *pfVar6 = 0.0;
            iVar4 = 0;
            pfVar5 = (float *)((param_1 - param_5) + (int)pfVar6);
            do {
              iVar1 = iVar4 * 4;
              fVar20 = *pfVar5;
              iVar4 = iVar4 + 1;
              pfVar5 = pfVar5 + 4;
              *pfVar6 = *(float *)(param_3 + iVar1) * fVar20 + *pfVar6;
            } while (iVar4 < 3);
            pfVar6 = pfVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        param_3 = param_3 + (int)param_4;
        param_5 = param_5 + in_stack_00000018;
        param_2 = (void *)((int)param_2 + -1);
      } while (param_2 != (void *)0x0);
      return;
    }
  }
  return;
}




/* from: m3d:m3d_matr.cpp
   addr: 0054D4E0 */

float __fastcall
_m2dCalcMatrDet(m3dMATR *param_1,short param_2,short param_3,short param_4,short param_5,
               short param_6,short param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_5;
  iVar1 = param_2 * 4;
  iVar3 = (int)param_6;
  iVar2 = param_3 * 4;
  iVar4 = param_4 * 4;
  return (((*(float *)(param_1 + (param_7 + iVar2) * 4) * *(float *)(param_1 + (iVar4 + iVar5) * 4)
            * *(float *)(param_1 + (iVar3 + iVar1) * 4) +
           *(float *)(param_1 + (param_7 + iVar1) * 4) * *(float *)(param_1 + (iVar2 + iVar5) * 4) *
           *(float *)(param_1 + (iVar4 + iVar3) * 4) +
           *(float *)(param_1 + (param_7 + iVar4) * 4) * *(float *)(param_1 + (iVar5 + iVar1) * 4) *
           *(float *)(param_1 + (iVar3 + iVar2) * 4)) -
          *(float *)(param_1 + (param_7 + iVar1) * 4) * *(float *)(param_1 + (iVar4 + iVar5) * 4) *
          *(float *)(param_1 + (iVar3 + iVar2) * 4)) -
         *(float *)(param_1 + (param_7 + iVar4) * 4) * *(float *)(param_1 + (iVar2 + iVar5) * 4) *
         *(float *)(param_1 + (iVar3 + iVar1) * 4)) -
         *(float *)(param_1 + (param_7 + iVar2) * 4) * *(float *)(param_1 + (iVar5 + iVar1) * 4) *
         *(float *)(param_1 + (iVar4 + iVar3) * 4);
}

