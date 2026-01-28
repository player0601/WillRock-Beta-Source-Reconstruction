
/* from: ai_zevs_pjl.cpp
   addr: 00458280 */

int __fastcall aiPjlZevsMoteInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pjl_zevs,0x5a455653,0x32,pjlZEVS::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  pjlZEVS::pTexFire = txmMANAGER::Add(txmManager,s_sfx_cerber_pjl_burn,0x40003,1);
  return (uint)(pjlZEVS::pTexFire != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs_pjl.cpp
   addr: 004582D0 */

entENTITY * __fastcall pjlZEVS::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1a8);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0xbf800000;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x16f) = 0xffffffff;
    *(undefined4 *)(this + 0x173) = 0xffffffff;
    *(undefined4 *)(this + 0x177) = 0xbf800000;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined ***)this = &pjlPJL<struct_pjlZEVS_SFX>::_vftable_;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = 0;
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x194) = _m3dVZero;
    *(undefined4 *)(this + 0x198) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x19c) = uVar1;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_zevs_pjl.cpp
   addr: 004583A0
   addr: 004583A0
   addr: 004583A0
   addr: 004583A0 */

void * __thiscall pjlZEVS::_scalar_deleting_destructor_(pjlZEVS *this,uint param_1)

{
  *(undefined ***)this = &pjlPJL<struct_pjlZEVS_SFX>::_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs_pjl.cpp
   addr: 004583D0 */

pjlZEVS_SFX_FIRE * __thiscall
pjlZEVS_SFX_FIRE::pjlZEVS_SFX_FIRE(pjlZEVS_SFX_FIRE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,250.0,0.3);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.25,0.05);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_40f00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_40100000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.2,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pjlZEVS::pTexFire);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_41000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar2;
  *(float *)(this + 0xec) = fVar2;
  fVar2 = param_1 * ___real_42200000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_41200000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x800419;
  *(uint *)(this + 4) = uVar1 | 0x800619;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs_pjl.cpp
   addr: 004585A0 */

pjlZEVS_SFX_TRAIL * __thiscall
pjlZEVS_SFX_TRAIL::pjlZEVS_SFX_TRAIL(pjlZEVS_SFX_TRAIL *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,200.0,0.5);
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
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_40200000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
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
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pjlZEVS::pTexFire);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x609;
  return this;
}




/* from: ai_zevs_pjl.cpp
   addr: 00458720 */

int __thiscall pjlZEVS_SFX::StartSFX(pjlZEVS_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  float fVar1;
  animINST *this_00;
  pjlZEVS_SFX_FIRE *this_01;
  int iVar2;
  objOBJ *poVar3;
  pjlZEVS_SFX_TRAIL *this_02;
  
  fVar1 = *(float *)(param_2 + 0x51);
  this_00 = *(animINST **)(param_1 + 0xbc);
  animINST::Scale(this_00,fVar1,fVar1,fVar1,0);
  this_01 = (pjlZEVS_SFX_FIRE *)operator_new(0x2c0);
  if (this_01 == (pjlZEVS_SFX_FIRE *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = pjlZEVS_SFX_FIRE::pjlZEVS_SFX_FIRE(this_01,*(float *)(param_2 + 0x51));
  }
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(this_00 + 0x10),s_trail_emitter);
  *(objOBJ **)(this + 4) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  this_02 = (pjlZEVS_SFX_TRAIL *)operator_new(0x2c0);
  if (this_02 == (pjlZEVS_SFX_TRAIL *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = pjlZEVS_SFX_TRAIL::pjlZEVS_SFX_TRAIL(this_02,*(float *)(param_2 + 0x51));
  }
  *(int *)(this + 8) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(this_00 + 0x10),s_trail_emitter);
  *(objOBJ **)(this + 0xc) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  animINST::SetAnimSeq(this_00,0,0.0);
  pjlMEDUSA_SFX::UpdateSFX((pjlMEDUSA_SFX *)this,param_1);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 8));
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs_pjl.cpp
   addr: 00458830 */

