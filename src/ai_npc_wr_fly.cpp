
/* from: ai_npc_wr_fly.cpp
   addr: 0044C460 */

int __thiscall aiNPC_WR_FLY::ProcessINIT(aiNPC_WR_FLY *this,void *param_1)

{
  int iVar1;
  
  iVar1 = aiNPC_WR::ProcessINIT((aiNPC_WR *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x53f) = 0xbfc00000;
  *(undefined4 *)(this + 0x543) = 0;
  *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 3;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr_fly.cpp
   addr: 0044C4A0 */

void __thiscall aiNPC_WR_FLY::ProcessVoluntaryPhysics(aiNPC_WR_FLY *this)

{
  m3dV *pmVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined **local_10;
  undefined4 uStack_c;
  undefined4 local_4;
  
  cdtREFINE::cdtREFINE((cdtREFINE *)&local_10,0,*(animINST **)(this + 0xbc));
  local_4 = 0;
  local_10 = &aiCDT_REFINE::_vftable_;
  uVar4 = (**(code **)(*(int *)this + 0x78))();
  uStack_c = 2;
  local_4 = uVar4;
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&fStack_28);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&fStack_1c);
  fVar2 = *(float *)(this + 0x17b);
  pmVar1 = (m3dV *)(this + 0x41b);
  fStack_28 = fStack_1c * fVar2 + fStack_28;
  uStack_c = 1;
  fVar3 = fStack_18 * fVar2 + fStack_24 + *(float *)(this + 0x173);
  fStack_20 = fStack_14 * fVar2 + fStack_20;
  *(float *)(this + 0x41f) = *(float *)(this + 0x41f) + *(float *)(this + 0x173);
  fVar2 = *(float *)(this + 0x17b);
  *(float *)pmVar1 = fStack_1c * fVar2 + *(float *)pmVar1;
  *(float *)(this + 0x41f) = fStack_18 * fVar2 + *(float *)(this + 0x41f);
  *(float *)(this + 0x423) = fStack_14 * fVar2 + *(float *)(this + 0x423);
  fStack_24 = fVar3;
  local_4 = uVar4;
  scnSCENE::ConstrSphere
            (gsScenePtr,pmVar1,(m3dV *)&fStack_28,*(float *)(this + 0x16b),0xa0,
             (cdtREFINE *)&local_10,(cdtINFO *)0x0);
  if (fVar3 + ___real_3a83126f < fStack_24) {
    fStack_24 = fVar3;
  }
  uStack_c = 2;
  scnSCENE::ConstrSphere
            (gsScenePtr,pmVar1,(m3dV *)&fStack_28,*(float *)(this + 0x16b),0x20,
             (cdtREFINE *)&local_10,(cdtINFO *)0x0);
  fVar2 = -*(float *)(this + 0x17b);
  *(float *)pmVar1 = fStack_1c * fVar2 + *(float *)pmVar1;
  *(float *)(this + 0x41f) = fStack_18 * fVar2 + *(float *)(this + 0x41f);
  *(float *)(this + 0x423) = fStack_14 * fVar2 + *(float *)(this + 0x423);
  *(float *)(this + 0x41f) = *(float *)(this + 0x41f) - *(float *)(this + 0x173);
  fVar2 = -*(float *)(this + 0x17b);
  fStack_28 = fStack_1c * fVar2 + fStack_28;
  fStack_20 = fStack_14 * fVar2 + fStack_20;
  fStack_24 = (fStack_18 * fVar2 + fStack_24) - *(float *)(this + 0x173);
  animINST::Translate(*(animINST **)(this + 0xbc),(m3dV *)&fStack_28,0);
  fVar2 = gsElapsedTime + *(float *)(this + 0x543);
  *(float *)(this + 0x543) = fVar2;
  if ((float)___real_3fe0000000000000 < fVar2) {
    scnSCENE::FloorPlace
              (gsScenePtr,(m3dV *)&fStack_28,DAT_005d3da0,(m3dV *)0x0,0.0,0.0,0,
               (cdtREFINE *)&local_10,(cdtINFO *)(this + 0x453));
    *(undefined4 *)(this + 0x543) = 0;
  }
  return;
}




/* from: ai_npc_wr_fly.cpp
   addr: 0044C6F0 */

void __thiscall aiNPC_WR_FLY::SettleSurface(aiNPC_WR_FLY *this)

{
  m3dV amStack_28 [12];
  m3dV amStack_1c [12];
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_4 = 0;
  local_8 = *(undefined4 *)(this + 0xbc);
  local_10 = &aiCDT_REFINE::_vftable_;
  local_4 = (**(code **)(*(int *)this + 0x78))();
  local_c = 2;
  animINST::GetPos(*(animINST **)(this + 0xbc),amStack_28);
  scnSCENE::FloorPlace
            (gsScenePtr,amStack_28,DAT_005d3da0,amStack_1c,0.55,0.0,0,(cdtREFINE *)&local_10,
             (cdtINFO *)(this + 0x453));
  return;
}




/* from: ai_npc_wr_fly.cpp
   addr: 0044C770 */

void __thiscall aiNPC_WR_FLY::StartDeath(aiNPC_WR_FLY *this,dmgDAMAGE *param_1)

{
  m3dV local_18 [12];
  m3dV local_c [12];
  
  aiNPC_WR::StartDeath((aiNPC_WR *)this,param_1);
  if (((byte)this[0x88] & 4) != 0) {
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x527),local_18);
    dmgGetOrgDir(param_1,local_18,local_c,(m3dV *)0x0,(float *)0x0);
    aiNPC_WR::StartBlood((aiNPC_WR *)this,3,1,local_18,(m3dV *)0x0,(m3dV *)0x0,local_c);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr_fly.cpp
   addr: 0044C7D0 */

int __thiscall aiNPC_WR_FLY::StartPassivePhysics(aiNPC_WR_FLY *this,dmgDAMAGE *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  m3dV local_44 [12];
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = DAT_00963740;
  local_24 = (float)DAT_00963740;
  local_34 = _m3dVZero;
  local_28 = (float)_m3dVZero;
  local_38 = 0;
  local_37 = 0x40;
  local_2c = DAT_00963744;
  local_20 = (float)DAT_00963744;
  local_1c = 0x3dcccccd;
  local_18 = DAT_005d3da0;
  local_14 = 1;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_36 = 0x38;
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x527),local_44);
  dmgGetOrgDir(param_1,local_44,(m3dV *)0x0,(m3dV *)&local_34,(float *)0x0);
  local_28 = _m3dVUnitY * ___real_c1200000;
  local_30 = *(undefined4 *)(this + 0x53f);
  local_1c = 0x3f800000;
  local_14 = 0xffffffff;
  local_c = 0x3f4ccccd;
  local_24 = DAT_005f9994 * ___real_c1200000;
  local_10 = 0;
  local_18 = 0xbf800000;
  local_8 = 2;
  local_20 = DAT_005f9998 * ___real_c1200000;
  (**(code **)**(undefined4 **)(this + 0x43f))(&local_38);
  puVar2 = (undefined4 *)(*(int *)(this + 0xbc) + 0x60);
  puVar3 = (undefined4 *)(*(int *)(this + 0x43f) + 8);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(uint *)(*(int *)(this + 0x43f) + 4) = *(uint *)(*(int *)(this + 0x43f) + 4) | 4;
  physMATH::AddEntCDTExclude(*(physMATH **)(this + 0x43f),(entENTITY *)this);
  iVar1 = *(int *)(this + 0xbc);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffffef;
  }
  return 1;
}

