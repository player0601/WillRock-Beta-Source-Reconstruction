
/* from: sfx_portal.cpp
   addr: 00474FF0 */

int __fastcall wrsfxPortalInit(void)

{
  int iVar1;
  
  wrsfxPORTAL::pTexFlame = txmMANAGER::Add(txmManager,s_sfx_flame,0x40003,1);
  if (wrsfxPORTAL::pTexFlame == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxPORTAL::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_mcg_glow,0x40003,1);
  if (wrsfxPORTAL::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = pteMANAGER::RegisterClass(pteManager,s_wrsfx_portal,0x1e,wrsfxPORTAL_VIEW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_portal,0x24534658,0x50,wrsfxPORTAL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(2,(sncSOUND_DESCR_3D *)&DAT_0060e970);
  if (iVar1 == 0) {
    apMsg(s_Cannot_link_sound_data);
    return 0;
  }
  return 1;
}




/* from: sfx_portal.cpp
   addr: 004750A0 */

entENTITY * __fastcall wrsfxPORTAL::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x16b);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_portal.cpp
   addr: 00475100
   addr: 00475100 */

void * __thiscall wrsfxPORTAL::_scalar_deleting_destructor_(wrsfxPORTAL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_portal.cpp
   addr: 00475130 */

pteSHADER * __fastcall wrsfxPORTAL_VIEW::Create(animINST *param_1,objOBJ *param_2)

{
  pteEMAP *this;
  
  this = (pteEMAP *)operator_new(0x124);
  if (this != (pteEMAP *)0x0) {
    pteEMAP::pteEMAP(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x114) = 0x3f333333;
    *(undefined4 *)(this + 0x118) = 0x3ccccccd;
    *(undefined4 *)(this + 0x11c) = 0x40400000;
    return (pteSHADER *)this;
  }
  return (pteSHADER *)0x0;
}




/* from: sfx_portal.cpp
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0
   addr: 004751A0 */

void * __thiscall
minoREGEN_CHROME::_vector_deleting_destructor_(minoREGEN_CHROME *this,uint param_1)

{
  pteSHADER::~pteSHADER((pteSHADER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_portal.cpp
   addr: 004751C0 */

void __thiscall wrsfxPORTAL_VIEW::Init(wrsfxPORTAL_VIEW *this)

{
  objOBJ *poVar1;
  int iVar2;
  undefined4 *puVar3;
  m3dMATR *pmVar4;
  
  pteEMAP::Init((pteEMAP *)this);
  m3dMATR::Identity((m3dMATR *)(this + 0x8c));
  if (*(int *)(this + 0x60) != 0) {
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0x60) + 0x10),s__ds_view);
    *(objOBJ **)(this + 0x120) = poVar1;
    if (poVar1 != (objOBJ *)0x0) {
      animINST::Validate(*(animINST **)(this + 0x60),4);
      puVar3 = (undefined4 *)(*(int *)(this + 0x120) + 0x3c);
      pmVar4 = (m3dMATR *)(this + 0x8c);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pmVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        pmVar4 = pmVar4 + 4;
      }
    }
  }
  (**(code **)(*(int *)this + 0x1c))(0xbb);
  return;
}




/* from: sfx_portal.cpp
   addr: 00475220 */

void __thiscall
wrsfxPORTAL_VIEW::PrepareFrame(wrsfxPORTAL_VIEW *this,scnSCENE *param_1,camCAMERA *param_2)

{
  pteEMAP::PrepareFrame((pteEMAP *)this,param_1,param_2);
  if (*(int *)(this + 0x120) != 0) {
    animINST::Validate(*(animINST **)(*(int *)(this + 0x120) + 0xbc),0x600);
  }
  return;
}




/* from: sfx_portal.cpp
   addr: 00475260 */

void __thiscall wrsfxPORTAL_VIEW::Update(wrsfxPORTAL_VIEW *this,float param_1)

{
  *(float *)(this + 0x110) = param_1 + *(float *)(this + 0x110);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: sfx_portal.cpp
   addr: 00475280 */

int __thiscall
wrsfxPORTAL_VIEW::ShadeVert
          (wrsfxPORTAL_VIEW *this,objOBJ *param_1,int param_2,pteVERT_DATA *param_3)

{
  objOBJ *poVar1;
  wrsfxPORTAL_VIEW *pwVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float10 fVar16;
  float10 fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_30 [4];
  float local_20;
  float local_1c;
  undefined8 local_18;
  float local_10;
  objOBJ *local_c;
  wrsfxPORTAL_VIEW *local_8;
  
  local_8 = this;
  if (((byte)*param_1 & 1) == 0) {
    poVar1 = param_1 + 0x3c;
    local_c = poVar1;
    pfVar11 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc);
    if (m3dSimdType == 0) {
      if (((uint)poVar1 & 0xf) == 0) {
        fVar26 = *pfVar11 * *(float *)poVar1 + *(float *)(param_1 + 0x6c) +
                 pfVar11[1] * *(float *)(param_1 + 0x4c) + pfVar11[2] * *(float *)(param_1 + 0x5c);
        fVar25 = *pfVar11 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x70) +
                 pfVar11[1] * *(float *)(param_1 + 0x50) + pfVar11[2] * *(float *)(param_1 + 0x60);
      }
      else {
        fVar26 = *pfVar11 * (float)*(undefined8 *)poVar1 +
                 pfVar11[1] * (float)*(undefined8 *)(param_1 + 0x4c) +
                 pfVar11[2] * (float)*(undefined8 *)(param_1 + 0x5c) +
                 (float)*(undefined8 *)(param_1 + 0x6c);
        fVar25 = *pfVar11 * (float)((ulonglong)*(undefined8 *)poVar1 >> 0x20) +
                 pfVar11[1] * (float)((ulonglong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) +
                 pfVar11[2] * (float)((ulonglong)*(undefined8 *)(param_1 + 0x5c) >> 0x20) +
                 (float)((ulonglong)*(undefined8 *)(param_1 + 0x6c) >> 0x20);
      }
      local_18 = CONCAT44(fVar25,fVar26);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar14 = (undefined4)*(undefined8 *)pfVar11;
      uVar15 = CONCAT44(uVar14,uVar14);
      uVar14 = (undefined4)((ulonglong)*(undefined8 *)pfVar11 >> 0x20);
      uVar19 = CONCAT44(uVar14,uVar14);
      uVar22 = CONCAT44(pfVar11[2],pfVar11[2]);
      uVar18 = PackedFloatingMUL(uVar15,*(undefined8 *)poVar1);
      uVar21 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x4c));
      uVar23 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_1 + 0x5c));
      uVar18 = PackedFloatingADD(uVar18,*(undefined8 *)(param_1 + 0x6c));
      uVar20 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 0x44));
      uVar15 = PackedFloatingADD(uVar21,uVar23);
      uVar21 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x54));
      uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_1 + 100));
      uVar19 = PackedFloatingADD(uVar20,*(undefined8 *)(param_1 + 0x74));
      local_18 = PackedFloatingADD(uVar18,uVar15);
      uVar15 = PackedFloatingADD(uVar21,uVar22);
      uVar15 = PackedFloatingADD(uVar19,uVar15);
      local_10 = (float)uVar15;
      FastExitMediaState();
    }
    else {
      iVar13 = 0;
      pfVar9 = (float *)&local_18;
      do {
        iVar10 = 0;
        *pfVar9 = 0.0;
        pfVar12 = (float *)(((int)poVar1 - (int)&local_18) + (int)pfVar9);
        do {
          pfVar3 = pfVar11 + iVar10;
          fVar26 = *pfVar12;
          iVar10 = iVar10 + 1;
          pfVar12 = pfVar12 + 4;
          *pfVar9 = *pfVar3 * fVar26 + *pfVar9;
        } while (iVar10 < 3);
        iVar10 = iVar13 + iVar10 * 4;
        iVar13 = iVar13 + 1;
        *pfVar9 = *(float *)(poVar1 + iVar10 * 4) + *pfVar9;
        pfVar9 = pfVar9 + 1;
      } while (iVar13 < 3);
    }
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc;
    local_18._0_4_ = *(float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc);
    local_18._4_4_ = *(float *)(iVar13 + 4);
    local_10 = *(float *)(iVar13 + 8);
  }
  pwVar2 = local_8 + 0xcc;
  fVar26 = (float)local_18;
  fVar25 = (float)((ulonglong)local_18 >> 0x20);
  if (m3dSimdType == 0) {
    if (((uint)pwVar2 & 0xf) == 0) {
      fVar24 = fVar26 * *(float *)pwVar2 + *(float *)(local_8 + 0xfc) +
               fVar25 * *(float *)(local_8 + 0xdc) + local_10 * *(float *)(local_8 + 0xec);
      fVar26 = fVar26 * *(float *)(local_8 + 0xd0) + *(float *)(local_8 + 0x100) +
               fVar25 * *(float *)(local_8 + 0xe0) + local_10 * *(float *)(local_8 + 0xf0);
    }
    else {
      fVar24 = fVar26 * (float)*(undefined8 *)pwVar2 +
               fVar25 * (float)*(undefined8 *)(local_8 + 0xdc) +
               local_10 * (float)*(undefined8 *)(local_8 + 0xec) +
               (float)*(undefined8 *)(local_8 + 0xfc);
      fVar26 = fVar26 * (float)((ulonglong)*(undefined8 *)pwVar2 >> 0x20) +
               fVar25 * (float)((ulonglong)*(undefined8 *)(local_8 + 0xdc) >> 0x20) +
               local_10 * (float)((ulonglong)*(undefined8 *)(local_8 + 0xec) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(local_8 + 0xfc) >> 0x20);
    }
    local_18 = CONCAT44(fVar26,fVar24);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar15 = PackedFloatingMUL(CONCAT44(fVar26,fVar26),*(undefined8 *)pwVar2);
    uVar18 = PackedFloatingMUL(CONCAT44(fVar25,fVar25),*(undefined8 *)(local_8 + 0xdc));
    uVar19 = PackedFloatingMUL(CONCAT44(local_10,local_10),*(undefined8 *)(local_8 + 0xec));
    uVar15 = PackedFloatingADD(uVar15,*(undefined8 *)(local_8 + 0xfc));
    uVar21 = PackedFloatingMUL(CONCAT44(fVar26,fVar26),*(undefined8 *)(local_8 + 0xd4));
    uVar18 = PackedFloatingADD(uVar18,uVar19);
    uVar22 = PackedFloatingMUL(CONCAT44(fVar25,fVar25),*(undefined8 *)(local_8 + 0xe4));
    uVar23 = PackedFloatingMUL(CONCAT44(local_10,local_10),*(undefined8 *)(local_8 + 0xf4));
    uVar19 = PackedFloatingADD(uVar21,*(undefined8 *)(local_8 + 0x104));
    local_18 = PackedFloatingADD(uVar15,uVar18);
    uVar15 = PackedFloatingADD(uVar22,uVar23);
    uVar15 = PackedFloatingADD(uVar19,uVar15);
    local_10 = (float)uVar15;
    FastExitMediaState();
  }
  else {
    iVar13 = 0;
    pfVar11 = local_30;
    do {
      *pfVar11 = 0.0;
      iVar10 = 0;
      pfVar9 = (float *)(((int)pwVar2 - (int)local_30) + (int)pfVar11);
      fVar26 = ___real_00000000;
      do {
        iVar4 = iVar10 * 4;
        fVar25 = *pfVar9;
        iVar10 = iVar10 + 1;
        pfVar9 = pfVar9 + 4;
        fVar26 = *(float *)((int)&local_18 + iVar4) * fVar25 + fVar26;
      } while (iVar10 < 3);
      *pfVar11 = fVar26;
      iVar10 = iVar13 + iVar10 * 4;
      iVar13 = iVar13 + 1;
      *pfVar11 = fVar26 + *(float *)(pwVar2 + iVar10 * 4);
      pfVar11 = pfVar11 + 1;
    } while (iVar13 < 3);
    local_18 = CONCAT44(local_30[1],local_30[0]);
    local_10 = local_30[2];
  }
  pwVar2 = local_8;
  fVar26 = *(float *)(local_8 + 0x11c);
  local_30[3] = (float)local_18 * fVar26;
  local_1c = fVar26 * local_10;
  local_20 = *(float *)(local_8 + 0x114) * *(float *)(local_8 + 0x110) + local_18._4_4_ * fVar26;
  fVar16 = (float10)(**(code **)(*(int *)m3dNoise + 8))(local_30 + 3);
  fVar5 = (float10)___real_3f800000;
  fVar7 = (float10)___real_3f000000;
  fVar26 = *(float *)(pwVar2 + 0x118);
  local_1c = _DAT_005d78fc * ___real_421c0000 + local_1c;
  fVar17 = (float10)(**(code **)(*(int *)m3dNoise + 8))(local_30 + 3);
  fVar6 = (float10)___real_3f800000;
  fVar8 = (float10)___real_3f000000;
  fVar25 = *(float *)(pwVar2 + 0x118);
  *(float *)(param_3 + 1) =
       (float)local_18 * ___real_3e124925 + (float)((fVar16 + fVar5) * fVar7 * (float10)fVar26) +
       ___real_3f000000;
  *(float *)(param_3 + 5) =
       (float)(((float10)___real_3f000000 - (float10)local_10 * (float10)___real_3e124925) +
              (fVar17 + fVar6) * fVar8 * (float10)fVar25);
  local_30[3] = (float)local_18 * ___real_3fc00000;
  local_1c = local_10 * ___real_3fc00000;
  local_20 = local_18._4_4_ * ___real_3fc00000 + *(float *)(local_8 + 0x110);
  (**(code **)(*(int *)m3dNoise + 8))(local_30 + 3);
  CIpow();
  iVar13 = ftol();
  *(uint *)(param_3 + 9) = iVar13 << 0x18 | 0xffffff;
  return 1;
}




