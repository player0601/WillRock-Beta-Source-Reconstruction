
/* from: sfx_cerber.cpp
   addr: 00463720 */

int __fastcall wrsfxCerberInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_cerber_pjl_expl,0x24534658,0x50,wrsfxCERBER_FIREBALL_EXPL::Create,
                           (char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxCERBER_FIREBALL_EXPL::pTexSparks =
       txmMANAGER::Add(txmManager,s_sfx_cerber_pjl_expl_sparks,0x40003,1);
  if (wrsfxCERBER_FIREBALL_EXPL::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxCERBER_FIREBALL_EXPL::pTexBurn = txmMANAGER::Add(txmManager,s_sfx_cerber_pjl_burn,0x40003,1);
  if (wrsfxCERBER_FIREBALL_EXPL::pTexBurn == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxCERBER_FIREBALL_EXPL::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_rat_expl_glow,0x40003,1);
  if (wrsfxCERBER_FIREBALL_EXPL::pTexGlow == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_cerber_pjl_acid_expl,0x24534658,0x50,wrsfxCERBER_ACID_EXPL::Create,
                           (char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxCERBER_ACID_EXPL::pTexSmoke =
       txmMANAGER::Add(txmManager,s_sfx_cerber_pjl_acid_smoke,0x40003,1);
  if (wrsfxCERBER_ACID_EXPL::pTexSmoke == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxCERBER_ACID_EXPL::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_opp_acd_splash,0x40003,1);
  return (uint)(wrsfxCERBER_ACID_EXPL::pTexGlow != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cerber.cpp
   addr: 00463810 */

wrsfxCERBER_FIREBALL_EXPL_SPARKS * __thiscall
wrsfxCERBER_FIREBALL_EXPL_SPARKS::wrsfxCERBER_FIREBALL_EXPL_SPARKS
          (wrsfxCERBER_FIREBALL_EXPL_SPARKS *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x4b,750.0,0.7);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,750.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,750.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.5,0.2);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_40400000);
  fVar1 = param_1 * ___real_40c00000;
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,200.175);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCERBER_FIREBALL_EXPL::pTexSparks);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,0.083333336,0.0,1.0,0.0);
  fVar1 = param_1 * ___real_41200000;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar1;
  *(float *)(this + 0xb8) = fVar1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cerber.cpp
   addr: 00463A50 */

wrsfxCERBER_FIREBALL_EXPL_BURN * __thiscall
wrsfxCERBER_FIREBALL_EXPL_BURN::wrsfxCERBER_FIREBALL_EXPL_BURN
          (wrsfxCERBER_FIREBALL_EXPL_BURN *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  m3dSPL *pmVar5;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x14,200.0,0.9);
  *(undefined ***)this = &_vftable_;
  pmVar5 = (m3dSPL *)operator_new(0x34);
  if (pmVar5 == (m3dSPL *)0x0) {
    pmVar5 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar5,0,8,1);
    *(undefined ***)pmVar5 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar5,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar5,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar5,1,0.033333335,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar5,2,0.06666667,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar5,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar5);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.7,0.2);
  fVar2 = param_1 * ___real_3fc00000;
  fVar3 = param_1 * ___real_40900000;
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar3,fVar2,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar5 = (m3dSPL *)operator_new(0x34);
  if (pmVar5 == (m3dSPL *)0x0) {
    pmVar5 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar5,0,8,1);
    *(undefined ***)pmVar5 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar5,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar5,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar5,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar5);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCERBER_FIREBALL_EXPL::pTexBurn);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,180.0);
  fVar4 = param_1 * ___real_40400000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xe8) = fVar4;
  fVar4 = param_1 * ___real_3dcccccd;
  *(float *)(this + 0xb8) = fVar3;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xc0) = fVar2;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb0) = fVar4;
  *(float *)(this + 0xb4) = param_1 * ___real_41100000;
  *(float *)(this + 0xc4) = param_1 * ___real_3f400000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,4.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cerber.cpp
   addr: 00463C50 */

