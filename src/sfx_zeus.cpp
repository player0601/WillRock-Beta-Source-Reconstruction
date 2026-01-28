
/* from: sfx_zeus.cpp
   addr: 0047B8E0 */

int __fastcall wrsfxZeusInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_zeus_lgtn,0x24534658,0x50,wrsfxZEUS_LGTN::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxZEUS_LGTN::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_zeus_lgtn_glow,0x40003,1);
  if (wrsfxZEUS_LGTN::pTexGlow == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxZEUS_LGTN::pTexParts = txmMANAGER::Add(txmManager,s_sfx_medusa_expl_sparks,0x40003,1);
  return (uint)(wrsfxZEUS_LGTN::pTexParts != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_zeus.cpp
   addr: 0047B950 */

wrsfxZEUS_LGTN_GLOW * __thiscall
wrsfxZEUS_LGTN_GLOW::wrsfxZEUS_LGTN_GLOW(wrsfxZEUS_LGTN_GLOW *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100,1000.0,0.3);
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
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.13333334,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.16666667,1000.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.2,0.1);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_00000000);
  fVar1 = param_1 * ___real_41840000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,fVar1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxZEUS_LGTN::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_zeus.cpp
   addr: 0047BB70 */

wrsfxZEUS_LGTN_PARTS * __thiscall
wrsfxZEUS_LGTN_PARTS::wrsfxZEUS_LGTN_PARTS(wrsfxZEUS_LGTN_PARTS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x113,1500.0,1.2);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.13333334,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.16666667,1500.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.23333333,1500.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.26666668,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.9,0.3);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,param_1,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxZEUS_LGTN::pTexParts);
  fVar2 = param_1 * ___real_42200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_41a00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = param_1 * ___real_40800000;
  *(float *)(this + 0xc4) = param_1 + param_1;
  *(float *)(this + 0xe0) = param_1 * ___real_c2200000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* from: sfx_zeus.cpp
   addr: 0047BD90 */

int __thiscall wrsfxZEUS_LGTN::ProcessINIT(wrsfxZEUS_LGTN *this,void *param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  wrsfxZEUS_LGTN_GLOW *this_00;
  objOBJ *poVar4;
  wrsfxZEUS_LGTN_PARTS *this_01;
  float extraout_ECX;
  uint uVar5;
  char *pcVar6;
  float fVar7;
  m3dV local_c [12];
  
  iVar3 = dynDYNAMIC::ProcessINIT((dynDYNAMIC *)this,param_1);
  if (iVar3 == 0) {
    return 0;
  }
                    /* WARNING: Load size is inaccurate */
  fVar2 = *param_1;
  animINST::Scale(*(animINST **)(this + 0xbc),fVar2,fVar2,fVar2,1);
  iVar3 = 1;
  fVar7 = m3dRandMax(extraout_ECX);
  animINST::RotateY(*(animINST **)(this + 0xbc),fVar7,iVar3);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  this_00 = (wrsfxZEUS_LGTN_GLOW *)operator_new(0x2c0);
  if (this_00 == (wrsfxZEUS_LGTN_GLOW *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = wrsfxZEUS_LGTN_GLOW::wrsfxZEUS_LGTN_GLOW(this_00,fVar2);
  }
  *(int *)(this + 0x177) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar6 = s__glow_emitter;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__glow_emitter,~uVar5 - 1);
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  objOBJ::GetOrigin(poVar4,local_c);
  partEMITTER_PHYS::SetPosDirSpeed
            (*(partEMITTER_PHYS **)(this + 0x177),local_c,(m3dV *)0x0,(m3dV *)0x0);
  this_01 = (wrsfxZEUS_LGTN_PARTS *)operator_new(0x2c0);
  if (this_01 == (wrsfxZEUS_LGTN_PARTS *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = wrsfxZEUS_LGTN_PARTS::wrsfxZEUS_LGTN_PARTS(this_01,fVar2);
  }
  *(int *)(this + 0x17b) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar6 = s__parts_emitter;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__parts_emitter,~uVar5 - 1);
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  iVar3 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x17b),poVar4,-1,(m3dV *)0x0);
  if (iVar3 == 0) {
    return 0;
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x177));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x17b));
  *(undefined4 *)(this + 0x17f) = 0x3fd9999a;
  return 1;
}




/* from: sfx_zeus.cpp
   addr: 0047BF40 */

void __thiscall wrsfxZEUS_LGTN::ProcessTERM(wrsfxZEUS_LGTN *this)

{
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




/* from: sfx_zeus.cpp
   addr: 0047BF80 */

void __thiscall wrsfxZEUS_LGTN::ProcessFRAME(wrsfxZEUS_LGTN *this)

{
  int iVar1;
  float extraout_EDX;
  
  dynDYNAMIC::ProcessFRAME((dynDYNAMIC *)this);
  iVar1 = m3dUpdateTimeField((float *)(this + 0x17f),extraout_EDX);
  if (iVar1 != 0) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_zeus.cpp
   addr: 0047BFD0 */

entENTITY * __fastcall wrsfxZEUS_LGTN::Create(animINST *param_1)

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
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_zeus.cpp
   addr: 0047C060
   addr: 0047C060 */

void * __thiscall wrsfxZEUS_LGTN::_vector_deleting_destructor_(wrsfxZEUS_LGTN *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

