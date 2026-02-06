#include "entity.h"

/* from: ai_rat.cpp
   addr: 0044CC00 */

int aiRatInit(void)

{
  int result;
  
  result = entRegisterClass(s_ai_rat,0x244e5043,0x32,aiRAT::Create,s_ai_rat,0);
  if (result == 0) {
    return 0;
  }
  result = wrsfxRatInit();
  if (result == 0) {
    return 0;
  }
  result = sncLinkSndListData(5,(sncSOUND_DESCR_3D *)&DAT_0060c6f8);
  return (uint)(result != 0);
}




/* from: ai_rat.cpp
   addr: 0044CC50 */

entENTITY * __fastcall aiRAT::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x55b);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 0xc;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_rat.cpp
   addr: 0044CCA0 */

int __thiscall aiRAT::SetupAniSystem(aiRAT *this)

{
  animTPL *paVar1;
  animSEQ *paVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  animSYSTEM *this_00;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_8;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  paVar2 = *(animSEQ **)(paVar1 + 0x90);
  if (paVar2 == (animSEQ *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(paVar1 + 0x8c);
  }
  iVar6 = 3;
  *(undefined4 *)(paVar1 + 0x8c) = 3;
  puVar3 = (undefined4 *)operator_new(0x19c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 3;
    puVar3 = puVar4;
    do {
      puVar7 = puVar3;
      for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar3[0x20] = 2;
      iVar6 = iVar6 + -1;
      puVar3 = puVar3 + 0x22;
    } while (iVar6 != 0);
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar4;
  _entAnimSetSeqName(paVar1,0,s_RAT_SEQ_IDLE);
  _entAnimSetSeqName(paVar1,1,s_RAT_SEQ_JUMP);
  _entAnimSetSeqName(paVar1,2,s_RAT_SEQ_TROT);
  entAnimAssignTplSeq(paVar1,paVar2,local_8);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) && (iVar6 = animSYSTEM::animSYSTEM(this_00,3,0), iVar6 != 0)) {
    *(int *)(paVar1 + 0xa4) = iVar6;
    if (paVar2 != (animSEQ *)0x0) {
      operator_delete(paVar2 + -4);
    }
    return 1;
  }
  if (*(int *)(paVar1 + 0x90) != 0) {
    operator_delete((void *)(*(int *)(paVar1 + 0x90) + -4));
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_rat.cpp
   addr: 0044CDC0 */

int __thiscall aiRAT::ProcessINIT(aiRAT *this,void *param_1)

{
  undefined4 uVar1;
  objOBJ *poVar2;
  sncCHANNEL *this_00;
  entENTITY *this_01;
  undefined4 local_8;
  aiRAT *local_4;
  
  aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined4 *)(this + 0xd0) = 0x40000000;
  *(undefined4 *)(this + 0x16b) = 0x3e99999a;
  *(undefined4 *)(this + 0x16f) = 0x3e99999a;
  *(undefined4 *)(this + 0xcc) = 0x40000000;
  *(undefined4 *)(this + 0x197) = 0x3f000000;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x153) = 0x40c00000;
  *(undefined4 *)(this + 0x15b) = 0x428c0000;
  *(undefined4 *)(this + 0x173) = 0x3f19999a;
  *(undefined4 *)(this + 0x497) = 0x3f800000;
  *(undefined4 *)(this + 0x49b) = 0x3f800000;
  *(undefined1 **)(this + 0x18b) = &DAT_42480000;
  *(undefined4 *)(this + 0x187) = 0x41a00000;
  *(undefined4 *)(this + 0x15f) = 0x40a00000;
  *(undefined4 *)(this + 0x52b) = 0x41200000;
  *(undefined4 *)(this + 0x53f) = 0;
  *(undefined4 *)(this + 0x547) = 0;
  *(undefined4 *)(this + 0x54b) = 0;
  *(undefined4 *)(this + 0x54f) = 0;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x10002;
  *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_AttackFocus);
  *(objOBJ **)(this + 0x553) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  *(objOBJ **)(this + 0x527) = poVar2;
  *(uint *)poVar2 = *(uint *)poVar2 | 0x200;
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
    *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x7c) = uVar1;
    *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
    *(undefined4 *)(this_00 + 0x84) = 0x41700000;
    *(undefined1 **)(this_00 + 0x88) = &DAT_42480000;
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
  local_8 = 0x3dcccccd;
  local_4 = this;
  this_01 = entCreate(gsScenePtr,s_sfx_rat_sparks,s_sfx_rat_sparks,(animCREATE_DATA *)0x0,&local_8,0
                     );
  *(entENTITY **)(this + 0x557) = this_01;
  if (this_01 == (entENTITY *)0x0) {
    return 0;
  }
  entENTITY::SetFollow(this_01,(entENTITY *)this,(objOBJ *)0x0,0);
  return 1;
}




/* from: ai_rat.cpp
   addr: 0044D060 */

