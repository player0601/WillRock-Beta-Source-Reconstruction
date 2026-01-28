
/* from: plw_bmb.cpp
   addr: 00406410 */

int __fastcall pwpBMBInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pwp_bmb,0x50424d42,0x50,pwpBOMB::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pwp_bmb_pjl,0x50424d42,0x50,pwpBMB_PJL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pwp_bmb_pjl_expl,0x24534658,0x50,pwpBMB_PJL_EXPL::Create,(char *)0x0,1)
  ;
  if (iVar1 == 0) {
    return 0;
  }
  pwpBOMB::pTexSmokeExpl = txmMANAGER::Add(txmManager,s_sfx_discus_land_cloud,0x40003,1);
  if (pwpBOMB::pTexSmokeExpl == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpBOMB::pTexFlameExpl = txmMANAGER::Add(txmManager,s_pwp_bmb_pjl_expl_flame,0x40003,1);
  if (pwpBOMB::pTexFlameExpl == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpBOMB::pTexGritExpl = txmMANAGER::Add(txmManager,s_sfx_mcg_part,0x40000,1);
  if (pwpBOMB::pTexGritExpl == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpBOMB::pTexScorchMark = txmMANAGER::Add(txmManager,s_sfx_bsk_scorch_mark,0x40000,1);
  if (pwpBOMB::pTexScorchMark == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(4,(sncSOUND_DESCR_3D *)&DAT_00601e38);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bmb.cpp
   addr: 00406510 */

entENTITY * __fastcall pwpBMB_PJL::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x18b);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined4 *)(this + 0x16b) = _m3dVZero;
    *(undefined4 *)(this + 0x16f) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x173) = uVar1;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x183) = 0xffffffff;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: plw_bmb.cpp
   addr: 004065B0
   addr: 004065B0 */

void * __thiscall pwpBMB_PJL::_scalar_deleting_destructor_(pwpBMB_PJL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_bmb.cpp
   addr: 004065E0 */

entENTITY * __fastcall pwpBMB_PJL_EXPL::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x15f);
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




/* from: plw_bmb.cpp
   addr: 00406630
   addr: 00406630 */

void * __thiscall pwpBMB_PJL_EXPL::_scalar_deleting_destructor_(pwpBMB_PJL_EXPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_bmb.cpp
   addr: 00406660 */

int __thiscall pwpBOMB::SetupAniSystem(pwpBOMB *this)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = pwpWEAPON::SetupAniSystem((pwpWEAPON *)this);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = *(int **)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0xa4);
  (**(code **)(*piVar1 + 4))(7,8,1,8,0);
  (**(code **)(*piVar1 + 4))(7,9,1,9,0);
  (**(code **)(*piVar1 + 4))(1,4,0,4,0);
  (**(code **)(*piVar1 + 4))(7,1,1,1,0);
  (**(code **)(*piVar1 + 4))(7,7,1,8,0);
  return 1;
}




/* from: plw_bmb.cpp
   addr: 004066E0 */

void __thiscall pwpBOMB::Anim2Sound(pwpBOMB *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,2);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
  }
  return;
}




/* from: plw_bmb.cpp
   addr: 00406710 */

void __thiscall pwpBOMB::UpdateSound(pwpBOMB *this)

{
  if (((byte)this[0xf8] & 1) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00601e38,0);
  }
  pwpWEAPON::UpdateSound((pwpWEAPON *)this);
  return;
}




/* from: plw_bmb.cpp
   addr: 00406740 */

int __thiscall pwpBOMB::ProcessINIT(pwpBOMB *this)

{
  int iVar1;
  
  iVar1 = pwpWEAPON::ProcessINIT((pwpWEAPON *)this);
  if (iVar1 == 0) {
    return 0;
  }
  objOBJ::AllocVertNormalList(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10));
  *(uint *)(this + 0x193) = *(uint *)(this + 0x193) | 2;
  *(undefined4 *)(this + 0x19b) = 0;
  *(undefined4 *)(this + 0x197) = 1;
  *(undefined4 *)(this + 0x18b) = 1;
  *(undefined4 *)(this + 399) = 1;
  (**(code **)(*(int *)this + 0xa0))(0x41c80000);
  *(undefined4 *)(this + 0x15b) = 0x42dc0000;
  *(undefined4 *)(this + 0x157) = 0x41a00000;
  wpnWEAPON::SetAmmo((wpnWEAPON *)this,0.0);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bmb.cpp
   addr: 004067E0 */

