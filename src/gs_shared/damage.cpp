
/* from: gs_shared:damage.cpp
   addr: 0052E670 */

int __fastcall dmgInit(void)

{
  msgSYSTEM::RegisterMsgData(&msgSystem,(msgDATA_PACK *)&DAT_0095d61c);
  return 1;
}




/* from: gs_shared:damage.cpp
   addr: 0052E690 */

void __thiscall dmgGENERAL::dmgGENERAL(dmgGENERAL *this)

{
  *this = (dmgGENERAL)0x0;
  this[1] = (dmgGENERAL)0x40;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined2 *)(this + 2) = 0x1c;
  return;
}




/* from: gs_shared:damage.cpp
   addr: 0052E6B0 */

void __fastcall
dmgCollectInst(m3dV *param_1,float param_2,animINST **param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fStack_340;
  float local_33c;
  float fStack_338;
  float fStack_334;
  undefined **local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  scnAOBJ local_320 [800];
  
  iVar2 = 0;
  local_32c = 0;
  local_328 = 0;
  local_324 = 4;
  local_330 = &entCDT_REFINE_INCL::_vftable_;
  iVar1 = scnSCENE::MakeAnimList
                    (gsScenePtr,param_1,param_1,(float)param_3,(cdtREFINE *)&local_330,local_320,100
                    );
  if (param_5 < iVar1) {
    iVar1 = param_5;
  }
  if (0 < iVar1) {
    do {
      *(undefined4 *)((int)param_2 + iVar2 * 4) = *(undefined4 *)(local_320 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if ((*(byte *)(*(int *)(plgsPlayer + 0xbc) + 4) & 0x10) != 0) {
    if (((byte)plgsPlayer[0x88] & 4) != 0) {
      (**(code **)(*(int *)plgsPlayer + 0x68))(&local_33c);
      fStack_340 = (local_33c - *(float *)param_1) * (local_33c - *(float *)param_1) +
                   (fStack_334 - *(float *)(param_1 + 8)) * (fStack_334 - *(float *)(param_1 + 8)) +
                   (fStack_338 - *(float *)(param_1 + 4)) * (fStack_338 - *(float *)(param_1 + 4));
      if (m3dSimdType == 0) {
        fStack_340 = fStack_340 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar7 = rsqrtss(ZEXT416((uint)fStack_340),ZEXT416((uint)fStack_340));
        fVar6 = auVar7._0_4_;
        fStack_340 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_340 * fVar6 * fVar6) *
                     fStack_340;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar3 = (ulonglong)(uint)fStack_340;
        uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
        uVar5 = PackedFloatingMUL(uVar4,uVar4);
        uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
        uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
        uVar4 = PackedFloatingMUL(uVar4,uVar3);
        fStack_340 = (float)uVar4;
        FastExitMediaState();
      }
      else {
        fStack_340 = SQRT(fStack_340);
      }
      if ((float)param_3 <= fStack_340) {
        *param_4 = iVar1;
        return;
      }
      if (param_5 <= iVar1) goto LAB_0052e853;
      iVar1 = iVar1 + 1;
      *(undefined4 *)((int)param_2 + iVar2 * 4) = *(undefined4 *)(plgsPlayer + 0xbc);
    }
    *param_4 = iVar1;
    return;
  }
LAB_0052e853:
  *param_4 = iVar1;
  return;
}




/* from: gs_shared:damage.cpp
   addr: 0052E870 */

void __thiscall
dmgDISPATCHER::Dispatch
          (dmgDISPATCHER *this,entENTITY *param_1,dmgDAMAGE *param_2,entENTITY *param_3)

{
  msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)param_1,0x4c5,param_2,(msgADDR *)param_3);
  return;
}




/* from: gs_shared:damage.cpp
   addr: 0052E8A0 */

void __fastcall
dmgDispatchExplosDamage
          (entENTITY *param_1,m3dV *param_2,float param_3,float param_4,int param_5,int param_6,
          cdtINFO *param_7,ulong param_8,dmgDISPATCHER *param_9)

