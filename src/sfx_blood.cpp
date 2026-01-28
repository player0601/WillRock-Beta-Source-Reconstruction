
/* from: sfx_blood.cpp
   addr: 00460B80 */

int __fastcall wrsfxBloodInit(void)

{
  int iVar1;
  
  wrsfxBloodTexAir = txmMANAGER::Add(txmManager,s_sfx_blood_anim_8x4,0x40003,1);
  if (wrsfxBloodTexAir == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxBloodTexGround = txmMANAGER::Add(txmManager,s_sfx_blood_floor_1,0x40003,1);
  if (wrsfxBloodTexGround == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_chunk,0x43484e4b,0x32,wrsfxCHUNK::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_0060e628);
  if (iVar1 == 0) {
    apMsg(s_Cannot_link_sound_data);
    return 0;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_blood.cpp
   addr: 00460C10 */

void __fastcall
wrsfxCreateBloodAir(float param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,m3dPLANE *param_5,
                   float param_6,float param_7,m3dCOLOR *param_8)

{
  wrsfxBLOOD_AIR *this;
  partEMITTER_PHYS *this_00;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_4 == (m3dV *)0x0) {
    local_18 = _m3dVZero;
    local_14 = DAT_00963740;
    local_10 = DAT_00963744;
  }
  else {
    local_18 = *(undefined4 *)param_4;
    local_14 = *(undefined4 *)(param_4 + 4);
    local_10 = *(undefined4 *)(param_4 + 8);
  }
  if (param_2 == (m3dV *)0x0) {
    camCAMERA::GetOrigin(gsCameraPtr,(m3dV *)&local_c);
    local_24 = local_c - *(float *)param_1;
    local_20 = local_8 - *(float *)((int)param_1 + 4);
    local_1c = local_4 - *(float *)((int)param_1 + 8);
    m3dNormalize((m3dV *)&local_24);
    m3dMakeVUnitConusRandom((m3dV *)&local_24,(float)&local_24,(m3dV *)0x42b40000);
  }
  else {
    local_24 = *(float *)param_2;
    local_20 = *(float *)(param_2 + 4);
    local_1c = *(float *)(param_2 + 8);
  }
  this = (wrsfxBLOOD_AIR *)operator_new(0x2cc);
  if (this != (wrsfxBLOOD_AIR *)0x0) {
    this_00 = (partEMITTER_PHYS *)
              wrsfxBLOOD_AIR::wrsfxBLOOD_AIR
                        (this,(float)param_3,(m3dV *)param_1,(m3dV *)&local_24,(m3dV *)&local_18,
                         param_5,param_6,param_7,param_8);
    if (this_00 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::StartEmission(this_00);
      plrPLAYER::NotifySFXBloodHands(plrPlayer,(m3dV *)param_1);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_blood.cpp
   addr: 00460D20 */

void __fastcall
wrsfxStartBlood(int param_1,int param_2,m3dV *param_3,m3dV *param_4,m3dV *param_5,m3dV *param_6)

{
  int iVar1;
  uint uVar2;
  wrsfxBLOOD_SURF *pwVar3;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_ECX_01;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  float fVar4;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = _m3dVZero;
  local_c = DAT_00963740;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_8 = DAT_00963744;
  local_4 = 0;
  local_64 = 0.0;
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 0.0;
  local_24 = 0;
  local_2c = &cdtREFINE::_vftable_;
  local_28 = 2;
  if (((byte)wrAppState & 2) != 0) {
    return;
  }
  local_48 = *(undefined4 *)param_3;
  local_44 = *(undefined4 *)(param_3 + 4);
  local_3c = _m3dVUnitY;
  local_40 = *(undefined4 *)(param_3 + 8);
  local_38 = DAT_005f9994;
  local_34 = DAT_005f9998;
  local_30 = param_1;
  iVar1 = scnSCENE::FloorPlace
                    (gsScenePtr,param_3,DAT_005d5a8c,(m3dV *)&local_48,0.05,0.0,0,
                     (cdtREFINE *)&local_2c,(cdtINFO *)&local_20);
  if (iVar1 == 0) {
    iVar1 = scnSCENE::GetClosestPoint
                      (gsScenePtr,param_3,3.0,0,(cdtREFINE *)&local_2c,(cdtINFO *)&local_20);
    if (iVar1 == 0) {
      local_64 = 255.0;
      local_60 = 255.0;
      local_5c = 255.0;
      local_58 = 255.0;
      goto LAB_00460f30;
    }
    uVar2 = gsEffEnvirColor((cdtINFO *)&local_20,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
  }
  else {
    uVar2 = gsEffEnvirColor((cdtINFO *)&local_20,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
  }
  local_5c = (float)(uVar2 & 0xff);
  local_60 = (float)(uVar2 >> 8 & 0xff);
  local_64 = (float)(uVar2 >> 0x10 & 0xff);
  local_88 = (float)(uVar2 >> 0x18);
  fStack_84 = 0.0;
  local_58 = (float)(uint)local_88;
LAB_00460f30:
  if (param_6 == (m3dV *)0x0) {
    local_54 = _m3dVUnitX;
    local_50 = DAT_005f9988;
    local_4c = DAT_005f998c;
  }
  else {
    local_54 = *(float *)param_6 - *(float *)param_3;
    local_50 = *(float *)(param_6 + 4) - *(float *)(param_3 + 4);
    local_4c = *(float *)(param_6 + 8) - *(float *)(param_3 + 8);
  }
  switch(local_30) {
  case 0:
    break;
  case 1:
  case 2:
    local_70 = DAT_005f9998 * local_50 - local_4c * DAT_005f9994;
    local_6c = local_4c * _m3dVUnitY - DAT_005f9998 * local_54;
    local_68 = DAT_005f9994 * local_54 - _m3dVUnitY * local_50;
    m3dNormalize((m3dV *)&local_70);
    local_88 = _m3dVUnitY * ___real_40a00000 + *(float *)param_5;
    fStack_84 = DAT_005f9994 * ___real_40a00000 + *(float *)(param_5 + 4);
    local_80 = DAT_005f9998 * ___real_40a00000 + *(float *)(param_5 + 8);
    local_7c = local_70 * ___real_40a00000 + local_88;
    local_78 = local_6c * ___real_40a00000 + fStack_84;
    local_74 = local_68 * ___real_40a00000 + local_80;
    wrsfxCreateBloodAir((float)param_3,(m3dV *)&local_70,(m3dV *)0x3f4ccccd,(m3dV *)&local_7c,
                        (m3dPLANE *)&local_48,1.2,2.0,(m3dCOLOR *)&local_64);
    local_70 = -local_70;
    local_6c = -local_6c;
    local_68 = -local_68;
    local_7c = local_70 * ___real_40a00000 + local_88;
    local_78 = local_6c * ___real_40a00000 + fStack_84;
    local_74 = local_68 * ___real_40a00000 + local_80;
    wrsfxCreateBloodAir((float)param_3,(m3dV *)&local_70,(m3dV *)0x3f4ccccd,(m3dV *)&local_7c,
                        (m3dPLANE *)&local_48,1.2,2.0,(m3dCOLOR *)&local_64);
    return;
  default:
    return;
  case 4:
    local_54 = *(float *)param_5;
    local_50 = *(float *)(param_5 + 4);
    local_4c = *(float *)(param_5 + 8);
    m3dNormalize((m3dV *)&local_54);
    pwVar3 = (wrsfxBLOOD_SURF *)operator_new(0x168);
    if (pwVar3 == (wrsfxBLOOD_SURF *)0x0) {
      pwVar3 = (wrsfxBLOOD_SURF *)0x0;
    }
    else {
      pwVar3 = (wrsfxBLOOD_SURF *)wrsfxBLOOD_SURF::wrsfxBLOOD_SURF(pwVar3);
    }
    wrsfxBLOOD_SURF::SetParams(pwVar3,(m3dV *)&local_48,(m3dV *)&local_54,5.0,(m3dCOLOR *)&local_64)
    ;
    pteSHADER::Register((pteSHADER *)pwVar3);
    pteSHADER::CalcStaticData((pteSHADER *)pwVar3,0);
    return;
  case 6:
  case 7:
    iVar1 = 4;
    if (param_2 == 0) {
      do {
        m3dMakeVUnitConusRandom(&m3dVUnitY,(float)&local_7c,(m3dV *)0x42b40000);
        fVar4 = m3dRandRange(extraout_ECX_01,extraout_EDX_01);
        local_7c = local_7c * fVar4;
        local_78 = local_78 * fVar4;
        local_74 = local_74 * fVar4;
        wrsfxCreateBloodAir((float)param_3,(m3dV *)0x0,(m3dV *)0x3f4ccccd,(m3dV *)&local_7c,
                            (m3dPLANE *)&local_48,1.2,2.0,(m3dCOLOR *)&local_64);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return;
    }
    do {
      m3dMakeVUnitConusRandom(&m3dVUnitY,(float)&local_7c,(m3dV *)0x42340000);
      fVar4 = m3dRandRange(extraout_ECX_00,extraout_EDX_00);
      local_7c = local_7c * fVar4;
      local_78 = local_78 * fVar4;
      local_74 = local_74 * fVar4;
      wrsfxCreateBloodAir((float)param_3,(m3dV *)0x0,(m3dV *)0x3f4ccccd,(m3dV *)&local_7c,
                          (m3dPLANE *)&local_48,1.2,2.0,(m3dCOLOR *)&local_64);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  if (param_2 != 0) {
    m3dMakeVUnitConusRandom(&m3dVUnitY,(float)&local_88,(m3dV *)0x42340000);
    fVar4 = m3dRandRange(extraout_ECX,extraout_EDX);
    local_88 = local_88 * fVar4;
    fStack_84 = fStack_84 * fVar4;
    local_80 = local_80 * fVar4;
    wrsfxCreateBloodAir((float)param_6,(m3dV *)0x0,(m3dV *)0x3ecccccd,(m3dV *)&local_88,
                        (m3dPLANE *)&local_48,0.7,2.0,(m3dCOLOR *)&local_64);
    return;
  }
  wrsfxCreateBloodAir((float)param_6,(m3dV *)0x0,(m3dV *)0x3ecccccd,param_5,(m3dPLANE *)&local_48,
                      0.7,2.0,(m3dCOLOR *)&local_64);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: sfx_blood.cpp
   addr: 00461360 */

void __fastcall
wrsfxStartChunkMeat(int param_1,int param_2,m3dV *param_3,m3dV *param_4,aiNPC_WR *param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  entENTITY *this;
  objOBJ *this_00;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_ECX_01;
  float extraout_ECX_02;
  float extraout_ECX_03;
  float extraout_ECX_04;
  float extraout_ECX_05;
  float extraout_ECX_06;
  float extraout_ECX_07;
  float extraout_ECX_08;
  float extraout_ECX_09;
  float *pfVar5;
  int iVar6;
  m3dV *extraout_EDX;
  m3dV *pmVar7;
  float extraout_EDX_00;
  float extraout_EDX_01;
  float extraout_EDX_02;
  float extraout_EDX_03;
  float extraout_EDX_04;
  float extraout_EDX_05;
  float extraout_EDX_06;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  m3dMATR local_1c6 [134];
  float local_140;
  char local_134 [64];
  float local_f4 [4];
  float local_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float local_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float local_b4;
  msgDATA local_b0 [2];
  undefined2 local_ae;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  float local_70;
  int local_6c;
  undefined4 local_68;
  float local_64;
  int local_60;
  float local_5c;
  int local_58;
  float *local_54;
  float local_50 [3];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined8 *local_20;
  int local_1c;
  float local_18;
  float *local_14;
  undefined8 local_10;
  float local_8;
  
  local_60 = param_1;
  msgDATA::msgDATA(local_b0);
  local_ac = _m3dVZero;
  local_a0 = _m3dVZero;
  local_a8 = DAT_00963740;
  local_9c = DAT_00963740;
  local_a4 = DAT_00963744;
  local_98 = DAT_00963744;
  local_94 = 0x3dcccccd;
  local_90 = DAT_005d5a8c;
  local_8c = 1;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0.0;
  local_6c = -1;
  local_68 = 0;
  local_ae = 0x4c;
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_1d8);
  local_24 = 1.0;
  local_2c = 0xbe99999a;
  local_28 = 0.3;
  local_1c = 3;
  local_18 = 0.0;
  local_134[0] = '\0';
  local_64 = 1.0;
  switch(local_60) {
  case 0:
    local_24 = 0.5;
    local_1c = 3;
    goto LAB_004614e8;
  case 1:
  case 2:
    fVar15 = (float)((local_60 != 1) + 2);
    local_18 = fVar15;
    iVar6 = aiNPC::GetNOpp((char *)0x0,s_ai_mino);
    if ((7 < iVar6 + (int)fVar15) && (local_18 = (float)(7 - iVar6), (int)local_18 < 1)) {
      local_18 = 1.4013e-45;
    }
    local_24 = 0.6;
    local_1c = 2;
    iVar6 = 0;
    do {
      cVar2 = s_ai_mino_chunk_regen[iVar6];
      local_134[iVar6] = cVar2;
      iVar6 = iVar6 + 1;
    } while (cVar2 != '\0');
    iVar6 = *(int *)(param_5 + 0x49f);
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x1cc) = *(int *)(iVar6 + 0x1cc) + (int)local_18;
    }
    break;
  case 3:
    local_24 = 0.75;
    local_1c = 4;
LAB_004614e8:
    if (param_2 != 0) {
      local_2c = 0x3e4ccccd;
      local_28 = 0.5;
    }
    break;
  case 4:
    local_24 = 0.4;
    local_1c = 10;
    if (param_2 != 0) {
      local_2c = 0xbdcccccd;
      local_28 = 0.1;
    }
    local_64 = 0.4;
  }
  if (param_4 == (m3dV *)0x0) {
    local_8 = DAT_005f998c;
    fVar15 = _m3dVUnitX;
  }
  else {
    local_8 = *(float *)(param_3 + 8) - *(float *)(param_4 + 8);
    fVar15 = *(float *)param_3 - *(float *)param_4;
  }
  local_10 = (ulonglong)(uint)fVar15;
  m3dNormalize((m3dV *)&local_10);
  local_a0 = _m3dVUnitY * ___real_c1200000;
  local_8c = 0xffffffff;
  local_84 = 0x3f4ccccd;
  local_88 = 0;
  local_9c = DAT_005f9994 * ___real_c1200000;
  local_80 = 2;
  local_7c = 1;
  local_98 = DAT_005f9998 * ___real_c1200000;
  m3dMATR::MakeRotY((m3dMATR *)local_f4,-60.0);
  local_14 = local_f4;
  fVar15 = (float)local_10;
  fVar14 = (float)(local_10 >> 0x20);
  if (m3dSimdType == 0) {
    if (((uint)local_f4 & 0xf) == 0) {
      fVar16 = fVar15 * local_f4[0] + fVar14 * local_e4 + local_8 * local_d4;
      fVar15 = fVar15 * local_f4[1] + fVar14 * fStack_e0 + local_8 * fStack_d0;
    }
    else {
      fVar16 = fVar15 * local_f4[0] + fVar14 * local_e4 + local_8 * local_d4;
      fVar15 = fVar15 * local_f4[1] + fVar14 * fStack_e0 + local_8 * fStack_d0;
    }
    local_10 = CONCAT44(fVar15,fVar16);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar9 = PackedFloatingMUL(CONCAT44(fVar15,fVar15),CONCAT44(local_f4[1],local_f4[0]));
    uVar10 = PackedFloatingMUL(CONCAT44(fVar14,fVar14),CONCAT44(fStack_e0,local_e4));
    uVar11 = PackedFloatingMUL(CONCAT44(local_8,local_8),CONCAT44(fStack_d0,local_d4));
    uVar12 = PackedFloatingMUL(CONCAT44(fVar15,fVar15),CONCAT44(local_f4[3],local_f4[2]));
    uVar10 = PackedFloatingADD(uVar10,uVar11);
    uVar11 = PackedFloatingMUL(CONCAT44(fVar14,fVar14),CONCAT44(uStack_d8,uStack_dc));
    uVar13 = PackedFloatingMUL(CONCAT44(local_8,local_8),CONCAT44(uStack_c8,uStack_cc));
    local_10 = PackedFloatingADD(uVar9,uVar10);
    uVar9 = PackedFloatingADD(uVar11,uVar13);
    uVar9 = PackedFloatingADD(uVar12,uVar9);
    local_8 = (float)uVar9;
    FastExitMediaState();
  }
  else {
    iVar6 = 0;
    do {
      *(undefined4 *)((int)local_50 + iVar6) = 0;
      iVar4 = 0;
      pfVar5 = (float *)((int)local_f4 + iVar6);
      fVar15 = ___real_00000000;
      do {
        iVar1 = iVar4 * 4;
        fVar14 = *pfVar5;
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 4;
        fVar15 = *(float *)((int)&local_10 + iVar1) * fVar14 + fVar15;
      } while (iVar4 < 3);
      *(float *)((int)local_50 + iVar6) = fVar15;
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0xc);
    local_10 = CONCAT44(local_50[1],local_50[0]);
    local_8 = local_50[2];
  }
  local_b4 = (float)((int)local_18 + local_1c);
  local_14 = (float *)0x0;
  local_58 = 0;
  param_4 = (m3dV *)0x0;
  local_5c = ___real_42f00000 / (float)((int)local_b4 + -1);
  fVar15 = (float)((int)local_b4 + -1);
  if (0 < (int)local_b4) {
    do {
      pmVar7 = param_4;
      if ((local_1c <= (int)param_4) ||
         ((fVar15 = local_18, (int)local_14 < (int)local_18 &&
          (fVar14 = m3dRandom(), fVar15 = extraout_ECX, pmVar7 = extraout_EDX,
          ___real_3f000000 <= fVar14)))) {
        bVar3 = false;
        local_14 = (float *)((int)local_14 + 1);
      }
      else {
        bVar3 = true;
        param_4 = param_4 + 1;
      }
      if ((((byte)wrAppState & 2) == 0) || (!bVar3)) {
        local_140 = m3dRandRange(fVar15,(float)pmVar7);
        local_30 = m3dRandRange(extraout_ECX_00,extraout_EDX_00);
        local_38 = local_140 + *(float *)param_3;
        local_34 = *(float *)(param_3 + 4);
        local_30 = local_30 + *(float *)(param_3 + 8);
        fVar15 = m3dRandRange(local_34,local_28);
        local_34 = fVar15 + local_34;
        local_44 = -(float)local_10;
        local_40 = -local_10._4_4_;
        local_3c = -local_8;
        m3dMATR::MakeLCS2WCS_VZ(local_1c6,(m3dV *)&local_38,(m3dV *)&local_44);
        if (local_60 == 4) {
          m3dMakeVUnitRandom((m3dV *)&local_ac);
          fVar15 = extraout_ECX_01;
          fVar14 = extraout_EDX_01;
        }
        else {
          local_ac = (float)local_10;
          local_a8 = local_10._4_4_;
          local_a4 = local_8;
          fVar15 = local_10._4_4_;
          fVar14 = local_8;
        }
        local_a8 = m3dRandRange(fVar15,fVar14);
        fVar15 = m3dRandRange(extraout_ECX_02,extraout_EDX_02);
        fVar15 = fVar15 * local_24;
        local_ac = local_ac * fVar15;
        local_a8 = local_a8 * fVar15;
        local_a4 = local_a4 * fVar15;
        if (bVar3) {
          iVar6 = 1;
          pcVar8 = wrsfxNameChunkDefault;
          fVar15 = m3dRandMax(extraout_ECX_03);
          m3dMATR::RotateY(local_1c6,fVar15,iVar6);
          fVar15 = m3dRandMax(extraout_ECX_04);
          local_20 = (undefined8 *)(fVar15 + ___real_3f800000);
          local_94 = 0x3e4ccccd;
          local_70 = m3dRandMax(extraout_ECX_05);
          local_70 = local_70 + ___real_3fc00000;
        }
        else {
          pcVar8 = local_134;
          fVar15 = m3dRandMax(extraout_ECX_03);
          local_20 = (undefined8 *)(___real_3f800000 - fVar15);
          local_94 = 0x3f000000;
          local_70 = m3dRandRange(extraout_ECX_06,extraout_EDX_03);
        }
        local_1d8 = (float)local_20 * local_64;
        local_90 = 0x42700000;
        local_78 = (uint)!bVar3;
        local_1d4 = local_1d8;
        local_1d0 = local_1d8;
        if (param_5 != (aiNPC_WR *)0x0) {
          local_6c = gsDOMAIN_LIST::FindDomNmb
                               ((gsDOMAIN_LIST *)aiSpawnDomList,*(gsDOMAIN **)(param_5 + 0x49f));
          local_68 = *(undefined4 *)(param_5 + 0x4a3);
        }
        this = entCreate(gsScenePtr,s_sfx_chunk,pcVar8,(animCREATE_DATA *)&local_1d8,local_b0,0);
        if (this == (entENTITY *)0x0) {
          return;
        }
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)param_5);
        fVar16 = m3dRandom();
        fVar15 = extraout_ECX_07;
        fVar14 = extraout_EDX_04;
        if ((fVar16 < ___real_3f000000) &&
           (this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_bone),
           fVar15 = extraout_ECX_08, fVar14 = extraout_EDX_05, this_00 != (objOBJ *)0x0)) {
          objOBJ::SetStateYes(this_00,1);
          fVar15 = extraout_ECX_09;
          fVar14 = extraout_EDX_06;
        }
        fVar15 = m3dRandRange(fVar15,fVar14);
        m3dMATR::MakeRotY((m3dMATR *)local_f4,fVar15);
        local_54 = local_f4;
        local_20 = &local_10;
        fVar15 = (float)local_10;
        fVar14 = (float)(local_10 >> 0x20);
        if (m3dSimdType == 0) {
          if (((uint)local_f4 & 0xf) == 0) {
            fVar16 = fVar15 * local_f4[0] + fVar14 * local_e4 + local_8 * local_d4;
            fVar15 = fVar15 * local_f4[1] + fVar14 * fStack_e0 + local_8 * fStack_d0;
          }
          else {
            fVar16 = fVar15 * local_f4[0] + fVar14 * local_e4 + local_8 * local_d4;
            fVar15 = fVar15 * local_f4[1] + fVar14 * fStack_e0 + local_8 * fStack_d0;
          }
          local_10 = CONCAT44(fVar15,fVar16);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar9 = PackedFloatingMUL(CONCAT44(fVar15,fVar15),CONCAT44(local_f4[1],local_f4[0]));
          uVar10 = PackedFloatingMUL(CONCAT44(fVar14,fVar14),CONCAT44(fStack_e0,local_e4));
          uVar11 = PackedFloatingMUL(CONCAT44(local_8,local_8),CONCAT44(fStack_d0,local_d4));
          uVar12 = PackedFloatingMUL(CONCAT44(fVar15,fVar15),CONCAT44(local_f4[3],local_f4[2]));
          uVar10 = PackedFloatingADD(uVar10,uVar11);
          uVar11 = PackedFloatingMUL(CONCAT44(fVar14,fVar14),CONCAT44(uStack_d8,uStack_dc));
          uVar13 = PackedFloatingMUL(CONCAT44(local_8,local_8),CONCAT44(uStack_c8,uStack_cc));
          local_10 = PackedFloatingADD(uVar9,uVar10);
          uVar9 = PackedFloatingADD(uVar11,uVar13);
          uVar9 = PackedFloatingADD(uVar12,uVar9);
          local_8 = (float)uVar9;
          FastExitMediaState();
        }
        else {
          iVar6 = 0;
          do {
            *(undefined4 *)((int)local_50 + iVar6) = 0;
            iVar4 = 0;
            pfVar5 = (float *)((int)local_f4 + iVar6);
            fVar15 = ___real_00000000;
            do {
              iVar1 = iVar4 * 4;
              fVar14 = *pfVar5;
              iVar4 = iVar4 + 1;
              pfVar5 = pfVar5 + 4;
              fVar15 = *(float *)((int)&local_10 + iVar1) * fVar14 + fVar15;
            } while (iVar4 < 3);
            *(float *)((int)local_50 + iVar6) = fVar15;
            iVar6 = iVar6 + 4;
          } while (iVar6 < 0xc);
          local_10 = CONCAT44(local_50[1],local_50[0]);
          local_8 = local_50[2];
        }
      }
      local_58 = local_58 + 1;
      fVar15 = local_b4;
    } while (local_58 < (int)local_b4);
  }
  return;
}




/* from: sfx_blood.cpp
   addr: 00461BA0 */

wrsfxBLOOD_SURF * __thiscall wrsfxBLOOD_SURF::wrsfxBLOOD_SURF(wrsfxBLOOD_SURF *this)

{
  m3dCOLOR amStack_28 [16];
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_10 = 0x461bac;
  pteSPOT::pteSPOT((pteSPOT *)this,0);
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0x3f800000;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x14) = 0x424c5346;
  local_10 = 0x461bed;
  pteSPOT::SetRadius((pteSPOT *)this,5.0);
  local_18 = 0x437f0000;
  local_14 = &DAT_42480000;
  local_10 = 0;
  m3dCOLOR::m3dCOLOR(amStack_28,0);
  pteSPOT::SetColor((pteSPOT *)this);
  local_10 = 0x461c28;
  pteSPOT::SetTex((pteSPOT *)this,wrsfxBloodTexGround);
  local_10 = 0x461c34;
  pteSPOT::SetStateRend((pteSPOT *)this,0xaf);
  *(uint *)(this + 0xf4) = *(uint *)(this + 0xf4) | 4;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_blood.cpp
   addr: 00461C50 */

void __thiscall
wrsfxBLOOD_SURF::SetParams
          (wrsfxBLOOD_SURF *this,m3dV *param_1,m3dV *param_2,float param_3,m3dCOLOR *param_4)

{
  m3dSPL *this_00;
  m3dCTRL_COLOR *pmVar1;
  
  pteSPOT_ELLIPSE::SetParams((pteSPOT_ELLIPSE *)this,param_1,param_2,(m3dV *)0x0,0.2,0.0);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 8;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0x14;
    *(undefined4 *)(this_00 + 0x18) = 0x14;
    *(undefined4 *)(this_00 + 0x1c) = 4;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined ***)this_00 = &m3dSPL_COLOR::_vftable_;
    m3dSPL::AllocKpList(this_00,4);
  }
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,0,0.0,*(float *)param_4,*(float *)(param_4 + 4),
                      *(float *)(param_4 + 8),0.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,1,___real_3f000000 / param_3,*(float *)param_4,
                      *(float *)(param_4 + 4),*(float *)(param_4 + 8),255.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,2,0.85,*(float *)param_4,*(float *)(param_4 + 4),
                      *(float *)(param_4 + 8),255.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,3,1.0,*(float *)param_4,*(float *)(param_4 + 4),
                      *(float *)(param_4 + 8),0.0);
  pmVar1 = (m3dCTRL_COLOR *)operator_new(0x2c);
  if (pmVar1 == (m3dCTRL_COLOR *)0x0) {
    pmVar1 = (m3dCTRL_COLOR *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(float *)(pmVar1 + 0xc) = param_3;
    *(undefined4 *)(pmVar1 + 0x10) = 0x3f800000;
    *(undefined4 *)(pmVar1 + 0x14) = 0;
    *(undefined ***)pmVar1 = &m3dCTRL_TIME::_vftable_;
    *(uint *)(pmVar1 + 4) = *(uint *)(pmVar1 + 4) | 1;
    *(undefined4 *)(pmVar1 + 0x18) = 0;
    *(undefined4 *)(pmVar1 + 0x1c) = 0;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(m3dSPL **)(pmVar1 + 0x28) = this_00;
    *(undefined ***)pmVar1 = &m3dCTRL_COLOR_SPL::_vftable_;
  }
  *(uint *)(pmVar1 + 4) = *(uint *)(pmVar1 + 4) | 6;
  pteSPOT_ANIM::SetCtrlColorBase((pteSPOT_ANIM *)this,pmVar1);
  return;
}




/* from: sfx_blood.cpp
   addr: 00461DC0 */

int __thiscall wrsfxCHUNK::ProcessINIT(wrsfxCHUNK *this,physINIT *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x153) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x157) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x48);
  fVar2 = (float)(*(uint *)(*(int *)(this + 0xbc) + 4) | 0x10);
  *(float *)(*(int *)(this + 0xbc) + 4) = fVar2;
  if (*(int *)(this + 0x153) == 0) {
    fVar3 = 0.0;
    m3dRandMax(fVar2);
    iVar1 = ftol();
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),iVar1,fVar3);
  }
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 4;
  if (*(int *)(this + 0x153) != 0) {
    aiMINO::ChunkCreateNotify(this);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_blood.cpp
   addr: 00461E70 */

void __thiscall wrsfxCHUNK::ProcessFRAME(wrsfxCHUNK *this)

{
  byte bVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  float in_EDX;
  float extraout_EDX;
  float extraout_EDX_00;
  char *pcVar5;
  bool bVar6;
  msgDATA local_8;
  undefined1 local_7;
  undefined2 local_6;
  undefined4 local_4;
  
  if (((byte)this[0x88] & 4) != 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    pcVar3 = *(char **)(*(animINST **)(this + 0xbc) + 0x20);
    if ((byte *)pcVar3 == (byte *)0x0) {
      pcVar3 = s_;
    }
    pcVar5 = wrsfxNameChunkDefault;
    do {
      bVar1 = *pcVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00461ec1:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00461ec6;
      }
      if (bVar1 == 0) break;
      bVar1 = ((byte *)pcVar3)[1];
      bVar6 = bVar1 < ((byte *)pcVar5)[1];
      if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00461ec1;
      pcVar3 = (char *)((byte *)pcVar3 + 2);
      pcVar5 = (char *)((byte *)pcVar5 + 2);
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00461ec6:
    if (iVar4 == 0) {
      fVar2 = ___real_3dcccccd - *(float *)(*(int *)(this + 0x14f) + 0x78);
    }
    else {
      fVar2 = ___real_3d8f5c29 - *(float *)(*(int *)(this + 0x14f) + 0x78);
    }
    animINST::Translate(*(animINST **)(this + 0xbc),0.0,fVar2,0.0,2);
    in_EDX = extraout_EDX;
  }
  if (*(int *)(this + 0x167) != 0) {
    *(float *)(this + 0x15b) = *(float *)(this + 0x15b) - gsElapsedTime;
  }
  if ((((byte)this[0x88] & 4) != 0) && (*(int *)(this + 0x167) != 0)) {
    if (((*(float *)(this + 0x15b) < _DAT_005d5a88) ||
        ((*(byte *)(*(int *)(this + 0x14f) + 4) & 0x10) != 0)) &&
       ((*(int *)(this + 0x153) != 0 && (*(int *)(this + 0x163) == 0)))) {
      local_8 = (msgDATA)0x0;
      local_7 = 0x40;
      local_6 = 8;
      local_4 = 0;
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_8,0x10000,0xfffffffd,0xfffffffd);
      in_EDX = extraout_EDX_00;
    }
    iVar4 = m3dUpdateTimeField((float *)(this + 0x15f),in_EDX);
    if (iVar4 != 0) {
      if ((*(int *)(this + 0x153) != 0) && (*(int *)(this + 0x163) == 0)) {
        local_8 = (msgDATA)0x0;
        local_7 = 0x40;
        local_6 = 8;
        local_4 = 0;
        gsMP_SERVER::SendMsgClientAll
                  (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_8,0x10000,0xfffffffd,0xfffffffd);
      }
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
    }
  }
  if ((*(float *)(this + 0x15b) < _DAT_005d5a88) && (*(int *)(this + 0x153) == 0)) {
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
  }
  return;
}




