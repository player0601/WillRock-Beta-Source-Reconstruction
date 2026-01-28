
/* from: sfx_treasure.cpp
   addr: 0047A450 */

int __fastcall wrsfxTreasureInit(void)

{
  int iVar1;
  
  wrsfxTREASURE::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_treasure_glow,0x40003,1);
  if (wrsfxTREASURE::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_treasure,0x24534658,0x50,wrsfxTREASURE::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_treasure.cpp
   addr: 0047A4A0 */

entENTITY * __fastcall wrsfxTREASURE::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x183);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = _m3dVZero;
    *(undefined4 *)(this + 0x167) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x16b) = uVar1;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined4 *)(this + 0x177) = 0;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_treasure.cpp
   addr: 0047A530
   addr: 0047A530 */

void * __thiscall wrsfxTREASURE::_scalar_deleting_destructor_(wrsfxTREASURE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_treasure.cpp
   addr: 0047A560 */

int __thiscall
wrsfxTREASURE::ProcessMsg
          (wrsfxTREASURE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  objOBJ *poVar1;
  wrsfxTREASURE_SPARKS_1 *this_00;
  wrsfxTREASURE_SPARKS_2 *this_01;
  partEMITTER_PHYS *ppVar2;
  wrsfxTREASURE *pwVar3;
  int iVar4;
  undefined **local_30;
  undefined4 local_2c;
  float fStack_1c;
  undefined **local_18;
  undefined4 local_14;
  float fStack_4;
  
  local_30 = &m3dSPHERE::_vftable_;
  local_18 = &m3dSPHERE::_vftable_;
  local_2c = 3;
  local_14 = 3;
  dynDYNAMIC::ProcessMsg((dynDYNAMIC *)this,param_1,param_2,param_3,param_4);
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      iVar4 = partSetAreaEmissionObj
                        (*(partEMITTER_PHYS **)(this + 0x17b),*(objOBJ **)(this + 0x177),-1,
                         (m3dV *)0x0);
      if (iVar4 == 0) {
        return 0;
      }
    }
    else {
      if (param_1 == 1) {
        param_4 = (int *)0x3f800000;
        if (param_2 != (void *)0x0) {
          animINST::Validate((animINST *)param_2,2);
          (**(code **)(*(int *)(*(int *)((int)param_2 + 0x10) + 0xc0) + 0x1c))(&local_30);
          animINST::Validate(*(animINST **)(this + 0xbc),2);
          (**(code **)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x10) + 0xc0) + 0x1c))(&fStack_1c);
          param_4 = (int *)(fStack_1c / fStack_4);
        }
        animINST::Scale(*(animINST **)(this + 0xbc),(float)param_4,(float)param_4,(float)param_4,0);
        poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
        *(objOBJ **)(this + 0x177) = poVar1;
        if (poVar1 == (objOBJ *)0x0) {
          return 0;
        }
        objOBJ::SetStateProcYes
                  (*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x1008,
                   (_func_int_objOBJ_ptr_void_ptr *)0x0);
        *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
        this_00 = (wrsfxTREASURE_SPARKS_1 *)operator_new(0x2c0);
        if (this_00 == (wrsfxTREASURE_SPARKS_1 *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = wrsfxTREASURE_SPARKS_1::wrsfxTREASURE_SPARKS_1(this_00,(float)param_4);
        }
        *(int *)(this + 0x17b) = iVar4;
        if (iVar4 == 0) {
          return 0;
        }
        this_01 = (wrsfxTREASURE_SPARKS_2 *)operator_new(0x2c0);
        if (this_01 == (wrsfxTREASURE_SPARKS_2 *)0x0) {
          ppVar2 = (partEMITTER_PHYS *)0x0;
        }
        else {
          ppVar2 = (partEMITTER_PHYS *)
                   wrsfxTREASURE_SPARKS_2::wrsfxTREASURE_SPARKS_2(this_01,(float)param_4);
        }
        *(partEMITTER_PHYS **)(this + 0x17f) = ppVar2;
        if (ppVar2 == (partEMITTER_PHYS *)0x0) {
          return 0;
        }
        partEMITTER_PHYS::AttachEmitter(*(partEMITTER_PHYS **)(this + 0x17b),ppVar2,0,0);
        *(uint *)(*(int *)(this + 0x17b) + 4) = *(uint *)(*(int *)(this + 0x17b) + 4) | 0x40000;
        iVar4 = partSetAreaEmissionObj
                          (*(partEMITTER_PHYS **)(this + 0x17b),*(objOBJ **)(this + 0x177),-1,
                           (m3dV *)0x0);
        if (iVar4 == 0) {
          return 0;
        }
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x17b));
        partAttachInst(*(partEMITTER_PHYS **)(this + 0x17b),*(animINST **)(this + 0xbc));
        partAttachInst(*(partEMITTER_PHYS **)(this + 0x17f),*(animINST **)(this + 0xbc));
        *(undefined4 *)(*(int *)(this + 0xbc) + 0xec) =
             *(undefined4 *)(*(int *)(this + 0xbc) + 0x10);
        return 0;
      }
      if (param_1 == 2) {
        pwVar3 = this + 0x17b;
        iVar4 = 2;
        do {
          if (*(undefined4 **)pwVar3 != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)pwVar3)(1);
          }
          *(int *)pwVar3 = 0;
          pwVar3 = pwVar3 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        return 0;
      }
    }
  }
  else if (param_1 == 0x3fb) {
    *param_4 = 1;
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_treasure.cpp
   addr: 0047A7F0 */

wrsfxTREASURE_SPARKS_1 * __thiscall
wrsfxTREASURE_SPARKS_1::wrsfxTREASURE_SPARKS_1(wrsfxTREASURE_SPARKS_1 *this,float param_1)

{
  uint uVar1;
  float fVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,20.0,0.15);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.1,0.05);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.3,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  fVar2 = param_1 * ___real_40400000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(float *)(this + 0xe8) = fVar2;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x200000;
  *(uint *)(this + 4) = uVar1 | 0x600000;
  *(uint *)(this + 4) = CONCAT22((short)((uVar1 | 0x600000) >> 0x10),(short)uVar1) | 0x2000;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,35.0,2.5,0.3);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_treasure.cpp
   addr: 0047A8D0 */

wrsfxTREASURE_SPARKS_2 * __thiscall
wrsfxTREASURE_SPARKS_2::wrsfxTREASURE_SPARKS_2(wrsfxTREASURE_SPARKS_2 *this,float param_1)

{
  uint uVar1;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,400.0,1.0);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.75,0.25);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,50.0,(m3dSPL_LINEAR1D *)0x0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.405,param_1 * ___real_41000000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,1.0,0.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.0,0.0,(m3dSPL_LINEAR1D *)this_00,1.0);
  *(undefined4 *)(this + 0xcc) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxTREASURE::pTexSparks);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,75.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,1.0,0.0,0.2,0.05);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}

