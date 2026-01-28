
/* from: engine:obj_normals.cpp
   addr: 004DB3C0 */

void __thiscall objOBJ::CalcFacePerpVectors(objOBJ *this)

{
  int *piVar1;
  int iVar2;
  m3dV *pmVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(*(int *)(this + 0x28) + 0x50) == 0) {
    if ((*(int *)(*(int *)(this + 0x28) + 0x44) != 0) ||
       (iVar2 = AllocNormalList(this,*(int *)(this + 0x10)), iVar2 != 0)) {
      if (((byte)*this & 1) == 0) {
        TransformPoints(this,(m3dMATR *)0x0,(m3dV *)0x0);
        pmVar3 = GetTransformedVertList();
      }
      else {
        pmVar3 = *(m3dV **)(*(int *)(this + 0x28) + 0x40);
      }
      iVar2 = 0;
      if (0 < *(int *)(this + 0x10)) {
        iVar5 = 0;
        do {
          piVar1 = *(int **)(this + 0x28);
          iVar4 = *piVar1 + (uint)*(byte *)(piVar1 + 1) * iVar2;
          m3dGetPlanePerpVector
                    (pmVar3 + (uint)*(ushort *)(iVar4 + 2) * 0xc,
                     pmVar3 + (uint)*(ushort *)(iVar4 + 4) * 0xc,
                     pmVar3 + (uint)*(ushort *)(iVar4 + 6) * 0xc,(m3dV *)(piVar1[0x11] + iVar5));
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 0xc;
        } while (iVar2 < *(int *)(this + 0x10));
      }
    }
    return;
  }
  CalcFaceNormals(this);
  return;
}




/* from: engine:obj_normals.cpp
   addr: 004DB470 */

void __thiscall objOBJ::CalcFacePerpVectors(objOBJ *this)

{
  uint uVar1;
  objOBJ *poVar2;
  bool bVar3;
  objOBJ *this_00;
  
  if ((this != (objOBJ *)0x0) &&
     ((uVar1 = *(uint *)(this + 8), (uVar1 & 0x1c) == 0 || ((uVar1 & 0xf000) != 0)))) {
    if ((*(int *)(this + 0x28) != 0) && (((uVar1 & 0x3f) == 0 || ((uVar1 & 0xf000) != 0)))) {
      CalcFacePerpVectors(this);
    }
    bVar3 = false;
    poVar2 = *(objOBJ **)(this + 0x38);
    for (this_00 = poVar2; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar2))));
        this_00 = *(objOBJ **)(this_00 + 0x30)) {
      CalcFacePerpVectors(this_00);
      bVar3 = true;
    }
  }
  return;
}




/* from: engine:obj_normals.cpp
   addr: 004DB4D0 */

void __thiscall objOBJ::NormalizeFacePerpVectors(objOBJ *this)

{
  uint uVar1;
  objOBJ *poVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  objOBJ *this_00;
  
  if ((this != (objOBJ *)0x0) &&
     ((uVar1 = *(uint *)(this + 8), (uVar1 & 0x1c) == 0 || ((uVar1 & 0xf000) != 0)))) {
    if ((*(int *)(this + 0x28) != 0) && (((uVar1 & 0x3f) == 0 || ((uVar1 & 0xf000) != 0)))) {
      if ((*(int *)(*(int *)(this + 0x28) + 0x50) != 0) &&
         ((*(int *)(this + 0xbc) != 0 && ((*(uint *)(*(int *)(this + 0xbc) + 0xc) & 0x800) == 0))))
      {
        return;
      }
      iVar5 = 0;
      if (0 < *(int *)(this + 0x10)) {
        iVar4 = 0;
        do {
          m3dNormalize((m3dV *)(*(int *)(*(int *)(this + 0x28) + 0x44) + iVar4));
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar5 < *(int *)(this + 0x10));
      }
    }
    bVar3 = false;
    poVar2 = *(objOBJ **)(this + 0x38);
    for (this_00 = poVar2; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar2))));
        this_00 = *(objOBJ **)(this_00 + 0x30)) {
      NormalizeFacePerpVectors(this_00);
      bVar3 = true;
    }
  }
  return;
}




