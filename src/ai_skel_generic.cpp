
/* from: ai_skel_generic.cpp
   addr: 0044FA70 */

int __fastcall aiSkeletonsAllInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_skel_kamik,0x244e5043,0x32,aiSKEL_SWORD::Create,&s_ai_skel,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(&s_ai_skel,0x244e5043,0x32,aiSKEL_SPEAR::Create,&s_ai_skel,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aiSkelSpearPjlInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxSkeletonInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(0x10,(sncSOUND_DESCR_3D *)&_aiSkelSndList);
  return (uint)(iVar1 != 0);
}




/* from: ai_skel_generic.cpp
   addr: 0044FAE0 */

int __thiscall aiSKEL_GENERIC::SetupAniSystem(aiSKEL_GENERIC *this)

{
  animTPL *paVar1;
  animSEQ *paVar2;
  undefined4 *puVar3;
  animSYSTEM *this_00;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_8;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  paVar2 = *(animSEQ **)(paVar1 + 0x90);
  if (paVar2 == (animSEQ *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(paVar1 + 0x8c);
  }
  *(undefined4 *)(paVar1 + 0x8c) = 0x15;
  puVar3 = (undefined4 *)operator_new(0xb2c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0x15;
    puVar3 = puVar3 + 1;
    local_8 = 0x15;
    puVar6 = puVar3;
    do {
      puVar8 = puVar6;
      for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puVar6[0x20] = 2;
      local_8 = local_8 + -1;
      puVar6 = puVar6 + 0x22;
    } while (local_8 != 0);
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar3;
  _entAnimSetSeqName(paVar1,0,s_SKEL_SPEAR_SEQ_RUN_SPEAR);
  _entAnimSetSeqName(paVar1,1,s_SKEL_SPEAR_SEQ_THROW_MOVE);
  _entAnimSetSeqName(paVar1,2,s_SKEL_SPEAR_SEQ_THROW_STAY);
  _entAnimSetSeqName(paVar1,3,s_SKEL_SPEAR_SEQ_IDLE_EMPTY);
  _entAnimSetSeqName(paVar1,4,s_SKEL_SPEAR_SEQ_SWING_A);
  _entAnimSetSeqName(paVar1,5,s_SKEL_SPEAR_SEQ_SWING_B);
  _entAnimSetSeqName(paVar1,6,s_SKEL_SPEAR_SEQ_SWING_SPEAR);
  _entAnimSetSeqName(paVar1,7,s_SKEL_SPEAR_SEQ_APPEAR_WEAPON);
  _entAnimSetSeqName(paVar1,8,s_SKEL_SPEAR_SEQ_RUN_SWORD);
  _entAnimSetSeqName(paVar1,9,s_SKEL_SPEAR_SEQ_IDLE_SWORD);
  _entAnimSetSeqName(paVar1,10,s_SKEL_SPEAR_SEQ_IDLE_SPEAR);
  _entAnimSetSeqName(paVar1,0xb,s_SKEL_SPEAR_SEQ_APPEAR_SP_SKEL);
  _entAnimSetSeqName(paVar1,0xc,s_SKEL_SPEAR_SEQ_APPEAR_SW_SKEL);
  _entAnimSetSeqName(paVar1,0xd,s_SKEL_SWORD_SEQ_SW_RUN);
  _entAnimSetSeqName(paVar1,0xe,s_SKEL_SWORD_SEQ_SW_ATTACK);
  _entAnimSetSeqName(paVar1,0xf,s_SKEL_SWORD_SEQ_SW_IDLE);
  _entAnimSetSeqName(paVar1,0x10,s_SKEL_SWORD_SEQ_SW_APPEAR);
  _entAnimSetSeqName(paVar1,0x13,s_SKEL_SPEAR_SEQ_STAND_SPEAR);
  _entAnimSetSeqName(paVar1,0x11,s_SKEL_SPEAR_SEQ_STAND_REG_SWORD);
  _entAnimSetSeqName(paVar1,0x12,s_SKEL_SPEAR_SEQ_STAND_KAMIKAZE);
  _entAnimSetSeqName(paVar1,0x14,s_SKEL_SPEAR_SEQ_STAB);
  entAnimAssignTplSeq(paVar1,paVar2,iVar7);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,0x15,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 4))(1,1,2,1,1);
    (**(code **)(*piVar4 + 4))(2,2,2,2,1);
    (**(code **)(*piVar4 + 4))(7,7,2,7,1);
    (**(code **)(*piVar4 + 4))(0xb,0xb,2,0xb,1);
    (**(code **)(*piVar4 + 4))(0xc,0xc,2,0xc,1);
    (**(code **)(*piVar4 + 4))(0x11,0x11,2,0x11,1);
    (**(code **)(*piVar4 + 4))(0x13,0x13,2,0x13,1);
    (**(code **)(*piVar4 + 4))(0xe,0xe,2,0xe,1);
    (**(code **)(*piVar4 + 4))(0x10,0x10,2,0x10,1);
    (**(code **)(*piVar4 + 4))(8,4,0,4,1);
    (**(code **)(*piVar4 + 4))(8,5,0,5,1);
    (**(code **)(*piVar4 + 4))(8,6,0,6,1);
    (**(code **)(*piVar4 + 4))(8,0x14,0,0x14,1);
    (**(code **)(*piVar4 + 4))(0,0x14,0,0x14,1);
    (**(code **)(*piVar4 + 4))(9,8,0,8,1);
    (**(code **)(*piVar4 + 4))(10,0,0,0,1);
    (**(code **)(*piVar4 + 4))(0xf,0xd,0,0xd,1);
    (**(code **)(*piVar4 + 4))(0,1,1,1,0);
    (**(code **)(*piVar4 + 4))(1,7,1,7,0);
    (**(code **)(*piVar4 + 4))(2,7,1,7,0);
    (**(code **)(*piVar4 + 4))(0xd,0xe,1,0xe,0);
    (**(code **)(*piVar4 + 4))(0xe,0xc,1,0xc,0);
    (**(code **)(*piVar4 + 4))(0x11,0xc,0,0xc,1);
    (**(code **)(*piVar4 + 4))(0x11,0x10,0,0x10,1);
    (**(code **)(*piVar4 + 4))(0x12,0xc,0,0xc,1);
    (**(code **)(*piVar4 + 4))(0x12,0x10,0,0x10,1);
    (**(code **)(*piVar4 + 4))(0x13,0xb,0,0xb,1);
    if (paVar2 != (animSEQ *)0x0) {
      operator_delete(paVar2 + -4);
    }
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x10c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x10c) | 1;
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x7f4) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x7f4) | 1;
    return 1;
  }
  if (*(int *)(paVar1 + 0x90) != 0) {
    operator_delete((void *)(*(int *)(paVar1 + 0x90) + -4));
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_generic.cpp
   addr: 0044FF10 */

int __thiscall aiSKEL_GENERIC::ProcessINIT(aiSKEL_GENERIC *this,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  objOBJ *poVar5;
  sncCHANNEL *this_00;
  
  iVar4 = aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  if (iVar4 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x497) = 0x40400000;
  *(undefined4 *)(this + 0x49b) = 0x40000000;
  *(undefined4 *)(this + 0x16b) = 0x3f19999a;
  *(undefined4 *)(this + 0x16f) = 0x3f3851ec;
  *(undefined4 *)(this + 0x173) = 0x3f99999a;
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0x18b) = 0x43960000;
  *(undefined4 *)(this + 899) = 0x3ff33333;
  *(undefined4 *)(this + 0x52b) = 0x41f00000;
  poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar5;
  *(objOBJ **)(this + 0x527) = poVar5;
  *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 2;
  *(undefined4 *)(this + 0x53f) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  this_00 = (sncCHANNEL *)operator_new(0xbc);
  uVar2 = DAT_005d425c;
  uVar1 = DAT_005d4258;
  if (this_00 == (sncCHANNEL *)0x0) {
    this_00 = (sncCHANNEL *)0x0;
  }
  else {
    sncCHANNEL::sncCHANNEL(this_00);
    *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
    uVar3 = DAT_00963744;
    *(undefined4 *)(this_00 + 0x80) = 0;
    *(undefined4 *)(this_00 + 0x7c) = uVar3;
    *(undefined4 *)(this_00 + 0x84) = uVar1;
    *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
    *(undefined4 *)(this_00 + 0x88) = uVar2;
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
  *(sncCHANNEL **)(this + 0x543) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  if (((byte)this[0xb4] & 1) != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 4;
  }
  return 1;
}




/* from: ai_skel_generic.cpp
   addr: 00450120 */

void __thiscall aiSKEL_GENERIC::ParseNameClass(aiSKEL_GENERIC *this)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  aiSKEL_GENERIC *local_4;
  
  pcVar3 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar3 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  local_4 = this;
  aiNPC_WR::ParseNameClass((aiNPC_WR *)this);
  local_4 = (aiSKEL_GENERIC *)0x0;
  if (((byte)this[0x44f] & 0x20) == 0) {
    iVar1 = animINST::GetBool(*(animINST **)(this + 0xbc),s_AI_PROP,s_isNiche,(int *)&local_4);
    if ((iVar1 == 0) || (local_4 == (aiSKEL_GENERIC *)0x0)) goto LAB_00450190;
  }
  *(undefined4 *)(this + 0x4b3) = 0x447a0000;
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 1;
LAB_00450190:
  pcVar2 = strstr(pcVar3,s__lay);
  if (pcVar2 != (char *)0x0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x10;
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  }
  pcVar3 = strstr(pcVar3,s__grave);
  if (pcVar3 != (char *)0x0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x40;
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    *(undefined4 *)(this + 0x387) = 0x3fe66666;
    *(undefined4 *)(this + 0x177) = 0x3fa00000;
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
  }
  return;
}




