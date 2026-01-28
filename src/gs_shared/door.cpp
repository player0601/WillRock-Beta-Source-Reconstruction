
/* from: gs_shared:door.cpp
   addr: 00543B00 */

int __fastcall doorInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_door,0x444f4f52,0x28,doorDOOR::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: gs_shared:door.cpp
   addr: 00543B40 */

int __thiscall
doorDOOR::ProcessMsg(doorDOOR *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      (**(code **)(*(int *)this + 0x6c))();
      return 0;
    }
    if (param_1 == 1) {
      (**(code **)(*(int *)this + 0x68))();
      return 0;
    }
    if (param_1 == 2) {
      (**(code **)(*(int *)this + 0x70))();
      return 0;
    }
  }
  else if (param_1 == 0x3f8) {
    iVar2 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_OPEN);
    if (iVar2 != 0) {
      uVar1 = *(uint *)(this + 0x14f);
      *(uint *)(this + 0x14f) = uVar1 | 0x40;
      *(uint *)(this + 0x14f) = uVar1 & 0xffffff7f | 0x40;
      return 0;
    }
    iVar2 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_CLOSE);
    if (iVar2 != 0) {
      uVar1 = *(uint *)(this + 0x14f);
      *(uint *)(this + 0x14f) = uVar1 | 0x80;
      *(uint *)(this + 0x14f) = uVar1 & 0xffffffbf | 0x80;
    }
  }
  else if (param_1 == 0x40c) {
    (**(code **)(*(int *)this + 0x78))(param_2);
    return 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:door.cpp
   addr: 00543C10 */

int __thiscall doorDOOR::ProcessINIT(doorDOOR *this)

{
  float fVar1;
  int iVar2;
  int local_8;
  uint local_4;
  
  iVar2 = animTPL::FindSeqName(*(animTPL **)(*(int *)(this + 0xbc) + 0x138),s_OPEN);
  *(int *)(this + 0x153) = iVar2;
  if (iVar2 != -1) {
    iVar2 = animTPL::FindSeqName(*(animTPL **)(*(int *)(this + 0xbc) + 0x138),s_CLOSE);
    *(int *)(this + 0x157) = iVar2;
    if (iVar2 != -1) {
      fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90) + 0x50 +
                        iVar2 * 0x88) * ___real_3a83126f;
      *(float *)(this + 0x15f) = fVar1;
      iVar2 = *(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90);
      local_4 = (uint)(ABS(fVar1 - *(float *)(iVar2 + 0x50 + *(int *)(this + 0x153) * 0x88) *
                                   ___real_3a83126f) < _DAT_005ddc8c);
      if ((float)local_4 == ___real_00000000) {
        *(float *)(iVar2 + 0x50 + *(int *)(this + 0x153) * 0x88) = fVar1 * ___real_447a0000;
      }
      animINST::SetAnimSeq
                (*(animINST **)(this + 0xbc),*(int *)(this + 0x157),*(float *)(this + 0x15f));
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 2;
      if (((byte)(*(animINST **)(this + 0xbc))[4] & 0x40) != 0) {
        *(undefined4 *)(this + 0x1c) = 0x28;
      }
      animINST::GetInt(*(animINST **)(this + 0xbc),s_DOOR,s_nmbLocks,(int *)(this + 0x30));
      iVar2 = animINST::GetBool(*(animINST **)(this + 0xbc),s_DOOR,s_isOneWay,&local_8);
      if ((iVar2 != 0) && (local_8 != 0)) {
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
      }
      iVar2 = animINST::GetBool(*(animINST **)(this + 0xbc),s_DOOR,s_isOpenOnce,&local_8);
      if ((iVar2 != 0) && (local_8 != 0)) {
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x100;
      }
      *(float *)(this + 0x15b) = DAT_005f970c;
      animINST::GetFloat(*(animINST **)(this + 0xbc),s_DOOR,s_radOpen,(float *)(this + 0x15b));
      iVar2 = animINST::GetBool(*(animINST **)(this + 0xbc),s_DOOR,s_isOpen,&local_8);
      if ((iVar2 != 0) && (local_8 != 0)) {
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x40;
      }
      iVar2 = animINST::GetBool(*(animINST **)(this + 0xbc),s_DOOR,s_isOpenForever,&local_8);
      if ((iVar2 != 0) && (local_8 != 0)) {
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x400;
      }
      gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:door.cpp
   addr: 00543E60 */

void __thiscall doorDOOR::ProcessFRAME(doorDOOR *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  entENTITY *peVar5;
  float fVar6;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  m3dV mStack_14;
  undefined1 uStack_13;
  undefined2 uStack_12;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((byte)this[0x88] & 1) == 0) {
    iVar1 = *(int *)(this + 0x14f);
    fVar6 = *(float *)(*(int *)(this + 0xbc) + 0x24);
    iVar2 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
    iVar3 = (**(code **)(*(int *)this + 0x74))();
    if (iVar3 == 0) {
      if (iVar2 != *(int *)(this + 0x157)) {
        animINST::SetAnimSeq
                  (*(animINST **)(this + 0xbc),*(int *)(this + 0x157),
                   *(float *)(this + 0x15f) - fVar6);
      }
      iVar3 = animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
      if ((iVar3 != 0) && ((*(uint *)(this + 0x14f) & 1) != 0)) {
        if ((*(uint *)(this + 0x14f) & 0x100) != 0) {
          for (peVar5 = gsMP_SERVER::GetNextPlayer(gsSysServer,(entENTITY *)0x0);
              peVar5 != (entENTITY *)0x0; peVar5 = gsMP_SERVER::GetNextPlayer(gsSysServer,peVar5)) {
            (**(code **)(*(int *)peVar5 + 0x68))(&fStack_2c);
            animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&fStack_38);
            animINST::GetDir(*(animINST **)(this + 0xbc),&mStack_14);
            fStack_20 = fStack_38 - fStack_2c;
            fStack_1c = fStack_34 - fStack_28;
            fStack_18 = fStack_30 - fStack_24;
            fVar6 = m3dAngleVector((m3dV *)&fStack_20,&mStack_14);
            if (fVar6 < ___real_42b40000) goto LAB_0054401f;
          }
          *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x20;
          *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
        }
LAB_0054401f:
        *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 2;
        uVar4 = *(uint *)(this + 0x14f);
        *(uint *)(this + 0x14f) = uVar4 & 0xfffffffe;
        *(uint *)(this + 0x14f) = uVar4 & 0xfffffffe | 2;
      }
    }
    else {
      if (((byte)this[0x14f] & 2) != 0) {
        *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 1;
      }
      uVar4 = *(uint *)(this + 0x14f) & 0xfffffffd;
      *(uint *)(this + 0x14f) = uVar4;
      *(uint *)(this + 0x14f) = uVar4 | 1;
      *(uint *)(this + 0x14f) = uVar4 | 9;
      if (iVar2 != *(int *)(this + 0x153)) {
        animINST::SetAnimSeq
                  (*(animINST **)(this + 0xbc),*(int *)(this + 0x153),
                   *(float *)(this + 0x15f) - fVar6);
      }
      animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
    }
    iStack_c = *(int *)(this + 0x14f);
    if ((iVar1 != iStack_c) || (iVar2 != *(int *)(*(int *)(this + 0xbc) + 0xe0))) {
      mStack_14 = (m3dV)0x0;
      uStack_13 = 0x40;
      uStack_10 = 0;
      uStack_12 = 0x14;
      uStack_8 = *(undefined4 *)(*(int *)(this + 0xbc) + 0xe0);
      uStack_4 = *(undefined4 *)(*(int *)(this + 0xbc) + 0x24);
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)&mStack_14,0x20000,0xffffffff,
                 0xfffffffd);
    }
  }
  else {
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
  }
  if ((*(uint *)(this + 0x88) & 4) != 0) {
    *(float *)(this + 0x163) = gsElapsedTime + *(float *)(this + 0x163);
  }
  if ((*(uint *)(this + 0x88) & 2) != 0) {
    *(float *)(this + 0x167) = gsElapsedTime + *(float *)(this + 0x167);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:door.cpp
   addr: 00544120 */

int __thiscall doorDOOR::IsReadyOpen(doorDOOR *this)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  plgsACTION *ppVar4;
  int iVar5;
  aiNPC *paVar6;
  ulonglong uVar7;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 extraout_MM1_01;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined2 uStack_36;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  m3dV amStack_c [12];
  
  uVar1 = *(uint *)(this + 0x14f);
  if ((uVar1 & 0x20) == 0) {
    if (((uVar1 & 1) != 0) && ((uVar1 & 0x400) != 0)) {
      return 1;
    }
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_88);
    bVar3 = false;
    for (ppVar4 = (plgsACTION *)gsMP_SERVER::GetNextPlayer(gsSysServer,(entENTITY *)0x0);
        ppVar4 != (plgsACTION *)0x0;
        ppVar4 = (plgsACTION *)gsMP_SERVER::GetNextPlayer(gsSysServer,(entENTITY *)ppVar4)) {
      local_70 = *(float *)(this + 0x15b);
      bVar2 = false;
      animINST::GetPos(*(animINST **)(ppVar4 + 0xbc),(m3dV *)&local_68);
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_44);
      local_90 = (local_68 - local_44) * (local_68 - local_44) +
                 (local_60 - local_3c) * (local_60 - local_3c);
      if (m3dSimdType == 0) {
        local_90 = local_90 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar10 = rsqrtss(ZEXT416((uint)local_90),ZEXT416((uint)local_90));
        fVar11 = auVar10._0_4_;
        local_90 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - local_90 * fVar11 * fVar11) *
                   local_90;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar7 = (ulonglong)(uint)local_90;
        uVar8 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar7);
        uVar9 = PackedFloatingMUL(uVar8,uVar8);
        uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
        uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
        uVar8 = PackedFloatingMUL(uVar8,uVar7);
        local_90 = (float)uVar8;
        FastExitMediaState();
      }
      else {
        local_90 = SQRT(local_90);
      }
      if ((local_90 < local_70) && (ABS(local_64 - local_40) < local_70 * ___real_3f000000)) {
        bVar2 = true;
      }
      if (((byte)this[0x14f] & 4) != 0) {
        (**(code **)(*(int *)ppVar4 + 0x68))(&local_18);
        animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&fStack_30);
        animINST::GetDir(*(animINST **)(this + 0xbc),amStack_c);
        fStack_24 = fStack_30 - local_18;
        fStack_20 = fStack_2c - fStack_14;
        fStack_1c = fStack_28 - fStack_10;
        fVar11 = m3dAngleVector((m3dV *)&fStack_24,amStack_c);
        if (fVar11 < ___real_42b40000) {
          bVar2 = false;
        }
      }
      bVar3 = (bool)(bVar3 | bVar2);
      if ((0 < *(int *)(this + 0x30)) && (bVar2)) {
        local_6c = *(float *)(this + 0x15b) * ___real_3f000000;
        bVar2 = false;
        animINST::GetPos(*(animINST **)(ppVar4 + 0xbc),(m3dV *)&local_50);
        animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&fStack_5c);
        local_90 = (local_50 - fStack_5c) * (local_50 - fStack_5c) +
                   (fStack_48 - fStack_54) * (fStack_48 - fStack_54);
        if (m3dSimdType == 0) {
          local_90 = local_90 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar10 = rsqrtss(ZEXT416((uint)local_90),ZEXT416((uint)local_90));
          fVar11 = auVar10._0_4_;
          local_90 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_90 * fVar11 * fVar11) *
                     local_90;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar7 = (ulonglong)(uint)local_90;
          uVar8 = PackedFloatingReciprocalSQRAprox(extraout_MM1_00,uVar7);
          uVar9 = PackedFloatingMUL(uVar8,uVar8);
          uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
          uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
          uVar8 = PackedFloatingMUL(uVar8,uVar7);
          local_90 = (float)uVar8;
          FastExitMediaState();
        }
        else {
          local_90 = SQRT(local_90);
        }
        if ((local_90 < local_6c) && (ABS(fStack_4c - fStack_58) < local_6c * ___real_3f000000)) {
          bVar2 = true;
        }
        if ((((((byte)this[0x14f] & 4) == 0) || (iVar5 = IsPlrBeforeDoor(this,ppVar4), iVar5 != 0))
            && (bVar2)) && (___real_40000000 < *(float *)(this + 0x163))) {
          *(undefined4 *)(this + 0x163) = 0;
          uStack_38 = 0;
          uStack_37 = 0x40;
          uStack_36 = 8;
          uStack_34 = 1;
          (**(code **)(*(int *)gsSysServer + 0x2c))
                    (*(undefined4 *)(ppVar4 + 0x90),this,0x40c,&uStack_38,0x10000);
        }
      }
    }
    if (*(int *)(this + 0x30) < 1) {
      if (bVar3) {
        uVar1 = *(uint *)(this + 0x14f);
        *(uint *)(this + 0x14f) = uVar1 & 0xffffffbf;
        *(uint *)(this + 0x14f) = uVar1 & 0xffffff3f;
        return 1;
      }
      uVar1 = *(uint *)(this + 0x14f);
      if ((uVar1 & 0x40) != 0) {
        return 1;
      }
      if ((-1 < (char)uVar1) && ((uVar1 & 8) != 0)) {
        for (paVar6 = aiNPC::GetNext((aiNPC *)0x0,0); paVar6 != (aiNPC *)0x0;
            paVar6 = aiNPC::GetNext(paVar6,0)) {
          animINST::GetPos(*(animINST **)(paVar6 + 0xbc),(m3dV *)&fStack_7c);
          local_90 = (fStack_7c - local_88) * (fStack_7c - local_88) +
                     (fStack_74 - fStack_80) * (fStack_74 - fStack_80);
          if (m3dSimdType == 0) {
            local_90 = local_90 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar10 = rsqrtss(ZEXT416((uint)local_90),ZEXT416((uint)local_90));
            fVar11 = auVar10._0_4_;
            local_90 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - local_90 * fVar11 * fVar11) *
                       local_90;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar7 = (ulonglong)(uint)local_90;
            uVar8 = PackedFloatingReciprocalSQRAprox(extraout_MM1_01,uVar7);
            uVar9 = PackedFloatingMUL(uVar8,uVar8);
            uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
            uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
            uVar8 = PackedFloatingMUL(uVar8,uVar7);
            local_90 = (float)uVar8;
            FastExitMediaState();
          }
          else {
            local_90 = SQRT(local_90);
          }
          if ((local_90 < *(float *)(this + 0x15b)) &&
             (ABS(fStack_78 - fStack_84) < *(float *)(this + 0x15b) * ___real_3f000000)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:door.cpp
   addr: 00544680 */

int __thiscall doorDOOR::IsPlrBeforeDoor(doorDOOR *this,plgsACTION *param_1)

{
  float unaff_ESI;
  float fVar1;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  m3dV amStack_10 [16];
  
  (**(code **)(*(int *)param_1 + 0x68))(&local_24);
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&stack0xffffffcc);
  animINST::GetDir(*(animINST **)(this + 0xbc),amStack_10);
  fStack_1c = unaff_ESI - fStack_28;
  fStack_18 = fStack_30 - local_24;
  fStack_14 = fStack_2c - fStack_20;
  fVar1 = m3dAngleVector((m3dV *)&fStack_1c,amStack_10);
  if (fVar1 < ___real_42b40000) {
    return 0;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:door.cpp
   addr: 00544710 */

void __thiscall doorDOOR::ProcessMP_NOTIFY(doorDOOR *this,gsEVENT *param_1)

{
  int iVar1;
  gsSTRINGS *this_00;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  this_00 = gsStrings;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == -100) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined4 *)(this + 0x14f) = *(undefined4 *)(iVar1 + 4);
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),*(int *)(iVar1 + 8),*(float *)(iVar1 + 0xc));
  }
  else {
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0x14f) = *(undefined4 *)(param_1 + 8);
      animINST::SetAnimSeq
                (*(animINST **)(this + 0xbc),*(int *)(param_1 + 0xc),*(float *)(param_1 + 0x10));
      return;
    }
    if ((iVar1 == 1) && (___real_41000000 < *(float *)(this + 0x167))) {
      if (uiSystem != (uiUI_SYSTEM *)0x0) {
        iVar1 = *(int *)uiSystem;
        uVar5 = 0;
        uVar4 = 0x40000000;
        iVar2 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_DOOR_LOCKED);
        puVar3 = gsSTRINGS::GetStringById(this_00,iVar2);
        (**(code **)(iVar1 + 0x20))(puVar3,uVar4,uVar5);
      }
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x200;
      *(undefined4 *)(this + 0x167) = 0;
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:door.cpp
   addr: 005447F0 */