/* from: engine:obj_normals.cpp
   addr: 004DB570 */

void __thiscall objOBJ::CalcFaceNormals(objOBJ *this)

{
  uint uVar1;
  objOBJ *poVar2;
  bool bVar3;
  objOBJ *this_00;
  
  if ((this != (objOBJ *)0x0) &&
     ((uVar1 = *(uint *)(this + 8), (uVar1 & 0x1c) == 0 || ((uVar1 & 0xf000) != 0)))) {
    if ((*(int *)(this + 0x28) != 0) && (((uVar1 & 0x3f) == 0 || ((uVar1 & 0xf000) != 0)))) {
      CalcFaceNormals(this);
    }
    bVar3 = false;
    poVar2 = *(objOBJ **)(this + 0x38);
    for (this_00 = poVar2; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar2))));
        this_00 = *(objOBJ **)(this_00 + 0x30)) {
      CalcFaceNormals(this_00);
      bVar3 = true;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_normals.cpp
   addr: 004DB5D0 */

void __thiscall objOBJ::CalcFaceNormals(objOBJ *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  m3dV *pmVar8;
  int iVar9;
  objOBJ *poVar10;
  m3dMATR *pmVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  m3dMATR local_54 [64];
  objOBJ *local_14;
  float *local_10;
  m3dMATR *local_c;
  float local_8;
  
  if ((*(int *)(*(int *)(this + 0x28) + 0x44) == 0) &&
     (iVar7 = AllocNormalList(this,*(int *)(this + 0x10)), in_MM1 = extraout_MM1, iVar7 == 0)) {
    return;
  }
  iVar7 = *(int *)(this + 0x28);
  local_10 = *(float **)(iVar7 + 0x50);
  if (local_10 == (float *)0x0) {
    if (((byte)*this & 1) == 0) {
      TransformPoints(this,(m3dMATR *)0x0,(m3dV *)0x0);
      pmVar8 = GetTransformedVertList();
    }
    else {
      pmVar8 = *(m3dV **)(iVar7 + 0x40);
    }
    iVar7 = 0;
    if (0 < *(int *)(this + 0x10)) {
      local_8 = 0.0;
      do {
        piVar6 = *(int **)(this + 0x28);
        iVar9 = (uint)*(byte *)(piVar6 + 1) * iVar7 + *piVar6;
        m3dGetPlaneNormal(pmVar8 + (uint)*(ushort *)(iVar9 + 2) * 0xc,
                          pmVar8 + (uint)*(ushort *)(iVar9 + 4) * 0xc,
                          pmVar8 + (uint)*(ushort *)(iVar9 + 6) * 0xc,
                          (m3dV *)(piVar6[0x11] + (int)local_8));
        iVar7 = iVar7 + 1;
        local_8 = (float)((int)local_8 + 0xc);
      } while (iVar7 < *(int *)(this + 0x10));
    }
  }
  else if ((*(int *)(this + 0xbc) == 0) || ((*(uint *)(*(int *)(this + 0xbc) + 0xc) & 0x800) != 0))
  {
    puVar12 = *(undefined8 **)(iVar7 + 0x44);
    local_c = *(m3dMATR **)(this + 0x10);
    local_14 = this + 0x3c;
    if (m3dSimdType == 0) {
      fVar16 = (float)*(undefined8 *)local_14;
      fVar17 = (float)((ulonglong)*(undefined8 *)local_14 >> 0x20);
      fVar18 = (float)*(undefined8 *)(this + 0x44);
      uVar14 = *(undefined8 *)(this + 0x4c);
      fVar20 = fVar17 * fVar17;
      uVar15 = *(undefined8 *)(this + 0x54);
      uVar4 = *(undefined8 *)(this + 0x5c);
      auVar19._4_4_ = fVar16 * fVar16;
      auVar19._0_4_ = fVar18 * fVar18;
      auVar19._8_4_ = fVar20;
      auVar19._12_4_ = fVar20;
      uVar5 = *(undefined8 *)(this + 100);
      auVar21._4_12_ = auVar19._4_12_;
      auVar21._0_4_ = fVar18 * fVar18 + fVar20 + fVar16 * fVar16;
      auVar19 = rsqrtss(auVar21,auVar21);
      fVar20 = auVar19._0_4_;
      fVar20 = `private:_void___cdecl_objOBJ::TransformNormalList(class_m3dMATR*,struct_m3dV*,struct_m3dV*,int)'
               ::__l2::half * fVar20 *
               (`private:_void___cdecl_objOBJ::TransformNormalList(class_m3dMATR*,struct_m3dV*,struct_m3dV*,int)'
                ::__l2::three - auVar21._0_4_ * fVar20 * fVar20);
      do {
        fVar1 = *local_10;
        fVar2 = local_10[1];
        fVar3 = local_10[2];
        local_10 = local_10 + 3;
        *puVar12 = CONCAT44(fVar1 * fVar17 * fVar20 +
                            fVar2 * (float)((ulonglong)uVar14 >> 0x20) * fVar20 +
                            fVar3 * (float)((ulonglong)uVar4 >> 0x20) * fVar20,
                            fVar1 * fVar16 * fVar20 + fVar2 * (float)uVar14 * fVar20 +
                            fVar3 * (float)uVar4 * fVar20);
        *(float *)(puVar12 + 1) =
             fVar1 * fVar18 * fVar20 + fVar2 * (float)uVar15 * fVar20 +
             fVar3 * (float)uVar5 * fVar20;
        puVar12 = (undefined8 *)((int)puVar12 + 0xc);
        local_c = local_c + -1;
      } while (local_c != (m3dMATR *)0x0);
      return;
    }
    local_8 = *(float *)(this + 0x44) * *(float *)(this + 0x44) +
              *(float *)(this + 0x40) * *(float *)(this + 0x40) +
              *(float *)local_14 * *(float *)local_14;
    if (m3dSimdType == 0) {
      local_8 = local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar19 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
      fVar16 = auVar19._0_4_;
      local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar16 * fVar16) * local_8;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar13 = (ulonglong)(uint)local_8;
      uVar14 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar13);
      uVar15 = PackedFloatingMUL(uVar14,uVar14);
      uVar15 = PackedFloatingReciprocalSQRIter1(uVar15,uVar13);
      uVar14 = PackedFloatingReciprocalIter2(uVar15,uVar14);
      uVar14 = PackedFloatingMUL(uVar14,uVar13);
      local_8 = (float)uVar14;
      FastExitMediaState();
    }
    else {
      local_8 = SQRT(local_8);
    }
    fVar16 = ___real_3f800000 / local_8;
    poVar10 = local_14;
    pmVar11 = local_54;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(float *)pmVar11 = *(float *)poVar10;
      poVar10 = poVar10 + 4;
      pmVar11 = pmVar11 + 4;
    }
    local_8 = fVar16;
    m3dMATR::Scale(local_54,fVar16,fVar16,fVar16,2);
    m3dMATR::TransformVectorList
              (local_c,(int)local_54,local_c,(int)local_10,(void *)0xc,(int)puVar12);
    return;
  }
  return;
}