/* from: ai_skel_generic.cpp
   addr: 00450220 */

int __thiscall aiSKEL_GENERIC::IsReadyActivate(aiSKEL_GENERIC *this)

{
  int iVar1;
  
  if (((byte)this[0x53f] & 0x50) != 0) {
    return 0;
  }
  iVar1 = aiNPC_WR::IsReadyActivate((aiNPC_WR *)this);
  return iVar1;
}




/* from: ai_skel_generic.cpp
   addr: 00450240 */

void __thiscall aiSKEL_GENERIC::GetBlueClothes(aiSKEL_GENERIC *this)

{
  objOBJ *this_00;
  
  if ((*(int *)(this + 0xbc) != 0) &&
     (this_00 = *(objOBJ **)(*(int *)(this + 0xbc) + 0x10), this_00 != (objOBJ *)0x0)) {
    objOBJ::ReplaceTex(this_00,s_armour1,s_armour1a);
    objOBJ::ReplaceTex(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_armour2,s_armour2a);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_generic.cpp
   addr: 00450280 */

int __thiscall aiSKEL_GENERIC::Activate(aiSKEL_GENERIC *this,int param_1)

{
  int iVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(uint *)(this + 0x53f) & 1) != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfffeffff;
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffe | 2;
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_c);
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
    *(float *)(this + 0x3f3) = local_18 * ___real_40c00000 + local_c;
    *(float *)(this + 0x3f7) = local_14 * ___real_40c00000 + local_8;
    *(float *)(this + 0x3fb) = local_10 * ___real_40c00000 + local_4;
    *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x3f3);
    *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x3f7);
    *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x3fb);
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 8;
  }
  if ((*(uint *)(this + 0x53f) & 0x10) != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffef | 0x20;
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x4000;
  }
  if ((*(uint *)(this + 0x53f) & 0x40) != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffbf | 0x84;
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
  }
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xffffffef;
  iVar1 = aiNPC::Activate((aiNPC *)this,param_1);
  return iVar1;
}




