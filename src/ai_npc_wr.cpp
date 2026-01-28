
/* from: ai_npc_wr.cpp
   addr: 0044A720 */

void __thiscall aiNPC_WR::ParseNameClass(aiNPC_WR *this)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = s_;
  if (*(char **)(*(int *)(this + 0xbc) + 0x1c) != (char *)0x0) {
    pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  }
  pcVar1 = strstr(pcVar2,s__sniper);
  if (pcVar1 != (char *)0x0) {
    *(undefined4 *)(this + 0x18b) = 0x44480000;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x40000;
  }
  pcVar2 = strstr(pcVar2,s__niche);
  if (pcVar2 != (char *)0x0) {
    if (((byte)this[1099] & 0x10) != 0) {
      *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x20;
      return;
    }
    pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x18);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    apLogErr(s_AI__niche_actor___s__has_no_wayp,pcVar2);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044A7C0 */

int __thiscall aiNPC_WR::ProcessINIT(aiNPC_WR *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_ESI;
  int iStack_9c;
  int aiStack_98 [2];
  undefined1 local_90;
  undefined1 local_8f;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  char acStack_44 [68];
  
  iVar1 = aiNPC::ProcessINIT((aiNPC *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x51b) = 0;
  *(undefined4 *)(this + 0x52b) = 0x42b40000;
  *(undefined4 *)(this + 0x52f) = 0x40000000;
  puVar2 = (undefined4 *)operator_new(0xc0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    physINIT::physINIT((physINIT *)(puVar2 + 0x17));
    puVar2[0x2a] = 0;
    puVar2[0x2b] = 0;
    *puVar2 = &physMATH::_vftable_;
    m3dMATR::Identity((m3dMATR *)(puVar2 + 2));
    puVar2[0x2b] = this;
    *puVar2 = &physDRIFT_MATH::_vftable_;
  }
  *(undefined4 **)(this + 0x43f) = puVar2;
  local_90 = 0;
  local_8f = 0x40;
  local_5c = 0.0;
  puVar2[0x2d] = _m3dVZero;
  local_8e = 0x38;
  local_74 = 0x3f19999a;
  puVar2[0x2e] = DAT_00963740;
  local_6c = 0xffffffff;
  local_64 = 0x3f4ccccd;
  puVar2[0x2f] = DAT_00963744;
  *(undefined4 *)(this + 0x51f) = 0;
  *(undefined4 *)(this + 0x523) = 0;
  local_80 = _m3dVUnitY * ___real_c1400000;
  local_88 = DAT_00963740;
  local_7c = DAT_005f9994 * ___real_c1400000;
  local_8c = _m3dVZero;
  local_68 = 0;
  local_60 = 2;
  local_70 = 0xbf800000;
  local_84 = DAT_00963744;
  local_78 = DAT_005f9998 * ___real_c1400000;
  (**(code **)**(undefined4 **)(this + 0x43f))(&local_90);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xffffffef;
  iVar1 = aiNPC::GetStr((aiNPC *)this,s_AI_PROP,s_Aiming,acStack_44,0x40);
  if (iVar1 != 0) {
    iVar1 = stricmp(acStack_44,s_Plain);
    if (iVar1 == 0) {
      *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 0x10;
    }
  }
  iVar1 = (**(code **)(*(int *)this + 0x1ac))();
  if (iVar1 == 0) {
    iVar1 = aiNPC::GetBool((aiNPC *)this,s_AI_PROP,s_ObstAvoid,aiStack_98);
    if ((iVar1 == 0) || (aiStack_98[0] == 0)) {
      uVar3 = *(uint *)(this + 0x14f) | 0x20000;
    }
    else {
      uVar3 = *(uint *)(this + 0x14f) & 0xfffdffff;
    }
  }
  else {
    uVar3 = *(uint *)(this + 0x14f) & 0xfffdffff;
  }
  *(uint *)(this + 0x14f) = uVar3;
  iVar1 = aiNPC::GetBool((aiNPC *)this,s_AI_PROP,s_isFallback,(int *)&stack0xffffff60);
  if ((iVar1 == 0) || (unaff_ESI != 0)) {
    uVar3 = *(uint *)(this + 0x51b) & 0xfffffeff;
  }
  else {
    uVar3 = *(uint *)(this + 0x51b) | 0x100;
  }
  *(uint *)(this + 0x51b) = uVar3;
  iVar1 = aiNPC::GetBool((aiNPC *)this,s_AI_PROP,s_isWayPTurn,&iStack_9c);
  if ((iVar1 == 0) || (iStack_9c == 0)) {
    uVar3 = *(uint *)(this + 0x51b) & 0xfffffbff;
  }
  else {
    uVar3 = *(uint *)(this + 0x51b) | 0x400;
  }
  *(uint *)(this + 0x51b) = uVar3;
  *(uint *)(this + 0x51b) = uVar3 | 0x10000;
  if (((*(uint *)(this + 1099) & 0x10) != 0) && ((*(uint *)(this + 1099) & 0x100000) != 0)) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_5c);
    fStack_50 = *(float *)(this + 0x3f3) - local_5c;
    fStack_4c = *(float *)(this + 0x3f7) - fStack_58;
    fStack_48 = *(float *)(this + 0x3fb) - fStack_54;
    animINST::SetDir_XZ(*(animINST **)(this + 0xbc),(m3dV *)&fStack_50);
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x3c3));
  }
  if (wrSysStat != (wrSTAT_SYSTEM *)0x0) {
    *(int *)(wrSysStat + 0x94) = *(int *)(wrSysStat + 0x94) + 1;
  }
  return 1;
}