/* from: engine:obj_normals.cpp
   addr: 004DB880 */

void __thiscall objOBJ::CalcFaceNormalsLCS(objOBJ *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = *(int *)(*(int *)(this + 0x28) + 0x40);
  if (0 < *(int *)(this + 0x10)) {
    iVar4 = 0;
    do {
      piVar2 = *(int **)(this + 0x28);
      iVar3 = (uint)*(byte *)(piVar2 + 1) * iVar5 + *piVar2;
      m3dGetPlaneNormal((m3dV *)(iVar1 + (uint)*(ushort *)(iVar3 + 2) * 0xc),
                        (m3dV *)(iVar1 + (uint)*(ushort *)(iVar3 + 4) * 0xc),
                        (m3dV *)(iVar1 + (uint)*(ushort *)(iVar3 + 6) * 0xc),
                        (m3dV *)(piVar2[0x14] + iVar4));
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < *(int *)(this + 0x10));
  }
  return;
}




/* from: engine:obj_normals.cpp
   addr: 004DB8F0 */

void __thiscall objOBJ::CalcVertNormals(objOBJ *this)

{
  uint uVar1;
  objOBJ *poVar2;
  bool bVar3;
  objOBJ *this_00;
  
  if ((this != (objOBJ *)0x0) &&
     ((uVar1 = *(uint *)(this + 8), (uVar1 & 0x1c) == 0 || ((uVar1 & 0xf000) != 0)))) {
    if ((*(int *)(this + 0x28) != 0) && (((uVar1 & 0x3f) == 0 || ((uVar1 & 0xf000) != 0)))) {
      CalcVertNormals(this);
    }
    bVar3 = false;
    poVar2 = *(objOBJ **)(this + 0x38);
    for (this_00 = poVar2; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar2))));
        this_00 = *(objOBJ **)(this_00 + 0x30)) {
      CalcVertNormals(this_00);
      bVar3 = true;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_normals.cpp
   addr: 004DB950 */

void __thiscall objOBJ::CalcVertNormals(objOBJ *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  objOBJ *poVar11;
  m3dMATR *pmVar12;
  undefined4 *puVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  m3dMATR local_54 [64];
  float *local_14;
  undefined8 *local_10;
  void *local_c;
  float local_8;
  
  if ((*(int *)(*(int *)(this + 0x28) + 0x48) == 0) &&
     (iVar8 = AllocVertNormalList(this,*(int *)(this + 0x14)), in_MM1 = extraout_MM1, iVar8 == 0)) {
    return;
  }
  iVar8 = *(int *)(this + 0x28);
  local_14 = *(float **)(iVar8 + 0x54);
  if (local_14 == (float *)0x0) {
    local_8 = 0.0;
    puVar13 = *(undefined4 **)(iVar8 + 0x48);
    for (uVar9 = *(int *)(this + 0x14) * 3 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar13 = 0;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    if (0 < *(int *)(this + 0x10)) {
      local_c = (void *)0x0;
      do {
        iVar8 = 2;
        do {
          piVar7 = *(int **)(this + 0x28);
          iVar8 = iVar8 + 2;
          pfVar10 = (float *)(piVar7[0x11] + (int)local_c);
          uVar9 = (uint)*(ushort *)
                         ((uint)*(byte *)(piVar7 + 1) * (int)local_8 + *piVar7 + -2 + iVar8);
          pfVar1 = (float *)(piVar7[0x12] + uVar9 * 0xc);
          *pfVar1 = *pfVar10 + *(float *)(piVar7[0x12] + uVar9 * 0xc);
          pfVar1[1] = pfVar10[1] + pfVar1[1];
          pfVar1[2] = pfVar10[2] + pfVar1[2];
        } while (iVar8 < 8);
        local_8 = (float)((int)local_8 + 1);
        local_c = (void *)((int)local_c + 0xc);
      } while ((int)local_8 < *(int *)(this + 0x10));
    }
    iVar8 = 0;
    if (0 < *(int *)(this + 0x14)) {
      iVar14 = 0;
      do {
        m3dNormalize((m3dV *)(*(int *)(*(int *)(this + 0x28) + 0x48) + iVar14));
        iVar8 = iVar8 + 1;
        iVar14 = iVar14 + 0xc;
      } while (iVar8 < *(int *)(this + 0x14));
    }
  }
  else if ((*(int *)(this + 0xbc) == 0) || ((*(uint *)(*(int *)(this + 0xbc) + 0xc) & 0x1000) != 0))
  {
    local_10 = *(undefined8 **)(iVar8 + 0x48);
    local_c = *(void **)(this + 0x14);
    poVar11 = this + 0x3c;
    if (m3dSimdType == 0) {
      fVar18 = (float)*(undefined8 *)poVar11;
      fVar19 = (float)((ulonglong)*(undefined8 *)poVar11 >> 0x20);
      fVar20 = (float)*(undefined8 *)(this + 0x44);
      uVar16 = *(undefined8 *)(this + 0x4c);
      fVar22 = fVar19 * fVar19;
      uVar17 = *(undefined8 *)(this + 0x54);
      uVar5 = *(undefined8 *)(this + 0x5c);
      auVar21._4_4_ = fVar18 * fVar18;
      auVar21._0_4_ = fVar20 * fVar20;
      auVar21._8_4_ = fVar22;
      auVar21._12_4_ = fVar22;
      uVar6 = *(undefined8 *)(this + 100);
      auVar23._4_12_ = auVar21._4_12_;
      auVar23._0_4_ = fVar20 * fVar20 + fVar22 + fVar18 * fVar18;
      auVar21 = rsqrtss(auVar23,auVar23);
      fVar22 = auVar21._0_4_;
      fVar22 = `private:_void___cdecl_objOBJ::TransformNormalList(class_m3dMATR*,struct_m3dV*,struct_m3dV*,int)'
               ::__l2::half * fVar22 *
               (`private:_void___cdecl_objOBJ::TransformNormalList(class_m3dMATR*,struct_m3dV*,struct_m3dV*,int)'
                ::__l2::three - auVar23._0_4_ * fVar22 * fVar22);
      do {
        fVar2 = *local_14;
        fVar3 = local_14[1];
        fVar4 = local_14[2];
        local_14 = local_14 + 3;
        *local_10 = CONCAT44(fVar2 * fVar19 * fVar22 +
                             fVar3 * (float)((ulonglong)uVar16 >> 0x20) * fVar22 +
                             fVar4 * (float)((ulonglong)uVar5 >> 0x20) * fVar22,
                             fVar2 * fVar18 * fVar22 + fVar3 * (float)uVar16 * fVar22 +
                             fVar4 * (float)uVar5 * fVar22);
        *(float *)(local_10 + 1) =
             fVar2 * fVar20 * fVar22 + fVar3 * (float)uVar17 * fVar22 +
             fVar4 * (float)uVar6 * fVar22;
        local_10 = (undefined8 *)((int)local_10 + 0xc);
        local_c = (void *)((int)local_c + -1);
      } while (local_c != (void *)0x0);
      return;
    }
    local_8 = *(float *)(this + 0x44) * *(float *)(this + 0x44) +
              *(float *)(this + 0x40) * *(float *)(this + 0x40) +
              *(float *)poVar11 * *(float *)poVar11;
    if (m3dSimdType == 0) {
      local_8 = local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar21 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
      fVar18 = auVar21._0_4_;
      local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar18 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar18 * fVar18) * local_8;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar15 = (ulonglong)(uint)local_8;
      uVar16 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar15);
      uVar17 = PackedFloatingMUL(uVar16,uVar16);
      uVar17 = PackedFloatingReciprocalSQRIter1(uVar17,uVar15);
      uVar16 = PackedFloatingReciprocalIter2(uVar17,uVar16);
      uVar16 = PackedFloatingMUL(uVar16,uVar15);
      local_8 = (float)uVar16;
      FastExitMediaState();
    }
    else {
      local_8 = SQRT(local_8);
    }
    fVar18 = ___real_3f800000 / local_8;
    pmVar12 = local_54;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(float *)pmVar12 = *(float *)poVar11;
      poVar11 = poVar11 + 4;
      pmVar12 = pmVar12 + 4;
    }
    local_8 = fVar18;
    m3dMATR::Scale(local_54,fVar18,fVar18,fVar18,2);
    m3dMATR::TransformVectorList
              (local_54,(int)local_54,local_c,(int)local_14,(void *)0xc,(int)local_10);
    return;
  }
  return;
}




