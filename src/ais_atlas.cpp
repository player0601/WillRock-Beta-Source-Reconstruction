
/* from: ais_atlas.cpp
   addr: 0042A310 */

int __fastcall aisAtlasInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_atlas,0x244e5043,0x32,aisATLAS::Create,s_ai_atlas,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = atlasBallInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxAtlasInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_00603f98);
  return (uint)(iVar1 != 0);
}




/* from: ais_atlas.cpp
   addr: 0042A360 */

int __thiscall aisATLAS::SetupAniSystem(aisATLAS *this)

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
  iVar7 = 6;
  *(undefined4 *)(paVar1 + 0x8c) = 6;
  puVar3 = (undefined4 *)operator_new(0x334);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 6;
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
  _entAnimSetSeqName(paVar1,0,s_ATLAS_SEQ_RAISE_BALL);
  _entAnimSetSeqName(paVar1,1,s_ATLAS_SEQ_THROW);
  _entAnimSetSeqName(paVar1,2,s_ATLAS_SEQ_APPEAR_NEW);
  _entAnimSetSeqName(paVar1,3,s_ATLAS_SEQ_SIT_DOWN);
  _entAnimSetSeqName(paVar1,4,s_ATLAS_SEQ_JUMP_DOWN);
  _entAnimSetSeqName(paVar1,5,s_ATLAS_SEQ_WALK);
  entAnimAssignTplSeq(paVar1,paVar2,local_8);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,6,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 4))(0,0,2,0,1);
    (**(code **)(*piVar4 + 4))(1,1,1,2,0);
    (**(code **)(*piVar4 + 4))(1,0,1,2,0);
    (**(code **)(*piVar4 + 4))(2,0,1,3,0);
    (**(code **)(*piVar4 + 4))(3,3,2,3,1);
    (**(code **)(*piVar4 + 4))(3,1,1,0,1);
    (**(code **)(*piVar4 + 4))(1,2,1,2,0);
    (**(code **)(*piVar4 + 4))(1,3,1,2,1);
    (**(code **)(*piVar4 + 0x10))(4,0,1,4);
    (**(code **)(*piVar4 + 4))(4,4,2,4,1);
    (**(code **)(*piVar4 + 4))(4,5,1,5,0);
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
/* from: ais_atlas.cpp
   addr: 0042A570 */

int __thiscall aisATLAS::ProcessINIT(aisATLAS *this,void *param_1)

{
  float10 fVar1;
  undefined4 uVar2;
  int iVar3;
  objOBJ *poVar4;
  sncCHANNEL *this_00;
  entENTITY *peVar5;
  float10 fVar6;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = aisSTATUE::ProcessINIT((aisSTATUE *)this,param_1);
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0xd0) = 0x42700000;
  *(undefined4 *)(this + 0x4a7) = 0x43160000;
  *(undefined1 **)(this + 0x4ab) = &DAT_42480000;
  *(undefined4 *)(this + 0x583) = 0x43340000;
  *(undefined4 *)(this + 0x17f) = 0x42f00000;
  *(undefined4 *)(this + 0x5a3) = 0x3fd55555;
  fVar6 = (float10)(**(code **)(*(int *)this + 0xcc))();
  fVar1 = (float10)___real_40933333;
  *(undefined4 *)(this + 0x58f) = 0x428c0000;
  *(float *)(this + 0x153) = (float)(fVar6 * fVar1);
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),&s_SHAR);
  *(objOBJ **)(this + 0x5ab) = poVar4;
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_LowBACK);
  *(objOBJ **)(this + 0x5af) = poVar4;
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_UpBACK);
  *(objOBJ **)(this + 0x5b3) = poVar4;
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_BACKeff);
  *(objOBJ **)(this + 0x5b7) = poVar4;
  *(undefined4 *)(this + 0x187) = 0x41a00000;
  *(undefined4 *)(this + 0x52b) = 0x461c4000;
  *(undefined4 *)(this + 0x197) = 0x41a00000;
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(this + 0xd0);
  *(undefined4 *)(this + 0x597) = 0;
  *(undefined4 *)(this + 0x59b) = DAT_005d0c6c;
  *(undefined4 *)(this + 0x5a7) = 0;
  *(undefined4 *)(this + 0x59f) = 0;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x8000;
  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),3,0.0);
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_ROOT);
  *(objOBJ **)(this + 0x163) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  *(objOBJ **)(this + 0x527) = poVar4;
  *(uint *)poVar4 = *(uint *)poVar4 | 0x200;
  this_00 = (sncCHANNEL *)operator_new(0xbc);
  if (this_00 == (sncCHANNEL *)0x0) {
    this_00 = (sncCHANNEL *)0x0;
  }
  else {
    sncCHANNEL::sncCHANNEL(this_00);
    *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
    uVar2 = DAT_00963744;
    *(undefined4 *)(this_00 + 0x80) = 0;
    *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
    *(undefined4 *)(this_00 + 0x7c) = uVar2;
    *(undefined4 *)(this_00 + 0x84) = 0x41200000;
    *(undefined4 *)(this_00 + 0x88) = 0x42820000;
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
    uVar2 = DAT_005f99a4;
    *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
    *(undefined4 *)(this_00 + 0xb8) = uVar2;
  }
  *(sncCHANNEL **)(this + 0x593) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  uStack_8 = 0x3e23d70a;
  uStack_4 = *(undefined4 *)(*(int *)(this + 0xbc) + 0x10);
  peVar5 = entCreate(gsScenePtr,s_sfx_atlas_globe_appear,s_sfx_atlas_globe_appear,
                     (animCREATE_DATA *)0x0,&uStack_8,0);
  *(entENTITY **)(this + 0x5bf) = peVar5;
  if (peVar5 == (entENTITY *)0x0) {
    return 0;
  }
  *(undefined4 *)(this + 0x5bb) = 0x40a00000;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x2000000;
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),0
             ,0.0);
  return 1;
}




