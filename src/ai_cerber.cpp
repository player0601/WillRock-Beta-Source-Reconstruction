
/* from: ai_cerber.cpp
   addr: 004362A0 */

int __fastcall aiCerberInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_cerber,0x244e5043,0x32,aiCERBER_GENERIC::Create,s_ai_cerber,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pjl_cerber_fireball,0x46494243,0x32,pjlCERBER_FIREBALL::Create,
                           (char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pjl_cerber_acid,0x46494243,0x32,pjlCERBER_ACID::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxCerberInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(0xe,(sncSOUND_DESCR_3D *)&DAT_0060a878);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aiCerberPjlTexturesInit();
  return (uint)(iVar1 != 0);
}




/* from: ai_cerber.cpp
   addr: 00436340 */

entENTITY * __fastcall aiCERBER_GENERIC::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x573);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 2;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_cerber.cpp
   addr: 00436390 */

int __thiscall aiCERBER_GENERIC::SetupAniSystem(aiCERBER_GENERIC *this)

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
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(paVar1 + 0x8c);
  }
  iVar7 = 8;
  *(undefined4 *)(paVar1 + 0x8c) = 8;
  puVar3 = (undefined4 *)operator_new(0x444);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 8;
    puVar3 = puVar3 + 1;
    puVar6 = puVar3;
    do {
      puVar8 = puVar6;
      for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puVar6[0x20] = 2;
      iVar7 = iVar7 + -1;
      puVar6 = puVar6 + 0x22;
    } while (iVar7 != 0);
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar3;
  _entAnimSetSeqName(paVar1,0,s_CERBER_SEQ_IDLE);
  _entAnimSetSeqName(paVar1,1,s_CERBER_SEQ_RUN);
  _entAnimSetSeqName(paVar1,2,s_CERBER_SEQ_ATTACK_TAIL_RUN);
  _entAnimSetSeqName(paVar1,3,s_CERBER_SEQ_ATTACK_HEADS);
  _entAnimSetSeqName(paVar1,4,s_CERBER_SEQ_ATTACK_TAIL_STAY);
  _entAnimSetSeqName(paVar1,5,s_CERBER_SEQ_ATTACK_PAW);
  _entAnimSetSeqName(paVar1,6,s_CERBER_SEQ_WOUNDED);
  _entAnimSetSeqName(paVar1,7,s_CERBER_SEQ_DEATH);
  entAnimAssignTplSeq(paVar1,paVar2,local_8);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,8,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 0x10))(6,0,1,6);
    (**(code **)(*piVar4 + 0x14))(6);
    (**(code **)(*piVar4 + 0x10))(7,0,1,7);
    (**(code **)(*piVar4 + 4))(1,2,1,2,0);
    (**(code **)(*piVar4 + 4))(2,1,1,1,0);
    if (paVar2 != (animSEQ *)0x0) {
      operator_delete(paVar2 + -4);
    }
    *(uint *)(*(int *)(paVar1 + 0x90) + 0x43c) = *(uint *)(*(int *)(paVar1 + 0x90) + 0x43c) | 1;
    return 1;
  }
  if (*(int *)(paVar1 + 0x90) != 0) {
    operator_delete((void *)(*(int *)(paVar1 + 0x90) + -4));
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber.cpp
   addr: 00436570 */

int __thiscall aiCERBER_GENERIC::ProcessINIT(aiCERBER_GENERIC *this,void *param_1)

{
  undefined4 uVar1;
  sncCHANNEL *this_00;
  objOBJ *poVar2;
  
  aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  *(undefined4 *)(this + 0x4a7) = 0x43960000;
  *(undefined4 *)(this + 0x4ab) = 0x43960000;
  *(undefined1 **)(this + 0xd0) = &DAT_42480000;
  *(undefined4 *)(this + 0x197) = 0x3fe66666;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x153) = 0x41184a53;
  *(undefined4 *)(this + 0x15b) = 0x428c0000;
  *(undefined4 *)(this + 0x56f) = 0x41f00000;
  *(undefined4 *)(this + 0x16b) = 0x3f19999a;
  *(undefined4 *)(this + 0x16f) = 0x3f3851ec;
  *(undefined4 *)(this + 0x173) = 0x3f99999a;
  *(undefined4 *)(this + 0x55b) = 0x40a00000;
  *(undefined1 **)(this + 0x18b) = &DAT_42480000;
  *(undefined4 *)(this + 0x187) = 0x41a00000;
  *(undefined4 *)(this + 0x52b) = 0x42c80000;
  *(undefined4 *)(this + 0x15f) = 0x41a00000;
  *(undefined4 *)(this + 0x497) = 0x41000000;
  *(undefined4 *)(this + 0x49b) = 0x40c00000;
  *(undefined1 **)(this + 0xcc) = &DAT_42480000;
  *(undefined4 *)(this + 0x53f) = 0;
  *(undefined4 *)(this + 0x543) = 0;
  *(undefined4 *)(this + 0x547) = 0;
  *(undefined4 *)(this + 0x54b) = 0x40400000;
  *(undefined4 *)(this + 0x54f) = 0;
  *(undefined4 *)(this + 0x557) = 6;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x18002;
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
    *(undefined4 *)(this_00 + 0x84) = 0x41f00000;
    *(undefined4 *)(this_00 + 0x88) = 0x43160000;
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
  *(sncCHANNEL **)(this + 0x48f) = this_00;
  if (this_00 != (sncCHANNEL *)0x0) {
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
    poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_AttackFocus_LHEAD);
    *(objOBJ **)(this + 0x55f) = poVar2;
    poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_AttackFocus_RHEAD);
    *(objOBJ **)(this + 0x563) = poVar2;
    poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_AttackFocus_TAIL);
    *(objOBJ **)(this + 0x567) = poVar2;
    poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_AttackFocus_ARM);
    *(objOBJ **)(this + 0x56b) = poVar2;
    if ((((*(int *)(this + 0x55f) != 0) && (*(int *)(this + 0x563) != 0)) &&
        (*(int *)(this + 0x567) != 0)) && (poVar2 != (objOBJ *)0x0)) {
      poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
      *(objOBJ **)(this + 0x163) = poVar2;
      if (poVar2 != (objOBJ *)0x0) {
        *(objOBJ **)(this + 0x527) = poVar2;
        *(uint *)poVar2 = *(uint *)poVar2 | 0x200;
        return 1;
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber.cpp
   addr: 00436850 */

int __thiscall aiCERBER_GENERIC::EvalAnimGoalSeq(aiCERBER_GENERIC *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    return 7;
  }
  iVar2 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (iVar2 == 0) {
    uVar1 = *(uint *)(this + 1099);
    if ((uVar1 & 0x10000) != 0) {
      return 0;
    }
    uVar3 = *(uint *)(this + 0x53f);
    if ((uVar3 & 0x30) != 0) {
      *(uint *)(this + 0x53f) = uVar3 & 0xffffffcf | 8;
      uVar3 = (uVar1 & 0x200000 | 0xc00000) >> 0x15;
      *(uint *)(this + 0x557) = uVar3;
      *(uint *)(this + 0x553) = ~uVar1 >> 0x15 & 1;
      return uVar3;
    }
    if ((uVar3 & 8) != 0) {
      return *(int *)(this + 0x557);
    }
    if ((uVar3 & 0x100) != 0) {
      return 5;
    }
    if ((uVar1 & 0x1000) == 0) {
      if ((uVar1 & 4) != 0) {
        return 0;
      }
      if ((*(float *)(this + 0x3d7) < *(float *)(this + 0x187)) &&
         (___real_4059999a < *(float *)(this + 0x3cf))) {
        iVar2 = m3dRandSelect(2,1);
        return iVar2;
      }
      return 1;
    }
    if ((uVar1 & 0x40000) != 0) {
      iVar2 = m3dRandSelect(3,4);
      return iVar2;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber.cpp
   addr: 00436950 */

void __thiscall aiCERBER_GENERIC::Think(aiCERBER_GENERIC *this)

{
  uint uVar1;
  undefined4 uVar2;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_EDX;
  float fVar3;
  
  aiNPC_WR::Think((aiNPC_WR *)this);
  fVar3 = *(float *)(this + 0x54b);
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 1) {
    if (fVar3 < ___real_00000000 != (fVar3 == ___real_00000000)) {
      fVar3 = m3dRandom();
      if (fVar3 <= ___real_3ecccccd) {
        uVar2 = *(undefined4 *)(this + 0x563);
      }
      else {
        uVar2 = *(undefined4 *)(this + 0x55f);
      }
      (**(code **)(*(int *)this + 0x1c4))(uVar2,0);
      uVar1 = *(uint *)(this + 0xf8);
      *(uint *)(this + 0xf8) = uVar1 | 0x80;
      fVar3 = m3dRandRange(extraout_ECX_00,(float)(uVar1 | 0x80));
      *(float *)(this + 0x54b) = fVar3;
      return;
    }
  }
  else if (fVar3 < ___real_3f800000) {
    fVar3 = m3dRandRange(extraout_ECX,extraout_EDX);
    *(float *)(this + 0x54b) = fVar3;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber.cpp
   addr: 00436A00 */

int __thiscall aiCERBER_GENERIC::SelectGoal(aiCERBER_GENERIC *this)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if (((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) goto LAB_00436adb;
  uVar1 = *(uint *)(this + 1099);
  *(uint *)(this + 1099) = uVar1 & 0xffffefff;
  if ((uVar1 & 0x40000) != 0) {
    if ((((uVar1 & 0x10000000) != 0) && ((uVar1 & 0x80000008) == 0)) &&
       (*(float *)(this + 0x3d7) <= *(float *)(this + 0x187))) {
      *(undefined4 *)(this + 0x54f) = 1;
      *(uint *)(this + 1099) = uVar1 & 0xffffefff | 0x1000;
    }
    goto LAB_00436adb;
  }
  if ((*(float *)(this + 0x3cf) < ___real_4019999a == (*(float *)(this + 0x3cf) == ___real_4019999a)
      ) || (*(float *)(this + 0x3d7) < *(float *)(this + 0x56f) ==
            (*(float *)(this + 0x3d7) == *(float *)(this + 0x56f)))) {
LAB_00436acc:
    uVar1 = *(uint *)(this + 0x53f) & 0xfffffeff;
  }
  else {
    fVar3 = aiENEMY::GetSpeedScalar((aiENEMY *)(this + 0x4bb));
    if (___real_3f800000 <= fVar3) goto LAB_00436acc;
    uVar1 = *(uint *)(this + 0x53f) | 0x100;
  }
  *(uint *)(this + 0x53f) = uVar1;
LAB_00436adb:
  if ((*(int *)(*(int *)(this + 0xbc) + 0xe0) != 1) && (*(int *)(*(int *)(this + 0xbc) + 0xe0) != 2)
     ) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  iVar2 = aiNPC::SelectGoal((aiNPC *)this);
  return iVar2;
}




/* from: ai_cerber.cpp
   addr: 00436B10 */

void __thiscall aiCERBER_GENERIC::UpdateTimers(aiCERBER_GENERIC *this)

{
  float extraout_EDX;
  float extraout_EDX_00;
  
  aiNPC_WR::UpdateTimers((aiNPC_WR *)this);
  m3dUpdateTimeField((float *)(this + 0x543),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x547),extraout_EDX_00);
  m3dUpdateTimeField((float *)(this + 0x54b),gsElapsedTime);
  return;
}




/* from: ai_cerber.cpp
   addr: 00436B50 */

int __thiscall aiCERBER_GENERIC::ProcessCDT_FIREABLE(aiCERBER_GENERIC *this,dmgDAMAGE *param_1)

{
  uint uVar1;
  
  if (((byte)this[0x88] & 4) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 4) == 0) {
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
      if ((*(uint *)(this + 0x53f) & 8) != 0) goto switchD_00436b77_default;
      uVar1 = *(uint *)(this + 0x53f) | 0x10;
      break;
    case 2:
    case 6:
    case 9:
    case 10:
      uVar1 = *(uint *)(this + 0x53f) | 0x20;
      break;
    default:
      goto switchD_00436b77_default;
    }
    *(uint *)(this + 0x53f) = uVar1;
  }
switchD_00436b77_default:
  aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
  if ((*(uint *)(this + 1099) & 0x200000) != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x20;
  }
  return 1;
}




/* from: ai_cerber.cpp
   addr: 00436BE0 */

void __thiscall aiCERBER_GENERIC::PlaySounds(aiCERBER_GENERIC *this)

{
  if (((byte)this[0xf8] & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x48f) + 4))(&DAT_0060aa18,0);
  }
  if (((byte)this[0xf8] & 8) != 0) {
    (**(code **)(**(int **)(this + 0x48f) + 4))(&DAT_0060a9b0,0);
  }
  if (((byte)this[0xf8] & 4) != 0) {
    (**(code **)(**(int **)(this + 0x48f) + 4))(&DAT_0060a948,0);
  }
  if ((char)this[0xf8] < '\0') {
    (**(code **)(**(int **)(this + 0x48f) + 4))(&DAT_0060ab50,0);
  }
  if (((byte)this[0xf8] & 2) != 0) {
    (**(code **)(**(int **)(this + 0x48f) + 4))(&DAT_0060a8e0,0);
  }
  if (((byte)this[0xf8] & 0x20) != 0) {
    (**(code **)(**(int **)(this + 0x48f) + 4))(&DAT_0060aa80,0);
  }
  if (((byte)this[0xf8] & 1) != 0) {
    (**(code **)(**(int **)(this + 0x48f) + 4))(&DAT_0060a878,0);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_cerber.cpp
   addr: 00436CB0 */

void __thiscall aiCERBER_GENERIC::FillSoundFlags(aiCERBER_GENERIC *this)

{
  if ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x4000) != 0) {
    switch(*(undefined4 *)(*(int *)(this + 0xbc) + 0xe0)) {
    case 1:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x40;
      return;
    case 2:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
      return;
    case 3:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
      return;
    case 4:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
      return;
    case 5:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x10;
      return;
    case 6:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
      return;
    case 7:
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x20;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber.cpp
   addr: 00436D70 */

void __thiscall aiCERBER_GENERIC::ProcessActionFrame(aiCERBER_GENERIC *this)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [4];
  dmgGENERAL adStack_1c [4];
  float fStack_18;
  float fStack_c;
  float fStack_8;
  
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,0);
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,1);
  if ((iVar1 != 0) && (*(int *)(this + 0x553) != 0)) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff7;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x1c4))(*(undefined4 *)(this + 0x55f),0x40a00000);
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x1c4))(*(undefined4 *)(this + 0x563),0xc0000000);
    iVar1 = *(int *)(this + 0x54f);
    *(int *)(this + 0x54f) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      *(undefined4 *)(this + 0x543) = 0x3dcccccd;
    }
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x1c4))(*(undefined4 *)(this + 0x567),0);
    iVar1 = *(int *)(this + 0x54f);
    *(int *)(this + 0x54f) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      *(undefined4 *)(this + 0x543) = 0x3dcccccd;
    }
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x1c4))(*(undefined4 *)(this + 0x567),0);
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),5,0);
  if (iVar1 != 0) {
    dmgGENERAL::dmgGENERAL(adStack_1c);
    m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x56b) + 0x3c),(m3dV *)&fStack_34);
    (**(code **)(*(int *)this + 0xe4))(&fStack_28);
    fVar5 = (fStack_2c - fStack_38) * (fStack_2c - fStack_38) +
            (fStack_28 - fStack_34) * (fStack_28 - fStack_34) +
            (fStack_24 - fStack_30) * (fStack_24 - fStack_30);
    if (m3dSimdType == 0) {
      fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar2 = (ulonglong)(uint)fVar5;
      uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
      uVar4 = PackedFloatingMUL(uVar3,uVar3);
      uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
      uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
      uVar3 = PackedFloatingMUL(uVar3,uVar2);
      fVar5 = (float)uVar3;
      FastExitMediaState();
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    fStack_8 = fStack_30;
    fStack_c = fStack_34;
    fStack_18 = ___real_41200000;
    if (((___real_3fc00000 <= fVar5) && (fStack_18 = ___real_00000000, fVar5 <= ___real_40000000))
       && (fStack_18 = ___real_40a00000, (float)(0.5 < _DAT_005d2218) == ___real_00000000)) {
      fStack_18 = ___real_41200000 - (fVar5 - ___real_3fc00000) * ___real_41a00000;
    }
    if ((___real_3dcccccd < fStack_18) && (*(msgADDR **)(this + 0x4c3) != (msgADDR *)0x0)) {
      msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x4c3),0x4c5,auStack_20,(msgADDR *)this);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber.cpp
   addr: 00437080 */