{
  int iVar1;
  int local_cc;
  undefined4 local_c8 [50];
  
  dmgCollectInst(param_2,(float)local_c8,(animINST **)param_4,&local_cc,0x32);
  iVar1 = 0;
  if (0 < local_cc) {
    do {
      dmgDispatchExplosDamageInst
                ((animINST *)local_c8[iVar1],param_1,param_2,param_3,param_4,param_5,param_6,param_7
                 ,param_8,param_9);
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_cc);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:damage.cpp
   addr: 0052E930 */

void __fastcall
dmgDispatchExplosDamageInst
          (animINST *param_1,entENTITY *param_2,m3dV *param_3,float param_4,float param_5,
          int param_6,int param_7,cdtINFO *param_8,ulong param_9,dmgDISPATCHER *param_10)

{
  float fVar1;
  float fVar2;
  int iVar3;
  dmgDAMAGE *pdVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_a8;
  float local_a4;
  float local_9c;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  dmgDAMAGE local_6c;
  undefined1 local_6b;
  undefined2 local_6a;
  undefined4 local_68;
  undefined4 local_60;
  dmgDAMAGE local_50 [2];
  undefined2 local_4e;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  m3dV local_1c [4];
  float fStack_18;
  undefined **local_10;
  undefined4 local_c;
  animINST *local_8;
  undefined4 local_4;
  
  dmgDAMAGE::dmgDAMAGE(local_50,0);
  local_50[0] = DAT_0095d620;
  local_44 = 0xffffffff;
  local_34 = -1;
  local_24 = 0;
  local_20 = 0xffff;
  local_4e = 0x32;
  local_6c = (dmgDAMAGE)0x0;
  local_6b = 0x40;
  local_68 = 1;
  local_60 = 0xffffffff;
  local_6a = 0x1c;
  if (param_2 != *(entENTITY **)(param_1 + 0x13c)) {
    if (param_6 == 0) {
      pdVar4 = local_50;
      local_40 = *(undefined4 *)(param_8 + 0x10);
      local_3c = *(undefined4 *)(param_8 + 0x14);
      local_38 = *(undefined4 *)(param_8 + 0x18);
      local_34 = param_7;
      local_30 = *(undefined4 *)param_3;
      local_2c = *(undefined4 *)(param_3 + 4);
      local_28 = *(undefined4 *)(param_3 + 8);
    }
    else {
      pdVar4 = &local_6c;
    }
    if (param_9 == 0xffffffff) {
      if ((param_2 != (entENTITY *)0x0) &&
         (iVar3 = gsMP_SYSTEM::IsRegularMPID(gsSysMP,*(ulong *)(param_2 + 0x8c)), iVar3 != 0)) {
        *(undefined4 *)(pdVar4 + 0xc) = *(undefined4 *)(param_2 + 0x8c);
      }
    }
    else {
      *(ulong *)(pdVar4 + 0xc) = param_9;
    }
    *(int *)(pdVar4 + 4) = param_6;
    *(undefined4 *)(pdVar4 + 0x10) = *(undefined4 *)param_3;
    *(undefined4 *)(pdVar4 + 0x14) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(pdVar4 + 0x18) = *(undefined4 *)(param_3 + 8);
    animINST::GetPos(param_1,(m3dV *)&local_84);
    local_a8 = (*(float *)param_3 - local_84) * (*(float *)param_3 - local_84) +
               (*(float *)(param_3 + 4) - local_80) * (*(float *)(param_3 + 4) - local_80) +
               (*(float *)(param_3 + 8) - local_7c) * (*(float *)(param_3 + 8) - local_7c);
    if (m3dSimdType == 0) {
      local_a8 = local_a8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar9 = rsqrtss(ZEXT416((uint)local_a8),ZEXT416((uint)local_a8));
      fVar8 = auVar9._0_4_;
      local_a8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_a8 * fVar8 * fVar8) * local_a8
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar5 = (ulonglong)(uint)local_a8;
      uVar6 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar5);
      uVar7 = PackedFloatingMUL(uVar6,uVar6);
      uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
      uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
      uVar6 = PackedFloatingMUL(uVar6,uVar5);
      local_a8 = (float)uVar6;
      FastExitMediaState();
    }
    else {
      local_a8 = SQRT(local_a8);
    }
    fVar8 = local_a8;
    if (((param_8 == (cdtINFO *)0x0) || (((byte)*param_8 & 2) == 0)) ||
       (*(animINST **)(param_8 + 4) != param_1)) {
      fVar1 = param_5 * ___real_3eaaaaab;
      local_a4 = param_5;
      local_9c = param_4;
      local_a8 = fVar1;
      fVar2 = param_4 * ___real_3e800000;
      if (param_5 < fVar1) {
        local_a8 = param_5;
        local_a4 = fVar1;
        local_9c = param_4 * ___real_3e800000;
        fVar2 = param_4;
      }
      fVar1 = local_9c;
      if ((local_a8 <= fVar8) && (fVar1 = fVar2, fVar8 <= local_a4)) {
        local_90 = local_9c;
        local_88 = local_a4;
        local_94 = local_a8;
        local_8c = fVar2;
        if (local_a4 < local_a8) {
          local_94 = local_a4;
          local_88 = local_a8;
          local_8c = local_9c;
          local_90 = fVar2;
        }
        fVar1 = ((fVar8 - local_94) * (local_8c - local_90)) / (local_88 - local_94) + local_90;
      }
      *(float *)(pdVar4 + 8) = fVar1;
    }
    else {
      *(float *)(pdVar4 + 8) = param_4;
    }
    local_c = 6;
    local_4 = 7;
    local_10 = &entCDT_REFINE_EXCL::_vftable_;
    local_8 = param_1;
    if (((*(int **)(param_1 + 0x13c))[0x2d] & 0x800U) == 0) {
      local_78 = *(undefined4 *)param_3;
      local_74 = *(float *)(param_3 + 4);
      local_70 = *(undefined4 *)(param_3 + 8);
      (**(code **)(**(int **)(param_1 + 0x13c) + 0x5c))(local_1c);
      local_74 = local_74 + ___real_3fc00000;
      fStack_18 = fStack_18 + ___real_3fc00000;
      iVar3 = scnSCENE::IsVisiblePoint
                        (gsScenePtr,(m3dV *)&local_78,local_1c,0,(cdtREFINE *)&local_10,
                         (cdtINFO *)0x0);
      if (iVar3 == 0) {
        return;
      }
    }
    if (param_10 != (dmgDISPATCHER *)0x0) {
      (*(code *)**(undefined4 **)param_10)(*(undefined4 *)(param_1 + 0x13c),pdVar4,param_2);
      return;
    }
    msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(param_1 + 0x13c),0x4c5,pdVar4,(msgADDR *)param_2);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:damage.cpp
   addr: 0052ED40 */

int __fastcall dmgIsHiddenObstacles(animINST *param_1,entENTITY *param_2,m3dV *param_3)

{
  int iVar1;
  float *pfStack_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c [2];
  cdtREFINE acStack_14 [4];
  undefined **local_10;
  undefined4 local_c;
  animINST *local_8;
  undefined4 local_4;
  
  local_c = 6;
  local_4 = 7;
  local_10 = &entCDT_REFINE_EXCL::_vftable_;
  if (((*(int **)(param_1 + 0x13c))[0x2d] & 0x800U) != 0) {
    return 0;
  }
  local_28 = *(float *)param_3;
  local_24 = *(undefined4 *)(param_3 + 4);
  local_20 = *(undefined4 *)(param_3 + 8);
  pfStack_2c = local_1c;
  local_8 = param_1;
  (**(code **)(**(int **)(param_1 + 0x13c) + 0x5c))();
  local_28 = local_28 + ___real_3fc00000;
  local_1c[0] = local_1c[0] + ___real_3fc00000;
  iVar1 = scnSCENE::IsVisiblePoint
                    (gsScenePtr,(m3dV *)&pfStack_2c,(m3dV *)&local_20,0,acStack_14,(cdtINFO *)0x0);
  return (uint)(iVar1 == 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:damage.cpp
   addr: 0052EDE0 */

int __fastcall
dmgGetOrgDir(dmgDAMAGE *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,float *param_5)

{
  ulonglong uVar1;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    if (param_3 != (m3dV *)0x0) {
      *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x28);
    }
    if (param_4 != (m3dV *)0x0) {
      *(float *)param_4 = *(float *)param_2 - *(float *)(param_1 + 0x20);
      *(float *)(param_4 + 4) = *(float *)(param_2 + 4) - *(float *)(param_1 + 0x24);
      fVar4 = *(float *)(param_2 + 8);
      fVar5 = *(float *)(param_1 + 0x28);
      *(undefined4 *)(param_4 + 4) = 0;
      *(float *)(param_4 + 8) = fVar4 - fVar5;
      m3dNormalize(param_4);
      in_MM1 = extraout_MM1;
    }
    if (param_5 == (float *)0x0) {
      return 1;
    }
    param_3 = (m3dV *)((*(float *)param_2 - *(float *)(param_1 + 0x20)) *
                       (*(float *)param_2 - *(float *)(param_1 + 0x20)) +
                      (*(float *)(param_2 + 4) - *(float *)(param_1 + 0x24)) *
                      (*(float *)(param_2 + 4) - *(float *)(param_1 + 0x24)) +
                      (*(float *)(param_2 + 8) - *(float *)(param_1 + 0x28)) *
                      (*(float *)(param_2 + 8) - *(float *)(param_1 + 0x28)));
    if (m3dSimdType == 0) {
      fVar4 = (float)param_3 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      *param_5 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar4 * fVar5 * fVar5) * fVar4;
      return 1;
    }
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = ZEXT48(param_3);
      uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      uVar2 = PackedFloatingMUL(uVar2,uVar1);
      FastExitMediaState();
      *param_5 = (float)uVar2;
      return 1;
    }
    break;
  case 1:
  case 2:
  case 3:
    if (param_3 != (m3dV *)0x0) {
      *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x18);
    }
    if (param_4 != (m3dV *)0x0) {
      *(float *)param_4 = *(float *)param_2 - *(float *)(param_1 + 0x10);
      *(float *)(param_4 + 4) = *(float *)(param_2 + 4) - *(float *)(param_1 + 0x14);
      fVar4 = *(float *)(param_2 + 8);
      fVar5 = *(float *)(param_1 + 0x18);
      *(undefined4 *)(param_4 + 4) = 0;
      *(float *)(param_4 + 8) = fVar4 - fVar5;
      m3dNormalize(param_4);
      in_MM1 = extraout_MM1_00;
    }
    if (param_5 == (float *)0x0) {
      return 1;
    }
    param_3 = (m3dV *)((*(float *)param_2 - *(float *)(param_1 + 0x10)) *
                       (*(float *)param_2 - *(float *)(param_1 + 0x10)) +
                      (*(float *)(param_2 + 4) - *(float *)(param_1 + 0x14)) *
                      (*(float *)(param_2 + 4) - *(float *)(param_1 + 0x14)) +
                      (*(float *)(param_2 + 8) - *(float *)(param_1 + 0x18)) *
                      (*(float *)(param_2 + 8) - *(float *)(param_1 + 0x18)));
    if (m3dSimdType == 0) {
      fVar4 = (float)param_3 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      *param_5 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar4 * fVar5 * fVar5) * fVar4;
      return 1;
    }
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = ZEXT48(param_3);
      uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      uVar2 = PackedFloatingMUL(uVar2,uVar1);
      FastExitMediaState();
      *param_5 = (float)uVar2;
      return 1;
    }
    break;
  case 4:
    if (param_3 != (m3dV *)0x0) {
      *(undefined4 *)param_3 = *(undefined4 *)param_2;
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
    }
    if (param_4 != (m3dV *)0x0) {
      *(undefined4 *)param_4 = _m3dVUnitX;
      *(undefined4 *)(param_4 + 4) = DAT_005f9988;
      *(undefined4 *)(param_4 + 8) = DAT_005f998c;
    }
    if (param_5 != (float *)0x0) {
      *param_5 = 0.0;
    }
    return 0;
  default:
    goto switchD_0052edf2_default;
  }
  *param_5 = SQRT((float)param_3);
