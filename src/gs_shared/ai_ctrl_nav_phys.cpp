
/* from: gs_shared:ai_ctrl_nav_phys.cpp
   addr: 00532420 */

void __thiscall aiNPC::MoveToGoal(aiNPC *this)

{
  undefined4 unaff_ESI;
  undefined4 *puStack_30;
  undefined4 *puVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  puStack_30 = (undefined4 *)0x532436;
  animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
  local_18 = *(undefined4 *)(this + 0x3db);
  local_14 = *(undefined4 *)(this + 0x3df);
  local_10 = *(undefined4 *)(this + 0x3e3);
  if ((*(uint *)(this + 1099) & 0x400) == 0) {
    puStack_30 = (undefined4 *)0x53246e;
    (**(code **)(*(int *)this + 0xe0))();
  }
  if ((*(uint *)(this + 1099) & 0x200) == 0) {
    local_24 = *(undefined4 *)(this + 0x3f3);
    local_20 = *(undefined4 *)(this + 0x3f7);
    puVar1 = &local_24;
    local_1c = *(undefined4 *)(this + 0x3fb);
    puStack_30 = &local_18;
    (**(code **)(*(int *)this + 0xb4))(*(undefined4 *)(this + 0x153));
    animINST::Translate(*(animINST **)(this + 0xbc),(m3dV *)&puStack_30,0);
    *(undefined4 **)(this + 0x427) = puStack_30;
    *(undefined4 **)(this + 0x42b) = puVar1;
    *(undefined4 *)(this + 0x42f) = unaff_ESI;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_nav_phys.cpp
   addr: 005324F0 */

void __thiscall aiNPC::GetClampingSpeeds(aiNPC *this,float param_1,float *param_2,float *param_3)

{
  ulonglong uVar1;
  undefined8 in_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_8;
  
  if (((byte)this[0x14f] & 1) == 0) {
    *param_2 = param_1;
    *param_3 = 0.0;
    return;
  }
  fVar5 = param_1 * param_1 - *(float *)(this + 0x157) * *(float *)(this + 0x157);
  if (fVar5 <= _DAT_005dd424) {
    if (-_DAT_005dd424 <= fVar5) {
      *param_2 = 0.0;
      *param_3 = *(float *)(this + 0x157);
      return;
    }
    fVar5 = -fVar5;
    if (m3dSimdType == 0) {
      local_8 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar6 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
      fVar4 = auVar6._0_4_;
      local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar4 * fVar4) * local_8;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar1 = (ulonglong)(uint)fVar5;
      uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
      uVar3 = PackedFloatingMUL(uVar2,uVar2);
      uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
      uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
      in_MM1 = PackedFloatingMUL(uVar2,uVar1);
      local_8 = (float)in_MM1;
      FastExitMediaState();
    }
    else {
      local_8 = SQRT(fVar5);
    }
    fVar4 = param_1 * ___real_3e4ccccd;
    if (local_8 <= fVar4) {
      if (m3dSimdType != 0) {
        if (m3dSimdType != 1) {
          *param_2 = SQRT(fVar5);
          *param_3 = *(float *)(this + 0x157);
          return;
        }
        FastExitMediaState();
        uVar1 = (ulonglong)(uint)fVar5;
        uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
        uVar3 = PackedFloatingMUL(uVar2,uVar2);
        uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
        uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
        uVar2 = PackedFloatingMUL(uVar2,uVar1);
        FastExitMediaState();
        *param_2 = (float)uVar2;
        *param_3 = *(float *)(this + 0x157);
        return;
      }
      fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar4 = auVar6._0_4_;
      fVar4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar4 * fVar4) * fVar5;
    }
    *param_2 = fVar4;
    *param_3 = *(float *)(this + 0x157);
    return;
  }
  if (m3dSimdType == 0) {
    fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar4 = auVar6._0_4_;
    *param_2 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar4 * fVar4) * fVar5;
    *param_3 = *(float *)(this + 0x157);
    return;
  }
  if (m3dSimdType != 1) {
    *param_2 = SQRT(fVar5);
    *param_3 = *(float *)(this + 0x157);
    return;
  }
  FastExitMediaState();
  uVar1 = (ulonglong)(uint)fVar5;
  uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
  uVar3 = PackedFloatingMUL(uVar2,uVar2);
  uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
  uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
  uVar2 = PackedFloatingMUL(uVar2,uVar1);
  FastExitMediaState();
  *param_2 = (float)uVar2;
  *param_3 = *(float *)(this + 0x157);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00532cb7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: gs_shared:ai_ctrl_nav_phys.cpp
   addr: 00532800 */

