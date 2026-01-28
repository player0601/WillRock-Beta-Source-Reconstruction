
/* from: engine:pte_spot.cpp
   addr: 004C7110 */

int __fastcall pteSpotInit(void)

{
  int iVar1;
  
  DAT_00930bcc = txmMANAGER::Add(txmManager,s_lspot,0x40003,1);
  if (DAT_00930bcc == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = pteSpotAnimInit();
  return (uint)(iVar1 != 0);
}




/* from: engine:pte_spot.cpp
   addr: 004C7140 */

pteSPOT * __thiscall pteSPOT::pteSPOT(pteSPOT *this,int param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pteSHADER::pteSHADER((pteSHADER *)this);
  *(int *)(this + 0x8c) = param_1;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xec) = 0;
  uVar1 = DAT_00930bcc;
  if (*(int *)(this + 0x8c) == 1) {
    *(undefined4 *)(this + 0xa4) = DAT_00930bcc;
    *(undefined4 *)(this + 0xa0) = uVar1;
  }
  *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x6f;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
  *(undefined4 *)(this + 200) = 0x41700000;
  m3dCOLOR::m3dCOLOR((m3dCOLOR *)&local_10,0xffffffff);
  *(undefined4 *)(this + 0xa8) = local_10;
  *(undefined4 *)(this + 0xac) = local_c;
  *(undefined4 *)(this + 0xb0) = local_8;
  *(undefined4 *)(this + 0xb4) = local_4;
  *(undefined4 *)(this + 0xb8) = 0x437f0000;
  *(undefined4 *)(this + 0xbc) = 0x437f0000;
  *(undefined4 *)(this + 0xc0) = 0x437f0000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xc4) = 0x437f0000;
  return this;
}




/* from: engine:pte_spot.cpp
   addr: 004C7270
   addr: 004C7270 */

void * __thiscall pteSPOT::_scalar_deleting_destructor_(pteSPOT *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x9c));
  *(undefined4 *)(this + 0x9c) = 0;
  pteSHADER::~pteSHADER((pteSHADER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:pte_spot.cpp
   addr: 004C72B0 */

void __thiscall pteSPOT::~pteSPOT(pteSPOT *this)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x9c));
  *(undefined4 *)(this + 0x9c) = 0;
  pteSHADER::~pteSHADER((pteSHADER *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_spot.cpp
   addr: 004C72E0 */

void __thiscall pteSPOT::Init(pteSPOT *this)

{
  pteSPOT *ppVar1;
  pteSPOT *ppVar2;
  float fVar3;
  int iVar4;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0.0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar4 = pteSHADER::ReadFloat((pteSHADER *)this,s_radius,&local_34);
  if (iVar4 != 0) {
    *(float *)(this + 200) = local_34;
  }
  ppVar1 = this + 0xa8;
  ppVar2 = this + 0xb8;
  local_20 = *(undefined4 *)ppVar1;
  local_1c = *(undefined4 *)(this + 0xac);
  local_18 = *(undefined4 *)(this + 0xb0);
  local_14 = *(undefined4 *)(this + 0xb4);
  local_10 = *(float *)ppVar2;
  local_c = *(undefined4 *)(this + 0xbc);
  local_8 = *(undefined4 *)(this + 0xc0);
  local_4 = *(undefined4 *)(this + 0xc4);
  pteSHADER::ReadColor((pteSHADER *)this,s_colorLM,(m3dCOLOR *)&local_20);
  pteSHADER::ReadColor((pteSHADER *)this,s_colorBase,(m3dCOLOR *)&local_10);
  local_30 = *(float *)ppVar2;
  local_2c = *(float *)(this + 0xbc);
  local_28 = *(float *)(this + 0xc0);
  local_24 = *(undefined4 *)(this + 0xc4);
  iVar4 = pteSHADER::ReadColor((pteSHADER *)this,s_color,(m3dCOLOR *)&local_30);
  if (iVar4 != 0) {
    fVar3 = local_30 * ___real_3f333333;
    *(float *)ppVar1 = local_30;
    *(float *)ppVar2 = fVar3;
    fVar3 = local_2c * ___real_3f333333;
    *(float *)(this + 0xac) = local_2c;
    *(float *)(this + 0xb0) = local_28;
    *(undefined4 *)(this + 0xb4) = 0x437f0000;
    *(float *)(this + 0xbc) = fVar3;
    *(float *)(this + 0xc0) = local_28 * ___real_3f333333;
    return;
  }
  *(undefined4 *)ppVar1 = local_20;
  *(undefined4 *)(this + 0xac) = local_1c;
  *(undefined4 *)(this + 0xb0) = local_18;
  *(undefined4 *)(this + 0xb4) = local_14;
  *(float *)ppVar2 = local_10;
  *(undefined4 *)(this + 0xbc) = local_c;
  *(undefined4 *)(this + 0xc0) = local_8;
  *(undefined4 *)(this + 0xc4) = local_4;
  return;
}




/* from: engine:pte_spot.cpp
   addr: 004C74A0 */

void __thiscall pteSPOT::SetStateRend(pteSPOT *this,int param_1)

{
  *(int *)(this + 0x7c) = param_1;
  if ((param_1 & 0x40U) != 0) {
    *(undefined4 *)(this + 8) = 0x14;
    return;
  }
  *(undefined4 *)(this + 8) = 10;
  return;
}




/* from: engine:pte_spot.cpp
   addr: 004C74D0 */

void __thiscall pteSPOT::SetOrg(pteSPOT *this,m3dV *param_1)

{
  *(undefined4 *)(this + 0x90) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 8);
  return;
}




/* from: engine:pte_spot.cpp
   addr: 004C74F0 */

void __thiscall
pteSPOT::SetColor(pteSPOT *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  *(undefined4 *)(this + 0xa8) = param_2;
  *(undefined4 *)(this + 0xac) = param_3;
  *(undefined4 *)(this + 0xb0) = param_4;
  *(undefined4 *)(this + 0xb4) = param_5;
  *(undefined4 *)(this + 0xb8) = param_6;
  *(undefined4 *)(this + 0xbc) = param_7;
  *(undefined4 *)(this + 0xc0) = param_8;
  *(undefined4 *)(this + 0xc4) = param_9;
  return;
}




/* from: engine:pte_spot.cpp
   addr: 004C7540 */

void __thiscall pteSPOT::SetTex(pteSPOT *this,txmTEXTURE *param_1)

{
  *(txmTEXTURE **)(this + 0xa4) = param_1;
  *(txmTEXTURE **)(this + 0xa0) = param_1;
  return;
}




/* from: engine:pte_spot.cpp
   addr: 004C7560 */

int __thiscall pteSPOT::InitLevel(pteSPOT *this,scnSCENE *param_1)

{
  void *pvVar1;
  
  pvVar1 = apMalloc(*(uint *)(param_1 + 0x48));
  *(void **)(this + 0x9c) = pvVar1;
  return (uint)(pvVar1 != (void *)0x0);
}




/* from: engine:pte_spot.cpp
   addr: 004C7590 */

void __thiscall pteSPOT::TermLevel(pteSPOT *this)

{
  apFree(*(void **)(this + 0x9c));
  *(undefined4 *)(this + 0x9c) = 0;
  return;
}




/* from: engine:pte_spot.cpp
   addr: 004C75B0 */

int __thiscall pteSPOT::DeleteObjNotify(pteSPOT *this,objOBJ *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  pteSPOT *ppVar4;
  pteSPOT *ppVar5;
  
  iVar1 = 0;
  iVar3 = *(int *)(this + 0xec);
  if (0 < iVar3) {
    ppVar4 = this + 0xcc;
    ppVar5 = ppVar4;
    while (*(objOBJ **)ppVar5 != param_1) {
      iVar1 = iVar1 + 1;
      ppVar5 = ppVar5 + 4;
      if (iVar3 <= iVar1) {
        return 0;
      }
    }
    iVar1 = 0;
    do {
      if (*(objOBJ **)ppVar4 == param_1) break;
      iVar1 = iVar1 + 1;
      ppVar4 = ppVar4 + 4;
    } while (iVar1 < iVar3);
    if ((iVar1 < iVar3) && (iVar1 < iVar3 + -1)) {
      ppVar4 = this + iVar1 * 4 + 0xd0;
      ppVar5 = this + iVar1 * 4 + 0xcc;
      for (uVar2 = (iVar3 - iVar1) * 4 - 4U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)ppVar5 = *(undefined4 *)ppVar4;
        ppVar4 = ppVar4 + 4;
        ppVar5 = ppVar5 + 4;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppVar5 = *ppVar4;
        ppVar4 = ppVar4 + 1;
        ppVar5 = ppVar5 + 1;
      }
    }
  }
  return 0;
}




