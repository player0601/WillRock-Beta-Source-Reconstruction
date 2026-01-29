/* from: pwp_water_sfx.cpp
   addr: 00419840 */

int __fastcall pwpWaterSfxInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_water_splash,0x504d4347,0x2d,pwpWSFX_SPLASH::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_water_expl,0x5042534b,0x2d,pwpWSFX_EXPL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  pwpWSFX_SPLASH::pTexSplash = txmMANAGER::Add(txmManager,s_sfx_water_1,0x40003,1);
  if (pwpWSFX_SPLASH::pTexSplash == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpWSFX_SPLASH::pTexDrops = txmMANAGER::Add(txmManager,s_sfx_fountain_drop,0x40003,1);
  if (pwpWSFX_SPLASH::pTexDrops == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpWSFX_EXPL::pTexSplash1 = txmMANAGER::Add(txmManager,s_sfx_water_1,0x40003,1);
  if (pwpWSFX_EXPL::pTexSplash1 == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpWSFX_EXPL::pTexSplash2 = txmMANAGER::Add(txmManager,s_sfx_water_2,0x40003,1);
  return (uint)(pwpWSFX_EXPL::pTexSplash2 != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_water_sfx.cpp
   addr: 00419910 */

int __thiscall
pwpWSFX_SPLASH::ProcessMsg
          (pwpWSFX_SPLASH *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  pwpWSFX_SPLASH_PART *this_00;
  partEMITTER_PHYS *ppVar1;
  objOBJ *this_01;
  int iVar2;
  pwpWSFX_SPLASH_RIPPLES *this_02;
  m3dV local_18 [12];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == 1) {
    if (param_2 == (void *)0x0) {
      param_1 = 0x3f800000;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      param_1 = *param_2;
    }
    animINST::Scale(*(animINST **)(this + 0xbc),(float)param_1,(float)param_1,(float)param_1,0);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_18);
    local_c = _m3dVUnitY;
    local_8 = DAT_005f9994;
    local_4 = DAT_005f9998;
    this_00 = (pwpWSFX_SPLASH_PART *)operator_new(0x2c0);
    if (this_00 != (pwpWSFX_SPLASH_PART *)0x0) {
      ppVar1 = (partEMITTER_PHYS *)
               pwpWSFX_SPLASH_PART::pwpWSFX_SPLASH_PART(this_00,(m3dPLANE *)local_18,(float)param_1)
      ;
      if (ppVar1 != (partEMITTER_PHYS *)0x0) {
        this_01 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
        if (this_01 != (objOBJ *)0x0) {
          objOBJ::SetStateProcYes(this_01,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
          *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
          iVar2 = partSetAreaEmissionObj(ppVar1,this_01,-1,(m3dV *)0x0);
          if (iVar2 != 0) {
            partEMITTER_PHYS::StartEmission(ppVar1);
            this_02 = (pwpWSFX_SPLASH_RIPPLES *)operator_new(0x2c0);
            if (this_02 != (pwpWSFX_SPLASH_RIPPLES *)0x0) {
              ppVar1 = (partEMITTER_PHYS *)
                       pwpWSFX_SPLASH_RIPPLES::pwpWSFX_SPLASH_RIPPLES
                                 (this_02,(float)param_1 * ___real_3ecccccd);
              if (ppVar1 != (partEMITTER_PHYS *)0x0) {
                iVar2 = partSetAreaEmissionObj(ppVar1,this_01,-1,(m3dV *)0x0);
                if (iVar2 != 0) {
                  partEMITTER_PHYS::StartEmission(ppVar1);
                  msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_water_sfx.cpp
   addr: 00419A60 */

pwpWSFX_SPLASH_PART * __thiscall
pwpWSFX_SPLASH_PART::pwpWSFX_SPLASH_PART(pwpWSFX_SPLASH_PART *this,m3dPLANE *param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x28,300.0,1.7);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.20833333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,param_2 * ___real_3fe66666,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.25,0.45);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_2 * ___real_3ec00000,param_2 * ___real_3e000000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.9,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  fVar2 = param_2 * ___real_c11ccccd;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xe0) = fVar2;
  *(float *)(this + 0xb4) = param_2 * ___real_404ccccd;
  *(float *)(this + 0xb8) = param_2 * ___real_3f4ccccd;
  *(float *)(this + 0xc0) = param_2 * ___real_3d888889;
  *(float *)(this + 0xc4) = param_2 * ___real_3c888889;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,0.5,0.0,1.0,0.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.0,0.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpWSFX_SPLASH::pTexSplash);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.2);
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.0,0.0,1);
  partEMITTER_PHYS::SetCDTPlane((partEMITTER_PHYS *)this,1,0,param_1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000;
  return this;
}




/* from: pwp_water_sfx.cpp
   addr: 00419CA0
   addr: 00419CA0 */

int __thiscall
pwpWSFX_SPLASH_PART::PartApplyCDT
          (pwpWSFX_SPLASH_PART *this,partPART *param_1,m3dV *param_2,float param_3)

{
  int iVar1;
  
  iVar1 = partEMITTER_PHYS::PartApplyCDT((partEMITTER_PHYS *)this,param_1,param_2,param_3);
  if (iVar1 != 0) {
    *(undefined4 *)param_1 = 0x3f666666;
  }
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_water_sfx.cpp
   addr: 00419CD0 */

pwpWSFX_SPLASH_RIPPLES * __thiscall
pwpWSFX_SPLASH_RIPPLES::pwpWSFX_SPLASH_RIPPLES(pwpWSFX_SPLASH_RIPPLES *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  m3dMATR local_40 [64];
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,10,20.0,1.0);
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
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,20.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.16666667,20.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.33333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_00000000);
  fVar2 = param_1 * ___real_3fc00000;
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,153.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpWSFX_SPLASH::pTexDrops);
  fVar2 = param_1 * ___real_3f333333;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar2;
  *(float *)(this + 0xec) = fVar2;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,2.0,0.0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x200;
  *(uint *)(this + 4) = uVar1 | 0xa200;
  *(uint *)(this + 4) = uVar1 | 0x100a200;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,1.0,0.1,1.0);
  m3dMATR::Identity(local_40);
  partEMITTER_PHYS::SetScaleCS((partEMITTER_PHYS *)this,local_40);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_water_sfx.cpp
   addr: 00419EF0 */

int __thiscall
pwpWSFX_EXPL::ProcessMsg(pwpWSFX_EXPL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  pwpWSFX_EXPL_PART_1 *this_00;
  partEMITTER_PHYS *ppVar1;
  pwpWSFX_EXPL_PART_2 *this_01;
  partEMITTER_PHYS *this_02;
  objOBJ *this_03;
  int iVar2;
  pwpWSFX_SPLASH_RIPPLES *this_04;
  m3dV local_18 [12];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == 1) {
    if (param_2 == (void *)0x0) {
      param_1 = 0x3f800000;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      param_1 = *param_2;
    }
    animINST::Scale(*(animINST **)(this + 0xbc),(float)param_1,(float)param_1,(float)param_1,0);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_18);
    local_c = _m3dVUnitY;
    local_8 = DAT_005f9994;
    local_4 = DAT_005f9998;
    this_00 = (pwpWSFX_EXPL_PART_1 *)operator_new(0x2c0);
    if (this_00 != (pwpWSFX_EXPL_PART_1 *)0x0) {
      ppVar1 = (partEMITTER_PHYS *)pwpWSFX_EXPL_PART_1::pwpWSFX_EXPL_PART_1(this_00,(float)param_1);
      if (ppVar1 != (partEMITTER_PHYS *)0x0) {
        this_01 = (pwpWSFX_EXPL_PART_2 *)operator_new(0x2c0);
        if (this_01 != (pwpWSFX_EXPL_PART_2 *)0x0) {
          this_02 = (partEMITTER_PHYS *)
                    pwpWSFX_EXPL_PART_2::pwpWSFX_EXPL_PART_2
                              (this_01,(m3dPLANE *)local_18,(float)param_1);
          if (this_02 != (partEMITTER_PHYS *)0x0) {
            this_03 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
            if (this_03 != (objOBJ *)0x0) {
              objOBJ::SetStateProcYes(this_03,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
              *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
              iVar2 = partSetAreaEmissionObj(ppVar1,this_03,-1,(m3dV *)0x0);
              if (iVar2 != 0) {
                iVar2 = partSetAreaEmissionObj(this_02,this_03,-1,(m3dV *)0x0);
                if (iVar2 != 0) {
                  partEMITTER_PHYS::StartEmission(ppVar1);
                  partEMITTER_PHYS::StartEmission(this_02);
                  this_04 = (pwpWSFX_SPLASH_RIPPLES *)operator_new(0x2c0);
                  if (this_04 != (pwpWSFX_SPLASH_RIPPLES *)0x0) {
                    ppVar1 = (partEMITTER_PHYS *)
                             pwpWSFX_SPLASH_RIPPLES::pwpWSFX_SPLASH_RIPPLES
                                       (this_04,(float)param_1 + (float)param_1);
                    if (ppVar1 != (partEMITTER_PHYS *)0x0) {
                      iVar2 = partSetAreaEmissionObj(ppVar1,this_03,-1,(m3dV *)0x0);
                      if (iVar2 != 0) {
                        partEMITTER_PHYS::StartEmission(ppVar1);
                        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_water_sfx.cpp
   addr: 0041A0A0 */

pwpWSFX_EXPL_PART_1 * __thiscall
pwpWSFX_EXPL_PART_1::pwpWSFX_EXPL_PART_1(pwpWSFX_EXPL_PART_1 *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xd2,2000.0,2.0);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.041666668,2000.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.20833333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.0,0.1);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3fc00000,param_1 * ___real_3f000000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
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
  fVar2 = param_1 * ___real_c1700000;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xe0) = fVar2;
  *(float *)(this + 0xb4) = param_1 * ___real_410b2164;
  *(float *)(this + 0xb8) = param_1 * ___real_40a00000;
  *(float *)(this + 0xc0) = param_1 * ___real_3f2aaaab;
  *(float *)(this + 0xc4) = param_1 * ___real_3e2aaaab;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,0.5,0.0,1.0,0.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.0,0.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpWSFX_EXPL::pTexSplash1);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,8.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_water_sfx.cpp
   addr: 0041A2B0 */

pwpWSFX_EXPL_PART_2 * __thiscall
pwpWSFX_EXPL_PART_2::pwpWSFX_EXPL_PART_2(pwpWSFX_EXPL_PART_2 *this,m3dPLANE *param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xd2,2000.0,3.0);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.041666668,2000.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.20833333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,2.0,1.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_2 * ___real_3fc00000,param_2 * ___real_3f000000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.095,61.199997);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.9,61.199997);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  fVar2 = param_2 * ___real_c1200000;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xe0) = fVar2;
  *(float *)(this + 0xb4) = param_2 * ___real_4099999a;
  *(float *)(this + 0xb8) = param_2 * ___real_40400000;
  *(float *)(this + 0xc0) = param_2 * ___real_3fa3d70a;
  *(float *)(this + 0xc4) = param_2 * ___real_3f4ccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,0.5,0.0,1.0,0.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpWSFX_EXPL::pTexSplash2);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,8.0,0.1);
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.0,0.0,1);
  partEMITTER_PHYS::SetCDTPlane((partEMITTER_PHYS *)this,1,0,param_1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2010000;
  return this;
}




/* from: pwp_water_sfx.cpp
   addr: 0041A500 */

entENTITY * __fastcall pwpWSFX_SPLASH::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x14f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: pwp_water_sfx.cpp
   addr: 0041A530
   addr: 0041A530 */

void * __thiscall pwpWSFX_SPLASH::_vector_deleting_destructor_(pwpWSFX_SPLASH *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: pwp_water_sfx.cpp
   addr: 0041A560 */

entENTITY * __fastcall pwpWSFX_EXPL::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x14f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: pwp_water_sfx.cpp
   addr: 0041A590
   addr: 0041A590 */

void * __thiscall pwpWSFX_EXPL::_vector_deleting_destructor_(pwpWSFX_EXPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}
