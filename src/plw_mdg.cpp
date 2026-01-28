
/* from: plw_mdg.cpp
   addr: 0040EDD0 */

int __fastcall pwpMDGInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pwp_mdg,0x504d4447,0x50,pwpMEDUSA::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_mdg_pjl,0x504d4447,0x2d,pwpMEDUSA_PJL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  pwpMEDUSA::pCloudTex = txmMANAGER::Add(txmManager,s_sfx_mdg_cloud,0x40003,1);
  if (pwpMEDUSA::pCloudTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(2,(sncSOUND_DESCR_3D *)&DAT_006028e0);
  return (uint)(iVar1 != 0);
}




/* from: plw_mdg.cpp
   addr: 0040EE50 */

entENTITY * __fastcall pwpMEDUSA_PJL::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1ac);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0xbf800000;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xffffffff;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x16f) = 0xbf800000;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined ***)this = &pjlPJL<struct_pwpMDG_PJL_SFX>::_vftable_;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    uVar1 = DAT_005cf94c;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x1a8) = uVar1;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: plw_mdg.cpp
   addr: 0040EEE0 */

void __thiscall pwpMEDUSA::Anim2Sound(pwpMEDUSA *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,2);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
    return;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,1);
  if ((iVar1 == 0) && (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,1), iVar1 == 0)
     ) {
    return;
  }
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
  return;
}




/* from: plw_mdg.cpp
   addr: 0040EF40 */

void __thiscall pwpMEDUSA::UpdateSound(pwpMEDUSA *this)

{
  if ((*(uint *)(this + 0xf8) & 1) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_006028e0,0);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if ((*(uint *)(this + 0xf8) & 2) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602948,0);
  }
  pwpWEAPON::UpdateSound((pwpWEAPON *)this);
  return;
}




/* from: plw_mdg.cpp
   addr: 0040EF90 */

int __thiscall pwpMEDUSA::ProcessINIT(pwpMEDUSA *this)

{
  int iVar1;
  animCREATE_DATA local_98 [152];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  iVar1 = pwpWEAPON::ProcessINIT((pwpWEAPON *)this);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x18b) = 3;
  *(undefined4 *)(this + 399) = 3;
  *(undefined4 *)(this + 0x19b) = 0;
  *(undefined4 *)(this + 0x197) = 1;
  *(uint *)(this + 0x193) = *(uint *)(this + 0x193) | 3;
  (**(code **)(*(int *)this + 0xa0))(0x3f800000);
  *(undefined1 **)(this + 0x15b) = &DAT_42480000;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
  wpnWEAPON::SetAmmo((wpnWEAPON *)this,0.0);
  *(undefined1 **)(this + 0x157) = &DAT_42480000;
  objOBJ::AllocVertNormalList(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10));
  return 1;
}




/* from: plw_mdg.cpp
   addr: 0040F050 */

void __thiscall pwpMEDUSA::ProcessFRAME(pwpMEDUSA *this)

{
  int iVar1;
  
  pwpWEAPON::ProcessFRAME((pwpWEAPON *)this);
  if (((byte)(*(animINST **)(this + 0xbc))[4] & 1) != 0) {
    return;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,2);
  if ((iVar1 == 0) && (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,2), iVar1 == 0)
     ) {
    return;
  }
  ThrowBalloon(this);
  return;
}




/* from: plw_mdg.cpp
   addr: 0040F090 */

int __thiscall pwpMEDUSA::Shoot(pwpMEDUSA *this,entENTITY *param_1,m3dV *param_2)

