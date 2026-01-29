
/* from: player_mp.cpp
   addr: 00426400 */

entENTITY * __fastcall plrPLAYER_MP::Create(animINST *param_1)

{
  plgsACTION *this;
  plgsACTION *ppVar1;
  int iVar2;
  
  this = (plgsACTION *)operator_new(0x313);
  if (this != (plgsACTION *)0x0) {
    plgsACTION::plgsACTION(this);
    *(undefined4 *)(this + 0x23b) = 0xffffffff;
    *(undefined4 *)(this + 0x29b) = 0;
    *(undefined4 *)(this + 0x2a3) = 0;
    *(undefined4 *)(this + 0x2a7) = 0;
    *(undefined4 *)(this + 0x2ab) = 0;
    *(undefined4 *)(this + 0x2b3) = 0xffffffff;
    *(undefined4 *)(this + 0x2b7) = 0;
    *(undefined4 *)(this + 699) = 0;
    *(undefined4 *)(this + 0x2bf) = 0;
    *(undefined4 *)(this + 0x2c3) = 0xffffffff;
    ppVar1 = this + 0x2c7;
    iVar2 = 3;
    do {
      *(undefined4 *)ppVar1 = 0;
      *(undefined4 *)(ppVar1 + 4) = 0;
      ppVar1 = ppVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plrPLAYER_COMMON_CFG::plrPLAYER_COMMON_CFG((plrPLAYER_COMMON_CFG *)(this + 0x2df));
    *(undefined4 *)(this + 0x2c3) = 0xffffffff;
    *(undefined4 *)(this + 0x2fb) = 0;
    *(undefined4 *)(this + 0x2ff) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 1;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: player_mp.cpp
   addr: 004264B0 */

int __thiscall
plrPLAYER_MP::ProcessMsg(plrPLAYER_MP *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = plrPLAYER_COMMON::ProcessMsg((plrPLAYER_COMMON *)this,param_1,param_2,param_3,param_4);
  return (uint)(iVar1 != 0);
}




/* from: player_mp.cpp
   addr: 004264E0 */

int __thiscall plrPLAYER_MP::ProcessINIT(plrPLAYER_MP *this)

{
  void *pvVar1;
  objOBJ *poVar2;
  int iVar3;
  plrPOWERUP_EMITTER *this_00;
  
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x1000;
  plrPLAYER_COMMON::ProcessINIT((plrPLAYER_COMMON *)this);
  pvVar1 = apCalloc(0xb,4);
  *(void **)(this + 0x2e7) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_wpn_holder_svl);
  **(undefined4 **)(this + 0x2e7) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_wpn_holder_clt);
  *(objOBJ **)(*(int *)(this + 0x2e7) + 4) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_wpn_holder_mcg);
  *(objOBJ **)(*(int *)(this + 0x2e7) + 0xc) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_wpn_holder_bsk);
  *(objOBJ **)(*(int *)(this + 0x2e7) + 8) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_wpn_holder_bsk);
  *(objOBJ **)(*(int *)(this + 0x2e7) + 0x18) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_wpn_holder_bsk);
  *(objOBJ **)(*(int *)(this + 0x2e7) + 0x1c) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_wpn_holder_bsk);
  *(objOBJ **)(*(int *)(this + 0x2e7) + 0x20) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_wpn_holder_bsk);
  *(objOBJ **)(*(int *)(this + 0x2e7) + 0x10) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_wpn_holder_bmb);
  *(objOBJ **)(*(int *)(this + 0x2e7) + 0x24) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_wpn_holder_bsk);
  *(objOBJ **)(*(int *)(this + 0x2e7) + 0x14) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_wpn_holder_bsk);
  *(objOBJ **)(*(int *)(this + 0x2e7) + 0x28) = poVar2;
  iVar3 = pshSHADOW_SYSTEM::AddExcludeList(gsSysProjShd,*(animINST **)(this + 0xbc),-1);
  *(int *)(this + 0x2eb) = iVar3;
  iVar3 = 0;
  do {
    if (*(int *)(iVar3 + *(int *)(this + 0x23f)) != 0) {
      pshSHADOW_SYSTEM::MergeShadowSources
                (gsSysProjShd,*(animINST **)(this + 0xbc),
                 *(animINST **)(*(int *)(iVar3 + *(int *)(this + 0x23f)) + 0xbc));
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x2c);
  *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 4;
  *(undefined4 *)(this + 0x2e3) = 1;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_CENTRE);
  *(objOBJ **)(this + 0x2ef) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_LowBACK);
  *(objOBJ **)(this + 0x2f3) = poVar2;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_UpBACK);
  *(objOBJ **)(this + 0x2f7) = poVar2;
  objOBJ::IsAncestor(*(objOBJ **)(this + 0x2ef),poVar2);
  objOBJ::IsAncestor(*(objOBJ **)(this + 0x2f3),*(objOBJ **)(this + 0x2f7));
  objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x2ef));
  objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x2f3));
  objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x2f7));
  this_00 = (plrPOWERUP_EMITTER *)operator_new(0x2c0);
  if (this_00 == (plrPOWERUP_EMITTER *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = plrPOWERUP_EMITTER::plrPOWERUP_EMITTER(this_00,0.1);
  }
  *(int *)(this + 0x2fb) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x800000;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
  return 1;
}




