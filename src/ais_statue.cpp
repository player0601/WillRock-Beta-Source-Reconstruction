
/* from: ais_statue.cpp
   addr: 0042E7C0 */

int __fastcall aisStatueInit(void)

{
  int iVar1;
  
  iVar1 = aisAtlasInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aisDiskblInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aisStatueSFXInit();
  if (iVar1 == 0) {
    return 0;
  }
  DAT_00609ba0 = txmMANAGER::Add(txmManager,s_stat_oblom,0x40000,1);
  if (DAT_00609ba0 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_00609b38);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_statue.cpp
   addr: 0042E830 */

aisSTATUE * __thiscall aisSTATUE::aisSTATUE(aisSTATUE *this)

{
  undefined4 uVar1;
  
  aiNPC::aiNPC((aiNPC *)this);
  *(undefined4 *)(this + 0x4ab) = 0x41a00000;
  *(undefined4 *)(this + 0x58f) = 0x41a00000;
  *(undefined4 *)(this + 0x51b) = 0;
  *(undefined4 *)(this + 0x527) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x4a7) = 0x41f00000;
  *(undefined4 *)(this + 0x583) = 0x42200000;
  *(undefined4 *)(this + 0x587) = 0x3f800000;
  *(undefined4 *)(this + 0x58b) = 0x41700000;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x47b) = 6;
  *(undefined4 *)(this + 0x47f) = 0xf;
  *(undefined4 *)(this + 0x483) = 0;
  *(undefined4 *)(this + 0x53f) = 0;
  *(undefined4 *)(this + 0x3ff) = _m3dVUndef;
  *(undefined4 *)(this + 0x403) = DAT_0096374c;
  uVar1 = DAT_00963750;
  *(undefined4 *)(this + 0x593) = 0;
  *(undefined4 *)(this + 0x4c7) = 0xffffffff;
  *(undefined4 *)(this + 0x407) = uVar1;
  return this;
}




/* from: ais_statue.cpp
   addr: 0042E8F0
   addr: 0042E8F0 */

void * __thiscall aisSTATUE::_scalar_deleting_destructor_(aisSTATUE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  aiNPC::~aiNPC((aiNPC *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: ais_statue.cpp
   addr: 0042E930 */

int __thiscall aisSTATUE::ProcessINIT(aisSTATUE *this,void *param_1)

{
  int iVar1;
  
  iVar1 = aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
  animINST::GetInt(*(animINST **)(this + 0xbc),s_AI_PROP,s_nmbLocks,(int *)(this + 0x30));
  *(undefined4 *)(this + 0x52b) = 0x461c4000;
  *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfeffffff | 0x410000;
  *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 4;
  return 1;
}




/* from: ais_statue.cpp
   addr: 0042E9B0 */

void __thiscall aisSTATUE::ParseNameClass(aisSTATUE *this)

{
  char *pcVar1;
  
  pcVar1 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar1 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  aiNPC_WR::ParseNameClass((aiNPC_WR *)this);
  pcVar1 = strstr(pcVar1,s__walk);
  if (pcVar1 != (char *)0x0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfffbffff;
    return;
  }
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x40000;
  return;
}




/* from: ais_statue.cpp
   addr: 0042EA10 */

void __thiscall aisSTATUE::MoveRootedPivoted(aisSTATUE *this)

{
  if ((((byte)this[0x53f] & 0x10) != 0) &&
     ((char)((uint)*(undefined4 *)(*(animINST **)(this + 0xbc) + 4) >> 8) < '\0')) {
    animINST::Transform(*(animINST **)(this + 0xbc),(m3dMATR *)(this + 0x543),0);
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffffef;
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x41b));
  }
  return;
}




/* from: ais_statue.cpp
   addr: 0042EA60 */

int __thiscall aisSTATUE::ProcessCDT_FIREABLE(aisSTATUE *this,dmgDAMAGE *param_1)

{
  int iVar1;
  
  iVar1 = aiNPC_WR::ProcessCDT_FIREABLE((aiNPC_WR *)this,param_1);
  return (uint)(iVar1 != 0);
}




/* from: ais_statue.cpp
   addr: 0042EAA0 */

void __thiscall aisSTATUE::UpdateOnServerOnly(aisSTATUE *this)

{
  aiNPC::UpdateOnServerOnly((aiNPC *)this);
  if ((*(uint *)(this + 1099) & 0x10000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0042eab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this + 0x1c4))();
    return;
  }
  return;
}