/* from: ais_atlas.cpp
   addr: 0042A870 */

void __thiscall aisATLAS::ParseNameClass(aisATLAS *this)

{
  aisATLAS *paVar1;
  char *pcVar2;
  
  pcVar2 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  aisSTATUE::ParseNameClass((aisSTATUE *)this);
  pcVar2 = strstr(pcVar2,s__stairs);
  if (pcVar2 != (char *)0x0) {
    *(uint *)(this + 0x597) = *(uint *)(this + 0x597) | 0x400;
    *(undefined4 *)(this + 0x4a7) = 0x437a0000;
    *(undefined4 *)(this + 0x4ab) = 0x437a0000;
  }
  paVar1 = this + 0x5bb;
  if ((*(uint *)(this + 0x597) & 0x400) == 0) {
    *(float *)paVar1 = 5.0;
  }
  else {
    *(float *)paVar1 = 12.0;
  }
  animINST::GetFloat(*(animINST **)(this + 0xbc),s_AI_PROP,s_timeLifeBall,(float *)paVar1);
  *(undefined4 *)(this + 0x587) = 0x3f000000;
  *(undefined4 *)(this + 0x58b) = 0x42200000;
  *(undefined4 *)(this + 0x18b) = 0x42200000;
  return;
}




/* from: ais_atlas.cpp
   addr: 0042A920 */

void __thiscall aisATLAS::ProcessTERM(aisATLAS *this)

{
  aiMINO::ProcessTERM((aiMINO *)this);
  msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x5bf),2,(msgADDR *)0x0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_atlas.cpp
   addr: 0042A940 */

void __thiscall aisATLAS::FillAttackFlag(aisATLAS *this)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  m3dV amStack_10 [4];
  m3dV local_c [12];
  
  if ((*(uint *)(this + 0x597) & 0x400) == 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
    (**(code **)(*(int *)this + 0xe4))(&local_30);
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
    iVar2 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
    if (iVar2 != 0) {
      return;
    }
    if ((*(uint *)(this + 1099) & 0x10000000) == 0) {
      return;
    }
    uVar1 = *(uint *)(this + 0x597);
    fVar3 = *(float *)(this + 0x3cf);
    if ((uVar1 & 0x200) != 0) {
      fVar3 = fVar3 + ___real_40400000;
    }
    if (*(float *)(this + 0x58b) < fVar3 - (local_24 - local_30) * *(float *)(this + 0x5a3)) {
      *(uint *)(this + 0x597) = uVar1 | 0x200;
      return;
    }
    *(uint *)(this + 0x597) = uVar1 & 0xfffffdff;
    if (*(float *)(this + 0x3cf) < *(float *)(this + 0x587)) {
      return;
    }
    if ((*(uint *)(this + 0x51b) & 0x200) != 0) {
      return;
    }
    fStack_1c = fStack_34 - fStack_28;
    fStack_18 = local_30 - local_24;
    fStack_14 = fStack_2c - fStack_20;
    fVar3 = m3xzAngleVector((m3dV *)&fStack_1c,amStack_10);
    if (*(float *)(this + 0x58f) < ABS(fVar3)) {
      return;
    }
  }
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000;
  return;
}