/* from: sfx_blood.cpp
   addr: 00462050 */

int __thiscall wrsfxCHUNK::ProcessCDT(wrsfxCHUNK *this,cdtINFO *param_1)

{
  int iVar1;
  msgDATA local_24;
  undefined1 local_23;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((byte)this[0x88] & 4) != 0) {
    local_23 = 0x40;
    local_24 = (msgDATA)0x0;
    local_4 = 0;
    iVar1 = *(int *)(this + 0x14f);
    local_20 = 1;
    local_22 = 0x24;
    if ((*(byte *)(iVar1 + 4) & 8) == 0) {
      local_1c = *(undefined4 *)(param_1 + 0x10);
      local_18 = *(undefined4 *)(param_1 + 0x14);
      local_14 = *(undefined4 *)(param_1 + 0x18);
      local_10 = *(undefined4 *)(iVar1 + 0x48);
      local_c = *(undefined4 *)(iVar1 + 0x4c);
      local_8 = *(undefined4 *)(iVar1 + 0x50);
      m3dNormalize((m3dV *)&local_10);
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_24,0x10000,0xfffffffd,0xfffffffd);
    }
  }
  return 0;
}




/* from: sfx_blood.cpp
   addr: 00462110 */

void __thiscall wrsfxCHUNK::ProcessMP_NOTIFY(wrsfxCHUNK *this,gsEVENT *param_1)

