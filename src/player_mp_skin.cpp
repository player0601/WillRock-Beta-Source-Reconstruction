
/* from: player_mp_skin.cpp
   addr: 00427820 */

void __thiscall plrPLAYER_MP::SelectSkin(plrPLAYER_MP *this,int param_1)

{
  byte bVar1;
  objOBJ *poVar2;
  plrPLAYER_SKIN **pppVar3;
  int iVar4;
  int iVar5;
  plrPLAYER_SKIN **pppVar6;
  int iVar7;
  plrPLAYER_SKIN **pppVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  if ((param_1 < 0) || (iVar5 = param_1, 5 < param_1)) {
    iVar5 = 0;
  }
  objOBJ::SetStateProcNo
            (*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  if (*(int *)(this + 0x2b3) != -1) {
    iVar4 = *(int *)(this + 0x23b);
    iVar7 = 0;
    if (0 < (int)(&arrayTeam)[iVar4 * 0xd]) {
      do {
        objOBJ::ReplaceTex(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),
                           (&PTR_s_WillRock01_r_005ef044)
                           [iVar4 * 0xd + *(int *)(this + 0x2b3) * 4 + iVar7],
                           (&PTR_s_WillRock01_005ef034)[iVar4 * 0xd + iVar7]);
        iVar4 = *(int *)(this + 0x23b);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(&arrayTeam)[iVar4 * 0xd]);
    }
  }
  iVar4 = *(int *)(this + 0x23b);
  if (((iVar4 != -1) && (iVar4 != iVar5)) && (iVar7 = 0, 0 < (int)(&DAT_005eec60)[iVar4 * 0x2e])) {
    do {
      iVar4 = iVar7 + iVar4 * 0x2e;
      objOBJ::ReplaceTex(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),(char *)(&DAT_005eec74)[iVar4],
                         (char *)(&DAT_005eec64)[iVar4]);
      iVar4 = *(int *)(this + 0x23b);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(&DAT_005eec60)[iVar4 * 0x2e]);
  }
  *(int *)(this + 0x23b) = iVar5;
  param_1 = 0;
  pppVar6 = &arraySkin;
  do {
    poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),(char *)pppVar6);
    pppVar3 = pppVar6;
    pppVar8 = &arraySkin + iVar5 * 0x2e;
    if (param_1 == *(int *)(this + 0x23b)) {
LAB_0042799d:
      objOBJ::SetStateProcNo(poVar2,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    else {
      do {
        bVar1 = *(byte *)pppVar3;
        bVar10 = bVar1 < *(byte *)pppVar8;
        if (bVar1 != *(byte *)pppVar8) {
LAB_00427987:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0042798c;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)pppVar3 + 1);
        bVar10 = bVar1 < *(byte *)((int)pppVar8 + 1);
        if (bVar1 != *(byte *)((int)pppVar8 + 1)) goto LAB_00427987;
        pppVar3 = (plrPLAYER_SKIN **)((int)pppVar3 + 2);
        pppVar8 = (plrPLAYER_SKIN **)((int)pppVar8 + 2);
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0042798c:
      if (iVar4 == 0) goto LAB_0042799d;
      objOBJ::SetStateProcYes(poVar2,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    pppVar6 = pppVar6 + 0x2e;
    param_1 = param_1 + 1;
    if (0x5ef02f < (int)pppVar6) {
      iVar4 = 0;
      if (0 < (int)(&DAT_005eec84)[iVar5 * 0x2e]) {
        puVar9 = &DAT_005eec88 + iVar5 * 0x2e;
        do {
          poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),(char *)*puVar9);
          if (poVar2 != (objOBJ *)0x0) {
            objOBJ::SetStateProcYes(poVar2,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
          }
          iVar4 = iVar4 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar4 < (int)(&DAT_005eec84)[iVar5 * 0x2e]);
      }
      iVar4 = 0;
      if (0 < (int)(&DAT_005eec60)[iVar5 * 0x2e]) {
        puVar9 = &DAT_005eec64 + iVar5 * 0x2e;
        do {
          objOBJ::ReplaceTex(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),(char *)*puVar9,
                             (char *)puVar9[4]);
          iVar4 = iVar4 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar4 < (int)(&DAT_005eec60)[iVar5 * 0x2e]);
      }
      return;
    }
  } while( true );
}




/* from: player_mp_skin.cpp
   addr: 00427A40 */

void __thiscall plrPLAYER_MP::SetTeam(plrPLAYER_MP *this,int param_1)

{
  plrPLAYER_TEAM **pppVar1;
  int iVar2;
  int iVar3;
  plrPLAYER_TEAM **pppVar4;
  undefined **ppuVar5;
  int local_4;
  
  if ((param_1 < 0) || (1 < param_1)) {
    param_1 = 0;
  }
  iVar2 = *(int *)(this + 0x23b);
  pppVar1 = &arrayTeam + iVar2 * 0xd;
  if ((*(int *)(this + 0x2b3) != -1) && (iVar3 = 0, 0 < (int)*pppVar1)) {
    ppuVar5 = &PTR_s_WillRock01_005ef034 + iVar2 * 0xd;
    do {
      objOBJ::ReplaceTex(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),
                         (&PTR_s_WillRock01_r_005ef044)
                         [iVar2 * 0xd + iVar3 + *(int *)(this + 0x2b3) * 4],*ppuVar5);
      iVar3 = iVar3 + 1;
      ppuVar5 = ppuVar5 + 1;
    } while (iVar3 < (int)*pppVar1);
  }
  local_4 = 0;
  if (0 < (int)*pppVar1) {
    ppuVar5 = &PTR_s_WillRock01_005ef034 + iVar2 * 0xd;
    pppVar4 = pppVar1 + param_1 * 4 + 5;
    do {
      objOBJ::ReplaceTex(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),*ppuVar5,(char *)*pppVar4);
      local_4 = local_4 + 1;
      pppVar4 = pppVar4 + 1;
      ppuVar5 = ppuVar5 + 1;
    } while (local_4 < (int)*pppVar1);
  }
  plrPLAYER_COMMON::SetTeam((plrPLAYER_COMMON *)this,param_1);
  return;
}

