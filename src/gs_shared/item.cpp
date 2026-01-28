
/* from: gs_shared:item.cpp
   addr: 0053E140 */

int __fastcall itemInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_item,0x2449544d,0x28,itemITEM::Create,s_item,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_00963320);
  if (iVar1 == 0) {
    apMsg(s_Cannot_link_sound_data);
    return 0;
  }
  return 1;
}




/* from: gs_shared:item.cpp
   addr: 0053E1A0 */

int __thiscall
itemITEM::ProcessMsg(itemITEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 < 0x3f5) {
    if (param_1 == 0x3f4) {
      (**(code **)(*(int *)this + 0x74))();
      return 0;
    }
    if (param_1 < 4) {
      if (param_1 == 3) {
        if (*(void **)(this + 0x15f) == param_2) {
          *(undefined4 *)(this + 0x15f) = 0;
          return 0;
        }
      }
      else {
        if (param_1 == 1) {
          (**(code **)(*(int *)this + 0x68))();
          return 0;
        }
        if (param_1 == 2) {
          (**(code **)(*(int *)this + 0x70))();
        }
      }
    }
    else if (param_1 == 1000) {
      (**(code **)(*(int *)this + 0x6c))();
      return 0;
    }
  }
  else if (param_1 == 0x3f8) {
    iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_PICK);
    if (iVar1 != 0) {
      *(int *)(this + 0x30) = *(int *)(this + 0x30) + -1;
      Unlock(this,(entIACTIVE_OBJ *)param_3);
      return 0;
    }
    iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_UNLOCK);
    if (iVar1 != 0) {
      Unlock(this,(entIACTIVE_OBJ *)param_3);
      return 1;
    }
  }
  else {
    if (param_1 == 0x3fb) {
      *param_4 = 1;
      return 1;
    }
    if (param_1 == 0x40c) {
      (**(code **)(*(int *)this + 0x78))(param_2);
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:item.cpp
   addr: 0053E2B0 */

int __thiscall itemITEM::ProcessINIT(itemITEM *this)

{
  itemITEM *piVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  int local_48;
  int local_44;
  char local_40 [64];
  
  local_48 = 1;
  animINST::GetBool(*(animINST **)(this + 0xbc),s_ITEM,s_isPlaceGround,&local_48);
  if (local_48 == 1) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 2;
  }
  local_48 = 0;
  animINST::GetBool(*(animINST **)(this + 0xbc),s_ITEM,s_isMoveUponUnlock,&local_48);
  if (local_48 == 1) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
  }
  local_48 = 1;
  animINST::GetBool(*(animINST **)(this + 0xbc),s_ITEM,s_isRotated,&local_48);
  if (local_48 == 1) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 8;
  }
  local_44 = 0;
  animINST::GetInt(*(animINST **)(this + 0xbc),s_ITEM,s_nmbPicks,&local_44);
  if (0 < local_44) {
    *(int *)(this + 0x30) = local_44;
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
  }
  iVar4 = *(int *)(*(animINST **)(this + 0xbc) + 0x138);
  if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x8c))) {
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
  }
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  iVar4 = 0;
  do {
    cVar2 = s_sfx_item[iVar4];
    local_40[iVar4] = cVar2;
    iVar4 = iVar4 + 1;
  } while (cVar2 != '\0');
  animINST::GetStr(*(animINST **)(this + 0xbc),s_ITEM,s_sfxName,local_40,0x40);
  *(float *)(this + 0x157) = 0.95;
  animINST::GetFloat(*(animINST **)(this + 0xbc),s_ITEM,s_height,(float *)(this + 0x157));
  piVar1 = this + 0x15b;
  *(float *)piVar1 = 0.6;
  animINST::GetFloat(*(animINST **)(this + 0xbc),s_ITEM,s_heightDisp,(float *)piVar1);
  fVar3 = *(float *)piVar1 * ___real_3ecccccd;
  *(undefined4 *)(this + 0x167) = 0;
  *(undefined4 *)(this + 0x163) = 0x40000000;
  *(float *)piVar1 = fVar3;
  *(undefined4 *)(this + 0x16b) = 0;
  (**(code **)(*(int *)this + 0x84))(local_40);
  *(undefined4 *)(this + 399) = 0;
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
  *(undefined4 *)(*(int *)(this + 0xbc) + 0xec) = *(undefined4 *)(*(int *)(this + 0xbc) + 0x10);
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
  return 1;
}




/* from: gs_shared:item.cpp
   addr: 0053E4B0 */

void __thiscall itemITEM::ProcessINIT_LEVEL(itemITEM *this)