/* from: player_mp.cpp
   addr: 00426790 */

void __thiscall plrPLAYER_MP::ProcessTERM(plrPLAYER_MP *this)

{
  int iVar1;
  int iVar2;
  
  if (((byte)this[0x2a3] & 0x10) != 0) {
    msgSYSTEM::SendAll(&msgSystem,0x408,this,(msgADDR *)0x0);
  }
  if (*(undefined4 **)(this + 0x2fb) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x2fb))(1);
    *(undefined4 *)(this + 0x2fb) = 0;
  }
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 4;
    iVar1 = *(int *)(*(int *)(*(int *)(this + 0x23f) + -4 + iVar2) + 0xbc);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  } while (iVar2 < 0x2c);
  apFree(*(void **)(this + 0x2e7));
  *(undefined4 *)(this + 0x2e7) = 0;
  plrPLAYER_COMMON::ProcessTERM((plrPLAYER_COMMON *)this);
  return;
}




/* from: player_mp.cpp
   addr: 00426810 */

int __thiscall plrPLAYER_MP::ProcessINIT_LEVEL(plrPLAYER_MP *this)

{
  plrPLAYER_COMMON::ProcessINIT_LEVEL((plrPLAYER_COMMON *)this);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x25f));
  return 1;
}




/* from: player_mp.cpp
   addr: 00426850 */

int __thiscall plrPLAYER_MP::ProcessINIT_GAME(plrPLAYER_MP *this)

{
  int iVar1;
  
  plrPLAYER_COMMON::ProcessINIT_GAME((plrPLAYER_COMMON *)this);
  if (*(int *)(this + 0x94) == 2) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)(iVar1 + *(int *)(this + 0x23f)) + 0xa8))(1);
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x2c);
  }
  *(uint *)(this + 0x2a3) = *(uint *)(this + 0x2a3) & 0xffffffef;
  return 1;
}




/* from: player_mp.cpp
   addr: 004268A0 */

void __thiscall plrPLAYER_MP::ProcessTERM_GAME(plrPLAYER_MP *this)

{
  int iVar1;
  int iVar2;
  
  m3dTerm2DMatr();
  if (*(int *)(this + 0x94) == 1) {
    *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) & 0xfffffffb;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 4;
      iVar1 = *(int *)(*(int *)(this + 0x23f) + -4 + iVar2);
      *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & 0xfffffffb;
    } while (iVar2 < 0x2c);
  }
  return;
}




/* from: player_mp.cpp
   addr: 004268F0 */

void __thiscall plrPLAYER_MP::ProcessFRAME(plrPLAYER_MP *this)

