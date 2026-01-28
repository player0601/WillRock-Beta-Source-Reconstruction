
/* from: sob_niche.cpp
   addr: 0047DB30 */

int __fastcall wrsobInitNiche(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sob_niche,0x2444594e,0x28,wrsobNICHE::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_nch_rigid,0x52474442,0x32,nchRIGID::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_0060ebb4 = txmMANAGER::Add(txmManager,s_stones_oblom,0x40000,1);
  if (DAT_0060ebb4 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = wrsfxNicheInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_0060ebc8);
  if (iVar1 == 0) {
    apMsg(s_Cannot_link_sound_data);
    return 0;
  }
  return 1;
}




/* from: sob_niche.cpp
   addr: 0047DBD0 */

entENTITY * __fastcall nchRIGID::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0xf1b);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x1a3) = 0;
    *(undefined4 *)(this + 0x387) = 0;
    *(undefined4 *)(this + 0x663) = 3;
    *(undefined ***)(this + 0x65f) = &m3dSPHERE::_vftable_;
    *(undefined4 *)(this + 0x67b) = 1;
    *(undefined ***)(this + 0x677) = &m3dBOX::_vftable_;
    *(undefined4 *)(this + 0xeff) = 0;
    *(undefined4 *)(this + 0xf17) = 1;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sob_niche.cpp
   addr: 0047DC50 */

int __thiscall
wrsobNICHE::ProcessMsg(wrsobNICHE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 < 0x40d) {
    if (param_1 != 0x40c) {
      if (param_1 == 1) {
        ProcessINIT(this);
        return 0;
      }
      if (param_1 != 0x3f8) {
        return 0;
      }
      iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_ACTIVATE);
      if (iVar1 == 0) {
        iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_UNLOCK);
        if (iVar1 == 0) {
          return 0;
        }
        StartExplos(this,0);
        return 0;
      }
      goto LAB_0047dcf4;
    }
    iVar1 = *(int *)((int)param_2 + 4);
    if (iVar1 == -100) {
      if (*(int *)(*(int *)((int)param_2 + 8) + 4) == 0) {
        return 0;
      }
      StartExplos(this,1);
      return 0;
    }
  }
  else {
    if (param_1 != 0x4c5) {
      return 0;
    }
    if (((byte)this[0x88] & 4) == 0) {
      return 0;
    }
    iVar1 = *(int *)(this + 0x153);
  }
  if (iVar1 != 0) {
    return 0;
  }
LAB_0047dcf4:
  StartExplos(this,0);
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_niche.cpp
   addr: 0047DD10 */

void __thiscall wrsobNICHE::ProcessINIT(wrsobNICHE *this)

{
  wrsobNICHE *pwVar1;
  int iVar2;
  txmTEXTURE *ptVar3;
  uint local_50;
  m3dV local_4c [4];
  float local_48;
  char local_40 [64];
  
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
  *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 4;
  animINST::GetDir(*(animINST **)(this + 0xbc),local_4c);
  local_50 = (uint)(ABS(local_48) < ___real_3e4ccccd);
  pwVar1 = this + 0x157;
  if ((float)local_50 == ___real_00000000) {
    *(float *)pwVar1 = 1.2;
  }
  else {
    *(float *)pwVar1 = 0.05;
  }
  animINST::GetFloat(*(animINST **)(this + 0xbc),s_NICHE,s_distFromEdge,(float *)pwVar1);
  animINST::GetInt(*(animINST **)(this + 0xbc),s_NICHE,s_nPiece,(int *)(this + 0x15f));
  iVar2 = animINST::GetStr(*(animINST **)(this + 0xbc),s_NICHE,s_tex,local_40,0x40);
  if (iVar2 != 0) {
    ptVar3 = txmMANAGER::Add(txmManager,local_40,0x100,1);
    *(txmTEXTURE **)(this + 0x15b) = ptVar3;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_niche.cpp
   addr: 0047DE20 */

void __thiscall wrsobNICHE::ProcessMP_GET_SYNC_DATA(wrsobNICHE *this,void *param_1)

{
  undefined *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_0060ebc0 & 1) == 0) {
      DAT_0060ebc0 = DAT_0060ebc0 | 1;
      DAT_0060ebb8 = 0;
      DAT_0060ebb9 = 0x40;
      DAT_0060ebbc = 0;
      _DAT_0060ebba = 8;
      atexit((_func_4879 *)&__E25);
    }
    puVar1 = &DAT_0060ebb8;
    *(undefined1 **)param_1 = &DAT_0060ebb8;
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(this + 0x14f);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: sob_niche.cpp
   addr: 0047DE90
   addr: 0047DE90
   addr: 0047DE90
   addr: 0047DE90 */

void __thiscall
domACT_DOMAIN::ProcessMP_WRITE_SYNC_DATA(domACT_DOMAIN *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  gsMSG_MP_SAVELOAD *pgVar2;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  pgVar2 = param_1;
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  iVar1 = *(int *)param_1;
  local_6 = 0xffffffff;
  local_10 = 0;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
  param_1 = *(gsMSG_MP_SAVELOAD **)(iVar1 + 4);
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(&param_1,4,4);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffffe4);
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar2 + 4));
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)pgVar2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_niche.cpp
   addr: 0047DF10 */

