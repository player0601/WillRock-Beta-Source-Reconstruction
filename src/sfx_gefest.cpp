
/* from: sfx_gefest.cpp
   addr: 0046B460 */

int __fastcall wrsfxGefestInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_gefest_hit,0x24534658,0x50,wrsfxGEFEST_HIT::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxGEFEST_HIT::pTexLgtn = txmMANAGER::Add(txmManager,s_sfx_gefest_hit_lgtn,0x40003,1);
  if (wrsfxGEFEST_HIT::pTexLgtn == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxGEFEST_HIT::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_gefest_hit_glow,0x40003,1);
  if (wrsfxGEFEST_HIT::pTexGlow == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxGEFEST_HIT::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_gefest_hit_spark,0x40003,1);
  if (wrsfxGEFEST_HIT::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_gefest_expl,0x24534658,0x50,wrsfxGEFEST_EXPL::Create,(char *)0x0,1)
  ;
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxGEFEST_EXPL::pTexParts = txmMANAGER::Add(txmManager,s_sfx_gefest_carbons,0x40003,1);
  if (wrsfxGEFEST_EXPL::pTexParts == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxGEFEST_EXPL::pTexSmoke = txmMANAGER::Add(txmManager,s_sfx_gefest_smoke,0x40003,1);
  if (wrsfxGEFEST_EXPL::pTexSmoke == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxGEFEST_EXPL::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_gefest_carbon_expl,0x40003,1);
  return (uint)(wrsfxGEFEST_EXPL::pTexGlow != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_gefest.cpp
   addr: 0046B570 */

wrsfxGEFEST_HIT_LGTN * __thiscall
wrsfxGEFEST_HIT_LGTN::wrsfxGEFEST_HIT_LGTN(wrsfxGEFEST_HIT_LGTN *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,10,37.5,0.2);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,37.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.16666667,37.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.15,0.05);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_41b40000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_41e40000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,fVar2,param_1 * ___real_418c0000,(m3dSPL_LINEAR1D *)pmVar3,1.0
            );
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxGEFEST_HIT::pTexLgtn);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_00000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x1000409;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,1.0,0.3,1.0);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,8.0,0.01);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_gefest.cpp
   addr: 0046B7B0 */

wrsfxGEFEST_HIT_GLOW * __thiscall
wrsfxGEFEST_HIT_GLOW::wrsfxGEFEST_HIT_GLOW(wrsfxGEFEST_HIT_GLOW *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xf,125.0,0.4);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,125.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.06666667,125.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.1);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_42340000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_424c0000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,fVar2,param_1 * ___real_420c0000,(m3dSPL_LINEAR1D *)pmVar3,1.0
            );
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxGEFEST_HIT::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x1000409;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,1.0,0.3,1.0);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,8.0,0.01);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_gefest.cpp
   addr: 0046B9F0 */

wrsfxGEFEST_HIT_SPARKS * __thiscall
wrsfxGEFEST_HIT_SPARKS::wrsfxGEFEST_HIT_SPARKS(wrsfxGEFEST_HIT_SPARKS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100,750.0,0.3);
  *(undefined ***)this = &_vftable_;
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar4 + 4) = 0;
    *(undefined4 *)(pmVar4 + 8) = 0;
    *(undefined4 *)(pmVar4 + 0xc) = 0;
    *(undefined4 *)(pmVar4 + 0x14) = 8;
    *(undefined4 *)(pmVar4 + 0x18) = 8;
    *(undefined4 *)(pmVar4 + 0x1c) = 1;
    *(undefined4 *)(pmVar4 + 0x20) = 0;
    *(undefined4 *)(pmVar4 + 0x24) = 0;
    *(undefined4 *)(pmVar4 + 0x28) = 0;
    *(undefined4 *)(pmVar4 + 0x2c) = 0;
    *(undefined4 *)(pmVar4 + 0x30) = 0;
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.033333335,750.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,0.1,750.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.2,0.1);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  fVar2 = param_1 * ___real_40a00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar4,1.0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxGEFEST_HIT::pTexSparks);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,0.1,0.0,1.0,0.0);
  fVar3 = param_1 * ___real_428c0000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xc4) = fVar2;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar3;
  *(float *)(this + 0xb8) = param_1 * ___real_42480000;
  *(float *)(this + 0xc0) = param_1 * ___real_40e00000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 9;
  *(uint *)(this + 4) = uVar1 | 0xa009;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,8.0,0.01);
  return this;
}




/* from: sfx_gefest.cpp
   addr: 0046BC50 */