{
  int iVar1;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_2c = 0;
  local_2b = 0x40;
  local_28 = 7;
  local_2a = 0x2c;
  iVar1 = wpnWEAPON::Shoot((wpnWEAPON *)this,*(entENTITY **)(this + 0x187),param_2);
  if (iVar1 == 0) {
    return 0;
  }
  wpnWEAPON::GetOrgDirTip((wpnWEAPON *)this,(m3dV *)&local_38,(m3dV *)&local_44);
  local_44 = *(float *)param_2 - local_38;
  local_40 = *(float *)(param_2 + 4) - local_34;
  local_3c = *(float *)(param_2 + 8) - local_30;
  m3dNormalize((m3dV *)&local_44);
  local_1c = *(undefined4 *)(param_2 + 8);
  local_24 = *(undefined4 *)param_2;
  local_20 = *(undefined4 *)(param_2 + 4);
  local_10 = local_30;
  local_18 = local_38;
  local_4 = local_3c;
  local_14 = local_34;
  local_c = local_44;
  local_8 = local_40;
  (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c6,&local_2c,0x20000);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mdg.cpp
   addr: 0040F180 */

void __thiscall pwpMEDUSA::ProcessSHOOT(pwpMEDUSA *this,void *param_1)

{
  msgDATA *unaff_retaddr;
  animCREATE_DATA aaStack_9c [4];
  animCREATE_DATA local_98 [14];
  m3dMATR amStack_8a [138];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (((byte)this[0x88] & 4) != 0) {
    (**(code **)(*(int *)this + 0x68))(0x3f800000);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,*(entIACTIVE_OBJ **)(this + 0x187),0x4c6,unaff_retaddr,0x90000,0xffffffff
               ,0xfffffffd);
    (**(code **)(*(int *)this + 0xa4))();
    m3dMATR::MakeLCS2WCS_VZ
              (amStack_8a,(m3dV *)(unaff_retaddr + 0x14),(m3dV *)(unaff_retaddr + 0x20));
    entCreate(gsScenePtr,s_sfx_mdg_pjl,s_,aaStack_9c,&stack0xfffffef8,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mdg.cpp
   addr: 0040F390 */

void __thiscall pwpMEDUSA::ThrowBalloon(pwpMEDUSA *this)

{
  objOBJ *poVar1;
  entENTITY *peVar2;
  undefined1 local_150;
  undefined1 local_14f;
  undefined2 local_14e;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  m3dMATR local_86 [134];
  
  local_144 = DAT_00963740;
  local_138 = DAT_00963740;
  local_150 = 0;
  local_14f = 0x40;
  local_14c = 8;
  local_148 = _m3dVZero;
  local_140 = DAT_00963744;
  local_13c = _m3dVZero;
  local_134 = DAT_00963744;
  local_b8 = 0;
  local_b4 = 0x3f19999a;
  local_b0 = 0x3f4ccccd;
  local_ac = 0x41200000;
  local_a8 = 0x3e99999a;
  local_a4 = 0xbf800000;
  local_a0 = 0xbf800000;
  local_9c = 0xbf800000;
  local_14e = 0xb8;
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_98);
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ballon);
  if (poVar1 != (objOBJ *)0x0) {
    animINST::GetMatrL2W(*(animINST **)(*(int *)(this + 0x187) + 0xbc),local_86);
    m3dMATR::Translate(local_86,-0.5,1.3,0.1,1);
    local_98 = 0x3d0f5c29;
    local_94 = 0x3d0f5c29;
    local_90 = 0x3d0f5c29;
    m3dMATR::GetAxisZ(local_86,(m3dV *)&local_148);
    local_144 = 0xbe99999a;
    local_b0 = 0x3f000000;
    local_b4 = 0x3ecccccd;
    peVar2 = entCreate(gsScenePtr,s_rigid,s_pwp_mdg_clip,(animCREATE_DATA *)&local_98,&local_150,0);
    if (peVar2 != (entENTITY *)0x0) {
      objOBJ::SetConstColor
                (*(objOBJ **)(*(int *)(peVar2 + 0xbc) + 0x10),*(ulong *)(this + 0x9c),2,8);
      *(uint *)(*(int *)(peVar2 + 0xbc) + 4) = *(uint *)(*(int *)(peVar2 + 0xbc) + 4) | 0x10;
      msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)peVar2,2,(msgADDR *)0x0,5.0);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mdg.cpp
   addr: 0040F550 */

int __thiscall pwpMDG_PJL_SFX::StartSFX(pwpMDG_PJL_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  pwpMDG_SHOOT_CLOUD_EMITTER *this_00;
  partEMITTER_PHYS *this_01;
  pteSPOT *this_02;
  m3dCTRL_3D *pmVar3;
  m3dCOLOR amStack_2c [16];
  undefined4 local_1c;
  
  this_00 = (pwpMDG_SHOOT_CLOUD_EMITTER *)operator_new(0x2c0);
  if (this_00 == (pwpMDG_SHOOT_CLOUD_EMITTER *)0x0) {
    this_01 = (partEMITTER_PHYS *)0x0;
  }
  else {
    this_01 = (partEMITTER_PHYS *)
              pwpMDG_SHOOT_CLOUD_EMITTER::pwpMDG_SHOOT_CLOUD_EMITTER(this_00,0.1);
  }
  *(partEMITTER_PHYS **)(this + 4) = this_01;
  if (this_01 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  local_1c = 0x40f59b;
  partEMITTER_PHYS::SetPosDirSpeed
            (this_01,(m3dV *)(param_2 + 0x51),(m3dV *)(param_2 + 0x5d),(m3dV *)0x0);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 4));
  this_02 = (pteSPOT *)operator_new(0x108);
  if (this_02 == (pteSPOT *)0x0) {
    this_02 = (pteSPOT *)0x0;
  }
  else {
    pteSPOT::pteSPOT(this_02,1);
    *(undefined4 *)(this_02 + 0xf8) = 0;
    *(undefined4 *)(this_02 + 0xfc) = 0;
    *(undefined4 *)(this_02 + 0x100) = 0;
    *(undefined4 *)(this_02 + 0x104) = 0;
    *(undefined ***)this_02 = &pteSPOT_ANIM::_vftable_;
  }
  *(pteSPOT **)this = this_02;
  if (this_02 == (pteSPOT *)0x0) {
    return 0;
  }
  pmVar3 = (m3dCTRL_3D *)operator_new(0x2c);
  if (pmVar3 == (m3dCTRL_3D *)0x0) {
    pmVar3 = (m3dCTRL_3D *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0x3f800000;
    *(undefined4 *)(pmVar3 + 0x10) = 0x3f800000;
    *(undefined4 *)(pmVar3 + 0x14) = 0;
    *(undefined ***)pmVar3 = &m3dCTRL_TIME::_vftable_;
    *(uint *)(pmVar3 + 4) = *(uint *)(pmVar3 + 4) | 1;
    *(undefined4 *)(pmVar3 + 0x18) = _m3dVZero;
    *(undefined4 *)(pmVar3 + 0x1c) = DAT_00963740;
    uVar2 = DAT_00963744;
    *(undefined4 *)(pmVar3 + 0x24) = uVar1;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x20) = uVar2;
    *(undefined ***)pmVar3 = &animCTRL_3D_FOLLOW::_vftable_;
    *(undefined4 *)(pmVar3 + 0x14) = 2;
  }
  pteSPOT_ANIM::SetCtrlPos(*(pteSPOT_ANIM **)this,pmVar3);
  pteSPOT::SetRadius(*(pteSPOT **)this,DAT_005cf940);
  local_1c = 0x41d00000;
  m3dCOLOR::m3dCOLOR(amStack_2c,0xff5050ff);
  pteSPOT::SetColor(*(pteSPOT **)this);
  pteSHADER::Register(*(pteSHADER **)this);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mdg.cpp
   addr: 0040F6E0 */

int __thiscall pwpMEDUSA_PJL::ProcessINIT(pwpMEDUSA_PJL *this,physINIT *param_1)

{
  undefined4 uVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  sncCHANNEL *this_00;
  
  iVar2 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
  this[0x173] = *(pwpMEDUSA_PJL *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if ((*(int *)(param_1 + 0x48) != -1) &&
       (peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4),
       peVar3 != (entIACTIVE_OBJ *)0x0)) {
      physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar3);
    }
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pwpMDG_PJL_SFX::StartSFX
              ((pwpMDG_PJL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 2;
  if (*(int *)(gsSysMP + 0x28) != 4) {
    this_00 = (sncCHANNEL *)operator_new(0xbc);
    if (this_00 == (sncCHANNEL *)0x0) {
      this_00 = (sncCHANNEL *)0x0;
    }
    else {
      sncCHANNEL::sncCHANNEL(this_00);
      *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
      uVar1 = DAT_00963744;
      *(undefined4 *)(this_00 + 0x80) = 0;
      *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
      *(undefined4 *)(this_00 + 0x7c) = uVar1;
      *(undefined4 *)(this_00 + 0x84) = 0x41200000;
      *(undefined4 *)(this_00 + 0x88) = 0x42340000;
      *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x94) = 0;
      *(undefined4 *)(this_00 + 0x98) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x9c) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xa0) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xa4) = _m3dVZero;
      *(undefined4 *)(this_00 + 0xa8) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xac) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xb0) = _m3dVUnitZ;
      *(undefined4 *)(this_00 + 0xb4) = DAT_005f99a0;
      uVar1 = DAT_005f99a4;
      *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
      *(undefined4 *)(this_00 + 0xb8) = uVar1;
    }
    *(sncCHANNEL **)(this + 0x178) = this_00;
    if (this_00 == (sncCHANNEL *)0x0) {
      return 0;
    }
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mdg.cpp
   addr: 0040F8C0 */