int __thiscall aiRAT::EvalAnimGoalSeq(aiRAT *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 1;
    return 0;
  }
  iVar3 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if ((iVar3 == 0) && (uVar1 = *(uint *)(this + 1099), (uVar1 & 0x40000) == 0)) {
    if ((uVar1 & 0x10000) != 0) {
      return 2;
    }
    uVar2 = *(uint *)(this + 0x53f);
    if ((uVar2 & 0x30) != 0) {
      return 1;
    }
    if ((uVar2 & 8) != 0) {
      return 1;
    }
    if ((uVar1 & 0x1000) != 0) {
      return 1;
    }
    if ((uVar1 & 4) == 0) {
      return 2 - (uint)((uVar2 & 0x40) != 0);
    }
  }
  return 0;
}




/* from: ai_rat.cpp
   addr: 0044D0F0 */

void __thiscall aiRAT::ProcessActionFrame(aiRAT *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x80;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,1);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffff7f;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_rat.cpp
   addr: 0044D140 */

float __thiscall aiRAT::GetAnimPlayRate(aiRAT *this)

{
  if (((byte)this[0x53f] & 1) != 0) {
    return ___real_00000000;
  }
  return ___real_3f800000;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_rat.cpp
   addr: 0044D160 */

void __thiscall aiRAT::ExplodeDead(aiRAT *this)

{
  objOBJ *this_00;
  undefined4 uStack_bc;
  undefined **local_b8;
  float fStack_b4;
  m3dV amStack_b0 [12];
  m3dV amStack_a4 [12];
  animCREATE_DATA local_98 [18];
  m3dMATR amStack_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_b8 = &aiDMG_DISPATCHER_TO_SIBLING::_vftable_;
  if ((*(uint *)(this + 0x53f) & 0x100) == 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x120;
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
    (**(code **)(*(int *)this + 0x84))();
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 1;
    if (*(wrsfxRAT_SPARKS **)(this + 0x557) != (wrsfxRAT_SPARKS *)0x0) {
      wrsfxRAT_SPARKS::Stop(*(wrsfxRAT_SPARKS **)(this + 0x557));
    }
    this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_BACK1);
    objOBJ::GetOrigin(this_00,amStack_a4);
    m3dMATR::MakeLCS2WCS_VY(amStack_86,amStack_a4,&m3dVUnitY);
    uStack_bc = 0x3e99999a;
    entCreate(gsScenePtr,s_sfx_rat_expl,s_sfx_rat_expl,local_98,&uStack_bc,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    if (*(objOBJ **)(this + 0x553) == (objOBJ *)0x0) {
      aiNPC::GetPosRooted((aiNPC *)this,amStack_b0);
    }
    else {
      objValidateLTM(*(objOBJ **)(this + 0x553));
      m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x553) + 0x3c),amStack_b0);
    }
    fStack_b4 = *(float *)(this + 0xd0) * ___real_41200000;
    dmgDispatchExplosDamage
              ((entENTITY *)this,amStack_b0,6.0,2.0,3,-1,(cdtINFO *)0x0,0xffffffff,
               (dmgDISPATCHER *)&local_b8);
  }
  return;
}




/* from: ai_rat.cpp
   addr: 0044D2D0 */

void __thiscall aiRAT::StartDeath(aiRAT *this,dmgDAMAGE *param_1)

{
  aiNPC_WR::StartDeath((aiNPC_WR *)this,param_1);
  if (((byte)this[0x88] & 4) != 0) {
    ExplodeDead(this);
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  }
  return;
}




/* from: ai_rat.cpp
   addr: 0044D300 */

void __thiscall aiRAT::Deactivate(aiRAT *this)

