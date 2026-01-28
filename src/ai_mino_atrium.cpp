
/* from: ai_mino_atrium.cpp
   addr: 0044A2D0 */

int __thiscall aiMINO_ATRIUM::ProcessINIT(aiMINO_ATRIUM *this,void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float extraout_EDX;
  
  iVar1 = aiMINO::ProcessINIT((aiMINO *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aiaDOMAIN_LIST_ARENA::GetPlrStageNmb(aiaArenaDomList);
  iVar2 = aiaDOMAIN_LIST_ARENA::GetNPCStageNmb(aiaArenaDomList,(aiNPC *)this);
  if ((0 < iVar2) && (iVar1 == 0)) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffdff;
  }
  *(undefined4 *)(this + 0x4ab) = 0x43160000;
  *(undefined4 *)(this + 0x4a7) = 0x43160000;
  if ((0 < iVar2) && (iVar1 != iVar2)) {
    m3dRandRange(150.0,extraout_EDX);
    uVar3 = ftol();
    *(undefined4 *)(this + 0x573) = uVar3;
    *(undefined4 *)(this + 0x18b) = 0x43960000;
    return 1;
  }
  *(undefined4 *)(this + 0x573) = 0;
  *(undefined4 *)(this + 0x18b) = 0x43960000;
  return 1;
}




/* from: ai_mino_atrium.cpp
   addr: 0044A380 */

int __thiscall aiMINO_ATRIUM::Activate(aiMINO_ATRIUM *this,int param_1)

{
  int iVar1;
  
  iVar1 = aiMINO::Activate((aiMINO *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x4ab) = 0x43160000;
  *(undefined4 *)(this + 0x4a7) = 0x43160000;
  return 1;
}




/* from: ai_mino_atrium.cpp
   addr: 0044A3B0 */

void __thiscall aiMINO_ATRIUM::ThrowAx(aiMINO_ATRIUM *this)

{
  aiMINO::ThrowAx((aiMINO *)this);
  *(int *)(this + 0x573) = *(int *)(this + 0x573) + -1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino_atrium.cpp
   addr: 0044A3D0 */

void __thiscall aiMINO_ATRIUM::MoveToGoal(aiMINO_ATRIUM *this)

{
  int iVar1;
  int iVar2;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = 0;
  local_18 = &cdtREFINE::_vftable_;
  local_14 = 2;
  iVar1 = aiaDOMAIN_LIST_ARENA::GetPlrStageNmb(aiaArenaDomList);
  iVar2 = aiaDOMAIN_LIST_ARENA::GetNPCStageNmb(aiaArenaDomList,(aiNPC *)this);
  if ((((0 < iVar2) && (iVar1 == 0)) && (0 < *(int *)(this + 0x573))) &&
     ((*(uint *)(this + 1099) & 0x10000000) != 0)) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_30);
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
    local_2c = local_2c + ___real_3f800000;
    local_3c = local_24 * ___real_3f333333 + local_30;
    local_38 = local_20 * ___real_3f333333 + local_2c;
    local_34 = local_1c * ___real_3f333333 + local_28;
    local_c = local_3c - _m3dVUnitY * ___real_41000000;
    local_8 = local_38 - DAT_005f9994 * ___real_41000000;
    local_4 = local_34 - DAT_005f9998 * ___real_41000000;
    iVar1 = scnSCENE::IsVisiblePoint
                      (gsScenePtr,(m3dV *)&local_3c,(m3dV *)&local_c,0,(cdtREFINE *)&local_18,
                       (cdtINFO *)0x0);
    if ((iVar1 == 0) && (0 < *(int *)(this + 0x573))) {
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x200;
    }
  }
  aiMINO::MoveToGoal((aiMINO *)this);
  return;
}




/* from: ai_mino_atrium.cpp
   addr: 0044A520 */

int __thiscall aiMINO_ATRIUM::SelectDeathAnim(aiMINO_ATRIUM *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = aiaDOMAIN_LIST_ARENA::GetPlrStageNmb(aiaArenaDomList);
  iVar2 = aiaDOMAIN_LIST_ARENA::GetNPCStageNmb(aiaArenaDomList,(aiNPC *)this);
  if ((0 < iVar2) && (iVar1 == 0)) {
    return 8;
  }
  iVar1 = aiMINO::SelectDeathAnim((aiMINO *)this);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_mino_atrium.cpp
   addr: 0044A560 */

int __thiscall aiMINO_ATRIUM::StartPassivePhysics(aiMINO_ATRIUM *this,dmgDAMAGE *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_34 = _m3dVZero;
  local_28 = _m3dVZero;
  local_30 = DAT_00963740;
  local_24 = (float)DAT_00963740;
  local_38 = 0;
  local_37 = 0x40;
  local_2c = DAT_00963744;
  local_20 = DAT_00963744;
  local_1c = 0x3dcccccd;
  local_18 = DAT_005d3d48;
  local_14 = 1;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_36 = 0x38;
  iVar1 = aiaDOMAIN_LIST_ARENA::GetPlrStageNmb(aiaArenaDomList);
  iVar2 = aiaDOMAIN_LIST_ARENA::GetNPCStageNmb(aiaArenaDomList,(aiNPC *)this);
  if ((0 < iVar2) && (iVar1 == 0)) {
    local_1c = 0x3e4ccccd;
    local_14 = 0xffffffff;
    local_c = 0x3f4ccccd;
    local_18 = 0xbf800000;
    local_10 = iVar1;
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_34);
    local_34 = local_34 * ___real_40a00000;
    local_30 = 0x40100000;
    local_2c = local_2c * ___real_40a00000;
    local_28 = _m3dVUnitY * ___real_c1200000;
    local_24 = DAT_005f9994 * ___real_c1200000;
    local_20 = DAT_005f9998 * ___real_c1200000;
    (**(code **)**(undefined4 **)(this + 0x43f))(&local_38);
    puVar3 = (undefined4 *)(*(int *)(this + 0xbc) + 0x60);
    puVar4 = (undefined4 *)(*(int *)(this + 0x43f) + 8);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(uint *)(*(int *)(this + 0x43f) + 4) = *(uint *)(*(int *)(this + 0x43f) + 4) | 4;
    physMATH::AddEntCDTExclude(*(physMATH **)(this + 0x43f),(entENTITY *)this);
    return 1;
  }
  iVar1 = aiNPC_WR::StartPassivePhysics((aiNPC_WR *)this,param_1);
  return iVar1;
}