/* from: ai_skel_generic.cpp
   addr: 004503A0
   addr: 004503A0 */

void __thiscall aiSKETAVR::StartDeath(aiSKETAVR *this,dmgDAMAGE *param_1)

{
  (**(code **)(*(int *)this + 0x1c4))(param_1,0,1);
  return;
}




/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_generic.cpp
   addr: 004503C0 */

void __thiscall
aiSKEL_GENERIC::StartDeath(aiSKEL_GENERIC *this,dmgDAMAGE *param_1,cdtINFO *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  dmgDAMAGE *pdVar3;
  int iVar4;
  float afStack_4c [2];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  m3dV amStack_38 [12];
  m3dV amStack_2c [12];
  undefined **local_20 [4];
  entENTITY *peStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  pdVar3 = param_1;
  local_20[0] = &aiSKEL_RIGID_START::_vftable_;
  if ((param_1 == (dmgDAMAGE *)0x0) || (*(float *)(param_1 + 8) < ___real_459c4000)) {
    *(undefined4 *)(this + 0xf8) = 4;
    *(uint *)(*(int *)(this + 0x543) + 4) = *(uint *)(*(int *)(this + 0x543) + 4) | 0x400;
    iVar4 = (**(code **)(*(int *)this + 0x1c8))();
    if (iVar4 == 0) {
      afStack_4c[1] = 0.07;
      peStack_10 = entCreate(gsScenePtr,s_sfx_skel_death,s_,(animCREATE_DATA *)0x0,afStack_4c + 1,0)
      ;
      if (peStack_10 == (entENTITY *)0x0) {
        return;
      }
      if (param_3 != 0) {
        if (param_1 == (dmgDAMAGE *)0x0) {
          if ((param_2 == (cdtINFO *)0x0) ||
             ((*(int *)(param_2 + 4) != 0 && ((*(byte *)(*(int *)(param_2 + 4) + 4) & 0x48) == 0))))
          {
            animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&fStack_44);
          }
          else {
            scnSCENE::GetCDTFace(gsScenePtr,param_2,(m3dPOLY *)0x0,(m3dV *)&fStack_44);
          }
          param_1 = (dmgDAMAGE *)0x40800000;
        }
        else {
          aiNPC::GetPosRooted((aiNPC *)this,amStack_38);
          dmgGetOrgDir(param_1,amStack_38,amStack_2c,(m3dV *)&fStack_44,afStack_4c);
          fVar1 = *(float *)(param_1 + 8);
          fVar2 = ___real_40400000;
          if ((___real_40a00000 <= fVar1) && (fVar2 = ___real_40e00000, fVar1 <= ___real_41a00000))
          {
            fVar2 = (fVar1 - ___real_40a00000) * ___real_3e888889 + ___real_40400000;
          }
          if (___real_00000000 <= afStack_4c[0]) {
            if (afStack_4c[0] <= ___real_41700000) {
              param_1 = (dmgDAMAGE *)((___real_40000000 - afStack_4c[0] * ___real_3d888889) * fVar2)
              ;
            }
            else {
              param_1 = (dmgDAMAGE *)((float)___real_3f800000 * fVar2);
            }
          }
          else {
            param_1 = (dmgDAMAGE *)(___real_40000000 * fVar2);
          }
        }
        fStack_40 = 0.0;
        iVar4 = _m3dNormalize((m3dV *)&fStack_44);
        if (iVar4 == 0) {
          fStack_44 = _m3dVUnitY;
          fStack_40 = DAT_005f9994;
          fStack_3c = DAT_005f9998;
          param_1 = ___real_3f800000;
        }
        fStack_c = fStack_44 * (float)param_1;
        fStack_8 = fStack_40 * (float)param_1;
        fStack_4 = fStack_3c * (float)param_1;
        aiSKEL_RIGID_START::StartExplos((aiSKEL_RIGID_START *)local_20,(entENTITY *)this);
        *(undefined4 *)(this + 0x527) = 0;
        *(undefined4 *)(this + 0x163) = 0;
        *(undefined4 *)(*(int *)(this + 0xbc) + 0x10) = 0;
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
      }
    }
  }
  aiNPC_WR::StartDeath((aiNPC_WR *)this,pdVar3);
  return;
}