void __thiscall doorDOOR::ProcessMP_GET_SYNC_DATA(doorDOOR *this,void *param_1)

{
  undefined *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_0096343c & 1) == 0) {
      DAT_0096343c = DAT_0096343c | 1;
      DAT_00963440 = 0;
      DAT_00963441 = 0x40;
      DAT_00963444 = 0;
      DAT_00963448 = 0xffffffff;
      _DAT_00963442 = 0x10;
      atexit((_func_4879 *)&__E8);
    }
    puVar1 = &DAT_00963440;
    *(undefined1 **)param_1 = &DAT_00963440;
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(this + 0x14f);
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(*(int *)(this + 0xbc) + 0xe0);
  *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(*(int *)(this + 0xbc) + 0x24);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: gs_shared:door.cpp
   addr: 00544880
   addr: 00544880
   addr: 00544880 */

void __thiscall bttnBUTTON::ProcessMP_WRITE_SYNC_DATA(bttnBUTTON *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined4 uVar2;
  gsMSG_MP_SAVELOAD *pgVar3;
  undefined2 *puStack_34;
  gsMSG_MP_SAVELOAD **ppgStack_28;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  
  pgVar3 = param_1;
  local_e = 0xffffffff;
  local_a = 0xffff;
  uStack_8 = 0xffff;
  local_6 = 0xffff;
  uStack_4 = 0xffff;
  iVar1 = *(int *)param_1;
  local_10 = 0;
  ppgStack_28 = (gsMSG_MP_SAVELOAD **)0x5448b6;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
  param_1 = *(gsMSG_MP_SAVELOAD **)(iVar1 + 4);
  ppgStack_28 = &param_1;
  (**(code **)(**(int **)(pgVar3 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar3 + 4),(fioCHUNK *)&stack0xffffffe4);
  puStack_34 = (undefined2 *)0x5448ed;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar3 + 4),0xf1,(fioCHUNK *)&stack0xffffffe4);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  uStack_8 = (undefined2)uVar2;
  local_6 = (undefined2)((uint)uVar2 >> 0x10);
  puStack_34 = &uStack_8;
  (**(code **)(**(int **)(pgVar3 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar3 + 4),(fioCHUNK *)&ppgStack_28);
  fioFILE::WriteChunk(*(fioFILE **)(pgVar3 + 4),0xf2,(fioCHUNK *)&ppgStack_28);
  (**(code **)(**(int **)(pgVar3 + 4) + 0x18))(&stack0xffffffec,4,4);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar3 + 4),(fioCHUNK *)&puStack_34);
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar3 + 4));
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)pgVar3);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:door.cpp
   addr: 00544970 */