/* from: ais_atlas.cpp
   addr: 0042AAB0 */

int __thiscall aisATLAS::SelectGoal(aisATLAS *this)

{
  int iVar1;
  
  iVar1 = aisSTATUE::SelectGoal((aisSTATUE *)this);
  if (iVar1 == 0) {
    return 0;
  }
  FillAttackFlag(this);
  if ((*(uint *)(this + 1099) & 0x10000000) == 0) {
    *(uint *)(this + 0x597) = *(uint *)(this + 0x597) | 0x80;
  }
  return 1;
}




/* from: ais_atlas.cpp
   addr: 0042AAF0 */

void __thiscall aisATLAS::ProcessShoot(aisATLAS *this)

{
  if ((*(uint *)(this + 1099) & 0x1000) != 0) {
    *(uint *)(this + 0x597) = *(uint *)(this + 0x597) | 1;
  }
  return;
}




/* from: ais_atlas.cpp
   addr: 0042AB10 */

int __thiscall aisATLAS::Activate(aisATLAS *this,int param_1)

{
  int iVar1;
  
  iVar1 = aisSTATUE::Activate((aisSTATUE *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(this + 0x597) = *(uint *)(this + 0x597) | 0x40;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_atlas.cpp
   addr: 0042AB40 */

int __thiscall aisATLAS::EvalAnimGoalSeq(aisATLAS *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if (iVar2 != 0) {
    return 3;
  }
  uVar1 = *(uint *)(this + 1099);
  if ((uVar1 & 0x10000) == 0) {
    uVar3 = uVar1 >> 0xc & 1;
  }
  else {
    uVar3 = 3;
  }
  if ((uVar1 & 0x40000) == 0) {
    if ((*(uint *)(this + 0x53f) & 0x100) == 0) {
      return 4 - (uint)((*(uint *)(this + 0x597) & 0x200) != 0);
    }
    if ((___real_42200000 <= *(float *)(this + 0x3d7)) ||
       (uVar3 = 1,
       *(float *)(this + 0x59f) < ___real_00000000 == (*(float *)(this + 0x59f) == ___real_00000000)
       )) {
      uVar3 = 5;
    }
  }
  else if ((*(uint *)(this + 0x597) & 0x200) != 0) {
    return 0;
  }
  return uVar3;
}




/* from: ais_atlas.cpp
   addr: 0042ABE0 */

void __thiscall aisATLAS::ProcessActionFrame(aisATLAS *this)

{
  int iVar1;
  float extraout_ECX;
  float extraout_EDX;
  undefined4 *puVar2;
  m3dMATR *pmVar3;
  float fVar4;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x597) = *(uint *)(this + 0x597) & 0xffffff9f;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
  if (iVar1 == 0) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,3);
    if (iVar1 != 0) goto LAB_0042ac2a;
  }
  else {
LAB_0042ac2a:
    ThrowBall(this);
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,1);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x59b) = 0x3f800000;
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,0);
  if (iVar1 == 0) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,1);
    if (iVar1 == 0) goto LAB_0042aca2;
  }
  wrsfxATLAS_GLOBE_APPEAR::Start(*(wrsfxATLAS_GLOBE_APPEAR **)(this + 0x5bf));
  fVar4 = m3dRandRange(extraout_ECX,extraout_EDX);
  *(float *)(this + 0x59f) = fVar4;
LAB_0042aca2:
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,1);
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0x597) = *(uint *)(this + 0x597) & 0xffffff7f;
  }
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,0);
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),4,2);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x100;
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    objValidateLTM(*(objOBJ **)(this + 0x163));
    puVar2 = (undefined4 *)(*(int *)(this + 0x163) + 0x3c);
    pmVar3 = (m3dMATR *)(this + 0x543);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pmVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      pmVar3 = pmVar3 + 4;
    }
    m3dMATR::RemoveScale((m3dMATR *)(this + 0x543));
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x10;
    *(undefined4 *)(this + 0x59f) = 0x3f000000;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1000000;
  }
  return;
}




/* from: ais_atlas.cpp
   addr: 0042AD70 */

void __thiscall aisATLAS::Think(aisATLAS *this)

{
  aiNPC_WR::Think((aiNPC_WR *)this);
  if (((byte)this[1099] & 1) != 0) {
    *(undefined4 *)(this + 0x197) = 0x41f00000;
    *(undefined4 *)(this + 0x59f) = 0;
    return;
  }
  *(undefined4 *)(this + 0x197) = 0x41a00000;
  return;
}