void __thiscall pwpBOMB::ProcessSHOOT(pwpBOMB *this,void *param_1)

{
  msgDATA *unaff_retaddr;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  m3dMATR amStack_8a [138];
  
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_98);
  if (((byte)this[0x88] & 4) != 0) {
    (**(code **)(*(int *)this + 0x68))(0x3f800000);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,*(entIACTIVE_OBJ **)(this + 0x187),0x4c6,unaff_retaddr,0xa0000,0xffffffff
               ,0xfffffffd);
    (**(code **)(*(int *)this + 0xa4))();
    m3dMATR::MakeLCS2WCS_VZ
              (amStack_8a,(m3dV *)(unaff_retaddr + 0x14),(m3dV *)(unaff_retaddr + 0x20));
    uStack_9c = 0x3e99999a;
    local_98 = 0x3e99999a;
    uStack_94 = 0x3e99999a;
    entCreate(gsScenePtr,s_pwp_bmb_pjl,s_pwp_bmb_pjl,(animCREATE_DATA *)&uStack_9c,&stack0xffffff0c,
              0);
  }
  return;
}




/* from: plw_bmb.cpp
   addr: 004069D0 */

int __thiscall pwpBOMB::Shoot(pwpBOMB *this,entENTITY *param_1,m3dV *param_2)

{
  int iVar1;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  local_2c = 0;
  local_2b = 0x40;
  local_28 = 9;
  local_2a = 0x2c;
  iVar1 = wpnWEAPON::Shoot((wpnWEAPON *)this,*(entENTITY **)(this + 0x187),param_2);
  if (iVar1 == 0) {
    return 0;
  }
  local_24 = *(undefined4 *)param_2;
  local_20 = *(undefined4 *)(param_2 + 4);
  local_1c = *(undefined4 *)(param_2 + 8);
  wpnWEAPON::GetOrgDirTip((wpnWEAPON *)this,local_18,local_c);
  camCAMERA::GetLookAt(gsCameraPtr,local_c);
  m3dNormalize(local_c);
  local_1c = *(undefined4 *)(param_2 + 8);
  local_20 = *(undefined4 *)(param_2 + 4);
  local_24 = *(undefined4 *)param_2;
  (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c6,&local_2c,0x20000);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bmb.cpp
   addr: 00406AA0 */

int __thiscall pwpBMB_PJL::ProcessINIT(pwpBMB_PJL *this,physINIT *param_1)

{
  undefined4 uVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  sncCHANNEL *this_00;
  
  iVar2 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xffffffef;
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
  *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 4;
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 6;
  *(undefined4 *)(this + 0x157) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x183) = *(undefined4 *)(param_1 + 0x3c);
  if (((byte)this[0x88] & 4) != 0) {
    peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x3c),4);
    if (peVar3 != (entIACTIVE_OBJ *)0x0) {
      physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar3);
    }
  }
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
      *(undefined4 *)(this_00 + 0x84) = 0x41a00000;
      *(undefined4 *)(this_00 + 0x88) = 0x428c0000;
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
    *(sncCHANNEL **)(this + 0x187) = this_00;
    if (this_00 == (sncCHANNEL *)0x0) {
      return 0;
    }
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bmb.cpp
   addr: 00406C70 */

int __thiscall pwpBMB_PJL::ProcessCDT(pwpBMB_PJL *this,cdtINFO *param_1)