/* from: engine:pte_spot.cpp
   addr: 004C7630 */

void __thiscall pteSPOT::AddObjExclude(pteSPOT *this,objOBJ *param_1)

{
  if ((param_1 != (objOBJ *)0x0) && (*(int *)(this + 0xec) < 8)) {
    *(objOBJ **)(this + *(int *)(this + 0xec) * 4 + 0xcc) = param_1;
    *(int *)(this + 0xec) = *(int *)(this + 0xec) + 1;
  }
  return;
}




/* from: engine:pte_spot.cpp
   addr: 004C7660 */

int __thiscall pteSPOT::IsShadeObj(pteSPOT *this,objOBJ *param_1)

{
  int iVar1;
  pteSPOT *ppVar2;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  if ((((byte)this[4] & 1) != 0) &&
     (((iVar1 != 0 || (((byte)this[0xf4] & 1) == 0)) && (((byte)*param_1 & 0x20) == 0)))) {
    if (iVar1 == 0) {
      if (*(char *)((int)*(short *)(param_1 + 0x1c) + *(int *)(this + 0x9c)) != '\0') {
        iVar1 = 0;
        if (*(int *)(this + 0xec) < 1) {
          return 1;
        }
        ppVar2 = this + 0xcc;
        while (*(objOBJ **)ppVar2 != param_1) {
          iVar1 = iVar1 + 1;
          ppVar2 = ppVar2 + 4;
          if (*(int *)(this + 0xec) <= iVar1) {
            return 1;
          }
        }
      }
    }
    else if ((((*(uint *)(iVar1 + 4) & 0x10) == 0) && ((*(uint *)(iVar1 + 4) & 0x48) != 0)) &&
            (iVar1 = abvBVOL::DistPoint(*(abvBVOL **)(iVar1 + 0x100),(m3dV *)(this + 0x90),
                                        *(float *)(this + 200),(cdtINFO *)0x0), iVar1 != 0)) {
      iVar1 = 0;
      if (*(int *)(this + 0xec) < 1) {
        return 1;
      }
      ppVar2 = this + 0xcc;
      do {
        if (*(objOBJ **)ppVar2 == param_1) {
          return 0;
        }
        iVar1 = iVar1 + 1;
        ppVar2 = ppVar2 + 4;
      } while (iVar1 < *(int *)(this + 0xec));
      return 1;
    }
  }
  return 0;
}




/* from: engine:pte_spot.cpp
   addr: 004C7730 */

int __thiscall pteSPOT::IsShadeInst(pteSPOT *this,animINST *param_1)