/* from: ai_npc_wr.cpp
   addr: 0044AAE0 */

void __thiscall aiNPC_WR::ProcessTERM(aiNPC_WR *this)

{
  (**(code **)(*(int *)this + 0x1a0))();
  if (*(int **)(this + 0x43f) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x43f) + 4))();
    *(undefined4 *)(this + 0x43f) = 0;
  }
  aiNPC::ProcessTERM((aiNPC *)this);
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044AB10 */

void __thiscall aiNPC_WR::Explode(aiNPC_WR *this,dmgDAMAGE *param_1,int param_2)

{
  m3dV local_c [12];
  
  aiNPC::GetPosRooted((aiNPC *)this,local_c);
  wrsfxStartChunkMeat(3,0,local_c,(m3dV *)0x0,this);
  StartBlood(this,7,0,local_c,(m3dV *)0x0,(m3dV *)0x0,(m3dV *)0x0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044AB60 */

void __thiscall aiNPC_WR::DecideExplosion(aiNPC_WR *this,dmgDAMAGE *param_1)

{
  dmgDAMAGE *pdVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float afStack_c [2];
  float fStack_4;
  
  pdVar1 = param_1;
  if (((param_1 != (dmgDAMAGE *)0x0) && (*(int *)(param_1 + 4) == 0)) &&
     (((byte)this[0x51b] & 4) == 0)) {
    iVar2 = (**(code **)(*(int *)this + 0x1a8))();
    if ((iVar2 != 0) &&
       ((iVar2 = *(int *)(param_1 + 0x1c), iVar2 == 6 || ((8 < iVar2 && (iVar2 < 0xb)))))) {
      aiNPC::GetPosRooted((aiNPC *)this,(m3dV *)afStack_c);
      fVar6 = (afStack_c[0] - *(float *)(param_1 + 0x10)) *
              (afStack_c[0] - *(float *)(param_1 + 0x10)) +
              (fStack_4 - *(float *)(param_1 + 0x18)) * (fStack_4 - *(float *)(param_1 + 0x18));
      if (m3dSimdType == 0) {
        fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar7 = auVar8._0_4_;
        param_1 = (dmgDAMAGE *)
                  (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6);
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar3 = (ulonglong)(uint)fVar6;
        uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
        uVar5 = PackedFloatingMUL(uVar4,uVar4);
        uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
        uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
        uVar4 = PackedFloatingMUL(uVar4,uVar3);
        param_1 = (dmgDAMAGE *)uVar4;
        FastExitMediaState();
      }
      else {
        param_1 = (dmgDAMAGE *)SQRT(fVar6);
      }
      if ((float)param_1 < ___real_3f800000) {
        (**(code **)(*(int *)this + 0x194))(pdVar1,0);
      }
    }
  }
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044AC90 */

void __thiscall aiNPC_WR::StartDeath(aiNPC_WR *this,dmgDAMAGE *param_1)

{
  int iVar1;
  
  aiNPC::StartDeath((aiNPC *)this,param_1);
  if ((wrSysStat != (wrSTAT_SYSTEM *)0x0) && (param_1 != (dmgDAMAGE *)0x0)) {
    wrSTAT_SYSTEM::Notify_NPCDie(wrSysStat,*(ulong *)(param_1 + 0xc));
  }
  if (((byte)this[0x88] & 4) != 0) {
    iVar1 = (**(code **)(*(int *)this + 0x188))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)this + 0x17c))(param_1);
      if (iVar1 != 0) {
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x100;
        (**(code **)(*(int *)this + 400))(param_1);
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044AD00 */

int __thiscall aiNPC_WR::ProcessCDT_FIREABLE(aiNPC_WR *this,dmgDAMAGE *param_1)

{
  objOBJ *poVar1;
  int iVar2;
  uint uVar3;
  m3dV *pmVar4;
  m3dV amStack_c [12];
  
  if (((*(int *)(param_1 + 4) == 0) &&
      ((((iVar2 = *(int *)(param_1 + 0x1c), iVar2 == 3 || (iVar2 == 1)) || (iVar2 == 8)) ||
       (iVar2 == 2)))) &&
     ((poVar1 = objFindID(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),(int)*(short *)(param_1 + 0x30)
                         ), poVar1 != (objOBJ *)0x0 &&
      (iVar2 = (**(code **)(*(int *)this + 0x1b8))(*(undefined4 *)(poVar1 + 0x18)), iVar2 != 0)))) {
    return 1;
  }
  if ((((*(uint *)(this + 1099) & 0x200000) == 0) || (*(float *)(this + 0x493) < _DAT_005d3d4c)) &&
     ((wrSysStat != (wrSTAT_SYSTEM *)0x0 && (*(int *)(param_1 + 4) == 0)))) {
    wrSTAT_SYSTEM::Notify_NPCDmg(wrSysStat,*(ulong *)(param_1 + 0xc),*(int *)(param_1 + 0x1c));
  }
  aiNPC::ProcessCDT_FIREABLE((aiNPC *)this,param_1);
  uVar3 = *(uint *)(this + 0x51b);
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  *(uint *)(this + 0x51b) = uVar3 | 1;
  if ((((uVar3 & 0x1000004) == 0) && ((*(uint *)(this + 1099) & 0x200000) != 0)) &&
     (*(float *)(this + 0xcc) < *(float *)(this + 0xd0) * ___real_c0000000)) {
    (**(code **)(*(int *)this + 0x194))(param_1,1);
    *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 0x1000000;
    return 1;
  }
  if (*(objOBJ **)(this + 0x527) == (objOBJ *)0x0) {
    return 1;
  }
  if ((uVar3 & 6) == 0) {
    iVar2 = *(int *)(param_1 + 4);
    pmVar4 = (m3dV *)0x0;
    if (((iVar2 == 0) || (iVar2 == 2)) || (iVar2 == 3)) {
      pmVar4 = (m3dV *)(param_1 + 0x10);
    }
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x527),amStack_c);
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = *(int *)(param_1 + 0x1c);
      if (iVar2 == 6) {
        uVar3 = *(uint *)(this + 1099) & 0x200000;
        iVar2 = 1;
      }
      else {
        if (((iVar2 != 8) && (iVar2 != 3)) && ((iVar2 != 1 && ((iVar2 != 0 && (iVar2 != 2))))))
        goto LAB_0044aed0;
        uVar3 = *(uint *)(this + 1099) & 0x200000;
        iVar2 = 0;
      }
    }
    else {
      uVar3 = *(uint *)(this + 1099) & 0x200000;
      iVar2 = 2;
    }
    StartBlood(this,iVar2,uVar3,amStack_c,(m3dV *)0x0,(m3dV *)(this + 0xe0),pmVar4);
  }