/* from: engine:obj_normals.cpp
   addr: 004DBC60 */

void __thiscall objOBJ::CalcVertNormalsLCS(objOBJ *this)

{
  float *pfVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_4;
  
  puVar7 = *(undefined4 **)(*(int *)(this + 0x28) + 0x54);
  for (uVar3 = *(int *)(this + 0x14) * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  iVar4 = 0;
  if (0 < *(int *)(this + 0x10)) {
    local_4 = 0;
    do {
      iVar6 = 2;
      do {
        piVar2 = *(int **)(this + 0x28);
        iVar6 = iVar6 + 2;
        pfVar5 = (float *)(piVar2[0x14] + local_4);
        uVar3 = (uint)*(ushort *)((uint)*(byte *)(piVar2 + 1) * iVar4 + *piVar2 + -2 + iVar6);
        pfVar1 = (float *)(piVar2[0x15] + uVar3 * 0xc);
        *pfVar1 = *pfVar5 + *(float *)(piVar2[0x15] + uVar3 * 0xc);
        pfVar1[1] = pfVar5[1] + pfVar1[1];
        pfVar1[2] = pfVar5[2] + pfVar1[2];
      } while (iVar6 < 8);
      iVar4 = iVar4 + 1;
      local_4 = local_4 + 0xc;
    } while (iVar4 < *(int *)(this + 0x10));
  }
  iVar4 = 0;
  if (0 < *(int *)(this + 0x14)) {
    iVar6 = 0;
    do {
      m3dNormalize((m3dV *)(*(int *)(*(int *)(this + 0x28) + 0x54) + iVar6));
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar4 < *(int *)(this + 0x14));
  }
  return;
}




/* from: engine:obj_normals.cpp
   addr: 004DBD30 */

void __thiscall objOBJ::CalcFaceNormals(objOBJ *this,_func_int_objOBJ_ptr_void_ptr *param_1)

{
  uint uVar1;
  objOBJ *poVar2;
  bool bVar3;
  int iVar4;
  void *unaff_ESI;
  objOBJ *this_00;
  objOBJ *unaff_EDI;
  
  if ((this != (objOBJ *)0x0) &&
     ((uVar1 = *(uint *)(this + 8), (uVar1 & 0x1c) == 0 || ((uVar1 & 0xf000) != 0)))) {
    if ((*(int *)(this + 0x28) != 0) && (((uVar1 & 0x3f) == 0 || ((uVar1 & 0xf000) != 0)))) {
      iVar4 = (*param_1)(unaff_EDI,unaff_ESI);
      if (iVar4 != 0) {
        CalcFaceNormals(this);
      }
    }
    bVar3 = false;
    poVar2 = *(objOBJ **)(this + 0x38);
    for (this_00 = poVar2; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar2))));
        this_00 = *(objOBJ **)(this_00 + 0x30)) {
      CalcFaceNormals(this_00,param_1);
      bVar3 = true;
    }
  }
  return;
}




