
/* from: sfx_medusa.cpp
   addr: 00470100 */

int __fastcall wrsfxMedusaInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_medusa_expl,0x24534658,0x50,wrsfxMEDUSA_EXPL::Create,(char *)0x0,1)
  ;
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxMEDUSA_EXPL::pTexFlash = txmMANAGER::Add(txmManager,s_sfx_rat_expl_glow,0x40003,1);
  if (wrsfxMEDUSA_EXPL::pTexFlash == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxMEDUSA_EXPL::pTexFire = txmMANAGER::Add(txmManager,s_sfx_cerber_pjl_burn,0x40003,1);
  if (wrsfxMEDUSA_EXPL::pTexFire == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxMEDUSA_EXPL::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_medusa_expl_sparks,0x40003,1);
  if (wrsfxMEDUSA_EXPL::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_medusa_death,0x24534658,0x50,wrsfxMEDUSA_DEATH::Create,(char *)0x0,
                           1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxMEDUSA_DEATH::pTexLgtn = txmMANAGER::Add(txmManager,s_sfx_medusa_death_lgtn,0x40003,1);
  if (wrsfxMEDUSA_DEATH::pTexLgtn == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxMEDUSA_DEATH::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_opp_acd_blood_splash,0x40003,1);
  if (wrsfxMEDUSA_DEATH::pTexGlow == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxMEDUSA_DEATH::pTexSmoke = txmMANAGER::Add(txmManager,s_sfx_medusa_death_smoke,0x40003,1);
  if (wrsfxMEDUSA_DEATH::pTexSmoke == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxMEDUSA_DEATH::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_medusa_death_sparks,0x40003,1);
  return (uint)(wrsfxMEDUSA_DEATH::pTexSparks != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_medusa.cpp
   addr: 00470230 */

wrsfxMEDUSA_EXPL_FIRE_SRC * __thiscall
wrsfxMEDUSA_EXPL_FIRE_SRC::wrsfxMEDUSA_EXPL_FIRE_SRC(wrsfxMEDUSA_EXPL_FIRE_SRC *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,10,200.0,0.1);
  *(undefined ***)this = &_vftable_;
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.033333335,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.06666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.1,0.0);
  fVar2 = param_1 * ___real_43c80000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_43480000;
  *(float *)(this + 0xc0) = param_1 * ___real_42f00001;
  *(float *)(this + 0xc4) = param_1 * ___real_42700001;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0xa000;
  *(uint *)(this + 4) = uVar1 | 0x40a000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_medusa.cpp
   addr: 00470350 */

wrsfxMEDUSA_EXPL_FIRE * __thiscall
wrsfxMEDUSA_EXPL_FIRE::wrsfxMEDUSA_EXPL_FIRE(wrsfxMEDUSA_EXPL_FIRE *this,float param_1)

{
  float fVar1;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,600.0,0.4);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,60.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.1);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_41c80000,param_1 * ___real_40a00000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.1,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxMEDUSA_EXPL::pTexFire);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,150.0);
  fVar1 = param_1 * ___real_3f000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  fVar1 = param_1 * ___real_41f00000;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f000000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xb0) = 0x40800000;
  *(float *)(this + 0xb4) = fVar1;
  *(float *)(this + 0xb8) = param_1 * ___real_41700000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_medusa.cpp
   addr: 00470500 */

wrsfxMEDUSA_EXPL_SPARKS * __thiscall
wrsfxMEDUSA_EXPL_SPARKS::wrsfxMEDUSA_EXPL_SPARKS(wrsfxMEDUSA_EXPL_SPARKS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,400,3000.0,0.6);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,3000.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.1,3000.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.4,0.2);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_40a00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxMEDUSA_EXPL::pTexSparks);
  fVar2 = param_1 * ___real_43480000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_42c80000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = param_1 * ___real_41a00000;
  *(float *)(this + 0xc4) = param_1 * ___real_41200000;
  *(float *)(this + 0xe0) = param_1 * ___real_c3bb8000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* from: sfx_medusa.cpp
   addr: 00470770 */

int __thiscall wrsfxMEDUSA_EXPL::ProcessINIT(wrsfxMEDUSA_EXPL *this,void *param_1)

