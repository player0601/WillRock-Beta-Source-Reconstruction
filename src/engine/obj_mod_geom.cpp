
/* from: engine:obj_mod_geom.cpp
   addr: 004E2C40 */

objMOD_GEOM * __thiscall objMOD_GEOM::objMOD_GEOM(objMOD_GEOM *this,ulong param_1,int param_2)

{
  objMODIFIER::objMODIFIER((objMODIFIER *)this,param_1,param_2);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x14) = 0x200;
  return this;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E2C70
   addr: 004E2C70 */

void * __thiscall objMOD_GEOM::_scalar_deleting_destructor_(objMOD_GEOM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x1c));
  apFree(*(void **)(this + 0x20));
  objMODIFIER::~objMODIFIER((objMODIFIER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E2CB0 */

void __thiscall objMOD_GEOM::~objMOD_GEOM(objMOD_GEOM *this)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x1c));
  apFree(*(void **)(this + 0x20));
  objMODIFIER::~objMODIFIER((objMODIFIER *)this);
  return;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E2CE0 */

int __thiscall objMOD_GEOM::AddObj(objMOD_GEOM *this,objOBJ *param_1)

{
  int iVar1;
  
  iVar1 = objMODIFIER::AddObj((objMODIFIER *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = objOBJ::UnshareVertList(*(objOBJ **)(this + 0x18));
  if (iVar1 == 0) {
    return 0;
  }
  objOBJ::FreeNormalListLCS(*(objOBJ **)(this + 0x18));
  objOBJ::FreeVertNormalListLCS(*(objOBJ **)(this + 0x18));
  *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
       *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x20;
  return 1;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E2D30 */

int __thiscall objMOD_GEOM::StoreIniVert(objMOD_GEOM *this,objOBJ *param_1,int param_2,int param_3)

{
  objOBJ *poVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  void *pvVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  float *pfVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_10;
  int local_c;
  
  if (param_2 != 0) {
    puVar5 = (undefined4 *)apRealloc(*(void **)(this + 0x1c),*(int *)(param_1 + 0x14) * 0xc);
    *(undefined4 **)(this + 0x1c) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      return 0;
    }
    puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x28) + 0x40);
    for (uVar9 = *(int *)(param_1 + 0x14) * 3 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar5 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  if (param_3 != 0) {
    pvVar6 = apRealloc(*(void **)(this + 0x20),*(int *)(param_1 + 0x14) * 0xc);
    *(void **)(this + 0x20) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      return 0;
    }
    if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
      animINST::Validate(*(animINST **)(param_1 + 0xbc),0x200);
    }
    local_c = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      local_10 = 0;
      do {
        pfVar7 = (float *)(*(int *)(this + 0x20) + local_10);
        if (((byte)*param_1 & 1) == 0) {
          poVar1 = param_1 + 0x3c;
          pfVar14 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + local_10);
          if (m3dSimdType == 0) {
            if (((uint)poVar1 & 0xf) == 0) {
              fVar25 = *pfVar14;
              fVar3 = pfVar14[1];
              fVar4 = pfVar14[2];
              fVar23 = fVar25 * *(float *)poVar1 + *(float *)(param_1 + 0x6c) +
                       fVar3 * *(float *)(param_1 + 0x4c) + fVar4 * *(float *)(param_1 + 0x5c);
              fVar24 = fVar25 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x70) +
                       fVar3 * *(float *)(param_1 + 0x50) + fVar4 * *(float *)(param_1 + 0x60);
              fVar25 = fVar25 * *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x74) +
                       fVar3 * *(float *)(param_1 + 0x54) + fVar4 * *(float *)(param_1 + 100);
            }
            else {
              fVar25 = *pfVar14;
              fVar3 = pfVar14[1];
              fVar4 = pfVar14[2];
              fVar23 = fVar25 * (float)*(undefined8 *)poVar1 +
                       fVar3 * (float)*(undefined8 *)(param_1 + 0x4c) +
                       fVar4 * (float)*(undefined8 *)(param_1 + 0x5c) +
                       (float)*(undefined8 *)(param_1 + 0x6c);
              fVar24 = fVar25 * (float)((ulonglong)*(undefined8 *)poVar1 >> 0x20) +
                       fVar3 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) +
                       fVar4 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x5c) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(param_1 + 0x6c) >> 0x20);
              fVar25 = fVar25 * (float)*(undefined8 *)(param_1 + 0x44) +
                       fVar3 * (float)*(undefined8 *)(param_1 + 0x54) +
                       fVar4 * (float)*(undefined8 *)(param_1 + 100) +
                       (float)*(undefined8 *)(param_1 + 0x74);
            }
            *(ulonglong *)pfVar7 = CONCAT44(fVar24,fVar23);
            pfVar7[2] = fVar25;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar15 = (undefined4)*(undefined8 *)pfVar14;
            uVar18 = CONCAT44(uVar15,uVar15);
            uVar15 = (undefined4)((ulonglong)*(undefined8 *)pfVar14 >> 0x20);
            uVar21 = CONCAT44(uVar15,uVar15);
            uVar22 = CONCAT44(pfVar14[2],pfVar14[2]);
            uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)poVar1);
            uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(param_1 + 0x4c));
            uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_1 + 0x5c));
            uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(param_1 + 0x6c));
            uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_1 + 0x44));
            uVar18 = PackedFloatingADD(uVar17,uVar19);
            uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(param_1 + 0x54));
            uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_1 + 100));
            uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(param_1 + 0x74));
            uVar18 = PackedFloatingADD(uVar16,uVar18);
            uVar16 = PackedFloatingADD(uVar17,uVar22);
            *(undefined8 *)pfVar7 = uVar18;
            uVar18 = PackedFloatingADD(uVar21,uVar16);
            pfVar7[2] = (float)uVar18;
            FastExitMediaState();
          }
          else {
            iVar10 = 0;
            pfVar8 = pfVar7;
            do {
              iVar11 = 0;
              *pfVar8 = 0.0;
              pfVar12 = (float *)(((int)poVar1 - (int)pfVar7) + (int)pfVar8);
              do {
                pfVar2 = pfVar14 + iVar11;
                fVar25 = *pfVar12;
                iVar11 = iVar11 + 1;
                pfVar12 = pfVar12 + 4;
                *pfVar8 = *pfVar2 * fVar25 + *pfVar8;
              } while (iVar11 < 3);
              iVar11 = iVar10 + iVar11 * 4;
              iVar10 = iVar10 + 1;
              *pfVar8 = *(float *)(poVar1 + iVar11 * 4) + *pfVar8;
              pfVar8 = pfVar8 + 1;
            } while (iVar10 < 3);
          }
        }
        else {
          pfVar14 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + local_10);
          *pfVar7 = *pfVar14;
          pfVar7[1] = pfVar14[1];
          pfVar7[2] = pfVar14[2];
        }
        local_c = local_c + 1;
        local_10 = local_10 + 0xc;
      } while (local_c < *(int *)(param_1 + 0x14));
    }
  }
  return 1;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E2FC0 */

objMOD_SKIN * __thiscall objMOD_SKIN::objMOD_SKIN(objMOD_SKIN *this)

{
  objMODIFIER::objMODIFIER((objMODIFIER *)this,0x534b494e,10);
  *(undefined4 *)(this + 0x14) = 0x200;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x10) = 4;
  return this;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E3010 */