LAB_0044aed0:
  if ((*(uint *)(this + 1099) & 0x200000) == 0) {
    (**(code **)(*(int *)this + 0x184))(param_1);
  }
  return 1;
}




/* from: ai_npc_wr.cpp
   addr: 0044AF20 */

void __thiscall aiNPC_WR::ProcessMP_NOTIFY(aiNPC_WR *this,gsEVENT *param_1)

{
  uint uVar1;
  m3dV *pmVar2;
  m3dV *pmVar3;
  
  aiNPC::ProcessMP_NOTIFY((aiNPC *)this,param_1);
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
    if ((wrSysStat != (wrSTAT_SYSTEM *)0x0) && (*(int *)(param_1 + 0x10) != -1)) {
      wrSTAT_SYSTEM::Notify_NPCDmg(wrSysStat,*(ulong *)(param_1 + 8),*(int *)(param_1 + 0x10));
    }
    break;
  case 2:
    if ((wrSysStat != (wrSTAT_SYSTEM *)0x0) && (*(ulong *)(param_1 + 8) != 0xffffffff)) {
      wrSTAT_SYSTEM::Notify_NPCDie(wrSysStat,*(ulong *)(param_1 + 8));
      return;
    }
    break;
  case 3:
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 2) == 0) {
      pmVar3 = (m3dV *)(param_1 + 0x1c);
    }
    else {
      pmVar3 = (m3dV *)0x0;
    }
    if ((uVar1 & 4) == 0) {
      pmVar2 = (m3dV *)(param_1 + 0x28);
    }
    else {
      pmVar2 = (m3dV *)0x0;
    }
    if ((uVar1 & 8) != 0) {
      wrsfxStartBlood(*(int *)(param_1 + 8),uVar1 & 1,(m3dV *)(param_1 + 0x10),pmVar3,pmVar2,
                      (m3dV *)0x0);
      return;
    }
    wrsfxStartBlood(*(int *)(param_1 + 8),uVar1 & 1,(m3dV *)(param_1 + 0x10),pmVar3,pmVar2,
                    (m3dV *)(param_1 + 0x34));
    return;
  case 0xffffff9c:
    (**(code **)(*(int *)this + 0x19c))(param_1);
    return;
  }
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044B070 */

void __thiscall
aiNPC_WR::StartBlood
          (aiNPC_WR *this,int param_1,int param_2,m3dV *param_3,m3dV *param_4,m3dV *param_5,
          m3dV *param_6)

{
  int iVar1;
  msgDATA local_40;
  undefined1 local_3f;
  undefined2 local_3e;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_40 = (msgDATA)0x0;
  local_3f = 0x40;
  local_3e = 0x40;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_3c = 3;
  if ((((byte)this[0x88] & 4) != 0) && (((byte)wrAppState & 2) == 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x1bc))();
    if (iVar1 == 0) {
      local_38 = param_1;
      if ((*(uint *)(this + 1099) & 0x200000) != 0) {
        local_34 = local_34 | 1;
      }
      uStack_30 = *(undefined4 *)param_3;
      uStack_2c = *(undefined4 *)(param_3 + 4);
      uStack_28 = *(undefined4 *)(param_3 + 8);
      if (param_4 == (m3dV *)0x0) {
        local_34 = local_34 | 2;
      }
      else {
        uStack_24 = *(undefined4 *)param_4;
        uStack_20 = *(undefined4 *)(param_4 + 4);
        uStack_1c = *(undefined4 *)(param_4 + 8);
      }
      if (param_5 == (m3dV *)0x0) {
        local_34 = local_34 | 4;
      }
      else {
        uStack_18 = *(undefined4 *)param_5;
        uStack_14 = *(undefined4 *)(param_5 + 4);
        uStack_10 = *(undefined4 *)(param_5 + 8);
      }
      if (param_6 == (m3dV *)0x0) {
        local_34 = local_34 | 8;
      }
      else {
        uStack_c = *(undefined4 *)param_6;
        uStack_8 = *(undefined4 *)(param_6 + 4);
        uStack_4 = *(undefined4 *)(param_6 + 8);
      }
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_40,0x90000,0xfffffffd,0xfffffffd);
    }
  }
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044B1B0 */