{
  float fVar1;
  int iVar2;
  wrsfxMEDUSA_EXPL_FIRE *this_00;
  wrsfxMEDUSA_EXPL_FIRE_SRC *this_01;
  objOBJ *poVar3;
  wrsfxMEDUSA_EXPL_SPARKS *this_02;
  m3dV local_c [12];
  
  iVar2 = dynDYNAMIC::ProcessINIT((dynDYNAMIC *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
                    /* WARNING: Load size is inaccurate */
  fVar1 = *param_1;
  animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  this_00 = (wrsfxMEDUSA_EXPL_FIRE *)operator_new(0x2c0);
  if (this_00 == (wrsfxMEDUSA_EXPL_FIRE *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = wrsfxMEDUSA_EXPL_FIRE::wrsfxMEDUSA_EXPL_FIRE(this_00,fVar1);
  }
  *(int *)(this + 0x17f) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  this_01 = (wrsfxMEDUSA_EXPL_FIRE_SRC *)operator_new(0x2c0);
  if (this_01 == (wrsfxMEDUSA_EXPL_FIRE_SRC *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = wrsfxMEDUSA_EXPL_FIRE_SRC::wrsfxMEDUSA_EXPL_FIRE_SRC(this_01,fVar1);
  }
  *(int *)(this + 0x177) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_fire_source);
  *(objOBJ **)(this + 0x17b) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  objOBJ::SetStateProcYes(poVar3,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  iVar2 = partSetAreaEmissionObj
                    (*(partEMITTER_PHYS **)(this + 0x177),*(objOBJ **)(this + 0x17b),-1,(m3dV *)0x0)
  ;
  if (iVar2 == 0) {
    return 0;
  }
  partEMITTER_PHYS::AttachEmitter
            (*(partEMITTER_PHYS **)(this + 0x177),*(partEMITTER_PHYS **)(this + 0x17f),0,0);
  *(uint *)(*(int *)(this + 0x177) + 4) = *(uint *)(*(int *)(this + 0x177) + 4) | 0x40000;
  this_02 = (wrsfxMEDUSA_EXPL_SPARKS *)operator_new(0x2c0);
  if (this_02 == (wrsfxMEDUSA_EXPL_SPARKS *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = wrsfxMEDUSA_EXPL_SPARKS::wrsfxMEDUSA_EXPL_SPARKS(this_02,fVar1);
  }
  *(int *)(this + 0x183) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_sparks_source);
  *(objOBJ **)(this + 0x187) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  objOBJ::SetStateProcYes(poVar3,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  iVar2 = partSetAreaEmissionObj
                    (*(partEMITTER_PHYS **)(this + 0x183),*(objOBJ **)(this + 0x187),-1,(m3dV *)0x0)
  ;
  if (iVar2 == 0) {
    return 0;
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x177));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x183));
  *(undefined4 *)(this + 0x18b) = 0x3f800000;
  return 1;
}




/* from: sfx_medusa.cpp
   addr: 00470970 */

void __thiscall wrsfxMEDUSA_EXPL::ProcessTERM(wrsfxMEDUSA_EXPL *this)

{
  if (*(undefined4 **)(this + 0x183) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x183))(1);
    *(undefined4 *)(this + 0x183) = 0;
  }
  if (*(undefined4 **)(this + 0x177) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x177))(1);
    *(undefined4 *)(this + 0x177) = 0;
  }
  if (*(undefined4 **)(this + 0x17f) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x17f))(1);
    *(undefined4 *)(this + 0x17f) = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_medusa.cpp
   addr: 004709D0 */

wrsfxMEDUSA_DEATH_LGTN * __thiscall
wrsfxMEDUSA_DEATH_LGTN::wrsfxMEDUSA_DEATH_LGTN(wrsfxMEDUSA_DEATH_LGTN *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,20.0,0.4);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.13333334,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.16666667,20.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.7,20.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.73333335,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,20.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.1);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_40200000);
  fVar1 = param_1 * ___real_40a00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,fVar1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxMEDUSA_DEATH::pTexLgtn);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  fVar1 = param_1 * ___real_40400000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_medusa.cpp
   addr: 00470C00 */

wrsfxMEDUSA_DEATH_GLOW * __thiscall
wrsfxMEDUSA_DEATH_GLOW::wrsfxMEDUSA_DEATH_GLOW(wrsfxMEDUSA_DEATH_GLOW *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,0.4);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.6666667,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.7,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.73333335,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.76666665,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,100.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.1);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  fVar1 = param_1 * ___real_40700000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,fVar1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,param_1 * ___real_407ccccd);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,fVar1,param_1 * ___real_3fa00000,(m3dSPL_LINEAR1D *)pmVar2,1.0
            );
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxMEDUSA_DEATH::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_medusa.cpp
   addr: 00470E40 */