{
  int *piVar1;
  int iVar2;
  objOBJ *poVar3;
  uint uVar4;
  plrPLAYER_MP *ppVar5;
  plrPLAYER_MP *ppVar6;
  undefined **local_80;
  char *local_7c;
  m3dV local_78 [12];
  m3dV local_6c [12];
  m3dV local_60 [12];
  objFILTER_PART_SOURCE local_54 [4];
  int local_50;
  int aiStack_48 [2];
  m3dMATR local_40 [64];
  
  if (((byte)this[0x2a3] & 0x10) == 0) {
    if (*(int *)(this + 0x94) == 1) {
      msgSYSTEM::SendAll(&msgSystem,0x407,this,(msgADDR *)0x0);
    }
    *(uint *)(this + 0x2a3) = *(uint *)(this + 0x2a3) | 0x10;
  }
  plrPLAYER_COMMON::ProcessFRAME((plrPLAYER_COMMON *)this);
  animINST::GetPos(*(animINST **)(this + 0xbc),local_6c);
  if (((byte)this[0xb4] & 0x10) == 0) {
    animSYSTEM_INST::AdvanceAnimation
              (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc)
               ,*(int *)(this + 0x2e3),gsElapsedTime);
  }
  AnimateProcedural(this);
  UpdateWeapon(this);
  if ((*(byte *)(*(int *)(this + 0xbc) + 4) & 1) == 0) {
    if (((byte)this[0x29b] & 2) != 0) goto LAB_004269c8;
    iVar2 = *(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) + 0xbc);
    uVar4 = *(uint *)(iVar2 + 4) & 0xfffffffe;
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) + 0xbc);
    uVar4 = *(uint *)(iVar2 + 4) | 1;
  }
  *(uint *)(iVar2 + 4) = uVar4;
LAB_004269c8:
  iVar2 = *(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) + 0xbc);
  uVar4 = *(uint *)(iVar2 + 4);
  if ((*(byte *)(*(int *)(this + 0xbc) + 4) & 2) == 0) {
    uVar4 = uVar4 & 0xfffffffd;
  }
  else {
    uVar4 = uVar4 | 2;
  }
  *(uint *)(iVar2 + 4) = uVar4;
  if (((*(byte *)(*(int *)(this + 0x2fb) + 8) & 1) != 0) ||
     (*(int *)(*(int *)(this + 0x2fb) + 0x48) != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(this + 0x2ff)) {
      ppVar6 = this + 0x303;
      ppVar5 = ppVar6;
      do {
        if ((*(byte *)(*(int *)ppVar5 + 8) & 3) != 0) {
          local_7c = s_Skin;
          local_80 = &objFILTER_HIDDEN_NAME::_vftable_;
          objFILTER_PART_SOURCE::objFILTER_PART_SOURCE(local_54,2);
          poVar3 = objFind(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),(objFILTER *)&local_80);
          objFind(poVar3,(objFILTER *)local_54);
          iVar2 = 0;
          *(int *)(this + 0x2ff) = local_50;
          if (0 < local_50) {
            do {
              piVar1 = aiStack_48 + iVar2;
              iVar2 = iVar2 + 1;
              *(int *)ppVar6 = *piVar1;
              ppVar6 = ppVar6 + 4;
            } while (iVar2 < *(int *)(this + 0x2ff));
          }
          break;
        }
        iVar2 = iVar2 + 1;
        ppVar5 = ppVar5 + 4;
      } while (iVar2 < *(int *)(this + 0x2ff));
    }
    if (0 < *(int *)(this + 0x2ff)) {
      animINST::Validate(*(animINST **)(this + 0xbc),0x204);
      objOBJ::GetOrigin(*(objOBJ **)(this + 0x303),local_78);
      objOBJ::GetAxisY(*(objOBJ **)(this + 0x303),local_60);
      m3dMATR::MakeLCS2WCS_VY(local_40,local_78,&m3dVUnitY);
      partEMITTER_PHYS::SetCS(*(partEMITTER_PHYS **)(this + 0x2fb),local_40);
    }
    partSetAreaEmissionObjList
              (*(partEMITTER_PHYS **)(this + 0x2fb),*(int *)(this + 0x2ff),(objOBJ **)(this + 0x303)
               ,100,local_78);
  }
  return;
}




/* from: player_mp.cpp
   addr: 00426B20 */

void __thiscall plrPLAYER_MP::ProcessCDT_FIREABLE(plrPLAYER_MP *this,dmgDAMAGE *param_1)