{
  if (((byte)this[0x14f] & 2) != 0) {
    (**(code **)(*(int *)this + 0x44))(*(undefined4 *)(this + 0x157),1,this + 0x16f);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:item.cpp
   addr: 0053E4E0 */

void __thiscall itemITEM::ProcessFRAME(itemITEM *this)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  entENTITY *peVar5;
  int iVar6;
  msgDATA mStack_10;
  undefined1 uStack_f;
  undefined2 uStack_e;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (((byte)this[0x14f] & 0x20) != 0) {
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
  }
  if (((*(byte *)(*(int *)(this + 0xbc) + 4) & 1) == 0) && (((byte)this[0x14f] & 1) != 0)) {
    (**(code **)(*(int *)this + 0x8c))(1);
  }
  else {
    (**(code **)(*(int *)this + 0x8c))(0);
  }
  if ((*(int *)(gsSysMP + 0x28) != 1) && (((byte)this[0x88] & 4) != 0)) {
    m3dUpdateTimeField((float *)(this + 399),gsElapsedTime);
    if ((((byte)this[0x14f] & 1) == 0) && (*(float *)(this + 399) < _DAT_005dda10)) {
      (**(code **)(*(int *)this + 0x7c))(1);
      mStack_10 = (msgDATA)0x0;
      uStack_f = 0x40;
      uStack_c = 0;
      uStack_e = 0xc;
      uStack_8 = 1;
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&mStack_10,0x20000,0xfffffffd,0xfffffffd);
    }
  }
  uVar3 = *(uint *)(this + 0x14f);
  if ((uVar3 & 1) != 0) {
    if (((((byte)this[0x88] & 4) != 0) && (0 < *(int *)(this + 0x30))) || ((uVar3 & 0x10) != 0)) {
      *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
      return;
    }
    uVar4 = *(uint *)(*(int *)(this + 0xbc) + 4);
    if ((uVar4 & 3) == 0) {
      if ((int)uVar4 < 0) {
        if ((uVar3 & 8) != 0) {
          m3dMATR::RotateY((m3dMATR *)
                           (*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x10) + 0x38) + 0x7c),
                           gsElapsedTime * ___real_428c0000,2);
        }
        fVar1 = gsElapsedTime + *(float *)(this + 0x167);
        *(float *)(this + 0x167) = fVar1;
        if (*(float *)(this + 0x163) < fVar1) {
          *(float *)(this + 0x167) = fVar1 - *(float *)(this + 0x163);
        }
        fVar1 = *(float *)(this + 0x167);
        if (___real_3f000000 <= fVar1) {
          if (fVar1 <= ___real_3fc00000) {
            fVar1 = ___real_3f800000 - ((fVar1 - ___real_3f000000) + (fVar1 - ___real_3f000000));
          }
          else {
            fVar1 = ((fVar1 - ___real_3fc00000) + (fVar1 - ___real_3fc00000)) - ___real_3f800000;
          }
        }
        else {
          fVar1 = fVar1 + fVar1;
        }
        fVar2 = *(float *)(this + 0x15b);
        m3dMATR::Translate((m3dMATR *)
                           (*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x10) + 0x38) + 0x7c),0.0,
                           fVar1 * fVar2 - *(float *)(this + 0x16b),0.0,2);
        *(float *)(this + 0x16b) = fVar1 * fVar2;
        animINST::Invalidate(*(animINST **)(this + 0xbc),4);
      }
    }
    else if (*(int *)(gsSysMP + 0x28) == 1) {
      return;
    }
    (**(code **)(*(int *)this + 0x90))();
    if (((byte)this[0x88] & 4) != 0) {
      for (peVar5 = gsMP_SERVER::GetNextPlayer(gsSysServer,(entENTITY *)0x0);
          peVar5 != (entENTITY *)0x0; peVar5 = gsMP_SERVER::GetNextPlayer(gsSysServer,peVar5)) {
        iVar6 = (**(code **)(*(int *)this + 0x98))(peVar5);
        if (iVar6 != 0) {
          if ((*(uint *)(this + 0x14f) & 0x1000) == 0) {
            *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
            *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x1000;
          }
          iVar6 = (**(code **)(*(int *)peVar5 + 0x9c))(this);
          if (iVar6 != 0) {
            (**(code **)(*(int *)this + 0x94))(peVar5);
          }
        }
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:item.cpp
   addr: 0053E790 */

int __thiscall itemITEM::IsCanPick(itemITEM *this,plgsACTION *param_1)

{
  ulonglong uVar1;
  undefined8 extraout_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float *pfVar7;
  float local_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  pfVar7 = &local_c;
  (**(code **)(*(int *)param_1 + 0x68))();
  fVar4 = ((float)pfVar7 - fStack_10) * ((float)pfVar7 - fStack_10) +
          (fStack_14 - fStack_8) * (fStack_14 - fStack_8);
  if (m3dSimdType == 0) {
    fVar4 = fVar4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar4 * fVar5 * fVar5) * fVar4;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)fVar4;
    uVar2 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar1);
    uVar3 = PackedFloatingMUL(uVar2,uVar2);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
    uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
    uVar2 = PackedFloatingMUL(uVar2,uVar1);
    fVar4 = (float)uVar2;
    FastExitMediaState();
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (fVar4 < ___real_40200000) {
    if (ABS(local_18 - local_c) < ___real_40000000) {
      return 1;
    }
  }
  return 0;
}