int __thiscall pjlZEVS::ProcessINIT(pjlZEVS *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  undefined **local_68;
  undefined4 local_64;
  undefined4 local_60;
  m3dV local_5c [4];
  float local_58;
  m3dV local_50 [12];
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  pjlCDT local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(this + 0x177) = *(undefined4 *)(param_1 + 0x4c);
    this[0x17b] = *(pjlZEVS *)(param_1 + 0x50);
    if (((byte)this[0x88] & 4) != 0) {
      if (*(int *)(param_1 + 0x48) != -1) {
        peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
        if (peVar2 != (entIACTIVE_OBJ *)0x0) {
          physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
        }
      }
      *(undefined4 *)(this + 0x173) = *(undefined4 *)(param_1 + 0x48);
    }
    if (*(int *)(gsSysMP + 0x28) != 4) {
      pjlZEVS_SFX::StartSFX((pjlZEVS_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
    }
    if ((((byte)this[0x88] & 4) != 0) && (*(int *)(param_1 + 0x48) != -1)) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        local_60 = *(undefined4 *)(peVar2 + 0xbc);
        local_68 = &cdtREFINE::_vftable_;
        local_64 = 2;
        cdtINFO::cdtINFO((cdtINFO *)&local_44);
        pjlCDT::pjlCDT(local_24);
        animINST::GetPos(*(animINST **)(peVar2 + 0xbc),local_5c);
        animINST::GetPos(*(animINST **)(this + 0xbc),local_50);
        local_58 = local_58 + ___real_3fc00000;
        iVar1 = scnSCENE::IsVisiblePoint
                          (gsScenePtr,local_5c,local_50,0,(cdtREFINE *)&local_68,
                           (cdtINFO *)&local_44);
        if (iVar1 == 0) {
          if ((local_40 == 0) || (*(int *)(local_40 + 0x13c) == 0)) {
            local_20 = 0xffffffff;
          }
          else {
            local_20 = *(undefined4 *)(*(int *)(local_40 + 0x13c) + 0x8c);
          }
          local_18 = local_3c;
          local_1c = local_44;
          local_c = local_30;
          local_10 = local_34;
          local_14 = local_38;
          local_4 = local_28;
          local_8 = local_2c;
          msgSYSTEM::PostMsgData
                    (&msgSystem,(msgADDR *)this,0x4d1,(msgDATA *)local_24,(msgADDR *)this);
        }
      }
    }
    *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(param_1 + 0x51);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 2;
    pjlMEDUSA::AlignWithSpeed((pjlMEDUSA *)this);
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs_pjl.cpp
   addr: 00458A50 */

void __thiscall pjlZEVS::ProcessFRAME(pjlZEVS *this)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  msgDATA::msgDATA((msgDATA *)&local_c);
  local_4 = 0.0;
  local_8 = 9.80909e-45;
  local_c = (float)CONCAT22(0xc,(undefined2)local_c);
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    pjlMEDUSA_SFX::UpdateSFX((pjlMEDUSA_SFX *)(this + 0x153),(physPHYS *)this);
  }
  iVar1 = (**(code **)(*(int *)this + 0x90))();
  if (*(int *)(this + 0x180) != iVar1) {
    fStack_28 = 0.0;
    fStack_2c = 9.80909e-45;
    fStack_30 = 1.124985e-39;
    fStack_28 = (float)(**(code **)(*(int *)this + 0x90))();
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)&fStack_30,0x10000,0xfffffffd,
               0xfffffffd);
    *(float *)(this + 0x180) = fStack_28;
  }
  physMATH::GetPos(*(physMATH **)(this + 0x14f),(m3dV *)&fStack_18);
  iVar1 = *(int *)(this + 0x14f);
  fStack_30 = *(float *)(iVar1 + 0x48);
  fStack_2c = *(float *)(iVar1 + 0x4c);
  fStack_28 = *(float *)(iVar1 + 0x50);
  fStack_38 = fStack_30 * fStack_30 + fStack_2c * fStack_2c + fStack_28 * fStack_28;
  if (m3dSimdType == 0) {
    fStack_38 = fStack_38 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar5 = rsqrtss(ZEXT416((uint)fStack_38),ZEXT416((uint)fStack_38));
    fVar6 = auVar5._0_4_;
    fStack_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_38 * fVar6 * fVar6) *
                fStack_38;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fStack_38;
    uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    fStack_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    fStack_38 = SQRT(fStack_38);
  }
  entENTITY::GetDistToClosestPlayer((entENTITY *)this,1.5,(m3dV *)&fStack_24,(plgsACTION **)0x0);
  local_c = fStack_24 - fStack_18;
  local_8 = fStack_20 - fStack_14;
  local_4 = fStack_1c - fStack_10;
  fVar6 = m3xzAngleVector((m3dV *)&fStack_30,(m3dV *)&local_c);
  if (___real_42200000 < ABS(fVar6)) {
    fStack_30 = fStack_30 - _m3dVUnitY * ___real_3f333333;
    fStack_2c = fStack_2c - DAT_005f9994 * ___real_3f333333;
    fStack_28 = fStack_28 - DAT_005f9998 * ___real_3f333333;
    m3dNormalize((m3dV *)&fStack_30);
    iVar1 = *(int *)(this + 0x14f);
    *(float *)(iVar1 + 0x48) = fStack_30 * fStack_38;
    *(float *)(iVar1 + 0x4c) = fStack_2c * fStack_38;
    *(float *)(iVar1 + 0x50) = fStack_28 * fStack_38;
  }
  return;
}