{
  int iVar1;
  int iVar2;
  pwpBMB_PJL *ppVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  iVar1 = *(int *)(this + 0x14f);
  if (((*(int *)(param_1 + 4) != 0) && (iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x13c), iVar2 != 0)
      ) && ((*(byte *)(iVar2 + 0xb8) & 1) != 0)) {
    *(undefined4 *)(iVar1 + 0x88) = 0x3f000000;
    *(undefined4 *)(iVar1 + 0x84) = 0xbf000000;
    physPHYS::AddEntCDTExclude((physPHYS *)this,*(entENTITY **)(*(int *)(param_1 + 4) + 0x13c));
    *(undefined4 *)(this + 0x153) = 1;
    Explode(this,param_1,1);
    return 0;
  }
  iVar1 = physPHYS::ProcessCDT((physPHYS *)this,param_1);
  if ((*(int *)(param_1 + 4) == 0) || ((*(byte *)(*(int *)(param_1 + 4) + 4) & 0x40) != 0)) {
    ppVar3 = this + 0x15b;
    for (iVar2 = 8; uVar5 = extraout_MM1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)ppVar3 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      ppVar3 = ppVar3 + 4;
    }
  }
  else {
    Explode(this,param_1,0);
    iVar1 = 1;
    uVar5 = extraout_MM1_00;
  }
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xffffffef;
  fVar7 = *(float *)(this + 0xe0) * *(float *)(this + 0xe0) +
          *(float *)(this + 0xe4) * *(float *)(this + 0xe4) +
          *(float *)(this + 0xe8) * *(float *)(this + 0xe8);
  if (m3dSimdType == 0) {
    fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    param_1 = (cdtINFO *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar7;
    uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    param_1 = (cdtINFO *)uVar5;
    FastExitMediaState();
  }
  else {
    param_1 = (cdtINFO *)SQRT(fVar7);
  }
  param_1 = (cdtINFO *)(uint)(ABS((float)param_1) < ___real_3dcccccd);
  if ((float)(int)param_1 == ___real_00000000) {
    (**(code **)(**(int **)(this + 0x187) + 4))(&DAT_00601ea0,0);
  }
  return iVar1;
}




/* from: plw_bmb.cpp
   addr: 00406E30 */

void __thiscall pwpBMB_PJL::ProcessTERM(pwpBMB_PJL *this)