/* from: gs_shared:item.cpp
   addr: 0053E8B0 */

void __thiscall itemITEM::Unlock(itemITEM *this,entIACTIVE_OBJ *param_1)

{
  msgDATA mStack_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  msgDATA local_14;
  undefined1 local_13;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  if (*(int *)(this + 0x30) < 1) {
    if (((param_1 != (entIACTIVE_OBJ *)0x0) && (*(int *)(param_1 + 0x20) == 0x454e5424)) &&
       (((byte)this[0x14f] & 4) != 0)) {
      animINST::GetPos(*(animINST **)(param_1 + 0xbc),(m3dV *)&local_20);
      local_1c = local_1c + *(float *)(this + 0x157);
      animINST::Translate(*(animINST **)(this + 0xbc),(m3dV *)&local_20,0);
      if ((*(int *)(gsSysMP + 0x28) == 2) || (*(int *)(gsSysMP + 0x28) == 4)) {
        local_c = local_20;
        local_14 = (msgDATA)0x0;
        local_13 = 0x40;
        local_10 = 1;
        local_12 = 0x14;
        local_8 = local_1c;
        local_4 = local_18;
        gsMP_SERVER::SendMsgClientAll
                  (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_14,0x20000,0xffffffff,0xfffffffd)
        ;
      }
    }
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
    (**(code **)(*(int *)this + 0x80))();
    mStack_28 = (msgDATA)0x0;
    uStack_27 = 0x40;
    uStack_26 = 8;
    uStack_24 = 2;
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&mStack_28,0x20000,0xffffffff,0xfffffffd);
    if (((byte)this[0x14f] & 4) == 0) {
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_20);
      gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_00963320,(m3dV *)&local_20);
    }
  }
  return;
}




/* from: gs_shared:item.cpp
   addr: 0053EA00 */

void __thiscall itemITEM::Pick(itemITEM *this,plgsACTION *param_1)

{
  *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
  return;
}




/* from: gs_shared:item.cpp
   addr: 0053EA20 */

void __thiscall itemITEM::ProcessMP_NOTIFY(itemITEM *this,gsEVENT *param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    (**(code **)(*(int *)this + 0x7c))(*(undefined4 *)(param_1 + 8));
    return;
  case 1:
    animINST::Translate(*(animINST **)(this + 0xbc),(m3dV *)(param_1 + 8),0);
    return;
  case 2:
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xffffffef;
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
    return;
  case 3:
    (**(code **)(*(int *)this + 0x80))();
    return;
  case 0xffffff9c:
    iVar1 = *(int *)(param_1 + 8);
    (**(code **)(*(int *)this + 0x7c))(*(undefined4 *)(iVar1 + 4));
    if (*(int *)(iVar1 + 8) != 0) {
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x10;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:item.cpp
   addr: 0053EB50 */

void __thiscall itemITEM::ProcessMP_GET_SYNC_DATA(itemITEM *this,void *param_1)

{
  undefined *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_00963318 & 1) == 0) {
      DAT_00963318 = DAT_00963318 | 1;
      DAT_00963388 = 0;
      DAT_00963389 = 0x40;
      DAT_0096338c = 0;
      DAT_00963390 = 0;
      _DAT_0096338a = 0xc;
      atexit((_func_4879 *)&__E12);
    }
    puVar1 = &DAT_00963388;
    *(undefined1 **)param_1 = &DAT_00963388;
  }
  *(uint *)(puVar1 + 4) = *(uint *)(this + 0x14f) & 1;
  if (*(int *)(gsSysMP + 0x28) != 1) {
    *(uint *)(puVar1 + 8) = (uint)(0 < *(int *)(this + 0x30));
  }
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: gs_shared:item.cpp
   addr: 0053EBF0 */