void __thiscall pwpMEDUSA_PJL::ProcessFRAME(pwpMEDUSA_PJL *this)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(this + 0x14f);
  pfVar1 = (float *)(iVar2 + 0x6c);
  fVar3 = *pfVar1;
  uVar4 = *(undefined4 *)(iVar2 + 0x70);
  uVar5 = *(undefined4 *)(iVar2 + 0x74);
  *pfVar1 = *pfVar1 - *(float *)(iVar2 + 0x48) * ___real_3f000000;
  *(float *)(iVar2 + 0x70) = *(float *)(iVar2 + 0x70) - *(float *)(iVar2 + 0x4c) * ___real_3f000000;
  *(float *)(iVar2 + 0x74) = *(float *)(iVar2 + 0x74) - *(float *)(iVar2 + 0x50) * ___real_3f000000;
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
  }
  *pfVar1 = fVar3;
  *(undefined4 *)(iVar2 + 0x70) = uVar4;
  *(undefined4 *)(iVar2 + 0x74) = uVar5;
  if (((byte)this[0x88] & 4) != 0) {
    MakeDamage(this);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mdg.cpp
   addr: 0040F970 */

void __thiscall pwpMEDUSA_PJL::ShowCollisSFX(pwpMEDUSA_PJL *this,pjlEV_CDT *param_1)

{
  m3dSPL *this_00;
  m3dCTRL_TIME *this_01;
  pwpMDG_SHOOT_EXPLODE_EMITTER *this_02;
  partEMITTER_PHYS *this_03;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x153))(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
    return;
  }
  if (*(int *)(this + 0x153) != 0) {
    this_00 = (m3dSPL *)operator_new(0x34);
    if (this_00 == (m3dSPL *)0x0) {
      this_00 = (m3dSPL *)0x0;
    }
    else {
      *(undefined4 *)(this_00 + 4) = 0;
      *(undefined4 *)(this_00 + 8) = 8;
      *(undefined4 *)(this_00 + 0xc) = 0;
      *(undefined4 *)(this_00 + 0x14) = 0x14;
      *(undefined4 *)(this_00 + 0x18) = 0x14;
      *(undefined4 *)(this_00 + 0x1c) = 4;
      *(undefined4 *)(this_00 + 0x20) = 0;
      *(undefined4 *)(this_00 + 0x24) = 0;
      *(undefined4 *)(this_00 + 0x28) = 0;
      *(undefined4 *)(this_00 + 0x2c) = 0;
      *(undefined4 *)(this_00 + 0x30) = 0;
      *(undefined ***)this_00 = &m3dSPL_COLOR::_vftable_;
      m3dSPL::AllocKpList(this_00,3);
    }
    m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,0,0.0,80.0,80.0,255.0,255.0);
    m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,1,0.75,80.0,80.0,255.0,255.0);
    m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,2,1.0,80.0,80.0,255.0,1.0);
    this_01 = (m3dCTRL_TIME *)operator_new(0x2c);
    if (this_01 == (m3dCTRL_TIME *)0x0) {
      this_01 = (m3dCTRL_TIME *)0x0;
    }
    else {
      m3dCTRL_TIME::m3dCTRL_TIME(this_01,4.0);
      *(undefined4 *)(this_01 + 0x18) = 0;
      *(undefined4 *)(this_01 + 0x1c) = 0;
      *(undefined4 *)(this_01 + 0x20) = 0;
      *(undefined4 *)(this_01 + 0x24) = 0;
      *(m3dSPL **)(this_01 + 0x28) = this_00;
      *(undefined ***)this_01 = &m3dCTRL_COLOR_SPL::_vftable_;
    }
    *(uint *)((m3dCTRL_COLOR *)this_01 + 4) = *(uint *)((m3dCTRL_COLOR *)this_01 + 4) | 6;
    pteSPOT_ANIM::SetCtrlColorBase(*(pteSPOT_ANIM **)(this + 0x153),(m3dCTRL_COLOR *)this_01);
    *(uint *)(*(int *)(this + 0x153) + 0xf4) = *(uint *)(*(int *)(this + 0x153) + 0xf4) | 4;
    *(uint *)(*(int *)(this + 0x153) + 4) = *(uint *)(*(int *)(this + 0x153) + 4) | 0x40;
    *(undefined4 *)(this + 0x153) = 0;
    if (*(int *)(param_1 + 8) == 1) {
      this_02 = (pwpMDG_SHOOT_EXPLODE_EMITTER *)operator_new(0x2c0);
      if (this_02 != (pwpMDG_SHOOT_EXPLODE_EMITTER *)0x0) {
        this_03 = (partEMITTER_PHYS *)
                  pwpMDG_SHOOT_EXPLODE_EMITTER::pwpMDG_SHOOT_EXPLODE_EMITTER(this_02,0.1);
        if (this_03 != (partEMITTER_PHYS *)0x0) {
          local_c = *(float *)(param_1 + 0x18) * ___real_3e2aaaab + *(float *)(param_1 + 0xc);
          local_8 = *(float *)(param_1 + 0x1c) * ___real_3e2aaaab + *(float *)(param_1 + 0x10);
          local_4 = *(float *)(param_1 + 0x20) * ___real_3e2aaaab + *(float *)(param_1 + 0x14);
          partEMITTER_PHYS::SetPosDirSpeed
                    (this_03,(m3dV *)&local_c,(m3dV *)(param_1 + 0x18),(m3dV *)0x0);
          partEMITTER_PHYS::StartEmission(this_03);
        }
      }
    }
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x0040fe25) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: plw_mdg.cpp
   addr: 0040FB60 */