void __thiscall doorDOOR::ProcessMP_READ_SYNC_DATA(doorDOOR *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  short local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_10;
  undefined4 local_4;
  
  puVar3 = *(undefined **)param_1;
  local_20 = 0;
  uStack_1e = 0xffff;
  uStack_1c = 0xffff;
  local_1a = 0xffffffff;
  local_16 = 0xffffffff;
  if (puVar3 == (undefined *)0x0) {
    if ((DAT_0096343c & 1) == 0) {
      DAT_0096343c = DAT_0096343c | 1;
      DAT_00963444 = 0;
      DAT_00963448 = 0xffffffff;
      _DAT_00963440 = 0x104000;
      atexit((_func_4879 *)&__E8);
    }
    puVar3 = &DAT_00963440;
    *(undefined **)param_1 = &DAT_00963440;
    local_10 = 0x104000;
    DAT_00963444 = 0;
    _DAT_00963440 = 0x104000;
    DAT_00963448 = 0xffffffff;
    DAT_0096344c = local_4;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_20);
  do {
    if ((iVar1 == 0) || (local_20 == 1)) {
      rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
      return;
    }
    if (local_20 == 0xf0) {
      puVar2 = puVar3 + 4;
LAB_00544a53:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2,4,4);
    }
    else {
      if (local_20 == 0xf1) {
        puVar2 = puVar3 + 8;
        goto LAB_00544a53;
      }
      if (local_20 == 0xf2) {
        puVar2 = puVar3 + 0xc;
        goto LAB_00544a53;
      }
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_20);
  } while( true );
}




/* from: gs_shared:door.cpp
   addr: 00544A90 */

void __thiscall doorDOOR::ProcessUNLOCK(doorDOOR *this)

{
  int iVar1;
  gsSTRINGS *this_00;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  this_00 = gsStrings;
  if ((*(int *)(this + 0x30) == 0) && (uiSystem != (uiUI_SYSTEM *)0x0)) {
    iVar1 = *(int *)uiSystem;
    uVar5 = 0;
    uVar4 = 0x3fc00000;
    iVar2 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_DOOR_UNLOCKED);
    puVar3 = gsSTRINGS::GetStringById(this_00,iVar2);
    (**(code **)(iVar1 + 0x20))(puVar3,uVar4,uVar5);
  }
  return;
}




/* from: gs_shared:door.cpp
   addr: 00544B00 */

entENTITY * __fastcall doorDOOR::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x16b);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0xffffffff;
    *(undefined4 *)(this + 0x157) = 0xffffffff;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}

