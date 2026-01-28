
/* from: sfx_barrel.cpp
   addr: 0045F9C0 */

int __fastcall wrsfxBarrelInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_barrel_expl,0x24534658,0x50,wrsfxBARREL_EXPLODE::Create,(char *)0x0
                           ,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxBARREL_EXPLODE::pTexFire = txmMANAGER::Add(txmManager,s_sfx_cerber_pjl_burn,0x40003,1);
  if (wrsfxBARREL_EXPLODE::pTexFire == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxBARREL_EXPLODE::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_barrel_expl_glow,0x40003,1);
  if (wrsfxBARREL_EXPLODE::pTexGlow == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxBARREL_EXPLODE::pTexPart = txmMANAGER::Add(txmManager,s_sfx_barrel_expl_part,0x40003,1);
  return (uint)(wrsfxBARREL_EXPLODE::pTexPart != (txmTEXTURE *)0x0);
}




/* from: sfx_barrel.cpp
   addr: 0045FA50 */

entENTITY * __fastcall wrsfxBARREL_EXPLODE::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x163);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_barrel.cpp
   addr: 0045FAA0
   addr: 0045FAA0 */

void * __thiscall
wrsfxBARREL_EXPLODE::_vector_deleting_destructor_(wrsfxBARREL_EXPLODE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_barrel.cpp
   addr: 0045FAD0 */

wrsfxBARREL_EXPLODE_FIRE_SRC * __thiscall
wrsfxBARREL_EXPLODE_FIRE_SRC::wrsfxBARREL_EXPLODE_FIRE_SRC
          (wrsfxBARREL_EXPLODE_FIRE_SRC *this,float param_1)

{
  float fVar1;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,10,100.0,0.1);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.033333335,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.06666667,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.1,0.0);
  fVar1 = param_1 * ___real_40c00000;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xe8) = param_1;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = fVar1;
  fVar1 = param_1 * ___real_40400000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb8) = fVar1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x400000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_barrel.cpp
   addr: 0045FBF0 */

wrsfxBARREL_EXPLODE_FIRE * __thiscall
wrsfxBARREL_EXPLODE_FIRE::wrsfxBARREL_EXPLODE_FIRE(wrsfxBARREL_EXPLODE_FIRE *this,float param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,66.666664,0.8);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,6.6666665,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.5,0.3);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_3f400000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,param_1 * ___real_3fc00000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1,param_1 * ___real_3f000000,(m3dSPL_LINEAR1D *)pmVar2,
             1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxBARREL_EXPLODE::pTexFire);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,120.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb8) = param_1;
  *(float *)(this + 0xb4) = param_1 + param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3ecccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xb0) = 0x40000000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x4000409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_barrel.cpp
   addr: 0045FDC0 */

wrsfxBARREL_EXPLODE_GLOW * __thiscall
wrsfxBARREL_EXPLODE_GLOW::wrsfxBARREL_EXPLODE_GLOW(wrsfxBARREL_EXPLODE_GLOW *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x1e,200.0,0.2);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.033333335,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.06666667,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.1,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,200.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.15,0.05);
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
  fVar1 = param_1 * ___real_3fc00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,fVar1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,param_1 * ___real_40900000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,param_1,(m3dSPL_LINEAR1D *)pmVar2,1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxBARREL_EXPLODE::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_barrel.cpp
   addr: 00460000 */

wrsfxBARREL_EXPLODE_PARTS * __thiscall
wrsfxBARREL_EXPLODE_PARTS::wrsfxBARREL_EXPLODE_PARTS(wrsfxBARREL_EXPLODE_PARTS *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x1e,300.0,0.5);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,300.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.35,0.15);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3e99999a,param_1 * ___real_3e4ccccd,
             (m3dSPL_LINEAR1D *)0x0,1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxBARREL_EXPLODE::pTexPart);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,300.0);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,1,0.0,2.0);
  fVar1 = param_1 * ___real_40400000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 6;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  fVar1 = param_1 * ___real_40800000;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar1;
  *(float *)(this + 0xb8) = param_1 + param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  return this;
}




/* from: sfx_barrel.cpp
   addr: 00460230 */