void __thiscall
aiNPC_WR::StartChunkMeat(aiNPC_WR *this,int param_1,int param_2,m3dV *param_3,m3dV *param_4)

{
  wrsfxStartChunkMeat(param_1,param_2,param_3,param_4,this);
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044B1D0 */

int __fastcall ClassifyCollisionTarget(cdtINFO *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 4) & 0x48) != 0)) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 0x13c) + 0x14);
  if (iVar2 == 0x504c5952) {
    return 1;
  }
  if (iVar2 == 0x244e5043) {
    return (*(int *)(*(int *)(iVar1 + 0x13c) + 0x94) != 0) + 2;
  }
  return -1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044B220 */

void __thiscall aiNPC_WR::SetInitShootFallBack(aiNPC_WR *this,dmgWEAPON *param_1)

{
  float fVar1;
  dmgWEAPON *pdVar2;
  int iVar3;
  float unaff_ESI;
  dmgWEAPON **ppdVar4;
  aiNPC_WR *paStack_4;
  
  pdVar2 = param_1;
  if ((*(int *)(param_1 + 4) == 0) && ((*(uint *)(this + 0x51b) & 0x120) == 0)) {
    paStack_4 = this;
    iVar3 = (**(code **)(*(int *)this + 0x188))();
    if (iVar3 != 0) {
      ppdVar4 = &param_1;
      *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 0x20;
      paStack_4 = (aiNPC_WR *)0xc1000000;
      param_1 = (dmgWEAPON *)0x40800000;
      (**(code **)(*(int *)this + 0x18c))(pdVar2,&paStack_4,ppdVar4);
      fVar1 = ___real_42b40000 / (*(float *)(this + 0x52b) + ___real_3c23d70a);
      (**(code **)(*(int *)this + 0xc0))((float)ppdVar4 * fVar1,fVar1 * unaff_ESI);
    }
  }
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044B2C0 */

void __thiscall aiNPC_WR::Think(aiNPC_WR *this)

{
  uint uVar1;
  
  aiNPC::Think((aiNPC *)this);
  if ((*(uint *)(this + 1099) & 0x800) == 0) {
    *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) & 0xffffffdf;
  }
  if ((((*(uint *)(this + 1099) & 0x40000) != 0) ||
      (-1 < (char)((uint)*(undefined4 *)(this + 0x44f) >> 8))) ||
     (*(float *)(this + 0x3cf) <= *(float *)(this + 0x18b))) {
    uVar1 = *(uint *)(this + 0x51b) & 0xfffffdff;
  }
  else {
    uVar1 = *(uint *)(this + 0x51b) | 0x200;
  }
  *(uint *)(this + 0x51b) = uVar1;
  if ((uVar1 & 0x10000) != 0) {
    *(uint *)(this + 0x51b) = uVar1 & 0xfffbffff;
  }
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044B330 */

void __thiscall aiNPC_WR::PostThink(aiNPC_WR *this)

{
  float local_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((((*(uint *)(this + 1099) & 0x10) != 0) && ((*(uint *)(this + 1099) & 1) != 0)) &&
     ((*(uint *)(this + 0x51b) & 0x400) != 0)) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
    (**(code **)(*(int *)this + 0xe4))(&local_24);
    fStack_c = local_24 - local_18;
    fStack_8 = fStack_20 - fStack_14;
    fStack_4 = fStack_1c - fStack_10;
    animINST::SetDir_XZ(*(animINST **)(this + 0xbc),(m3dV *)&fStack_c);
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x3c3));
  }
  aiNPC::PostThink((aiNPC *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044B3C0 */

void __thiscall aiNPC_WR::SetInitDeadSpeed(aiNPC_WR *this,dmgWEAPON *param_1,m3dV *param_2)

{
  m3dV *pmVar1;
  float extraout_ECX;
  float extraout_EDX;
  float fVar2;
  float local_1c;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  pmVar1 = param_2;
  aiNPC::GetPosRooted((aiNPC *)this,local_18);
  dmgGetOrgDir((dmgDAMAGE *)param_1,local_18,local_c,param_2,&local_1c);
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
  case 1:
    fVar2 = m3dRandRange(extraout_ECX,extraout_EDX);
    *(undefined4 *)(param_2 + 4) = 0x40000000;
    break;
  case 2:
    if (___real_00000000 <= local_1c) {
      if (local_1c <= ___real_41a00000) {
        param_2 = (m3dV *)(___real_40000000 - local_1c * ___real_3d99999a);
      }
      else {
        param_2 = (m3dV *)0x3f000000;
      }
    }
    else {
      param_2 = (m3dV *)0x40000000;
    }
    goto LAB_0044b4fe;
  case 3:
  case 8:
    fVar2 = m3dRandRange(extraout_ECX,extraout_EDX);
    *(undefined4 *)(param_2 + 4) = 0x40466666;
    break;
  case 4:
    fVar2 = m3dRandRange(extraout_ECX,extraout_EDX);
    *(undefined4 *)(param_2 + 4) = 0x40400000;
    break;
  default:
    goto switchD_0044b3fc_caseD_5;
  case 6:
  case 9:
    if (___real_00000000 <= local_1c) {
      if (local_1c <= ___real_41700000) {
        param_2 = (m3dV *)(___real_3f800000 - local_1c * ___real_3d5a740e);
      }
      else {
        param_2 = (m3dV *)0x3e4ccccd;
      }
    }
    else {
      param_2 = (m3dV *)0x3f800000;
    }
LAB_0044b4fe:
    fVar2 = m3dRandRange(extraout_ECX,extraout_EDX);
    fVar2 = fVar2 * (float)param_2;
    *(undefined4 *)(pmVar1 + 4) = 0x40600000;
  }
  *(float *)pmVar1 = fVar2 * *(float *)pmVar1;
  *(float *)(pmVar1 + 8) = fVar2 * *(float *)(pmVar1 + 8);
switchD_0044b3fc_caseD_5:
  fVar2 = ___real_42b40000 / (*(float *)(this + 0x52b) + ___real_3c23d70a);
  *(float *)pmVar1 = fVar2 * *(float *)pmVar1;
  *(float *)(pmVar1 + 4) = fVar2 * *(float *)(pmVar1 + 4);
  *(float *)(pmVar1 + 8) = fVar2 * *(float *)(pmVar1 + 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044B590 */

int __thiscall aiNPC_WR::StartPassivePhysics(aiNPC_WR *this,dmgDAMAGE *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  m3dMATR *pmVar3;
  float fVar4;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  m3dMATR amStack_4c [76];
  
  local_80 = _m3dVZero;
  local_74 = (float)_m3dVZero;
  local_7c = (float)DAT_00963740;
  local_78 = (float)DAT_00963744;
  local_70 = DAT_00963740;
  local_6c = DAT_00963744;
  local_68 = 0x3dcccccd;
  local_64 = DAT_005d3d50;
  local_60 = 1;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  if ((param_1 != (dmgDAMAGE *)0x0) && (*(int *)(param_1 + 4) == 0)) {
    if (((*(int *)(param_1 + 0x1c) == 3) || (*(int *)(param_1 + 0x1c) == 1)) &&
       (fVar4 = m3dRandom(), ___real_3f000000 < fVar4)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x1c) != 7) && (*(int *)(param_1 + 0x1c) != 5)) {
      local_68 = 0x3f19999a;
      local_60 = 0xffffffff;
      local_58 = 0x3f4ccccd;
      local_5c = 0;
      local_54 = 2;
      local_64 = 0xbf800000;
      (**(code **)(*(int *)this + 0x180))(param_1,&local_80);
      local_7c = _m3dVUnitY * ___real_c1400000;
      local_78 = DAT_005f9994 * ___real_c1400000;
      local_74 = DAT_005f9998 * ___real_c1400000;
      (**(code **)**(undefined4 **)(this + 0x43f))(&stack0xffffff74);
      *(undefined4 *)(this + 0x443) = *(undefined4 *)(this + 0x373);
      puVar2 = (undefined4 *)(*(int *)(this + 0xbc) + 0x60);
      pmVar3 = amStack_4c;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pmVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        pmVar3 = pmVar3 + 4;
      }
      aiNPC::GetPosRooted((aiNPC *)this,(m3dV *)&local_58);
      m3dMATR::Translate(amStack_4c,(m3dV *)&local_58,0);
      m3dMATR::Translate(amStack_4c,0.0,local_74 + *(float *)(this + 0x443),0.0,2);
      pmVar3 = amStack_4c;
      puVar2 = (undefined4 *)(*(int *)(this + 0x43f) + 8);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *(undefined4 *)pmVar3;
        pmVar3 = pmVar3 + 4;
        puVar2 = puVar2 + 1;
      }
      *(uint *)(*(int *)(this + 0x43f) + 4) = *(uint *)(*(int *)(this + 0x43f) + 4) | 4;
      physMATH::AddEntCDTExclude(*(physMATH **)(this + 0x43f),(entENTITY *)this);
      iVar1 = *(int *)(this + 0xbc);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffffef;
      }
      return 1;
    }
  }
  return 0;
}