{
  if (*(int *)(this + 0x17f) == 0) {
    Explode(this,(cdtINFO *)(this + 0x15b),0);
  }
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bmb.cpp
   addr: 00406E60 */

void __thiscall pwpBMB_PJL::ProcessFRAME(pwpBMB_PJL *this)

{
  byte bVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  m3dV local_34 [8];
  float local_2c;
  int local_28 [10];
  
  if (*(int *)(this + 0x153) != 0) {
    iVar5 = *(int *)(this + 0x14f);
    local_40 = *(float *)(iVar5 + 0x48);
    local_2c = *(float *)(iVar5 + 0x50) * ___real_c1000000;
    local_44 = gsElapsedTime;
    local_40 = local_40 * ___real_c1000000 * gsElapsedTime + local_40;
    local_3c = *(float *)(iVar5 + 0x4c) * ___real_c1000000 * gsElapsedTime +
               *(float *)(iVar5 + 0x4c);
    local_38 = local_2c * gsElapsedTime;
    *(float *)(iVar5 + 0x48) = local_40;
    *(float *)(iVar5 + 0x4c) = local_3c;
    local_38 = local_38 + *(float *)(iVar5 + 0x50);
    *(float *)(iVar5 + 0x50) = local_38;
  }
  physPHYS::ProcessFRAME((physPHYS *)this);
  if (((byte)this[0x88] & 4) != 0) {
    fVar2 = gsElapsedTime + *(float *)(this + 0x17b);
    *(float *)(this + 0x17b) = fVar2;
    if (((*(int *)(this + 0x17f) == 0) && ((*(byte *)(*(int *)(this + 0x14f) + 4) & 8) != 0)) &&
       (___real_40000000 <= fVar2)) {
      animINST::GetPos(*(animINST **)(this + 0xbc),local_34);
      dmgCollectInst(local_34,(float)local_28,(animINST **)0x40400000,(int *)&local_44,10);
      iVar5 = 0;
      if (0 < (int)local_44) {
        do {
          iVar4 = local_28[iVar5];
          if (((*(byte *)(iVar4 + 4) & 0x40) == 0) && (*(pwpBMB_PJL **)(iVar4 + 0x13c) != this)) {
            pbVar6 = (byte *)s_;
            if (*(byte **)(*(int *)(this + 0xbc) + 0x20) != (byte *)0x0) {
              pbVar6 = *(byte **)(*(int *)(this + 0xbc) + 0x20);
            }
            pcVar3 = *(char **)(iVar4 + 0x20);
            if ((byte *)pcVar3 == (byte *)0x0) {
              pcVar3 = s_;
            }
            do {
              bVar1 = *pcVar3;
              bVar7 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) {
LAB_00406fe2:
                iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                goto LAB_00406fe7;
              }
              if (bVar1 == 0) break;
              bVar1 = ((byte *)pcVar3)[1];
              bVar7 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_00406fe2;
              pcVar3 = (char *)((byte *)pcVar3 + 2);
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_00406fe7:
            if (iVar4 != 0) {
              Explode(this,(cdtINFO *)(this + 0x15b),0);
              msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
              return;
            }
          }
          iVar5 = iVar5 + 1;
          if ((int)local_44 <= iVar5) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}




/* from: plw_bmb.cpp
   addr: 00407030 */

void __thiscall pwpBMB_PJL::ProcessMP_NOTIFY(pwpBMB_PJL *this,gsEVENT *param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    ShowCollisSFX(this,(pjlEV_CDT *)param_1);
    return;
  }
  return;
}




/* from: plw_bmb.cpp
   addr: 00407050 */

int __thiscall
pwpBMB_PJL::ProcessMsg(pwpBMB_PJL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if ((param_1 == 0x4c5) && (*(int *)(this + 0x17f) == 0)) {
    Explode(this,(cdtINFO *)(this + 0x15b),0);
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  }
  iVar1 = physPHYS::ProcessMsg((physPHYS *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bmb.cpp
   addr: 004070B0 */

void __thiscall pwpBMB_PJL::Explode(pwpBMB_PJL *this,cdtINFO *param_1,int param_2)

{
  msgDATA local_28;
  undefined1 local_27;
  undefined2 local_26;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  ulong local_4;
  
  local_c = DAT_005f9994;
  local_10 = _m3dVUnitY;
  local_28 = (msgDATA)0x0;
  local_27 = 0x40;
  local_8 = DAT_005f9998;
  local_4 = 0;
  local_24 = 0;
  local_26 = 0x28;
  if ((((byte)*param_1 & 2) != 0) && (((byte)this[0x88] & 4) != 0)) {
    local_20 = (uint)(param_2 == 0);
    local_4 = gsEffEnvirColor(param_1,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
    local_1c = *(undefined4 *)(param_1 + 0x10);
    local_18 = *(undefined4 *)(param_1 + 0x14);
    local_14 = *(undefined4 *)(param_1 + 0x18);
    scnSCENE::GetCDTFace(gsScenePtr,param_1,(m3dPOLY *)0x0,(m3dV *)&local_10);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_28,0x90000,0xffffffff,0xfffffffd);
    if (*(int *)(gsSysMP + 0x28) != 4) {
      ShowCollisSFX(this,(pjlEV_CDT *)&local_28);
    }
    if (param_2 == 0) {
      dmgDispatchExplosDamage
                ((entENTITY *)this,(m3dV *)(param_1 + 0x10),*(float *)(this + 0x157),6.0,0,9,param_1
                 ,*(ulong *)(this + 0x183),(dmgDISPATCHER *)0x0);
    }
  }
  return;
}




/* from: plw_bmb.cpp
   addr: 004071D0 */

void __thiscall pwpBMB_PJL::ShowCollisSFX(pwpBMB_PJL *this,pjlEV_CDT *param_1)

{
  sncSOUND_DESCR_3D *psVar1;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (*(int *)(param_1 + 8) == 0) {
    m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
    local_9c = 0x3fa66666;
    entCreate(gsScenePtr,s_sfx_water_splash,s_sfx_water_splash,local_98,&local_9c,0);
    psVar1 = (sncSOUND_DESCR_3D *)&DAT_00601f70;
  }
  else {
    *(undefined4 *)(this + 0x17f) = 1;
    wrsfxSCORCHMARK::Add
              ((float)pwpBOMB::pTexScorchMark,(float)(param_1 + 0xc),(txmTEXTURE *)0x40000000,
               (m3dV *)0x41200000,*(ulong *)(param_1 + 0x24),0x5343524d,0.0,0.0);
    m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
    local_9c = 0x3e19999a;
    entCreate(gsScenePtr,s_pwp_bmb_pjl_expl,s_pwp_bmb_pjl_expl,local_98,&local_9c,0);
    psVar1 = (sncSOUND_DESCR_3D *)&DAT_00601f08;
  }
  gsSND_SYSTEM::Play(gsSysSound,psVar1,(m3dV *)(param_1 + 0xc));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bmb.cpp
   addr: 004072C0 */

pwpBMB_PJL_EXPL_SMOKE * __thiscall
pwpBMB_PJL_EXPL_SMOKE::pwpBMB_PJL_EXPL_SMOKE(pwpBMB_PJL_EXPL_SMOKE *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x46,400.0,0.8);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,400.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.13333334,400.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.16666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.7,0.1);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_40800000,param_1,(m3dSPL_LINEAR1D *)0x0,1.0)
  ;
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,85.425);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpBOMB::pTexSmokeExpl);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar1 = param_1 * ___real_41000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  fVar1 = param_1 * ___real_40a00000;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar1;
  *(float *)(this + 0xb8) = param_1 * ___real_40200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bmb.cpp
   addr: 004074C0 */

pwpBMB_PJL_EXPL_FLAME * __thiscall
pwpBMB_PJL_EXPL_FLAME::pwpBMB_PJL_EXPL_FLAME(pwpBMB_PJL_EXPL_FLAME *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x1e,100.0,0.3);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.1,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.2,0.1);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_41119999,param_1 * ___real_3fa66666,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpBOMB::pTexFlameExpl);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,30.0);
  fVar1 = param_1 * ___real_40a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  fVar1 = param_1 * ___real_41000000;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar1;
  *(float *)(this + 0xb8) = param_1 * ___real_40800000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bmb.cpp
   addr: 004076C0 */

pwpBMB_PJL_EXPL_GRIT * __thiscall
pwpBMB_PJL_EXPL_GRIT::pwpBMB_PJL_EXPL_GRIT(pwpBMB_PJL_EXPL_GRIT *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x78,700.0,5.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,700.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.13333334,700.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.16666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,4.0,1.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3e666666,param_1 * ___real_3d99999a,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.5,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpBOMB::pTexGritExpl);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  fVar2 = param_1 * ___real_41000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 2;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xe8) = fVar2;
  fVar2 = param_1 * ___real_420c0000;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_40f00000;
  *(float *)(this + 0xc0) = param_1 * ___real_418c0000;
  *(float *)(this + 0xc4) = param_1 * ___real_40700000;
  *(float *)(this + 0xe0) = param_1 * ___real_c2480000;
  partEMITTER_PHYS::SetCDTParam
            ((partEMITTER_PHYS *)this,0.0,param_1 * ___real_3e99999a,param_1 * ___real_3e99999a,3);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10408;
  *(uint *)(this + 4) = uVar1 | 0x1a408;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bmb.cpp
   addr: 00407900 */