/* from: ai_zevs_pjl.cpp
   addr: 00458CE0 */

void __thiscall pjlZEVS::ShowCollisSFX(pjlZEVS *this,pjlEV_CDT *param_1)

{
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
  entCreate(gsScenePtr,s_sfx_medusa_expl,s_sfx_medusa_expl,local_98,this + 0x1a4,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs_pjl.cpp
   addr: 00458D40 */

int __thiscall pjlZEVS::ProcessCDT(pjlZEVS *this,cdtINFO *param_1)

{
  char *pcVar1;
  int iVar2;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_EDX;
  msgDATA *pmVar3;
  undefined4 *puVar4;
  int iStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  char *pcStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  msgDATA local_d8 [2];
  undefined2 local_d6;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  ulong local_b4;
  animCREATE_DATA local_98 [18];
  undefined4 auStack_86 [33];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  msgDATA::msgDATA(local_d8);
  local_c0 = _m3dVUnitY;
  local_b8 = DAT_005f9998;
  local_d0 = 1;
  local_bc = DAT_005f9994;
  local_b4 = 0;
  local_d4 = 0;
  local_d6 = 0x28;
  if (((byte)this[0x88] & 4) != 0) {
    if (((*(int *)(param_1 + 4) == 0) ||
        (iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x13c), iVar2 == 0)) ||
       (local_d0 = 0, (*(byte *)(iVar2 + 0xb8) & 1) == 0)) {
      local_d0 = 1;
    }
    local_d0 = pjlPJL<struct_pjlZEVS_SFX>::GetCDTType((pjlPJL<struct_pjlZEVS_SFX> *)this,param_1);
    local_b4 = gsEffEnvirColor(param_1,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
    local_cc = *(undefined4 *)(param_1 + 0x10);
    local_c8 = *(undefined4 *)(param_1 + 0x14);
    local_c4 = *(undefined4 *)(param_1 + 0x18);
    scnSCENE::GetCDTFace(gsScenePtr,param_1,(m3dPOLY *)0x0,(m3dV *)&local_c0);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,local_d8,0xa0000,0xffffffff,0xfffffffd);
    (**(code **)(*(int *)this + 0x8c))(local_d8);
    (**(code **)(*(int *)this + 0x80))(param_1);
  }
  entENTITY::GetDistToClosestPlayer((entENTITY *)this,0.0,(m3dV *)&local_e4,(plgsACTION **)0x0);
  iStack_104 = 0;
  do {
    if (0xb < *(int *)(aiAttackPlanner + 0x28)) {
      return 1;
    }
    iVar2 = m3dRandIntMax(0xe);
    pcStack_f4 = (&PTR_s_ai_glad_knife_005f18dc)[iVar2 * 2];
    pcVar1 = (&validOpps)[iVar2 * 2];
    fStack_100 = m3dRandRange(extraout_ECX,(float)pcStack_f4);
    fStack_100 = fStack_100 + *(float *)(param_1 + 0x10);
    fStack_fc = *(float *)(param_1 + 0x14);
    fStack_f8 = m3dRandRange(extraout_ECX_00,extraout_EDX);
    fStack_f8 = fStack_f8 + *(float *)(param_1 + 0x18);
    fStack_f0 = local_e4 - fStack_100;
    fStack_ec = fStack_e0 - fStack_fc;
    fStack_e8 = fStack_dc - fStack_f8;
    m3dNormalize((m3dV *)&fStack_f0);
    m3dMATR::MakeLCS2WCS_VZ((m3dMATR *)local_d8,(m3dV *)&fStack_100,(m3dV *)&fStack_f0);
    pmVar3 = local_d8;
    puVar4 = auStack_86;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *(undefined4 *)pmVar3;
      pmVar3 = pmVar3 + 4;
      puVar4 = puVar4 + 1;
    }
    entCreate(gsScenePtr,pcStack_f4,pcVar1,local_98,(void *)0x0,0);
    iStack_104 = iStack_104 + 1;
  } while (iStack_104 < 3);
  return 1;
}




/* from: ai_zevs_pjl.cpp
   addr: 00458F60 */

