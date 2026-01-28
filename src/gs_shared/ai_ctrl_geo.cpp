
/* from: gs_shared:ai_ctrl_geo.cpp
   addr: 005336A0 */

void __thiscall aiNPC::SettleSurface(aiNPC *this)

{
  uint uVar1;
  int iVar2;
  m3dV amStack_28 [12];
  m3dV amStack_1c [12];
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_8 = 0;
  local_c = 2;
  local_4 = 0;
  local_10 = &entCDT_REFINE_EXCL::_vftable_;
  uVar1 = (**(code **)(*(int *)this + 0x78))();
  local_4 = local_4 | uVar1;
  animINST::GetPos(*(animINST **)(this + 0xbc),amStack_1c);
  iVar2 = scnSCENE::FloorPlace
                    (gsScenePtr,amStack_1c,DAT_005dd430,amStack_28,0.55,0.0,0,(cdtREFINE *)&local_10
                     ,(cdtINFO *)(this + 0x453));
  if (iVar2 != 0) {
    animINST::Translate(*(animINST **)(this + 0xbc),amStack_28,0);
    return;
  }
  iVar2 = scnSCENE::FloorPlace
                    (gsScenePtr,amStack_1c,DAT_005dd430,amStack_28,3.55,0.0,0,(cdtREFINE *)&local_10
                     ,(cdtINFO *)(this + 0x453));
  if (iVar2 != 0) {
    animINST::Translate(*(animINST **)(this + 0xbc),amStack_28,0);
  }
  return;
}




/* from: gs_shared:ai_ctrl_geo.cpp
   addr: 00533780 */

void __thiscall aiNPC::FillToPlayerCoords(aiNPC *this)

{
  ulonglong uVar1;
  undefined8 extraout_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  m3dV amStack_10 [4];
  m3dV local_c [12];
  
  GetPosRooted(this,(m3dV *)&local_24);
  animINST::GetDir(*(animINST **)(this + 0xbc),local_c);
  (**(code **)(*(int *)this + 0xe4))(&local_18);
  fStack_34 = fStack_1c - fStack_28;
  fStack_30 = local_18 - local_24;
  fStack_2c = fStack_14 - fStack_20;
  fVar6 = fStack_34 * fStack_34 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
  if (m3dSimdType == 0) {
    fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar5 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar4 = auVar5._0_4_;
    fVar6 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar4 * fVar4) * fVar6;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)fVar6;
    uVar2 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar1);
    uVar3 = PackedFloatingMUL(uVar2,uVar2);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
    uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
    uVar2 = PackedFloatingMUL(uVar2,uVar1);
    fVar6 = (float)uVar2;
    FastExitMediaState();
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  *(float *)(this + 0x3cf) = fVar6;
  fVar6 = m3xzAngleVector((m3dV *)&fStack_34,amStack_10);
  *(float *)(this + 0x3d3) = fVar6;
  *(float *)(this + 0x3d7) = ABS(fVar6);
  *(undefined4 *)(this + 0x50f) =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90) + 0x84 +
        *(int *)(*(int *)(this + 0xbc) + 0xe0) * 0x88);
  return;
}




/* from: gs_shared:ai_ctrl_geo.cpp
   addr: 005338E0 */

void __thiscall aiNPC::GetWpnTip(aiNPC *this,m3dV *param_1)

{
  animINST *this_00;
  
  this_00 = *(animINST **)(this + 0xbc);
  if (*(int *)(this_00 + 0x10) != 0) {
    animINST::GetCenter(this_00,param_1);
    return;
  }
  animINST::GetPos(this_00,param_1);
  return;
}




/* from: gs_shared:ai_ctrl_geo.cpp
   addr: 00533910 */

int __thiscall aiNPC::IsPivotUsable(aiNPC *this)

{
  if ((*(int *)(this + 0x167) != 0) && ((*(byte *)(*(int *)(this + 0x167) + 8) & 4) == 0)) {
    return 1;
  }
  return 0;
}




/* from: gs_shared:ai_ctrl_geo.cpp
   addr: 00533930 */

void __thiscall aiNPC::SetDirection(aiNPC *this,m3dV *param_1)