/* from: ais_statue.cpp
   addr: 0042EAE0 */

void __thiscall aisSTATUE::UpdateOnServerAndClient(aisSTATUE *this)

{
  aiNPC::UpdateOnServerAndClient((aiNPC *)this);
                    /* WARNING: Could not recover jumptable at 0x0042eaed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x1d0))();
  return;
}




/* from: ais_statue.cpp
   addr: 0042EB00 */

int __thiscall aisSTATUE::Activate(aisSTATUE *this,int param_1)

{
  aiNPC::Activate((aiNPC *)this,param_1);
  if (*(int *)(this + 0x30) < 1) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfffeffff;
    return 1;
  }
  return 0;
}




/* from: ais_statue.cpp
   addr: 0042EB40 */

int __thiscall aisSTATUE::SelectGoal(aisSTATUE *this)

{
  aiNPC::SelectGoal((aiNPC *)this);
  (**(code **)(*(int *)this + 0xe4))(this + 0x3ff);
  return 1;
}




/* from: ais_statue.cpp
   addr: 0042EB70 */

void __thiscall aisSTATUE::Shoot(aisSTATUE *this)

{
  int iVar1;
  
  iVar1 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
  if ((iVar1 == 0) && ((*(uint *)(this + 1099) & 0x10000000) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0042eb93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this + 0x1c8))();
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_statue.cpp
   addr: 0042EBA0 */

void __thiscall aisSTATUE::GetPlayerTargetPos(aisSTATUE *this,m3dV *param_1)

{
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),param_1);
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) + ___real_3f000000;
  return;
}




/* from: ais_statue.cpp
   addr: 0042EBD0 */

void __thiscall aisSTATUE::Colorize(aisSTATUE *this)

{
  undefined **local_24;
  undefined4 local_20;
  undefined4 local_1c;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  local_1c = 0;
  local_24 = &cdtREFINE::_vftable_;
  local_20 = 2;
  animINST::GetPos(*(animINST **)(this + 0xbc),local_18);
  scnSCENE::FloorPlace
            (gsScenePtr,local_18,30.0,local_c,1.0,1.0,0,(cdtREFINE *)&local_24,
             (cdtINFO *)(this + 0x453));
  entENTITY::ApplyColor((entENTITY *)this,(cdtINFO *)(this + 0x453),0);
  return;
}




/* from: ais_statue.cpp
   addr: 0042EC50 */

void __thiscall aisSTATUE::SetMovementSpeed(aisSTATUE *this)

{
  if ((*(uint *)(this + 0x53f) & 0x100) == 0) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
  }
  return;
}




/* from: ais_statue.cpp
   addr: 0042EC70 */

void __thiscall aisSTATUE::StartDeath(aisSTATUE *this,dmgDAMAGE *param_1)