/* from: engine:obj_normals.cpp
   addr: 004DBDA0 */

void __thiscall objOBJ::CalcVertNormals(objOBJ *this,_func_int_objOBJ_ptr_void_ptr *param_1)

{
  uint uVar1;
  objOBJ *poVar2;
  bool bVar3;
  int iVar4;
  void *unaff_ESI;
  objOBJ *this_00;
  objOBJ *unaff_EDI;
  
  if ((this != (objOBJ *)0x0) &&
     ((uVar1 = *(uint *)(this + 8), (uVar1 & 0x1c) == 0 || ((uVar1 & 0xf000) != 0)))) {
    if ((*(int *)(this + 0x28) != 0) && (((uVar1 & 0x3f) == 0 || ((uVar1 & 0xf000) != 0)))) {
      iVar4 = (*param_1)(unaff_EDI,unaff_ESI);
      if (iVar4 != 0) {
        CalcVertNormals(this);
      }
    }
    bVar3 = false;
    poVar2 = *(objOBJ **)(this + 0x38);
    for (this_00 = poVar2; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar2))));
        this_00 = *(objOBJ **)(this_00 + 0x30)) {
      CalcVertNormals(this_00,param_1);
      bVar3 = true;
    }
  }
  return;
}




/* from: engine:obj_normals.cpp
   addr: 004DBE10 */