int __thiscall objMOD_SKIN::Init(objMOD_SKIN *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  *(int *)(this + 0x2c) = param_2;
  *(int *)(this + 0x24) = param_1;
  *(int *)(this + 0x38) = param_3;
  if (param_4 != 0) {
    pvVar2 = apCalloc(param_1,4);
    *(void **)(this + 0x28) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  pvVar2 = apCalloc(*(uint *)(this + 0x24),4);
  *(void **)(this + 0x30) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar2 = apCalloc(*(uint *)(this + 0x2c),8);
  *(void **)(this + 0x34) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar2 = apCalloc(*(uint *)(this + 0x38),0x50);
  *(void **)(this + 0x3c) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    iVar4 = 0;
    if (0 < *(int *)(this + 0x38)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(this + 0x3c);
        pvVar2 = apMalloc(*(int *)(this + 0x2c) * 0xc);
        *(void **)(iVar1 + iVar3 + 0x44) = pvVar2;
        if (pvVar2 == (void *)0x0) {
          return 0;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x50;
      } while (iVar4 < *(int *)(this + 0x38));
    }
    return 1;
  }
  return 0;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E30F0 */

int __thiscall
objMOD_SKIN::Squeeze(objMOD_SKIN *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  byte *pbVar4;
  
  if (param_4 == 0) {
    apFree(*(void **)(this + 0x28));
    *(undefined4 *)(this + 0x28) = 0;
  }
  else {
    pvVar2 = apRealloc(*(void **)(this + 0x28),param_1 * 4);
    *(void **)(this + 0x28) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  pvVar2 = apRealloc(*(void **)(this + 0x30),param_1 * 4);
  *(void **)(this + 0x30) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  *(int *)(this + 0x24) = param_1;
  pvVar2 = apRealloc(*(void **)(this + 0x34),param_2 * 8);
  *(void **)(this + 0x34) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  *(int *)(this + 0x2c) = param_2;
  param_4 = param_3;
  if (param_3 < *(int *)(this + 0x38)) {
    iVar3 = param_3 * 0x50;
    do {
      pbVar4 = (byte *)(*(int *)(this + 0x3c) + iVar3);
      if ((*pbVar4 & 4) == 0) {
        apFree(*(void **)(pbVar4 + 0x44));
        pbVar4[0x44] = 0;
        pbVar4[0x45] = 0;
        pbVar4[0x46] = 0;
        pbVar4[0x47] = 0;
        if (*(int **)(pbVar4 + 0x4c) != (int *)0x0) {
          (**(code **)(**(int **)(pbVar4 + 0x4c) + 4))(1);
        }
        pbVar4[0x4c] = 0;
        pbVar4[0x4d] = 0;
        pbVar4[0x4e] = 0;
        pbVar4[0x4f] = 0;
      }
      param_4 = param_4 + 1;
      iVar3 = iVar3 + 0x50;
    } while (param_4 < *(int *)(this + 0x38));
  }
  pvVar2 = apRealloc(*(void **)(this + 0x3c),param_3 * 0x50);
  iVar3 = 0;
  *(void **)(this + 0x3c) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    param_4 = 0;
    if (0 < param_3) {
      do {
        iVar1 = *(int *)(this + 0x3c);
        pvVar2 = apRealloc(*(void **)(iVar1 + iVar3 + 0x44),*(int *)(this + 0x2c) * 0xc);
        *(void **)(iVar1 + iVar3 + 0x44) = pvVar2;
        if (pvVar2 == (void *)0x0) {
          return 0;
        }
        iVar3 = iVar3 + 0x50;
        param_4 = param_4 + 1;
      } while (param_4 < param_3);
    }
    *(int *)(this + 0x38) = param_3;
    return 1;
  }
  return 0;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E3250 */

objMODIFIER * __thiscall objMOD_SKIN::Duplicate(objMOD_SKIN *this,int param_1)

{
  int *piVar1;
  objMODIFIER *this_00;
  void *pvVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_4;
  
  this_00 = (objMODIFIER *)operator_new(0x44);
  if (this_00 == (objMODIFIER *)0x0) {
    return (objMODIFIER *)0x0;
  }
  objMODIFIER::objMODIFIER(this_00,0x534b494e,10);
  *(undefined4 *)(this_00 + 0x1c) = 0;
  *(undefined4 *)(this_00 + 0x20) = 0;
  *(undefined4 *)(this_00 + 0x14) = 0x200;
  *(undefined4 *)(this_00 + 0x24) = 0;
  *(undefined4 *)(this_00 + 0x28) = 0;
  *(undefined4 *)(this_00 + 0x2c) = 0;
  *(undefined4 *)(this_00 + 0x30) = 0;
  *(undefined4 *)(this_00 + 0x34) = 0;
  *(undefined4 *)(this_00 + 0x38) = 0;
  *(undefined4 *)(this_00 + 0x3c) = 0;
  *(undefined4 *)(this_00 + 0x40) = 0x3f800000;
  *(undefined ***)this_00 = &_vftable_;
  *(undefined4 *)(this_00 + 0x10) = 4;
  *(undefined4 *)(this_00 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(this_00 + 0x40) = *(undefined4 *)(this + 0x40);
  if (param_1 == 0) {
    iVar7 = Init((objMOD_SKIN *)this_00,*(int *)(this + 0x24),*(int *)(this + 0x2c),
                 *(int *)(this + 0x38),(uint)(*(int *)(this + 0x28) != 0));
    if (iVar7 == 0) {
      return (objMODIFIER *)0x0;
    }
    if (*(undefined4 **)(this + 0x28) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(this + 0x28);
      puVar9 = *(undefined4 **)(this_00 + 0x28);
      for (uVar6 = *(uint *)(this + 0x24) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    puVar8 = *(undefined4 **)(this + 0x30);
    puVar9 = *(undefined4 **)(this_00 + 0x30);
    for (uVar6 = *(uint *)(this + 0x24) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    param_1 = 0;
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    puVar8 = *(undefined4 **)(this + 0x34);
    puVar9 = *(undefined4 **)(this_00 + 0x34);
    for (uVar6 = (uint)(*(int *)(this + 0x2c) << 3) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    if (0 < *(int *)(this + 0x38)) {
      local_4 = 0;
      do {
        puVar8 = *(undefined4 **)(local_4 + 0x44 + *(int *)(this + 0x3c));
        puVar9 = *(undefined4 **)(local_4 + 0x44 + *(int *)(this_00 + 0x3c));
        for (uVar6 = *(int *)(this + 0x2c) * 3 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(undefined4 *)(local_4 + 0x48 + *(int *)(this_00 + 0x3c)) =
             *(undefined4 *)(local_4 + 0x48 + *(int *)(this + 0x3c));
        piVar1 = *(int **)(local_4 + 0x4c + *(int *)(this + 0x3c));
        if (piVar1 == (int *)0x0) {
          *(undefined4 *)(local_4 + 0x4c + *(int *)(this_00 + 0x3c)) = 0;
        }
        else {
          uVar4 = (**(code **)(*piVar1 + 0x1c))();
          *(undefined4 *)(local_4 + 0x4c + *(int *)(this_00 + 0x3c)) = uVar4;
          if (*(int *)(local_4 + 0x4c + *(int *)(this_00 + 0x3c)) == 0) {
            return (objMODIFIER *)0x0;
          }
        }
        puVar3 = (uint *)(*(int *)(this_00 + 0x3c) + local_4);
        local_4 = local_4 + 0x50;
        *puVar3 = *puVar3 & 0xfffffffb;
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(this + 0x38));
    }
    *(uint *)(this_00 + 4) = *(uint *)(this_00 + 4) & 0xfffffffb;
  }
  else {
    *(undefined4 *)(this_00 + 0x38) = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(this_00 + 0x24) = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this_00 + 0x30) = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(this_00 + 0x34) = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
    *(uint *)(this_00 + 4) = *(uint *)(this_00 + 4) | 4;
    pvVar2 = apMalloc(*(int *)(this + 0x38) * 0x50);
    *(void **)(this_00 + 0x3c) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return (objMODIFIER *)0x0;
    }
    param_1 = 0;
    if (0 < *(int *)(this + 0x38)) {
      iVar7 = 0;
      do {
        puVar8 = (undefined4 *)(*(int *)(this + 0x3c) + iVar7);
        puVar9 = (undefined4 *)(*(int *)(this_00 + 0x3c) + iVar7);
        for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar3 = (uint *)(*(int *)(this_00 + 0x3c) + iVar7);
        iVar7 = iVar7 + 0x50;
        *puVar3 = *puVar3 | 4;
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(this + 0x38));
      return this_00;
    }
  }
  return this_00;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_geom.cpp
   addr: 004E34C0 */

objMOD_SKIN * __thiscall
objMOD_SKIN::Rebuild
          (objMOD_SKIN *this,m3dV *param_1,m3dMATR *param_2,int param_3,m3dV *param_4,
          m3dMATR *param_5)

{
  float fVar1;
  float fVar2;
  objMODIFIER *this_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  m3dMATR *pmVar10;
  int iVar11;
  m3dV *pmVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  m3dMATR local_6c [48];
  float local_3c [3];
  m3dV amStack_30 [4];
  m3dV local_2c [12];
  int local_20;
  m3dMATR *local_1c;
  m3dV *local_18;
  m3dV *local_14;
  int local_10;
  int local_c;
  objMOD_SKIN *local_8;
  
  local_8 = this;
  this_00 = (objMODIFIER *)operator_new(0x44);
  iVar11 = 0;
  if (this_00 != (objMODIFIER *)0x0) {
    objMODIFIER::objMODIFIER(this_00,0x534b494e,10);
    *(undefined4 *)(this_00 + 0x1c) = 0;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0x200;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined4 *)(this_00 + 0x34) = 0;
    *(undefined4 *)(this_00 + 0x38) = 0;
    *(undefined4 *)(this_00 + 0x3c) = 0;
    *(undefined4 *)(this_00 + 0x40) = 0x3f800000;
    *(undefined ***)this_00 = &_vftable_;
    *(undefined4 *)(this_00 + 0x10) = 4;
    iVar3 = Init((objMOD_SKIN *)this_00,param_3,*(int *)(this + 0x2c),*(int *)(this + 0x38),0);
    if (iVar3 != 0) {
      local_c = 0;
      if (0 < *(int *)(this_00 + 0x38)) {
        do {
          apNAME::SetName((apNAME *)(iVar11 + 4 + *(int *)(this_00 + 0x3c)),
                          (char *)(*(int *)(this + 0x3c) + 4 + iVar11));
          *(undefined4 *)(iVar11 + 0x48 + *(int *)(this_00 + 0x3c)) =
               *(undefined4 *)(*(int *)(this + 0x3c) + 0x48 + iVar11);
          piVar7 = *(int **)(*(int *)(this + 0x3c) + 0x4c + iVar11);
          if (piVar7 != (int *)0x0) {
            uVar4 = (**(code **)(*piVar7 + 0x1c))();
            *(undefined4 *)(iVar11 + 0x4c + *(int *)(this_00 + 0x3c)) = uVar4;
            if (*(int *)(iVar11 + 0x4c + *(int *)(this_00 + 0x3c)) == 0) {
              return (objMOD_SKIN *)0x0;
            }
          }
          local_c = local_c + 1;
          iVar11 = iVar11 + 0x50;
        } while (local_c < *(int *)(this_00 + 0x38));
      }
      m3dMATR::Invert(param_2,local_6c);
      m3dMATR::Transform(local_6c,param_5,1);
      pmVar10 = (m3dMATR *)0x0;
      param_5 = (m3dMATR *)0x0;
      param_2 = (m3dMATR *)0x0;
      if (0 < param_3) {
        local_18 = local_2c;
        local_1c = local_6c;
        local_14 = param_4;
        do {
          pmVar12 = local_18;
          if (m3dSimdType == 0) {
            if (((uint)local_1c & 0xf) == 0) {
              fVar22 = *(float *)local_14;
              fVar2 = *(float *)(local_14 + 4);
              fVar1 = *(float *)(local_14 + 8);
              fVar20 = fVar22 * *(float *)local_1c + *(float *)(local_1c + 0x30) +
                       fVar2 * *(float *)(local_1c + 0x10) + fVar1 * *(float *)(local_1c + 0x20);
              fVar21 = fVar22 * *(float *)(local_1c + 4) + *(float *)(local_1c + 0x34) +
                       fVar2 * *(float *)(local_1c + 0x14) + fVar1 * *(float *)(local_1c + 0x24);
              fVar22 = fVar22 * *(float *)(local_1c + 8) + *(float *)(local_1c + 0x38) +
                       fVar2 * *(float *)(local_1c + 0x18) + fVar1 * *(float *)(local_1c + 0x28);
            }
            else {
              fVar22 = *(float *)local_14;
              fVar2 = *(float *)(local_14 + 4);
              fVar1 = *(float *)(local_14 + 8);
              fVar20 = fVar22 * (float)*(undefined8 *)local_1c +
                       fVar2 * (float)*(undefined8 *)(local_1c + 0x10) +
                       fVar1 * (float)*(undefined8 *)(local_1c + 0x20) +
                       (float)*(undefined8 *)(local_1c + 0x30);
              fVar21 = fVar22 * (float)((ulonglong)*(undefined8 *)local_1c >> 0x20) +
                       fVar2 * (float)((ulonglong)*(undefined8 *)(local_1c + 0x10) >> 0x20) +
                       fVar1 * (float)((ulonglong)*(undefined8 *)(local_1c + 0x20) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(local_1c + 0x30) >> 0x20);
              fVar22 = fVar22 * (float)*(undefined8 *)(local_1c + 8) +
                       fVar2 * (float)*(undefined8 *)(local_1c + 0x18) +
                       fVar1 * (float)*(undefined8 *)(local_1c + 0x28) +
                       (float)*(undefined8 *)(local_1c + 0x38);
            }
            *(ulonglong *)local_18 = CONCAT44(fVar21,fVar20);
            *(float *)(local_18 + 8) = fVar22;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar4 = (undefined4)*(undefined8 *)local_14;
            uVar15 = CONCAT44(uVar4,uVar4);
            uVar4 = (undefined4)((ulonglong)*(undefined8 *)local_14 >> 0x20);
            uVar18 = CONCAT44(uVar4,uVar4);
            uVar19 = CONCAT44(*(float *)(local_14 + 8),*(float *)(local_14 + 8));
            uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)local_1c);
            uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_1c + 0x10));
            uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_1c + 0x20));
            uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(local_1c + 0x30));
            uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(local_1c + 8));
            uVar15 = PackedFloatingADD(uVar14,uVar16);
            uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_1c + 0x18));
            uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_1c + 0x28));
            uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(local_1c + 0x38));
            uVar15 = PackedFloatingADD(uVar13,uVar15);
            uVar13 = PackedFloatingADD(uVar14,uVar19);
            *(undefined8 *)local_18 = uVar15;
            uVar15 = PackedFloatingADD(uVar18,uVar13);
            *(int *)(pmVar12 + 8) = (int)uVar15;
            FastExitMediaState();
          }
          else {
            iVar11 = 0;
            do {
              iVar3 = 0;
              pfVar6 = local_3c + iVar11 + -0xc;
              *(undefined4 *)(local_2c + iVar11 * 4) = 0;
              fVar22 = ___real_00000000;
              do {
                iVar8 = iVar3 * 4;
                fVar2 = *pfVar6;
                iVar3 = iVar3 + 1;
                pfVar6 = pfVar6 + 4;
                fVar22 = *(float *)(local_14 + iVar8) * fVar2 + fVar22;
              } while (iVar3 < 3);
              iVar3 = iVar11 + iVar3 * 4;
              iVar11 = iVar11 + 1;
              *(float *)(local_2c + iVar11 * 4 + -4) = fVar22 + local_3c[iVar3 + -0xc];
            } while (iVar11 < 3);
          }
          iVar11 = m3dGetClosestVert(*(int *)(local_8 + 0x24),param_1,local_2c);
          iVar3 = 0;
          if (0 < iVar11) {
            piVar7 = *(int **)(local_8 + 0x30);
            iVar8 = iVar11;
            do {
              iVar3 = iVar3 + *piVar7;
              piVar7 = piVar7 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          if (*(int *)(this_00 + 0x2c) <
              (int)(pmVar10 + *(int *)(*(int *)(local_8 + 0x30) + iVar11 * 4))) {
            iVar8 = *(int *)(local_8 + 0x38);
            iVar23 = 0;
            iVar5 = ftol();
            iVar8 = Squeeze((objMOD_SKIN *)this_00,param_3,iVar5,iVar8,iVar23);
            if (iVar8 == 0) {
              return (objMOD_SKIN *)0x0;
            }
          }
          local_c = 0;
          *(undefined4 *)(*(int *)(this_00 + 0x30) + (int)param_2 * 4) =
               *(undefined4 *)(*(int *)(local_8 + 0x30) + iVar11 * 4);
          if (0 < *(int *)(*(int *)(this_00 + 0x30) + (int)param_2 * 4)) {
            param_4 = (m3dV *)((int)pmVar10 * 0xc);
            local_10 = iVar3 * 0xc;
            local_20 = iVar3 * 8;
            do {
              iVar11 = *(int *)(local_8 + 0x34);
              iVar3 = *(int *)(this_00 + 0x34);
              *(undefined4 *)(iVar3 + (int)pmVar10 * 8) = *(undefined4 *)(local_20 + iVar11);
              *(undefined4 *)(iVar3 + 4 + (int)pmVar10 * 8) = *(undefined4 *)(local_20 + 4 + iVar11)
              ;
              iVar11 = 0;
              if (0 < *(int *)(this_00 + 0x38)) {
                iVar3 = 0;
                do {
                  puVar9 = (undefined4 *)
                           (*(int *)(iVar3 + 0x44 + *(int *)(local_8 + 0x3c)) + local_10);
                  pmVar12 = param_4 + *(int *)(iVar3 + 0x44 + *(int *)(this_00 + 0x3c));
                  iVar11 = iVar11 + 1;
                  *(undefined4 *)pmVar12 = *puVar9;
                  *(undefined4 *)(pmVar12 + 4) = puVar9[1];
                  *(undefined4 *)(pmVar12 + 8) = puVar9[2];
                  iVar3 = iVar3 + 0x50;
                  pmVar10 = param_5;
                } while (iVar11 < *(int *)(this_00 + 0x38));
              }
              pmVar10 = pmVar10 + 1;
              param_4 = param_4 + 0xc;
              local_10 = local_10 + 0xc;
              local_c = local_c + 1;
              local_20 = local_20 + 8;
              param_5 = pmVar10;
            } while (local_c < *(int *)(*(int *)(this_00 + 0x30) + (int)param_2 * 4));
          }
          param_2 = param_2 + 1;
          local_14 = local_14 + 0xc;
        } while ((int)param_2 < param_3);
      }
      iVar11 = Squeeze((objMOD_SKIN *)this_00,param_3,(int)pmVar10,*(int *)(local_8 + 0x38),0);
      return (objMOD_SKIN *)(-(uint)(iVar11 != 0) & (uint)this_00);
    }
  }
  return (objMOD_SKIN *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_geom.cpp
   addr: 004E38C0 */

int __thiscall objMOD_SKIN::Reduce(objMOD_SKIN *this,float param_1)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float unaff_retaddr;
  int iVar10;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_44;
  int iStack_3c;
  undefined **ppuStack_34;
  undefined **local_30;
  void *local_2c;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = _m3dVZero;
  iVar9 = 0;
  local_1c = 4;
  local_2c = (void *)0x0;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 1;
  local_c = DAT_00963740;
  local_8 = DAT_00963744;
  local_4 = 0;
  local_30 = &cgmSEARCH_VLIST::_vftable_;
  if ((*(uint *)(this + 4) & 0x4000) != 0) {
    local_30 = &cgmSEARCH::_vftable_;
    operator_delete((void *)0x0);
    return 0;
  }
  puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0xc))();
  if (puVar3 != (undefined4 *)0x0) {
    iVar7 = 0;
    iVar10 = 0;
    iStack_54 = 0;
    iStack_3c = 0;
    if (0 < *(int *)(this + 0x24)) {
      do {
        iVar7 = cgmSEARCH_VLIST::Init
                          ((cgmSEARCH_VLIST *)&ppuStack_34,*(int *)(iVar9 + puVar3[0xc]),8,
                           (void *)(puVar3[0xd] + iVar10 * 8),(int *)0x0);
        fVar2 = ___real_00000000;
        if (iVar7 == 0) goto LAB_004e394e;
        *(undefined4 *)(iVar9 + *(int *)(this + 0x30)) = 0;
        iVar7 = puVar3[0xc];
        iStack_44 = 0;
        if (0 < *(int *)(iVar9 + iVar7)) {
          iVar8 = iStack_54 << 3;
          iStack_50 = iStack_54 * 0xc;
          do {
            iVar7 = *(int *)((int)local_28 + (*(int *)(iVar9 + iVar7) - iStack_44) * 4 + -4) +
                    iVar10;
            if ((0 < iStack_44) && (*(float *)(puVar3[0xd] + 4 + iVar7 * 8) < unaff_retaddr)) break;
            iVar4 = puVar3[0xd];
            iVar1 = *(int *)(this + 0x34);
            *(undefined4 *)(iVar1 + iVar8) = *(undefined4 *)(iVar4 + iVar7 * 8);
            *(undefined4 *)(iVar1 + 4 + iVar8) = *(undefined4 *)(iVar4 + 4 + iVar7 * 8);
            iStack_4c = 0;
            if (0 < *(int *)(this + 0x38)) {
              iVar4 = 0;
              do {
                puVar6 = (undefined4 *)(*(int *)(iVar4 + 0x44 + puVar3[0xf]) + iVar7 * 0xc);
                puVar5 = (undefined4 *)(*(int *)(iVar4 + 0x44 + *(int *)(this + 0x3c)) + iStack_50);
                *puVar5 = *puVar6;
                puVar5[1] = puVar6[1];
                puVar5[2] = puVar6[2];
                iStack_4c = iStack_4c + 1;
                iVar4 = iVar4 + 0x50;
              } while (iStack_4c < *(int *)(this + 0x38));
            }
            fVar2 = fVar2 + *(float *)(*(int *)(this + 0x34) + 4 + iVar8);
            iVar8 = iVar8 + 8;
            iStack_44 = iStack_44 + 1;
            *(int *)(iVar9 + *(int *)(this + 0x30)) = *(int *)(iVar9 + *(int *)(this + 0x30)) + 1;
            iVar7 = puVar3[0xc];
            iStack_50 = iStack_50 + 0xc;
          } while (iStack_44 < *(int *)(iVar9 + iVar7));
        }
        iVar7 = 0;
        if (0 < *(int *)(iVar9 + *(int *)(this + 0x30))) {
          fVar2 = ___real_3f800000 / fVar2;
          iVar8 = iStack_54 * 8;
          do {
            iVar7 = iVar7 + 1;
            iVar4 = iVar8 + 4;
            iVar1 = iVar8 + 4;
            iVar8 = iVar8 + 8;
            *(float *)(iVar1 + *(int *)(this + 0x34)) =
                 fVar2 * *(float *)(iVar4 + *(int *)(this + 0x34));
          } while (iVar7 < *(int *)(iVar9 + *(int *)(this + 0x30)));
        }
        iVar10 = iVar10 + *(int *)(iVar9 + puVar3[0xc]);
        iVar7 = iStack_54 + *(int *)(iVar9 + *(int *)(this + 0x30));
        cgmSEARCH_VLIST::Term((cgmSEARCH_VLIST *)&ppuStack_34);
        iStack_3c = iStack_3c + 1;
        iVar9 = iVar9 + 4;
        iStack_54 = iVar7;
      } while (iStack_3c < *(int *)(this + 0x24));
    }
    apMsg(s_Skin__s_reduction___d_points_wer,*(undefined4 *)(*(int *)(this + 0x18) + 0x18),
          puVar3[0xb] - iVar7);
    Squeeze(this,*(int *)(this + 0x24),iVar7,*(int *)(this + 0x38),0);
    (**(code **)*puVar3)(1);
    operator_delete(local_2c);
    return 1;
  }