{
  if (((byte)param_1[4] & 0x48) == 0) {
    return 0;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_spot.cpp
   addr: 004C7750 */

int __thiscall pteSPOT::IsActive(pteSPOT *this,camCAMERA *param_1)

{
  camCAMERA *this_00;
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_24;
  float local_20;
  float local_1c;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  this_00 = param_1;
  local_14 = 3;
  local_18 = &m3dSPHERE::_vftable_;
  camCAMERA::GetOrigin(param_1,(m3dV *)&local_24);
  fVar5 = (*(float *)(this + 0x90) - local_24) * (*(float *)(this + 0x90) - local_24) +
          (*(float *)(this + 0x94) - local_20) * (*(float *)(this + 0x94) - local_20) +
          (*(float *)(this + 0x98) - local_1c) * (*(float *)(this + 0x98) - local_1c);
  if (m3dSimdType == 0) {
    fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    param_1 = (camCAMERA *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar5;
    uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    param_1 = (camCAMERA *)uVar3;
    FastExitMediaState();
  }
  else {
    param_1 = (camCAMERA *)SQRT(fVar5);
  }
  if (*(float *)(this_00 + 0x80) * *(float *)(this + 200) * ___real_458fc000 < (float)param_1) {
    *(uint *)(this + 0xf4) = *(uint *)(this + 0xf4) | 1;
    return 0;
  }
  *(uint *)(this + 0xf4) = *(uint *)(this + 0xf4) & 0xfffffffe;
  local_10 = *(undefined4 *)(this + 0x90);
  local_c = *(undefined4 *)(this + 0x94);
  local_8 = *(undefined4 *)(this + 0x98);
  local_4 = *(undefined4 *)(this + 200);
  iVar1 = camCAMERA::QualSpherePOV(this_00,(m3dSPHERE *)&local_18);
  return (uint)(iVar1 != 1);
}




/* from: engine:pte_spot.cpp
   addr: 004C78F0 */

void __thiscall pteSPOT::PrepareFrame(pteSPOT *this,scnSCENE *param_1,camCAMERA *param_2)

{
  pteSPOT *ppVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_ESI;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uStack_18;
  
  if (param_2 == (camCAMERA *)0x0) {
    *(uint *)(this + 0xf4) = *(uint *)(this + 0xf4) & 0xfffffffe;
  }
  if (((byte)this[0xf4] & 1) == 0) {
    uStack_18 = 0;
    ppVar1 = this + 0x90;
    (**(code **)(**(int **)(param_1 + 0x50) + 4))
              (ppVar1,ppVar1,*(undefined4 *)(this + 200),*(undefined4 *)(pteManager + 0x1794c));
    uVar6 = *(uint *)(param_1 + 0x48);
    puVar7 = *(undefined4 **)(this + 0x9c);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    iVar8 = 0;
    iVar2 = **(int **)(pteManager + 0x1794c);
    iVar3 = (*(int **)(pteManager + 0x1794c))[1];
    if (0 < iVar2) {
      do {
        iVar4 = (**(code **)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x4c) +
                                              (uint)*(ushort *)(iVar3 + iVar8 * 2) * 4) + 0xc0) +
                            0x10))(ppVar1,*(undefined4 *)(this + 200),0,&uStack_18,0);
        if (iVar4 != 0) {
          *(undefined1 *)((uint)*(ushort *)(iVar3 + iVar8 * 2) + *(int *)(this + 0x9c)) = 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar2);
    }
  }
  return;
}




/* from: engine:pte_spot.cpp
   addr: 004C79D0 */

int __thiscall pteSPOT::ShadeFacePrepare(pteSPOT *this,objOBJ *param_1)

{
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),1);
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x004c7eea) */
/* WARNING: Removing unreachable block (ram,0x004c809a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: engine:pte_spot.cpp
   addr: 004C79F0 */

int __thiscall
pteSPOT::ShadeFace(pteSPOT *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
                  ptePOLY_DATA *param_4)