/* from: ai_skel_generic.cpp
   addr: 00450620 */

int __thiscall aiSKEL_GENERIC::SelectGoal(aiSKEL_GENERIC *this)

{
  int iVar1;
  
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  if ((*(uint *)(this + 0x53f) & 2) != 0) {
    if (((byte)this[1099] & 1) == 0) {
      return 1;
    }
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff5;
    *(undefined4 *)(this + 0x4b3) = 0x40a00000;
    aiNPC_WR::OrientTowardsPlayer((aiNPC_WR *)this);
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfffffffe;
    aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)(this + 0x3f3));
  }
  iVar1 = aiNPC::SelectGoal((aiNPC *)this);
  return iVar1;
}




/* from: ai_skel_generic.cpp
   addr: 004506A0 */

void __thiscall aiSKEL_GENERIC::MoveToGoal(aiSKEL_GENERIC *this)

{
  if (((byte)this[0x53f] & 4) != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  aiNPC_WR::MoveToGoal((aiNPC_WR *)this);
  return;
}




/* from: ai_skel_generic.cpp
   addr: 004506C0 */

int __thiscall aiSKEL_GENERIC::GetStateEntExcludeCDT(aiSKEL_GENERIC *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (((byte)this[0x53f] & 2) != 0) {
    uVar2 = 8;
  }
  uVar1 = aiNPC::GetStateEntExcludeCDT((aiNPC *)this);
  return uVar1 | uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_generic.cpp
   addr: 004506E0 */

rgdRIGID * __thiscall
aiSKEL_RIGID_START::CreatePiece(aiSKEL_RIGID_START *this,objOBJ *param_1,rgdINIT_PARAMS *param_2)

{
  rgdRIGID *prVar1;
  rgdINIT_PARAMS local_b8;
  undefined1 local_b7;
  undefined2 local_b6;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  float local_4;
  
  local_a0 = DAT_00963740;
  local_b8 = (rgdINIT_PARAMS)0x0;
  local_c = (*(float *)(this + 8) + *(float *)(this + 0xc)) * ___real_3f000000;
  local_a4 = _m3dVZero;
  local_20 = 0;
  local_b0 = *(undefined4 *)(this + 0x14);
  local_9c = DAT_00963744;
  local_ac = *(undefined4 *)(this + 0x18);
  local_4 = *(float *)(this + 0xc) - local_c;
  local_a8 = *(undefined4 *)(this + 0x1c);
  local_b7 = 0x40;
  local_1c = 0x3f19999a;
  local_18 = 0x3f4ccccd;
  local_14 = 0x41200000;
  local_10 = 0x3e99999a;
  local_8 = 0xbf800000;
  local_b6 = 0xb8;
  local_b4 = 8;
  prVar1 = rgdRIGID_START::CreatePiece((rgdRIGID_START *)this,param_1,&local_b8);
  wrsfxSKELETON_DEATH::AddPiece(*(wrsfxSKELETON_DEATH **)(this + 0x10),(entENTITY *)prVar1,param_1);
  return prVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_generic.cpp
   addr: 004507D0 */

void __thiscall aiSKEL_RIGID_START::StartExplos(aiSKEL_RIGID_START *this,entENTITY *param_1)

{
  int iVar1;
  int iVar2;
  float unaff_EBX;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  entENTITY *unaff_retaddr;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  
  iVar3 = 0;
  *(undefined4 *)(this + 4) = 0;
  iVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0xbc) + 0x138);
  if (0 < *(int *)(iVar1 + 0xbc)) {
    do {
      iVar2 = apNAME::IsName((apNAME *)(iVar3 + 4 + *(int *)(iVar1 + 0xc0)),s_sel_explos);
      if (iVar2 != 0) {
        *(int *)(this + 4) = *(int *)(iVar1 + 0xc0) + iVar4 * 0x4c;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x4c;
    } while (iVar4 < *(int *)(iVar1 + 0xbc));
  }
  (**(code **)(*(int *)plgsPlayer + 0x68))(&local_c);
  animINST::GetPos(*(animINST **)(unaff_retaddr + 0xbc),(m3dV *)&stack0xffffffe4);
  fVar8 = (unaff_EBX - fStack_10) * (unaff_EBX - fStack_10) +
          (fStack_18 - local_c) * (fStack_18 - local_c) +
          (fStack_14 - fStack_8) * (fStack_14 - fStack_8);
  if (m3dSimdType == 0) {
    fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar9 = auVar10._0_4_;
    fVar8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar5 = (ulonglong)(uint)fVar8;
    uVar6 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar5);
    uVar7 = PackedFloatingMUL(uVar6,uVar6);
    uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
    uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
    uVar6 = PackedFloatingMUL(uVar6,uVar5);
    fVar8 = (float)uVar6;
    FastExitMediaState();
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  fVar9 = ___real_40400000;
  if ((___real_41200000 <= fVar8) && (fVar9 = ___real_3f000000, fVar8 <= ___real_41f00000)) {
    fVar9 = ___real_40400000 - (fVar8 - ___real_41200000) * ___real_3e000000;
  }
  *(float *)(this + 8) = fVar9;
  fVar9 = ___real_40c00000;
  if ((___real_41200000 <= fVar8) && (fVar9 = ___real_40000000, fVar8 <= ___real_41f00000)) {
    fVar9 = ___real_40c00000 - (fVar8 - ___real_41200000) * ___real_3e4ccccd;
  }
  *(float *)(this + 0xc) = fVar9;
  animINST::LODSetTemp(*(animINST **)(unaff_retaddr + 0xbc),-1,1);
  rgdRIGID_START::StartExplos((rgdRIGID_START *)this,unaff_retaddr);
  return;
}




/* from: ai_skel_generic.cpp
   addr: 004509D0 */

int __thiscall aiSKEL_RIGID_START::IsInclObj(aiSKEL_RIGID_START *this,objOBJ *param_1)

{
  int iVar1;
  
  if (*(selSEL **)(this + 4) == (selSEL *)0x0) {
    iVar1 = rgdRIGID_START::IsInclObj((rgdRIGID_START *)this,param_1);
    return iVar1;
  }
  if ((0 < *(int *)(param_1 + 0x10)) && (((byte)param_1[8] & 0x3f) == 0)) {
    iVar1 = selSEL::Find(*(selSEL **)(this + 4),*(char **)(param_1 + 0x18));
    if (-1 < iVar1) {
      return 1;
    }
  }
  return 0;
}




/* from: ai_skel_generic.cpp
   addr: 00450A10 */

void __thiscall aiSKEL_GENERIC::PlaySounds(aiSKEL_GENERIC *this)

{
  if (((byte)this[0xf8] & 1) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060cd40,0);
  }
  if (((byte)this[0xf8] & 2) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060ce10,0);
  }
  if (((byte)this[0xf8] & 4) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060cda8,0);
  }
  if (((byte)this[0xf8] & 8) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060cfb0,0);
  }
  if (((byte)this[0xf8] & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060d018,0);
  }
  if (((byte)this[0xf8] & 0x20) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060d080,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x100) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060d0e8,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x200) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060d150,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x400) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060d1b8,0);
  }
  if (((byte)this[0xf8] & 0x40) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060d220,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x1000) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060ce78,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x2000) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060cee0,0);
  }
  if ((*(uint *)(this + 0xf8) & 0x4000) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060cf48,0);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}