void __thiscall itemITEM::ProcessMP_WRITE_SYNC_DATA(itemITEM *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined4 uVar2;
  gsMSG_MP_SAVELOAD *pgVar3;
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
  ppgStack_28 = (gsMSG_MP_SAVELOAD **)0x53ec26;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
  param_1 = *(gsMSG_MP_SAVELOAD **)(iVar1 + 4);
  ppgStack_28 = &param_1;
  (**(code **)(**(int **)(pgVar3 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar3 + 4),(fioCHUNK *)&stack0xffffffe4);
  fioFILE::WriteChunk(*(fioFILE **)(pgVar3 + 4),0xf1,(fioCHUNK *)&stack0xffffffe4);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  uStack_8 = (undefined2)uVar2;
  local_6 = (undefined2)((uint)uVar2 >> 0x10);
  (**(code **)(**(int **)(pgVar3 + 4) + 0x18))(&uStack_8,4,4);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar3 + 4),(fioCHUNK *)&ppgStack_28);
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar3 + 4));
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)pgVar3);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:item.cpp
   addr: 0053ECA0 */

void __thiscall itemITEM::ProcessMP_READ_SYNC_DATA(itemITEM *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  short local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined4 local_6;
  
  puVar3 = *(undefined **)param_1;
  local_10 = 0;
  uStack_e = 0xffff;
  uStack_c = 0xffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  if (puVar3 == (undefined *)0x0) {
    if ((DAT_00963318 & 1) == 0) {
      DAT_00963318 = DAT_00963318 | 1;
      DAT_0096338c = 0;
      DAT_00963390 = 0;
      _DAT_00963388 = 0xc4000;
      atexit((_func_4879 *)&__E12);
    }
    puVar3 = &DAT_00963388;
    *(undefined **)param_1 = &DAT_00963388;
    _DAT_00963388 = 0xc4000;
    DAT_0096338c = 0;
    DAT_00963390 = 0;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  do {
    if ((iVar1 == 0) || (local_10 == 1)) {
      rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
      return;
    }
    if (local_10 == 0xf0) {
      puVar2 = puVar3 + 4;
LAB_0053ed71:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2,4,4);
    }
    else if (local_10 == 0xf1) {
      puVar2 = puVar3 + 8;
      goto LAB_0053ed71;
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  } while( true );
}




/* from: gs_shared:item.cpp
   addr: 0053EDC0 */

void __thiscall itemITEM::Enable(itemITEM *this,int param_1)

{
  if (param_1 == 0) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffe;
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
    return;
  }
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
  return;
}




/* from: gs_shared:item.cpp
   addr: 0053EE00 */

void __thiscall itemITEM::ShowUnhideSfx(itemITEM *this)

{
  msgDATA local_8;
  undefined1 local_7;
  undefined2 local_6;
  undefined4 local_4;
  
  local_8 = (msgDATA)0x0;
  local_7 = 0x40;
  local_6 = 8;
  if (*(int *)(gsSysMP + 0x28) == 2) {
    local_4 = 3;
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_8,0x20000,0xffffffff,0xfffffffd);
  }
  return;
}




/* from: gs_shared:item.cpp
   addr: 0053EE60 */

int __thiscall itemITEM::CreateSfx(itemITEM *this,char *param_1)

{
  entENTITY *this_00;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  animINST::GetPos(*(animINST **)(this + 0xbc),local_a4);
  m3dMATR::Translate(local_86,local_a4,0);
  this_00 = entCreate(gsScenePtr,param_1,param_1,local_98,*(void **)(this + 0xbc),0);
  *(entENTITY **)(this + 0x15f) = this_00;
  if (this_00 != (entENTITY *)0x0) {
    entENTITY::SetFollow
              (this_00,(entENTITY *)this,*(objOBJ **)(*(int *)(*(int *)(this + 0xbc) + 0x10) + 0x38)
               ,0);
    return 1;
  }
  return 0;
}




/* from: gs_shared:item.cpp
   addr: 0053EF10 */

void __thiscall itemITEM::DestroySfx(itemITEM *this)

{
  if (*(msgADDR **)(this + 0x15f) != (msgADDR *)0x0) {
    msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x15f),2,(msgADDR *)this);
  }
  return;
}




/* from: gs_shared:item.cpp
   addr: 0053EF30 */

void __thiscall itemITEM::ShowSfx(itemITEM *this,int param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x15f) != 0) {
    iVar1 = *(int *)(*(int *)(this + 0x15f) + 0xbc);
    if (param_1 != 0) {
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
      return;
    }
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:item.cpp
   addr: 0053EF60 */

entENTITY * __fastcall itemITEM::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x193);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x173) = 0;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = _m3dVZero;
    *(undefined4 *)(this + 0x183) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x18b) = 0;
    *(undefined4 *)(this + 0x187) = uVar1;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}

