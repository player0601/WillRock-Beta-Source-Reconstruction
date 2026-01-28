
/* from: sfx_trading_altar.cpp
   addr: 00479B00 */

int __fastcall wrsfxTradingAltarInit(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  txmTEXTURE *ptVar4;
  int iVar5;
  char local_40 [64];
  
  iVar3 = entRegisterClass(s_sfx_trading_altar,0x24534658,0x50,wrsfxTRADING_ALTAR::Create,
                           (char *)0x0,1);
  if (iVar3 != 0) {
    iVar3 = 0;
    while( true ) {
      iVar1 = iVar3 + 1;
      sprintf(local_40,s_sfx_trading_altar_part__d,iVar1);
      ptVar4 = txmMANAGER::Add(txmManager,local_40,0x40003,1);
      (&wrsfxTRADING_ALTAR::arrayTex)[iVar3 * 4] = (wrsfxTRADING_ALTAR_TEX *)ptVar4;
      if (ptVar4 == (txmTEXTURE *)0x0) break;
      sprintf(local_40,s_sfx_trading_altar_trail__d,iVar1);
      ptVar4 = txmMANAGER::Add(txmManager,local_40,0x40003,1);
      (&DAT_0060ea94)[iVar3 * 4] = ptVar4;
      if (ptVar4 == (txmTEXTURE *)0x0) {
        return 0;
      }
      if (iVar3 == 0) {
        iVar5 = 0;
        do {
          cVar2 = s_GLOW_SPRITE[iVar5];
          local_40[iVar5] = cVar2;
          iVar5 = iVar5 + 1;
        } while (cVar2 != '\0');
      }
      else {
        sprintf(local_40,s_GLOW_SPRITE_d,iVar3);
      }
      ptVar4 = txmMANAGER::Add(txmManager,local_40,0x40000,1);
      (&DAT_0060ea98)[iVar3 * 4] = ptVar4;
      if (ptVar4 == (txmTEXTURE *)0x0) {
        return 0;
      }
      sprintf(local_40,s_T_A_d,iVar1);
      ptVar4 = txmMANAGER::Add(txmManager,local_40,0x40000,1);
      (&DAT_0060ea90)[iVar3 * 4] = ptVar4;
      if (ptVar4 == (txmTEXTURE *)0x0) {
        return 0;
      }
      iVar3 = iVar1;
      if (2 < iVar1) {
        return 1;
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_trading_altar.cpp
   addr: 00479C40 */

wrsfxTRALTAR_PLAYER_GLOW * __thiscall
wrsfxTRALTAR_PLAYER_GLOW::wrsfxTRALTAR_PLAYER_GLOW
          (wrsfxTRALTAR_PLAYER_GLOW *this,float param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,50.0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,1.8666667,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.9,50.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,4.0333333,50.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,3,4.366667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,50.0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.75,0.25);
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
    m3dSPL::AllocKpList(pmVar4,2);
  }
  fVar2 = param_1 * ___real_00000000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,fVar2);
  fVar3 = param_1 * ___real_40400000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,fVar3);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar3,0.0,(m3dSPL_LINEAR1D *)pmVar4,1.0);
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
  partEMITTER_PHYS::SetTexture
            ((partEMITTER_PHYS *)this,(txmTEXTURE *)(&wrsfxTRADING_ALTAR::arrayTex)[param_2 * 4]);
  *(float *)(this + 0xb4) = param_1;
  *(float *)(this + 0xb8) = fVar2;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1000000;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,0.16,1.0,0.16);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_trading_altar.cpp
   addr: 00479E70 */

wrsfxTRALTAR_TRAIL_EMITTER * __thiscall
wrsfxTRALTAR_TRAIL_EMITTER::wrsfxTRALTAR_TRAIL_EMITTER
          (wrsfxTRALTAR_TRAIL_EMITTER *this,float param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,90.0,0.4);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,1.8333334,90.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,2.0,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,90.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.35,0.05);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_3e800000;
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,(txmTEXTURE *)(&DAT_0060ea94)[param_2 * 4]);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,150.0);
  fVar2 = param_1 * ___real_3dcccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar2;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3dcccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x200409;
  *(uint *)(this + 4) = uVar1 | 0x200459;
  return this;
}




/* from: sfx_trading_altar.cpp
   addr: 0047A070 */