void __thiscall aiNPC::ClampGoalFrame(aiNPC *this,float param_1,m3dV *param_2,m3dV *param_3)

{
  float *pfVar1;
  m3dV *pmVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 in_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float local_70 [4];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_30 [3];
  float local_24 [3];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((byte)this[0x14f] & 1) == 0) {
    local_c = 0.0;
    local_8 = param_1;
  }
  else {
    fVar14 = param_1 * param_1 - *(float *)(this + 0x157) * *(float *)(this + 0x157);
    if (fVar14 <= _DAT_005dd424) {
      if (-_DAT_005dd424 <= fVar14) {
        local_c = *(float *)(this + 0x157);
        local_8 = 0.0;
      }
      else {
        fVar14 = -fVar14;
        if (m3dSimdType == 0) {
          local_8 = fVar14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar13 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
          fVar12 = auVar13._0_4_;
          local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar12 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar12 * fVar12) *
                    local_8;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar6 = (ulonglong)(uint)fVar14;
          uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar6);
          uVar8 = PackedFloatingMUL(uVar7,uVar7);
          uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
          uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
          in_MM1 = PackedFloatingMUL(uVar7,uVar6);
          local_8 = (float)in_MM1;
          FastExitMediaState();
        }
        else {
          local_8 = SQRT(fVar14);
        }
        if (local_8 <= param_1 * ___real_3e4ccccd) {
          if (m3dSimdType == 0) {
            fVar14 = fVar14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar13 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
            fVar12 = auVar13._0_4_;
            local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar12 *
                      (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar14 * fVar12 * fVar12) *
                      fVar14;
            local_c = *(float *)(this + 0x157);
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar6 = (ulonglong)(uint)fVar14;
            uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar6);
            uVar8 = PackedFloatingMUL(uVar7,uVar7);
            uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
            uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
            uVar7 = PackedFloatingMUL(uVar7,uVar6);
            local_8 = (float)uVar7;
            FastExitMediaState();
            local_c = *(float *)(this + 0x157);
          }
          else {
            local_8 = SQRT(fVar14);
            local_c = *(float *)(this + 0x157);
          }
        }
        else {
          local_c = *(float *)(this + 0x157);
          local_8 = param_1 * ___real_3e4ccccd;
        }
      }
    }
    else if (m3dSimdType == 0) {
      fVar14 = fVar14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar13 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar12 = auVar13._0_4_;
      local_c = *(float *)(this + 0x157);
      local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar12 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar14 * fVar12 * fVar12) * fVar14;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar6 = (ulonglong)(uint)fVar14;
      uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar6);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar6);
      FastExitMediaState();
      local_c = *(float *)(this + 0x157);
      local_8 = (float)uVar7;
    }
    else {
      local_c = *(float *)(this + 0x157);
      local_8 = SQRT(fVar14);
    }
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)local_24);
  fVar14 = m3xzAngleVector((m3dV *)local_24,param_2);
  if (*(float *)(this + 0x15f) < ABS(fVar14)) {
    if ((((byte)this[0x44f] & 2) == 0) || (((byte)this[1099] & 4) != 0)) {
      local_8 = 0.0;
    }
    else if (ABS(fVar14) <= ___real_42f00000) {
      param_2 = *(m3dV **)(this + 0x15f);
      pmVar2 = (m3dV *)-*(float *)(this + 0x15f);
      param_1 = (float)pmVar2;
      if ((float)param_2 < (float)pmVar2) {
        param_1 = (float)param_2;
        param_2 = pmVar2;
      }
      if ((param_1 <= fVar14) && (param_1 = fVar14, (float)param_2 < fVar14)) {
        param_1 = (float)param_2;
      }
      m3dMATR::MakeRotY((m3dMATR *)local_70,param_1);
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar7 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),
                                    CONCAT44(local_70[1],local_70[0]));
          uVar8 = PackedFloatingMUL(CONCAT44(local_24[1],local_24[1]),CONCAT44(uStack_5c,local_60));
          uVar9 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_4c,local_50));
          uVar10 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),
                                     CONCAT44(local_70[3],local_70[2]));
          uVar8 = PackedFloatingADD(uVar8,uVar9);
          uVar9 = PackedFloatingMUL(CONCAT44(local_24[1],local_24[1]),CONCAT44(uStack_54,uStack_58))
          ;
          uVar11 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_44,uStack_48)
                                    );
          uVar7 = PackedFloatingADD(uVar7,uVar8);
          uVar8 = PackedFloatingADD(uVar9,uVar11);
          local_30[1] = (float)((ulonglong)uVar7 >> 0x20);
          local_30[0] = (float)uVar7;
          uVar7 = PackedFloatingADD(uVar10,uVar8);
          local_30[2] = (float)uVar7;
          FastExitMediaState();
        }
        else {
          iVar5 = 0;
          do {
            iVar3 = 0;
            pfVar4 = (float *)((int)local_70 + iVar5);
            *(undefined4 *)((int)local_30 + iVar5) = 0;
            fVar14 = ___real_00000000;
            do {
              pfVar1 = local_24 + iVar3;
              fVar12 = *pfVar4;
              iVar3 = iVar3 + 1;
              pfVar4 = pfVar4 + 4;
              fVar14 = *pfVar1 * fVar12 + fVar14;
            } while (iVar3 < 3);
            *(float *)((int)local_30 + iVar5) = fVar14;
            iVar5 = iVar5 + 4;
          } while (iVar5 < 0xc);
        }
      }
      *(float *)param_3 = local_30[0] * ___real_41a00000 + local_18;
      *(float *)(param_3 + 4) = local_30[1] * ___real_41a00000 + local_14;
      *(float *)(param_3 + 8) = local_30[2] * ___real_41a00000 + local_10;
    }
    else {
      *(float *)param_3 = local_24[0] * ___real_41a00000 + local_18;
      *(float *)(param_3 + 4) = local_24[1] * ___real_41a00000 + local_14;
      *(float *)(param_3 + 8) = local_24[2] * ___real_41a00000 + local_10;
    }
  }
  m3dClampVector_L((m3dV *)&local_18,param_3,gsElapsedTime * local_8);
  if (((byte)this[0x14f] & 1) != 0) {
    local_c = gsElapsedTime * local_c;
    fVar14 = *(float *)(this + 0x3bb);
    fVar12 = *(float *)(this + 0x3bf);
    *(float *)param_3 = local_c * *(float *)(this + 0x3b7) + *(float *)param_3;
    *(float *)(param_3 + 4) = local_c * fVar14 + *(float *)(param_3 + 4);
    *(float *)(param_3 + 8) = local_c * fVar12 + *(float *)(param_3 + 8);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_nav_phys.cpp
   addr: 00532DA0 */

cdtREFINE * __thiscall aiNPC::GetFloorPlaceRefiner(aiNPC *this)

{
  if ((DAT_0095d8f0 & 1) == 0) {
    DAT_0095d8f0 = DAT_0095d8f0 | 1;
    _DAT_0095d8d0 = 0;
    _DAT_0095d8d4 = 0;
    _DAT_0095d8d8 = 0;
    _DAT_0095d8cc = &aiCDT_REFINE::_vftable_;
    atexit((_func_4879 *)&__E10);
  }
  _DAT_0095d8d4 = *(undefined4 *)(this + 0xbc);
  _DAT_0095d8d8 = (**(code **)(*(int *)this + 0x78))();
  _DAT_0095d8d0 = 2;
  return (cdtREFINE *)&DAT_0095d8cc;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_nav_phys.cpp
   addr: 00532E20 */

void __thiscall aiNPC::ProcessVoluntaryPhysics(aiNPC *this)

{
  aiNPC *paVar1;
  cdtINFO *pcVar2;
  bool bVar3;
  float fVar4;
  cdtREFINE *pcVar5;
  int iVar6;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  m3dV local_50 [4];
  float fStack_4c;
  m3dV amStack_44 [4];
  float fStack_40;
  float local_38;
  float local_34;
  float local_30;
  m3dV local_2c [4];
  float fStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = _m3dVZero;
  local_c = DAT_00963740;
  local_8 = DAT_00963744;
  local_4 = 0;
  animINST::GetPos(*(animINST **)(this + 0xbc),local_2c);
  paVar1 = this + 0x433;
  local_38 = gsElapsedTime * *(float *)paVar1;
  local_34 = gsElapsedTime * *(float *)(this + 0x437);
  local_30 = gsElapsedTime * *(float *)(this + 0x43b);
  animINST::Translate(*(animINST **)(this + 0xbc),(m3dV *)&local_38,2);
  GetPosRooted(this,local_50);
  pcVar5 = (cdtREFINE *)(**(code **)(*(int *)this + 0x7c))();
  if ((*(uint *)(this + 1099) & 0x200000) == 0) {
    fStack_60 = *(float *)(this + 0x387);
  }
  else {
    fStack_60 = 2.0;
  }
  if (___real_00000000 < *(float *)(this + 0x41f) - fStack_4c) {
    fStack_60 = (*(float *)(this + 0x41f) - fStack_4c) + fStack_60;
  }
  pcVar2 = (cdtINFO *)(this + 0x453);
  iVar6 = scnSCENE::FloorPlace
                    (gsScenePtr,local_50,DAT_005dd428,amStack_44,fStack_60,0.0,0x20,pcVar5,pcVar2);
  if (iVar6 == 0) {
    scnSCENE::FloorPlace
              (gsScenePtr,local_50,DAT_005dd428,amStack_44,fStack_60 + ___real_40400000,0.0,0x20,
               pcVar5,pcVar2);
  }
  if (fStack_60 + *(float *)(this + 0x467) < fStack_4c) {
    fVar4 = ___real_bf800000;
    if (*(float *)(this + 0x437) <= ___real_bf800000) {
      fVar4 = *(float *)(this + 0x437);
    }
    if (*(float *)(this + 0x467) < gsElapsedTime * fVar4 + fStack_4c) {
      fStack_40 = fStack_4c;
      goto LAB_0053301a;
    }
  }
  if (((___real_3c23d70a < ABS(*(float *)(this + 0x437))) ||
      (___real_3d4ccccd < *(float *)(this + 0x477))) && (fStack_4c < fStack_40)) {
    fStack_40 = fStack_4c;
  }
LAB_0053301a:
  if (((byte)*pcVar2 & 2) != 0) {
    *(float *)(this + 0x473) = fStack_40 - *(float *)(this + 0x467);
  }
  iVar6 = ConstrainMotion(this,(m3dV *)(this + 0x41b),amStack_44,(cdtINFO *)&local_20);
  if (iVar6 != 0) {
    (**(code **)(*(int *)this + 0x14c))(&local_20);
  }
  SetPosRooted(this,amStack_44);
  animINST::GetPos(*(animINST **)(this + 0xbc),local_50);
  *(float *)(this + 0x437) = *(float *)(this + 0x437) - gsElapsedTime * *(float *)(this + 0x183);
  fVar4 = (fStack_4c - fStack_28) + *(float *)(this + 0x477);
  *(float *)(this + 0x477) = fVar4;
  if (((byte)*pcVar2 & 2) == 0) {
    if (fVar4 < ___real_c1200000) {
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x20000000;
    }
    if ((fVar4 < ___real_c0a00000) && (*(int *)(this + 1099) < 0)) {
      if ((DAT_0095d8c8 & 1) == 0) {
        DAT_0095d8c8 = DAT_0095d8c8 | 1;
        DAT_0095d8e0 = 0;
        DAT_0095d8e1 = 0x40;
        _DAT_0095d8e4 = 4;
        _DAT_0095d8e2 = 0x10;
        atexit((_func_4879 *)&__E12);
      }
      _DAT_0095d8e8 = 0x42c80000;
      msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x4c5,&DAT_0095d8e0,(msgADDR *)0x0);
    }
    *(undefined4 *)(this + 0x477) = 0;
    *(float *)paVar1 = _m3dVZero;
    *(undefined4 *)(this + 0x437) = DAT_00963740;
    *(undefined4 *)(this + 0x43b) = DAT_00963744;
  }
  else {
    if (___real_3d4ccccd <= *(float *)(this + 0x473)) {
      return;
    }
    fStack_5c = *(float *)paVar1;
    fStack_58 = 0.0;
    fStack_54 = *(float *)(this + 0x43b);
    iVar6 = _m3dNormalize((m3dV *)&fStack_5c);
    if (iVar6 != 0) {
      fVar4 = gsElapsedTime * ___real_43480000;
      fStack_5c = fStack_5c * fVar4;
      fStack_54 = fVar4 * fStack_54;
      if (fStack_5c * fStack_5c + fStack_54 * fStack_54 <=
          *(float *)paVar1 * *(float *)paVar1 + *(float *)(this + 0x43b) * *(float *)(this + 0x43b))
      {
        *(float *)paVar1 = *(float *)paVar1 - fStack_5c;
        *(float *)(this + 0x437) = *(float *)(this + 0x437) - fStack_58 * fVar4;
        *(float *)(this + 0x43b) = *(float *)(this + 0x43b) - fStack_54;
      }
      else {
        *(undefined4 *)(this + 0x43b) = 0;
        *(float *)paVar1 = 0.0;
      }
    }
    if (*(float *)(this + 0x477) < ___real_bf800000) {
      *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x20000000;
    }
    bVar3 = ___real_3c23d70a <= *(float *)(this + 0x437);
    *(undefined4 *)(this + 0x477) = 0;
    if (bVar3) {
      return;
    }
    *(undefined4 *)(this + 0x437) = 0;
  }
  *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xfffff7ff;
  return;
}




/* from: gs_shared:ai_ctrl_nav_phys.cpp
   addr: 00533290 */

void __thiscall aiNPC::ProcessPassivePhysics(aiNPC *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  m3dMATR *pmVar6;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  m3dMATR amStack_40 [64];
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  iVar2 = *(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90);
  GetPosRooted(this,(m3dV *)&local_4c);
  local_58 = local_4c - *(float *)(this + 0x41b);
  iVar3 = *(int *)(this + 0x43f);
  local_54 = local_48 - *(float *)(this + 0x41f);
  local_50 = local_44 - *(float *)(this + 0x423);
  *(float *)(iVar3 + 0xb4) = local_58;
  *(float *)(iVar3 + 0xb8) = local_54;
  *(float *)(iVar3 + 0xbc) = local_50;
  iVar3 = (*(int **)(this + 0x43f))[0x2c];
  (**(code **)(**(int **)(this + 0x43f) + 8))();
  puVar5 = (undefined4 *)(*(int *)(this + 0x43f) + 8);
  pmVar6 = amStack_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pmVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    pmVar6 = pmVar6 + 4;
  }
  animINST::Transform(*(animINST **)(this + 0xbc),amStack_40,0);
  if (((*(byte *)(iVar2 + iVar1 * 0x88 + 0x84) & 1) == 0) ||
     ((*(int *)(*(int *)(this + 0x43f) + 0xb0) <= iVar3 && (iVar3 < 0xb)))) {
    fStack_64 = 0.0;
    fStack_5c = 0.0;
  }
  else {
    fStack_64 = *(float *)(this + 0x40f) - *(float *)(this + 0x41b);
    fStack_5c = *(float *)(this + 0x417) - *(float *)(this + 0x423);
  }
  fStack_60 = -*(float *)(*(int *)(this + 0x43f) + 0x78) - *(float *)(this + 0x443);
  animINST::Translate(*(animINST **)(this + 0xbc),(m3dV *)&fStack_64,2);
  return;
}