void __thiscall wrsobNICHE::ProcessMP_READ_SYNC_DATA(wrsobNICHE *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined *puVar2;
  short local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  puVar2 = *(undefined **)param_1;
  local_10 = 0;
  if (puVar2 == (undefined *)0x0) {
    if ((DAT_0060ebc0 & 1) == 0) {
      DAT_0060ebc0 = DAT_0060ebc0 | 1;
      DAT_0060ebbc = 0;
      _DAT_0060ebb8 = 0x84000;
      atexit((_func_4879 *)&__E25);
    }
    puVar2 = &DAT_0060ebb8;
    *(undefined **)param_1 = &DAT_0060ebb8;
    _DAT_0060ebb8 = 0x84000;
    DAT_0060ebbc = 0;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  while ((iVar1 != 0 && (local_10 != 1))) {
    if (local_10 == 0xf0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2 + 4,4,4);
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  }
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* WARNING: Function: chkstk replaced with injection: alloca_probe */
/* from: sob_niche.cpp
   addr: 0047E000 */

void __thiscall wrsobNICHE::StartExplos(wrsobNICHE *this,int param_1)

{
  shtSPLIT *this_00;
  int iVar1;
  msgDATA local_5df4;
  undefined1 local_5df3;
  undefined2 local_5df2;
  undefined4 local_5df0;
  m3dV local_5dec [12];
  undefined **local_5de0 [224];
  undefined **local_5a60;
  undefined4 local_5a5c;
  undefined **local_5a40 [5418];
  shtSPLIT local_598 [1264];
  undefined **local_a8 [39];
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  local_4 = 0x47e00a;
  local_5de0[0] = &rgdRIGID_START::_vftable_;
  local_5a5c = 1;
  local_5a60 = &m3dBOX::_vftable_;
  rgdSHATTER::rgdSHATTER((rgdSHATTER *)local_5a40);
  m3dBOX::m3dBOX((m3dBOX *)local_a8);
  local_5a40[0] = &nchSHATTER::_vftable_;
  local_c = 0;
  local_5de0[0] = &nchSHATTER_RIGID_START::_vftable_;
  if (((((byte)this[0x88] & 4) == 0) || (*(int *)(this + 0x30) < 1)) &&
     (*(int *)(this + 0x14f) == 0)) {
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
    local_4 = *(undefined4 *)(this + 0x157);
    *(undefined4 *)(this + 0x14f) = 1;
    local_8 = param_1;
    nchSHATTER_RIGID_START::StartExplos((nchSHATTER_RIGID_START *)local_5de0,(entENTITY *)this);
    if (param_1 == 0) {
      animINST::GetPos(*(animINST **)(this + 0xbc),local_5dec);
      gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060ebc8,local_5dec);
    }
    if (((byte)this[0x88] & 4) != 0) {
      local_5df4 = (msgDATA)0x0;
      local_5df3 = 0x40;
      local_5df0 = 0;
      local_5df2 = 8;
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_5df4,0x20000,0xffffffff,0xfffffffd)
      ;
    }
    local_a8[0] = &m3dVOL::_vftable_;
    this_00 = local_598;
    iVar1 = 100;
    do {
      this_00 = this_00 + -0xc0;
      shtSPLIT::~shtSPLIT(this_00);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  local_a8[0] = &m3dVOL::_vftable_;
  shtSHATTER::~shtSHATTER((shtSHATTER *)local_5a40);
  return;
}




/* from: sob_niche.cpp
   addr: 0047E180 */

void __thiscall rgdSHATTER::rgdSHATTER(rgdSHATTER *this)

{
  int iVar1;
  rgdSHATTER *prVar2;
  
  cgmWED_SYS::cgmWED_SYS((cgmWED_SYS *)(this + 4));
  *(undefined ***)(this + 4) = &cgmWED_3D::_vftable_;
  prVar2 = this + 0x9b4;
  iVar1 = 100;
  do {
    *(undefined4 *)(prVar2 + -8) = 0;
    *(undefined4 *)(prVar2 + -4) = 0;
    *(undefined4 *)prVar2 = 0xffffffff;
    *(undefined4 *)(prVar2 + 4) = 0;
    *(undefined4 *)(prVar2 + 8) = 0xffffffff;
    *(undefined4 *)(prVar2 + 0xc) = 0;
    *(undefined4 *)(prVar2 + 0x10) = 0;
    *(undefined4 *)(prVar2 + 0x14) = 0;
    *(undefined4 *)(prVar2 + 0x18) = 0;
    *(undefined4 *)(prVar2 + 0x1c) = 0xffffffff;
    *(undefined4 *)(prVar2 + 0x20) = 0;
    *(undefined4 *)(prVar2 + 0x24) = 0xffffffff;
    *(undefined4 *)(prVar2 + 0x28) = 0;
    *(undefined4 *)(prVar2 + 0x2c) = 0;
    _vector_constructor_iterator_(prVar2 + 0x30,0x1c,3,dsDYN_ARRAY::dsDYN_ARRAY);
    *(undefined4 *)(prVar2 + 0x84) = 0;
    *(undefined4 *)(prVar2 + 0x88) = 0;
    *(undefined4 *)(prVar2 + 0x8c) = 0xffffffff;
    *(undefined4 *)(prVar2 + 0x90) = 0;
    *(undefined4 *)(prVar2 + 0x94) = 0xffffffff;
    *(undefined4 *)(prVar2 + 0x98) = 0;
    *(undefined4 *)(prVar2 + 0x9c) = 0;
    prVar2 = prVar2 + 0xc0;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined ***)this = &_vftable_;
  return;
}




/* from: sob_niche.cpp
   addr: 0047E230 */

void __thiscall shtSHATTER::~shtSHATTER(shtSHATTER *this)

{
  shtSHATTER *psVar1;
  int iVar2;
  
  iVar2 = 100;
  psVar1 = this + 0x54e4;
  do {
    dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(psVar1 + -0x6c));
    _vector_destructor_iterator_(psVar1 + -0xc0,0x1c,3,dsDYN_ARRAY::~dsDYN_ARRAY);
    dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(psVar1 + -0xdc));
    dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(psVar1 + -0xf8));
    iVar2 = iVar2 + -1;
    psVar1 = psVar1 + -0xc0;
  } while (iVar2 != 0);
  *(undefined ***)(this + 4) = &cgmWED_SYS::_vftable_;
  return;
}