int __thiscall wrsfxTRADING_ALTAR::ProcessINIT(wrsfxTRADING_ALTAR *this,void *param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  wrsfxTRALTAR_PLAYER_GLOW *this_00;
  objOBJ *poVar4;
  wrsfxTRALTAR_TRAIL_EMITTER *this_01;
  int iVar5;
  uint uVar6;
  wrsfxTRADING_ALTAR *pwVar7;
  char *pcVar8;
  m3dV local_2c [12];
  char local_20 [32];
  
  iVar3 = dynDYNAMIC::ProcessINIT((dynDYNAMIC *)this,param_1);
  if (iVar3 == 0) {
    return 0;
  }
  fVar2 = *(float *)((int)param_1 + 4);
  animINST::Scale(*(animINST **)(this + 0xbc),fVar2,fVar2,fVar2,0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  if (*(int *)((int)param_1 + 8) != 0) {
    objOBJ::ReplaceTex(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),DAT_0060ea90,
                       (&DAT_0060ea90)[*(int *)((int)param_1 + 8) * 4]);
    objOBJ::ReplaceTex(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),DAT_0060ea98,
                       (&DAT_0060ea98)[*(int *)((int)param_1 + 8) * 4]);
  }
  this_00 = (wrsfxTRALTAR_PLAYER_GLOW *)operator_new(0x2c0);
  if (this_00 == (wrsfxTRALTAR_PLAYER_GLOW *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = wrsfxTRALTAR_PLAYER_GLOW::wrsfxTRALTAR_PLAYER_GLOW
                      (this_00,*(float *)((int)param_1 + 4),*(int *)((int)param_1 + 8));
  }
  *(int *)(this + 0x177) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_source_glow);
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  objOBJ::SetStateProcYes(poVar4,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  iVar3 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x177),poVar4,-1,(m3dV *)0x0);
  if (iVar3 != 0) {
    partEMITTER_PHYS::SetScaleCS(*(partEMITTER_PHYS **)(this + 0x177),(m3dMATR *)(poVar4 + 0x3c));
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x177));
    iVar3 = 0;
    pwVar7 = this + 0x17b;
    while( true ) {
      this_01 = (wrsfxTRALTAR_TRAIL_EMITTER *)operator_new(0x2c0);
      if (this_01 == (wrsfxTRALTAR_TRAIL_EMITTER *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = wrsfxTRALTAR_TRAIL_EMITTER::wrsfxTRALTAR_TRAIL_EMITTER
                          (this_01,*(float *)((int)param_1 + 4),*(int *)((int)param_1 + 8));
      }
      *(int *)pwVar7 = iVar5;
      if (iVar5 == 0) break;
      iVar3 = iVar3 + 1;
      sprintf(local_20,s_plane_02d,iVar3);
      uVar6 = 0xffffffff;
      pcVar8 = local_20;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),local_20,~uVar6 - 1);
      *(objOBJ **)(pwVar7 + 4) = poVar4;
      if (poVar4 == (objOBJ *)0x0) {
        return 0;
      }
      objOBJ::GetOrigin(poVar4,local_2c);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)pwVar7,local_2c,(m3dV *)0x0,(m3dV *)0x0);
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)pwVar7);
      pwVar7 = pwVar7 + 8;
      if (2 < iVar3) {
        *(undefined4 *)(this + 0x193) = 0x40a00000;
        gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
        return 1;
      }
    }
  }
  return 0;
}




/* from: sfx_trading_altar.cpp
   addr: 0047A2B0 */

void __thiscall wrsfxTRADING_ALTAR::ProcessTERM(wrsfxTRADING_ALTAR *this)

{
  wrsfxTRADING_ALTAR *pwVar1;
  int iVar2;
  
  pwVar1 = this + 0x17b;
  iVar2 = 3;
  do {
    if (*(undefined4 **)pwVar1 != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)pwVar1)(1);
      *(int *)pwVar1 = 0;
    }
    pwVar1 = pwVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(undefined4 **)(this + 0x177) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x177))(1);
    *(undefined4 *)(this + 0x177) = 0;
  }
  return;
}




/* from: sfx_trading_altar.cpp
   addr: 0047A300 */

void __thiscall wrsfxTRADING_ALTAR::ProcessFRAME(wrsfxTRADING_ALTAR *this)

{
  int iVar1;
  float extraout_EDX;
  wrsfxTRADING_ALTAR *pwVar2;
  m3dV local_c [12];
  
  dynDYNAMIC::ProcessFRAME((dynDYNAMIC *)this);
  iVar1 = m3dUpdateTimeField((float *)(this + 0x193),extraout_EDX);
  if (iVar1 != 0) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  }
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  pwVar2 = this + 0x17b;
  iVar1 = 3;
  do {
    objOBJ::GetOrigin(*(objOBJ **)(pwVar2 + 4),local_c);
    partEMITTER_PHYS::SetPosDirSpeed(*(partEMITTER_PHYS **)pwVar2,local_c,(m3dV *)0x0,(m3dV *)0x0);
    pwVar2 = pwVar2 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_trading_altar.cpp
   addr: 0047A370 */

entENTITY * __fastcall wrsfxTRADING_ALTAR::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  entENTITY *peVar2;
  int iVar3;
  
  this = (entENTITY *)operator_new(0x197);
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
    *(undefined ***)this = &dynDYNAMIC::_vftable_;
    *(undefined4 *)(this + 0x177) = 0;
    peVar2 = this + 0x17b;
    iVar3 = 3;
    do {
      *(undefined4 *)peVar2 = 0;
      *(undefined4 *)(peVar2 + 4) = 0;
      peVar2 = peVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)(this + 0x193) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_trading_altar.cpp
   addr: 0047A420
   addr: 0047A420 */

void * __thiscall
wrsfxTRADING_ALTAR::_vector_deleting_destructor_(wrsfxTRADING_ALTAR *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