void __thiscall pwpMEDUSA_PJL::MakeDamage(pwpMEDUSA_PJL *this)

{
  float fVar1;
  float fVar2;
  pwpMEDUSA_PJL *ppVar3;
  objOBJ *this_00;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float local_d0 [4];
  float local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0 [3];
  float afStack_94 [4];
  int local_84 [5];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float *local_54;
  animINST **local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  float local_40;
  float *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float *local_2c;
  int local_28;
  undefined8 local_24;
  float local_1c;
  float local_18;
  undefined8 *local_14;
  float local_10;
  float *local_c;
  int local_8;
  
  iVar7 = 0;
  local_58 = 0xffffffff;
  local_4c = 0xffffffff;
  local_54 = (float *)0x0;
  local_50 = (animINST **)0x0;
  local_48 = 0;
  local_44 = 2;
  if (*(int *)(this + 0x17c) < 10) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_38);
    iVar4 = *(int *)(this + 0x14f);
    local_70 = *(undefined4 *)(iVar4 + 0x48);
    local_6c = *(undefined4 *)(iVar4 + 0x4c);
    local_68 = *(undefined4 *)(iVar4 + 0x50);
    dmgCollectInst((m3dV *)&local_38,(float)local_84,DAT_005cf944,&local_8,5);
    if (0 < local_8) {
      iVar4 = *(int *)(this + 0x17c);
      do {
        iVar5 = 0;
        if (0 < iVar4) {
          ppVar3 = this + 0x180;
          do {
            if (*(int *)ppVar3 == local_84[iVar7]) {
              local_84[iVar7] = 0;
              break;
            }
            iVar5 = iVar5 + 1;
            ppVar3 = ppVar3 + 4;
          } while (iVar5 < iVar4);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_8);
    }
    local_4c = *(undefined4 *)(this + 0x16b);
    local_50 = DAT_005cf944;
    local_64 = local_38;
    local_60 = local_34;
    local_58 = 7;
    local_44 = 1;
    local_5c = local_30;
    m3dMATR::MakeWCS2LCS_VZ((m3dMATR *)local_d0,(m3dV *)&local_38,(m3dV *)&local_70);
    local_28 = 0;
    if (0 < local_8) {
      do {
        iVar7 = local_84[local_28];
        if ((iVar7 != 0) &&
           ((*(int *)(iVar7 + 0x13c) == 0 ||
            (*(int *)(*(int *)(iVar7 + 0x13c) + 0x8c) != *(int *)(this + 0x16b))))) {
          *(int *)(this + *(int *)(this + 0x17c) * 4 + 0x180) = iVar7;
          iVar7 = local_84[local_28];
          *(int *)(this + 0x17c) = *(int *)(this + 0x17c) + 1;
          this_00 = objFindName(*(objOBJ **)(iVar7 + 0x10),s__target);
          if (this_00 == (objOBJ *)0x0) {
            animINST::GetCenter((animINST *)local_84[local_28],(m3dV *)&local_24);
          }
          else {
            objValidateLTM(this_00);
            objOBJ::GetOrigin(this_00,(m3dV *)&local_24);
          }
          local_14 = &local_24;
          local_c = local_d0;
          if (m3dSimdType == 0) {
            local_24 = CONCAT44((float)local_24 * local_d0[1] + local_a0[1] +
                                local_24._4_4_ * fStack_bc + local_1c * fStack_ac,
                                (float)local_24 * local_d0[0] + local_a0[0] +
                                local_24._4_4_ * local_c0 + local_1c * local_b0);
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar8 = PackedFloatingMUL(CONCAT44((float)local_24,(float)local_24),
                                      CONCAT44(local_d0[1],local_d0[0]));
            uVar9 = PackedFloatingMUL(CONCAT44(local_24._4_4_,local_24._4_4_),
                                      CONCAT44(fStack_bc,local_c0));
            uVar10 = PackedFloatingMUL(CONCAT44(local_1c,local_1c),CONCAT44(fStack_ac,local_b0));
            uVar8 = PackedFloatingADD(uVar8,CONCAT44(local_a0[1],local_a0[0]));
            uVar11 = PackedFloatingMUL(CONCAT44((float)local_24,(float)local_24),
                                       CONCAT44(local_d0[3],local_d0[2]));
            uVar9 = PackedFloatingADD(uVar9,uVar10);
            uVar12 = PackedFloatingMUL(CONCAT44(local_24._4_4_,local_24._4_4_),
                                       CONCAT44(uStack_b4,uStack_b8));
            uVar13 = PackedFloatingMUL(CONCAT44(local_1c,local_1c),CONCAT44(uStack_a4,uStack_a8));
            uVar10 = PackedFloatingADD(uVar11,CONCAT44(afStack_94[0],local_a0[2]));
            local_24 = PackedFloatingADD(uVar8,uVar9);
            uVar8 = PackedFloatingADD(uVar12,uVar13);
            uVar8 = PackedFloatingADD(uVar10,uVar8);
            local_1c = (float)uVar8;
            FastExitMediaState();
          }
          else {
            iVar7 = 0;
            do {
              afStack_94[iVar7 + 1] = 0.0;
              iVar4 = 0;
              pfVar6 = local_d0 + iVar7;
              fVar2 = ___real_00000000;
              do {
                iVar5 = iVar4 * 4;
                fVar1 = *pfVar6;
                iVar4 = iVar4 + 1;
                pfVar6 = pfVar6 + 4;
                fVar2 = *(float *)((int)&local_24 + iVar5) * fVar1 + fVar2;
              } while (iVar4 < 3);
              iVar4 = iVar7 + iVar4 * 4;
              iVar7 = iVar7 + 1;
              afStack_94[iVar7] = fVar2 + local_d0[iVar4];
            } while (iVar7 < 3);
            local_24._0_4_ = afStack_94[1];
            local_24._4_4_ = afStack_94[2];
            local_24 = CONCAT44(afStack_94[2],afStack_94[1]);
            local_1c = afStack_94[3];
          }
          iVar7 = local_84[local_28];
          fVar2 = _DAT_005cf948;
          fVar1 = _DAT_005cf948;
          if (0 < *(int *)(iVar7 + 0xf4)) {
            fVar2 = *(float *)(*(int *)(iVar7 + 0xf8) + 0x20) * ___real_3f000000;
            fVar1 = *(float *)(*(int *)(iVar7 + 0xf8) + 0x20) * ___real_3eaaaaab;
          }
          if (*(int *)(*(int *)(iVar7 + 0x13c) + 0x14) == 0x244e5043) {
            iVar4 = *(int *)(*(int *)(iVar7 + 0x13c) + 0x94);
            if (iVar4 == 0x11) {
              fVar2 = fVar2 * ___real_3f000000;
              fVar1 = fVar1 * ___real_3f000000;
            }
            else if (iVar4 == 0x13) {
              fVar2 = fVar2 * ___real_3f666666;
              fVar1 = fVar1 * ___real_3f666666;
            }
          }
          if ((fVar1 <= ABS((float)local_24)) || (fVar2 <= ABS(local_24._4_4_))) {
            local_14 = (undefined8 *)
                       ((float)local_24 * (float)local_24 + local_24._4_4_ * local_24._4_4_);
            local_c = *(float **)(this + 0x1a8);
            if ((float)___real_42480000 < (float)*(float **)(this + 0x1a8)) {
              local_c = ___real_42480000;
            }
            fVar2 = (float)DAT_005cf944 * (float)DAT_005cf944;
            local_18 = 0.0;
            local_2c = (float *)0x0;
            local_10 = fVar2;
            if (fVar2 < ___real_00000000) {
              local_10 = 0.0;
              local_2c = local_c;
              local_18 = fVar2;
              local_c = (float *)0x0;
            }
            if (local_18 <= (float)local_14) {
              if ((float)local_14 <= local_10) {
                local_3c = local_2c;
                local_40 = local_10;
                fVar2 = local_18;
                pfVar6 = local_c;
                if (local_10 < local_18) {
                  local_40 = local_18;
                  local_3c = local_c;
                  fVar2 = local_10;
                  pfVar6 = local_2c;
                }
                local_54 = (float *)((((float)local_14 - fVar2) * ((float)local_3c - (float)pfVar6))
                                     / (local_40 - fVar2) + (float)pfVar6);
              }
              else {
                local_54 = local_2c;
              }
            }
            else {
              local_54 = local_c;
            }
LAB_0041003a:
            if ((float)local_54 != ___real_00000000) goto LAB_0041004a;
          }
          else {
            if ((float)*(float **)(this + 0x1a8) <= ___real_43160000) {
              local_54 = *(float **)(this + 0x1a8);
              goto LAB_0041003a;
            }
            local_54 = (float *)0x43160000;
LAB_0041004a:
            local_48 = iVar7;
            pwpOPP_SFX::Start((pwpOPP_SFX_START *)&local_64);
          }
          fVar2 = *(float *)(this + 0x1a8) - (float)local_54;
          *(float *)(this + 0x1a8) = fVar2;
          if ((9 < *(int *)(this + 0x17c)) ||
             (fVar2 < ___real_00000000 != (fVar2 == ___real_00000000))) {
            msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
            return;
          }
        }
        local_28 = local_28 + 1;
        if (local_8 <= local_28) {
          return;
        }
      } while( true );
    }
  }
  return;
}