wrsfxMEDUSA_DEATH_SMOKE_SRC * __thiscall
wrsfxMEDUSA_DEATH_SMOKE_SRC::wrsfxMEDUSA_DEATH_SMOKE_SRC
          (wrsfxMEDUSA_DEATH_SMOKE_SRC *this,float param_1)

{
  float fVar1;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x2a,100.0,0.1);
  *(undefined ***)this = &_vftable_;
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
    m3dSPL::AllocKpList(this_00,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.6666667,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.7,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.73333335,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,3,0.76666665,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)this_00);
  fVar1 = param_1 * ___real_40a00000;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xe8) = fVar1;
  *(float *)(this + 0xb4) = param_1 * ___real_40c00000;
  *(float *)(this + 0xb8) = param_1 * ___real_40400000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x400000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_medusa.cpp
   addr: 00470F60 */

wrsfxMEDUSA_DEATH_SMOKE * __thiscall
wrsfxMEDUSA_DEATH_SMOKE::wrsfxMEDUSA_DEATH_SMOKE(wrsfxMEDUSA_DEATH_SMOKE *this,float param_1)

{
  float fVar1;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,420.0,0.6);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,10.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.35,0.25);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_40600000,param_1 * ___real_3fc00000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
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
    m3dSPL::AllocKpList(this_00,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxMEDUSA_DEATH::pTexSmoke);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  fVar1 = param_1 * ___real_40800000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb8) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = param_1 + param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_medusa.cpp
   addr: 004710D0 */

wrsfxMEDUSA_DEATH_SPARKS * __thiscall
wrsfxMEDUSA_DEATH_SPARKS::wrsfxMEDUSA_DEATH_SPARKS(wrsfxMEDUSA_DEATH_SPARKS *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x2d,60.0,1.0);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,20.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.7,60.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.73333335,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_410c0000);
  fVar1 = param_1 * ___real_418c0000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,fVar1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.125,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxMEDUSA_DEATH::pTexSparks);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,0.14285715,0.0,1.0,0.0);
  fVar1 = param_1 * ___real_3ca3d70a;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* from: sfx_medusa.cpp
   addr: 00471300 */

int __thiscall wrsfxMEDUSA_DEATH::ProcessINIT(wrsfxMEDUSA_DEATH *this,void *param_1)