int __thiscall
wrsfxGEFEST_HIT::ProcessMsg
          (wrsfxGEFEST_HIT *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  m3dMATR *pmVar1;
  float fVar2;
  int iVar3;
  objOBJ *this_00;
  wrsfxGEFEST_HIT_LGTN *this_01;
  partEMITTER_PHYS *ppVar4;
  wrsfxGEFEST_HIT_GLOW *this_02;
  wrsfxGEFEST_HIT_SPARKS *this_03;
  float in_EDX;
  m3dV local_c [12];
  
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar2 = *param_2;
    animINST::Scale(*(animINST **)(this + 0xbc),fVar2,fVar2,fVar2,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    pmVar1 = (m3dMATR *)(*(int *)(this + 0xbc) + 0x60);
    this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
    if (this_00 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(this_00,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      this_01 = (wrsfxGEFEST_HIT_LGTN *)operator_new(0x2c0);
      if (this_01 == (wrsfxGEFEST_HIT_LGTN *)0x0) {
        ppVar4 = (partEMITTER_PHYS *)0x0;
      }
      else {
        ppVar4 = (partEMITTER_PHYS *)wrsfxGEFEST_HIT_LGTN::wrsfxGEFEST_HIT_LGTN(this_01,fVar2);
      }
      *(partEMITTER_PHYS **)(this + 0x14f) = ppVar4;
      if (ppVar4 != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::SetPosDirSpeed(ppVar4,local_c,(m3dV *)0x0,(m3dV *)0x0);
        partEMITTER_PHYS::SetScaleCS(*(partEMITTER_PHYS **)(this + 0x14f),pmVar1);
        this_02 = (wrsfxGEFEST_HIT_GLOW *)operator_new(0x2c0);
        if (this_02 == (wrsfxGEFEST_HIT_GLOW *)0x0) {
          ppVar4 = (partEMITTER_PHYS *)0x0;
        }
        else {
          ppVar4 = (partEMITTER_PHYS *)wrsfxGEFEST_HIT_GLOW::wrsfxGEFEST_HIT_GLOW(this_02,fVar2);
        }
        *(partEMITTER_PHYS **)(this + 0x153) = ppVar4;
        if (ppVar4 != (partEMITTER_PHYS *)0x0) {
          partEMITTER_PHYS::SetPosDirSpeed(ppVar4,local_c,(m3dV *)0x0,(m3dV *)0x0);
          partEMITTER_PHYS::SetScaleCS(*(partEMITTER_PHYS **)(this + 0x153),pmVar1);
          this_03 = (wrsfxGEFEST_HIT_SPARKS *)operator_new(0x2c0);
          if (this_03 == (wrsfxGEFEST_HIT_SPARKS *)0x0) {
            ppVar4 = (partEMITTER_PHYS *)0x0;
          }
          else {
            ppVar4 = (partEMITTER_PHYS *)
                     wrsfxGEFEST_HIT_SPARKS::wrsfxGEFEST_HIT_SPARKS(this_03,fVar2);
          }
          *(partEMITTER_PHYS **)(this + 0x157) = ppVar4;
          if (ppVar4 != (partEMITTER_PHYS *)0x0) {
            iVar3 = partSetAreaEmissionObj(ppVar4,this_00,-1,(m3dV *)0x0);
            if (iVar3 != 0) {
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
    iVar3 = m3dUpdateTimeField((float *)(this + 0x15b),in_EDX);
    if (iVar3 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_gefest.cpp
   addr: 0046BE70 */

wrsfxGEFEST_EXPL_PARTS * __thiscall
wrsfxGEFEST_EXPL_PARTS::wrsfxGEFEST_EXPL_PARTS(wrsfxGEFEST_EXPL_PARTS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x5a,900.0,0.8);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,900.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.06666667,900.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.55,0.25);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_3e800000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3eb33333,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxGEFEST_EXPL::pTexParts);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_41200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_40a00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb0) = 0x40000000;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = param_1 * ___real_40400000;
  *(float *)(this + 0xc4) = param_1 * ___real_3fc00000;
  *(float *)(this + 0xe0) = param_1 * ___real_c11ccccd;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 9;
  *(uint *)(this + 4) = uVar1 | 0xa009;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_gefest.cpp
   addr: 0046C070 */

wrsfxGEFEST_EXPL_SMOKE * __thiscall
wrsfxGEFEST_EXPL_SMOKE::wrsfxGEFEST_EXPL_SMOKE(wrsfxGEFEST_EXPL_SMOKE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x14,200.0,0.7);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.06666667,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.5,0.2);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1,param_1 * ___real_3f000000,(m3dSPL_LINEAR1D *)0x0,1.0)
  ;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxGEFEST_EXPL::pTexSmoke);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  fVar2 = param_1 * ___real_41200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xb0) = 0x40800000;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_40a00000;
  *(float *)(this + 0xc0) = param_1 * ___real_40400000;
  *(float *)(this + 0xc4) = param_1 * ___real_3fc00000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 9;
  *(uint *)(this + 4) = uVar1 | 0xa009;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_gefest.cpp
   addr: 0046C260 */

wrsfxGEFEST_EXPL_GLOW * __thiscall
wrsfxGEFEST_EXPL_GLOW::wrsfxGEFEST_EXPL_GLOW(wrsfxGEFEST_EXPL_GLOW *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,8,60.0,0.4);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,60.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.06666667,60.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,60.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.1);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_4019999a);
  fVar2 = param_1 * ___real_40800000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar2);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxGEFEST_EXPL::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 9;
  *(uint *)(this + 4) = uVar1 | 0x1000009;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,0.5,1.0,0.5);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* from: sfx_gefest.cpp
   addr: 0046C490 */