int __thiscall
pwpBMB_PJL_EXPL::ProcessMsg
          (pwpBMB_PJL_EXPL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  float fVar2;
  int iVar3;
  objOBJ *poVar4;
  pwpBMB_PJL_EXPL_SMOKE *this_00;
  partEMITTER_PHYS *ppVar5;
  pwpBMB_PJL_EXPL_FLAME *this_01;
  pwpBMB_PJL_EXPL_GRIT *this_02;
  int iVar6;
  uint uVar7;
  float in_EDX;
  char *pcVar8;
  m3dV local_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  m3dV local_2c [12];
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar2 = *param_2;
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    animINST::Scale(*(animINST **)(this + 0xbc),fVar2,fVar2,fVar2,0);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_44);
    uVar7 = 0xffffffff;
    pcVar8 = &s_pPlane3;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),&s_pPlane3,~uVar7 - 1);
    if (poVar4 != (objOBJ *)0x0) {
      objOBJ::SetStateRendYes(poVar4,0x60);
      uVar7 = 0xffffffff;
      pcVar8 = &s_pPlane4;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),&s_pPlane4,~uVar7 - 1);
      if (poVar4 != (objOBJ *)0x0) {
        objOBJ::SetStateRendYes(poVar4,0x60);
        this_00 = (pwpBMB_PJL_EXPL_SMOKE *)operator_new(0x2c0);
        if (this_00 == (pwpBMB_PJL_EXPL_SMOKE *)0x0) {
          ppVar5 = (partEMITTER_PHYS *)0x0;
        }
        else {
          ppVar5 = (partEMITTER_PHYS *)pwpBMB_PJL_EXPL_SMOKE::pwpBMB_PJL_EXPL_SMOKE(this_00,fVar2);
        }
        *(partEMITTER_PHYS **)(this + 0x14f) = ppVar5;
        if (ppVar5 != (partEMITTER_PHYS *)0x0) {
          partEMITTER_PHYS::SetPosDirSpeed(ppVar5,local_44,(m3dV *)0x0,(m3dV *)0x0);
          this_01 = (pwpBMB_PJL_EXPL_FLAME *)operator_new(0x2c0);
          if (this_01 == (pwpBMB_PJL_EXPL_FLAME *)0x0) {
            ppVar5 = (partEMITTER_PHYS *)0x0;
          }
          else {
            ppVar5 = (partEMITTER_PHYS *)pwpBMB_PJL_EXPL_FLAME::pwpBMB_PJL_EXPL_FLAME(this_01,fVar2)
            ;
          }
          *(partEMITTER_PHYS **)(this + 0x153) = ppVar5;
          if (ppVar5 != (partEMITTER_PHYS *)0x0) {
            partEMITTER_PHYS::SetPosDirSpeed(ppVar5,local_44,(m3dV *)0x0,(m3dV *)0x0);
            this_02 = (pwpBMB_PJL_EXPL_GRIT *)operator_new(0x2c0);
            if (this_02 == (pwpBMB_PJL_EXPL_GRIT *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = pwpBMB_PJL_EXPL_GRIT::pwpBMB_PJL_EXPL_GRIT(this_02,fVar2);
            }
            *(int *)(this + 0x157) = iVar3;
            if (iVar3 != 0) {
              poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_grit_source);
              if (poVar4 != (objOBJ *)0x0) {
                objOBJ::SetStateProcYes(poVar4,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
                iVar3 = partSetAreaEmissionObj
                                  (*(partEMITTER_PHYS **)(this + 0x157),poVar4,-1,(m3dV *)0x0);
                if (iVar3 != 0) {
                  iVar3 = *(int *)(this + 0xbc);
                  m3dMATR::GetOrigin((m3dMATR *)(iVar3 + 0x60),(m3dV *)&local_38);
                  iVar6 = wrsfxFindFloor((m3dV *)&local_38,(m3dBOX *)&local_20);
                  if (iVar6 == 0) {
                    local_38 = _m3dVZero;
                    local_34 = DAT_00963740;
                    local_30 = DAT_00963744;
                  }
                  else {
                    local_34 = local_14;
                  }
                  m3dMATR::GetAxisY((m3dMATR *)(iVar3 + 0x60),local_2c);
                  partEMITTER_PHYS::SetCDTPlane
                            (*(partEMITTER_PHYS **)(this + 0x157),1,0,(m3dPLANE *)&local_38);
                  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
                  *(uint *)(*(int *)(this + 0xbc) + 4) =
                       *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
                  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
                  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
                  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
                  *(undefined4 *)(this + 0x15b) = 0x40a00000;
                }
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
    }
    iVar3 = animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
    if (iVar3 != 0) {
      *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
      return 0;
    }
  }
  return 0;
}




/* from: plw_bmb.cpp
   addr: 00407C40 */

void __thiscall m3dBOX::Calc(m3dBOX *this,m3dV *param_1,int param_2)

{
  Calc(this,param_1,param_2,0.0);
  return;
}




/* from: plw_bmb.cpp
   addr: 00407C60 */

entENTITY * __fastcall pwpBOMB::Create(animINST *param_1)

{
  wpnWEAPON *this;
  
  this = (wpnWEAPON *)operator_new(0x1af);
  if (this != (wpnWEAPON *)0x0) {
    wpnWEAPON::wpnWEAPON(this);
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x1a7) = 0x3f800000;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 9;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}