/* from: gs_shared:ai_ctrl_nav_phys.cpp
   addr: 005333E0 */

void __thiscall aiNPC::ProcessPhysics(aiNPC *this)

{
  if ((*(uint *)(this + 1099) & 0x100) != 0) {
    (**(code **)(*(int *)this + 0xbc))();
    UpdateUnderwater(this);
    return;
  }
  (**(code **)(*(int *)this + 0xb8))();
  UpdateUnderwater(this);
  return;
}




/* from: gs_shared:ai_ctrl_nav_phys.cpp
   addr: 00533410 */

void __thiscall aiNPC::ApplySpeed(aiNPC *this,m3dV *param_1)

{
  *(undefined4 *)(this + 0x433) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x437) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x43b) = *(undefined4 *)(param_1 + 8);
  return;
}




/* from: gs_shared:ai_ctrl_nav_phys.cpp
   addr: 00533440 */

int __thiscall aiNPC::GetFloorInfo(aiNPC *this,cdtINFO *param_1)

{
  int iVar1;
  aiNPC *paVar2;
  
  if (((byte)this[0x88] & 4) != 0) {
    paVar2 = this + 0x453;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)param_1 = *(undefined4 *)paVar2;
      paVar2 = paVar2 + 4;
      param_1 = param_1 + 4;
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_nav_phys.cpp
   addr: 00533470 */

int __thiscall aiNPC::ConstrainMotion(aiNPC *this,m3dV *param_1,m3dV *param_2,cdtINFO *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  cdtINFO *pcVar5;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  undefined **local_30;
  undefined4 uStack_2c;
  undefined4 local_24;
  undefined4 local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20[4] = _m3dVZero;
  local_c = DAT_00963740;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_8 = DAT_00963744;
  local_4 = 0;
  cdtREFINE::cdtREFINE((cdtREFINE *)&local_30,0,*(animINST **)(this + 0xbc));
  local_24 = 0;
  local_30 = &aiCDT_REFINE::_vftable_;
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_3c);
  local_4c = 0;
  fVar2 = *(float *)(param_2 + 4);
  local_48 = *(float *)param_1;
  local_44 = *(float *)(param_1 + 4);
  local_40 = *(float *)(param_1 + 8);
  local_24 = (**(code **)(*(int *)this + 0x78))();
  *(float *)(param_2 + 4) = *(float *)(this + 0x177) + *(float *)(param_2 + 4);
  local_44 = local_44 + *(float *)(this + 0x177);
  uStack_2c = 9;
  iVar3 = scnSCENE::ConstrSphere
                    (gsScenePtr,(m3dV *)&local_48,param_2,*(float *)(this + 0x16f),0xa0,
                     (cdtREFINE *)&local_30,(cdtINFO *)local_20);
  if (iVar3 != 0) {
    local_4c = 1;
    puVar4 = local_20;
    pcVar5 = param_3;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      pcVar5 = pcVar5 + 4;
    }
  }
  fVar1 = *(float *)(this + 0x177);
  *(float *)(param_2 + 4) = fVar2;
  uStack_2c = 2;
  *(float *)(param_2 + 4) = fVar2 + *(float *)(this + 0x173);
  fVar2 = *(float *)(this + 0x17b);
  *(float *)param_2 = local_3c * fVar2 + *(float *)param_2;
  *(float *)(param_2 + 4) = fStack_38 * fVar2 + *(float *)(param_2 + 4);
  *(float *)(param_2 + 8) = fStack_34 * fVar2 + *(float *)(param_2 + 8);
  fVar2 = *(float *)(this + 0x17b);
  local_48 = local_3c * fVar2 + local_48;
  local_44 = fStack_38 * fVar2 + (local_44 - fVar1) + *(float *)(this + 0x173);
  local_40 = fStack_34 * fVar2 + local_40;
  iVar3 = scnSCENE::ConstrSphere
                    (gsScenePtr,(m3dV *)&local_48,param_2,*(float *)(this + 0x16b),0,
                     (cdtREFINE *)&local_30,(cdtINFO *)local_20);
  if (iVar3 != 0) {
    local_4c = 1;
    puVar4 = local_20;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 4;
    }
  }
  fVar2 = -*(float *)(this + 0x17b);
  *(float *)param_2 = local_3c * fVar2 + *(float *)param_2;
  fVar1 = fStack_38 * fVar2 + *(float *)(param_2 + 4);
  *(float *)(param_2 + 4) = fVar1;
  *(float *)(param_2 + 8) = fStack_34 * fVar2 + *(float *)(param_2 + 8);
  *(float *)(param_2 + 4) = fVar1 - *(float *)(this + 0x173);
  return local_4c;
}