{
  int *piVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0x42ec80;
  aiNPC_WR::StartDeath((aiNPC_WR *)this,param_1);
  piVar1 = (int *)(**(code **)(*(int *)this + 0x1d4))();
  uStack_18 = 1;
  uStack_1c = 0x40400000;
  uStack_20 = 0x41000000;
  uStack_24 = 0x1e;
  (**(code **)(*piVar1 + 0x18))(this);
  aisStatueSFXStartBreakPart(this);
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&uStack_24);
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_00609b38,(m3dV *)&uStack_24);
  msgSYSTEM::SendAll(&msgSystem,0x4d0,(void *)0x0,(msgADDR *)this);
  msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  if ((*(uint *)(this + 1099) & 0x100000) == 0) {
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_statue.cpp
   addr: 0042ED20 */

rgdRIGID * __thiscall
aisSHATTER_RIGID_START::CreatePiece
          (aisSHATTER_RIGID_START *this,objOBJ *param_1,rgdINIT_PARAMS *param_2)

{
  float fVar1;
  float fVar2;
  rgdRIGID *prVar3;
  float fStack_c8;
  undefined1 local_c4 [4];
  float fStack_c0;
  rgdINIT_PARAMS arStack_bc [4];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined2 local_b6;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_a8 = (float)DAT_00963744;
  local_ac = (float)DAT_00963740;
  local_a0 = (float)DAT_00963740;
  local_9c = DAT_00963744;
  local_b0 = (float)_m3dVZero;
  local_a4 = (float)_m3dVZero;
  local_b8 = 0;
  local_b7 = 0x40;
  local_b4 = 1.12104e-44;
  local_20 = 0;
  local_1c = 0x3f19999a;
  local_18 = 0x3f4ccccd;
  local_14 = 0x41200000;
  local_10 = 0x3e99999a;
  local_c = 0xbf800000;
  local_8 = 0xbf800000;
  local_4 = 0xbf800000;
  local_b6 = 0xb8;
  (**(code **)(*(int *)(param_1 + 0xc0) + 0x24))(local_c4);
  fVar1 = *(float *)(this + 4);
  fVar2 = *(float *)(this + 0xc);
  m3dNormalize((m3dV *)&stack0xffffff2c);
  local_b4 = (fStack_c8 - fVar1) * ___real_3f333333;
  local_b0 = ___real_3f333333 * 0.0;
  local_ac = (fStack_c0 - fVar2) * ___real_3f333333;
  local_a0 = m3dRandRange(local_b4,local_b0);
  local_a8 = _m3dVUnitY * local_a0;
  local_10 = *(undefined4 *)(this + 0x10);
  local_8 = *(undefined4 *)(this + 0x14);
  local_a4 = DAT_005f9994 * local_a0;
  local_a0 = DAT_005f9998 * local_a0;
  prVar3 = rgdRIGID_START::CreatePiece((rgdRIGID_START *)this,param_1,arStack_bc);
  return prVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_statue.cpp
   addr: 0042EEB0 */

shtSHATTER * __thiscall aisSHATTER_RIGID_START::GetShatter(aisSHATTER_RIGID_START *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_00609ba4 & 1) == 0) {
    DAT_00609ba4 = DAT_00609ba4 | 1;
    cgmWED_SYS::cgmWED_SYS((cgmWED_SYS *)&DAT_0060422c);
    _DAT_0060422c = &cgmWED_3D::_vftable_;
    puVar2 = &DAT_00604bdc;
    iVar1 = 100;
    do {
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0xffffffff;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0xffffffff;
      puVar2[8] = 0;
      puVar2[9] = 0xffffffff;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      _vector_constructor_iterator_(puVar2 + 0xc,0x1c,3,dsDYN_ARRAY::dsDYN_ARRAY);
      puVar2[0x21] = 0;
      puVar2[0x22] = 0;
      puVar2[0x23] = 0xffffffff;
      puVar2[0x24] = 0;
      puVar2[0x25] = 0xffffffff;
      puVar2[0x26] = 0;
      puVar2[0x27] = 0;
      puVar2 = puVar2 + 0x30;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    _DAT_00604228 = &aisSHATTER::_vftable_;
    atexit((_func_4879 *)&__E23);
  }
  return (shtSHATTER *)&DAT_00604228;
}




/* from: ais_statue.cpp
   addr: 0042F020
   addr: 0042F020
   addr: 0042F020
   addr: 0042F020
   addr: 0042F020
   addr: 0042F020 */

void * __thiscall cgmWED::_vector_deleting_destructor_(cgmWED *this,uint param_1)

{
  *(undefined ***)this = &cgmWED_SYS::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: ais_statue.cpp
   addr: 0042F040 */

void __thiscall dsDYN_ARRAY::dsDYN_ARRAY(dsDYN_ARRAY *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