{
  int iVar1;
  pteSDR_INFO *ppVar2;
  float fVar3;
  int *piVar4;
  ptePOLY_DATA *ppVar5;
  int iVar6;
  float *pfVar7;
  objFACE *poVar8;
  uint uVar9;
  objOBJ *poVar10;
  int iVar11;
  float *pfVar12;
  objOBJ *poVar13;
  int iVar14;
  pteSPOT *ppVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  float10 fVar18;
  undefined8 extraout_MM1;
  undefined8 uVar19;
  undefined8 extraout_MM1_00;
  undefined8 extraout_MM1_01;
  undefined8 extraout_MM1_02;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float local_3c [3];
  float local_30 [3];
  float local_24 [3];
  pteSPOT *local_18;
  int local_14;
  pteSDR_INFO *local_10;
  float local_c;
  float local_8;
  
  local_c = *(float *)(this + 200);
  local_18 = this;
  (**(code **)(*(int *)this + 0x18))(local_3c);
  iVar14 = param_2 * 0xc;
  pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x44) + iVar14);
  if (local_c < ABS((local_3c[0] - *(float *)(param_3 + 8)) * *pfVar7 +
                    (local_3c[1] - *(float *)(param_3 + 0xc)) * pfVar7[1] +
                    (local_3c[2] - *(float *)(param_3 + 0x10)) * pfVar7[2])) {
    return 0;
  }
  ppVar15 = local_18;
  local_14 = iVar14;
  if (*(int *)(param_3 + 0x218) != 0) {
    fVar29 = DAT_005f9988 * pfVar7[1] + DAT_005f998c * pfVar7[2] + _m3dVUnitX * *pfVar7;
    _DAT_00930bd0 = _m3dVUnitX - fVar29 * *pfVar7;
    _DAT_00930bd4 = DAT_005f9988 - fVar29 * pfVar7[1];
    _DAT_00930bd8 = DAT_005f998c - fVar29 * pfVar7[2];
    iVar6 = _m3dNormalize((m3dV *)&DAT_00930bd0);
    if (iVar6 == 0) {
      pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x44) + iVar14);
      fVar29 = DAT_005f9994 * pfVar7[1] + DAT_005f9998 * pfVar7[2] + _m3dVUnitY * *pfVar7;
      _DAT_00930bd0 = _m3dVUnitY - fVar29 * *pfVar7;
      _DAT_00930bd4 = DAT_005f9994 - fVar29 * pfVar7[1];
      _DAT_00930bd8 = DAT_005f9998 - fVar29 * pfVar7[2];
      iVar6 = _m3dNormalize((m3dV *)&DAT_00930bd0);
      if (iVar6 == 0) {
        return 0;
      }
    }
    pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x44) + iVar14);
    _DAT_00930bdc = _DAT_00930bd4 * pfVar7[2] - _DAT_00930bd8 * pfVar7[1];
    _DAT_00930be0 = _DAT_00930bd8 * *pfVar7 - _DAT_00930bd0 * pfVar7[2];
    _DAT_00930be4 = _DAT_00930bd0 * pfVar7[1] - _DAT_00930bd4 * *pfVar7;
    if (((byte)*param_1 & 1) == 0) {
      poVar8 = objOBJ::GetFace(param_1,param_2);
      ppVar2 = (pteSDR_INFO *)
               (*(int *)(*(int *)(param_1 + 0x28) + 0x40) + (uint)*(ushort *)(poVar8 + 2) * 0xc);
      poVar10 = param_1 + 0x3c;
      local_10 = ppVar2;
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar16 = (undefined4)*(undefined8 *)ppVar2;
          uVar20 = CONCAT44(uVar16,uVar16);
          uVar16 = (undefined4)((ulonglong)*(undefined8 *)ppVar2 >> 0x20);
          uVar19 = CONCAT44(uVar16,uVar16);
          uVar24 = CONCAT44(*(float *)(ppVar2 + 8),*(float *)(ppVar2 + 8));
          uVar21 = PackedFloatingMUL(uVar20,*(undefined8 *)poVar10);
          uVar22 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x4c));
          uVar25 = PackedFloatingMUL(uVar24,*(undefined8 *)(param_1 + 0x5c));
          uVar21 = PackedFloatingADD(uVar21,*(undefined8 *)(param_1 + 0x6c));
          uVar23 = PackedFloatingMUL(uVar20,*(undefined8 *)(param_1 + 0x44));
          uVar20 = PackedFloatingADD(uVar22,uVar25);
          uVar22 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x54));
          uVar24 = PackedFloatingMUL(uVar24,*(undefined8 *)(param_1 + 100));
          uVar19 = PackedFloatingADD(uVar23,*(undefined8 *)(param_1 + 0x74));
          uVar20 = PackedFloatingADD(uVar21,uVar20);
          uVar21 = PackedFloatingADD(uVar22,uVar24);
          local_30[1] = (float)((ulonglong)uVar20 >> 0x20);
          local_30[0] = (float)uVar20;
          uVar20 = PackedFloatingADD(uVar19,uVar21);
          local_30[2] = (float)uVar20;
          FastExitMediaState();
        }
        else {
          iVar6 = 0;
          pfVar7 = local_30;
          do {
            iVar14 = 0;
            *pfVar7 = 0.0;
            pfVar12 = (float *)(((int)poVar10 - (int)local_30) + (int)pfVar7);
            do {
              iVar11 = iVar14 * 4;
              fVar29 = *pfVar12;
              iVar14 = iVar14 + 1;
              pfVar12 = pfVar12 + 4;
              *pfVar7 = *(float *)(ppVar2 + iVar11) * fVar29 + *pfVar7;
            } while (iVar14 < 3);
            iVar14 = iVar6 + iVar14 * 4;
            iVar6 = iVar6 + 1;
            *pfVar7 = *(float *)(poVar10 + iVar14 * 4) + *pfVar7;
            pfVar7 = pfVar7 + 1;
            iVar14 = local_14;
          } while (iVar6 < 3);
        }
      }
    }
    else {
      piVar4 = *(int **)(param_1 + 0x28);
      uVar9 = (uint)*(ushort *)((uint)*(byte *)(piVar4 + 1) * param_2 + 2 + *piVar4);
      iVar6 = piVar4[0x10] + uVar9 * 0xc;
      local_30[0] = *(float *)(piVar4[0x10] + uVar9 * 0xc);
      local_30[1] = *(float *)(iVar6 + 4);
      local_30[2] = *(float *)(iVar6 + 8);
    }
    m3dMATR::MakeWCS2LCS
              ((m3dMATR *)&DAT_00930a90,(m3dV *)local_30,(m3dV *)&DAT_00930bd0,
               (m3dV *)(*(int *)(*(int *)(param_1 + 0x28) + 0x44) + iVar14),(m3dV *)&DAT_00930bdc);
    ppVar15 = local_18;
    local_14 = 0;
    if (0 < *(int *)(param_3 + 4)) {
      param_1 = (objOBJ *)&DAT_00930adc;
      iVar14 = -0x4c;
      ppVar2 = param_3 + 8;
      do {
        local_10 = ppVar2;
        if (m3dSimdType == 0) {
          fVar29 = *(float *)local_10;
          fVar30 = *(float *)(local_10 + 4);
          fVar3 = *(float *)(local_10 + 8);
          fVar27 = fVar30 * (float)DAT_00930aa8;
          fVar26 = fVar29 * (float)DAT_00930a98 + (float)DAT_00930ac8;
          fVar28 = fVar3 * (float)DAT_00930ab8;
          *(ulonglong *)param_1 =
               CONCAT44(fVar29 * DAT_00930a90._4_4_ + DAT_00930ac0._4_4_ +
                        fVar30 * DAT_00930aa0._4_4_ + fVar3 * DAT_00930ab0._4_4_,
                        fVar29 * (float)DAT_00930a90 + (float)DAT_00930ac0 +
                        fVar30 * (float)DAT_00930aa0 + fVar3 * (float)DAT_00930ab0);
          *(float *)(param_1 + 8) = fVar26 + fVar27 + fVar28;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar16 = (undefined4)*(undefined8 *)local_10;
          uVar20 = CONCAT44(uVar16,uVar16);
          uVar16 = (undefined4)((ulonglong)*(undefined8 *)local_10 >> 0x20);
          uVar19 = CONCAT44(uVar16,uVar16);
          uVar24 = CONCAT44(*(float *)(local_10 + 8),*(float *)(local_10 + 8));
          uVar21 = PackedFloatingMUL(uVar20,CONCAT44(DAT_00930a90._4_4_,(float)DAT_00930a90));
          uVar22 = PackedFloatingMUL(uVar19,CONCAT44(DAT_00930aa0._4_4_,(float)DAT_00930aa0));
          uVar25 = PackedFloatingMUL(uVar24,CONCAT44(DAT_00930ab0._4_4_,(float)DAT_00930ab0));
          uVar21 = PackedFloatingADD(uVar21,CONCAT44(DAT_00930ac0._4_4_,(float)DAT_00930ac0));
          uVar23 = PackedFloatingMUL(uVar20,CONCAT44(DAT_00930a98._4_4_,(float)DAT_00930a98));
          uVar20 = PackedFloatingADD(uVar22,uVar25);
          uVar22 = PackedFloatingMUL(uVar19,CONCAT44(DAT_00930aa8._4_4_,(float)DAT_00930aa8));
          uVar24 = PackedFloatingMUL(uVar24,CONCAT44(DAT_00930ab8._4_4_,(float)DAT_00930ab8));
          uVar19 = PackedFloatingADD(uVar23,CONCAT44(DAT_00930ac8._4_4_,(float)DAT_00930ac8));
          uVar20 = PackedFloatingADD(uVar21,uVar20);
          uVar21 = PackedFloatingADD(uVar22,uVar24);
          *(undefined8 *)param_1 = uVar20;
          uVar20 = PackedFloatingADD(uVar19,uVar21);
          *(int *)(param_1 + 8) = (int)uVar20;
          FastExitMediaState();
        }
        else {
          iVar6 = 0;
          poVar10 = param_1;
          do {
            *(float *)poVar10 = 0.0;
            iVar11 = 0;
            poVar13 = poVar10 + iVar14;
            do {
              iVar1 = iVar11 * 4;
              fVar29 = *(float *)poVar13;
              iVar11 = iVar11 + 1;
              poVar13 = poVar13 + 0x10;
              *(float *)poVar10 = *(float *)(local_10 + iVar1) * fVar29 + *(float *)poVar10;
            } while (iVar11 < 3);
            iVar11 = iVar6 + iVar11 * 4;
            iVar6 = iVar6 + 1;
            *(float *)poVar10 = *(float *)((int)&DAT_00930a90 + iVar11 * 4) + *(float *)poVar10;
            poVar10 = poVar10 + 4;
          } while (iVar6 < 3);
        }
        local_14 = local_14 + 1;
        param_1 = param_1 + 0xc;
        iVar14 = iVar14 + -0xc;
        ppVar2 = local_10 + 0xc;
      } while (local_14 < *(int *)(param_3 + 4));
    }
    _DAT_00930ad8 = *(undefined4 *)(param_3 + 4);
    pteSHADER::MarkFaceFirstShaded((pteSHADER *)local_18);
  }
  (**(code **)(*(int *)ppVar15 + 0x18))(local_3c);
  uVar20 = extraout_MM1;
  if (m3dSimdType == 0) {
    local_24[0] = local_3c[0] * (float)DAT_00930a90 + (float)DAT_00930ac0 +
                  local_3c[1] * (float)DAT_00930aa0 + local_3c[2] * (float)DAT_00930ab0;
    local_24[1] = local_3c[0] * DAT_00930a90._4_4_ + DAT_00930ac0._4_4_ +
                  local_3c[1] * DAT_00930aa0._4_4_ + local_3c[2] * DAT_00930ab0._4_4_;
    local_24[2] = local_3c[0] * (float)DAT_00930a98 + (float)DAT_00930ac8 +
                  local_3c[1] * (float)DAT_00930aa8 + local_3c[2] * (float)DAT_00930ab8;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar20 = PackedFloatingMUL(CONCAT44(local_3c[0],local_3c[0]),
                               CONCAT44(DAT_00930a90._4_4_,(float)DAT_00930a90));
    uVar19 = PackedFloatingMUL(CONCAT44(local_3c[1],local_3c[1]),
                               CONCAT44(DAT_00930aa0._4_4_,(float)DAT_00930aa0));
    uVar22 = PackedFloatingMUL(CONCAT44(local_3c[2],local_3c[2]),
                               CONCAT44(DAT_00930ab0._4_4_,(float)DAT_00930ab0));
    uVar21 = PackedFloatingADD(uVar20,CONCAT44(DAT_00930ac0._4_4_,(float)DAT_00930ac0));
    uVar24 = PackedFloatingMUL(CONCAT44(local_3c[0],local_3c[0]),
                               CONCAT44(DAT_00930a98._4_4_,(float)DAT_00930a98));
    uVar20 = PackedFloatingADD(uVar19,uVar22);
    uVar22 = PackedFloatingMUL(CONCAT44(local_3c[1],local_3c[1]),
                               CONCAT44(DAT_00930aa8._4_4_,(float)DAT_00930aa8));
    uVar25 = PackedFloatingMUL(CONCAT44(local_3c[2],local_3c[2]),
                               CONCAT44(DAT_00930ab8._4_4_,(float)DAT_00930ab8));
    uVar19 = PackedFloatingADD(uVar24,CONCAT44(DAT_00930ac8._4_4_,(float)DAT_00930ac8));
    uVar21 = PackedFloatingADD(uVar21,uVar20);
    uVar22 = PackedFloatingADD(uVar22,uVar25);
    local_24[1] = (float)((ulonglong)uVar21 >> 0x20);
    local_24[0] = (float)uVar21;
    uVar21 = PackedFloatingADD(uVar19,uVar22);
    local_24[2] = (float)uVar21;
    FastExitMediaState();
  }
  else {
    iVar14 = 0;
    do {
      local_24[iVar14] = 0.0;
      iVar6 = 0;
      pfVar7 = (float *)((int)&DAT_00930a90 + iVar14 * 4);
      fVar29 = ___real_00000000;
      do {
        pfVar12 = local_3c + iVar6;
        fVar30 = *pfVar7;
        iVar6 = iVar6 + 1;
        pfVar7 = pfVar7 + 4;
        fVar29 = *pfVar12 * fVar30 + fVar29;
      } while (iVar6 < 3);
      local_24[iVar14] = fVar29;
      iVar11 = iVar14 + 1;
      local_24[iVar14] = fVar29 + *(float *)((int)&DAT_00930a90 + (iVar14 + iVar6 * 4) * 4);
      iVar14 = iVar11;
    } while (iVar11 < 3);
  }
  fVar29 = local_c * local_c - local_24[1] * local_24[1];
  if (DAT_005dbaa0 <= fVar29) {
    if (m3dSimdType == 0) {
      fVar29 = fVar29 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar31 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
      fVar30 = auVar31._0_4_;
      param_2 = (int)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar30 *
                      (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar29 * fVar30 * fVar30) *
                     fVar29);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar17 = (ulonglong)(uint)fVar29;
      uVar20 = PackedFloatingReciprocalSQRAprox(uVar20,uVar17);
      uVar21 = PackedFloatingMUL(uVar20,uVar20);
      uVar21 = PackedFloatingReciprocalSQRIter1(uVar21,uVar17);
      uVar20 = PackedFloatingReciprocalIter2(uVar21,uVar20);
      uVar20 = PackedFloatingMUL(uVar20,uVar17);
      param_2 = (int)uVar20;
      FastExitMediaState();
    }
    else {
      param_2 = (int)SQRT(fVar29);
    }
    iVar14 = m3xzIsBelongPointPoly_A((m3dPOLY *)&DAT_00930ad8,(m3dV *)local_24,DAT_005dbaa0);
    uVar20 = extraout_MM1_00;
    if ((iVar14 == 0) &&
       (iVar6 = _m3xzIsIsectPolyCircle((m3dPOLY *)&DAT_00930ad8,(m3dV *)local_24,(float)param_2),
       uVar20 = extraout_MM1_01, iVar6 == 0)) {
      return 0;
    }
    if ((*(int *)(ppVar15 + 0x8c) == 1) && (___real_3f800000 < *(float *)(ppVar15 + 0xf0))) {
      if (iVar14 == 0) {
        _m3xzDist2PointPoly((m3dV *)local_24,(m3dPOLY *)&DAT_00930ad8,(m3dV *)0x0,&local_8);
        local_8 = local_24[1] * local_24[1] + local_8;
        uVar20 = extraout_MM1_02;
      }
      else {
        local_8 = local_24[1] * local_24[1];
      }
      if (m3dSimdType == 0) {
        rsqrtss(ZEXT416((uint)(local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small)),
                ZEXT416((uint)(local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small)));
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar17 = (ulonglong)(uint)local_8;
        uVar20 = PackedFloatingReciprocalSQRAprox(uVar20,uVar17);
        uVar21 = PackedFloatingMUL(uVar20,uVar20);
        uVar21 = PackedFloatingReciprocalSQRIter1(uVar21,uVar17);
        uVar20 = PackedFloatingReciprocalIter2(uVar21,uVar20);
        PackedFloatingMUL(uVar20,uVar17);
        FastExitMediaState();
      }
      fVar18 = (float10)CIpow();
      param_1 = (objOBJ *)(float)fVar18;
      if ((float10)___real_00000000 <= fVar18) {
        if (___real_3f800000 < (float)param_1) {
          param_1 = (objOBJ *)0x3f800000;
        }
      }
      else {
        param_1 = (objOBJ *)0x0;
      }
      if (((((float)param_1 * *(float *)(ppVar15 + 0xa8) < *(float *)(ppVar15 + 0xf0)) &&
           ((float)param_1 * *(float *)(ppVar15 + 0xac) < *(float *)(ppVar15 + 0xf0))) &&
          ((float)param_1 * *(float *)(ppVar15 + 0xb0) < *(float *)(ppVar15 + 0xf0))) &&
         ((((float)param_1 * *(float *)(ppVar15 + 0xb8) < *(float *)(ppVar15 + 0xf0) &&
           ((float)param_1 * *(float *)(ppVar15 + 0xbc) < *(float *)(ppVar15 + 0xf0))) &&
          ((float)param_1 * *(float *)(ppVar15 + 0xc0) < *(float *)(ppVar15 + 0xf0))))) {
        return 0;
      }
    }
    fVar29 = ___real_3ef80000 / (float)param_2;
    iVar14 = 0;
    local_18 = (pteSPOT *)(___real_3f000000 - local_24[0] * fVar29);
    fVar30 = ___real_3f000000 - local_24[2] * fVar29;
    if (0 < *(int *)(param_3 + 4)) {
      pfVar7 = (float *)&DAT_00930adc;
      ppVar5 = param_4;
      do {
        fVar3 = pfVar7[2];
        iVar14 = iVar14 + 1;
        *(float *)(ppVar5 + 4) = *pfVar7 * fVar29 + (float)local_18;
        *(float *)(ppVar5 + 8) = fVar3 * fVar29 + fVar30;
        pfVar7 = pfVar7 + 3;
        ppVar5 = ppVar5 + 8;
      } while (iVar14 < *(int *)(param_3 + 4));
    }
    if (*(int *)(ppVar15 + 0x8c) == 1) {
      fVar18 = (float10)CIpow();
      *(float *)param_4 = (float)fVar18;
    }
    return 1;
  }
  return 0;
}




