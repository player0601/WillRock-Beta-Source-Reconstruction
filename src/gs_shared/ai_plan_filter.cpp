
/* from: gs_shared:ai_plan_filter.cpp
   addr: 00540CE0 */

void __thiscall aiPLANNER::GatherPlrInformation(aiPLANNER *this)

{
  int iVar1;
  uint uVar2;
  entENTITY *peVar3;
  
  if ((aiaArenaDomList == (aiaDOMAIN_LIST_ARENA *)0x0) ||
     (iVar1 = aiaDOMAIN_LIST_ARENA::IsPlrInArena(aiaArenaDomList), iVar1 == 0)) {
    uVar2 = *(uint *)(this + 0x34c) & 0xfffffffe;
  }
  else {
    uVar2 = *(uint *)(this + 0x34c) | 1;
  }
  *(uint *)(this + 0x34c) = uVar2;
  *(undefined4 *)(this + 0x354) = 0;
  for (peVar3 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,(entENTITY *)0x0); peVar3 != (entENTITY *)0x0;
      peVar3 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,peVar3)) {
    iVar1 = (**(code **)(*(int *)peVar3 + 0x78))();
    if (iVar1 == 0) {
      *(entENTITY **)(this + *(int *)(this + 0x354) * 4 + 0x358) = peVar3;
      *(int *)(this + 0x354) = *(int *)(this + 0x354) + 1;
    }
  }
  if (((plgsPlayer != (plgsACTION *)0x0) &&
      (iVar1 = (**(code **)(*(int *)plgsPlayer + 0x78))(), iVar1 == 0)) &&
     (*(int *)(this + 0x354) == 0)) {
    *(plgsACTION **)(this + 0x358) = plgsPlayer;
    *(int *)(this + 0x354) = *(int *)(this + 0x354) + 1;
  }
  return;
}




/* from: gs_shared:ai_plan_filter.cpp
   addr: 00540DA0 */

void __thiscall aiPLANNER::StartFilteringPlayers(aiPLANNER *this)

{
  int iVar1;
  int iVar2;
  aiPLANNER *paVar3;
  
  iVar1 = 0;
  *(int *)(this + 0x398) = *(int *)(this + 0x354);
  if (0 < *(int *)(this + 0x354)) {
    paVar3 = this + 0x39c;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)paVar3 = *(undefined4 *)(paVar3 + -0x44);
      paVar3 = paVar3 + 4;
    } while (iVar1 < *(int *)(this + 0x398));
    if (0xf < iVar1) {
      return;
    }
  }
  paVar3 = this + iVar1 * 4 + 0x39c;
  for (iVar2 = 0x10 - iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)paVar3 = 0;
    paVar3 = paVar3 + 4;
  }
  return;
}




/* from: gs_shared:ai_plan_filter.cpp
   addr: 00540DF0 */

void __thiscall aiPLANNER::SortFilteredPlayersByDist(aiPLANNER *this,aiNPC *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  aiPLANNER *paVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float fStack_48;
  float afStack_44 [17];
  
  if ((param_1 != (aiNPC *)0x0) && (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0)) {
    animINST::GetPos(*(animINST **)(param_1 + 0xbc),(m3dV *)&local_58);
    iVar3 = 0;
    if (0 < *(int *)(this + 0x398)) {
      paVar4 = this + 0x39c;
      do {
        (**(code **)(**(int **)paVar4 + 0x68))(&local_4c);
        fVar8 = (local_58 - local_4c) * (local_58 - local_4c) +
                (fStack_54 - fStack_48) * (fStack_54 - fStack_48) +
                (fStack_50 - afStack_44[0]) * (fStack_50 - afStack_44[0]);
        if (m3dSimdType == 0) {
          fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
          fVar9 = auVar10._0_4_;
          param_1 = (aiNPC *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9)
                             * fVar8);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar5 = (ulonglong)(uint)fVar8;
          uVar6 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar5);
          uVar7 = PackedFloatingMUL(uVar6,uVar6);
          uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
          uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
          uVar6 = PackedFloatingMUL(uVar6,uVar5);
          param_1 = (aiNPC *)uVar6;
          FastExitMediaState();
        }
        else {
          param_1 = (aiNPC *)SQRT(fVar8);
        }
        iVar2 = *(int *)(this + 0x398);
        iVar3 = iVar3 + 1;
        afStack_44[iVar3] = (float)param_1;
        paVar4 = paVar4 + 4;
      } while (iVar3 < iVar2);
    }
    iVar3 = 1;
    if (1 < *(int *)(this + 0x398)) {
      do {
        iVar2 = 0;
        if (0 < iVar3) {
          paVar4 = this + 0x3a0;
          do {
            if (afStack_44[iVar2 + 2] < afStack_44[iVar2 + 1]) {
              fVar8 = afStack_44[iVar2 + 2];
              uVar1 = *(undefined4 *)(paVar4 + -4);
              afStack_44[iVar2 + 2] = afStack_44[iVar2 + 1];
              afStack_44[iVar2 + 1] = fVar8;
              *(undefined4 *)(paVar4 + -4) = *(undefined4 *)paVar4;
              *(undefined4 *)paVar4 = uVar1;
            }
            iVar2 = iVar2 + 1;
            paVar4 = paVar4 + 4;
          } while (iVar2 < iVar3);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 0x398));
    }
  }
  return;
}




/* from: gs_shared:ai_plan_filter.cpp
   addr: 00540F80 */

int __thiscall aiPLANNER::HaveAChoiceFromFiltered(aiPLANNER *this,entENTITY **param_1)

{
  if (1 < *(int *)(this + 0x398)) {
    return 1;
  }
  *param_1 = *(entENTITY **)(this + 0x39c);
  return 0;
}




/* from: gs_shared:ai_plan_filter.cpp
   addr: 00540FB0 */

plgsACTION * __thiscall aiPLANNER::GetFilteredByIdx(aiPLANNER *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x398) - 1U;
  if (param_1 < (int)(*(int *)(this + 0x398) - 1U)) {
    uVar1 = param_1;
  }
  return *(plgsACTION **)(this + (uVar1 & ((int)uVar1 < 0) - 1) * 4 + 0x39c);
}