wrsfxCERBER_FIREBALL_EXPL_GLOW * __thiscall
wrsfxCERBER_FIREBALL_EXPL_GLOW::wrsfxCERBER_FIREBALL_EXPL_GLOW
          (wrsfxCERBER_FIREBALL_EXPL_GLOW *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x4b,75.0,0.8);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,75.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,75.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.6,0.2);
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
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_420c0000,fVar1,(m3dSPL_LINEAR1D *)pmVar2,1.0
            );
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCERBER_FIREBALL_EXPL::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar1 = param_1 * ___real_00000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(float *)(this + 0xb8) = fVar1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,4.0,0.1);
  return this;
}




/* from: sfx_cerber.cpp
   addr: 00463EB0 */

int __thiscall
wrsfxCERBER_FIREBALL_EXPL::ProcessMsg
          (wrsfxCERBER_FIREBALL_EXPL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  objOBJ *this_00;
  wrsfxCERBER_FIREBALL_EXPL_SPARKS *this_01;
  partEMITTER_PHYS *ppVar3;
  wrsfxCERBER_FIREBALL_EXPL_BURN *this_02;
  wrsfxCERBER_FIREBALL_EXPL_GLOW *this_03;
  float in_EDX;
  m3dV local_c [12];
  
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar1 = *param_2;
    animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
    if (this_00 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(this_00,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      this_01 = (wrsfxCERBER_FIREBALL_EXPL_SPARKS *)operator_new(0x2c0);
      if (this_01 == (wrsfxCERBER_FIREBALL_EXPL_SPARKS *)0x0) {
        ppVar3 = (partEMITTER_PHYS *)0x0;
      }
      else {
        ppVar3 = (partEMITTER_PHYS *)
                 wrsfxCERBER_FIREBALL_EXPL_SPARKS::wrsfxCERBER_FIREBALL_EXPL_SPARKS(this_01,fVar1);
      }
      *(partEMITTER_PHYS **)(this + 0x14f) = ppVar3;
      if (ppVar3 != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
        this_02 = (wrsfxCERBER_FIREBALL_EXPL_BURN *)operator_new(0x2c0);
        if (this_02 == (wrsfxCERBER_FIREBALL_EXPL_BURN *)0x0) {
          ppVar3 = (partEMITTER_PHYS *)0x0;
        }
        else {
          ppVar3 = (partEMITTER_PHYS *)
                   wrsfxCERBER_FIREBALL_EXPL_BURN::wrsfxCERBER_FIREBALL_EXPL_BURN(this_02,fVar1);
        }
        *(partEMITTER_PHYS **)(this + 0x153) = ppVar3;
        if (ppVar3 != (partEMITTER_PHYS *)0x0) {
          iVar2 = partSetAreaEmissionObj(ppVar3,this_00,-1,(m3dV *)0x0);
          if (iVar2 != 0) {
            this_03 = (wrsfxCERBER_FIREBALL_EXPL_GLOW *)operator_new(0x2c0);
            if (this_03 == (wrsfxCERBER_FIREBALL_EXPL_GLOW *)0x0) {
              ppVar3 = (partEMITTER_PHYS *)0x0;
            }
            else {
              ppVar3 = (partEMITTER_PHYS *)
                       wrsfxCERBER_FIREBALL_EXPL_GLOW::wrsfxCERBER_FIREBALL_EXPL_GLOW(this_03,fVar1)
              ;
            }
            *(partEMITTER_PHYS **)(this + 0x157) = ppVar3;
            if (ppVar3 != (partEMITTER_PHYS *)0x0) {
              partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
              *(undefined4 *)(this + 0x15b) = 0x3fc00000;
            }
          }
        }
      }
    }
  }
  else if (param_1 == 2) {
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
    iVar2 = m3dUpdateTimeField((float *)(this + 0x15b),in_EDX);
    if (iVar2 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cerber.cpp
   addr: 004640C0 */

wrsfxCERBER_ACID_EXPL_SMOKE * __thiscall
wrsfxCERBER_ACID_EXPL_SMOKE::wrsfxCERBER_ACID_EXPL_SMOKE
          (wrsfxCERBER_ACID_EXPL_SMOKE *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x19,225.0,0.8);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,225.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,225.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.55,0.25);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3fa00000,param_1 * ___real_3e800000,
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
            ((partEMITTER_PHYS *)this,0xffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCERBER_ACID_EXPL::pTexSmoke);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,120.0);
  fVar1 = param_1 * ___real_3fc00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  fVar1 = param_1 * ___real_3f000000;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb8) = fVar1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cerber.cpp
   addr: 004642C0 */