/* from: engine:pte_spot.cpp
   addr: 004C8430 */

int __thiscall pteSPOT::GetStateRend(pteSPOT *this,int param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  uVar1 = *(uint *)(this + 0x7c);
  if (param_1 == 0) {
    if ((uVar1 & 0x40) == 0) {
      return 0;
    }
    cVar2 = ftol();
    cVar3 = ftol();
    cVar4 = ftol();
    cVar5 = ftol();
    if ((((cVar2 == '\0' && cVar3 == '\0') && cVar4 == '\0') && cVar5 == '\0') &&
       ((*(uint *)(*(int *)(vidDriver + 0x210) + 0x14) & 0x40000000) == 0)) {
      return 0;
    }
  }
  else if ((uVar1 & 0x40) != 0) {
    cVar2 = ftol();
    cVar3 = ftol();
    cVar4 = ftol();
    cVar5 = ftol();
    if (((cVar2 == '\0' && cVar3 == '\0') && cVar4 == '\0') && cVar5 == '\0') {
      return 0;
    }
  }
  *param_2 = uVar1;
  return 1;
}




/* from: engine:pte_spot.cpp
   addr: 004C8530 */

txmTEXTURE * __thiscall pteSPOT::GetTex(pteSPOT *this,int param_1,objOBJ *param_2,int param_3)