/* from: ai_npc_wr.cpp
   addr: 0044B7A0 */

void __thiscall aiNPC_WR::ProcessINIT_LEVEL(aiNPC_WR *this)

{
  aiNPC::ProcessINIT_LEVEL((aiNPC *)this);
  (**(code **)(*(int *)this + 0x198))();
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x533));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044B7D0 */

int __thiscall aiNPC_WR::InitSFX(aiNPC_WR *this)

{
  int iVar1;
  int local_14;
  int local_10;
  m3dV amStack_c [12];
  
  local_10 = 0;
  local_14 = 0;
  if (((byte)this[0xb4] & 1) == 0) {
    return 1;
  }
  if ((gsAppState & 0x20000U) != 0) {
    return 1;
  }
  aiNPC::GetBool((aiNPC *)this,s_AI_PROP,s_isNoSFXAppear,&local_10);
  aiNPC::GetBool((aiNPC *)this,s_AI_PROP,s_isAltarOpp,&local_14);
  iVar1 = (**(code **)(*(int *)this + 0x1a4))();
  if ((iVar1 != 0) && (local_10 == 0)) {
    if (local_14 != 0) goto LAB_0044b877;
    animINST::GetPos(*(animINST **)(this + 0xbc),amStack_c);
    wrsfxAPPEAR::Start(amStack_c,*(uint *)(this + 0x44f) & 1,(cdtINFO *)0x0);
  }
  if (local_14 == 0) {
    return 1;
  }
LAB_0044b877:
  if (*(int *)(this + 0x49f) != 0) {
    if (((byte)this[0x88] & 4) != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,0x4d2,(msgADDR *)this);
      *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 8;
    }
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
    *(float *)(this + 0xcc) = *(float *)(this + 0xcc) * ___real_40800000;
  }
  return 1;
}




/* from: ai_npc_wr.cpp
   addr: 0044B8D0 */