wrsfxCERBER_ACID_EXPL_GLOW * __thiscall
wrsfxCERBER_ACID_EXPL_GLOW::wrsfxCERBER_ACID_EXPL_GLOW
          (wrsfxCERBER_ACID_EXPL_GLOW *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xc,100.0,0.4);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
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
  fVar1 = param_1 * ___real_40100000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,fVar1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,param_1 * ___real_40666667);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,fVar1,param_1 * ___real_3f400000,(m3dSPL_LINEAR1D *)pmVar2,1.0
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
            ((partEMITTER_PHYS *)this,0xffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCERBER_ACID_EXPL::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* from: sfx_cerber.cpp
   addr: 00464500 */

int __thiscall
wrsfxCERBER_ACID_EXPL::ProcessMsg
          (wrsfxCERBER_ACID_EXPL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  wrsfxCERBER_ACID_EXPL_SMOKE *this_00;
  partEMITTER_PHYS *ppVar3;
  wrsfxCERBER_ACID_EXPL_GLOW *this_01;
  float in_EDX;
  m3dV local_c [12];
  
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar1 = *param_2;
    animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    this_00 = (wrsfxCERBER_ACID_EXPL_SMOKE *)operator_new(0x2c0);
    if (this_00 == (wrsfxCERBER_ACID_EXPL_SMOKE *)0x0) {
      ppVar3 = (partEMITTER_PHYS *)0x0;
    }
    else {
      ppVar3 = (partEMITTER_PHYS *)
               wrsfxCERBER_ACID_EXPL_SMOKE::wrsfxCERBER_ACID_EXPL_SMOKE(this_00,fVar1);
    }
    *(partEMITTER_PHYS **)(this + 0x14f) = ppVar3;
    if (ppVar3 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
      this_01 = (wrsfxCERBER_ACID_EXPL_GLOW *)operator_new(0x2c0);
      if (this_01 == (wrsfxCERBER_ACID_EXPL_GLOW *)0x0) {
        ppVar3 = (partEMITTER_PHYS *)0x0;
      }
      else {
        ppVar3 = (partEMITTER_PHYS *)
                 wrsfxCERBER_ACID_EXPL_GLOW::wrsfxCERBER_ACID_EXPL_GLOW(this_01,fVar1);
      }
      *(partEMITTER_PHYS **)(this + 0x153) = ppVar3;
      if (ppVar3 != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
        *(undefined4 *)(this + 0x157) = 0x3f800000;
      }
    }
  }
  else if (param_1 == 1000) {
    iVar2 = m3dUpdateTimeField((float *)(this + 0x157),in_EDX);
    if (iVar2 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
      return 0;
    }
  }
  return 0;
}




/* from: sfx_cerber.cpp
   addr: 00464620 */

entENTITY * __fastcall wrsfxCERBER_FIREBALL_EXPL::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x15f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_cerber.cpp
   addr: 00464670
   addr: 00464670 */

void * __thiscall
wrsfxCERBER_FIREBALL_EXPL::_vector_deleting_destructor_
          (wrsfxCERBER_FIREBALL_EXPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_cerber.cpp
   addr: 004646A0 */

entENTITY * __fastcall wrsfxCERBER_ACID_EXPL::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x15b);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_cerber.cpp
   addr: 004646F0
   addr: 004646F0 */

void * __thiscall
wrsfxCERBER_ACID_EXPL::_vector_deleting_destructor_(wrsfxCERBER_ACID_EXPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