{
  animINST *this_00;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  m3dClampVector_A((m3dV *)(this + 0x3c3),param_1,gsElapsedTime * *(float *)(this + 0x15b),local_18,
                   (m3dV *)0x0,0);
  this_00 = *(animINST **)(this + 0xbc);
  if ((*(byte *)(*(int *)(*(int *)(this_00 + 0x138) + 0x90) + 0x84 + *(int *)(this_00 + 0xe0) * 0x88
                ) & 2) == 0) {
    animINST::SetDir_XZ(this_00,local_18);
  }
  else if ((*(int *)(this + 0x167) != 0) && ((*(byte *)(*(int *)(this + 0x167) + 8) & 4) == 0)) {
    animINST::Validate(this_00,4);
    m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x167) + 0x3c),local_c);
    animINST::SetDir_XZ_UsePivot(*(animINST **)(this + 0xbc),local_18,local_c);
    return;
  }
  return;
}




/* from: gs_shared:ai_ctrl_geo.cpp
   addr: 00533A00 */

void __thiscall aiNPC::Colorize(aiNPC *this,int param_1)

{
  undefined **local_24;
  undefined4 local_20;
  undefined4 local_1c;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  local_1c = 0;
  local_24 = &cdtREFINE::_vftable_;
  local_20 = 2;
  if ((gsAppState & 0x800U) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_18);
    scnSCENE::FloorPlace
              (gsScenePtr,local_18,30.0,local_c,1.0,1.0,0,(cdtREFINE *)&local_24,
               (cdtINFO *)(this + 0x453));
  }
  if ((0 < *(int *)(this + 0x48b)) && (param_1 != 0)) {
    *(int *)(this + 0x48b) = *(int *)(this + 0x48b) + -1;
    return;
  }
  *(int *)(this + 0x48b) = *(int *)(this + 0x487) + -1;
  gsEffApplyLMChar((entENTITY *)this,(cdtINFO *)(this + 0x453),param_1);
  return;
}




/* from: gs_shared:ai_ctrl_geo.cpp
   addr: 00533AB0 */

int __thiscall aiCDT_REFINE::IsInclInst(aiCDT_REFINE *this,animINST *param_1)

{
  animINST *paVar1;
  int iVar2;
  
  paVar1 = param_1;
  iVar2 = aiIsNPCDead(*(entENTITY **)(param_1 + 0x13c),(int *)0x0);
  if (iVar2 != 0) {
    return 0;
  }
  aiIsNPCDead(*(entENTITY **)(*(int *)(this + 8) + 0x13c),(int *)&param_1);
  if (((param_1 != (animINST *)0x0) && (iVar2 = *(int *)(paVar1 + 0x13c), iVar2 != 0)) &&
     (*(int *)(iVar2 + 0x14) == 0x504c5952)) {
    return 0;
  }
  iVar2 = entCDT_REFINE_EXCL::IsInclInst((entCDT_REFINE_EXCL *)this,paVar1);
  return iVar2;
}




/* from: gs_shared:ai_ctrl_geo.cpp
   addr: 00533B20 */

int __thiscall aiCDT_REFINE::IsInclObj(aiCDT_REFINE *this,objOBJ *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  if (*(char **)(param_1 + 0x18) != (char *)0x0) {
    pcVar2 = strstr(*(char **)(param_1 + 0x18),s__aic);
    if (pcVar2 != (char *)0x0) {
      return 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((((uVar1 & 0x1f) == 0) || ((uVar1 & 0x10000) != 0)) && ((uVar1 & 0x40000) == 0)) {
    return 1;
  }
  return 0;
}




/* from: gs_shared:ai_ctrl_geo.cpp
   addr: 00533B70 */

void __thiscall aiCDT_REFINE::Init(aiCDT_REFINE *this,aiCDT_REFINE *param_1)

{
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return;
}




/* from: gs_shared:ai_ctrl_geo.cpp
   addr: 00533B90 */

void __thiscall aiNPC::GetPrevPositions(aiNPC *this)

{
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x40f));
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x3c3));
  GetPosRooted(this,(m3dV *)(this + 0x41b));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_geo.cpp
   addr: 00533BD0 */

int __thiscall aiNPC::IsStayOn(aiNPC *this,animINST *param_1)

{
  if (((*(animINST **)(this + 0x457) == param_1) && (*(float *)(this + 0x473) < ___real_3d4ccccd))
     && (*(float *)(this + 0x437) < _DAT_005dd42c)) {
    return 1;
  }
  return 0;
}