{
  objOBJ *this_00;
  int iVar1;
  uint uVar2;
  m3dV *pmVar3;
  m3dV local_c [12];
  
  plrPLAYER_COMMON::ProcessCDT_FIREABLE((plrPLAYER_COMMON *)this,param_1);
  this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_CENTRE);
  if (this_00 != (objOBJ *)0x0) {
    iVar1 = *(int *)(param_1 + 4);
    pmVar3 = (m3dV *)0x0;
    if (((iVar1 == 0) || (iVar1 == 2)) || (iVar1 == 3)) {
      pmVar3 = (m3dV *)(param_1 + 0x10);
    }
    objOBJ::GetOrigin(this_00,local_c);
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 != 6) {
        if (((iVar1 != 0) && (iVar1 != 1)) && ((iVar1 != 2 && ((iVar1 != 3 && (iVar1 != 8)))))) {
          return;
        }
        wrsfxStartBlood(0,*(uint *)(this + 0x29b) & 2,local_c,(m3dV *)0x0,(m3dV *)(this + 0xe0),
                        pmVar3);
        return;
      }
      uVar2 = *(uint *)(this + 0x29b) & 2;
      iVar1 = 1;
    }
    else {
      if (((byte)this[0x29b] & 2) != 0) {
        return;
      }
      uVar2 = 0;
      iVar1 = 2;
    }
    wrsfxStartBlood(iVar1,uVar2,local_c,(m3dV *)0x0,(m3dV *)(this + 0xe0),pmVar3);
  }
  return;
}




/* from: player_mp.cpp
   addr: 00426C20 */

void __thiscall plrPLAYER_MP::ProcessMP_NOTIFY(plrPLAYER_MP *this,gsEVENT *param_1)

{
  undefined4 *puVar1;
  objOBJ *poVar2;
  int iVar3;
  plrPLAYER_MP *ppVar4;
  txmTEXTURE *ptVar5;
  undefined **local_1c;
  char *local_18;
  objFILTER_PART_SOURCE local_14 [4];
  int local_10;
  undefined4 auStack_8 [2];
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
    (**(code **)(*(int *)this + 0xfc))(*(undefined4 *)(param_1 + 8),0);
    plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
    return;
  case 3:
    (**(code **)(*(int *)this + 0x100))(*(undefined4 *)(param_1 + 8));
    plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
    return;
  case 4:
    wpnWEAPON::SetAmmo(*(wpnWEAPON **)(*(int *)(this + 0x23f) + *(int *)(param_1 + 8) * 4),
                       *(float *)(param_1 + 0xc));
    if (*(int *)(param_1 + 0x10) != -2) {
      *(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(param_1 + 8) * 4) + 399) =
           *(int *)(param_1 + 0x10);
      plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
      return;
    }
    break;
  case 5:
    *(undefined4 *)(this + 0x2a7) = *(undefined4 *)(param_1 + 8);
    plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
    return;
  case 6:
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined4 *)(this + *(int *)(param_1 + 8) * 8 + 0x2c7) = 0;
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x2fb));
      plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
      return;
    }
    *(undefined4 *)(this + *(int *)(param_1 + 8) * 8 + 0x2c7) = 2;
    ptVar5 = pTexPwrQd;
    if ((*(int *)(param_1 + 8) == 0) || (ptVar5 = pTexPwrUa, *(int *)(param_1 + 8) == 1)) {
      partEMITTER_PHYS::SetTexture(*(partEMITTER_PHYS **)(this + 0x2fb),ptVar5);
      local_18 = s_Skin;
      local_1c = &objFILTER_HIDDEN_NAME::_vftable_;
      objFILTER_PART_SOURCE::objFILTER_PART_SOURCE(local_14,2);
      poVar2 = objFind(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),(objFILTER *)&local_1c);
      objFind(poVar2,(objFILTER *)local_14);
      iVar3 = 0;
      *(int *)(this + 0x2ff) = local_10;
      if (0 < local_10) {
        ppVar4 = this + 0x303;
        do {
          puVar1 = auStack_8 + iVar3;
          iVar3 = iVar3 + 1;
          *(undefined4 *)ppVar4 = *puVar1;
          ppVar4 = ppVar4 + 4;
        } while (iVar3 < *(int *)(this + 0x2ff));
      }
      iVar3 = partSetAreaEmissionObjList
                        (*(partEMITTER_PHYS **)(this + 0x2fb),*(int *)(this + 0x2ff),
                         (objOBJ **)(this + 0x303),100,(m3dV *)0x0);
      if (iVar3 != 0) {
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x2fb));
        plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
        return;
      }
    }
    break;
  case 7:
    pwpWEAPON::Recharge(*(pwpWEAPON **)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4));
    plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
    return;
  case 8:
    *(undefined4 *)(this + 0x2b7) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 699) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x2bf) = *(undefined4 *)(param_1 + 0x10);
    plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
    return;
  case 9:
    (**(code **)(*(int *)this + 0x114))(*(undefined4 *)(param_1 + 8));
    plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
    return;
  case 0xb:
    *(undefined4 *)(this + 0x2ab) = *(undefined4 *)(param_1 + 8);
    break;
  case 0xffffff9d:
    *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf);
    *(undefined4 *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) + 0xf8) =
         *(undefined4 *)(param_1 + 0x13);
    (**(code **)(*(int *)this + 0x11c))(param_1);
    plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
    return;
  case 0xffffff9f:
    if (*(float *)(param_1 + 8) < *(float *)(this + 0xcc)) {
      *(uint *)(this + 0x2a3) = *(uint *)(this + 0x2a3) | 0x20;
    }
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 8);
    plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
    return;
  case 0xffffffa0:
    (**(code **)(*(int *)this + 0x108))(param_1);
    plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
    return;
  }
  plrPLAYER_COMMON::ProcessMP_NOTIFY((plrPLAYER_COMMON *)this,param_1);
  return;
}