{
  if (param_1 == 0) {
    return *(txmTEXTURE **)(this + 0xa0);
  }
  return *(txmTEXTURE **)(this + 0xa4);
}




/* from: engine:pte_spot.cpp
   addr: 004C8550 */

void __thiscall pteSPOT::GetColor(pteSPOT *this,int param_1)

{
  pteSPOT *ppVar1;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    ppVar1 = this + 0xa8;
  }
  else {
    ppVar1 = this + 0xb8;
  }
  *(undefined4 *)param_1 = *(undefined4 *)ppVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(ppVar1 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(ppVar1 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(ppVar1 + 0xc);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_spot.cpp
   addr: 004C8590 */

int __thiscall pteSPOT::GetColor(pteSPOT *this,m3dV *param_1,int param_2,m3dCOLOR *param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  ulonglong uVar7;
  undefined8 extraout_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float *pfVar13;
  float *pfStack_38;
  float *pfStack_30;
  float fStack_2c;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [12];
  float fStack_c;
  float *pfStack_4;
  
  iVar3 = param_2;
  iVar4 = (**(code **)(*(int *)this + 0x20))(param_2,&param_2);
  if (iVar4 != 0) {
    fVar10 = (*(float *)(this + 0x90) - *pfStack_4) * (*(float *)(this + 0x90) - *pfStack_4) +
             (*(float *)(this + 0x94) - pfStack_4[1]) * (*(float *)(this + 0x94) - pfStack_4[1]) +
             (*(float *)(this + 0x98) - pfStack_4[2]) * (*(float *)(this + 0x98) - pfStack_4[2]);
    if (___real_3c23d70a <= *(float *)(this + 200)) {
      if (m3dSimdType == 0) {
        fVar10 = fVar10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        pfStack_4 = (float *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                              (`float___cdecl_m3dSqrt(float)'::__l2::three -
                              fVar10 * fVar11 * fVar11) * fVar10);
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar7 = (ulonglong)(uint)fVar10;
        uVar8 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar7);
        uVar9 = PackedFloatingMUL(uVar8,uVar8);
        uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
        uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
        uVar8 = PackedFloatingMUL(uVar8,uVar7);
        pfStack_4 = (float *)uVar8;
        FastExitMediaState();
      }
      else {
        pfStack_4 = (float *)SQRT(fVar10);
      }
      pfVar6 = pfStack_4;
      fVar10 = *(float *)(this + 200);
      pfVar13 = (float *)0x0;
      pfStack_38 = (float *)0x3f800000;
      fVar11 = 0.0;
      pfStack_4 = (float *)fVar10;
      if (fVar10 < ___real_00000000) {
        pfStack_4 = (float *)0x0;
        pfStack_38 = (float *)0x0;
        pfVar13 = (float *)0x3f800000;
        fVar11 = fVar10;
      }
      if (fVar11 <= (float)pfVar6) {
        if ((float)pfVar6 <= (float)pfStack_4) {
          fStack_2c = (float)pfStack_4;
          pfVar2 = (float *)fVar11;
          pfStack_30 = pfVar13;
          if ((float)pfStack_4 < fVar11) {
            pfStack_30 = pfStack_38;
            pfVar2 = pfStack_4;
            pfStack_38 = pfVar13;
            fStack_2c = fVar11;
          }
          pfVar13 = (float *)((((float)pfVar6 - (float)pfVar2) *
                              ((float)pfStack_30 - (float)pfStack_38)) / (fStack_2c - (float)pfVar2)
                             + (float)pfStack_38);
        }
      }
      else {
        pfStack_4 = pfStack_38;
        pfVar13 = pfStack_4;
      }
      pfStack_4 = pfVar13;
      pfVar6 = (float *)(**(code **)(*(int *)this + 0x10))(auStack_18,iVar3);
      fVar10 = pfVar6[3];
      fVar11 = pfVar6[1];
      fVar1 = pfVar6[2];
      *pfStack_4 = fStack_c * *pfVar6;
      pfStack_4[1] = fStack_c * fVar11;
      pfStack_4[2] = fStack_c * fVar1;
      pfStack_4[3] = fStack_c * fVar10;
      return 1;
    }
    if (m3dSimdType == 0) {
      fVar10 = fVar10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar11 = auVar12._0_4_;
      pfStack_4 = (float *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar10 * fVar11 * fVar11)
                           * fVar10);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar7 = (ulonglong)(uint)fVar10;
      uVar8 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar7);
      uVar9 = PackedFloatingMUL(uVar8,uVar8);
      uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
      uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
      uVar8 = PackedFloatingMUL(uVar8,uVar7);
      pfStack_4 = (float *)uVar8;
      FastExitMediaState();
    }
    else {
      pfStack_4 = (float *)SQRT(fVar10);
    }
    if ((float)pfStack_4 < *(float *)(this + 200)) {
      puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x10))(auStack_28,iVar3);
      *pfStack_4 = (float)*puVar5;
      pfStack_4[1] = (float)puVar5[1];
      pfStack_4[2] = (float)puVar5[2];
      pfStack_4[3] = (float)puVar5[3];
      return 1;
    }
  }
  return 0;
}




/* from: engine:pte_spot.cpp
   addr: 004C88C0 */

void __thiscall pteSPOT::MakeObjIndList(pteSPOT *this,cdtOFL *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = **(int **)(*(int *)(pteManager + 0x1793c) + 0x50);
  fVar2 = (float10)(**(code **)(*(int *)this + 100))(param_1,0);
  (**(code **)(iVar1 + 4))(this + 0x90,this + 0x90,(float)fVar2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_spot.cpp
   addr: 004C8900 */

int __thiscall pteSPOT::IsIncludeFaceStaticData(pteSPOT *this,objOBJ *param_1,int param_2)

{
  m3dV *pmVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float10 fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 local_120;
  float local_11c [60];
  float local_2c;
  pteSPOT *local_28;
  float local_24;
  float local_20;
  float local_1c;
  float *local_18;
  float *local_14;
  int local_10;
  float *local_c;
  objOBJ *local_8;
  
  local_28 = this;
  fVar14 = (float10)(**(code **)(*(int *)this + 100))();
  local_120 = 3;
  local_2c = (float)fVar14;
  if (((byte)*param_1 & 1) == 0) {
    pfVar7 = local_11c;
    local_10 = 0;
    local_8 = param_1 + 0x3c;
    local_c = pfVar7;
    do {
      piVar6 = *(int **)(param_1 + 0x28);
      local_14 = pfVar7;
      pfVar2 = (float *)(piVar6[0x10] +
                        (uint)*(ushort *)
                               ((uint)*(byte *)(piVar6 + 1) * param_2 + 2 + local_10 * 2 + *piVar6)
                        * 0xc);
      local_18 = pfVar2;
      if (m3dSimdType == 0) {
        if (((uint)local_8 & 0xf) == 0) {
          fVar23 = *pfVar2;
          fVar4 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar21 = fVar23 * *(float *)local_8 + *(float *)(local_8 + 0x30) +
                   fVar4 * *(float *)(local_8 + 0x10) + fVar5 * *(float *)(local_8 + 0x20);
          fVar22 = fVar23 * *(float *)(local_8 + 4) + *(float *)(local_8 + 0x34) +
                   fVar4 * *(float *)(local_8 + 0x14) + fVar5 * *(float *)(local_8 + 0x24);
          fVar23 = fVar23 * *(float *)(local_8 + 8) + *(float *)(local_8 + 0x38) +
                   fVar4 * *(float *)(local_8 + 0x18) + fVar5 * *(float *)(local_8 + 0x28);
        }
        else {
          fVar23 = *pfVar2;
          fVar4 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar21 = fVar23 * (float)*(undefined8 *)local_8 +
                   fVar4 * (float)*(undefined8 *)(local_8 + 0x10) +
                   fVar5 * (float)*(undefined8 *)(local_8 + 0x20) +
                   (float)*(undefined8 *)(local_8 + 0x30);
          fVar22 = fVar23 * (float)((ulonglong)*(undefined8 *)local_8 >> 0x20) +
                   fVar4 * (float)((ulonglong)*(undefined8 *)(local_8 + 0x10) >> 0x20) +
                   fVar5 * (float)((ulonglong)*(undefined8 *)(local_8 + 0x20) >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)(local_8 + 0x30) >> 0x20);
          fVar23 = fVar23 * (float)*(undefined8 *)(local_8 + 8) +
                   fVar4 * (float)*(undefined8 *)(local_8 + 0x18) +
                   fVar5 * (float)*(undefined8 *)(local_8 + 0x28) +
                   (float)*(undefined8 *)(local_8 + 0x38);
        }
        *(ulonglong *)pfVar7 = CONCAT44(fVar22,fVar21);
        pfVar7[2] = fVar23;
        local_c = pfVar7;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar12 = (undefined4)*(undefined8 *)pfVar2;
        uVar16 = CONCAT44(uVar12,uVar12);
        uVar12 = (undefined4)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
        uVar19 = CONCAT44(uVar12,uVar12);
        uVar20 = CONCAT44(pfVar2[2],pfVar2[2]);
        uVar13 = PackedFloatingMUL(uVar16,*(undefined8 *)local_8);
        uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_8 + 0x10));
        uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_8 + 0x20));
        uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(local_8 + 0x30));
        uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(local_8 + 8));
        uVar16 = PackedFloatingADD(uVar15,uVar17);
        uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_8 + 0x18));
        uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_8 + 0x28));
        uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(local_8 + 0x38));
        uVar16 = PackedFloatingADD(uVar13,uVar16);
        uVar13 = PackedFloatingADD(uVar15,uVar20);
        *(undefined8 *)pfVar7 = uVar16;
        uVar16 = PackedFloatingADD(uVar19,uVar13);
        pfVar7[2] = (float)uVar16;
        FastExitMediaState();
        local_c = pfVar7;
      }
      else {
        iVar11 = 0;
        iVar10 = (int)local_8 - (int)pfVar7;
        local_c = pfVar7;
        do {
          *pfVar7 = 0.0;
          iVar8 = 0;
          pfVar9 = (float *)(iVar10 + (int)pfVar7);
          do {
            pfVar3 = pfVar2 + iVar8;
            fVar23 = *pfVar9;
            iVar8 = iVar8 + 1;
            pfVar9 = pfVar9 + 4;
            *pfVar7 = *pfVar3 * fVar23 + *pfVar7;
          } while (iVar8 < 3);
          iVar8 = iVar11 + iVar8 * 4;
          iVar11 = iVar11 + 1;
          *pfVar7 = *(float *)(local_8 + iVar8 * 4) + *pfVar7;
          pfVar7 = pfVar7 + 1;
        } while (iVar11 < 3);
      }
      local_10 = local_10 + 1;
      pfVar7 = local_c + 3;
      local_c = pfVar7;
    } while (local_10 < 3);
  }
  else {
    piVar6 = *(int **)(param_1 + 0x28);
    iVar10 = 0;
    pfVar7 = local_11c;
    do {
      iVar11 = iVar10 * 2;
      iVar10 = iVar10 + 1;
      pfVar2 = (float *)(piVar6[0x10] +
                        (uint)*(ushort *)
                               ((uint)*(byte *)(piVar6 + 1) * param_2 + 2 + iVar11 + *piVar6) * 0xc)
      ;
      *pfVar7 = *pfVar2;
      pfVar7[1] = pfVar2[1];
      pfVar7[2] = pfVar2[2];
      pfVar7 = pfVar7 + 3;
    } while (iVar10 < 3);
  }
  fVar23 = local_2c;
  pmVar1 = (m3dV *)(local_28 + 0x90);
  iVar10 = m3dDistPointPoly(pmVar1,(m3dPOLY *)&local_120,
                            (m3dV *)(*(int *)(*(int *)(param_1 + 0x28) + 0x44) + param_2 * 0xc),0,
                            (m3dV *)0x0,(float *)0x0,local_2c);
  if (iVar10 == 0) {
    m3dReOrientPoly((m3dPOLY *)&local_120);
    pfVar7 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x44) + param_2 * 0xc);
    local_24 = *pfVar7 * ___real_bf800000;
    local_20 = pfVar7[1] * ___real_bf800000;
    local_1c = pfVar7[2] * ___real_bf800000;
    iVar10 = m3dDistPointPoly(pmVar1,(m3dPOLY *)&local_120,(m3dV *)&local_24,0,(m3dV *)0x0,
                              (float *)0x0,fVar23);
    if (iVar10 == 0) {
      return 0;
    }
  }
  return 1;
}