switchD_0052edf2_default:
  return 1;
}




/* from: gs_shared:damage.cpp
   addr: 0052F0C0 */

void __thiscall dmgWEAPON::dmgWEAPON(dmgWEAPON *this)

{
  *this = (dmgWEAPON)0x0;
  this[1] = (dmgWEAPON)0x40;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined2 *)(this + 0x30) = 0xffff;
  *(undefined2 *)(this + 2) = 0x32;
  *this = DAT_0095d620;
  return;
}




/* from: gs_shared:damage.cpp
   addr: 0052F0F0 */

int __thiscall dmgWEAPON_PACK::Pack(dmgWEAPON_PACK *this,fioFILE_MEM *param_1,msgDATA *param_2)

{
  animINST *paVar1;
  int iVar2;
  
  iVar2 = msgDATA_PACK::Pack((msgDATA_PACK *)this,param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  paVar1 = *(animINST **)(param_2 + 0x2c);
  if ((paVar1 != (animINST *)0x0) && (*(int *)(*(int *)(paVar1 + 0x13c) + 0x8c) != -1)) {
    gsMP_SYSTEM::WriteInst(gsSysMP,(fioFILE *)param_1,paVar1);
  }
  return 1;
}




/* from: gs_shared:damage.cpp
   addr: 0052F140 */

msgDATA * __thiscall dmgWEAPON_PACK::UnPack(dmgWEAPON_PACK *this,fioFILE_MEM *param_1)

{
  msgDATA *pmVar1;
  animINST *paVar2;
  
  pmVar1 = msgDATA_PACK::UnPack((msgDATA_PACK *)this,param_1);
  if (*(int *)(pmVar1 + 0x2c) != 0) {
    paVar2 = gsMP_SYSTEM::ReadInst(gsSysMP,(fioFILE *)param_1);
    *(animINST **)(pmVar1 + 0x2c) = paVar2;
  }
  return pmVar1;
}




/* from: gs_shared:damage.cpp
   addr: 0052F190 */

void __thiscall dmgDAMAGE::dmgDAMAGE(dmgDAMAGE *this,int param_1)

{
  *this = (dmgDAMAGE)0x0;
  this[1] = (dmgDAMAGE)0x40;
  *(int *)(this + 4) = param_1;
  *(undefined2 *)(this + 2) = 0x10;
  return;
}