/* from: player_mp.cpp
   addr: 00426FB0 */

void __thiscall
plrPLAYER_MP::ProcessMP_CLIENT_READY(plrPLAYER_MP *this,gsMSG_MP_CLIENT_READY *param_1)

{
  plrPLAYER_COMMON::ProcessMP_CLIENT_READY((plrPLAYER_COMMON *)this,param_1);
  if ((param_1 != (gsMSG_MP_CLIENT_READY *)0x0) && (*(int *)(param_1 + 8) == 0)) {
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
    return;
  }
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
  return;
}




/* from: player_mp.cpp
   addr: 00427010 */

void __thiscall plrPLAYER_MP::SetDefaultValues(plrPLAYER_MP *this)

{
  plrPLAYER_COMMON::SetDefaultValues((plrPLAYER_COMMON *)this);
  partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x2fb));
  return;
}




/* from: player_mp.cpp
   addr: 00427030 */

void __thiscall plrPLAYER_MP::SetCurWpn(plrPLAYER_MP *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_1 == -1) {
    puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) + 0xbc)
                     + 4);
    *puVar1 = *puVar1 | 1;
    return;
  }
  if (((param_1 != *(int *)(this + 0x243)) &&
      (iVar2 = *(int *)(*(int *)(this + 0x23f) + param_1 * 4), iVar2 != 0)) &&
     ((*(byte *)(iVar2 + 0x14f) & 1) != 0)) {
    iVar2 = (**(code **)(*(int *)this + 0x78))();
    if (iVar2 == 0) {
      plrPLAYER_COMMON::SetCurWpn((plrPLAYER_COMMON *)this,param_1,param_2);
      iVar2 = *(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4);
      if (iVar2 != 0) {
        puVar1 = (uint *)(*(int *)(iVar2 + 0xbc) + 4);
        *puVar1 = *puVar1 | 1;
      }
      *(int *)(this + 0x243) = param_1;
      iVar2 = *(int *)(*(int *)(*(int *)(this + 0x23f) + param_1 * 4) + 0xbc);
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffffe;
      if ((*(byte *)(*(int *)(this + 0xbc) + 4) & 2) != 0) {
        puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) +
                                  0xbc) + 4);
        *puVar1 = *puVar1 | 2;
        return;
      }
      puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) +
                                0xbc) + 4);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
  }
  return;
}




/* from: player_mp.cpp
   addr: 00427120 */

void __thiscall plrPLAYER_MP::StartDeath(plrPLAYER_MP *this,plrEV_START_DEATH *param_1)