/* from: sfx_portal.cpp
   addr: 00475750 */

wrsfxPORTAL_FLAME * __thiscall wrsfxPORTAL_FLAME::wrsfxPORTAL_FLAME(wrsfxPORTAL_FLAME *this)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,1000.0,1.0);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.65,0.35);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.35,0.7);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.7,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,61.199997);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.1,198.13501);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xff7f7f7f,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0x40e00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0x3f800000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  *(undefined4 *)(this + 200) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,150.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxPORTAL::pTexFlame);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  *(uint *)(this + 4) = uVar1 | 0x2409;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,20.0,40.0,2.0,0.3);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}




/* from: sfx_portal.cpp
   addr: 00475920 */

wrsfxPORTAL_SPARKS * __thiscall wrsfxPORTAL_SPARKS::wrsfxPORTAL_SPARKS(wrsfxPORTAL_SPARKS *this)

{
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,200.0,0.8);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.6,0.2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.2,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x14) = 8;
    *(undefined4 *)(this_00 + 0x18) = 8;
    *(undefined4 *)(this_00 + 0x1c) = 1;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.435,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)this_00);
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0x40e00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0x3f800000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxPORTAL::pTexSparks);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2000;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,20.0,40.0,2.0,0.3);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_portal.cpp
   addr: 00475AA0 */