/* from: plw_mdg.cpp
   addr: 004100B0 */

void __thiscall pwpMEDUSA_PJL::DispatchDamage(pwpMEDUSA_PJL *this,cdtINFO *param_1)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 2;
  local_18 = 7;
  local_10 = 0x40800000;
  local_24 = *(undefined4 *)(param_1 + 0x10);
  local_20 = *(undefined4 *)(param_1 + 0x14);
  local_1c = *(undefined4 *)(param_1 + 0x18);
  local_14 = *(undefined4 *)(this + 0x15b);
  local_c = *(undefined4 *)(this + 0x16b);
  local_8 = *(undefined4 *)(param_1 + 4);
  pwpOPP_SFX::Start((pwpOPP_SFX_START *)&local_24);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mdg.cpp
   addr: 00410120 */

pwpMDG_SHOOT_CLOUD_EMITTER * __thiscall
pwpMDG_SHOOT_CLOUD_EMITTER::pwpMDG_SHOOT_CLOUD_EMITTER
          (pwpMDG_SHOOT_CLOUD_EMITTER *this,float param_1)

{
  float fVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,200,1000.0,1.1);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,1000.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.1,1000.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.33333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.8,0.3);
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
  fVar1 = param_1 * ___real_41c80000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar1);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_41480000,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.115,71.655);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpMEDUSA::pCloudTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,300.0);
  fVar2 = param_1 * ___real_4428c000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xf8) = 0x40457c57;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_41200000;
  *(undefined4 *)(this + 0xdc) = 0;
  *(float *)(this + 0xe0) = fVar1;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xb0) = param_1 * ___real_3f000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mdg.cpp
   addr: 00410360 */