void __thiscall aiNPC_WR::SyncSFX(aiNPC_WR *this,gsEV_SYNC *param_1)

{
  int local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 0;
  if (((byte)this[0xb4] & 1) != 0) {
    aiNPC::GetBool((aiNPC *)this,s_AI_PROP,s_isNoSFXAppear,local_8);
    aiNPC::GetBool((aiNPC *)this,s_AI_PROP,s_isAltarOpp,local_8 + 1);
  }
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044B920 */

int __thiscall aiNPC_WR::IsReadyActivate(aiNPC_WR *this)

{
  int iVar1;
  
  if (((byte)this[0x51b] & 8) != 0) {
    return 0;
  }
  iVar1 = aiNPC::IsReadyActivate((aiNPC *)this);
  return iVar1;
}




/* from: ai_npc_wr.cpp
   addr: 0044B940 */

void __thiscall aiNPC_WR::ProcessFRAME(aiNPC_WR *this)

{
  aiNPC::ProcessFRAME((aiNPC *)this);
  *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) & 0xfffffffe;
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044B960 */

void __thiscall aiNPC_WR::OrientTowardsPlayer(aiNPC_WR *this)

{
  float unaff_ESI;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  (**(code **)(*(int *)this + 0xe4))(&local_24);
  fStack_10 = unaff_ESI - fStack_1c;
  fStack_c = local_24 - local_18;
  fStack_8 = fStack_20 - fStack_14;
  animINST::SetDir_XZ(*(animINST **)(this + 0xbc),(m3dV *)&fStack_10);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x3c3));
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044B9D0 */

void __thiscall aiNPC_WR::CorrectGoalByWaterLevel(aiNPC_WR *this)

{
  float local_10;
  m3dV local_c [12];
  
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  local_10 = *(float *)(this + 0x3f7) - *(float *)(this + 0x52f);
  waterIsUnderWater(local_c,(float)&local_10,(float *)0x3dcccccd);
  if (local_10 + *(float *)(this + 0x52f) < *(float *)(this + 0x3f7)) {
    *(float *)(this + 0x3f7) = *(float *)(this + 0x3f7);
    return;
  }
  *(float *)(this + 0x3f7) = local_10 + *(float *)(this + 0x52f);
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044BA50 */

void __thiscall aiNPC_WR::UpdateTimers(aiNPC_WR *this)

{
  float extraout_EDX;
  float extraout_EDX_00;
  
  aiNPC::UpdateTimers((aiNPC *)this);
  m3dUpdateTimeField((float *)(this + 0x51f),extraout_EDX);
  m3dUpdateTimeField((float *)(this + 0x523),extraout_EDX_00);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044BA80 */

void __thiscall aiNPC_WR::MoveToGoal(aiNPC_WR *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  m2dTRI *pmVar6;
  m3dV local_24 [4];
  float local_20;
  m2dTRI local_18 [24];
  
  if (DAT_0060c6e4 != 0) {
    if ((((byte)this[0x44f] & 8) != 0) && (iVar3 = 0, 0 < *(int *)(this + 0x1af))) {
      do {
        if ((iVar3 < 0) || (iVar1 = iVar3, *(int *)(this + 0x1af) <= iVar3)) {
          iVar1 = 0;
        }
        puVar4 = (undefined4 *)(*(int *)(this + 0x1db) + iVar1 * 0x18);
        pmVar6 = local_18;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pmVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          pmVar6 = pmVar6 + 4;
        }
        DrawTri(local_18,0xffff0000);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 0x1af));
    }
    if ((((byte)this[0x44f] & 0x10) != 0) && (iVar3 = 0, 0 < *(int *)(this + 0x33b))) {
      do {
        if ((iVar3 < 0) || (iVar1 = iVar3, *(int *)(this + 0x33b) <= iVar3)) {
          iVar1 = 0;
        }
        puVar4 = (undefined4 *)(*(int *)(this + 0x367) + iVar1 * 0x18);
        pmVar6 = local_18;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pmVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          pmVar6 = pmVar6 + 4;
        }
        DrawTri(local_18,0xff000011);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 0x33b));
    }
    animINST::GetPos(*(animINST **)(this + 0xbc),local_24);
    local_20 = local_20 + ___real_3f800000;
    uVar5 = (-(uint)((*(uint *)(this + 0x51b) & 0x40000) != 0) & 0xffff01ff) - 0x100;
    *(float *)(this + 0x3f7) = *(float *)(this + 0x3f7) + ___real_3f800000;
    rendDRIVER::RenderLine(rendDrv,gsCameraPtr,local_24,(m3dV *)(this + 0x3f3),uVar5);
    rendDRIVER::RenderCross(rendDrv,gsCameraPtr,(m3dV *)(this + 0x3f3),0.2,uVar5);
    *(float *)(this + 0x3f7) = *(float *)(this + 0x3f7) - ___real_3f800000;
  }
  aiNPC::MoveToGoal((aiNPC *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044BBF0 */

void __fastcall DrawTri(m2dTRI *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uStack_10;
  float local_c;
  undefined4 uStack_8;
  
  (**(code **)(*(int *)plgsPlayer + 0x68))(&local_c);
  uStack_8 = *(undefined4 *)(param_1 + 4);
  uStack_10 = *(undefined4 *)param_1;
  fVar5 = local_c + ___real_3f000000;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  local_c = fVar5;
  rendDRIVER::RenderLine(rendDrv,gsCameraPtr,(m3dV *)&stack0xffffffe4,(m3dV *)&uStack_10,param_2);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uStack_10 = uVar2;
  local_c = fVar5;
  uStack_8 = uVar1;
  rendDRIVER::RenderLine(rendDrv,gsCameraPtr,(m3dV *)&stack0xffffffe4,(m3dV *)&uStack_10,param_2);
  uStack_10 = uVar4;
  local_c = fVar5;
  uStack_8 = uVar3;
  rendDRIVER::RenderLine(rendDrv,gsCameraPtr,(m3dV *)&stack0xffffffe4,(m3dV *)&uStack_10,param_2);
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044BCE0 */

int __thiscall aiNPC_WR::SelectEscapeWhenOut(aiNPC_WR *this)

{
  uint uVar1;
  float in_EDX;
  float fVar2;
  aiNPC_WR *paVar3;
  
  uVar1 = *(uint *)(this + 0x51b);
  if (((uVar1 & 0x40000) != 0) && (((byte)this[1099] & 1) == 0)) {
    return 1;
  }
  if ((uVar1 & 0x10000) == 0) {
    *(uint *)(this + 0x51b) = uVar1 | 0x40000;
    paVar3 = this + 0x3f3;
    fVar2 = m3dRandRange((float)this,in_EDX);
    aiPLANNER::GetFleeGoalPoint(aiAttackPlanner,(aiNPC *)this,fVar2,(m3dV *)paVar3);
    *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x3f3);
    *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x3f7);
    *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x3fb);
    return 1;
  }
  return 0;
}