/* from: ais_atlas.cpp
   addr: 0042ADB0 */

void __thiscall aisATLAS::SetMovementSpeed(aisATLAS *this)

{
  int iVar1;
  m3dV local_c [12];
  
  aisSTATUE::SetMovementSpeed((aisSTATUE *)this);
  iVar1 = *(int *)(*(animINST **)(this + 0xbc) + 0xe0);
  if (iVar1 != 5) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  if (iVar1 == 4) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x400;
    animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
    animINST::SetDir_XZ(*(animINST **)(this + 0xbc),local_c);
  }
  if ((*(uint *)(this + 0x597) & 0x400) != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x400;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_atlas.cpp
   addr: 0042AE30 */

void __thiscall aisATLAS::AnimateProcedural(aisATLAS *this)

{
  aisATLAS *paVar1;
  float fVar2;
  float in_EDX;
  float extraout_EDX;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  m3dV local_c [12];
  
  if ((*(uint *)(this + 0x597) & 0x400) != 0) {
    return;
  }
  if ((*(uint *)(this + 0x597) & 0x20) == 0) {
    animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
    aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_30);
    local_18 = local_30 - local_24;
    local_14 = local_2c - local_20;
    local_10 = local_28 - local_1c;
    local_34 = (float *)m3xzAngleVector(local_c,(m3dV *)&local_18);
    in_EDX = extraout_EDX;
    if ((___real_c28c0000 < (float)local_34 != (___real_c28c0000 == (float)local_34)) &&
       ((float)local_34 < ___real_428c0000 != ((float)local_34 == ___real_428c0000)))
    goto LAB_0042aedb;
  }
  local_34 = (float *)0x0;
LAB_0042aedb:
  paVar1 = this + 0x5a7;
  m3dLimitChange_Float((float)paVar1,in_EDX,*(float *)paVar1,local_34);
  if (_DAT_005d0c64 <= ABS(*(float *)paVar1)) {
    objValidateLTM(*(objOBJ **)(this + 0x5b3));
    fVar2 = *(float *)paVar1 * ___real_3f000000;
    objOBJ::RotateGlbAxis(*(objOBJ **)(this + 0x5af),fVar2,&m3dVUnitY);
    objOBJ::RotateGlbAxis(*(objOBJ **)(this + 0x5b3),fVar2,&m3dVUnitY);
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  }
  return;
}




/* from: ais_atlas.cpp
   addr: 0042AF80
   addr: 0042AF80 */

void __thiscall aisSPHINX::UpdateTimers(aisSPHINX *this)

{
  float extraout_EDX;
  float extraout_EDX_00;
  
  aisSTATUE::UpdateTimers((aisSTATUE *)this);
  m3dUpdateTimeField((float *)(this + 0x59b),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x59f),extraout_EDX_00);
  return;
}




/* from: ais_atlas.cpp
   addr: 0042AFB0 */

int __thiscall aisATLAS::ProcessCDT_FIREABLE(aisATLAS *this,dmgDAMAGE *param_1)

{
  int iVar1;
  
  iVar1 = aisSTATUE::ProcessCDT_FIREABLE((aisSTATUE *)this,param_1);
  if (iVar1 == 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
  }
  return 1;
}




/* from: ais_atlas.cpp
   addr: 0042AFD0 */

void __thiscall aisATLAS::UpdateSound(aisATLAS *this)