pwpMDG_SHOOT_EXPLODE_EMITTER * __thiscall
pwpMDG_SHOOT_EXPLODE_EMITTER::pwpMDG_SHOOT_EXPLODE_EMITTER
          (pwpMDG_SHOOT_EXPLODE_EMITTER *this,float param_1)

{
  float fVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x3d,200.0,4.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.53333336,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_40a00000);
  fVar1 = param_1 * ___real_41200000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.065,37.995003);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpMEDUSA::pCloudTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  fVar2 = param_1 * ___real_40a451ec;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xe8) = fVar2;
  fVar2 = param_1 * ___real_3f000000;
  *(float *)(this + 0xf4) = param_1;
  *(float *)(this + 0xc0) = fVar1;
  *(float *)(this + 0xc4) = param_1;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb0) = fVar2;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,DAT_005cf93c,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  return this;
}




/* from: plw_mdg.cpp
   addr: 004105A0
   addr: 004105A0
   addr: 004105A0
   addr: 004105A0 */

void * __thiscall
pjlPJL<struct_pwpMDG_PJL_SFX>::_vector_deleting_destructor_
          (pjlPJL<struct_pwpMDG_PJL_SFX> *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_mdg.cpp
   addr: 004105D0 */

int __thiscall
pjlPJL<struct_pwpMDG_PJL_SFX>::ProcessINIT(pjlPJL<struct_pwpMDG_PJL_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
  this[0x173] = *(pjlPJL<struct_pwpMDG_PJL_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pwpMDG_PJL_SFX::StartSFX
              ((pwpMDG_PJL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: plw_mdg.cpp
   addr: 00410680
   addr: 00410680 */

void __thiscall pjlPJL<struct_pwpAMG_PJL_SFX>::ProcessTERM(pjlPJL<struct_pwpAMG_PJL_SFX> *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 0x153);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(*(int *)(this + 0x14f) + 0xb0) == 0)) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
  }
  if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x157))(1);
    *(undefined4 *)(this + 0x157) = 0;
  }
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* from: plw_mdg.cpp
   addr: 004106E0
   addr: 004106E0 */

