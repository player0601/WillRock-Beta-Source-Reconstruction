
/* from: m3d:m2d_matr.cpp
   addr: 00563B00 */

int __fastcall m3dInit2DMatr(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  m2dMATR *pmVar4;
  
  iVar1 = 0;
  puVar3 = &DAT_009639ec;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    *(undefined4 *)((int)&DAT_009639ec + iVar1) = 0x3f800000;
    iVar1 = iVar1 + 0x10;
  } while (iVar1 < 0x30);
  iVar1 = 0;
  pmVar4 = &m2dMatrIdentity;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pmVar4 = 0;
    pmVar4 = pmVar4 + 4;
  }
  do {
    *(undefined4 *)(&m2dMatrIdentity + iVar1) = 0x3f800000;
    iVar1 = iVar1 + 0x10;
  } while (iVar1 < 0x30);
  return 1;
}




/* from: m3d:m2d_matr.cpp
   addr: 00563B50 */

void __thiscall m2dMATR::Identity(m2dMATR *this)

{
  int iVar1;
  m2dMATR *pmVar2;
  
  pmVar2 = this;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pmVar2 = 0;
    pmVar2 = pmVar2 + 4;
  }
  iVar1 = 3;
  do {
    *(undefined4 *)this = 0x3f800000;
    this = this + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}




/* from: m3d:m2d_matr.cpp
   addr: 00563B80 */

void __thiscall m2dMATR::Scale(m2dMATR *this,float param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    *(float *)this = param_1;
    *(float *)(this + 0x10) = param_2;
  }
  else {
    if (param_3 == 1) {
      iVar2 = 0;
      do {
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        *(float *)(this + iVar2 * 4 + -4) = param_1 * *(float *)(this + iVar1);
        *(float *)(this + iVar2 * 4 + 8) = param_2 * *(float *)(this + iVar2 * 4 + 8);
      } while (iVar2 < 2);
      return;
    }
    if (param_3 == 2) {
      iVar2 = 3;
      do {
        iVar2 = iVar2 + -1;
        *(float *)this = param_1 * *(float *)this;
        *(float *)(this + 4) = param_2 * *(float *)(this + 4);
        this = this + 0xc;
      } while (iVar2 != 0);
      return;
    }
  }
  return;
}




/* from: m3d:m2d_matr.cpp
   addr: 00563BF0 */

void __thiscall m2dMATR::Translate(m2dMATR *this,float param_1,float param_2,int param_3)