int __thiscall
wrsfxPORTAL::ProcessMsg(wrsfxPORTAL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  apNAME *this_00;
  undefined4 uVar1;
  int iVar2;
  objOBJ *this_01;
  wrsfxPORTAL_FLAME *this_02;
  wrsfxPORTAL_SPARKS *this_03;
  txmTEXTURE *ptVar3;
  pteEMAP *this_04;
  sncCHANNEL *psVar4;
  char local_40 [64];
  
  if (param_1 == 1) {
    this_01 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
    *(objOBJ **)(this + 0x14f) = this_01;
    if (this_01 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(this_01,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
      this_02 = (wrsfxPORTAL_FLAME *)operator_new(0x2c0);
      if (this_02 == (wrsfxPORTAL_FLAME *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = wrsfxPORTAL_FLAME::wrsfxPORTAL_FLAME(this_02);
      }
      *(int *)(this + 0x153) = iVar2;
      if (iVar2 != 0) {
        this_03 = (wrsfxPORTAL_SPARKS *)operator_new(0x2c0);
        if (this_03 == (wrsfxPORTAL_SPARKS *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = wrsfxPORTAL_SPARKS::wrsfxPORTAL_SPARKS(this_03);
        }
        *(int *)(this + 0x157) = iVar2;
        if (iVar2 != 0) {
          iVar2 = partSetAreaEmissionObj
                            (*(partEMITTER_PHYS **)(this + 0x153),*(objOBJ **)(this + 0x14f),-1,
                             (m3dV *)0x0);
          if (iVar2 != 0) {
            iVar2 = partSetAreaEmissionObj
                              (*(partEMITTER_PHYS **)(this + 0x157),*(objOBJ **)(this + 0x14f),-1,
                               (m3dV *)0x0);
            if (iVar2 != 0) {
              partAttachInst(*(partEMITTER_PHYS **)(this + 0x153),*(animINST **)(this + 0xbc));
              partAttachInst(*(partEMITTER_PHYS **)(this + 0x157),*(animINST **)(this + 0xbc));
              *(undefined4 *)(this + 0x15b) = 0;
              iVar2 = animINST::GetStr(*(animINST **)(this + 0xbc),s_PORTAL,s_tex,local_40,0x40);
              if (iVar2 != 0) {
                ptVar3 = txmMANAGER::Add(txmManager,local_40,0x100,1);
                if (ptVar3 != (txmTEXTURE *)0x0) {
                  this_04 = (pteEMAP *)operator_new(0x124);
                  if (this_04 == (pteEMAP *)0x0) {
                    this_04 = (pteEMAP *)0x0;
                  }
                  else {
                    pteEMAP::pteEMAP(this_04);
                    *(undefined ***)this_04 = &wrsfxPORTAL_VIEW::_vftable_;
                    *(undefined4 *)(this_04 + 0x110) = 0;
                    *(undefined4 *)(this_04 + 0x114) = 0x3f333333;
                    *(undefined4 *)(this_04 + 0x118) = 0x3ccccccd;
                    *(undefined4 *)(this_04 + 0x11c) = 0x40400000;
                  }
                  *(pteEMAP **)(this + 0x15b) = this_04;
                  pteSHADER::SetInstCreate((pteSHADER *)this_04,*(animINST **)(this + 0xbc));
                  pteSHADER::Register(*(pteSHADER **)(this + 0x15b));
                  *(txmTEXTURE **)(*(int *)(this + 0x15b) + 0x68) = ptVar3;
                }
              }
              psVar4 = (sncCHANNEL *)operator_new(0x74);
              if (psVar4 == (sncCHANNEL *)0x0) {
                psVar4 = (sncCHANNEL *)0x0;
              }
              else {
                psVar4 = (sncCHANNEL *)sncCHANNEL::sncCHANNEL(psVar4);
              }
              *(sncCHANNEL **)(this + 0x15f) = psVar4;
              if (psVar4 != (sncCHANNEL *)0x0) {
                gsSND_SYSTEM::AddChannel(gsSysSound,psVar4,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
                psVar4 = (sncCHANNEL *)operator_new(0xbc);
                if (psVar4 == (sncCHANNEL *)0x0) {
                  psVar4 = (sncCHANNEL *)0x0;
                }
                else {
                  sncCHANNEL::sncCHANNEL(psVar4);
                  *(undefined4 *)(psVar4 + 0x74) = _m3dVZero;
                  *(undefined4 *)(psVar4 + 0x78) = DAT_00963740;
                  uVar1 = DAT_00963744;
                  *(undefined4 *)(psVar4 + 0x80) = 0;
                  *(undefined4 *)(psVar4 + 0x8c) = 0x43b40000;
                  *(undefined4 *)(psVar4 + 0x90) = 0x43b40000;
                  *(undefined4 *)(psVar4 + 0x7c) = uVar1;
                  *(undefined ***)psVar4 = &sncCHANNEL_3D::_vftable_;
                  *(undefined4 *)(psVar4 + 0x84) = 0x41700000;
                  *(undefined4 *)(psVar4 + 0x88) = 0x42200000;
                  *(undefined4 *)(psVar4 + 0x94) = 0;
                  *(undefined4 *)(psVar4 + 0x98) = _m3dVZero;
                  *(undefined4 *)(psVar4 + 0x9c) = DAT_00963740;
                  *(undefined4 *)(psVar4 + 0xa0) = DAT_00963744;
                  *(undefined4 *)(psVar4 + 0xa4) = _m3dVZero;
                  *(undefined4 *)(psVar4 + 0xa8) = DAT_00963740;
                  *(undefined4 *)(psVar4 + 0xac) = DAT_00963744;
                  *(undefined4 *)(psVar4 + 0xb0) = _m3dVUnitZ;
                  *(undefined4 *)(psVar4 + 0xb4) = DAT_005f99a0;
                  uVar1 = DAT_005f99a4;
                  *(undefined ***)psVar4 = &sncCHANNEL_SPH::_vftable_;
                  *(undefined4 *)(psVar4 + 0xb8) = uVar1;
                }
                *(sncCHANNEL **)(this + 0x163) = psVar4;
                if (psVar4 != (sncCHANNEL *)0x0) {
                  gsSND_SYSTEM::AddChannel(gsSysSound,psVar4,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
                  param_1 = 1;
                  animINST::GetBool(*(animINST **)(this + 0xbc),s_PORTAL,s_isStartSFX,&param_1);
                  Enable(this,param_1);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (param_1 == 2) {
      if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x153))(1);
      }
      *(undefined4 *)(this + 0x153) = 0;
      if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x157))(1);
      }
      *(undefined4 *)(this + 0x157) = 0;
      return 0;
    }
    if (param_1 == 0x3f8) {
      this_00 = (apNAME *)((int)param_2 + 8);
      iVar2 = apNAME::IsName(this_00,s_START);
      if (iVar2 != 0) {
        Enable(this,1);
        return 0;
      }
      iVar2 = apNAME::IsName(this_00,&s_STOP);
      if (iVar2 != 0) {
        Enable(this,0);
        return 0;
      }
    }
  }
  return 0;
}




/* from: sfx_portal.cpp
   addr: 00475E60 */

void __thiscall wrsfxPORTAL::Enable(wrsfxPORTAL *this,int param_1)

{
  if (param_1 == 0) {
    if (((byte)this[0x167] & 1) == 0) {
      return;
    }
  }
  else if (((byte)this[0x167] & 1) == 0) {
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
    if (*(int **)(this + 0x15b) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x15b) + 4))(1);
    }
    (**(code **)(**(int **)(this + 0x163) + 4))(&DAT_0060e9d8,0);
    *(uint *)(this + 0x167) = *(uint *)(this + 0x167) | 1;
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 1;
    return;
  }
  partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
  partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x157));
  if (*(int **)(this + 0x15b) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x15b) + 4))(0);
  }
  (**(code **)(**(int **)(this + 0x163) + 4))(0,0);
  *(uint *)(this + 0x167) = *(uint *)(this + 0x167) | 1;
  *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 2;
  return;
}