void __thiscall objOBJ::CalcVertPerpVectors(objOBJ *this)

{
  uint uVar1;
  objOBJ *poVar2;
  bool bVar3;
  objOBJ *this_00;
  
  if ((this != (objOBJ *)0x0) &&
     ((uVar1 = *(uint *)(this + 8), (uVar1 & 0x1c) == 0 || ((uVar1 & 0xf000) != 0)))) {
    if ((*(int *)(this + 0x28) != 0) && (((uVar1 & 0x3f) == 0 || ((uVar1 & 0xf000) != 0)))) {
      CalcVertPerpVectors(this);
    }
    bVar3 = false;
    poVar2 = *(objOBJ **)(this + 0x38);
    for (this_00 = poVar2; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar2))));
        this_00 = *(objOBJ **)(this_00 + 0x30)) {
      CalcVertPerpVectors(this_00);
      bVar3 = true;
    }
  }
  return;
}




/* from: engine:obj_normals.cpp
   addr: 004DBE70 */

void __thiscall objOBJ::CalcVertPerpVectors(objOBJ *this)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_4;
  
  if (*(int *)(*(int *)(this + 0x28) + 0x54) == 0) {
    if ((*(int *)(*(int *)(this + 0x28) + 0x48) != 0) ||
       (iVar3 = AllocVertNormalList(this,*(int *)(this + 0x14)), iVar3 != 0)) {
      puVar7 = *(undefined4 **)(*(int *)(this + 0x28) + 0x48);
      for (uVar4 = *(int *)(this + 0x14) * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      iVar3 = 0;
      if (0 < *(int *)(this + 0x10)) {
        local_4 = 0;
        do {
          iVar6 = 2;
          do {
            piVar2 = *(int **)(this + 0x28);
            iVar6 = iVar6 + 2;
            pfVar5 = (float *)(piVar2[0x11] + local_4);
            uVar4 = (uint)*(ushort *)((uint)*(byte *)(piVar2 + 1) * iVar3 + *piVar2 + -2 + iVar6);
            pfVar1 = (float *)(piVar2[0x12] + uVar4 * 0xc);
            *pfVar1 = *(float *)(piVar2[0x12] + uVar4 * 0xc) + *pfVar5;
            pfVar1[1] = pfVar5[1] + pfVar1[1];
            pfVar1[2] = pfVar5[2] + pfVar1[2];
          } while (iVar6 < 8);
          iVar3 = iVar3 + 1;
          local_4 = local_4 + 0xc;
        } while (iVar3 < *(int *)(this + 0x10));
      }
    }
    return;
  }
  CalcVertNormals(this);
  return;
}




