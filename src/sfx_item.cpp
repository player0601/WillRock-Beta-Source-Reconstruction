
/* from: sfx_item.cpp
   addr: 0046D480 */

int __fastcall wrsfxItemInit(void)

{
  int iVar1;
  
  wrsfxITEM::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_mcg_glow,0x40003,1);
  if (wrsfxITEM::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_item,0x24534658,0x50,wrsfxITEM::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_item.cpp
   addr: 0046D4D0 */

entENTITY * __fastcall wrsfxITEM::Create(animINST *param_1)

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
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_item.cpp
   addr: 0046D560
   addr: 0046D560 */

void * __thiscall wrsfxITEM::_scalar_deleting_destructor_(wrsfxITEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_item.cpp
   addr: 0046D590 */

int __thiscall
wrsfxITEM::ProcessMsg(wrsfxITEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  objOBJ *poVar1;
  wrsfxITEM_SPARKS *this_00;
  partEMITTER_PHYS *this_01;
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
      partSetAreaEmissionObjList
                (*(partEMITTER_PHYS **)(this + 0x17f),2,(objOBJ **)(this + 0x177),-1,(m3dV *)0x0);
      return 0;
    }
    if (param_1 == 1) {
      param_3 = (msgADDR *)0x3f800000;
      param_4 = (int *)0x3f800000;
      if (param_2 != (void *)0x0) {
        animINST::Validate((animINST *)param_2,2);
        (**(code **)(*(int *)(*(int *)((int)param_2 + 0x10) + 0xc0) + 0x1c))(&local_30);
        animINST::Validate(*(animINST **)(this + 0xbc),2);
        (**(code **)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x10) + 0xc0) + 0x1c))(&fStack_1c);
        param_3 = (msgADDR *)(fStack_1c * (___real_3f800000 / fStack_4) * ___real_3f99999a);
        param_4 = (int *)((___real_3f800000 / fStack_4) * fStack_1c * ___real_3f0e38e4);
        if ((float)param_4 < ___real_3e4ccccd) {
          param_4 = (int *)0x3e4ccccd;
        }
      }
      animINST::Scale(*(animINST **)(this + 0xbc),(float)param_3,(float)param_3,(float)param_3,0);
      poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter_1);
      *(objOBJ **)(this + 0x177) = poVar1;
      if (poVar1 == (objOBJ *)0x0) {
        return 0;
      }
      poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter_2);
      *(objOBJ **)(this + 0x17b) = poVar1;
      if (poVar1 == (objOBJ *)0x0) {
        return 0;
      }
      objOBJ::SetStateProcYes
                (*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x1008,
                 (_func_int_objOBJ_ptr_void_ptr *)0x0);
      *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
      this_00 = (wrsfxITEM_SPARKS *)operator_new(0x2c0);
      if (this_00 == (wrsfxITEM_SPARKS *)0x0) {
        this_01 = (partEMITTER_PHYS *)0x0;
      }
      else {
        this_01 = (partEMITTER_PHYS *)wrsfxITEM_SPARKS::wrsfxITEM_SPARKS(this_00,(float)param_4);
      }
      *(partEMITTER_PHYS **)(this + 0x17f) = this_01;
      if (this_01 != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::StartEmission(this_01);
        partAttachInst(*(partEMITTER_PHYS **)(this + 0x17f),*(animINST **)(this + 0xbc));
        *(undefined4 *)(*(int *)(this + 0xbc) + 0xec) =
             *(undefined4 *)(*(int *)(this + 0xbc) + 0x10);
        return 0;
      }
      return 0;
    }
    if (param_1 == 2) {
      if (*(undefined4 **)(this + 0x17f) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x17f))(1);
      }
      *(undefined4 *)(this + 0x17f) = 0;
      return 0;
    }
  }
  else if (param_1 == 0x3fb) {
    *param_4 = 1;
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_item.cpp
   addr: 0046D800 */

wrsfxITEM_SPARKS * __thiscall
wrsfxITEM_SPARKS::wrsfxITEM_SPARKS(wrsfxITEM_SPARKS *this,float param_1)

{
  float fVar1;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,1.2);
  fVar1 = param_1 * ___real_40400000;
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.2,0.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.001);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.5,fVar1 * ___real_3dcccccd);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,1.0,0.001);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.075,0.0,(m3dSPL_LINEAR1D *)this_00,1.0);
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc0000000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x3f800000;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3dcccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200000;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxITEM::pTexSparks);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x6000;
  partEMITTER_PHYS::SetPosDirSpeed((partEMITTER_PHYS *)this,(m3dV *)0x0,&m3dVUnitY,(m3dV *)0x0);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,25.0,3.5,0.01);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}