/* from: sob_niche.cpp
   addr: 0047E280 */

void __thiscall shtSPLIT::~shtSPLIT(shtSPLIT *this)

{
  shtSPLIT *this_00;
  int iVar1;
  
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 0x90));
  this_00 = this + 0x90;
  iVar1 = 3;
  do {
    this_00 = this_00 + -0x1c;
    dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)this_00);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 0x20));
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 4));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_niche.cpp
   addr: 0047E2C0 */

entENTITY * __thiscall nchSHATTER_RIGID_START::CreatePiece(nchSHATTER_RIGID_START *this,int param_1)

{
  m3dV *pmVar1;
  objOBJ *this_00;
  animINST *paVar2;
  entENTITY *peVar3;
  float extraout_ECX;
  int iVar4;
  float extraout_EDX;
  float extraout_EDX_00;
  nchSHATTER_RIGID_START *pnVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 extraout_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 local_d0 [4];
  float fStack_cc;
  float fStack_c4;
  float fStack_c0;
  undefined1 auStack_bc [4];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined2 local_b6;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c [31];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_b0 = (float)_m3dVZero;
  local_a4 = (float)_m3dVZero;
  local_ac = (float)DAT_00963740;
  local_a0 = (float)DAT_00963740;
  this_00 = *(objOBJ **)(this + param_1 * 8 + 0x3e4);
  local_b8 = 0;
  local_b7 = 0x40;
  local_b4 = 1.12104e-44;
  local_a8 = (float)DAT_00963744;
  local_9c[0] = DAT_00963744;
  local_20 = 0;
  local_1c = 0x3f19999a;
  local_18 = 0x3f4ccccd;
  local_14 = 0x41200000;
  local_10 = 0x3e99999a;
  local_c = 0xbf800000;
  local_8 = 0xbf800000;
  local_4 = 0xbf800000;
  local_b6 = 0xb8;
  if (*(int *)(this + param_1 * 4 + 0x1b0) != 0) {
    *(uint *)(*(int *)(this_00 + 0x28) + 0x66) =
         *(uint *)(*(int *)(this_00 + 0x28) + 0x66) & 0xffffffef;
    paVar2 = scnSCENE::CreateInst(gsScenePtr,this_00,(animCREATE_DATA *)0x0);
    peVar3 = entCreate(s_dynamic,paVar2,(void *)0x0,0);
    scnSCENE::SetStateYesInst(gsScenePtr,*(animINST **)(peVar3 + 0xbc),8);
    *(uint *)(peVar3 + 0xb8) = *(uint *)(peVar3 + 0xb8) | 8;
    *(uint *)(paVar2 + 0xc) = *(uint *)(paVar2 + 0xc) & 0xfffff7fe;
    return peVar3;
  }
  if (*(int *)(this + 0x5dd8) != 0) {
    if (this_00 != (objOBJ *)0x0) {
      objOBJ::~objOBJ(this_00);
      operator_delete(this_00);
    }
    return (entENTITY *)0x0;
  }
  (**(code **)(*(int *)(this_00 + 0xc0) + 0x24))(local_d0);
  fStack_e0 = fStack_d4 - *(float *)(this + 4);
  pmVar1 = (m3dV *)(this + 0x10);
  fStack_dc = 0.0;
  fStack_d8 = fStack_cc - *(float *)(this + 0xc);
  fVar12 = *(float *)(this + 0x14) * ___real_00000000 +
           fStack_d8 * *(float *)(this + 0x18) + fStack_e0 * *(float *)pmVar1;
  fStack_c4 = fVar12 * *(float *)(this + 0x14);
  fStack_c0 = fVar12 * *(float *)(this + 0x18);
  fVar12 = fStack_e0 - fVar12 * *(float *)pmVar1;
  fVar12 = fVar12 * fVar12 +
           -fStack_c4 * -fStack_c4 + (fStack_d8 - fStack_c0) * (fStack_d8 - fStack_c0);
  if (m3dSimdType == 0) {
    fVar12 = fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar11 = auVar10._0_4_;
    fVar12 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
             (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar12 * fVar11 * fVar11) * fVar12;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)fVar12;
    uVar8 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    uVar8 = PackedFloatingMUL(uVar8,uVar7);
    fVar12 = (float)uVar8;
    FastExitMediaState();
  }
  else {
    fVar12 = SQRT(fVar12);
  }
  fVar11 = m3dRandRange(extraout_ECX,extraout_EDX);
  local_ac = (___real_3f800000 - fVar12 * ___real_3e0f5c29) * fVar11 * ___real_40800000;
  local_b4 = local_ac * *(float *)pmVar1;
  local_b0 = local_ac * *(float *)(this + 0x14);
  local_ac = local_ac * *(float *)(this + 0x18);
  m3dMakeVTangRandom(pmVar1,(m3dV *)&fStack_e0);
  fVar12 = m3dRandom();
  fVar12 = fVar12 * ___real_3fc00000;
  fStack_e0 = fStack_e0 * fVar12;
  fStack_dc = fStack_dc * fVar12;
  fStack_d8 = fStack_d8 * fVar12;
  local_b4 = local_b4 + fStack_e0;
  local_b0 = local_b0 + fStack_dc;
  local_ac = local_ac + fStack_d8;
  pnVar5 = this + 0x5d5c;
  puVar6 = local_9c;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *(undefined4 *)pnVar5;
    pnVar5 = pnVar5 + 4;
    puVar6 = puVar6 + 1;
  }
  local_a0 = m3dRandRange(0.0,extraout_EDX_00);
  local_a8 = _m3dVUnitY * local_a0;
  local_10 = 0x41700000;
  local_8 = 0x40a00000;
  local_a4 = DAT_005f9994 * local_a0;
  local_a0 = DAT_005f9998 * local_a0;
  paVar2 = scnSCENE::CreateInst(gsScenePtr,this_00,(animCREATE_DATA *)0x0);
  peVar3 = entCreate(s_nch_rigid,paVar2,auStack_bc,0);
  *(uint *)(*(int *)(peVar3 + 0xbc) + 4) = *(uint *)(*(int *)(peVar3 + 0xbc) + 4) | 0x10;
  return peVar3;
}