int __thiscall
wrsfxGEFEST_EXPL::ProcessMsg
          (wrsfxGEFEST_EXPL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  float fVar2;
  int iVar3;
  wrsfxGEFEST_EXPL_PARTS *this_00;
  wrsfxGEFEST_EXPL_SMOKE *this_01;
  objOBJ *poVar4;
  wrsfxGEFEST_EXPL_GLOW *this_02;
  partEMITTER_PHYS *this_03;
  uint uVar5;
  float in_EDX;
  undefined4 *puVar6;
  char *pcVar7;
  m3dMATR *pmVar8;
  m3dV local_4c [12];
  m3dMATR local_40 [64];
  
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar2 = *param_2;
    animINST::Scale(*(animINST **)(this + 0xbc),fVar2,fVar2,fVar2,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_4c);
    this_00 = (wrsfxGEFEST_EXPL_PARTS *)operator_new(0x2c0);
    if (this_00 == (wrsfxGEFEST_EXPL_PARTS *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = wrsfxGEFEST_EXPL_PARTS::wrsfxGEFEST_EXPL_PARTS(this_00,fVar2);
    }
    *(int *)(this + 0x14f) = iVar3;
    if (iVar3 != 0) {
      this_01 = (wrsfxGEFEST_EXPL_SMOKE *)operator_new(0x2c0);
      if (this_01 == (wrsfxGEFEST_EXPL_SMOKE *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = wrsfxGEFEST_EXPL_SMOKE::wrsfxGEFEST_EXPL_SMOKE(this_01,fVar2);
      }
      *(int *)(this + 0x153) = iVar3;
      if (iVar3 != 0) {
        uVar5 = 0xffffffff;
        pcVar7 = s__emitter;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__emitter,~uVar5 - 1);
        if (poVar4 != (objOBJ *)0x0) {
          iVar3 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x14f),poVar4,-1,(m3dV *)0x0)
          ;
          if (iVar3 != 0) {
            iVar3 = partSetAreaEmissionObj
                              (*(partEMITTER_PHYS **)(this + 0x153),poVar4,-1,(m3dV *)0x0);
            if (iVar3 != 0) {
              this_02 = (wrsfxGEFEST_EXPL_GLOW *)operator_new(0x2c0);
              if (this_02 == (wrsfxGEFEST_EXPL_GLOW *)0x0) {
                this_03 = (partEMITTER_PHYS *)0x0;
              }
              else {
                this_03 = (partEMITTER_PHYS *)
                          wrsfxGEFEST_EXPL_GLOW::wrsfxGEFEST_EXPL_GLOW(this_02,fVar2);
              }
              *(partEMITTER_PHYS **)(this + 0x157) = this_03;
              if (this_03 != (partEMITTER_PHYS *)0x0) {
                partEMITTER_PHYS::SetPosDirSpeed(this_03,local_4c,(m3dV *)0x0,(m3dV *)0x0);
                puVar6 = (undefined4 *)(*(int *)(this + 0xbc) + 0x60);
                pmVar8 = local_40;
                for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(undefined4 *)pmVar8 = *puVar6;
                  puVar6 = puVar6 + 1;
                  pmVar8 = pmVar8 + 4;
                }
                m3dMATR::RemoveScale(local_40);
                partEMITTER_PHYS::SetScaleCS(*(partEMITTER_PHYS **)(this + 0x157),local_40);
                partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
                partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
                partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
                *(undefined4 *)(this + 0x15b) = 0x3fa66666;
              }
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
    iVar3 = m3dUpdateTimeField((float *)(this + 0x15b),in_EDX);
    if (iVar3 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
      return 0;
    }
  }
  return 0;
}




/* from: sfx_gefest.cpp
   addr: 0046C6F0 */

entENTITY * __fastcall wrsfxGEFEST_HIT::Create(animINST *param_1)

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




/* from: sfx_gefest.cpp
   addr: 0046C740
   addr: 0046C740 */

void * __thiscall wrsfxGEFEST_HIT::_vector_deleting_destructor_(wrsfxGEFEST_HIT *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_gefest.cpp
   addr: 0046C770 */

entENTITY * __fastcall wrsfxGEFEST_EXPL::Create(animINST *param_1)

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




/* from: sfx_gefest.cpp
   addr: 0046C7C0
   addr: 0046C7C0 */

void * __thiscall
wrsfxGEFEST_EXPL::_vector_deleting_destructor_(wrsfxGEFEST_EXPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