{
  undefined4 uVar1;
  aiNPC *paVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(this + 0x163) = 1;
    if (((byte)this[0x88] & 4) != 0) {
      paVar2 = aiMINO::Regenerate((physPHYS *)this);
      if (-1 < *(int *)(this + 0x16b)) {
        uVar1 = *(undefined4 *)(aiSpawnDomList + *(int *)(this + 0x16b) * 4 + 0xa0);
        *(undefined4 *)(paVar2 + 0x4a3) = *(undefined4 *)(this + 0x16f);
        *(undefined4 *)(paVar2 + 0x49f) = uVar1;
      }
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
    }
  }
  else if (*(int *)(param_1 + 4) == 1) {
    EV_CDTAction(this,(wrsfxCHUNK_EV_CDT *)param_1);
    physPHYS::ProcessMP_NOTIFY((physPHYS *)this,param_1);
    return;
  }
  physPHYS::ProcessMP_NOTIFY((physPHYS *)this,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_blood.cpp
   addr: 004621A0 */

void __thiscall wrsfxCHUNK::EV_CDTAction(wrsfxCHUNK *this,wrsfxCHUNK_EV_CDT *param_1)

{
  m3dV *pmVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  wrsfxBLOOD_SURF *pwVar5;
  float local_1c;
  uint local_18 [2];
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pmVar1 = (m3dV *)(param_1 + 8);
  local_10 = 0.0;
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 0.0;
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060e628,pmVar1);
  local_1c = 2.5;
  if (*(int *)(this + 0x157) == 0) {
    local_1c = 5.0;
  }
  fVar3 = local_1c + ___real_3f800000;
  *(undefined4 *)(this + 0x167) = 1;
  *(float *)(this + 0x15f) = fVar3;
  if (((byte)wrAppState & 2) == 0) {
    if (*(int *)(this + 0x153) == 0) {
      local_18[0] = 0x424c4147;
      local_18[1] = 0x424c5346;
      iVar4 = pteMANAGER::FindShaderAround(pteManager,2,(int *)local_18,pmVar1,4.0);
      if (iVar4 != 0) {
        return;
      }
    }
    uVar2 = *(uint *)(this + 0x9c);
    local_10 = (float)(uVar2 >> 0x10 & 0xff);
    local_c = (float)(uVar2 >> 8 & 0xff);
    local_18[0] = uVar2 >> 0x18;
    local_8 = (float)(uVar2 & 0xff);
    local_18[1] = 0;
    local_4 = (float)local_18[0];
    pwVar5 = (wrsfxBLOOD_SURF *)operator_new(0x168);
    if (pwVar5 == (wrsfxBLOOD_SURF *)0x0) {
      pwVar5 = (wrsfxBLOOD_SURF *)0x0;
    }
    else {
      pwVar5 = (wrsfxBLOOD_SURF *)wrsfxBLOOD_SURF::wrsfxBLOOD_SURF(pwVar5);
    }
    wrsfxBLOOD_SURF::SetParams
              (pwVar5,pmVar1,(m3dV *)(param_1 + 0x14),local_1c,(m3dCOLOR *)&local_10);
    if (*(int *)(this + 0x157) != 0) {
      pteSPOT::SetRadius((pteSPOT *)pwVar5,*(float *)(pwVar5 + 200) * ___real_3f19999a);
    }
    pteSHADER::Register((pteSHADER *)pwVar5);
    pteSHADER::CalcStaticData((pteSHADER *)pwVar5,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_blood.cpp
   addr: 00462340 */

wrsfxBLOOD_AIR * __thiscall
wrsfxBLOOD_AIR::wrsfxBLOOD_AIR
          (wrsfxBLOOD_AIR *this,float param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,
          m3dPLANE *param_5,float param_6,float param_7,m3dCOLOR *param_8)

{
  float fVar1;
  m3dSPL *pmVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  m3dSPL_COLOR *pmVar7;
  m3dSPL_LINEAR1D *pmVar8;
  float local_10;
  m3dV local_c [12];
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x2d,200.0,5.0);
  *(float *)(this + 0x2c0) = param_7;
  *(float *)(this + 0x2c4) = param_6;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.041666668,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.125,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.20833333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,0.6,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_3ed9999a);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,param_1 * ___real_3f333333);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f400000,param_1 * ___real_3e800000,
             (m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar8 = (m3dSPL_LINEAR1D *)0x0;
  pmVar7 = (m3dSPL_COLOR *)0x0;
  iVar3 = ftol();
  uVar4 = ftol();
  uVar5 = ftol();
  uVar6 = ftol();
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,
             ((iVar3 << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff,pmVar7,pmVar8);
  fVar1 = param_1 * ___real_3fa00000;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc1f00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x40200000;
  *(undefined4 *)(this + 0xb8) = 0x3f200000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xc0) = fVar1;
  fVar1 = param_1 * ___real_3ea00000;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f333333;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xc4) = fVar1;
  *(float *)(this + 0xe8) = param_1 * ___real_3d4ccccd;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxBloodTexAir);
  uVar4 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar4 | 0x400;
  *(uint *)(this + 4) = uVar4 | 0x408;
  partEMITTER_PHYS::SetCDTPlane((partEMITTER_PHYS *)this,1,0,param_5);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x30000;
  partEMITTER_PHYS::SetPosDirSpeed((partEMITTER_PHYS *)this,param_2,param_3,param_4);
  partEMITTER_PHYS::PredictCDT((partEMITTER_PHYS *)this,local_c,&local_10);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,local_10 + ___real_3f800000,0.0);
  param_1 = ___real_3f800000 / local_10;
  if (___real_43480000 <= param_1) {
    param_1 = 200.0;
  }
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,8,4,param_1,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 2;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  return this;
}