int __thiscall
wrsfxBARREL_EXPLODE::ProcessMsg
          (wrsfxBARREL_EXPLODE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  objOBJ *this_00;
  wrsfxBARREL_EXPLODE_FIRE_SRC *this_01;
  partEMITTER_PHYS *ppVar3;
  wrsfxBARREL_EXPLODE_FIRE *this_02;
  wrsfxBARREL_EXPLODE_GLOW *this_03;
  wrsfxBARREL_EXPLODE_PARTS *this_04;
  float in_EDX;
  m3dV local_c [12];
  
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar1 = *param_2;
    animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_center);
    if (this_00 != (objOBJ *)0x0) {
      objOBJ::GetOrigin(this_00,local_c);
      this_01 = (wrsfxBARREL_EXPLODE_FIRE_SRC *)operator_new(0x2c0);
      if (this_01 == (wrsfxBARREL_EXPLODE_FIRE_SRC *)0x0) {
        ppVar3 = (partEMITTER_PHYS *)0x0;
      }
      else {
        ppVar3 = (partEMITTER_PHYS *)
                 wrsfxBARREL_EXPLODE_FIRE_SRC::wrsfxBARREL_EXPLODE_FIRE_SRC(this_01,fVar1);
      }
      *(partEMITTER_PHYS **)(this + 0x14f) = ppVar3;
      if (ppVar3 != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
        this_02 = (wrsfxBARREL_EXPLODE_FIRE *)operator_new(0x2c0);
        if (this_02 == (wrsfxBARREL_EXPLODE_FIRE *)0x0) {
          ppVar3 = (partEMITTER_PHYS *)0x0;
        }
        else {
          ppVar3 = (partEMITTER_PHYS *)
                   wrsfxBARREL_EXPLODE_FIRE::wrsfxBARREL_EXPLODE_FIRE(this_02,fVar1);
        }
        *(partEMITTER_PHYS **)(this + 0x153) = ppVar3;
        if (ppVar3 != (partEMITTER_PHYS *)0x0) {
          partEMITTER_PHYS::AttachEmitter(*(partEMITTER_PHYS **)(this + 0x14f),ppVar3,0,0);
          *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x40000;
          this_03 = (wrsfxBARREL_EXPLODE_GLOW *)operator_new(0x2c0);
          if (this_03 == (wrsfxBARREL_EXPLODE_GLOW *)0x0) {
            ppVar3 = (partEMITTER_PHYS *)0x0;
          }
          else {
            ppVar3 = (partEMITTER_PHYS *)
                     wrsfxBARREL_EXPLODE_GLOW::wrsfxBARREL_EXPLODE_GLOW(this_03,fVar1);
          }
          *(partEMITTER_PHYS **)(this + 0x157) = ppVar3;
          if (ppVar3 != (partEMITTER_PHYS *)0x0) {
            partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
            this_04 = (wrsfxBARREL_EXPLODE_PARTS *)operator_new(0x2c0);
            if (this_04 == (wrsfxBARREL_EXPLODE_PARTS *)0x0) {
              ppVar3 = (partEMITTER_PHYS *)0x0;
            }
            else {
              ppVar3 = (partEMITTER_PHYS *)
                       wrsfxBARREL_EXPLODE_PARTS::wrsfxBARREL_EXPLODE_PARTS(this_04,fVar1);
            }
            *(partEMITTER_PHYS **)(this + 0x15b) = ppVar3;
            if (ppVar3 != (partEMITTER_PHYS *)0x0) {
              partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x15b));
              animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
              *(undefined4 *)(this + 0x15f) = 0x3f99999a;
            }
          }
        }
      }
    }
  }
  else if (param_1 == 2) {
    if (*(undefined4 **)(this + 0x15b) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x15b))(1);
      *(undefined4 *)(this + 0x15b) = 0;
    }
    if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x157))(1);
      *(undefined4 *)(this + 0x157) = 0;
    }
    if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x153))(1);
      *(undefined4 *)(this + 0x153) = 0;
    }
    if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x14f))(1);
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
  }
  else if (param_1 == 1000) {
    iVar2 = m3dUpdateTimeField((float *)(this + 0x15f),in_EDX);
    if (iVar2 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    }
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
    return 0;
  }
  return 0;
}