int __thiscall
pjlPJL<struct_pjlZEVS_SFX>::ProcessINIT(pjlPJL<struct_pjlZEVS_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x177) = *(undefined4 *)(param_1 + 0x4c);
  this[0x17b] = *(pjlPJL<struct_pjlZEVS_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x173) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pjlZEVS_SFX::StartSFX((pjlZEVS_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: ai_zevs_pjl.cpp
   addr: 00459010
   addr: 00459010 */

void __thiscall pjlPJL<struct_pjlZEVS_SFX>::ProcessTERM(pjlPJL<struct_pjlZEVS_SFX> *this)

{
  if (*(partEMITTER_PHYS **)(this + 0x15b) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x15b));
    *(undefined4 *)(this + 0x15b) = 0;
  }
  if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x153) = 0;
  }
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* from: ai_zevs_pjl.cpp
   addr: 00459050
   addr: 00459050
   addr: 00459050 */

void __thiscall
pjlPJL<struct_pjlZEVS_SFX>::DispatchDamage(pjlPJL<struct_pjlZEVS_SFX> *this,cdtINFO *param_1)

{
  if (this[0x17b] != (pjlPJL<struct_pjlZEVS_SFX>)0x0) {
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)(param_1 + 0x10),*(float *)(this + 0x163),
               *(float *)(this + 0x167),*(int *)(this + 0x16f),*(int *)(this + 0x16b),param_1,
               *(ulong *)(this + 0x173),(dmgDISPATCHER *)0x0);
    return;
  }
  if (*(animINST **)(param_1 + 4) != (animINST *)0x0) {
    dmgDispatchExplosDamageInst
              (*(animINST **)(param_1 + 4),(entENTITY *)this,(m3dV *)(param_1 + 0x10),
               *(float *)(this + 0x163),*(float *)(this + 0x167),*(int *)(this + 0x16f),
               *(int *)(this + 0x16b),param_1,*(ulong *)(this + 0x173),(dmgDISPATCHER *)0x0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_zevs_pjl.cpp
   addr: 004590E0
   addr: 004590E0 */

void __thiscall
pjlPJL<struct_pjlMEDUSA_SFX>::ProcessEV_CDT(pjlPJL<struct_pjlMEDUSA_SFX> *this,pjlEV_CDT *param_1)

{
  int iVar1;
  
  *(uint *)(this + 0x17c) = *(uint *)(this + 0x17c) | 1;
  if (*(partEMITTER_PHYS **)(this + 0x15b) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x15b));
    *(undefined4 *)(this + 0x15b) = 0;
  }
  if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x153) = 0;
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    (**(code **)(*(int *)this + 0x84))(param_1);
  }
  iVar1 = *(int *)(this + 0x14f);
  *(undefined4 *)(iVar1 + 0x48) = _m3dVZero;
  *(undefined4 *)(iVar1 + 0x4c) = DAT_00963740;
  *(undefined4 *)(iVar1 + 0x50) = DAT_00963744;
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
  (**(code **)(*(int *)this + 0x88))();
  return;
}




/* from: ai_zevs_pjl.cpp
   addr: 00459180
   addr: 00459180
   addr: 00459180
   addr: 00459180
   addr: 00459180
   addr: 00459180
   addr: 00459180
   addr: 00459180
   addr: 00459180
   addr: 00459180
   addr: 00459180
   addr: 00459180
   addr: 00459180
   addr: 00459180 */

void __thiscall
pjlNPC_PJL<struct_pjlARROW_GENERIC_SFX>::ProcessMP_NOTIFY
          (pjlNPC_PJL<struct_pjlARROW_GENERIC_SFX> *this,gsEVENT *param_1)

{
  physPHYS::ProcessMP_NOTIFY((physPHYS *)this,param_1);
  if (*(int *)(param_1 + 4) == 0) {
    *(int *)(*(int *)(this + 0x14f) + 0xb0) = *(int *)(*(int *)(this + 0x14f) + 0xb0) + 1;
    (**(code **)(*(int *)this + 0x8c))(param_1);
  }
  if (*(int *)(param_1 + 4) == 7) {
    (**(code **)(*(int *)this + 0x94))(*(undefined4 *)(param_1 + 8));
  }
  return;
}




/* from: ai_zevs_pjl.cpp
   addr: 004591D0 */

int __thiscall
pjlPJL<struct_pjlZEVS_SFX>::GetCDTType(pjlPJL<struct_pjlZEVS_SFX> *this,cdtINFO *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar2 = *(int *)(iVar1 + 0x13c), iVar2 == 0)) {
    return 1;
  }
  if ((*(byte *)(iVar2 + 0xb8) & 1) != 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x14) == 0x504c5952) {
    return 2;
  }
  if (*(int *)(iVar2 + 0x14) == 0x244e5043) {
    return (*(int *)(iVar2 + 0x94) != 0) + 3;
  }
  return (-(uint)((*(byte *)(iVar1 + 4) & 0x48) != 0) & 0xfffffffc) + 5;
}