/* from: sfx_blood.cpp
   addr: 00462650 */

int __thiscall
wrsfxBLOOD_AIR::PartApplyCDT(wrsfxBLOOD_AIR *this,partPART *param_1,m3dV *param_2,float param_3)

{
  int iVar1;
  wrsfxBLOOD_AIR_SURF *this_00;
  pteSHADER *this_01;
  
  iVar1 = partEMITTER_PHYS::PartApplyCDT((partEMITTER_PHYS *)this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c8) == 0) {
    (**(code **)(*(int *)this + 8))(&param_3,0,0);
    *(undefined4 *)(this + 0x2c8) = 1;
    iVar1 = pteMANAGER::FindShaderAround
                      (pteManager,2,(int *)&stack0xffffffdc,(m3dV *)(param_1 + 0x10),
                       *(float *)(this + 0x2c4) + *(float *)(this + 0x2c4));
    if (iVar1 == 0) {
      this_00 = (wrsfxBLOOD_AIR_SURF *)operator_new(0x108);
      if ((this_00 != (wrsfxBLOOD_AIR_SURF *)0x0) &&
         (this_01 = (pteSHADER *)
                    wrsfxBLOOD_AIR_SURF::wrsfxBLOOD_AIR_SURF
                              (this_00,*(float *)(this + 0x2c4),0.0,*(float *)(this + 0x2c0),
                               (m3dCOLOR *)&stack0xffffffe4), this_01 != (pteSHADER *)0x0)) {
        pteSHADER::Register(this_01);
        (**(code **)(*(int *)this_01 + 4))(0);
        pteSPOT_ANIM::SetCurTime((pteSPOT_ANIM *)this_01,0.0);
        (**(code **)(*(int *)this_01 + 0x14))((m3dV *)(param_1 + 0x10));
        (**(code **)(*(int *)this_01 + 4))(1);
        pteSHADER::CalcStaticData(this_01,0);
        return 1;
      }
      return 1;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_blood.cpp
   addr: 004627F0 */

wrsfxBLOOD_AIR_SURF * __thiscall
wrsfxBLOOD_AIR_SURF::wrsfxBLOOD_AIR_SURF
          (wrsfxBLOOD_AIR_SURF *this,float param_1,float param_2,float param_3,m3dCOLOR *param_4)

{
  float fVar1;
  m3dSPL *this_00;
  m3dCTRL_TIME *this_01;
  
  pteSPOT::pteSPOT((pteSPOT *)this,0);
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined ***)this = &_vftable_;
  pteSPOT::SetStateRend((pteSPOT *)this,0xaf);
  pteSPOT::SetTex((pteSPOT *)this,wrsfxBloodTexGround);
  pteSPOT::SetRadius((pteSPOT *)this,param_1);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(this_00,8,0x14,4);
    *(undefined ***)this_00 = &m3dSPL_COLOR::_vftable_;
    m3dSPL::AllocKpList(this_00,4);
  }
  fVar1 = param_2 + param_3;
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,0,param_2 / fVar1,*(float *)param_4,
                      *(float *)(param_4 + 4),*(float *)(param_4 + 8),0.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,1,(param_2 + ___real_3e4ccccd) / fVar1,
                      *(float *)param_4,*(float *)(param_4 + 4),*(float *)(param_4 + 8),255.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,2,0.8,*(float *)param_4,*(float *)(param_4 + 4),
                      *(float *)(param_4 + 8),255.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,3,1.0,*(float *)param_4,*(float *)(param_4 + 4),
                      *(float *)(param_4 + 8),0.0);
  this_01 = (m3dCTRL_TIME *)operator_new(0x2c);
  if (this_01 == (m3dCTRL_TIME *)0x0) {
    this_01 = (m3dCTRL_TIME *)0x0;
  }
  else {
    m3dCTRL_TIME::m3dCTRL_TIME(this_01,fVar1);
    wrSTAT_WPN::wrSTAT_WPN((wrSTAT_WPN *)(this_01 + 0x18));
    *(m3dSPL **)(this_01 + 0x28) = this_00;
    *(undefined ***)this_01 = &m3dCTRL_COLOR_SPL::_vftable_;
  }
  *(uint *)((m3dCTRL_COLOR *)this_01 + 4) = *(uint *)((m3dCTRL_COLOR *)this_01 + 4) | 2;
  pteSPOT_ANIM::SetCtrlColorBase((pteSPOT_ANIM *)this,(m3dCTRL_COLOR *)this_01);
  *(undefined4 *)(this + 0xb8) = 0x437f0000;
  *(undefined4 *)(this + 0xbc) = 0x437f0000;
  *(undefined4 *)(this + 0xc0) = 0x437f0000;
  *(undefined4 *)(this + 0xc4) = 0;
  *(uint *)(this + 0xf4) = *(uint *)(this + 0xf4) | 4;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40;
  *(undefined4 *)(this + 0x14) = 0x424c4147;
  return this;
}




/* from: sfx_blood.cpp
   addr: 004629C0
   addr: 004629C0 */

int __thiscall wrsfxBLOOD_AIR_SURF::IsShadeObj(wrsfxBLOOD_AIR_SURF *this,objOBJ *param_1)

{
  int iVar1;
  
  if (((byte)param_1[0xc] & 2) != 0) {
    return 0;
  }
  iVar1 = pteSPOT::IsShadeObj((pteSPOT *)this,param_1);
  return iVar1;
}




/* from: sfx_blood.cpp
   addr: 004629E0 */

entENTITY * __fastcall wrsfxCHUNK::Create(animINST *param_1)

{
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x173);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_blood.cpp
   addr: 00462A40
   addr: 00462A40 */

void * __thiscall wrsfxCHUNK::_vector_deleting_destructor_(wrsfxCHUNK *this,uint param_1)

{
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