{
  int iVar1;
  
  plrPLAYER_COMMON::StartDeath((plrPLAYER_COMMON *)this,param_1);
  iVar1 = *(int *)(param_1 + 0xc);
  if ((((iVar1 == 4) || (iVar1 == 5)) || (iVar1 == 7)) || (iVar1 == 10)) {
    (**(code **)(*(int *)this + 0xfc))(0xffffffff,0);
  }
  return;
}




/* from: player_mp.cpp
   addr: 00427160 */

int __thiscall plrPLAYER_MP::PickWeapon(plrPLAYER_MP *this,int param_1,float param_2)

{
  plrPLAYER_COMMON::PickWeapon((plrPLAYER_COMMON *)this,param_1,param_2);
  return 1;
}




/* from: player_mp.cpp
   addr: 00427180 */

int __thiscall plrPLAYER_MP::PickAmmo(plrPLAYER_MP *this,int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = plrPLAYER_COMMON::PickAmmo((plrPLAYER_COMMON *)this,param_1,param_2);
  return (uint)(iVar1 != 0);
}




/* from: player_mp.cpp
   addr: 004271A0 */

int __thiscall plrPLAYER_MP::PickHealth(plrPLAYER_MP *this,float param_1)

{
  int iVar1;
  
  iVar1 = plrPLAYER_COMMON::PickHealth((plrPLAYER_COMMON *)this,param_1);
  return (uint)(iVar1 != 0);
}




/* from: player_mp.cpp
   addr: 004271C0 */

int __thiscall plrPLAYER_COMMON::PickKey(plrPLAYER_COMMON *this)

{
  *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x1000;
  return 1;
}




/* from: player_mp.cpp
   addr: 004271E0 */

void __thiscall plrPLAYER_MP::SetAnimParams(plrPLAYER_MP *this,plrEV_UPD_STATE *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  uVar1 = *(uint *)(this + 0x29f);
  *(int *)(this + 0x2e3) = (int)(char)param_1[0xc];
  *(undefined4 *)(this + 0x24b) = *(undefined4 *)(param_1 + 0x17);
  *(undefined4 *)(this + 0x25f) = *(undefined4 *)(param_1 + 0x1b);
  *(undefined4 *)(this + 0x267) = *(undefined4 *)(param_1 + 0x1f);
  *(undefined4 *)(this + 0x263) = 0;
  *(uint *)(this + 0x29f) = uVar1 & 0xfffffff0;
  *(uint *)(this + 0x29f) = (int)(char)param_1[0xe] | uVar1 & 0xfffffff0;
  objOBJ::SetConstColor(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),*(ulong *)(param_1 + 0x23),2,8);
  objOBJ::SetConstColor
            (*(objOBJ **)
              (*(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) + 0xbc) + 0x10
              ),*(ulong *)(param_1 + 0x23),2,8);
  iVar2 = 0;
  do {
    if ((1 << (bVar3 & 0x1f) & (int)(char)param_1[0xd] >> 4) != 0) {
      animCHN::Start((animCHN *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0xe8) + 4) + iVar2));
    }
    iVar2 = iVar2 + 0x18;
    bVar3 = bVar3 + 1;
  } while (iVar2 < 0x30);
  return;
}




/* from: player_mp.cpp
   addr: 004272B0 */

void __thiscall plrPLAYER_MP::UpdateWeapon(plrPLAYER_MP *this)