/* from: ai_npc_wr.cpp
   addr: 0044BD60 */

void __thiscall aiNPC_WR::RestrictGoalByBanCross(aiNPC_WR *this)

{
  aiNPC_WR *paVar1;
  scnDOMAIN *psVar2;
  int iVar3;
  float extraout_ECX;
  undefined8 uVar4;
  float fVar5;
  m3dV local_c [12];
  
  if (((*(uint *)(this + 0x51b) & 0x40000) == 0) || ((*(uint *)(this + 0x51b) & 0x80000) == 0)) {
    psVar2 = aiPLANNER::GetBanCrossDomain(aiAttackPlanner,(aiNPC *)this);
    if (psVar2 != (scnDOMAIN *)0x0) {
      aiNPC::GetPosRooted((aiNPC *)this,local_c);
      paVar1 = this + 0x3f3;
      uVar4 = (**(code **)(*(int *)psVar2 + 0x14))(local_c,paVar1);
      if ((int)uVar4 != 0) {
        iVar3 = *(int *)this;
        fVar5 = m3dRandRange(extraout_ECX,(float)((ulonglong)uVar4 >> 0x20));
        (**(code **)(iVar3 + 0x1b4))(fVar5);
        iVar3 = (**(code **)(*(int *)psVar2 + 0x14))(&stack0xffffffe8,paVar1);
        if (iVar3 != 0) {
          *(undefined4 *)paVar1 = *(undefined4 *)(this + 0x533);
          *(undefined4 *)(this + 0x3f7) = *(undefined4 *)(this + 0x537);
          *(undefined4 *)(this + 0x3fb) = *(undefined4 *)(this + 0x53b);
          *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x533);
          *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x537);
          *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x53b);
          *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 0x40000;
        }
      }
    }
  }
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044BE30 */

void __thiscall aiNPC_WR::SelectGoalToRunAway(aiNPC_WR *this,float param_1)

{
  aiPLANNER::GetFleeGoalPoint(aiAttackPlanner,(aiNPC *)this,param_1,(m3dV *)(this + 0x3f3));
  *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x3f3);
  *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x3f7);
  *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 0x40000;
  *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x3fb);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044BE80 */

void __thiscall aiNPC_WR::UpdateInAreaFlags(aiNPC_WR *this)

{
  int iVar1;
  uint uVar2;
  float unaff_ESI;
  float unaff_EDI;
  undefined4 *puVar3;
  undefined4 local_c [3];
  
  if (((byte)this[0x44f] & 8) == 0) {
    *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 0x10000;
  }
  else if (*(float *)(this + 0x523) < _DAT_005d3d4c) {
    aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)local_c);
    puVar3 = local_c;
    iVar1 = (**(code **)(*(int *)(this + 0x1ab) + 0x10))(puVar3);
    if (iVar1 == 0) {
      uVar2 = *(uint *)(this + 0x51b) & 0xfffdffff;
    }
    else {
      uVar2 = *(uint *)(this + 0x51b) | 0x20000;
    }
    *(uint *)(this + 0x51b) = uVar2;
    aiNPC::GetPosRooted((aiNPC *)this,(m3dV *)&stack0xfffffff0);
    iVar1 = (**(code **)(*(int *)(this + 0x1ab) + 0x10))(&stack0xfffffff0);
    if (iVar1 == 0) {
      *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) & 0xfffeffff;
    }
    else {
      *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) & 0xfff7ffff | 0x10000;
      *(float *)(this + 0x533) = unaff_EDI;
      *(float *)(this + 0x537) = unaff_ESI;
      *(undefined4 *)(this + 0x53b) = local_c[0];
    }
    if ((((byte)this[0x44f] & 0x10) != 0) && ((*(uint *)(this + 0x51b) & 0x10000) == 0)) {
      iVar1 = (**(code **)(*(int *)(this + 0x337) + 0x10))();
      if (iVar1 != 0) {
        if ((*(uint *)(this + 0x51b) & 0x80000) == 0) {
          *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 0x40000;
          *(undefined4 *)(this + 0x3f3) = *(undefined4 *)(this + 0x533);
          *(undefined4 *)(this + 0x3f7) = *(undefined4 *)(this + 0x537);
          *(undefined4 *)(this + 0x3fb) = *(undefined4 *)(this + 0x53b);
          *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x533);
          *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x537);
          *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x53b);
        }
        *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 0x80000;
      }
    }
    *(undefined4 *)(this + 0x523) = 0x3e4ccccd;
    if (((*(uint *)(this + 0x51b) & 0x10000) != 0) && (((byte)this[0x44f] & 0x10) != 0)) {
      iVar1 = (**(code **)(*(int *)(this + 0x337) + 0x10))(&stack0xffffffec);
      if (iVar1 != 0) {
        apLogErr(s_AI__nav_ban_areas_intersection_e,(double)(float)puVar3,(double)unaff_EDI,
                 (double)unaff_ESI);
        return;
      }
    }
  }
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044C050 */