void __thiscall m3dSPL_QUAT::GetKpValue(m3dSPL_QUAT *this,int param_1,void *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar2 = param_1;
  }
  puVar1 = (undefined4 *)(*(int *)(this + 0x18) * iVar2 + 4 + *(int *)(this + 0x24));
  *(undefined4 *)param_2 = *puVar1;
  *(undefined4 *)((int)param_2 + 4) = puVar1[1];
  *(undefined4 *)((int)param_2 + 8) = puVar1[2];
  *(undefined4 *)((int)param_2 + 0xc) = puVar1[3];
  return;
}




/* from: plw_mdg.cpp
   addr: 00410720
   addr: 00410720 */

void __thiscall m3dSPL_QUAT::SetKpValue(m3dSPL_QUAT *this,int param_1,void *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar2 = param_1;
  }
  puVar1 = (undefined4 *)(*(int *)(this + 0x18) * iVar2 + 4 + *(int *)(this + 0x24));
                    /* WARNING: Load size is inaccurate */
  *puVar1 = *param_2;
  puVar1[1] = *(undefined4 *)((int)param_2 + 4);
  puVar1[2] = *(undefined4 *)((int)param_2 + 8);
  puVar1[3] = *(undefined4 *)((int)param_2 + 0xc);
  return;
}




/* from: plw_mdg.cpp
   addr: 00410760 */

void __thiscall m3dCTRL_COLOR::SetValue(m3dCTRL_COLOR *this,m3dCOLOR *param_1)

{
  *(undefined4 *)(this + 0x18) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0xc);
  return;
}




/* from: plw_mdg.cpp
   addr: 00410780
   addr: 00410780 */

void * __thiscall
m3dCTRL_COLOR_SPL::_scalar_deleting_destructor_(m3dCTRL_COLOR_SPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 4))(1);
  }
  *(undefined ***)this = &m3dCTRL_TIME::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_mdg.cpp
   addr: 004107C0 */

entENTITY * __fastcall pwpMEDUSA::Create(animINST *param_1)

{
  wpnWEAPON *this;
  
  this = (wpnWEAPON *)operator_new(0x1af);
  if (this != (wpnWEAPON *)0x0) {
    wpnWEAPON::wpnWEAPON(this);
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x1a7) = 0x3f800000;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 7;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}