LAB_004e394e:
  ppuStack_34 = &cgmSEARCH::_vftable_;
  operator_delete(local_28);
  return 0;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E3B90 */

int __thiscall objMOD_SKIN::Check1Bone(objMOD_SKIN *this)

{
  int iVar1;
  
  if ((*(uint *)(this + 4) & 0x4000) == 0) {
    iVar1 = 0;
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000;
    if (0 < *(int *)(this + 0x24)) {
      do {
        if (1 < *(int *)(*(int *)(this + 0x30) + iVar1 * 4)) {
          *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffeffff;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x24));
    }
    return *(uint *)(this + 4) & 0x10000;
  }
  return 0;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E3BE0 */

int __thiscall objMOD_SKIN::Reorder(objMOD_SKIN *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iStack_34;
  int iStack_30;
  int iStack_28;
  undefined **ppuStack_24;
  undefined **local_20;
  void *local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = (void *)0x0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 4;
  local_20 = &cgmSEARCH_INT_LIST::_vftable_;
  puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0xc))(0);
  if (puVar3 != (undefined4 *)0x0) {
    if ((puVar3[1] & 0x4000) == 0) {
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x4000;
    }
    else {
      *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffbfff;
    }
    iVar4 = cgmSEARCH::Init((cgmSEARCH *)&ppuStack_24,puVar3[0xb],8,(void *)puVar3[0xd],(int *)0x0);
    if (iVar4 != 0) {
      iVar2 = puVar3[0xb];
      iVar5 = 0;
      iVar4 = 1;
      if (0 < iVar2) {
        do {
          if ((0 < iVar5) &&
             (*(int *)(puVar3[0xd] + *(int *)((int)local_18 + iVar5 * 4 + -4) * 8) !=
              *(int *)(puVar3[0xd] + *(int *)((int)local_18 + iVar5 * 4) * 8))) {
            iVar4 = iVar4 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
      Squeeze(this,iVar4,iVar2,puVar3[0xe],*(uint *)(this + 4) & 0x4000);
      if ((*(uint *)(this + 4) & 0x4000) != 0) {
        iStack_28 = 0;
        iStack_30 = 0;
        if (0 < iVar4) {
          do {
            *(undefined4 *)(*(int *)(this + 0x28) + iStack_30 * 4) =
                 *(undefined4 *)(puVar3[0xd] + *(int *)((int)local_18 + iStack_28 * 4) * 8);
            *(undefined4 *)(*(int *)(this + 0x30) + iStack_30 * 4) = 0;
            iStack_34 = iStack_28 * 0xc;
            do {
              iVar2 = *(int *)((int)local_18 + iStack_28 * 4);
              iVar7 = 0;
              iVar6 = 0;
              iVar5 = *(int *)(*(int *)(this + 0x18) + 0x14);
              if (0 < iVar5) {
                do {
                  if ((iVar7 <= iVar2) && (iVar2 < *(int *)(puVar3[0xc] + iVar6 * 4) + iVar7))
                  break;
                  iVar7 = iVar7 + *(int *)(puVar3[0xc] + iVar6 * 4);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar5);
              }
              if (iVar6 < iVar5) {
                *(int *)(*(int *)(this + 0x34) + iStack_28 * 8) = iVar6;
                *(undefined4 *)(*(int *)(this + 0x34) + 4 + iStack_28 * 8) =
                     *(undefined4 *)(puVar3[0xd] + 4 + iVar2 * 8);
                iVar5 = 0;
                if (0 < *(int *)(this + 0x38)) {
                  iVar6 = 0;
                  do {
                    puVar9 = (undefined4 *)(*(int *)(iVar6 + 0x44 + puVar3[0xf]) + iVar2 * 0xc);
                    puVar8 = (undefined4 *)
                             (*(int *)(iVar6 + 0x44 + *(int *)(this + 0x3c)) + iStack_34);
                    iVar5 = iVar5 + 1;
                    *puVar8 = *puVar9;
                    puVar8[1] = puVar9[1];
                    puVar8[2] = puVar9[2];
                    iVar6 = iVar6 + 0x50;
                  } while (iVar5 < *(int *)(this + 0x38));
                }
                piVar1 = (int *)(*(int *)(this + 0x30) + iStack_30 * 4);
                *piVar1 = *piVar1 + 1;
              }
              iStack_28 = iStack_28 + 1;
              iStack_34 = iStack_34 + 0xc;
            } while ((iStack_28 != puVar3[0xb]) &&
                    (*(int *)(puVar3[0xd] + *(int *)((int)local_18 + iStack_28 * 4 + -4) * 8) ==
                     *(int *)(puVar3[0xd] + *(int *)((int)local_18 + iStack_28 * 4) * 8)));
            iStack_30 = iStack_30 + 1;
          } while (iStack_30 < iVar4);
        }
      }
      cgmSEARCH::Term((cgmSEARCH *)&ppuStack_24);
      (**(code **)*puVar3)(1);
      operator_delete(local_1c);
      return 1;
    }
  }
  ppuStack_24 = &cgmSEARCH::_vftable_;
  operator_delete(local_18);
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_geom.cpp
   addr: 004E3E50 */

void __thiscall objMOD_SKIN::Animate(objMOD_SKIN *this,int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int local_c;
  int local_8;
  float local_4;
  
  iVar3 = 0;
  local_8 = 0;
  if (0 < *(int *)(this + 0x38)) {
    do {
      if ((*(int *)(*(int *)(this + 0x3c) + iVar3 + 0x4c) != 0) &&
         (*(undefined4 *)(*(int *)(this + 0x3c) + iVar3 + 0x48) = 0, 0 < param_1)) {
        local_c = param_1;
        pfVar4 = param_3;
        do {
          (**(code **)(**(int **)(iVar3 + 0x4c + *(int *)(this + 0x3c)) + 0x10))
                    (*(undefined4 *)((int)pfVar4 + ((int)param_2 - (int)param_3)),&local_4,0);
          fVar2 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar1 = (float *)(iVar3 + 0x48 + *(int *)(this + 0x3c));
          *pfVar1 = local_4 * fVar2 * ___real_3c23d70a + *pfVar1;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x50;
    } while (local_8 < *(int *)(this + 0x38));
  }
  return;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E3EF0 */

int __thiscall objMOD_SKIN::Modify(objMOD_SKIN *this)

{
  uint uVar1;
  
  uVar1 = **(uint **)(this + 0x18);
  if ((*(uint *)(this + 4) & 0x2000) == 0) {
    uVar1 = uVar1 | 1;
  }
  else {
    uVar1 = uVar1 & 0xfffffffe;
  }
  **(uint **)(this + 0x18) = uVar1;
  if ((*(uint *)(this + 4) & 0x4000) == 0) {
    Apply_NoReorder(this);
  }
  else {
    Apply_Reorder(this);
  }
  *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
       *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x2000;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_geom.cpp
   addr: 004E3F40 */

void __thiscall objMOD_SKIN::Apply_NoReorder(objMOD_SKIN *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  objOBJ *poVar11;
  objOBJ *poVar12;
  int iVar13;
  objOBJ *poVar14;
  float *pfVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_4c [3];
  undefined8 local_40;
  float local_38;
  float local_34 [3];
  float *local_28;
  float *local_24;
  int local_20;
  int local_1c;
  undefined8 *local_18;
  objOBJ *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)(this + 0x38) == 1) &&
     (local_18 = (undefined8 *)
                 (uint)(ABS(___real_3f800000 - *(float *)(this + 0x40)) < _DAT_005dc35c),
     (float)(int)local_18 != ___real_00000000)) {
    iVar6 = *(int *)(this + 0x18);
    if ((*(uint *)(this + 4) & 0x10000) == 0) {
      iVar13 = 0;
      local_c = 0;
      local_8 = 0;
      if (0 < *(int *)(iVar6 + 0x14)) {
        local_10 = 0;
        do {
          local_24 = (float *)0x0;
          pfVar5 = (float *)(*(int *)(*(int *)(iVar6 + 0x28) + 0x40) + local_10);
          *pfVar5 = _m3dVZero;
          pfVar5[1] = DAT_00963740;
          pfVar5[2] = DAT_00963744;
          if (0 < *(int *)(*(int *)(this + 0x30) + local_8 * 4)) {
            local_20 = iVar13 * 0xc;
            local_18 = &local_40;
            do {
              puVar4 = local_18;
              pfVar5 = (float *)(*(int *)(*(int *)(this + 0x3c) + 0x44) + local_20);
              poVar11 = ppObjList[*(int *)(*(int *)(this + 0x34) + iVar13 * 8)];
              local_14 = poVar11 + 0x3c;
              if (m3dSimdType == 0) {
                if (((uint)local_14 & 0xf) == 0) {
                  fVar26 = *pfVar5;
                  fVar2 = pfVar5[1];
                  fVar3 = pfVar5[2];
                  fVar24 = fVar26 * *(float *)local_14 + *(float *)(poVar11 + 0x6c) +
                           fVar2 * *(float *)(poVar11 + 0x4c) + fVar3 * *(float *)(poVar11 + 0x5c);
                  fVar25 = fVar26 * *(float *)(poVar11 + 0x40) + *(float *)(poVar11 + 0x70) +
                           fVar2 * *(float *)(poVar11 + 0x50) + fVar3 * *(float *)(poVar11 + 0x60);
                  fVar26 = fVar26 * *(float *)(poVar11 + 0x44) + *(float *)(poVar11 + 0x74) +
                           fVar2 * *(float *)(poVar11 + 0x54) + fVar3 * *(float *)(poVar11 + 100);
                }
                else {
                  fVar26 = *pfVar5;
                  fVar2 = pfVar5[1];
                  fVar3 = pfVar5[2];
                  fVar24 = fVar26 * (float)*(undefined8 *)local_14 +
                           fVar2 * (float)*(undefined8 *)(poVar11 + 0x4c) +
                           fVar3 * (float)*(undefined8 *)(poVar11 + 0x5c) +
                           (float)*(undefined8 *)(poVar11 + 0x6c);
                  fVar25 = fVar26 * (float)((ulonglong)*(undefined8 *)local_14 >> 0x20) +
                           fVar2 * (float)((ulonglong)*(undefined8 *)(poVar11 + 0x4c) >> 0x20) +
                           fVar3 * (float)((ulonglong)*(undefined8 *)(poVar11 + 0x5c) >> 0x20) +
                           (float)((ulonglong)*(undefined8 *)(poVar11 + 0x6c) >> 0x20);
                  fVar26 = fVar26 * (float)*(undefined8 *)(poVar11 + 0x44) +
                           fVar2 * (float)*(undefined8 *)(poVar11 + 0x54) +
                           fVar3 * (float)*(undefined8 *)(poVar11 + 100) +
                           (float)*(undefined8 *)(poVar11 + 0x74);
                }
                *local_18 = CONCAT44(fVar25,fVar24);
                *(float *)(local_18 + 1) = fVar26;
                local_c = iVar13;
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar16 = (undefined4)*(undefined8 *)pfVar5;
                uVar19 = CONCAT44(uVar16,uVar16);
                uVar16 = (undefined4)((ulonglong)*(undefined8 *)pfVar5 >> 0x20);
                uVar22 = CONCAT44(uVar16,uVar16);
                uVar23 = CONCAT44(pfVar5[2],pfVar5[2]);
                uVar17 = PackedFloatingMUL(uVar19,*(undefined8 *)local_14);
                uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar11 + 0x4c));
                uVar20 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar11 + 0x5c));
                uVar17 = PackedFloatingADD(uVar17,*(undefined8 *)(poVar11 + 0x6c));
                uVar21 = PackedFloatingMUL(uVar19,*(undefined8 *)(poVar11 + 0x44));
                uVar19 = PackedFloatingADD(uVar18,uVar20);
                uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar11 + 0x54));
                uVar23 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar11 + 100));
                uVar22 = PackedFloatingADD(uVar21,*(undefined8 *)(poVar11 + 0x74));
                uVar19 = PackedFloatingADD(uVar17,uVar19);
                uVar17 = PackedFloatingADD(uVar18,uVar23);
                *local_18 = uVar19;
                uVar19 = PackedFloatingADD(uVar22,uVar17);
                *(int *)(puVar4 + 1) = (int)uVar19;
                FastExitMediaState();
                local_c = iVar13;
              }
              else {
                iVar6 = 0;
                local_1c = (int)local_14 - (int)&local_40;
                pfVar15 = (float *)&local_40;
                do {
                  iVar13 = local_1c;
                  iVar7 = 0;
                  *pfVar15 = 0.0;
                  pfVar10 = (float *)(iVar13 + (int)pfVar15);
                  do {
                    pfVar9 = pfVar5 + iVar7;
                    fVar26 = *pfVar10;
                    iVar7 = iVar7 + 1;
                    pfVar10 = pfVar10 + 4;
                    *pfVar15 = *pfVar9 * fVar26 + *pfVar15;
                  } while (iVar7 < 3);
                  iVar13 = iVar6 + iVar7 * 4;
                  iVar6 = iVar6 + 1;
                  *pfVar15 = *(float *)(local_14 + iVar13 * 4) + *pfVar15;
                  pfVar15 = pfVar15 + 1;
                } while (iVar6 < 3);
              }
              iVar13 = local_c + 1;
              local_c = iVar13;
              pfVar5 = (float *)(*(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x40) + local_10)
              ;
              fVar26 = *(float *)(*(int *)(this + 0x34) + -4 + iVar13 * 8);
              *pfVar5 = (float)local_40 * fVar26 + *pfVar5;
              pfVar5[1] = local_40._4_4_ * fVar26 + pfVar5[1];
              pfVar5[2] = local_38 * fVar26 + pfVar5[2];
              local_20 = local_20 + 0xc;
              local_24 = (float *)((int)local_24 + 1);
            } while ((int)local_24 < *(int *)(*(int *)(this + 0x30) + local_8 * 4));
          }
          iVar6 = *(int *)(this + 0x18);
          local_8 = local_8 + 1;
          local_10 = local_10 + 0xc;
        } while (local_8 < *(int *)(iVar6 + 0x14));
        return;
      }
    }
    else {
      local_8 = 0;
      if (0 < *(int *)(iVar6 + 0x14)) {
        local_c = 0;
        do {
          pfVar5 = (float *)(*(int *)(*(int *)(iVar6 + 0x28) + 0x40) + local_c);
          pfVar15 = (float *)(*(int *)(*(int *)(this + 0x3c) + 0x44) + local_c);
          poVar11 = ppObjList[*(int *)(*(int *)(this + 0x34) + local_8 * 8)];
          poVar12 = poVar11 + 0x3c;
          if (m3dSimdType == 0) {
            if (((uint)poVar12 & 0xf) == 0) {
              fVar26 = *pfVar15;
              fVar2 = pfVar15[1];
              fVar3 = pfVar15[2];
              fVar24 = fVar26 * *(float *)poVar12 + *(float *)(poVar11 + 0x6c) +
                       fVar2 * *(float *)(poVar11 + 0x4c) + fVar3 * *(float *)(poVar11 + 0x5c);
              fVar25 = fVar26 * *(float *)(poVar11 + 0x40) + *(float *)(poVar11 + 0x70) +
                       fVar2 * *(float *)(poVar11 + 0x50) + fVar3 * *(float *)(poVar11 + 0x60);
              fVar26 = fVar26 * *(float *)(poVar11 + 0x44) + *(float *)(poVar11 + 0x74) +
                       fVar2 * *(float *)(poVar11 + 0x54) + fVar3 * *(float *)(poVar11 + 100);
            }
            else {
              fVar26 = *pfVar15;
              fVar2 = pfVar15[1];
              fVar3 = pfVar15[2];
              fVar24 = fVar26 * (float)*(undefined8 *)poVar12 +
                       fVar2 * (float)*(undefined8 *)(poVar11 + 0x4c) +
                       fVar3 * (float)*(undefined8 *)(poVar11 + 0x5c) +
                       (float)*(undefined8 *)(poVar11 + 0x6c);
              fVar25 = fVar26 * (float)((ulonglong)*(undefined8 *)poVar12 >> 0x20) +
                       fVar2 * (float)((ulonglong)*(undefined8 *)(poVar11 + 0x4c) >> 0x20) +
                       fVar3 * (float)((ulonglong)*(undefined8 *)(poVar11 + 0x5c) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(poVar11 + 0x6c) >> 0x20);
              fVar26 = fVar26 * (float)*(undefined8 *)(poVar11 + 0x44) +
                       fVar2 * (float)*(undefined8 *)(poVar11 + 0x54) +
                       fVar3 * (float)*(undefined8 *)(poVar11 + 100) +
                       (float)*(undefined8 *)(poVar11 + 0x74);
            }
            *(ulonglong *)pfVar5 = CONCAT44(fVar25,fVar24);
            pfVar5[2] = fVar26;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar16 = (undefined4)*(undefined8 *)pfVar15;
            uVar19 = CONCAT44(uVar16,uVar16);
            uVar16 = (undefined4)((ulonglong)*(undefined8 *)pfVar15 >> 0x20);
            uVar22 = CONCAT44(uVar16,uVar16);
            uVar23 = CONCAT44(pfVar15[2],pfVar15[2]);
            uVar17 = PackedFloatingMUL(uVar19,*(undefined8 *)poVar12);
            uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar11 + 0x4c));
            uVar20 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar11 + 0x5c));
            uVar17 = PackedFloatingADD(uVar17,*(undefined8 *)(poVar11 + 0x6c));
            uVar21 = PackedFloatingMUL(uVar19,*(undefined8 *)(poVar11 + 0x44));
            uVar19 = PackedFloatingADD(uVar18,uVar20);
            uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar11 + 0x54));
            uVar23 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar11 + 100));
            uVar22 = PackedFloatingADD(uVar21,*(undefined8 *)(poVar11 + 0x74));
            uVar19 = PackedFloatingADD(uVar17,uVar19);
            uVar17 = PackedFloatingADD(uVar18,uVar23);
            *(undefined8 *)pfVar5 = uVar19;
            uVar19 = PackedFloatingADD(uVar22,uVar17);
            pfVar5[2] = (float)uVar19;
            FastExitMediaState();
          }
          else {
            local_18 = (undefined8 *)0x0;
            pfVar10 = pfVar5;
            do {
              iVar6 = 0;
              *pfVar10 = 0.0;
              pfVar9 = (float *)(((int)poVar12 - (int)pfVar5) + (int)pfVar10);
              do {
                pfVar1 = pfVar15 + iVar6;
                fVar26 = *pfVar9;
                iVar6 = iVar6 + 1;
                pfVar9 = pfVar9 + 4;
                *pfVar10 = *pfVar1 * fVar26 + *pfVar10;
              } while (iVar6 < 3);
              iVar6 = (int)local_18 + iVar6 * 4;
              local_18 = (undefined8 *)((int)local_18 + 1);
              *pfVar10 = *(float *)(poVar12 + iVar6 * 4) + *pfVar10;
              pfVar10 = pfVar10 + 1;
            } while ((int)local_18 < 3);
          }
          iVar6 = *(int *)(this + 0x18);
          local_8 = local_8 + 1;
          local_c = local_c + 0xc;
        } while (local_8 < *(int *)(iVar6 + 0x14));
        return;
      }
    }
  }
  else {
    iVar6 = *(int *)(this + 0x18);
    local_8 = 0;
    local_c = 0;
    if (0 < *(int *)(iVar6 + 0x14)) {
      local_18 = (undefined8 *)0x0;
      do {
        pfVar5 = (float *)(*(int *)(*(int *)(iVar6 + 0x28) + 0x40) + (int)local_18);
        local_28 = pfVar5;
        local_1c = *(int *)(*(int *)(this + 0x30) + local_8 * 4);
        *pfVar5 = _m3dVZero;
        pfVar5[1] = DAT_00963740;
        pfVar5[2] = DAT_00963744;
        if (0 < local_1c) {
          local_24 = local_34;
          local_10 = local_c * 8;
          poVar11 = (objOBJ *)(local_c * 0xc);
          local_14 = poVar11;
          do {
            pfVar15 = local_24;
            pfVar10 = (float *)(*(int *)(*(int *)(this + 0x3c) + 0x44) + (int)poVar11);
            local_34[0] = *pfVar10;
            local_34[1] = pfVar10[1];
            local_34[2] = pfVar10[2];
            if (1 < *(int *)(this + 0x38)) {
              piVar8 = (int *)(*(int *)(this + 0x3c) + 0x94);
              iVar6 = *(int *)(this + 0x38) + -1;
              do {
                fVar26 = (float)piVar8[1];
                pfVar10 = (float *)(*piVar8 + (int)poVar11);
                piVar8 = piVar8 + 0x14;
                iVar6 = iVar6 + -1;
                local_34[0] = fVar26 * *pfVar10 + local_34[0];
                local_34[1] = fVar26 * pfVar10[1] + local_34[1];
                local_34[2] = fVar26 * pfVar10[2] + local_34[2];
              } while (iVar6 != 0);
            }
            local_34[1] = local_34[1] * *(float *)(this + 0x40);
            local_34[2] = local_34[2] * *(float *)(this + 0x40);
            poVar12 = ppObjList[*(int *)(local_10 + *(int *)(this + 0x34))];
            poVar14 = poVar12 + 0x3c;
            if (m3dSimdType == 0) {
              if (((uint)poVar14 & 0xf) == 0) {
                fVar26 = *local_24;
                fVar2 = local_24[1];
                fVar3 = local_24[2];
                fVar24 = fVar26 * *(float *)poVar14 + *(float *)(poVar12 + 0x6c) +
                         fVar2 * *(float *)(poVar12 + 0x4c) + fVar3 * *(float *)(poVar12 + 0x5c);
                fVar25 = fVar26 * *(float *)(poVar12 + 0x40) + *(float *)(poVar12 + 0x70) +
                         fVar2 * *(float *)(poVar12 + 0x50) + fVar3 * *(float *)(poVar12 + 0x60);
                fVar26 = fVar26 * *(float *)(poVar12 + 0x44) + *(float *)(poVar12 + 0x74) +
                         fVar2 * *(float *)(poVar12 + 0x54) + fVar3 * *(float *)(poVar12 + 100);
              }
              else {
                fVar26 = *local_24;
                fVar2 = local_24[1];
                fVar3 = local_24[2];
                fVar24 = fVar26 * (float)*(undefined8 *)poVar14 +
                         fVar2 * (float)*(undefined8 *)(poVar12 + 0x4c) +
                         fVar3 * (float)*(undefined8 *)(poVar12 + 0x5c) +
                         (float)*(undefined8 *)(poVar12 + 0x6c);
                fVar25 = fVar26 * (float)((ulonglong)*(undefined8 *)poVar14 >> 0x20) +
                         fVar2 * (float)((ulonglong)*(undefined8 *)(poVar12 + 0x4c) >> 0x20) +
                         fVar3 * (float)((ulonglong)*(undefined8 *)(poVar12 + 0x5c) >> 0x20) +
                         (float)((ulonglong)*(undefined8 *)(poVar12 + 0x6c) >> 0x20);
                fVar26 = fVar26 * (float)*(undefined8 *)(poVar12 + 0x44) +
                         fVar2 * (float)*(undefined8 *)(poVar12 + 0x54) +
                         fVar3 * (float)*(undefined8 *)(poVar12 + 100) +
                         (float)*(undefined8 *)(poVar12 + 0x74);
              }
              *(ulonglong *)local_24 = CONCAT44(fVar25,fVar24);
              local_24[2] = fVar26;
            }
            else {
              local_14 = poVar11;
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar16 = (undefined4)*(undefined8 *)local_24;
                uVar19 = CONCAT44(uVar16,uVar16);
                uVar16 = (undefined4)((ulonglong)*(undefined8 *)local_24 >> 0x20);
                uVar22 = CONCAT44(uVar16,uVar16);
                uVar23 = CONCAT44(local_24[2],local_24[2]);
                uVar17 = PackedFloatingMUL(uVar19,*(undefined8 *)poVar14);
                uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar12 + 0x4c));
                uVar20 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar12 + 0x5c));
                uVar17 = PackedFloatingADD(uVar17,*(undefined8 *)(poVar12 + 0x6c));
                uVar21 = PackedFloatingMUL(uVar19,*(undefined8 *)(poVar12 + 0x44));
                uVar19 = PackedFloatingADD(uVar18,uVar20);
                uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(poVar12 + 0x54));
                uVar23 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar12 + 100));
                uVar22 = PackedFloatingADD(uVar21,*(undefined8 *)(poVar12 + 0x74));
                uVar19 = PackedFloatingADD(uVar17,uVar19);
                uVar17 = PackedFloatingADD(uVar18,uVar23);
                *(undefined8 *)local_24 = uVar19;
                uVar19 = PackedFloatingADD(uVar22,uVar17);
                pfVar15[2] = (float)uVar19;
                FastExitMediaState();
                poVar11 = local_14;
              }
              else {
                iVar6 = 0;
                local_20 = (int)poVar14 - (int)local_4c;
                pfVar5 = local_4c;
                do {
                  iVar13 = local_20;
                  iVar7 = 0;
                  *pfVar5 = 0.0;
                  pfVar15 = (float *)(iVar13 + (int)pfVar5);
                  fVar26 = ___real_00000000;
                  do {
                    pfVar10 = local_34 + iVar7;
                    fVar2 = *pfVar15;
                    iVar7 = iVar7 + 1;
                    pfVar15 = pfVar15 + 4;
                    fVar26 = *pfVar10 * fVar2 + fVar26;
                  } while (iVar7 < 3);
                  *pfVar5 = fVar26;
                  iVar13 = iVar6 + iVar7 * 4;
                  iVar6 = iVar6 + 1;
                  *pfVar5 = fVar26 + *(float *)(poVar14 + iVar13 * 4);
                  pfVar5 = pfVar5 + 1;
                } while (iVar6 < 3);
                local_34[2] = local_4c[2];
                local_34[0] = local_4c[0];
                local_34[1] = local_4c[1];
                poVar11 = local_14;
                pfVar5 = local_28;
              }
            }
            poVar11 = (objOBJ *)((int)poVar11 + 0xc);
            fVar26 = *(float *)(*(int *)(this + 0x34) + 4 + local_10);
            local_14 = poVar11;
            local_10 = local_10 + 8;
            local_1c = local_1c + -1;
            *pfVar5 = local_34[0] * fVar26 + *pfVar5;
            pfVar5[1] = local_34[1] * fVar26 + pfVar5[1];
            pfVar5[2] = fVar26 * local_34[2] + pfVar5[2];
          } while (local_1c != 0);
        }
        iVar6 = *(int *)(this + 0x18);
        iVar13 = local_8 + 1;
        local_c = local_c + *(int *)(*(int *)(this + 0x30) + local_8 * 4);
        local_8 = iVar13;
        local_18 = (undefined8 *)((int)local_18 + 0xc);
      } while (iVar13 < *(int *)(iVar6 + 0x14));
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_geom.cpp
   addr: 004E46C0 */