void __thiscall aiCERBER_GENERIC::SetMovementSpeed(aiCERBER_GENERIC *this)

{
  if ((*(float *)(this + 0x3cf) < ___real_41a00000) && (___real_42a00000 < *(float *)(this + 0x3d7))
     ) {
    *(undefined4 *)(this + 0x153) = 0x41984a53;
    *(undefined4 *)(this + 0x15b) = 0x428c0000;
    return;
  }
  *(undefined4 *)(this + 0x153) = 0x41184a53;
  *(undefined4 *)(this + 0x15b) = 0x428c0000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber.cpp
   addr: 004370E0 */

entENTITY * __fastcall pjlCERBER_FIREBALL::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1a4);
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
    *(undefined ***)this = &pjlPJL<struct_pjlCERBER_FIREBALL_SFX>::_vftable_;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = _m3dVZero;
    *(undefined4 *)(this + 400) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x194) = uVar1;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_cerber.cpp
   addr: 004371B0
   addr: 004371B0
   addr: 004371B0
   addr: 004371B0 */

void * __thiscall
pjlPJL<struct_pjlCERBER_FIREBALL_SFX>::_vector_deleting_destructor_
          (pjlPJL<struct_pjlCERBER_FIREBALL_SFX> *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: ai_cerber.cpp
   addr: 004371E0 */

int __thiscall
pjlPJL<struct_pjlCERBER_FIREBALL_SFX>::ProcessINIT
          (pjlPJL<struct_pjlCERBER_FIREBALL_SFX> *this,physINIT *param_1)

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
  this[0x173] = *(pjlPJL<struct_pjlCERBER_FIREBALL_SFX> *)(param_1 + 0x50);
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
    pjlCERBER_FIREBALL_SFX::StartSFX
              ((pjlCERBER_FIREBALL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: ai_cerber.cpp
   addr: 00437290 */

void __thiscall
pjlPJL<struct_pjlCERBER_FIREBALL_SFX>::ProcessFRAME(pjlPJL<struct_pjlCERBER_FIREBALL_SFX> *this)

{
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    pjlCERBER_FIREBALL_SFX::UpdateSFX((pjlCERBER_FIREBALL_SFX *)(this + 0x153),(physPHYS *)this);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber.cpp
   addr: 004372E0 */

entENTITY * __fastcall pjlCERBER_ACID::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1a4);
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
    *(undefined ***)this = &pjlPJL<struct_pjlCERBER_ACID_SFX>::_vftable_;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = _m3dVZero;
    *(undefined4 *)(this + 400) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x194) = uVar1;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_cerber.cpp
   addr: 004373B0 */

int __thiscall
pjlPJL<struct_pjlCERBER_ACID_SFX>::ProcessINIT
          (pjlPJL<struct_pjlCERBER_ACID_SFX> *this,physINIT *param_1)

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
  this[0x173] = *(pjlPJL<struct_pjlCERBER_ACID_SFX> *)(param_1 + 0x50);
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
    pjlCERBER_ACID_SFX::StartSFX
              ((pjlCERBER_ACID_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: ai_cerber.cpp
   addr: 00437460 */

void __thiscall
pjlPJL<struct_pjlCERBER_ACID_SFX>::ProcessTERM(pjlPJL<struct_pjlCERBER_ACID_SFX> *this)

{
  pjlCERBER_ACID_SFX::StopSFX((pjlCERBER_ACID_SFX *)(this + 0x153),(physPHYS *)this);
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* from: ai_cerber.cpp
   addr: 00437480 */

void __thiscall
pjlPJL<struct_pjlCERBER_ACID_SFX>::ProcessFRAME(pjlPJL<struct_pjlCERBER_ACID_SFX> *this)

{
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    pjlCERBER_ACID_SFX::UpdateSFX((pjlCERBER_ACID_SFX *)(this + 0x153),(physPHYS *)this);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber.cpp
   addr: 004374B0 */

void __thiscall
pjlPJL<struct_pjlCERBER_ACID_SFX>::ProcessEV_CDT
          (pjlPJL<struct_pjlCERBER_ACID_SFX> *this,pjlEV_CDT *param_1)

{
  int iVar1;
  
  *(uint *)(this + 0x174) = *(uint *)(this + 0x174) | 1;
  pjlCERBER_ACID_SFX::StopSFX((pjlCERBER_ACID_SFX *)(this + 0x153),(physPHYS *)this);
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




/* from: ai_cerber.cpp
   addr: 00437530
   addr: 00437530
   addr: 00437530
   addr: 00437530 */

void * __thiscall pjlCERBER_ACID::_vector_deleting_destructor_(pjlCERBER_ACID *this,uint param_1)

{
  *(undefined ***)this = &pjlPJL<struct_pjlCERBER_ACID_SFX>::_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