void __thiscall aiNPC_WR::ProcessAltarOppUnhide(aiNPC_WR *this)

{
  float unaff_ESI;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  (**(code **)(*(int *)this + 0xe4))(&local_24);
  fStack_10 = unaff_ESI - fStack_1c;
  fStack_c = local_24 - local_18;
  fStack_8 = fStack_20 - fStack_14;
  animINST::SetDir_XZ(*(animINST **)(this + 0xbc),(m3dV *)&fStack_10);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x3c3));
  if ((((byte)this[0x88] & 4) != 0) && ((*(uint *)(this + 0x51b) & 8) != 0)) {
    *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) & 0xfffffff7;
  }
  return;
}




/* from: ai_npc_wr.cpp
   addr: 0044C0F0 */

int __thiscall
aiNPC_WR::ProcessMsg(aiNPC_WR *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 == 0x4d2) {
    wrsfxALTAR_FIREBALL::StartFireBall
              ((entENTITY *)this,*(psSHEET **)(*(int *)(*(int *)(this + 0x49f) + 200) + 0xf0));
  }
  iVar1 = aiNPC::ProcessMsg((aiNPC *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044C140 */

int __thiscall physMATH::IsAtRest(physMATH *this)

{
  ulonglong uVar1;
  undefined8 in_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float local_4;
  
  local_4 = *(float *)(this + 0x48) * *(float *)(this + 0x48) +
            *(float *)(this + 0x4c) * *(float *)(this + 0x4c) +
            *(float *)(this + 0x50) * *(float *)(this + 0x50);
  if (m3dSimdType == 0) {
    local_4 = local_4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar5 = rsqrtss(ZEXT416((uint)local_4),ZEXT416((uint)local_4));
    fVar4 = auVar5._0_4_;
    local_4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - local_4 * fVar4 * fVar4) * local_4;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)local_4;
    uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
    uVar3 = PackedFloatingMUL(uVar2,uVar2);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
    uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
    uVar2 = PackedFloatingMUL(uVar2,uVar1);
    local_4 = (float)uVar2;
    FastExitMediaState();
  }
  else {
    local_4 = SQRT(local_4);
  }
  local_4 = (float)(uint)(ABS(local_4) < ___real_3d4ccccd);
  if (((float)(int)local_4 != ___real_00000000) &&
     ((*(int *)(this + 0x80) < 0 || (*(int *)(this + 0xb0) < *(int *)(this + 0x80))))) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_npc_wr.cpp
   addr: 0044C250 */

int __thiscall physDRIFT_MATH::IsAtRest(physDRIFT_MATH *this)

{
  ulonglong uVar1;
  undefined8 in_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float local_4;
  
  local_4 = *(float *)(this + 0x48) * *(float *)(this + 0x48) +
            *(float *)(this + 0x4c) * *(float *)(this + 0x4c) +
            *(float *)(this + 0x50) * *(float *)(this + 0x50);
  if (m3dSimdType == 0) {
    local_4 = local_4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar5 = rsqrtss(ZEXT416((uint)local_4),ZEXT416((uint)local_4));
    fVar4 = auVar5._0_4_;
    local_4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - local_4 * fVar4 * fVar4) * local_4;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)local_4;
    uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
    uVar3 = PackedFloatingMUL(uVar2,uVar2);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
    uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
    in_MM1 = PackedFloatingMUL(uVar2,uVar1);
    local_4 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_4 = SQRT(local_4);
  }
  local_4 = (float)(uint)(ABS(local_4) < ___real_3d4ccccd);
  if (((float)(int)local_4 != ___real_00000000) &&
     ((*(int *)(this + 0x80) < 0 || (*(int *)(this + 0xb0) < *(int *)(this + 0x80))))) {
    local_4 = *(float *)(this + 0xb4) * *(float *)(this + 0xb4) +
              *(float *)(this + 0xb8) * *(float *)(this + 0xb8) +
              *(float *)(this + 0xbc) * *(float *)(this + 0xbc);
    if (m3dSimdType == 0) {
      local_4 = local_4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar5 = rsqrtss(ZEXT416((uint)local_4),ZEXT416((uint)local_4));
      fVar4 = auVar5._0_4_;
      local_4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_4 * fVar4 * fVar4) * local_4;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = (ulonglong)(uint)local_4;
      uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      uVar2 = PackedFloatingMUL(uVar2,uVar1);
      local_4 = (float)uVar2;
      FastExitMediaState();
    }
    else {
      local_4 = SQRT(local_4);
    }
    local_4 = (float)(uint)(ABS(local_4) < _DAT_005d3d4c);
    if ((float)(int)local_4 != ___real_00000000) {
      return 1;
    }
  }
  return 0;
}