void __thiscall objMOD_SKIN::Apply_Reorder(objMOD_SKIN *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  objOBJ *poVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  int iVar12;
  objOBJ *poVar13;
  undefined4 *puVar14;
  float *pfVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_38 [3];
  undefined8 local_2c;
  float local_24;
  float *local_20;
  int local_1c;
  undefined8 *local_18;
  objOBJ *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar12 = 0;
  local_8 = 0;
  if (*(int *)(this + 0x38) == 1) {
    local_14 = (objOBJ *)0x1;
    bVar5 = _DAT_005dc35c <= ABS(___real_3f800000 - *(float *)(this + 0x40));
    if (bVar5) {
      local_14 = (objOBJ *)0x0;
    }
    local_14 = (objOBJ *)(uint)!bVar5;
    if ((float)(int)local_14 != ___real_00000000) {
      local_c = 0;
      puVar14 = *(undefined4 **)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x40);
      for (uVar8 = *(int *)(*(int *)(this + 0x18) + 0x14) * 3 & 0x3fffffff; uVar8 != 0;
          uVar8 = uVar8 - 1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined1 *)puVar14 = 0;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      if (*(int *)(this + 0x24) < 1) {
        return;
      }
      do {
        local_10 = 0;
        iVar12 = local_c;
        if (0 < *(int *)(*(int *)(this + 0x30) + local_c * 4)) {
          local_18 = &local_2c;
          iVar6 = local_8 * 0xc;
          local_20 = (float *)iVar6;
          do {
            puVar16 = local_18;
            pfVar15 = (float *)(*(int *)(*(int *)(this + 0x3c) + 0x44) + iVar6);
            poVar4 = ppObjList[*(int *)(*(int *)(this + 0x28) + iVar12 * 4)];
            local_14 = poVar4 + 0x3c;
            local_20 = (float *)iVar6;
            if (m3dSimdType == 0) {
              if (((uint)local_14 & 0xf) == 0) {
                fVar27 = *pfVar15;
                fVar2 = pfVar15[1];
                fVar3 = pfVar15[2];
                fVar25 = fVar27 * *(float *)local_14 + *(float *)(poVar4 + 0x6c) +
                         fVar2 * *(float *)(poVar4 + 0x4c) + fVar3 * *(float *)(poVar4 + 0x5c);
                fVar26 = fVar27 * *(float *)(poVar4 + 0x40) + *(float *)(poVar4 + 0x70) +
                         fVar2 * *(float *)(poVar4 + 0x50) + fVar3 * *(float *)(poVar4 + 0x60);
                fVar27 = fVar27 * *(float *)(poVar4 + 0x44) + *(float *)(poVar4 + 0x74) +
                         fVar2 * *(float *)(poVar4 + 0x54) + fVar3 * *(float *)(poVar4 + 100);
              }
              else {
                fVar27 = *pfVar15;
                fVar2 = pfVar15[1];
                fVar3 = pfVar15[2];
                fVar25 = fVar27 * (float)*(undefined8 *)local_14 +
                         fVar2 * (float)*(undefined8 *)(poVar4 + 0x4c) +
                         fVar3 * (float)*(undefined8 *)(poVar4 + 0x5c) +
                         (float)*(undefined8 *)(poVar4 + 0x6c);
                fVar26 = fVar27 * (float)((ulonglong)*(undefined8 *)local_14 >> 0x20) +
                         fVar2 * (float)((ulonglong)*(undefined8 *)(poVar4 + 0x4c) >> 0x20) +
                         fVar3 * (float)((ulonglong)*(undefined8 *)(poVar4 + 0x5c) >> 0x20) +
                         (float)((ulonglong)*(undefined8 *)(poVar4 + 0x6c) >> 0x20);
                fVar27 = fVar27 * (float)*(undefined8 *)(poVar4 + 0x44) +
                         fVar2 * (float)*(undefined8 *)(poVar4 + 0x54) +
                         fVar3 * (float)*(undefined8 *)(poVar4 + 100) +
                         (float)*(undefined8 *)(poVar4 + 0x74);
              }
              *local_18 = CONCAT44(fVar26,fVar25);
              *(float *)(local_18 + 1) = fVar27;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar17 = (undefined4)*(undefined8 *)pfVar15;
              uVar20 = CONCAT44(uVar17,uVar17);
              uVar17 = (undefined4)((ulonglong)*(undefined8 *)pfVar15 >> 0x20);
              uVar23 = CONCAT44(uVar17,uVar17);
              uVar24 = CONCAT44(pfVar15[2],pfVar15[2]);
              uVar18 = PackedFloatingMUL(uVar20,*(undefined8 *)local_14);
              uVar19 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar4 + 0x4c));
              uVar21 = PackedFloatingMUL(uVar24,*(undefined8 *)(poVar4 + 0x5c));
              uVar18 = PackedFloatingADD(uVar18,*(undefined8 *)(poVar4 + 0x6c));
              uVar22 = PackedFloatingMUL(uVar20,*(undefined8 *)(poVar4 + 0x44));
              uVar20 = PackedFloatingADD(uVar19,uVar21);
              uVar19 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar4 + 0x54));
              uVar24 = PackedFloatingMUL(uVar24,*(undefined8 *)(poVar4 + 100));
              uVar23 = PackedFloatingADD(uVar22,*(undefined8 *)(poVar4 + 0x74));
              uVar20 = PackedFloatingADD(uVar18,uVar20);
              uVar18 = PackedFloatingADD(uVar19,uVar24);
              *local_18 = uVar20;
              uVar20 = PackedFloatingADD(uVar23,uVar18);
              *(int *)(puVar16 + 1) = (int)uVar20;
              FastExitMediaState();
            }
            else {
              iVar6 = 0;
              local_1c = (int)local_14 - (int)&local_2c;
              pfVar7 = (float *)&local_2c;
              do {
                iVar12 = local_1c;
                iVar9 = 0;
                *pfVar7 = 0.0;
                pfVar11 = (float *)(iVar12 + (int)pfVar7);
                do {
                  pfVar1 = pfVar15 + iVar9;
                  fVar27 = *pfVar11;
                  iVar9 = iVar9 + 1;
                  pfVar11 = pfVar11 + 4;
                  *pfVar7 = *pfVar1 * fVar27 + *pfVar7;
                } while (iVar9 < 3);
                iVar12 = iVar6 + iVar9 * 4;
                iVar6 = iVar6 + 1;
                *pfVar7 = *(float *)(local_14 + iVar12 * 4) + *pfVar7;
                pfVar7 = pfVar7 + 1;
                iVar12 = local_c;
              } while (iVar6 < 3);
            }
            fVar27 = *(float *)(*(int *)(this + 0x34) + 4 + local_8 * 8);
            iVar6 = *(int *)(*(int *)(this + 0x34) + local_8 * 8);
            iVar9 = *(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x40);
            pfVar15 = (float *)(iVar9 + iVar6 * 0xc);
            local_8 = local_8 + 1;
            *pfVar15 = (float)local_2c * fVar27 + *(float *)(iVar9 + iVar6 * 0xc);
            pfVar15[1] = local_2c._4_4_ * fVar27 + pfVar15[1];
            pfVar15[2] = fVar27 * local_24 + pfVar15[2];
            iVar6 = (int)local_20 + 0xc;
            local_10 = local_10 + 1;
            local_20 = (float *)iVar6;
          } while (local_10 < *(int *)(*(int *)(this + 0x30) + iVar12 * 4));
        }
        local_c = iVar12 + 1;
      } while (iVar12 + 1 < *(int *)(this + 0x24));
      return;
    }
  }
  puVar14 = *(undefined4 **)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x40);
  for (uVar8 = *(int *)(*(int *)(this + 0x18) + 0x14) * 3 & 0x3fffffff; uVar8 != 0;
      uVar8 = uVar8 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  local_c = 0;
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  if (0 < *(int *)(this + 0x24)) {
    do {
      local_10 = 0;
      iVar6 = local_c;
      if (0 < *(int *)(*(int *)(this + 0x30) + local_c * 4)) {
        puVar16 = (undefined8 *)(iVar12 * 0xc);
        local_20 = (float *)&local_2c;
        local_18 = puVar16;
        do {
          pfVar15 = local_20;
          pfVar7 = (float *)(*(int *)(*(int *)(this + 0x3c) + 0x44) + (int)puVar16);
          local_2c._0_4_ = *pfVar7;
          local_2c._4_4_ = pfVar7[1];
          local_24 = pfVar7[2];
          if (1 < *(int *)(this + 0x38)) {
            piVar10 = (int *)(*(int *)(this + 0x3c) + 0x94);
            iVar12 = *(int *)(this + 0x38) + -1;
            do {
              fVar27 = (float)piVar10[1];
              pfVar7 = (float *)(*piVar10 + (int)puVar16);
              piVar10 = piVar10 + 0x14;
              iVar12 = iVar12 + -1;
              local_2c._0_4_ = fVar27 * *pfVar7 + (float)local_2c;
              local_2c._4_4_ = fVar27 * pfVar7[1] + local_2c._4_4_;
              local_24 = fVar27 * pfVar7[2] + local_24;
            } while (iVar12 != 0);
          }
          local_2c._4_4_ = local_2c._4_4_ * *(float *)(this + 0x40);
          local_24 = local_24 * *(float *)(this + 0x40);
          poVar4 = ppObjList[*(int *)(*(int *)(this + 0x28) + iVar6 * 4)];
          poVar13 = poVar4 + 0x3c;
          if (m3dSimdType == 0) {
            if (((uint)poVar13 & 0xf) == 0) {
              fVar27 = *local_20;
              fVar2 = local_20[1];
              fVar3 = local_20[2];
              fVar25 = fVar27 * *(float *)poVar13 + *(float *)(poVar4 + 0x6c) +
                       fVar2 * *(float *)(poVar4 + 0x4c) + fVar3 * *(float *)(poVar4 + 0x5c);
              fVar26 = fVar27 * *(float *)(poVar4 + 0x40) + *(float *)(poVar4 + 0x70) +
                       fVar2 * *(float *)(poVar4 + 0x50) + fVar3 * *(float *)(poVar4 + 0x60);
              fVar27 = fVar27 * *(float *)(poVar4 + 0x44) + *(float *)(poVar4 + 0x74) +
                       fVar2 * *(float *)(poVar4 + 0x54) + fVar3 * *(float *)(poVar4 + 100);
            }
            else {
              fVar27 = *local_20;
              fVar2 = local_20[1];
              fVar3 = local_20[2];
              fVar25 = fVar27 * (float)*(undefined8 *)poVar13 +
                       fVar2 * (float)*(undefined8 *)(poVar4 + 0x4c) +
                       fVar3 * (float)*(undefined8 *)(poVar4 + 0x5c) +
                       (float)*(undefined8 *)(poVar4 + 0x6c);
              fVar26 = fVar27 * (float)((ulonglong)*(undefined8 *)poVar13 >> 0x20) +
                       fVar2 * (float)((ulonglong)*(undefined8 *)(poVar4 + 0x4c) >> 0x20) +
                       fVar3 * (float)((ulonglong)*(undefined8 *)(poVar4 + 0x5c) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(poVar4 + 0x6c) >> 0x20);
              fVar27 = fVar27 * (float)*(undefined8 *)(poVar4 + 0x44) +
                       fVar2 * (float)*(undefined8 *)(poVar4 + 0x54) +
                       fVar3 * (float)*(undefined8 *)(poVar4 + 100) +
                       (float)*(undefined8 *)(poVar4 + 0x74);
            }
            *(ulonglong *)local_20 = CONCAT44(fVar26,fVar25);
            local_20[2] = fVar27;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar17 = (undefined4)*(undefined8 *)local_20;
            uVar20 = CONCAT44(uVar17,uVar17);
            uVar17 = (undefined4)((ulonglong)*(undefined8 *)local_20 >> 0x20);
            uVar23 = CONCAT44(uVar17,uVar17);
            uVar24 = CONCAT44(local_20[2],local_20[2]);
            uVar18 = PackedFloatingMUL(uVar20,*(undefined8 *)poVar13);
            uVar19 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar4 + 0x4c));
            uVar21 = PackedFloatingMUL(uVar24,*(undefined8 *)(poVar4 + 0x5c));
            uVar18 = PackedFloatingADD(uVar18,*(undefined8 *)(poVar4 + 0x6c));
            uVar22 = PackedFloatingMUL(uVar20,*(undefined8 *)(poVar4 + 0x44));
            uVar20 = PackedFloatingADD(uVar19,uVar21);
            uVar19 = PackedFloatingMUL(uVar23,*(undefined8 *)(poVar4 + 0x54));
            uVar24 = PackedFloatingMUL(uVar24,*(undefined8 *)(poVar4 + 100));
            uVar23 = PackedFloatingADD(uVar22,*(undefined8 *)(poVar4 + 0x74));
            uVar20 = PackedFloatingADD(uVar18,uVar20);
            uVar18 = PackedFloatingADD(uVar19,uVar24);
            *(undefined8 *)local_20 = uVar20;
            uVar20 = PackedFloatingADD(uVar23,uVar18);
            pfVar15[2] = (float)uVar20;
            FastExitMediaState();
            iVar6 = local_c;
          }
          else {
            iVar12 = 0;
            local_1c = (int)poVar13 - (int)local_38;
            pfVar15 = local_38;
            local_18 = puVar16;
            do {
              iVar6 = local_1c;
              iVar9 = 0;
              *pfVar15 = 0.0;
              pfVar7 = (float *)(iVar6 + (int)pfVar15);
              fVar27 = ___real_00000000;
              do {
                iVar6 = iVar9 * 4;
                fVar2 = *pfVar7;
                iVar9 = iVar9 + 1;
                pfVar7 = pfVar7 + 4;
                fVar27 = *(float *)((int)&local_2c + iVar6) * fVar2 + fVar27;
              } while (iVar9 < 3);
              *pfVar15 = fVar27;
              iVar6 = iVar12 + iVar9 * 4;
              iVar12 = iVar12 + 1;
              *pfVar15 = fVar27 + *(float *)(poVar13 + iVar6 * 4);
              pfVar15 = pfVar15 + 1;
            } while (iVar12 < 3);
            local_24 = local_38[2];
            local_2c._0_4_ = local_38[0];
            local_2c._4_4_ = local_38[1];
            iVar6 = local_c;
            puVar16 = local_18;
          }
          puVar16 = (undefined8 *)((int)puVar16 + 0xc);
          fVar27 = *(float *)(*(int *)(this + 0x34) + 4 + local_8 * 8);
          iVar12 = *(int *)(*(int *)(this + 0x34) + local_8 * 8);
          iVar9 = *(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x40);
          local_18 = puVar16;
          pfVar15 = (float *)(iVar9 + iVar12 * 0xc);
          *pfVar15 = (float)local_2c * fVar27 + *(float *)(iVar9 + iVar12 * 0xc);
          pfVar15[1] = local_2c._4_4_ * fVar27 + pfVar15[1];
          pfVar15[2] = fVar27 * local_24 + pfVar15[2];
          iVar12 = local_8 + 1;
          local_8 = iVar12;
          local_10 = local_10 + 1;
        } while (local_10 < *(int *)(*(int *)(this + 0x30) + iVar6 * 4));
      }
      local_c = iVar6 + 1;
    } while (iVar6 + 1 < *(int *)(this + 0x24));
  }
  return;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E4C40 */