/* from: engine:obj_normals.cpp
   addr: 004DBF40 */

void __thiscall objOBJ::NormalizeVertPerpVectors(objOBJ *this)

{
  uint uVar1;
  objOBJ *poVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  objOBJ *this_00;
  
  if ((this != (objOBJ *)0x0) &&
     ((uVar1 = *(uint *)(this + 8), (uVar1 & 0x1c) == 0 || ((uVar1 & 0xf000) != 0)))) {
    if ((*(int *)(this + 0x28) != 0) &&
       (((((uVar1 & 0x3f) == 0 || ((uVar1 & 0xf000) != 0)) &&
         ((*(int *)(*(int *)(this + 0x28) + 0x54) == 0 ||
          ((*(int *)(this + 0xbc) == 0 || ((*(uint *)(*(int *)(this + 0xbc) + 0xc) & 0x1000) != 0)))
          ))) && (iVar5 = 0, 0 < *(int *)(this + 0x14))))) {
      iVar4 = 0;
      do {
        m3dNormalize((m3dV *)(*(int *)(*(int *)(this + 0x28) + 0x48) + iVar4));
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar5 < *(int *)(this + 0x14));
    }
    bVar3 = false;
    poVar2 = *(objOBJ **)(this + 0x38);
    for (this_00 = poVar2; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar2))));
        this_00 = *(objOBJ **)(this_00 + 0x30)) {
      NormalizeVertPerpVectors(this_00);
      bVar3 = true;
    }
  }
  return;
}