{
  if (param_3 == 0) {
    *(float *)(this + 0x18) = param_1;
    *(float *)(this + 0x1c) = param_2;
  }
  else {
    if (param_3 == 1) {
      *(float *)(this + 0x18) =
           param_1 * *(float *)this + param_2 * *(float *)(this + 0xc) + *(float *)(this + 0x18);
      *(float *)(this + 0x1c) =
           param_2 * *(float *)(this + 0x10) + param_1 * *(float *)(this + 4) +
           *(float *)(this + 0x1c);
      return;
    }
    if (param_3 == 2) {
      *(float *)(this + 0x18) = param_1 + *(float *)(this + 0x18);
      *(float *)(this + 0x1c) = param_2 + *(float *)(this + 0x1c);
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m2d_matr.cpp
   addr: 00563C60 */

void __thiscall m2dMATR::Rotate(m2dMATR *this,float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  m2dMATR *pmVar8;
  int iVar9;
  float *pfVar10;
  m2dMATR *pmVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float10 fVar14;
  float10 fVar15;
  float local_24 [9];
  
  fVar14 = (float10)_DAT_005de644 * (float10)param_1 * (float10)___real_3bb60b61;
  fVar15 = (float10)fcos(fVar14);
  fVar14 = (float10)fsin((float10)(float)fVar14);
  DAT_009639ec = (float)fVar15;
  DAT_009639f0 = (float)fVar14;
  DAT_009639f8 = (float)-fVar14;
  DAT_009639fc = (float)fVar15;
  if (param_2 != 0) {
    if (param_2 == 2) {
      pfVar13 = local_24;
      param_1 = 4.2039e-45;
      do {
        pfVar5 = (float *)(((int)this - (int)local_24) + (int)pfVar13);
        pfVar10 = &DAT_009639ec;
        do {
          *pfVar13 = 0.0;
          iVar6 = 3;
          pfVar4 = pfVar5;
          pfVar7 = pfVar10;
          fVar3 = ___real_00000000;
          do {
            fVar1 = *pfVar4;
            fVar2 = *pfVar7;
            pfVar4 = pfVar4 + 1;
            pfVar7 = pfVar7 + 3;
            iVar6 = iVar6 + -1;
            fVar3 = fVar1 * fVar2 + fVar3;
          } while (iVar6 != 0);
          *pfVar13 = fVar3;
          pfVar10 = pfVar10 + 1;
          pfVar13 = pfVar13 + 1;
        } while ((int)pfVar10 < 0x9639f8);
        param_1 = (float)((int)param_1 + -1);
      } while (param_1 != 0.0);
    }
    else {
      iVar6 = 0;
      do {
        pfVar13 = (float *)((int)local_24 + iVar6);
        param_1 = 4.2039e-45;
        pmVar11 = this;
        do {
          *pfVar13 = 0.0;
          iVar9 = 3;
          pfVar5 = (float *)((int)&DAT_009639ec + iVar6);
          pmVar8 = pmVar11;
          fVar3 = ___real_00000000;
          do {
            fVar1 = *pfVar5;
            fVar2 = *(float *)pmVar8;
            pfVar5 = pfVar5 + 1;
            pmVar8 = pmVar8 + 0xc;
            iVar9 = iVar9 + -1;
            fVar3 = fVar1 * fVar2 + fVar3;
          } while (iVar9 != 0);
          *pfVar13 = fVar3;
          pfVar13 = pfVar13 + 1;
          pmVar11 = pmVar11 + 4;
          param_1 = (float)((int)param_1 + -1);
        } while (param_1 != 0.0);
        iVar6 = iVar6 + 0xc;
      } while (iVar6 < 0x24);
    }
    pfVar13 = local_24;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(float *)this = *pfVar13;
      pfVar13 = pfVar13 + 1;
      this = this + 4;
    }
    return;
  }
  puVar12 = &DAT_009639ec;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)this = *puVar12;
    puVar12 = puVar12 + 1;
    this = this + 4;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m2d_matr.cpp
   addr: 00563DA0 */

void __thiscall m2dMATR::MakeRot(m2dMATR *this,float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)_DAT_005de644 * (float10)param_1 * (float10)___real_3bb60b61;
  fVar2 = (float10)fcos(fVar1);
  *(float *)this = (float)fVar2;
  fVar1 = (float10)fsin((float10)(float)fVar1);
  *(float *)(this + 4) = (float)-fVar1;
  *(float *)(this + 0xc) = (float)fVar1;
  *(float *)(this + 0x10) = (float)fVar2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: m3d:m2d_matr.cpp
   addr: 00563DD0 */

int __thiscall m2dMATR::MakePolyPoly(m2dMATR *this,m2dPOLY *param_1,m2dPOLY *param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  m3dMATR local_c4 [12];
  undefined4 local_b8 [5];
  undefined4 local_a4 [4];
  undefined4 local_94 [4];
  float local_84 [4];
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float *local_20;
  float local_1c [6];
  
  local_44[2] = 0;
  local_30 = 0;
  local_24 = 0x3f800000;
  puVar5 = local_a4;
  puVar8 = local_b8;
  iVar9 = 3;
  do {
    uVar2 = *(undefined4 *)(param_1 + 4);
    *puVar8 = 0;
    puVar5[4] = 0;
    *puVar5 = 0x3f800000;
    puVar8 = puVar8 + 4;
    puVar5[-8] = uVar2;
    puVar5[-4] = *(undefined4 *)(param_1 + 8);
    puVar5 = puVar5 + 1;
    iVar9 = iVar9 + -1;
    param_1 = param_1 + 8;
  } while (iVar9 != 0);
  local_94[3] = 0x3f800000;
  iVar9 = m3dMATR::Invert(local_c4,(m3dMATR *)local_84);
  if (iVar9 == 0) {
    return 0;
  }
  local_1c[0] = *(float *)(param_2 + 4);
  local_1c[1] = *(float *)(param_2 + 0xc);
  local_1c[2] = *(float *)(param_2 + 0x14);
  local_20 = local_84;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar10 = PackedFloatingMUL(CONCAT44(local_1c[0],local_1c[0]),CONCAT44(local_84[1],local_84[0])
                                );
      uVar11 = PackedFloatingMUL(CONCAT44(local_1c[1],local_1c[1]),CONCAT44(uStack_70,local_74));
      uVar12 = PackedFloatingMUL(CONCAT44(local_1c[2],local_1c[2]),CONCAT44(uStack_60,local_64));
      uVar13 = PackedFloatingMUL(CONCAT44(local_1c[0],local_1c[0]),CONCAT44(local_84[3],local_84[2])
                                );
      uVar11 = PackedFloatingADD(uVar11,uVar12);
      uVar12 = PackedFloatingMUL(CONCAT44(local_1c[1],local_1c[1]),CONCAT44(uStack_68,uStack_6c));
      uVar14 = PackedFloatingMUL(CONCAT44(local_1c[2],local_1c[2]),CONCAT44(uStack_58,uStack_5c));
      uVar10 = PackedFloatingADD(uVar10,uVar11);
      uVar11 = PackedFloatingADD(uVar12,uVar14);
      local_1c[4] = (float)((ulonglong)uVar10 >> 0x20);
      local_1c[3] = (float)uVar10;
      uVar10 = PackedFloatingADD(uVar13,uVar11);
      local_1c[5] = (float)uVar10;
      FastExitMediaState();
    }
    else {
      iVar9 = 0;
      do {
        *(undefined4 *)((int)local_1c + iVar9 + 0xc) = 0;
        iVar6 = 0;
        pfVar7 = (float *)((int)local_84 + iVar9);
        fVar4 = ___real_00000000;
        do {
          pfVar1 = local_1c + iVar6;
          fVar3 = *pfVar7;
          iVar6 = iVar6 + 1;
          pfVar7 = pfVar7 + 4;
          fVar4 = *pfVar1 * fVar3 + fVar4;
        } while (iVar6 < 3);
        *(float *)((int)local_1c + iVar9 + 0xc) = fVar4;
        iVar9 = iVar9 + 4;
      } while (iVar9 < 0xc);
    }
  }
  local_1c[0] = *(float *)(param_2 + 8);
  local_44[3] = local_1c[4];
  local_1c[1] = *(float *)(param_2 + 0x10);
  local_1c[2] = *(float *)(param_2 + 0x18);
  local_44[0] = local_1c[3];
  local_2c = local_1c[5];
  local_20 = local_84;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar10 = PackedFloatingMUL(CONCAT44(local_1c[0],local_1c[0]),CONCAT44(local_84[1],local_84[0])
                                );
      uVar11 = PackedFloatingMUL(CONCAT44(local_1c[1],local_1c[1]),CONCAT44(uStack_70,local_74));
      uVar12 = PackedFloatingMUL(CONCAT44(local_1c[2],local_1c[2]),CONCAT44(uStack_60,local_64));
      uVar13 = PackedFloatingMUL(CONCAT44(local_1c[0],local_1c[0]),CONCAT44(local_84[3],local_84[2])
                                );
      uVar11 = PackedFloatingADD(uVar11,uVar12);
      uVar12 = PackedFloatingMUL(CONCAT44(local_1c[1],local_1c[1]),CONCAT44(uStack_68,uStack_6c));
      uVar14 = PackedFloatingMUL(CONCAT44(local_1c[2],local_1c[2]),CONCAT44(uStack_58,uStack_5c));
      uVar10 = PackedFloatingADD(uVar10,uVar11);
      uVar11 = PackedFloatingADD(uVar12,uVar14);
      local_1c[4] = (float)((ulonglong)uVar10 >> 0x20);
      local_1c[3] = (float)uVar10;
      uVar10 = PackedFloatingADD(uVar13,uVar11);
      local_1c[5] = (float)uVar10;
      FastExitMediaState();
    }
    else {
      iVar9 = 0;
      do {
        *(undefined4 *)((int)local_1c + iVar9 + 0xc) = 0;
        iVar6 = 0;
        pfVar7 = (float *)((int)local_84 + iVar9);
        fVar4 = ___real_00000000;
        do {
          pfVar1 = local_1c + iVar6;
          fVar3 = *pfVar7;
          iVar6 = iVar6 + 1;
          pfVar7 = pfVar7 + 4;
          fVar4 = *pfVar1 * fVar3 + fVar4;
        } while (iVar6 < 3);
        *(float *)((int)local_1c + iVar9 + 0xc) = fVar4;
        iVar9 = iVar9 + 4;
      } while (iVar9 < 0xc);
    }
  }
  local_28 = local_1c[5];
  local_44[1] = local_1c[3];
  local_34 = local_1c[4];
  puVar5 = local_44;
  for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)this = *puVar5;
    puVar5 = puVar5 + 1;
    this = this + 4;
  }
  return 1;
}