/* from: sob_niche.cpp
   addr: 0047E670 */

void __thiscall nchSHATTER_RIGID_START::StartExplos(nchSHATTER_RIGID_START *this,entENTITY *param_1)

{
  objOBJ *poVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  objOBJ *unaff_EBP;
  nchSHATTER_RIGID_START *pnVar3;
  nchSHATTER_RIGID_START *pnVar4;
  objOBJ *local_ac;
  m3dMATR *local_a8;
  nchSHATTER_RIGID_START *pnStack_a4;
  animCREATE_DATA aaStack_a0 [8];
  animCREATE_DATA local_98 [10];
  m3dMATR amStack_8e [138];
  int iStack_4;
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (*(int *)(param_1 + 0xbc) != 0) {
    poVar1 = objFind(*(objOBJ **)(*(int *)(param_1 + 0xbc) + 0x10),objIsNFace,(void *)0x0);
    if (poVar1 != (objOBJ *)0x0) {
      local_ac = poVar1;
      animINST::Validate(*(animINST **)(param_1 + 0xbc),0x206);
      animINST::GetDir(*(animINST **)(param_1 + 0xbc),(m3dV *)(this + 0x10));
      animINST::GetPos(*(animINST **)(param_1 + 0xbc),(m3dV *)(this + 4));
      local_a8 = (m3dMATR *)(poVar1 + 0x3c);
      m3dMATR::Invert(local_a8,(m3dMATR *)(this + 0x340));
      (**(code **)(*(int *)(this + 0x380) + 0x14))
                (*(undefined4 *)(*(int *)(local_ac + 0x28) + 0x40),*(undefined4 *)(local_ac + 0x14))
      ;
      DetermineCollisPlaneSet(this,param_1);
      *(undefined4 *)(this + 0x5cac) = *(undefined4 *)(this + 0x10);
      *(undefined4 *)(this + 0x5cb0) = *(undefined4 *)(this + 0x14);
      *(undefined4 *)(this + 0x5cb4) = *(undefined4 *)(this + 0x18);
      pnVar3 = this + 0x5cb8;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pnVar3 = *unaff_EBX;
        unaff_EBX = unaff_EBX + 1;
        pnVar3 = pnVar3 + 4;
      }
      pnVar3 = this + 0x340;
      pnVar4 = this + 0x5cf8;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pnVar4 = *(undefined4 *)pnVar3;
        pnVar3 = pnVar3 + 4;
        pnVar4 = pnVar4 + 4;
      }
      *(undefined4 *)(this + 0x5d3c) = *(undefined4 *)(this + 900);
      *(undefined4 *)(this + 0x5d40) = *(undefined4 *)(this + 0x388);
      *(undefined4 *)(this + 0x5d44) = *(undefined4 *)(this + 0x38c);
      *(undefined4 *)(this + 0x5d48) = *(undefined4 *)(this + 0x390);
      *(undefined4 *)(this + 0x5d4c) = *(undefined4 *)(this + 0x394);
      *(undefined4 *)(this + 0x5d50) = *(undefined4 *)(this + 0x398);
      *(undefined4 *)(this + 0x5d54) = *(undefined4 *)(this + 0x39c);
      iVar2 = *(int *)(iStack_4 + 0x15b);
      if (*(int *)(iStack_4 + 0x15b) == 0) {
        iVar2 = DAT_0060ebb4;
      }
      *(int *)(this + 0x5d58) = iVar2;
      shtSHATTER::Start((shtSHATTER *)(this + 0x3a0),unaff_EBP,*(int *)(iStack_4 + 0x15f));
      DetermineEdgeShards(this);
      if (*(int *)(this + 0x5dd8) == 0) {
        local_a8 = *(m3dMATR **)(this + 0x5dd4);
        pnStack_a4 = this + 0x5d5c;
        local_ac = (objOBJ *)0x3e4ccccd;
        animINST::GetMatrL2W(*(animINST **)(iStack_4 + 0xbc),amStack_8e);
        entCreate(gsScenePtr,s_sfx_niche_explode,s_sfx_niche_explode,aaStack_a0,&local_ac,0);
      }
      iVar2 = 0;
      if (0 < *(int *)(this + 0xd44)) {
        do {
          CreatePiece(this,iVar2);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(this + 0xd44));
      }
      *(uint *)(*(int *)(iStack_4 + 0xbc) + 4) = *(uint *)(*(int *)(iStack_4 + 0xbc) + 4) | 0x11;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_niche.cpp
   addr: 0047E890 */

void __thiscall nchSHATTER_RIGID_START::DetermineEdgeShards(nchSHATTER_RIGID_START *this)

{
  objOBJ *this_00;
  float fVar1;
  float fVar2;
  m3dV *pmVar3;
  nchSHATTER_RIGID_START *pnVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  uint local_30;
  nchSHATTER_RIGID_START *local_2c;
  undefined **local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  iVar5 = 0;
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0x1ac) = 0;
  fVar1 = (*(float *)(this + 0x394) - *(float *)(this + 0x388)) * ___real_3f000000 +
          *(float *)(this + 0x388);
  fVar2 = (*(float *)(this + 0x398) - *(float *)(this + 0x38c)) * ___real_3f000000 +
          *(float *)(this + 0x38c);
  if (0 < *(int *)(this + 0xd44)) {
    local_2c = this + 0x3e4;
    pnVar4 = this + 0x1b0;
    do {
      this_00 = *(objOBJ **)local_2c;
      objOBJ::TransformPoints(this_00,(m3dMATR *)(this + 0x340),(m3dV *)0x0);
      iVar6 = *(int *)(this_00 + 0x14);
      fVar7 = 0.01;
      pmVar3 = objOBJ::GetTransformedVertList();
      m3dBOX::Calc((m3dBOX *)&local_20,pmVar3,iVar6,fVar7);
      *(undefined4 *)pnVar4 = 0;
      local_30 = (uint)(ABS(local_c - *(float *)(this + 0x394)) < *(float *)(this + 0x5ddc));
      if ((((float)local_30 != ___real_00000000) && (fVar1 + ___real_3f333333 < local_18)) ||
         ((local_30 = (uint)(ABS(local_8 - *(float *)(this + 0x398)) < *(float *)(this + 0x5ddc)),
          (float)local_30 != ___real_00000000 && (fVar2 + ___real_3f333333 < local_14)))) {
        *(int *)(this + *(int *)(this + 0x1ac) * 4 + 0x1c) = iVar5;
LAB_0047eaa4:
        *(int *)(this + 0x1ac) = *(int *)(this + 0x1ac) + 1;
        *(undefined4 *)pnVar4 = 1;
      }
      else {
        local_30 = (uint)(ABS(local_18 - *(float *)(this + 0x388)) < *(float *)(this + 0x5ddc));
        if ((((float)local_30 != ___real_00000000) && (local_c < fVar1 - ___real_3f333333)) ||
           ((local_30 = (uint)(ABS(local_14 - *(float *)(this + 0x38c)) < *(float *)(this + 0x5ddc))
            , (float)local_30 != ___real_00000000 && (local_8 < fVar2 - ___real_3f333333)))) {
          *(int *)(this + *(int *)(this + 0x1ac) * 4 + 0x1c) = iVar5;
          goto LAB_0047eaa4;
        }
      }
      iVar5 = iVar5 + 1;
      pnVar4 = pnVar4 + 4;
      local_2c = local_2c + 8;
    } while (iVar5 < *(int *)(this + 0xd44));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_niche.cpp
   addr: 0047EAE0 */

void __thiscall
nchSHATTER_RIGID_START::DetermineCollisPlaneSet(nchSHATTER_RIGID_START *this,entENTITY *param_1)

{
  int iVar1;
  float local_5c;
  float local_58;
  float local_54;
  undefined **local_50;
  undefined4 local_4c;
  undefined4 local_48;
  m3dV local_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  m3dV local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = _m3dVZero;
  local_c = DAT_00963740;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_8 = DAT_00963744;
  local_4 = 0;
  local_48 = 0;
  local_50 = &cdtREFINE::_vftable_;
  local_4c = 2;
  animINST::GetPos(*(animINST **)(param_1 + 0xbc),local_44);
  animINST::GetDir(*(animINST **)(param_1 + 0xbc),(m3dV *)&local_5c);
  iVar1 = scnSCENE::ShootRay(gsScenePtr,local_44,(m3dV *)&local_5c,10.0,0,(cdtREFINE *)&local_50,
                             (cdtINFO *)&local_20);
  if (iVar1 != 0) {
    local_38 = local_10;
    local_34 = local_c;
    local_30 = local_8;
    scnSCENE::GetCDTFace(gsScenePtr,(cdtINFO *)&local_20,(m3dPOLY *)0x0,local_2c);
    rgdPLANE_SET::AddPlane((rgdPLANE_SET *)(this + 0x5d5c),(m3dPLANE *)&local_38);
  }
  animINST::GetDir(*(animINST **)(param_1 + 0xbc),(m3dV *)&local_5c);
  local_5c = local_5c - _m3dVUnitY;
  local_58 = local_58 - DAT_005f9994;
  local_54 = local_54 - DAT_005f9998;
  m3dNormalize((m3dV *)&local_5c);
  iVar1 = scnSCENE::ShootRay(gsScenePtr,local_44,(m3dV *)&local_5c,10.0,0,(cdtREFINE *)&local_50,
                             (cdtINFO *)&local_20);
  if (iVar1 != 0) {
    local_38 = local_10;
    local_34 = local_c;
    local_30 = local_8;
    scnSCENE::GetCDTFace(gsScenePtr,(cdtINFO *)&local_20,(m3dPOLY *)0x0,local_2c);
    rgdPLANE_SET::AddPlane((rgdPLANE_SET *)(this + 0x5d5c),(m3dPLANE *)&local_38);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_niche.cpp
   addr: 0047EC80 */

void __thiscall nchSHATTER::SelectPlane(nchSHATTER *this)

{
  m3dV *pmVar1;
  float fVar2;
  int iVar3;
  
  shtSHATTER::SelectPlane((shtSHATTER *)this);
  pmVar1 = (m3dV *)(this + 0x58fc);
  fVar2 = *(float *)(this + 0x5910) * *(float *)(this + 0x5900) +
          *(float *)(this + 0x58fc) * *(float *)(this + 0x590c) +
          *(float *)(this + 0x5914) * *(float *)(this + 0x5904);
  *(float *)pmVar1 = *(float *)pmVar1 - fVar2 * *(float *)(this + 0x590c);
  *(float *)(this + 0x5900) = *(float *)(this + 0x5900) - fVar2 * *(float *)(this + 0x5910);
  *(float *)(this + 0x5904) = *(float *)(this + 0x5904) - fVar2 * *(float *)(this + 0x5914);
  iVar3 = _m3dNormalize(pmVar1);
  if (iVar3 == 0) {
    *(undefined4 *)pmVar1 = _m3dVUnitY;
    *(undefined4 *)(this + 0x5900) = DAT_005f9994;
    *(undefined4 *)(this + 0x5904) = DAT_005f9998;
  }
  return;
}




/* from: sob_niche.cpp
   addr: 0047ED50 */

void __thiscall nchRIGID::ProcessFRAME(nchRIGID *this)

{
  float extraout_EDX;
  float fVar1;
  
  rgdRIGID::ProcessFRAME((rgdRIGID *)this);
  if (((((byte)this[0x14f] & 2) != 0) &&
      (fVar1 = *(float *)(*(int *)(this + 0xbc) + 0x10), fVar1 != 0.0)) &&
     (*(int *)(this + 0xf17) != 0)) {
    *(undefined4 *)(this + 0xf17) = 0;
    fVar1 = m3dRandRange(fVar1,extraout_EDX);
    *(undefined4 *)(this + 0xe67) = *(undefined4 *)(this + 0xe6f);
    *(float *)(this + 0xe6b) = fVar1 + *(float *)(this + 0xe6f);
  }
  return;
}




/* from: sob_niche.cpp
   addr: 0047EDB0 */

entENTITY * __fastcall wrsobNICHE::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x163);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0x46;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sob_niche.cpp
   addr: 0047EE10
   addr: 0047EE10 */

void * __thiscall wrsobNICHE::_vector_deleting_destructor_(wrsobNICHE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