{
  uint uVar1;
  animINST *this_00;
  int iVar2;
  
  if (((*(uint *)(*(int *)(this + 0xbc) + 4) & 1) == 0) &&
     ((((uVar1 = *(uint *)(*(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) +
                                   0xbc) + 4), (uVar1 & 0x100000) == 0 || ((uVar1 & 0x2000000) == 0)
        ) || ((*(uint *)(*(int *)(this + 0xbc) + 4) & 0x2000000) == 0)) ||
      ((gsSysMirror == (mrrMIRROR_SYSTEM *)0x0 ||
       (iVar2 = mrrMIRROR_SYSTEM::GetNActive(gsSysMirror), iVar2 != 0)))))) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    this_00 = *(animINST **)(*(int *)(*(int *)(this + 0x243) * 4 + *(int *)(this + 0x23f)) + 0xbc);
    animINST::Transform(this_00,(m3dMATR *)
                                (*(int *)(*(int *)(this + 0x2e7) + *(int *)(this + 0x243) * 4) +
                                0x3c),0);
    switch(*(undefined4 *)(this + 0x243)) {
    case 0:
      animINST::Scale(this_00,5.0,5.0,5.0,0);
      return;
    case 1:
      animINST::Scale(this_00,1.4,1.4,1.4,0);
      animINST::Translate(this_00,0.0,1.0,-0.2,1);
      return;
    case 2:
      animINST::Scale(this_00,1.25,1.25,1.25,0);
      animINST::Translate(this_00,0.0,-1.0,-1.0,1);
      return;
    case 3:
      animINST::Scale(this_00,7.5,7.5,7.5,0);
      animINST::Translate(this_00,0.05,-0.5,-7.3,1);
      return;
    case 4:
      animINST::Scale(this_00,1.0,1.0,1.0,0);
      animINST::Translate(this_00,-0.5,-1.9,0.0,1);
      return;
    case 5:
      animINST::Scale(this_00,3.3000002,3.3000002,3.3000002,0);
      animINST::Translate(this_00,-0.1,-1.9,-0.8,1);
      return;
    case 6:
      animINST::Scale(this_00,0.14,0.14,0.14,0);
      animINST::Translate(this_00,0.05,-2.5,-0.5,1);
      return;
    case 7:
      animINST::Scale(this_00,0.33,0.33,0.33,0);
      animINST::Translate(this_00,0.3,-2.5,-0.7,1);
      return;
    case 8:
      animINST::Scale(this_00,1.0,1.0,1.0,0);
      animINST::Translate(this_00,-0.1,-1.5,-4.0,1);
      return;
    case 9:
      animINST::Scale(this_00,1.55,1.55,1.55,0);
      return;
    case 10:
      animINST::Scale(this_00,1.4,1.4,1.4,0);
      animINST::Translate(this_00,-0.5,-1.0,0.3,1);
    }
  }
  return;
}




/* from: player_mp.cpp
   addr: 00427580 */

void __thiscall plrPLAYER_MP::SetupGhostWpnState(plrPLAYER_MP *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 4;
    iVar1 = *(int *)(*(int *)(*(int *)(this + 0x23f) + -4 + iVar2) + 0xbc);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x100000;
  } while (iVar2 < 0x2c);
  return;
}




/* from: player_mp.cpp
   addr: 004275B0 */

void __thiscall plrPLAYER_MP::ProcessPowerup(plrPLAYER_MP *this,int param_1,void *param_2)

{
  if (param_1 == 0) {
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) | 0x400000;
    (**(code **)(*(int *)this + 0xfc))(0xffffffff,0);
  }
  else if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*(int *)this + 0xe0))(*param_2);
    *(uint *)(this + 0x29b) = *(uint *)(this + 0x29b) & 0xffbfffff;
    return;
  }
  return;
}




/* from: player_mp.cpp
   addr: 00427610 */

int __thiscall plrPLAYER_MP::GetFloorInfo(plrPLAYER_MP *this,cdtINFO *param_1)

{
  int iVar1;
  
  if (*(int *)(gsSysMP + 0x28) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00427623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(int *)plrPlayer + 0x40))();
    return iVar1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: player_mp.cpp
   addr: 00427630 */

plrPOWERUP_EMITTER * __thiscall
plrPOWERUP_EMITTER::plrPOWERUP_EMITTER(plrPOWERUP_EMITTER *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,300.0,1.2);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.9,0.3);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_40400000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.295,178.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,600.0);
  fVar2 = param_1 * ___real_41a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xe0) = fVar2;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 8;
  *(uint *)(this + 4) = uVar1 | 9;
  *(uint *)(this + 4) = uVar1 | 0x2009;
  *(uint *)(this + 4) = uVar1 | 0xa009;
  *(uint *)(this + 4) = uVar1 | 0x400a009;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.2);
  return this;
}




/* from: player_mp.cpp
   addr: 004277F0 */

void * __thiscall plrPLAYER_MP::_vector_deleting_destructor_(plrPLAYER_MP *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  plgsACTION::~plgsACTION((plgsACTION *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