{
  float fVar1;
  int iVar2;
  wrsfxMEDUSA_DEATH_LGTN *this_00;
  partEMITTER_PHYS *ppVar3;
  wrsfxMEDUSA_DEATH_GLOW *this_01;
  wrsfxMEDUSA_DEATH_SMOKE_SRC *this_02;
  wrsfxMEDUSA_DEATH_SMOKE *this_03;
  wrsfxMEDUSA_DEATH_SPARKS *this_04;
  m3dV local_c [12];
  
  iVar2 = dynDYNAMIC::ProcessINIT((dynDYNAMIC *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
                    /* WARNING: Load size is inaccurate */
  fVar1 = *param_1;
  animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  this_00 = (wrsfxMEDUSA_DEATH_LGTN *)operator_new(0x2c0);
  if (this_00 == (wrsfxMEDUSA_DEATH_LGTN *)0x0) {
    ppVar3 = (partEMITTER_PHYS *)0x0;
  }
  else {
    ppVar3 = (partEMITTER_PHYS *)wrsfxMEDUSA_DEATH_LGTN::wrsfxMEDUSA_DEATH_LGTN(this_00,fVar1);
  }
  *(partEMITTER_PHYS **)(this + 0x177) = ppVar3;
  if (ppVar3 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
  this_01 = (wrsfxMEDUSA_DEATH_GLOW *)operator_new(0x2c0);
  if (this_01 == (wrsfxMEDUSA_DEATH_GLOW *)0x0) {
    ppVar3 = (partEMITTER_PHYS *)0x0;
  }
  else {
    ppVar3 = (partEMITTER_PHYS *)wrsfxMEDUSA_DEATH_GLOW::wrsfxMEDUSA_DEATH_GLOW(this_01,fVar1);
  }
  *(partEMITTER_PHYS **)(this + 0x17b) = ppVar3;
  if (ppVar3 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
  this_02 = (wrsfxMEDUSA_DEATH_SMOKE_SRC *)operator_new(0x2c0);
  if (this_02 == (wrsfxMEDUSA_DEATH_SMOKE_SRC *)0x0) {
    ppVar3 = (partEMITTER_PHYS *)0x0;
  }
  else {
    ppVar3 = (partEMITTER_PHYS *)
             wrsfxMEDUSA_DEATH_SMOKE_SRC::wrsfxMEDUSA_DEATH_SMOKE_SRC(this_02,fVar1);
  }
  *(partEMITTER_PHYS **)(this + 0x17f) = ppVar3;
  if (ppVar3 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
  this_03 = (wrsfxMEDUSA_DEATH_SMOKE *)operator_new(0x2c0);
  if (this_03 == (wrsfxMEDUSA_DEATH_SMOKE *)0x0) {
    ppVar3 = (partEMITTER_PHYS *)0x0;
  }
  else {
    ppVar3 = (partEMITTER_PHYS *)wrsfxMEDUSA_DEATH_SMOKE::wrsfxMEDUSA_DEATH_SMOKE(this_03,fVar1);
  }
  *(partEMITTER_PHYS **)(this + 0x183) = ppVar3;
  if (ppVar3 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  partEMITTER_PHYS::AttachEmitter(*(partEMITTER_PHYS **)(this + 0x17f),ppVar3,0,0);
  *(uint *)(*(int *)(this + 0x17f) + 4) = *(uint *)(*(int *)(this + 0x17f) + 4) | 0x40000;
  this_04 = (wrsfxMEDUSA_DEATH_SPARKS *)operator_new(0x2c0);
  if (this_04 == (wrsfxMEDUSA_DEATH_SPARKS *)0x0) {
    ppVar3 = (partEMITTER_PHYS *)0x0;
  }
  else {
    ppVar3 = (partEMITTER_PHYS *)wrsfxMEDUSA_DEATH_SPARKS::wrsfxMEDUSA_DEATH_SPARKS(this_04,fVar1);
  }
  *(partEMITTER_PHYS **)(this + 0x187) = ppVar3;
  if (ppVar3 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x177));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x17b));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x17f));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x187));
  *(undefined4 *)(this + 0x18b) = 0x40000000;
  return 1;
}




/* from: sfx_medusa.cpp
   addr: 00471500 */

void __thiscall wrsfxMEDUSA_DEATH::ProcessTERM(wrsfxMEDUSA_DEATH *this)

{
  if (*(undefined4 **)(this + 0x187) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x187))(1);
    *(undefined4 *)(this + 0x187) = 0;
  }
  if (*(undefined4 **)(this + 0x183) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x183))(1);
    *(undefined4 *)(this + 0x183) = 0;
  }
  if (*(undefined4 **)(this + 0x17f) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x17f))(1);
    *(undefined4 *)(this + 0x17f) = 0;
  }
  if (*(undefined4 **)(this + 0x17b) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x17b))(1);
    *(undefined4 *)(this + 0x17b) = 0;
  }
  if (*(undefined4 **)(this + 0x177) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x177))(1);
    *(undefined4 *)(this + 0x177) = 0;
  }
  return;
}




/* from: sfx_medusa.cpp
   addr: 00471580
   addr: 00471580 */

void __thiscall wrsfxMEDUSA_DEATH::ProcessFRAME(wrsfxMEDUSA_DEATH *this)

{
  int iVar1;
  float extraout_EDX;
  
  dynDYNAMIC::ProcessFRAME((dynDYNAMIC *)this);
  iVar1 = m3dUpdateTimeField((float *)(this + 0x18b),extraout_EDX);
  if (iVar1 != 0) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_medusa.cpp
   addr: 004715B0 */

entENTITY * __fastcall wrsfxMEDUSA_EXPL::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(399);
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
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x18b) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_medusa.cpp
   addr: 00471650
   addr: 00471650 */

void * __thiscall
wrsfxMEDUSA_EXPL::_vector_deleting_destructor_(wrsfxMEDUSA_EXPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_medusa.cpp
   addr: 00471680 */

entENTITY * __fastcall wrsfxMEDUSA_DEATH::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(399);
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
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x18b) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_medusa.cpp
   addr: 00471720
   addr: 00471720 */

void * __thiscall
wrsfxMEDUSA_DEATH::_vector_deleting_destructor_(wrsfxMEDUSA_DEATH *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