objMOD_NOISE_DEFORM * __thiscall objMOD_NOISE_DEFORM::objMOD_NOISE_DEFORM(objMOD_NOISE_DEFORM *this)

{
  undefined4 uVar1;
  
  objMODIFIER::objMODIFIER((objMODIFIER *)this,0x4e444546,0x37);
  *(undefined ***)this = &objMOD_GEOM::_vftable_;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x14) = 0x200;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  uVar1 = DAT_005dc360;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x3c) = 2;
  *(undefined ***)(this + 0x38) = &m3dPRISM::_vftable_;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x10) = 0x8000;
  return this;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E4CA0 */

int __thiscall objMOD_NOISE_DEFORM::AddObj(objMOD_NOISE_DEFORM *this,objOBJ *param_1)

{
  int iVar1;
  
  iVar1 = objMOD_GEOM::StoreIniVert((objMOD_GEOM *)this,param_1,0,1);
  if (iVar1 != 0) {
    iVar1 = objMODIFIER::AddObj((objMODIFIER *)this,param_1);
    if (iVar1 != 0) {
      iVar1 = objOBJ::UnshareVertList(*(objOBJ **)(this + 0x18));
      if (iVar1 != 0) {
        objOBJ::FreeNormalListLCS(*(objOBJ **)(this + 0x18));
        objOBJ::FreeVertNormalListLCS(*(objOBJ **)(this + 0x18));
        *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
             *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x20;
        (**(code **)(*(int *)(this + 0x38) + 0x14))
                  (*(undefined4 *)(this + 0x20),*(undefined4 *)(*(int *)(this + 0x18) + 0x14));
        (**(code **)(*(int *)(this + 0x38) + 0x2c))(*(undefined4 *)(this + 0x24));
        return 1;
      }
    }
  }
  return 0;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E4D20 */

void __thiscall
objMOD_NOISE_DEFORM::SetParams
          (objMOD_NOISE_DEFORM *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x24) = param_1;
  *(float *)(this + 0x28) = param_2;
  *(float *)(this + 0x2c) = param_3;
  *(float *)(this + 0x30) = param_4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_geom.cpp
   addr: 004E4D40 */

int __thiscall objMOD_NOISE_DEFORM::FixBoundary(objMOD_NOISE_DEFORM *this,float param_1)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  undefined **local_40 [2];
  int local_38;
  undefined4 local_4;
  
  cgmWED_SYS::cgmWED_SYS((cgmWED_SYS *)local_40);
  local_40[0] = &cgmWED_3D::_vftable_;
  if (*(int *)(this + 0x18) != 0) {
    pvVar3 = apMalloc(*(int *)(*(int *)(this + 0x18) + 0x14) << 2);
    *(void **)(this + 0x34) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    iVar4 = cgmWED::Init((cgmWED *)local_40,*(objOBJ **)(this + 0x18));
    if (iVar4 == 0) {
      return 0;
    }
    cgmWED_SYS::CalcBoundary((cgmWED_SYS *)local_40,0);
    local_4 = *(undefined4 *)(this + 0x20);
    piVar5 = (int *)apCalloc(*(uint *)(*(int *)(this + 0x18) + 0x14),4);
    iVar4 = 0;
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    iVar6 = 0;
    if (0 < *(int *)(*(int *)(this + 0x18) + 0x14)) {
      iVar7 = 0;
      do {
        if ((*(byte *)(iVar7 + local_38) & 0x10) != 0) {
          piVar5[iVar6] = iVar4;
          iVar6 = iVar6 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 0x24;
      } while (iVar4 < *(int *)(*(int *)(this + 0x18) + 0x14));
    }
    cgmWED_SYS::Dijkstra
              ((cgmWED_SYS *)local_40,0,(int *)0x0,iVar6,piVar5,(float *)0x0,
               cgmWED_SYS::pQueryDefault);
    iVar4 = 0;
    if (0 < *(int *)(*(int *)(this + 0x18) + 0x14)) {
      iVar6 = 0;
      do {
        local_58 = 0.0;
        local_54 = 1.0;
        local_50 = 0.0;
        fVar1 = *(float *)(iVar6 + 0x18 + local_38);
        local_5c = param_1;
        if (param_1 < ___real_00000000) {
          local_5c = 0.0;
          local_58 = param_1;
          local_50 = 1.0;
          local_54 = 0.0;
        }
        fVar2 = local_50;
        if ((local_58 <= fVar1) && (fVar2 = local_54, fVar1 <= local_5c)) {
          local_44 = local_5c;
          local_48 = local_54;
          if (local_5c < local_58) {
            local_44 = local_58;
            local_48 = local_50;
            local_58 = local_5c;
            local_50 = local_54;
          }
          fVar2 = ((fVar1 - local_58) * (local_48 - local_50)) / (local_44 - local_58) + local_50;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x24;
        *(float *)(*(int *)(this + 0x34) + -4 + iVar4 * 4) = fVar2;
      } while (iVar4 < *(int *)(*(int *)(this + 0x18) + 0x14));
    }
    apFree(piVar5);
    cgmWED_SYS::Term((cgmWED_SYS *)local_40);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_geom.cpp
   addr: 004E4F40 */

int __thiscall objMOD_NOISE_DEFORM::Modify(objMOD_NOISE_DEFORM *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fStack_20;
  objMOD_NOISE_DEFORM *poStack_1c;
  float fStack_18;
  uint local_10;
  
  local_10 = (uint)(ABS(objMODIFIER::elapsedTime) < _DAT_005dc35c);
  if ((float)local_10 == ___real_00000000) {
    poStack_1c = this + 0x30;
    fStack_18 = 0.0;
    fStack_20 = 0.0;
    iVar1 = (**(code **)(*(int *)(this + 0x38) + 0x10))(&objMODIFIER::viewPos,DAT_005dc360);
    if (iVar1 != 0) {
      iVar1 = 0;
      **(uint **)(this + 0x18) = **(uint **)(this + 0x18) | 1;
      if (0 < *(int *)(*(int *)(this + 0x18) + 0x14)) {
        iVar2 = 0;
        do {
          fStack_20 = *(float *)(this + 0x28) * *(float *)(*(int *)(this + 0x20) + iVar2);
          fStack_18 = *(float *)(this + 0x28) * ((float *)(*(int *)(this + 0x20) + iVar2))[2];
          poStack_1c = (objMOD_NOISE_DEFORM *)(*(float *)(this + 0x2c) * *(float *)(this + 0xec));
          fVar4 = (float10)(**(code **)(*(int *)m3dNoise + 8))(&fStack_20);
          fVar4 = (fVar4 + (float10)___real_3f800000) * (float10)___real_3f000000;
          if (*(int *)(this + 0x34) != 0) {
            fVar4 = fVar4 * (float10)*(float *)(*(int *)(this + 0x34) + iVar1 * 4);
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar2 + 0xc;
          *(undefined4 *)(iVar2 + *(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x40)) =
               *(undefined4 *)(iVar2 + *(int *)(this + 0x20));
          *(float *)(*(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x40) + -8 + iVar3) =
               (float)(fVar4 * (float10)*(float *)(this + 0x24) +
                      (float10)*(float *)(iVar2 + 4 + *(int *)(this + 0x20)));
          *(undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x40) + -4 + iVar3) =
               *(undefined4 *)(iVar2 + 8 + *(int *)(this + 0x20));
          iVar2 = iVar3;
        } while (iVar1 < *(int *)(*(int *)(this + 0x18) + 0x14));
      }
      *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
           *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x2000;
    }
  }
  return 1;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E5090
   addr: 004E5090
   addr: 004E5090
   addr: 004E5090
   addr: 004E5090
   addr: 004E5090 */

void * __thiscall cgmSEARCH_VLIST::_scalar_deleting_destructor_(cgmSEARCH_VLIST *this,uint param_1)

{
  *(undefined ***)this = &cgmSEARCH::_vftable_;
  operator_delete(*(void **)(this + 0xc));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E50C0
   addr: 004E50C0 */

void * __thiscall objMOD_SKIN::_scalar_deleting_destructor_(objMOD_SKIN *this,uint param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  *(undefined ***)this = &_vftable_;
  if (((byte)this[4] & 4) == 0) {
    apFree(*(void **)(this + 0x28));
    iVar1 = 0;
    *(undefined4 *)(this + 0x28) = 0;
    apFree(*(void **)(this + 0x30));
    *(undefined4 *)(this + 0x30) = 0;
    apFree(*(void **)(this + 0x34));
    iVar2 = 0;
    *(undefined4 *)(this + 0x34) = 0;
    if (0 < *(int *)(this + 0x38)) {
      do {
        pbVar3 = (byte *)(*(int *)(this + 0x3c) + iVar1);
        if ((*pbVar3 & 4) == 0) {
          apFree(*(void **)(pbVar3 + 0x44));
          pbVar3[0x44] = 0;
          pbVar3[0x45] = 0;
          pbVar3[0x46] = 0;
          pbVar3[0x47] = 0;
          if (*(int **)(pbVar3 + 0x4c) != (int *)0x0) {
            (**(code **)(**(int **)(pbVar3 + 0x4c) + 4))(1);
          }
          pbVar3[0x4c] = 0;
          pbVar3[0x4d] = 0;
          pbVar3[0x4e] = 0;
          pbVar3[0x4f] = 0;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x50;
      } while (iVar2 < *(int *)(this + 0x38));
    }
  }
  apFree(*(void **)(this + 0x3c));
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined ***)this = &objMOD_GEOM::_vftable_;
  apFree(*(void **)(this + 0x1c));
  apFree(*(void **)(this + 0x20));
  objMODIFIER::~objMODIFIER((objMODIFIER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E5190
   addr: 004E5190 */

void __thiscall objMOD_NOISE_DEFORM_UV::AdvanceTime(objMOD_NOISE_DEFORM_UV *this)

{
  *(float *)(this + 0xec) = objMODIFIER::elapsedTime + *(float *)(this + 0xec);
  return;
}




/* from: engine:obj_mod_geom.cpp
   addr: 004E51B0
   addr: 004E51B0 */

void * __thiscall
objMOD_NOISE_DEFORM::_vector_deleting_destructor_(objMOD_NOISE_DEFORM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x34));
  *(undefined ***)(this + 0x38) = &m3dVOL::_vftable_;
  *(undefined ***)this = &objMOD_GEOM::_vftable_;
  apFree(*(void **)(this + 0x1c));
  apFree(*(void **)(this + 0x20));
  objMODIFIER::~objMODIFIER((objMODIFIER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