{
  if (((byte)this[0xf8] & 8) != 0) {
    (**(code **)(**(int **)(this + 0x593) + 4))(&DAT_00603f98,0);
  }
  m3dTerm2DMatr();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_atlas.cpp
   addr: 0042B000 */

void __thiscall aisATLAS::FillBallStartSpeed(aisATLAS *this,m3dV *param_1)

{
  float extraout_ECX;
  float extraout_EDX;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_MM2;
  undefined8 in_MM3;
  undefined1 auVar4 [16];
  float fVar5;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x5ab),(m3dV *)&local_18);
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_24);
  if ((*(uint *)(this + 0x597) & 0x400) != 0) {
    in_MM2 = in_MM3;
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_30);
    fVar5 = m3dRandRange(extraout_ECX,extraout_EDX);
    local_24 = local_30 * fVar5 + local_18;
    local_1c = local_28 * fVar5 + local_10;
    local_20 = (local_2c * fVar5 + local_14) - ___real_40000000;
  }
  local_30 = local_24 - local_18;
  local_2c = 0.0;
  local_28 = local_1c - local_10;
  m3dNormalize((m3dV *)&local_30);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_c);
  fVar5 = m3xzAngleVector((m3dV *)&local_30,(m3dV *)&local_c);
  if (*(float *)(this + 0x187) < ABS(fVar5)) {
    local_2c = local_8;
    local_30 = local_c;
    local_28 = local_4;
    local_34 = (local_24 - local_18) * (local_24 - local_18) +
               (local_1c - local_10) * (local_1c - local_10);
    if (m3dSimdType == 0) {
      local_34 = local_34 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar4 = rsqrtss(ZEXT416((uint)local_34),ZEXT416((uint)local_34));
      fVar5 = auVar4._0_4_;
      local_34 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_34 * fVar5 * fVar5) * local_34
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = (ulonglong)(uint)local_34;
      uVar2 = PackedFloatingReciprocalSQRAprox(in_MM2,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      uVar2 = PackedFloatingMUL(uVar2,uVar1);
      local_34 = (float)uVar2;
      FastExitMediaState();
    }
    else {
      local_34 = SQRT(local_34);
    }
    local_24 = local_c * local_34 + local_18;
    local_20 = local_8 * local_34 + local_14;
    local_1c = local_34 * local_4 + local_10;
  }
  local_24 = local_24 - local_30;
  local_20 = local_20 - local_2c;
  local_1c = local_1c - local_28;
  cgmGetThrowSpeed_XZ((m3dV *)&local_18,(m3dV *)&local_24,10.0,-13.0,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_atlas.cpp
   addr: 0042B240 */

void __thiscall aisATLAS::ThrowBall(aisATLAS *this)

{
  int iVar1;
  entENTITY *this_00;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
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
  animCREATE_DATA local_98 [18];
  undefined4 auStack_86 [33];
  
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
  animCREATE_DATA::animCREATE_DATA(local_98);
  FillBallStartSpeed(this,(m3dV *)&local_148);
  local_b0 = 0x41700000;
  local_b4 = 0x3dcccccd;
  local_ac = 0x41500000;
  local_a8 = 0x43160000;
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  (**(code **)(*(int *)this + 0xd4))();
  iVar1 = *(int *)(this + 0x5ab);
  puVar3 = (undefined4 *)(iVar1 + 0x3c);
  puVar4 = auStack_86;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  this_00 = entCreate(gsScenePtr,s_atlas_ball,s_ai_atlas,(int)*(short *)(iVar1 + 0x1c),local_98,
                      &local_150,0);
  if (this_00 != (entENTITY *)0x0) {
    *(undefined4 *)(this_00 + 0xf1b) = 5;
    *(undefined4 *)(this_00 + 0xf1f) = *(undefined4 *)(this + 0x5bb);
    *(aisATLAS **)(this_00 + 0xf17) = this;
    entENTITY::ApplyColor(this_00,(cdtINFO *)(this + 0x453),0);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
  }
  return;
}




/* from: ais_atlas.cpp
   addr: 0042B3E0 */

char * __thiscall
aisATLAS_SHATTER_RIGID_START::GetPieceNameClass(aisATLAS_SHATTER_RIGID_START *this,objOBJ *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 5;
  bVar5 = true;
  pcVar1 = s_atlas_ball;
  pcVar3 = *(char **)(param_1 + 0x18);
  pcVar4 = &s_SHAR;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    pcVar1 = s_rigid;
  }
  return pcVar1;
}




/* from: ais_atlas.cpp
   addr: 0042B410 */

void __thiscall aisATLAS::CheckPlrVisible(aisATLAS *this)

{
  if ((*(uint *)(this + 0x597) & 0x400) != 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x10000000;
  }
  return;
}




/* from: ais_atlas.cpp
   addr: 0042B430 */

int __thiscall aisATLAS::IsArmoredObject(aisATLAS *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strnicmp(param_1,s_shar,4);
  return (uint)(iVar1 == 0);
}




/* from: ais_atlas.cpp
   addr: 0042B450 */

entENTITY * __fastcall aisATLAS::Create(animINST *param_1)

{
  aisSTATUE *this;
  
  this = (aisSTATUE *)operator_new(0x5c3);
  if (this != (aisSTATUE *)0x0) {
    aisSTATUE::aisSTATUE(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 0xd;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ais_atlas.cpp
   addr: 0042B4D0 */

void __thiscall aiNPC_WR::SetLayer1State(aiNPC_WR *this,int param_1)

{
  *(uint *)(this + 0x51b) = param_1 & 0xfffbffff;
  return;
}