{
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffbf;
  aiNPC::Deactivate((aiNPC *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_rat.cpp
   addr: 0044D320 */

void __thiscall aiRAT::SetMovementSpeed(aiRAT *this)

{
  uint uVar1;
  float fVar2;
  
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 0) {
    *(undefined4 *)(this + 0x15b) = 0;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  else {
    uVar1 = *(uint *)(this + 1099);
    if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 2) {
      *(undefined4 *)(this + 0x153) = 0x400ea0eb;
      *(uint *)(this + 1099) = uVar1 & 0xfffffdff;
      *(undefined4 *)(this + 0x15b) = 0x428c0000;
    }
    else {
      *(uint *)(this + 1099) = uVar1 & 0xfffffdff;
      *(undefined4 *)(this + 0x153) = 0x4117d46d;
      fVar2 = ___real_43870000;
      if ((char)this[0x53f] < '\0') {
        fVar2 = ___real_3f800000;
      }
      *(float *)(this + 0x15b) = fVar2;
      if ((uVar1 & 8) != 0) {
        *(float *)(this + 0x15b) = fVar2 * ___real_40a00000;
      }
    }
  }
  if (((byte)this[1099] & 4) != 0) {
    *(undefined4 *)(this + 0x153) = 0x3f800000;
    *(undefined4 *)(this + 0x15b) = 0x42f00000;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_rat.cpp
   addr: 0044D3E0 */

void __thiscall aiRAT::Think(aiRAT *this)

{
  uint uVar1;
  bool bVar2;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  uVar1 = *(uint *)(this + 1099);
  bVar2 = *(float *)(this + 0x3cf) < ___real_42c80000;
  *(uint *)(this + 1099) = uVar1 & 0xffffefff;
  if (bVar2) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x40;
  }
  if ((*(float *)(this + 0x3cf) < ___real_3fe66666) && ((uVar1 & 0x200000) == 0)) {
    if ((DAT_0060c910 & 1) == 0) {
      DAT_0060c910 = DAT_0060c910 | 1;
      DAT_0060c900 = 0;
      DAT_0060c901 = 0x40;
      _DAT_0060c904 = 4;
      _DAT_0060c902 = 0x10;
      atexit((_func_4879 *)&__E24);
    }
    _DAT_0060c908 = 0x461c4000;
    (**(code **)(*(int *)this + 0x8c))(&DAT_0060c900);
  }
  return;
}




/* from: ai_rat.cpp
   addr: 0044D4A0 */

void __thiscall aiRAT::ProcessFRAME(aiRAT *this)

{
  wrsfxRAT_SPARKS *this_00;
  
  aiNPC_WR::ProcessFRAME((aiNPC_WR *)this);
  this_00 = *(wrsfxRAT_SPARKS **)(this + 0x557);
  if ((this_00 != (wrsfxRAT_SPARKS *)0x0) && ((*(uint *)(this + 1099) & 0x800000) == 0)) {
    if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 1) {
      wrsfxRAT_SPARKS::Start(this_00);
      return;
    }
    wrsfxRAT_SPARKS::Stop(this_00);
    return;
  }
  return;
}




/* from: ai_rat.cpp
   addr: 0044D4E0 */

void __thiscall aiRAT::MoveToGoal(aiRAT *this)

{
  if ((*(uint *)(this + 1099) & 0x40000) != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  aiNPC_WR::MoveToGoal((aiNPC_WR *)this);
  return;
}




/* from: ai_rat.cpp
   addr: 0044D520 */

void __thiscall aiRAT::UpdateTimers(aiRAT *this)

{
  float extraout_EDX;
  float extraout_EDX_00;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  m3dUpdateTimeField((float *)(this + 0x54b),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x54f),extraout_EDX_00);
  m3dUpdateTimeField((float *)(this + 0x547),gsElapsedTime);
  return;
}




/* from: ai_rat.cpp
   addr: 0044D560 */

void __thiscall aiRAT::PlaySounds(aiRAT *this)

{
  m3dV amStack_c [12];
  
  if (((byte)this[0xf8] & 2) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060c760,0);
  }
  if (((byte)this[0xf8] & 4) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060c7c8,0);
  }
  if (((byte)this[0xf8] & 8) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060c830,0);
  }
  if (((byte)this[0xf8] & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x543) + 4))(&DAT_0060c898,0);
  }
  if (((byte)this[0xf8] & 1) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),amStack_c);
    gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060c6f8,amStack_c);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_rat.cpp
   addr: 0044D610 */

int __thiscall aiRAT::ProcessCDT_FIREABLE(aiRAT *this,dmgDAMAGE *param_1)

{
  if (((byte)this[0x88] & 4) != 0) {
    aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
    if ((*(uint *)(this + 1099) & 0x200000) == 0) {
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x10;
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
    }
  }
  return 1;
}




/* from: ai_rat.cpp
   addr: 0044D660 */

void __thiscall aiRAT::Freeze(aiRAT *this)

{
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x800000;
  if (*(wrsfxRAT_SPARKS **)(this + 0x557) != (wrsfxRAT_SPARKS *)0x0) {
    wrsfxRAT_SPARKS::Stop(*(wrsfxRAT_SPARKS **)(this + 0x557));
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_rat.cpp
   addr: 0044D690 */

void __thiscall aiRAT::FillSoundFlags(aiRAT *this)

{
  int iVar1;
  float extraout_ECX;
  float in_EDX;
  float extraout_EDX;
  float fVar2;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if (___real_00000000 < *(float *)(this + 0x54f)) {
    *(undefined4 *)(this + 0xf8) = 0;
    return;
  }
  if (iVar1 == 0) {
    iVar1 = m3dRandSelect(0x10,2);
    *(int *)(this + 0xf8) = iVar1;
    fVar2 = m3dRandRange(extraout_ECX,extraout_EDX);
    *(float *)(this + 0x54f) = fVar2;
  }
  else {
    if (iVar1 == 1) {
      fVar2 = m3dRandom();
      if (___real_3ecccccd < fVar2) {
        *(undefined4 *)(this + 0xf8) = 4;
        *(undefined4 *)(this + 0x54f) = 0x40400000;
        return;
      }
      *(undefined4 *)(this + 0xf8) = 8;
      *(undefined4 *)(this + 0x54f) = 0x3f800000;
      return;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(this + 0xf8) = 2;
      fVar2 = m3dRandRange(2.8026e-45,in_EDX);
      *(float *)(this + 0x54f) = fVar2;
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_rat.cpp
   addr: 0044D760 */

void __thiscall
aiRAT::AdjustSpeedsOnFallbackStart(aiRAT *this,dmgWEAPON *param_1,float *param_2,float *param_3)

{
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 1) {
    *param_2 = *param_2 * ___real_3f19999a;
  }
  return;
}


