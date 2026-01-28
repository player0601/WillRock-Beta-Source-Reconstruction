
/* from: gs:phys_rigid.cpp
   addr: 0050E080 */

int __fastcall rgdInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_rigid,0x52474442,0x32,rgdRIGID::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_rigid_explos,0x52474442,0x32,rgdRIGID_EXPLOS::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: gs:phys_rigid.cpp
   addr: 0050E0C0 */

entENTITY * __fastcall rgdRIGID::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0xf17);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x1a3) = 0;
    *(undefined4 *)(this + 0x387) = 0;
    *(undefined4 *)(this + 0x663) = 3;
    *(undefined ***)(this + 0x65f) = &m3dSPHERE::_vftable_;
    *(undefined4 *)(this + 0x67b) = 1;
    *(undefined ***)(this + 0x677) = &m3dBOX::_vftable_;
    *(undefined4 *)(this + 0xeff) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: gs:phys_rigid.cpp
   addr: 0050E130 */

int __thiscall
rgdRIGID::ProcessMsg(rgdRIGID *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      (**(code **)(*(int *)this + 0x70))();
      return 0;
    }
    if (param_1 == 1) {
      (**(code **)(*(int *)this + 0x68))(param_2);
      return 1;
    }
    if (param_1 == 2) {
      (**(code **)(*(int *)this + 0x6c))();
      return 0;
    }
  }
  else if (param_1 == 0x3f9) {
    (**(code **)(*(int *)this + 0x74))(param_2);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 0050E180 */

int __thiscall rgdRIGID::ProcessINIT(rgdRIGID *this,rgdINIT_PARAMS *param_1)

{
  rgdRIGID *prVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  rgdINIT_PARAMS *prVar6;
  m3dV *pmVar7;
  objOBJ *poVar8;
  int iVar9;
  rgdRIGID *prVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  m3dV *pmVar15;
  undefined4 *puVar16;
  rgdINIT_PARAMS *prVar17;
  m3dMATR *pmVar18;
  float *pfVar19;
  rgdRIGID *prVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  float10 fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_d8 [4];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8 [4];
  float local_98 [12];
  float local_68 [4];
  float local_58 [3];
  undefined **local_4c;
  undefined4 local_48;
  m3dV *local_2c;
  m3dV local_28 [12];
  m3dV *local_1c;
  float local_18;
  float local_14;
  m3dV *local_10;
  float local_c;
  rgdRIGID *local_8;
  
  prVar6 = param_1;
  local_48 = 1;
  local_4c = &m3dBOX::_vftable_;
  poVar8 = objFind(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),objIsNFace,(void *)0x0);
  *(objOBJ **)(this + 0xe83) = poVar8;
  if (poVar8 != (objOBJ *)0x0) {
    m3dMATR::GetScale((m3dMATR *)(poVar8 + 0x7c),&local_c,&local_14,&local_18);
    m3dMATR::RemoveScale((m3dMATR *)(*(int *)(this + 0xe83) + 0x7c));
    animINST::Scale(*(animINST **)(this + 0xbc),local_c,local_c,local_c,2);
    *(undefined4 *)(this + 0x14f) = 0;
    animINST::Validate(*(animINST **)(this + 0xbc),0x204);
    m3dBOX::CalcStart((m3dBOX *)&local_4c);
    iVar13 = *(int *)(this + 0xe83);
    pfVar19 = (float *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x10) + 0x38) + 0x7c);
    pfVar14 = local_98;
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pfVar14 = *pfVar19;
      pfVar19 = pfVar19 + 1;
      pfVar14 = pfVar14 + 1;
    }
    iVar11 = 0;
    if (0 < *(int *)(iVar13 + 0x14)) {
      local_2c = local_28;
      local_8 = (rgdRIGID *)local_98;
      local_1c = (m3dV *)0x0;
      do {
        local_10 = (m3dV *)(*(int *)(*(int *)(iVar13 + 0x28) + 0x40) + (int)local_1c);
        if (m3dSimdType == 0) {
          if (((uint)local_8 & 0xf) == 0) {
            fVar32 = *(float *)local_10;
            fVar3 = *(float *)((int)local_10 + 4);
            fVar2 = *(float *)((int)local_10 + 8);
            fVar30 = fVar32 * *(float *)local_8 + *(float *)((int)local_8 + 0x30) +
                     fVar3 * *(float *)((int)local_8 + 0x10) +
                     fVar2 * *(float *)((int)local_8 + 0x20);
            fVar31 = fVar32 * *(float *)((int)local_8 + 4) + *(float *)((int)local_8 + 0x34) +
                     fVar3 * *(float *)((int)local_8 + 0x14) +
                     fVar2 * *(float *)((int)local_8 + 0x24);
            fVar32 = fVar32 * *(float *)((int)local_8 + 8) + *(float *)((int)local_8 + 0x38) +
                     fVar3 * *(float *)((int)local_8 + 0x18) +
                     fVar2 * *(float *)((int)local_8 + 0x28);
          }
          else {
            fVar32 = *(float *)local_10;
            fVar3 = *(float *)((int)local_10 + 4);
            fVar2 = *(float *)((int)local_10 + 8);
            fVar30 = fVar32 * (float)*(undefined8 *)local_8 +
                     fVar3 * (float)*(undefined8 *)((int)local_8 + 0x10) +
                     fVar2 * (float)*(undefined8 *)((int)local_8 + 0x20) +
                     (float)*(undefined8 *)((int)local_8 + 0x30);
            fVar31 = fVar32 * (float)((ulonglong)*(undefined8 *)local_8 >> 0x20) +
                     fVar3 * (float)((ulonglong)*(undefined8 *)((int)local_8 + 0x10) >> 0x20) +
                     fVar2 * (float)((ulonglong)*(undefined8 *)((int)local_8 + 0x20) >> 0x20) +
                     (float)((ulonglong)*(undefined8 *)((int)local_8 + 0x30) >> 0x20);
            fVar32 = fVar32 * (float)*(undefined8 *)((int)local_8 + 8) +
                     fVar3 * (float)*(undefined8 *)((int)local_8 + 0x18) +
                     fVar2 * (float)*(undefined8 *)((int)local_8 + 0x28) +
                     (float)*(undefined8 *)((int)local_8 + 0x38);
          }
          *(ulonglong *)local_2c = CONCAT44(fVar31,fVar30);
          *(float *)(local_2c + 8) = fVar32;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar21 = (undefined4)*(undefined8 *)local_10;
          uVar25 = CONCAT44(uVar21,uVar21);
          uVar21 = (undefined4)((ulonglong)*(undefined8 *)local_10 >> 0x20);
          uVar28 = CONCAT44(uVar21,uVar21);
          uVar29 = CONCAT44(*(float *)((int)local_10 + 8),*(float *)((int)local_10 + 8));
          uVar22 = PackedFloatingMUL(uVar25,*(undefined8 *)local_8);
          uVar24 = PackedFloatingMUL(uVar28,*(undefined8 *)((int)local_8 + 0x10));
          uVar26 = PackedFloatingMUL(uVar29,*(undefined8 *)((int)local_8 + 0x20));
          uVar22 = PackedFloatingADD(uVar22,*(undefined8 *)((int)local_8 + 0x30));
          uVar27 = PackedFloatingMUL(uVar25,*(undefined8 *)((int)local_8 + 8));
          uVar25 = PackedFloatingADD(uVar24,uVar26);
          uVar24 = PackedFloatingMUL(uVar28,*(undefined8 *)((int)local_8 + 0x18));
          uVar29 = PackedFloatingMUL(uVar29,*(undefined8 *)((int)local_8 + 0x28));
          uVar28 = PackedFloatingADD(uVar27,*(undefined8 *)((int)local_8 + 0x38));
          uVar25 = PackedFloatingADD(uVar22,uVar25);
          uVar22 = PackedFloatingADD(uVar24,uVar29);
          *(undefined8 *)local_2c = uVar25;
          uVar25 = PackedFloatingADD(uVar28,uVar22);
          *(int *)(local_2c + 8) = (int)uVar25;
          FastExitMediaState();
        }
        else {
          iVar13 = 0;
          do {
            iVar9 = 0;
            pfVar19 = local_98 + iVar13;
            *(undefined4 *)(local_28 + iVar13 * 4) = 0;
            do {
              pfVar14 = (float *)((int)local_10 + iVar9 * 4);
              fVar32 = *pfVar19;
              iVar9 = iVar9 + 1;
              pfVar19 = pfVar19 + 4;
              *(float *)(local_28 + iVar13 * 4) =
                   *pfVar14 * fVar32 + *(float *)(local_28 + iVar13 * 4);
            } while (iVar9 < 3);
            iVar9 = iVar13 + iVar9 * 4;
            iVar13 = iVar13 + 1;
            *(float *)(local_28 + iVar13 * 4 + -4) =
                 local_98[iVar9] + *(float *)(local_28 + iVar13 * 4 + -4);
          } while (iVar13 < 3);
        }
        m3dBOX::CalcUpdate((m3dBOX *)&local_4c,local_28);
        iVar13 = *(int *)(this + 0xe83);
        iVar11 = iVar11 + 1;
        local_1c = (m3dV *)((int)local_1c + 0xc);
      } while (iVar11 < *(int *)(iVar13 + 0x14));
    }
    *(undefined4 *)(this + 0xd2b) = _m3dVZero;
    *(undefined4 *)(this + 0xd2f) = DAT_00963740;
    *(undefined4 *)(this + 0xd33) = DAT_00963744;
    puVar16 = (undefined4 *)(*(int *)(this + 0xe83) + 0x3c);
    pmVar18 = (m3dMATR *)(this + 0xceb);
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
      *(undefined4 *)pmVar18 = *puVar16;
      puVar16 = puVar16 + 1;
      pmVar18 = pmVar18 + 4;
    }
    m3dMATR::Invert((m3dMATR *)(this + 0xceb),(m3dMATR *)local_d8);
    pmVar15 = (m3dV *)(this + 0xcdf);
    local_1c = pmVar15;
    m3dBOX::GetCenter((m3dBOX *)&local_4c,pmVar15);
    iVar13 = *(int *)(this + 0xe83);
    pfVar19 = (float *)(iVar13 + 0x3c);
    if (m3dSimdType == 0) {
      if (((uint)pfVar19 & 0xf) == 0) {
        fVar32 = *(float *)pmVar15;
        fVar3 = *(float *)(this + 0xce3);
        fVar2 = *(float *)(this + 0xce7);
        fVar30 = fVar32 * *pfVar19 + *(float *)(iVar13 + 0x6c) + fVar3 * *(float *)(iVar13 + 0x4c) +
                 fVar2 * *(float *)(iVar13 + 0x5c);
        fVar31 = fVar32 * *(float *)(iVar13 + 0x40) + *(float *)(iVar13 + 0x70) +
                 fVar3 * *(float *)(iVar13 + 0x50) + fVar2 * *(float *)(iVar13 + 0x60);
        fVar32 = fVar32 * *(float *)(iVar13 + 0x44) + *(float *)(iVar13 + 0x74) +
                 fVar3 * *(float *)(iVar13 + 0x54) + fVar2 * *(float *)(iVar13 + 100);
      }
      else {
        fVar32 = *(float *)pmVar15;
        fVar3 = *(float *)(this + 0xce3);
        fVar2 = *(float *)(this + 0xce7);
        fVar30 = fVar32 * (float)*(undefined8 *)pfVar19 +
                 fVar3 * (float)*(undefined8 *)(iVar13 + 0x4c) +
                 fVar2 * (float)*(undefined8 *)(iVar13 + 0x5c) +
                 (float)*(undefined8 *)(iVar13 + 0x6c);
        fVar31 = fVar32 * (float)((ulonglong)*(undefined8 *)pfVar19 >> 0x20) +
                 fVar3 * (float)((ulonglong)*(undefined8 *)(iVar13 + 0x4c) >> 0x20) +
                 fVar2 * (float)((ulonglong)*(undefined8 *)(iVar13 + 0x5c) >> 0x20) +
                 (float)((ulonglong)*(undefined8 *)(iVar13 + 0x6c) >> 0x20);
        fVar32 = fVar32 * (float)*(undefined8 *)(iVar13 + 0x44) +
                 fVar3 * (float)*(undefined8 *)(iVar13 + 0x54) +
                 fVar2 * (float)*(undefined8 *)(iVar13 + 100) +
                 (float)*(undefined8 *)(iVar13 + 0x74);
      }
      *(ulonglong *)pmVar15 = CONCAT44(fVar31,fVar30);
      *(float *)(this + 0xce7) = fVar32;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar21 = (undefined4)*(undefined8 *)pmVar15;
      uVar25 = CONCAT44(uVar21,uVar21);
      uVar21 = (undefined4)((ulonglong)*(undefined8 *)pmVar15 >> 0x20);
      uVar28 = CONCAT44(uVar21,uVar21);
      uVar29 = CONCAT44(*(undefined4 *)(this + 0xce7),*(undefined4 *)(this + 0xce7));
      uVar22 = PackedFloatingMUL(uVar25,*(undefined8 *)pfVar19);
      uVar24 = PackedFloatingMUL(uVar28,*(undefined8 *)(iVar13 + 0x4c));
      uVar26 = PackedFloatingMUL(uVar29,*(undefined8 *)(iVar13 + 0x5c));
      uVar22 = PackedFloatingADD(uVar22,*(undefined8 *)(iVar13 + 0x6c));
      uVar27 = PackedFloatingMUL(uVar25,*(undefined8 *)(iVar13 + 0x44));
      uVar25 = PackedFloatingADD(uVar24,uVar26);
      uVar24 = PackedFloatingMUL(uVar28,*(undefined8 *)(iVar13 + 0x54));
      uVar29 = PackedFloatingMUL(uVar29,*(undefined8 *)(iVar13 + 100));
      uVar28 = PackedFloatingADD(uVar27,*(undefined8 *)(iVar13 + 0x74));
      uVar25 = PackedFloatingADD(uVar22,uVar25);
      uVar22 = PackedFloatingADD(uVar24,uVar29);
      *(undefined8 *)pmVar15 = uVar25;
      uVar25 = PackedFloatingADD(uVar28,uVar22);
      *(int *)(this + 0xce7) = (int)uVar25;
      FastExitMediaState();
    }
    else {
      local_8 = (rgdRIGID *)0x0;
      local_10 = (m3dV *)((int)pfVar19 - (int)local_58);
      pfVar14 = local_58;
      do {
        pmVar7 = local_10;
        iVar13 = 0;
        *pfVar14 = 0.0;
        pfVar12 = (float *)((int)pmVar7 + (int)pfVar14);
        fVar32 = ___real_00000000;
        do {
          iVar11 = iVar13 * 4;
          fVar3 = *pfVar12;
          iVar13 = iVar13 + 1;
          pfVar12 = pfVar12 + 4;
          fVar32 = *(float *)(pmVar15 + iVar11) * fVar3 + fVar32;
        } while (iVar13 < 3);
        iVar13 = (int)local_8 + iVar13 * 4;
        iVar11 = (int)local_8 + 1;
        local_8 = (rgdRIGID *)iVar11;
        *pfVar14 = fVar32 + pfVar19[iVar13];
        pfVar14 = pfVar14 + 1;
      } while (iVar11 < 3);
      *(float *)pmVar15 = local_58[0];
      *(float *)(this + 0xce3) = local_58[1];
      *(float *)(this + 0xce7) = local_58[2];
    }
    prVar20 = this + 0xe3f;
    local_10 = local_1c;
    local_2c = (m3dV *)local_d8;
    local_8 = prVar20;
    if (m3dSimdType == 0) {
      if (((uint)local_d8 & 0xf) == 0) {
        fVar32 = *(float *)local_1c;
        fVar3 = *(float *)(local_1c + 4);
        fVar2 = *(float *)(local_1c + 8);
        fVar30 = fVar32 * local_d8[0] + local_a8[0] + fVar3 * local_c8 + fVar2 * local_b8;
        fVar31 = fVar32 * local_d8[1] + local_a8[1] + fVar3 * fStack_c4 + fVar2 * fStack_b4;
        fVar32 = fVar32 * local_d8[2] + local_a8[2] + fVar3 * fStack_c0 + fVar2 * fStack_b0;
      }
      else {
        fVar32 = *(float *)local_1c;
        fVar3 = *(float *)(local_1c + 4);
        fVar2 = *(float *)(local_1c + 8);
        fVar30 = fVar32 * local_d8[0] + fVar3 * local_c8 + fVar2 * local_b8 + local_a8[0];
        fVar31 = fVar32 * local_d8[1] + fVar3 * fStack_c4 + fVar2 * fStack_b4 + local_a8[1];
        fVar32 = fVar32 * local_d8[2] + fVar3 * fStack_c0 + fVar2 * fStack_b0 + local_a8[2];
      }
      *(ulonglong *)prVar20 = CONCAT44(fVar31,fVar30);
      *(float *)(this + 0xe47) = fVar32;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar21 = (undefined4)*(undefined8 *)local_1c;
      uVar25 = CONCAT44(uVar21,uVar21);
      uVar21 = (undefined4)((ulonglong)*(undefined8 *)local_1c >> 0x20);
      uVar28 = CONCAT44(uVar21,uVar21);
      uVar29 = CONCAT44(*(undefined4 *)(local_1c + 8),*(undefined4 *)(local_1c + 8));
      uVar22 = PackedFloatingMUL(uVar25,CONCAT44(local_d8[1],local_d8[0]));
      uVar24 = PackedFloatingMUL(uVar28,CONCAT44(fStack_c4,local_c8));
      uVar26 = PackedFloatingMUL(uVar29,CONCAT44(fStack_b4,local_b8));
      uVar22 = PackedFloatingADD(uVar22,CONCAT44(local_a8[1],local_a8[0]));
      uVar27 = PackedFloatingMUL(uVar25,CONCAT44(local_d8[3],local_d8[2]));
      uVar25 = PackedFloatingADD(uVar24,uVar26);
      uVar24 = PackedFloatingMUL(uVar28,CONCAT44(uStack_bc,fStack_c0));
      uVar29 = PackedFloatingMUL(uVar29,CONCAT44(uStack_ac,fStack_b0));
      uVar28 = PackedFloatingADD(uVar27,CONCAT44(local_a8[3],local_a8[2]));
      uVar25 = PackedFloatingADD(uVar22,uVar25);
      uVar22 = PackedFloatingADD(uVar24,uVar29);
      *(undefined8 *)prVar20 = uVar25;
      uVar25 = PackedFloatingADD(uVar28,uVar22);
      *(int *)(this + 0xe47) = (int)uVar25;
      FastExitMediaState();
    }
    else {
      local_8 = (rgdRIGID *)0x0;
      local_10 = (m3dV *)((int)local_d8 - (int)prVar20);
      prVar10 = prVar20;
      do {
        iVar13 = 0;
        *(float *)prVar10 = 0.0;
        pmVar15 = (m3dV *)((int)local_d8 - (int)prVar20) + (int)prVar10;
        do {
          iVar11 = iVar13 * 4;
          fVar32 = *(float *)pmVar15;
          iVar13 = iVar13 + 1;
          pmVar15 = pmVar15 + 0x10;
          *(float *)prVar10 = *(float *)(local_1c + iVar11) * fVar32 + *(float *)prVar10;
        } while (iVar13 < 3);
        prVar1 = local_8 + iVar13 * 4;
        local_8 = local_8 + 1;
        *(float *)prVar10 = local_d8[(int)prVar1] + *(float *)prVar10;
        prVar10 = prVar10 + 4;
      } while ((int)local_8 < 3);
    }
    *(float *)prVar20 = -*(float *)prVar20;
    *(float *)(this + 0xe43) = -*(float *)(this + 0xe43);
    *(float *)(this + 0xe47) = -*(float *)(this + 0xe47);
    m3dMATR::Identity((m3dMATR *)(*(int *)(this + 0xe83) + 0x7c));
    m3dMATR::Translate((m3dMATR *)(this + 0xceb),&m3dVZero,0);
    *(undefined4 *)(this + 0xd37) = _m3dVZero;
    *(undefined4 *)(this + 0xd3b) = DAT_00963740;
    *(undefined4 *)(this + 0xd3f) = DAT_00963744;
    *(undefined4 *)(this + 0xe4b) = _m3dVZero;
    *(undefined4 *)(this + 0xe4f) = DAT_00963740;
    *(undefined4 *)(this + 0xe53) = DAT_00963744;
    *(undefined4 *)(this + 0xe57) = _m3dVZero;
    *(undefined4 *)(this + 0xe5b) = DAT_00963740;
    *(undefined4 *)(this + 0xe5f) = DAT_00963744;
    (**(code **)(*(int *)this + 0x78))(&local_4c);
    if (param_1 == (rgdINIT_PARAMS *)0x0) {
      local_8 = (rgdRIGID *)0x3e99999a;
    }
    else {
      local_8 = *(rgdRIGID **)(param_1 + 0xa8);
    }
    fVar23 = (float10)(**(code **)(*(int *)this + 0x80))(local_8);
    *(float *)(this + 0x153) = (float)fVar23;
    *(float *)(this + 0x157) = (float)((float10)___real_3f800000 / fVar23);
    (**(code **)(*(int *)this + 0x7c))();
    *(undefined4 *)(this + 0x19b) = 0x3f19999a;
    *(undefined4 *)(this + 0x19f) = 0x3f4ccccd;
    *(undefined4 *)(this + 0xe7f) = 0x41200000;
    *(undefined4 *)(this + 0xd83) = _m3dVZero;
    *(undefined4 *)(this + 0xd87) = DAT_00963740;
    uVar21 = DAT_00963744;
    *(undefined4 *)(this + 0xaa7) = 0;
    *(undefined4 *)(this + 0xe6b) = 0xbf800000;
    *(undefined4 *)(this + 0xd8b) = uVar21;
    if (param_1 != (rgdINIT_PARAMS *)0x0) {
      *(undefined4 *)(this + 0xd2b) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(this + 0xd2f) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(this + 0xd33) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(this + 0xd37) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(this + 0xd3b) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(this + 0xd3f) = *(undefined4 *)(param_1 + 0x1c);
      prVar17 = param_1 + 0x20;
      prVar20 = this + 0xe87;
      for (iVar13 = 0x1f; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined4 *)prVar20 = *(undefined4 *)prVar17;
        prVar17 = prVar17 + 4;
        prVar20 = prVar20 + 4;
      }
      if (0 < *(int *)(this + 0xeff)) {
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
      }
      *(undefined4 *)(this + 0x19b) = *(undefined4 *)(param_1 + 0x9c);
      *(undefined4 *)(this + 0x19f) = *(undefined4 *)(param_1 + 0xa0);
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | *(uint *)(param_1 + 4);
      fVar32 = *(float *)(param_1 + 0xa4);
      *(float *)(this + 0xe7f) = fVar32;
      if (___real_00000000 < *(float *)(param_1 + 0xac)) {
        param_1 = (rgdINIT_PARAMS *)(*(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xb4));
        if (___real_00000000 <= (float)param_1) {
          if (___real_447a0000 < (float)param_1) {
            param_1 = (rgdINIT_PARAMS *)0x447a0000;
          }
        }
        else {
          param_1 = (rgdINIT_PARAMS *)0x0;
        }
        fVar32 = m3dRandRange(fVar32,(float)param_1);
        *(float *)(this + 0xe6b) = fVar32;
        if (*(float *)(prVar6 + 0xb0) <= ___real_00000000) {
          *(float *)(this + 0xe67) = fVar32 * ___real_3f666666;
        }
        else {
          *(undefined4 *)(this + 0xe67) = *(undefined4 *)(prVar6 + 0xb0);
        }
      }
    }
    fVar32 = -*(float *)(this + 0xe7f);
    *(float *)(this + 0xe73) = _m3dVUnitY * fVar32;
    *(float *)(this + 0xe77) = DAT_005f9994 * fVar32;
    *(float *)(this + 0xe7b) = fVar32 * DAT_005f9998;
    pmVar15 = local_1c;
    prVar20 = this + 0xd8f;
    for (iVar13 = 0x2c; iVar13 != 0; iVar13 = iVar13 + -1) {
      *(undefined4 *)prVar20 = *(undefined4 *)pmVar15;
      pmVar15 = pmVar15 + 4;
      prVar20 = prVar20 + 4;
    }
    animINST::AbvCalcBVolEnclos(*(animINST **)(this + 0xbc),4,0,1.0);
    *(undefined4 *)(this + 0xe63) = 0;
    *(undefined4 *)(this + 0xe6f) = 0;
    *(undefined4 *)(this + 0xf13) = 0;
    uVar21 = *(undefined4 *)local_1c;
    uVar4 = *(undefined4 *)(local_1c + 4);
    *(undefined4 *)(this + 0xf03) = 0;
    uVar5 = *(undefined4 *)(local_1c + 8);
    *(undefined4 *)(this + 0xf07) = uVar21;
    *(undefined4 *)(this + 0xf0b) = uVar4;
    *(undefined4 *)(this + 0xf0f) = uVar5;
    isCDTEdgeNo = 0;
    isSimul = 1;
    isCDTVertNo = 1;
    return 1;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 0050EA80 */

void __thiscall rgdRIGID::ProcessFRAME(rgdRIGID *this)

{
  objOBJ *this_00;
  float fVar1;
  int iVar2;
  rgdRIGID *prVar3;
  m3dMATR *pmVar4;
  objAPPLY_COLOR oVar5;
  int iVar6;
  m3dMATR local_40 [64];
  
  if (isSimul != 0) {
    ProcessPhysics(this);
    fVar1 = gsElapsedTime + *(float *)(this + 0xe6f);
    *(float *)(this + 0xe6f) = fVar1;
    this_00 = *(objOBJ **)(*(int *)(this + 0xbc) + 0x10);
    if (((this_00 != (objOBJ *)0x0) && (___real_00000000 < *(float *)(this + 0xe67))) &&
       (*(float *)(this + 0xe67) < fVar1)) {
      iVar6 = 0;
      oVar5 = 1;
      iVar2 = ftol();
      objOBJ::SetConstColor(this_00,iVar2 << 0x18,oVar5,iVar6);
    }
    if ((___real_00000000 <= *(float *)(this + 0xe6b)) &&
       (*(float *)(this + 0xe6b) <= *(float *)(this + 0xe6f))) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
    }
  }
  prVar3 = this + 0xceb;
  pmVar4 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pmVar4 = *(undefined4 *)prVar3;
    prVar3 = prVar3 + 4;
    pmVar4 = pmVar4 + 4;
  }
  m3dMATR::Translate(local_40,(m3dV *)(this + 0xcdf),0);
  animINST::Transform(*(animINST **)(this + 0xbc),local_40,0);
  animINST::Translate(*(animINST **)(this + 0xbc),(m3dV *)(this + 0xe3f),1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 0050ECA0 */

void __thiscall rgdRIGID::HullInit(rgdRIGID *this,m3dBOX *param_1)

{
  m3dV *pmVar1;
  rgdRIGID *prVar2;
  int iVar3;
  m3dV *pmVar4;
  int iVar5;
  rgdRIGID *prVar6;
  m3dMATR *this_00;
  void *pvVar7;
  float *pfVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 extraout_MM1;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float local_20 [3];
  void *local_14;
  rgdRIGID *local_10;
  m3dMATR *local_c;
  rgdRIGID *local_8;
  
  *(undefined4 *)(this + 0x1a3) = 8;
  m3dBOX::GetVertices(param_1,(m3dV *)(this + 0x1a7));
  local_c = (m3dMATR *)local_20;
  prVar6 = this + 0xe3f;
  prVar2 = this + 0xceb;
  local_14 = *(void **)(this + 0x1a3);
  local_8 = prVar6;
  local_10 = prVar2;
  this_00 = (m3dMATR *)prVar6;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar9 = (undefined4)*(undefined8 *)prVar6;
      uVar12 = CONCAT44(uVar9,uVar9);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)prVar6 >> 0x20);
      uVar17 = CONCAT44(uVar9,uVar9);
      uVar14 = CONCAT44(*(undefined4 *)(this + 0xe47),*(undefined4 *)(this + 0xe47));
      uVar13 = PackedFloatingMUL(uVar12,*(undefined8 *)prVar2);
      uVar11 = PackedFloatingMUL(uVar17,*(undefined8 *)(this + 0xcfb));
      uVar15 = PackedFloatingMUL(uVar14,*(undefined8 *)(this + 0xd0b));
      uVar16 = PackedFloatingMUL(uVar12,*(undefined8 *)(this + 0xcf3));
      uVar12 = PackedFloatingADD(uVar11,uVar15);
      uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(this + 0xd03));
      uVar11 = PackedFloatingMUL(uVar14,*(undefined8 *)(this + 0xd13));
      uVar12 = PackedFloatingADD(uVar13,uVar12);
      uVar13 = PackedFloatingADD(uVar17,uVar11);
      local_20[1] = (float)((ulonglong)uVar12 >> 0x20);
      local_20[0] = (float)uVar12;
      uVar12 = PackedFloatingADD(uVar16,uVar13);
      local_20[2] = (float)uVar12;
      FastExitMediaState();
      this_00 = local_c;
    }
    else {
      pfVar8 = local_20;
      local_c = (m3dMATR *)0x3;
      do {
        *pfVar8 = 0.0;
        iVar5 = 0;
        this_00 = (m3dMATR *)(((int)prVar2 - (int)local_20) + (int)pfVar8);
        fVar18 = ___real_00000000;
        do {
          iVar3 = iVar5 * 4;
          fVar19 = *(float *)this_00;
          iVar5 = iVar5 + 1;
          this_00 = this_00 + 0x10;
          fVar18 = *(float *)(prVar6 + iVar3) * fVar19 + fVar18;
        } while (iVar5 < 3);
        *pfVar8 = fVar18;
        pfVar8 = pfVar8 + 1;
        local_c = local_c + -1;
      } while (local_c != (m3dMATR *)0x0);
    }
  }
  pvVar7 = local_14;
  local_20[0] = local_20[0] + *(float *)(this + 0xcdf);
  local_20[1] = local_20[1] + *(float *)(this + 0xce3);
  local_20[2] = local_20[2] + *(float *)(this + 0xce7);
  m3dMATR::TransformPointList
            (this_00,(int)(this + 0xceb),local_14,(int)(this + 0x1a7),(void *)0xc,
             (int)(this + 0x297));
  if (0 < (int)pvVar7) {
    prVar6 = this + 0x29f;
    do {
      pvVar7 = (void *)((int)pvVar7 + -1);
      *(float *)(prVar6 + -8) = local_20[0] + *(float *)(prVar6 + -8);
      *(float *)(prVar6 + -4) = local_20[1] + *(float *)(prVar6 + -4);
      *(float *)prVar6 = local_20[2] + *(float *)prVar6;
      prVar6 = prVar6 + 0xc;
    } while (pvVar7 != (void *)0x0);
  }
  *(undefined4 *)(this + 0x387) = 0;
  *(undefined4 *)(this + 0x65b) = 0x3d23d70a;
  local_c = (m3dMATR *)0x0;
  do {
    pmVar4 = (m3dV *)(this + *(int *)(this + 0x387) * 0x24 + 0x38b);
    pmVar1 = pmVar4 + 0xc;
    m3dBOX::GetEdgePoints(param_1,(int)local_c,pmVar4,pmVar1);
    local_20[0] = *(float *)pmVar1 - *(float *)pmVar4;
    local_20[1] = *(float *)(pmVar4 + 0x10) - *(float *)(pmVar4 + 4);
    local_20[2] = *(float *)(pmVar4 + 0x14) - *(float *)(pmVar4 + 8);
    fVar18 = local_20[0] * local_20[0] + local_20[1] * local_20[1] + local_20[2] * local_20[2];
    if (m3dSimdType == 0) {
      fVar18 = fVar18 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
      fVar19 = auVar20._0_4_;
      local_8 = (rgdRIGID *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar19 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar18 * fVar19 * fVar19) * fVar18);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar10 = (ulonglong)(uint)fVar18;
      uVar12 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar10);
      uVar13 = PackedFloatingMUL(uVar12,uVar12);
      uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar10);
      uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
      uVar12 = PackedFloatingMUL(uVar12,uVar10);
      local_8 = (rgdRIGID *)uVar12;
      FastExitMediaState();
    }
    else {
      local_8 = (rgdRIGID *)SQRT(fVar18);
    }
    if (*(float *)(this + 0x65b) * ___real_40800000 <= (float)local_8) {
      fVar18 = ___real_3f800000 / (float)local_8;
      local_20[0] = local_20[0] * fVar18;
      local_20[1] = local_20[1] * fVar18;
      local_20[2] = local_20[2] * fVar18;
      iVar5 = m3dGetClosestVert(*(int *)(this + 0x1a3),(m3dV *)(this + 0x1a7),pmVar4);
      *(int *)(pmVar4 + 0x18) = iVar5;
      iVar5 = m3dGetClosestVert(*(int *)(this + 0x1a3),(m3dV *)(this + 0x1a7),pmVar1);
      *(int *)(pmVar4 + 0x1c) = iVar5;
      *(undefined4 *)(pmVar4 + 0x20) = 0;
      fVar18 = (float)local_8 - *(float *)(this + 0x65b);
      *(float *)pmVar1 = local_20[0] * fVar18 + *(float *)pmVar4;
      *(float *)(pmVar4 + 0x10) = local_20[1] * fVar18 + *(float *)(pmVar4 + 4);
      *(float *)(pmVar4 + 0x14) = local_20[2] * fVar18 + *(float *)(pmVar4 + 8);
      fVar18 = *(float *)(this + 0x65b);
      *(float *)pmVar4 = local_20[0] * fVar18 + *(float *)pmVar4;
      *(float *)(pmVar4 + 4) = local_20[1] * fVar18 + *(float *)(pmVar4 + 4);
      *(float *)(pmVar4 + 8) = local_20[2] * fVar18 + *(float *)(pmVar4 + 8);
      *(int *)(this + 0x387) = *(int *)(this + 0x387) + 1;
    }
    local_c = (m3dMATR *)((int)local_c + 1);
  } while ((int)local_c < 0xc);
  *(undefined4 *)(this + 0x67b) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x67f) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x683) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x687) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x68b) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x68f) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x693) = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(*(int *)param_1 + 0x1c))(this + 0x65f);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 0050F0C0 */

void __thiscall rgdRIGID::CalcInertiaTensor(rgdRIGID *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (*(float *)(this + 0x68b) - *(float *)(this + 0x67f)) * ___real_3f000000;
  fVar2 = (*(float *)(this + 0x68f) - *(float *)(this + 0x683)) * ___real_3f000000;
  fVar3 = (*(float *)(this + 0x693) - *(float *)(this + 0x687)) * ___real_3f000000;
  m3dMATR::Identity((m3dMATR *)(this + 0x15b));
  fVar3 = fVar3 * fVar3;
  fVar2 = fVar2 * fVar2;
  *(float *)(this + 0x15b) = (*(float *)(this + 0x157) * ___real_40400000) / (fVar2 + fVar3);
  fVar1 = fVar1 * fVar1;
  *(float *)(this + 0x16f) = (*(float *)(this + 0x157) * ___real_40400000) / (fVar1 + fVar3);
  *(float *)(this + 0x183) = (*(float *)(this + 0x157) * ___real_40400000) / (fVar1 + fVar2);
  return;
}




/* from: gs:phys_rigid.cpp
   addr: 0050F190 */

float __thiscall rgdRIGID::CalcMass(rgdRIGID *this,float param_1)

{
  return (*(float *)(this + 0x693) - *(float *)(this + 0x687)) *
         (*(float *)(this + 0x68f) - *(float *)(this + 0x683)) *
         (*(float *)(this + 0x68b) - *(float *)(this + 0x67f)) * param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 0050F1D0 */

void __thiscall rgdRIGID::ProcessPhysics(rgdRIGID *this)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  rgdRIGID *prVar7;
  rgdRIGID *prVar8;
  int *piVar9;
  uint local_44;
  int iStack_3c;
  int local_34 [13];
  
  fVar2 = gsElapsedTime;
  local_44 = 0;
  if ((*(uint *)(this + 0x14f) & 2) != 0) {
    return;
  }
  if ((*(uint *)(this + 0x14f) & 8) != 0) {
    (**(code **)(*(int *)this + 0x8c))();
  }
  piVar9 = local_34;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  if (((byte)this[0x14f] & 4) == 0) {
    iVar4 = ProcessPhysicSingleStep(this,fVar2);
    if (iVar4 != 0) {
      local_44 = 1;
      if (local_34[0] == 0) {
        iVar4 = 0;
        if (0 < *(int *)(this + 0xaa7)) {
          prVar7 = this + 0x697;
LAB_0050f250:
          if ((*(int *)prVar7 != 2) && (*(int *)prVar7 != 1)) goto code_r0x0050f25c;
          prVar7 = this + iVar4 * 0x34 + 0x697;
          piVar9 = local_34;
          for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar9 = *(int *)prVar7;
            prVar7 = prVar7 + 4;
            piVar9 = piVar9 + 1;
          }
        }
      }
      goto LAB_0050f27e;
    }
  }
  else {
LAB_0050f27e:
    iVar4 = ftol();
    if (0 < iVar4) {
      iStack_3c = iVar4;
      do {
        uVar3 = ProcessPhysicSingleStep(this,0.01);
        local_44 = local_44 | uVar3;
        prVar7 = this + 0xd8f;
        prVar8 = this + 0xcdf;
        for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)prVar8 = *(undefined4 *)prVar7;
          prVar7 = prVar7 + 4;
          prVar8 = prVar8 + 4;
        }
        if ((uVar3 != 0) && (local_34[0] == 0)) {
          iVar5 = 0;
          if (0 < *(int *)(this + 0xaa7)) {
            prVar7 = this + 0x697;
LAB_0050f2ed:
            if ((*(int *)prVar7 != 2) && (*(int *)prVar7 != 1)) goto code_r0x0050f2f9;
            prVar7 = this + iVar5 * 0x34 + 0x697;
            piVar9 = local_34;
            for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar9 = *(int *)prVar7;
              prVar7 = prVar7 + 4;
              piVar9 = piVar9 + 1;
            }
          }
        }
LAB_0050f31b:
        iStack_3c = iStack_3c + -1;
      } while (iStack_3c != 0);
    }
    if ((float)iVar4 * ___real_3c23d70a < fVar2 - ___real_3a83126f) {
      uVar3 = ProcessPhysicSingleStep(this,fVar2 - (float)iVar4 * ___real_3c23d70a);
      local_44 = local_44 | uVar3;
      if ((uVar3 != 0) && (local_34[0] == 0)) {
        iVar4 = 0;
        if (0 < *(int *)(this + 0xaa7)) {
          prVar7 = this + 0x697;
LAB_0050f381:
          if ((*(int *)prVar7 != 2) && (*(int *)prVar7 != 1)) goto code_r0x0050f38d;
          prVar7 = this + iVar4 * 0x34 + 0x697;
          piVar9 = local_34;
          for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar9 = *(int *)prVar7;
            prVar7 = prVar7 + 4;
            piVar9 = piVar9 + 1;
          }
        }
      }
    }
LAB_0050f3b3:
    if (local_44 != 0) {
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
      *(int *)(this + 0xf13) = *(int *)(this + 0xf13) + 1;
      (**(code **)(*(int *)this + 0x74))(local_34);
      goto LAB_0050f3f4;
    }
  }
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffb;
LAB_0050f3f4:
  fVar1 = *(float *)(this + 0xf03);
  prVar7 = this + 0xd8f;
  prVar8 = this + 0xcdf;
  for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)prVar8 = *(undefined4 *)prVar7;
    prVar7 = prVar7 + 4;
    prVar8 = prVar8 + 4;
  }
  *(float *)(this + 0xf03) = fVar2 + fVar1;
  return;
code_r0x0050f25c:
  iVar4 = iVar4 + 1;
  prVar7 = prVar7 + 0x34;
  if (*(int *)(this + 0xaa7) <= iVar4) goto LAB_0050f27e;
  goto LAB_0050f250;
code_r0x0050f2f9:
  iVar5 = iVar5 + 1;
  prVar7 = prVar7 + 0x34;
  if (*(int *)(this + 0xaa7) <= iVar5) goto LAB_0050f31b;
  goto LAB_0050f2ed;
code_r0x0050f38d:
  iVar4 = iVar4 + 1;
  prVar7 = prVar7 + 0x34;
  if (*(int *)(this + 0xaa7) <= iVar4) goto LAB_0050f3b3;
  goto LAB_0050f381;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 0050F420 */

int __thiscall rgdRIGID::ProcessPhysicSingleStep(rgdRIGID *this,float param_1)

{
  int iVar1;
  int iVar2;
  rgdRIGID *prVar3;
  int iVar4;
  rgdRIGID *prVar5;
  undefined4 *puVar6;
  rgdRIGID *prVar7;
  float unaff_retaddr;
  int iStack_c0;
  undefined4 auStack_b0 [44];
  
  if (((byte)this[0x14f] & 2) == 0) {
    (**(code **)(*(int *)this + 0x84))();
    ComputeForces(this,param_1);
    iVar2 = ftol();
    prVar3 = this + 0xcdf;
    prVar5 = prVar3;
    puVar6 = auStack_b0;
    for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)prVar5;
      prVar5 = prVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    iStack_c0 = iVar2;
    if (0 < iVar2) {
      do {
        IntegrateSingleStep(this,0.003);
        iStack_c0 = iStack_c0 + -1;
        prVar5 = this + 0xd8f;
        prVar7 = prVar3;
        for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)prVar7 = *(undefined4 *)prVar5;
          prVar5 = prVar5 + 4;
          prVar7 = prVar7 + 4;
        }
      } while (iStack_c0 != 0);
    }
    if ((float)iVar2 * ___real_3b449ba6 < param_1 - ___real_38d1b717) {
      IntegrateSingleStep(this,param_1 - (float)iVar2 * ___real_3b449ba6);
    }
    iVar2 = *(int *)this;
    puVar6 = auStack_b0;
    for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)prVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      prVar3 = prVar3 + 4;
    }
    iVar2 = (**(code **)(iVar2 + 0x88))(0);
    if ((0 < *(int *)(this + 0x387)) && (iVar4 = 0, 0 < *(int *)(this + 0xaa7))) {
      prVar3 = this + 0x6bb;
      do {
        iVar1 = *(int *)prVar3;
        if (*(int *)(prVar3 + -0x24) == 2) {
          *(float *)(this + iVar1 * 0x24 + 0x3ab) =
               unaff_retaddr + *(float *)(this + iVar1 * 0x24 + 0x3ab);
        }
        else {
          *(undefined4 *)(this + iVar1 * 0x24 + 0x3ab) = 0;
        }
        iVar4 = iVar4 + 1;
        prVar3 = prVar3 + 0x34;
      } while (iVar4 < *(int *)(this + 0xaa7));
    }
    iVar4 = 0;
    if (0 < *(int *)(this + 0xaa7)) {
      prVar3 = this + 0x6af;
      do {
        if ((*(float *)(prVar3 + -0x18) != 0.0) &&
           ((((*(float *)(prVar3 + -8) - *(float *)(this + 0xd8f)) * *(float *)(this + 0xe3b) -
             (*(float *)prVar3 - *(float *)(this + 0xd97)) * *(float *)(this + 0xe33)) +
            *(float *)(this + 0xddf)) * *(float *)(prVar3 + -0x10) +
            (((*(float *)(prVar3 + -4) - *(float *)(this + 0xd93)) * *(float *)(this + 0xe33) -
             (*(float *)(prVar3 + -8) - *(float *)(this + 0xd8f)) * *(float *)(this + 0xe37)) +
            *(float *)(this + 0xde3)) * *(float *)(prVar3 + -0xc) +
            (((*(float *)prVar3 - *(float *)(this + 0xd97)) * *(float *)(this + 0xe37) -
             (*(float *)(prVar3 + -4) - *(float *)(this + 0xd93)) * *(float *)(this + 0xe3b)) +
            *(float *)(this + 0xddb)) * *(float *)(prVar3 + -0x14) < ___real_bb449ba6)) {
          ResolveSingleCollision(this,(rgdCOLLIS *)(prVar3 + -0x18));
        }
        iVar4 = iVar4 + 1;
        prVar3 = prVar3 + 0x34;
      } while (iVar4 < *(int *)(this + 0xaa7));
    }
    CheckAtRest(this,unaff_retaddr);
    return iVar2;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 0050F660 */

void __thiscall rgdRIGID::ComputeForces(rgdRIGID *this,float param_1)

{
  rgdRIGID *prVar1;
  rgdRIGID *prVar2;
  ulonglong uVar3;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_18;
  float local_14;
  float local_10;
  
  local_14 = 0.02;
  prVar1 = this + 0xe57;
  prVar2 = this + 0xe4b;
  local_10 = 0.1;
  *(float *)prVar1 = _m3dVZero;
  *(undefined4 *)(this + 0xe5b) = DAT_00963740;
  *(undefined4 *)(this + 0xe5f) = DAT_00963744;
  *(float *)prVar2 = _m3dVZero;
  *(undefined4 *)(this + 0xe4f) = DAT_00963740;
  *(undefined4 *)(this + 0xe53) = DAT_00963744;
  if (DAT_005f7848 != 0) {
    fVar6 = *(float *)(this + 0x153);
    *(float *)prVar2 = fVar6 * *(float *)(this + 0xe73) + *(float *)prVar2;
    *(float *)(this + 0xe4f) = fVar6 * *(float *)(this + 0xe77) + *(float *)(this + 0xe4f);
    *(float *)(this + 0xe53) = fVar6 * *(float *)(this + 0xe7b) + *(float *)(this + 0xe53);
  }
  if (DAT_00956f64 != 0) {
    ApplySupportReaction(this);
    in_MM1 = extraout_MM1;
  }
  if (DAT_005f7850 != 0) {
    ApplyFriction(this,param_1);
    in_MM1 = extraout_MM1_00;
  }
  if (DAT_005f784c != 0) {
    fVar6 = ___real_3dcccccd / (param_1 * *(float *)(this + 0x157));
    if (fVar6 <= ___real_3ca3d70a) {
      local_14 = fVar6;
    }
    local_18 = *(float *)(this + 0xd2b) * *(float *)(this + 0xd2b) +
               *(float *)(this + 0xd2f) * *(float *)(this + 0xd2f) +
               *(float *)(this + 0xd33) * *(float *)(this + 0xd33);
    if (m3dSimdType == 0) {
      local_18 = local_18 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)local_18),ZEXT416((uint)local_18));
      fVar6 = auVar7._0_4_;
      local_18 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_18 * fVar6 * fVar6) * local_18
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)local_18;
      uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      uVar4 = PackedFloatingMUL(uVar4,uVar3);
      local_18 = (float)uVar4;
      FastExitMediaState();
    }
    else {
      local_18 = SQRT(local_18);
    }
    if ((___real_3c23d70a < local_18) &&
       (fVar6 = (*(float *)(this + 0xe7f) / local_18) * *(float *)(this + 0x153) * ___real_3dcccccd,
       fVar6 <= local_14)) {
      local_14 = fVar6;
    }
    if (___real_3dcccccd / param_1 <= ___real_3dcccccd) {
      local_10 = ___real_3dcccccd / param_1;
    }
    local_14 = -local_14;
    *(float *)prVar2 = local_14 * *(float *)(this + 0xd2b) + *(float *)prVar2;
    *(float *)(this + 0xe4f) = local_14 * *(float *)(this + 0xd2f) + *(float *)(this + 0xe4f);
    *(float *)(this + 0xe53) = local_14 * *(float *)(this + 0xd33) + *(float *)(this + 0xe53);
    local_10 = -local_10;
    *(float *)prVar1 = local_10 * *(float *)(this + 0xd37) + *(float *)prVar1;
    *(float *)(this + 0xe5b) = local_10 * *(float *)(this + 0xd3b) + *(float *)(this + 0xe5b);
    *(float *)(this + 0xe5f) = local_10 * *(float *)(this + 0xd3f) + *(float *)(this + 0xe5f);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 0050F8D0 */

void __thiscall rgdRIGID::CalcFrictPointList(rgdRIGID *this)

{
  rgdRIGID *prVar1;
  rgdRIGID *prVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  rgdRIGID *prVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float local_e0 [20];
  float local_90 [20];
  int local_40;
  rgdRIGID *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c [3];
  rgdRIGID *local_20;
  rgdRIGID *local_1c;
  float local_18 [4];
  float *local_8;
  
  iVar7 = *(int *)(this + 0x1a3);
  if (0 < iVar7) {
    pfVar10 = local_e0;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar10 = 0.0;
      pfVar10 = pfVar10 + 1;
    }
  }
  iVar7 = *(int *)(this + 0x387);
  if (0 < iVar7) {
    pfVar10 = local_90;
    local_90[0] = DAT_005dcb64;
    pfVar9 = local_90;
    for (uVar8 = iVar7 * 4 - 1U >> 2; pfVar10 = pfVar10 + 1, uVar8 != 0; uVar8 = uVar8 - 1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
    }
  }
  iVar11 = *(int *)(this + 0xaa7);
  if (0 < iVar11) {
    prVar6 = this + 0x6b3;
    do {
      if (-1 < *(int *)(prVar6 + 8)) {
        local_90[*(int *)(prVar6 + 8)] = *(float *)prVar6;
      }
      prVar6 = prVar6 + 0x34;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = 0;
  if (0 < iVar7) {
    prVar6 = this + 0x3a7;
    do {
      fVar5 = local_90[iVar11] - *(float *)(this + 0x65b);
      if (local_e0[*(int *)(prVar6 + -4)] < fVar5) {
        local_e0[*(int *)(prVar6 + -4)] = fVar5;
      }
      if (local_e0[*(int *)prVar6] < fVar5) {
        local_e0[*(int *)prVar6] = fVar5;
      }
      iVar11 = iVar11 + 1;
      prVar6 = prVar6 + 0x24;
    } while (iVar11 < iVar7);
  }
  *(undefined4 *)(this + 0xcdb) = 0;
  local_40 = 0;
  if (0 < *(int *)(this + 0x1a3)) {
    prVar6 = this + 0x1a7;
    local_3c = prVar6;
    do {
      if (local_e0[local_40] <= ___real_3dcccccd) {
        local_1c = this + 0xceb;
        local_20 = (rgdRIGID *)local_18;
        if (m3dSimdType != 0) {
          if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar12 = (undefined4)*(undefined8 *)prVar6;
            uVar15 = CONCAT44(uVar12,uVar12);
            uVar12 = (undefined4)((ulonglong)*(undefined8 *)prVar6 >> 0x20);
            uVar18 = CONCAT44(uVar12,uVar12);
            uVar19 = CONCAT44(*(undefined4 *)(prVar6 + 8),*(undefined4 *)(prVar6 + 8));
            uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)local_1c);
            uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xcfb));
            uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xd0b));
            uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(this + 0xd1b));
            uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0xcf3));
            uVar15 = PackedFloatingADD(uVar14,uVar16);
            uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xd03));
            uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xd13));
            uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(this + 0xd23));
            uVar15 = PackedFloatingADD(uVar13,uVar15);
            uVar13 = PackedFloatingADD(uVar14,uVar19);
            local_18[1] = (float)((ulonglong)uVar15 >> 0x20);
            local_18[0] = (float)uVar15;
            uVar15 = PackedFloatingADD(uVar18,uVar13);
            local_18[2] = (float)uVar15;
            FastExitMediaState();
          }
          else {
            iVar7 = 0;
            local_8 = (float *)((int)local_1c - (int)local_18);
            pfVar10 = local_18;
            do {
              pfVar9 = local_8;
              iVar11 = 0;
              *pfVar10 = 0.0;
              pfVar9 = (float *)((int)pfVar9 + (int)pfVar10);
              fVar5 = ___real_00000000;
              do {
                iVar3 = iVar11 * 4;
                fVar4 = *pfVar9;
                iVar11 = iVar11 + 1;
                pfVar9 = pfVar9 + 4;
                fVar5 = *(float *)(prVar6 + iVar3) * fVar4 + fVar5;
              } while (iVar11 < 3);
              iVar11 = iVar7 + iVar11 * 4;
              iVar7 = iVar7 + 1;
              *pfVar10 = fVar5 + *(float *)(local_1c + iVar11 * 4);
              pfVar10 = pfVar10 + 1;
            } while (iVar7 < 3);
          }
        }
        local_8 = local_2c;
        prVar1 = this + 0xceb;
        prVar2 = this + 0xe3f;
        local_18[0] = local_18[0] + *(float *)(this + 0xcdf);
        local_20 = prVar2;
        local_1c = prVar1;
        local_18[1] = local_18[1] + *(float *)(this + 0xce3);
        local_18[2] = local_18[2] + *(float *)(this + 0xce7);
        if (m3dSimdType != 0) {
          if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar12 = (undefined4)*(undefined8 *)prVar2;
            uVar15 = CONCAT44(uVar12,uVar12);
            uVar12 = (undefined4)((ulonglong)*(undefined8 *)prVar2 >> 0x20);
            uVar18 = CONCAT44(uVar12,uVar12);
            uVar19 = CONCAT44(*(undefined4 *)(this + 0xe47),*(undefined4 *)(this + 0xe47));
            uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)prVar1);
            uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xcfb));
            uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xd0b));
            uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0xcf3));
            uVar15 = PackedFloatingADD(uVar14,uVar16);
            uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xd03));
            uVar14 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xd13));
            uVar15 = PackedFloatingADD(uVar13,uVar15);
            uVar13 = PackedFloatingADD(uVar18,uVar14);
            local_2c[1] = (float)((ulonglong)uVar15 >> 0x20);
            local_2c[0] = (float)uVar15;
            uVar15 = PackedFloatingADD(uVar17,uVar13);
            local_2c[2] = (float)uVar15;
            FastExitMediaState();
          }
          else {
            pfVar10 = local_2c;
            local_8 = (float *)0x3;
            do {
              *pfVar10 = 0.0;
              iVar7 = 0;
              pfVar9 = (float *)(((int)prVar1 - (int)local_2c) + (int)pfVar10);
              fVar5 = ___real_00000000;
              do {
                iVar11 = iVar7 * 4;
                fVar4 = *pfVar9;
                iVar7 = iVar7 + 1;
                pfVar9 = pfVar9 + 4;
                fVar5 = *(float *)(prVar2 + iVar11) * fVar4 + fVar5;
              } while (iVar7 < 3);
              *pfVar10 = fVar5;
              pfVar10 = pfVar10 + 1;
              local_8 = (float *)((int)local_8 + -1);
            } while (local_8 != (float *)0x0);
          }
        }
        local_18[0] = local_2c[0] + local_18[0];
        local_18[1] = local_2c[1] + local_18[1];
        local_18[2] = local_2c[2] + local_18[2];
        local_3c = prVar6;
        iVar7 = GetClosestPoint(this,(m3dV *)local_18,0.1,(m3dV *)0x0,(m3dV *)&local_38,local_18 + 3
                               );
        if (iVar7 != 0) {
          iVar7 = *(int *)(this + 0xcdb) * 0x1c;
          *(float *)(this + *(int *)(this + 0xcdb) * 0x1c + 0xab7) = local_18[0];
          *(float *)(this + iVar7 + 0xabb) = local_18[1];
          *(float *)(this + iVar7 + 0xabf) = local_18[2];
          iVar7 = *(int *)(this + 0xcdb) * 0x1c;
          *(undefined4 *)(this + *(int *)(this + 0xcdb) * 0x1c + 0xaab) = local_38;
          *(undefined4 *)(this + iVar7 + 0xaaf) = local_34;
          *(undefined4 *)(this + iVar7 + 0xab3) = local_30;
          *(float *)(this + *(int *)(this + 0xcdb) * 0x1c + 0xac3) = local_18[3];
          *(int *)(this + 0xcdb) = *(int *)(this + 0xcdb) + 1;
        }
      }
      local_40 = local_40 + 1;
      prVar6 = prVar6 + 0xc;
      local_3c = prVar6;
    } while (local_40 < *(int *)(this + 0x1a3));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 0050FDB0 */

void __thiscall rgdRIGID::ApplyFriction(rgdRIGID *this,float param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  rgdRIGID *prVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar3 = 0;
  if (0 < *(int *)(this + 0xcdb)) {
    prVar4 = this + 0xaab;
    do {
      local_30 = *(float *)(prVar4 + 0xc);
      local_2c = *(float *)(prVar4 + 0x10);
      local_28 = *(float *)(prVar4 + 0x14);
      local_48 = *(float *)prVar4;
      local_44 = *(float *)(prVar4 + 4);
      local_40 = *(float *)(prVar4 + 8);
      local_54 = ((local_28 - *(float *)(this + 0xce7)) * *(float *)(this + 0xd87) -
                 (local_2c - *(float *)(this + 0xce3)) * *(float *)(this + 0xd8b)) +
                 *(float *)(this + 0xd2b);
      local_50 = ((local_30 - *(float *)(this + 0xcdf)) * *(float *)(this + 0xd8b) -
                 (local_28 - *(float *)(this + 0xce7)) * *(float *)(this + 0xd83)) +
                 *(float *)(this + 0xd2f);
      local_4c = ((local_2c - *(float *)(this + 0xce3)) * *(float *)(this + 0xd83) -
                 (local_30 - *(float *)(this + 0xcdf)) * *(float *)(this + 0xd87)) +
                 *(float *)(this + 0xd33);
      fVar1 = local_48 * local_54 + local_44 * local_50 + local_40 * local_4c;
      local_14 = local_44 * fVar1;
      local_10 = local_40 * fVar1;
      local_60 = local_54 - local_48 * fVar1;
      local_5c = local_50 - local_14;
      local_58 = local_4c - local_10;
      local_3c = local_54;
      local_38 = local_50;
      local_34 = local_4c;
      iVar2 = _m3dNormalize((m3dV *)&local_3c);
      if (((iVar2 != 0) &&
          (local_48 * local_3c + local_38 * local_44 + local_34 * local_40 <= ___real_3dcccccd)) &&
         (fVar1 = _m3dVUnitY * local_48 + local_44 * DAT_005f9994 + local_40 * DAT_005f9998,
         ___real_00000000 <= fVar1)) {
        local_68 = local_60 * local_60 + local_5c * local_5c + local_58 * local_58;
        if (m3dSimdType == 0) {
          local_68 = local_68 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar9 = rsqrtss(ZEXT416((uint)local_68),ZEXT416((uint)local_68));
          fVar8 = auVar9._0_4_;
          local_68 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_68 * fVar8 * fVar8) *
                     local_68;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar5 = (ulonglong)(uint)local_68;
          uVar6 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar5);
          uVar7 = PackedFloatingMUL(uVar6,uVar6);
          uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
          uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
          uVar6 = PackedFloatingMUL(uVar6,uVar5);
          local_68 = (float)uVar6;
          FastExitMediaState();
        }
        else {
          local_68 = SQRT(local_68);
        }
        iVar2 = _m3dNormalize((m3dV *)&local_60);
        if (iVar2 != 0) {
          fVar1 = *(float *)(this + 0xe7f) * *(float *)(this + 0x19f) * *(float *)(this + 0x153) *
                  fVar1;
          if (local_68 < fVar1 * *(float *)(this + 0x157) * param_1) {
            fVar1 = local_68 / (param_1 * *(float *)(this + 0x157));
          }
          fVar1 = -fVar1;
          local_60 = local_60 * fVar1;
          local_5c = local_5c * fVar1;
          local_58 = local_58 * fVar1;
          *(float *)(this + 0xe4b) = local_60 + *(float *)(this + 0xe4b);
          *(float *)(this + 0xe4f) = local_5c + *(float *)(this + 0xe4f);
          *(float *)(this + 0xe53) = local_58 + *(float *)(this + 0xe53);
          local_24 = local_30 - *(float *)(this + 0xcdf);
          local_20 = local_2c - *(float *)(this + 0xce3);
          local_c = local_20 * local_58 - (local_28 - *(float *)(this + 0xce7)) * local_5c;
          local_8 = (local_28 - *(float *)(this + 0xce7)) * local_60 - local_58 * local_24;
          *(float *)(this + 0xe57) = local_c + *(float *)(this + 0xe57);
          *(float *)(this + 0xe5b) = local_8 + *(float *)(this + 0xe5b);
          *(float *)(this + 0xe5f) =
               (local_5c * local_24 - local_20 * local_60) + *(float *)(this + 0xe5f);
        }
      }
      iVar3 = iVar3 + 1;
      prVar4 = prVar4 + 0x1c;
    } while (iVar3 < *(int *)(this + 0xcdb));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 00510150 */

void __thiscall rgdRIGID::ApplySupportReaction(rgdRIGID *this)

{
  rgdRIGID *prVar1;
  m3dV *pmVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  rgdRIGID *prVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_24c;
  float afStack_234 [21];
  float local_1e0 [60];
  m3dV local_f0 [4];
  float local_ec [59];
  
  iVar12 = 0;
  local_24c = 0;
  if (0 < *(int *)(this + 0xcdb)) {
    prVar11 = this + 0xabf;
    iVar14 = 0;
    iVar10 = *(int *)(this + 0xcdb);
    do {
      local_24c = iVar10;
      prVar1 = prVar11 + -0x14;
      fVar7 = (((*(float *)prVar11 - *(float *)(this + 0xd97)) * *(float *)(this + 0xe37) -
               (*(float *)(prVar11 + -4) - *(float *)(this + 0xd93)) * *(float *)(this + 0xe3b)) +
              *(float *)(this + 0xddb)) * *(float *)prVar1 +
              (((*(float *)(prVar11 + -8) - *(float *)(this + 0xd8f)) * *(float *)(this + 0xe3b) -
               (*(float *)prVar11 - *(float *)(this + 0xd97)) * *(float *)(this + 0xe33)) +
              *(float *)(this + 0xddf)) * *(float *)(prVar11 + -0x10) +
              (((*(float *)(prVar11 + -4) - *(float *)(this + 0xd93)) * *(float *)(this + 0xe33) -
               (*(float *)(prVar11 + -8) - *(float *)(this + 0xd8f)) * *(float *)(this + 0xe37)) +
              *(float *)(this + 0xde3)) * *(float *)(prVar11 + -0xc);
      iVar13 = iVar14;
      if (((___real_bb449ba6 < fVar7) && (fVar7 < ___real_3b449ba6)) &&
         (fVar7 = _m3dVUnitY * *(float *)prVar1 +
                  *(float *)(prVar11 + -0x10) * DAT_005f9994 +
                  *(float *)(prVar11 + -0xc) * DAT_005f9998, ___real_00000000 <= fVar7)) {
        fVar3 = *(float *)(this + 0xe7f);
        fVar4 = *(float *)(this + 0x153);
        *(float *)(local_f0 + iVar14) = *(float *)(prVar11 + -8);
        iVar12 = iVar12 + 1;
        *(float *)((int)local_ec + iVar14) = *(float *)(prVar11 + -4);
        *(float *)((int)local_ec + iVar14 + 4) = *(float *)prVar11;
        fVar6 = *(float *)prVar1;
        iVar13 = iVar14 + 0xc;
        afStack_234[iVar12] = fVar3 * fVar4 * fVar7;
        *(float *)((int)local_1e0 + iVar14) = fVar6;
        fVar7 = *(float *)(prVar11 + -0xc);
        *(float *)((int)local_1e0 + iVar14 + 4) = *(float *)(prVar11 + -0x10);
        *(float *)((int)local_1e0 + iVar14 + 8) = fVar7;
      }
      prVar11 = prVar11 + 0x1c;
      iVar10 = local_24c + -1;
      iVar14 = iVar13;
      local_24c = iVar12;
    } while (iVar10 != 0);
  }
  iVar12 = 0;
  if (0 < local_24c) {
    iVar14 = 0;
    fVar7 = ___real_3f800000 / (float)local_24c;
    do {
      fVar3 = fVar7 * afStack_234[iVar12 + 1];
      pmVar2 = local_f0 + iVar14;
      fVar6 = fVar3 * *(float *)((int)local_1e0 + iVar14);
      fVar4 = fVar3 * *(float *)((int)local_1e0 + iVar14 + 4);
      fVar3 = fVar3 * *(float *)((int)local_1e0 + iVar14 + 8);
      *(float *)(this + 0xe4b) = fVar6 + *(float *)(this + 0xe4b);
      *(float *)(this + 0xe4f) = fVar4 + *(float *)(this + 0xe4f);
      *(float *)(this + 0xe53) = fVar3 + *(float *)(this + 0xe53);
      if (pmVar2 != (m3dV *)0x0) {
        fVar5 = *(float *)pmVar2;
        fVar9 = *(float *)((int)local_ec + iVar14) - *(float *)(this + 0xce3);
        fVar8 = *(float *)((int)local_ec + iVar14 + 4) - *(float *)(this + 0xce7);
        *(float *)(this + 0xe57) = (fVar9 * fVar3 - fVar8 * fVar4) + *(float *)(this + 0xe57);
        *(float *)(this + 0xe5b) =
             (fVar8 * fVar6 - fVar3 * (fVar5 - *(float *)(this + 0xcdf))) + *(float *)(this + 0xe5b)
        ;
        *(float *)(this + 0xe5f) =
             (fVar4 * (fVar5 - *(float *)(this + 0xcdf)) - fVar9 * fVar6) + *(float *)(this + 0xe5f)
        ;
      }
      rendDRIVER::RenderVector(rendDrv,gsCameraPtr,pmVar2,&m3dVUnitY,1.0,0xffff00ff);
      iVar12 = iVar12 + 1;
      iVar14 = iVar14 + 0xc;
    } while (iVar12 < local_24c);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 00510400 */

int __thiscall rgdRIGID::CheckForCollisions(rgdRIGID *this,int param_1)

{
  rgdRIGID *prVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  rgdRIGID *prVar5;
  cdtINFO *pcVar6;
  float *pfVar7;
  int iVar8;
  rgdRIGID *prVar9;
  float *pfVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  m3dPOLY local_178 [244];
  float local_84;
  float local_80;
  float local_7c;
  int local_78;
  float local_74;
  cdtINFO *local_70;
  float local_6c [6];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [6];
  float local_18;
  float local_14;
  float local_10;
  rgdRIGID *local_c;
  rgdRIGID *local_8;
  
  local_78 = 0;
  *(undefined4 *)(this + 0xaa7) = 0;
  if ((isCDTEdgeNo == 0) && ((param_1 & 0x10U) == 0)) {
    _DAT_00956f58 = this;
    if (((byte)this[0x14f] & 1) == 0) {
      (**(code **)(**(int **)(gsScenePtr + 0x50) + 0x60))(&cdtQuery,0);
    }
    else {
      rgdCDT_QUERY::CalcDistance(&cdtQuery,(rgdPLANE_SET *)(this + 0xe87));
    }
    pcVar6 = (cdtINFO *)rgdCDT_QUERY::GetCDTInfoNext(&cdtQuery,(rgdINFO_LSEG *)0x0);
    if (pcVar6 != (cdtINFO *)0x0) {
      do {
        local_74 = *(float *)(pcVar6 + 0x1c);
        local_70 = pcVar6;
        if (*(int *)(pcVar6 + 0x20) < 0) {
          if (((byte)this[0x14f] & 1) == 0) {
            scnSCENE::GetCDTFace(gsScenePtr,pcVar6,(m3dPOLY *)0x0,(m3dV *)&local_18);
          }
          else {
            iVar11 = *(int *)(pcVar6 + 8) * 0x18;
            local_18 = *(float *)(this + *(int *)(pcVar6 + 8) * 0x18 + 0xe93);
            local_14 = *(float *)(this + iVar11 + 0xe97);
            local_10 = *(float *)(this + iVar11 + 0xe9b);
          }
        }
        else {
          if (((byte)this[0x14f] & 1) == 0) {
            scnSCENE::GetCDTFace(gsScenePtr,pcVar6,local_178,(m3dV *)&local_3c);
          }
          else {
            iVar11 = *(int *)(pcVar6 + 8) * 0x18;
            local_3c = *(float *)(this + *(int *)(pcVar6 + 8) * 0x18 + 0xe93);
            local_38 = *(float *)(this + iVar11 + 0xe97);
            local_34 = *(float *)(this + iVar11 + 0xe9b);
          }
          m3dGetPolyEdge(local_178,*(int *)(pcVar6 + 0x20),(m3dV *)&local_48,(m3dV *)&local_54);
          local_84 = local_54 - local_48;
          local_80 = local_50 - local_44;
          local_c = (rgdRIGID *)(local_30 + 3);
          prVar1 = this + 0xd9b;
          prVar9 = this + *(int *)(pcVar6 + 0x30) * 0x24 + 0x38b;
          local_7c = local_4c - local_40;
          if (m3dSimdType != 0) {
            if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar12 = (undefined4)*(undefined8 *)prVar9;
              uVar15 = CONCAT44(uVar12,uVar12);
              uVar12 = (undefined4)((ulonglong)*(undefined8 *)prVar9 >> 0x20);
              uVar18 = CONCAT44(uVar12,uVar12);
              uVar19 = CONCAT44(*(undefined4 *)(prVar9 + 8),*(undefined4 *)(prVar9 + 8));
              uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)prVar1);
              uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xdab));
              uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xdbb));
              uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(this + 0xdcb));
              uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0xda3));
              uVar15 = PackedFloatingADD(uVar14,uVar16);
              uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xdb3));
              uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xdc3));
              uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(this + 0xdd3));
              uVar15 = PackedFloatingADD(uVar13,uVar15);
              uVar13 = PackedFloatingADD(uVar14,uVar19);
              local_30[4] = (float)((ulonglong)uVar15 >> 0x20);
              local_30[3] = (float)uVar15;
              uVar15 = PackedFloatingADD(uVar18,uVar13);
              local_30[5] = (float)uVar15;
              FastExitMediaState();
            }
            else {
              iVar11 = 0;
              local_8 = (rgdRIGID *)((int)prVar1 - (int)(local_30 + 3));
              pfVar7 = local_30 + 3;
              do {
                prVar5 = local_8;
                iVar8 = 0;
                *pfVar7 = 0.0;
                pfVar10 = (float *)((int)prVar5 + (int)pfVar7);
                do {
                  iVar2 = iVar8 * 4;
                  fVar3 = *pfVar10;
                  iVar8 = iVar8 + 1;
                  pfVar10 = pfVar10 + 4;
                  *pfVar7 = *(float *)(prVar9 + iVar2) * fVar3 + *pfVar7;
                } while (iVar8 < 3);
                iVar8 = iVar11 + iVar8 * 4;
                iVar11 = iVar11 + 1;
                *pfVar7 = *(float *)(prVar1 + iVar8 * 4) + *pfVar7;
                pfVar7 = pfVar7 + 1;
                pcVar6 = local_70;
              } while (iVar11 < 3);
            }
          }
          local_c = this + 0xd9b;
          local_30[3] = local_30[3] + *(float *)(this + 0xd8f);
          local_30[4] = local_30[4] + *(float *)(this + 0xd93);
          local_30[5] = local_30[5] + *(float *)(this + 0xd97);
          if (m3dSimdType != 0) {
            if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar15 = *(undefined8 *)(this + 0xe3f);
              uVar12 = (undefined4)uVar15;
              uVar13 = CONCAT44(uVar12,uVar12);
              uVar12 = (undefined4)((ulonglong)uVar15 >> 0x20);
              uVar18 = CONCAT44(uVar12,uVar12);
              uVar19 = CONCAT44(*(undefined4 *)(this + 0xe47),*(undefined4 *)(this + 0xe47));
              uVar15 = PackedFloatingMUL(uVar13,*(undefined8 *)local_c);
              uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xdab));
              uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xdbb));
              uVar17 = PackedFloatingMUL(uVar13,*(undefined8 *)(this + 0xda3));
              uVar13 = PackedFloatingADD(uVar14,uVar16);
              uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xdb3));
              uVar14 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xdc3));
              uVar15 = PackedFloatingADD(uVar15,uVar13);
              uVar13 = PackedFloatingADD(uVar18,uVar14);
              local_6c[4] = (float)((ulonglong)uVar15 >> 0x20);
              local_6c[3] = (float)uVar15;
              uVar15 = PackedFloatingADD(uVar17,uVar13);
              local_6c[5] = (float)uVar15;
              FastExitMediaState();
            }
            else {
              pfVar7 = local_6c + 3;
              param_1 = 3;
              local_8 = (rgdRIGID *)((int)local_c - (int)(local_6c + 3));
              do {
                prVar1 = local_8;
                iVar11 = 0;
                *pfVar7 = 0.0;
                pfVar10 = (float *)((int)prVar1 + (int)pfVar7);
                fVar3 = ___real_00000000;
                do {
                  iVar8 = iVar11 * 4;
                  fVar4 = *pfVar10;
                  iVar11 = iVar11 + 1;
                  pfVar10 = pfVar10 + 4;
                  fVar3 = *(float *)(this + 0xe3f + iVar8) * fVar4 + fVar3;
                } while (iVar11 < 3);
                *pfVar7 = fVar3;
                pfVar7 = pfVar7 + 1;
                param_1 = param_1 + -1;
              } while (param_1 != 0);
            }
          }
          prVar1 = this + 0xd9b;
          local_30[3] = local_6c[3] + local_30[3];
          prVar9 = this + *(int *)(pcVar6 + 0x30) * 0x24 + 0x397;
          local_c = prVar9;
          local_30[4] = local_6c[4] + local_30[4];
          local_30[5] = local_6c[5] + local_30[5];
          if (m3dSimdType != 0) {
            if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar12 = (undefined4)*(undefined8 *)prVar9;
              uVar15 = CONCAT44(uVar12,uVar12);
              uVar12 = (undefined4)((ulonglong)*(undefined8 *)prVar9 >> 0x20);
              uVar18 = CONCAT44(uVar12,uVar12);
              uVar19 = CONCAT44(*(undefined4 *)(prVar9 + 8),*(undefined4 *)(prVar9 + 8));
              uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)prVar1);
              uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xdab));
              uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xdbb));
              uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(this + 0xdcb));
              uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0xda3));
              uVar15 = PackedFloatingADD(uVar14,uVar16);
              uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xdb3));
              uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xdc3));
              uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(this + 0xdd3));
              uVar15 = PackedFloatingADD(uVar13,uVar15);
              uVar13 = PackedFloatingADD(uVar14,uVar19);
              local_30[1] = (float)((ulonglong)uVar15 >> 0x20);
              local_30[0] = (float)uVar15;
              uVar15 = PackedFloatingADD(uVar18,uVar13);
              local_30[2] = (float)uVar15;
              FastExitMediaState();
            }
            else {
              iVar11 = 0;
              local_8 = (rgdRIGID *)((int)prVar1 - (int)local_30);
              pfVar7 = local_30;
              do {
                prVar5 = local_8;
                iVar8 = 0;
                *pfVar7 = 0.0;
                pfVar10 = (float *)((int)prVar5 + (int)pfVar7);
                do {
                  iVar2 = iVar8 * 4;
                  fVar3 = *pfVar10;
                  iVar8 = iVar8 + 1;
                  pfVar10 = pfVar10 + 4;
                  *pfVar7 = *(float *)(prVar9 + iVar2) * fVar3 + *pfVar7;
                } while (iVar8 < 3);
                iVar8 = iVar11 + iVar8 * 4;
                iVar11 = iVar11 + 1;
                *pfVar7 = *(float *)(prVar1 + iVar8 * 4) + *pfVar7;
                pfVar7 = pfVar7 + 1;
                pcVar6 = local_70;
              } while (iVar11 < 3);
            }
          }
          local_c = this + 0xd9b;
          prVar1 = this + 0xe3f;
          local_30[0] = local_30[0] + *(float *)(this + 0xd8f);
          local_30[1] = local_30[1] + *(float *)(this + 0xd93);
          local_30[2] = local_30[2] + *(float *)(this + 0xd97);
          local_8 = prVar1;
          if (m3dSimdType != 0) {
            if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar12 = (undefined4)*(undefined8 *)prVar1;
              uVar15 = CONCAT44(uVar12,uVar12);
              uVar12 = (undefined4)((ulonglong)*(undefined8 *)prVar1 >> 0x20);
              uVar18 = CONCAT44(uVar12,uVar12);
              uVar19 = CONCAT44(*(undefined4 *)(this + 0xe47),*(undefined4 *)(this + 0xe47));
              uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)local_c);
              uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xdab));
              uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xdbb));
              uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0xda3));
              uVar15 = PackedFloatingADD(uVar14,uVar16);
              uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xdb3));
              uVar14 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0xdc3));
              uVar15 = PackedFloatingADD(uVar13,uVar15);
              uVar13 = PackedFloatingADD(uVar18,uVar14);
              local_6c[1] = (float)((ulonglong)uVar15 >> 0x20);
              local_6c[0] = (float)uVar15;
              uVar15 = PackedFloatingADD(uVar17,uVar13);
              local_6c[2] = (float)uVar15;
              FastExitMediaState();
            }
            else {
              pfVar7 = local_6c;
              param_1 = 3;
              local_8 = local_c + -(int)local_6c;
              do {
                prVar9 = local_8;
                iVar11 = 0;
                *pfVar7 = 0.0;
                prVar9 = prVar9 + (int)pfVar7;
                fVar3 = ___real_00000000;
                do {
                  iVar8 = iVar11 * 4;
                  fVar4 = *(float *)prVar9;
                  iVar11 = iVar11 + 1;
                  prVar9 = prVar9 + 0x10;
                  fVar3 = *(float *)(prVar1 + iVar8) * fVar4 + fVar3;
                } while (iVar11 < 3);
                *pfVar7 = fVar3;
                pfVar7 = pfVar7 + 1;
                param_1 = param_1 + -1;
              } while (param_1 != 0);
            }
          }
          local_30[0] = local_6c[0] + local_30[0];
          local_30[1] = local_6c[1] + local_30[1];
          local_30[2] = local_6c[2] + local_30[2];
          local_18 = local_80 * (local_30[2] - local_30[5]) - (local_30[1] - local_30[4]) * local_7c
          ;
          local_14 = local_7c * (local_30[0] - local_30[3]) - (local_30[2] - local_30[5]) * local_84
          ;
          local_10 = (local_30[1] - local_30[4]) * local_84 - local_80 * (local_30[0] - local_30[3])
          ;
          if (local_18 * local_3c + local_38 * local_14 + local_34 * local_10 < ___real_00000000) {
            local_18 = -local_18;
            local_14 = -local_14;
            local_10 = -local_10;
          }
          m3dNormalize((m3dV *)&local_18);
        }
        *(undefined4 *)(this + *(int *)(this + 0xaa7) * 0x34 + 0x6b7) = 0xffffffff;
        *(undefined4 *)(this + *(int *)(this + 0xaa7) * 0x34 + 0x6bb) =
             *(undefined4 *)((rgdINFO_LSEG *)pcVar6 + 0x30);
        prVar1 = this + *(int *)(this + 0xaa7) * 0x34 + 0x6a7;
        *(undefined4 *)prVar1 = *(undefined4 *)((rgdINFO_LSEG *)pcVar6 + 0x24);
        *(undefined4 *)(prVar1 + 4) = *(undefined4 *)((rgdINFO_LSEG *)pcVar6 + 0x28);
        *(undefined4 *)(prVar1 + 8) = *(undefined4 *)((rgdINFO_LSEG *)pcVar6 + 0x2c);
        iVar11 = *(int *)(this + 0xaa7) * 0x34;
        *(float *)(this + *(int *)(this + 0xaa7) * 0x34 + 0x69b) = local_18;
        *(float *)(this + iVar11 + 0x69f) = local_14;
        *(float *)(this + iVar11 + 0x6a3) = local_10;
        *(float *)(this + *(int *)(this + 0xaa7) * 0x34 + 0x6b3) = local_74;
        if (_DAT_005dcb60 <= local_74) {
          if (local_74 <= ___real_3cf5c28f) {
            *(undefined4 *)(this + *(int *)(this + 0xaa7) * 0x34 + 0x697) = 1;
            local_78 = 1;
          }
          else {
            *(undefined4 *)(this + *(int *)(this + 0xaa7) * 0x34 + 0x697) = 0;
          }
        }
        else {
          local_78 = 1;
          *(undefined4 *)(this + *(int *)(this + 0xaa7) * 0x34 + 0x697) = 2;
        }
        *(int *)(this + 0xaa7) = *(int *)(this + 0xaa7) + 1;
        pcVar6 = (cdtINFO *)rgdCDT_QUERY::GetCDTInfoNext(&cdtQuery,(rgdINFO_LSEG *)pcVar6);
      } while (pcVar6 != (cdtINFO *)0x0);
      return local_78;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: gs:phys_rigid.cpp
   addr: 00510D60 */

void __thiscall rgdRIGID::ResolveSingleCollision(rgdRIGID *this,rgdCOLLIS *param_1)

{
  rgdRIGID *prVar1;
  int iVar2;
  float fVar3;
  rgdCOLLIS *prVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  rgdRIGID *prVar8;
  float *pfVar9;
  rgdRIGID *prVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_40 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  float local_14;
  float local_10;
  rgdRIGID *local_c;
  rgdRIGID *local_8;
  
  prVar4 = param_1;
  local_40[3] = *(float *)(param_1 + 0x10) - *(float *)(this + 0xd8f);
  local_30 = *(float *)(param_1 + 0x14) - *(float *)(this + 0xd93);
  local_2c = *(float *)(param_1 + 0x18) - *(float *)(this + 0xd97);
  local_28 = *(float *)(param_1 + 0x10) - *(float *)(this + 0xd8f);
  local_24 = *(float *)(param_1 + 0x14) - *(float *)(this + 0xd93);
  local_20 = *(float *)(param_1 + 0x18) - *(float *)(this + 0xd97);
  local_40[0] = (*(float *)(param_1 + 0x18) - *(float *)(this + 0xd97)) * *(float *)(this + 0xe37) -
                (*(float *)(param_1 + 0x14) - *(float *)(this + 0xd93)) * *(float *)(this + 0xe3b);
  local_40[1] = (*(float *)(param_1 + 0x10) - *(float *)(this + 0xd8f)) * *(float *)(this + 0xe3b) -
                (*(float *)(param_1 + 0x18) - *(float *)(this + 0xd97)) * *(float *)(this + 0xe33);
  local_10 = -((*(float *)(this + 0x19b) + ___real_3f800000) *
              ((local_40[0] + *(float *)(this + 0xddb)) * *(float *)(param_1 + 4) +
              (local_40[1] + *(float *)(this + 0xddf)) * *(float *)(param_1 + 8) +
              (((*(float *)(param_1 + 0x14) - *(float *)(this + 0xd93)) * *(float *)(this + 0xe33) -
               (*(float *)(param_1 + 0x10) - *(float *)(this + 0xd8f)) * *(float *)(this + 0xe37)) +
              *(float *)(this + 0xde3)) * *(float *)(param_1 + 0xc)));
  local_1c._0_4_ = local_24 * *(float *)(param_1 + 0xc) - local_20 * *(float *)(param_1 + 8);
  local_1c._4_4_ = local_20 * *(float *)(param_1 + 4) - local_28 * *(float *)(param_1 + 0xc);
  local_14 = local_28 * *(float *)(param_1 + 8) - local_24 * *(float *)(param_1 + 4);
  local_c = this + 0xdf3;
  local_8 = local_c;
  if (m3dSimdType == 0) {
    if (((uint)local_c & 0xf) == 0) {
      fVar23 = (float)local_1c * *(float *)local_c + local_1c._4_4_ * *(float *)(this + 0xe03) +
               local_14 * *(float *)(this + 0xe13);
      fVar21 = (float)local_1c * *(float *)(this + 0xdf7) +
               local_1c._4_4_ * *(float *)(this + 0xe07) + local_14 * *(float *)(this + 0xe17);
    }
    else {
      fVar23 = (float)local_1c * (float)*(undefined8 *)local_c +
               local_1c._4_4_ * (float)*(undefined8 *)(this + 0xe03) +
               local_14 * (float)*(undefined8 *)(this + 0xe13);
      fVar21 = (float)local_1c * (float)((ulonglong)*(undefined8 *)local_c >> 0x20) +
               local_1c._4_4_ * (float)((ulonglong)*(undefined8 *)(this + 0xe03) >> 0x20) +
               local_14 * (float)((ulonglong)*(undefined8 *)(this + 0xe13) >> 0x20);
    }
    local_1c = CONCAT44(fVar21,fVar23);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar15 = PackedFloatingMUL(CONCAT44((float)local_1c,(float)local_1c),*(undefined8 *)local_c);
    uVar13 = PackedFloatingMUL(CONCAT44(local_1c._4_4_,local_1c._4_4_),*(undefined8 *)(this + 0xe03)
                              );
    uVar18 = PackedFloatingMUL(CONCAT44(local_14,local_14),*(undefined8 *)(this + 0xe13));
    uVar14 = PackedFloatingMUL(CONCAT44((float)local_1c,(float)local_1c),
                               *(undefined8 *)(this + 0xdfb));
    uVar13 = PackedFloatingADD(uVar13,uVar18);
    uVar18 = PackedFloatingMUL(CONCAT44(local_1c._4_4_,local_1c._4_4_),*(undefined8 *)(this + 0xe0b)
                              );
    uVar19 = PackedFloatingMUL(CONCAT44(local_14,local_14),*(undefined8 *)(this + 0xe1b));
    local_1c = PackedFloatingADD(uVar15,uVar13);
    uVar15 = PackedFloatingADD(uVar18,uVar19);
    uVar15 = PackedFloatingADD(uVar14,uVar15);
    local_14 = (float)uVar15;
    FastExitMediaState();
  }
  else {
    pfVar9 = local_40;
    iVar11 = (int)local_c - (int)local_40;
    param_1 = (rgdCOLLIS *)0x3;
    do {
      *pfVar9 = 0.0;
      iVar5 = 0;
      pfVar7 = (float *)(iVar11 + (int)pfVar9);
      fVar23 = ___real_00000000;
      do {
        iVar6 = iVar5 * 4;
        fVar21 = *pfVar7;
        iVar5 = iVar5 + 1;
        pfVar7 = pfVar7 + 4;
        fVar23 = *(float *)((int)&local_1c + iVar6) * fVar21 + fVar23;
      } while (iVar5 < 3);
      *pfVar9 = fVar23;
      pfVar9 = pfVar9 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (rgdCOLLIS *)0x0);
    local_1c = CONCAT44(local_40[1],local_40[0]);
    local_14 = local_40[2];
  }
  prVar1 = this + 0xde7;
  prVar8 = this + 0xe33;
  local_10 = local_10 /
             ((local_1c._4_4_ * local_20 - local_14 * local_24) * *(float *)(prVar4 + 4) +
              (local_14 * local_28 - local_20 * (float)local_1c) * *(float *)(prVar4 + 8) +
              (local_24 * (float)local_1c - local_1c._4_4_ * local_28) * *(float *)(prVar4 + 0xc) +
             *(float *)(this + 0x157));
  *(float *)(prVar4 + 0x28) = local_10 * *(float *)(prVar4 + 4);
  *(float *)(prVar4 + 0x2c) = local_10 * *(float *)(prVar4 + 8);
  *(float *)(prVar4 + 0x30) = local_10 * *(float *)(prVar4 + 0xc);
  fVar23 = *(float *)(this + 0x157);
  *(float *)(this + 0xddb) = fVar23 * *(float *)(prVar4 + 0x28) + *(float *)(this + 0xddb);
  *(float *)(this + 0xddf) = fVar23 * *(float *)(prVar4 + 0x2c) + *(float *)(this + 0xddf);
  *(float *)(this + 0xde3) = fVar23 * *(float *)(prVar4 + 0x30) + *(float *)(this + 0xde3);
  fVar23 = *(float *)(prVar4 + 0x28);
  fVar21 = *(float *)(prVar4 + 0x30);
  fVar3 = *(float *)(prVar4 + 0x2c);
  fVar20 = *(float *)(prVar4 + 0x28);
  *(float *)prVar1 =
       (local_30 * *(float *)(prVar4 + 0x30) - local_2c * *(float *)(prVar4 + 0x2c)) +
       *(float *)prVar1;
  *(float *)(this + 0xdeb) = (local_2c * fVar23 - local_40[3] * fVar21) + *(float *)(this + 0xdeb);
  *(float *)(this + 0xdef) = (local_40[3] * fVar3 - local_30 * fVar20) + *(float *)(this + 0xdef);
  if (m3dSimdType != 0) {
    if (m3dSimdType != 1) {
      iVar11 = 3;
      iVar5 = (int)local_c - (int)prVar8;
      do {
        *(float *)prVar8 = 0.0;
        iVar6 = 0;
        prVar10 = prVar8 + iVar5;
        do {
          iVar2 = iVar6 * 4;
          fVar23 = *(float *)prVar10;
          iVar6 = iVar6 + 1;
          prVar10 = prVar10 + 0x10;
          *(float *)prVar8 = *(float *)(prVar1 + iVar2) * fVar23 + *(float *)prVar8;
        } while (iVar6 < 3);
        prVar8 = prVar8 + 4;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      return;
    }
    FastExitMediaState();
    uVar12 = (undefined4)*(undefined8 *)prVar1;
    uVar15 = CONCAT44(uVar12,uVar12);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)prVar1 >> 0x20);
    uVar18 = CONCAT44(uVar12,uVar12);
    uVar19 = CONCAT44(*(undefined4 *)(this + 0xdef),*(undefined4 *)(this + 0xdef));
    uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)local_c);
    uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_c + 0x10));
    uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_c + 0x20));
    uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(local_c + 8));
    uVar15 = PackedFloatingADD(uVar14,uVar16);
    uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_c + 0x18));
    uVar14 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_c + 0x28));
    uVar15 = PackedFloatingADD(uVar13,uVar15);
    uVar13 = PackedFloatingADD(uVar18,uVar14);
    *(undefined8 *)prVar8 = uVar15;
    uVar15 = PackedFloatingADD(uVar17,uVar13);
    *(int *)(this + 0xe3b) = (int)uVar15;
    FastExitMediaState();
    return;
  }
  if (((uint)local_c & 0xf) == 0) {
    fVar23 = *(float *)prVar1;
    fVar21 = *(float *)(this + 0xdeb);
    fVar3 = *(float *)(this + 0xdef);
    fVar20 = fVar23 * *(float *)local_c + fVar21 * *(float *)(local_c + 0x10) +
             fVar3 * *(float *)(local_c + 0x20);
    fVar22 = fVar23 * *(float *)(local_c + 4) + fVar21 * *(float *)(local_c + 0x14) +
             fVar3 * *(float *)(local_c + 0x24);
    fVar23 = fVar23 * *(float *)(local_c + 8) + fVar21 * *(float *)(local_c + 0x18) +
             fVar3 * *(float *)(local_c + 0x28);
  }
  else {
    fVar23 = *(float *)prVar1;
    fVar21 = *(float *)(this + 0xdeb);
    fVar3 = *(float *)(this + 0xdef);
    fVar20 = fVar23 * (float)*(undefined8 *)local_c +
             fVar21 * (float)*(undefined8 *)(local_c + 0x10) +
             fVar3 * (float)*(undefined8 *)(local_c + 0x20);
    fVar22 = fVar23 * (float)((ulonglong)*(undefined8 *)local_c >> 0x20) +
             fVar21 * (float)((ulonglong)*(undefined8 *)(local_c + 0x10) >> 0x20) +
             fVar3 * (float)((ulonglong)*(undefined8 *)(local_c + 0x20) >> 0x20);
    fVar23 = fVar23 * (float)*(undefined8 *)(local_c + 8) +
             fVar21 * (float)*(undefined8 *)(local_c + 0x18) +
             fVar3 * (float)*(undefined8 *)(local_c + 0x28);
  }
  *(ulonglong *)prVar8 = CONCAT44(fVar22,fVar20);
  *(float *)(this + 0xe3b) = fVar23;
  return;
}




/* from: gs:phys_rigid.cpp
   addr: 00511210 */

void __thiscall rgdRIGID::IntegrateSingleStep(rgdRIGID *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  rgdRIGID *prVar6;
  rgdRIGID *prVar7;
  m3dMATR *pmVar8;
  m3dMATR *pmVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  m3dMATR local_cc [64];
  m3dMATR local_8c [64];
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  rgdRIGID *local_8;
  
  pmVar8 = (m3dMATR *)(this + 0xd9b);
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  *(float *)(this + 0xd8f) = param_1 * *(float *)(this + 0xd2b) + *(float *)(this + 0xcdf);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  *(float *)(this + 0xd93) = param_1 * *(float *)(this + 0xd2f) + *(float *)(this + 0xce3);
  *(float *)(this + 0xd97) = param_1 * *(float *)(this + 0xd33) + *(float *)(this + 0xce7);
  local_48 = *(undefined4 *)(this + 0xd8b);
  local_34 = *(undefined4 *)(this + 0xd83);
  local_44 = -*(float *)(this + 0xd87);
  local_2c = *(undefined4 *)(this + 0xd87);
  local_3c = -*(float *)(this + 0xd8b);
  local_28 = -*(float *)(this + 0xd83);
  m3dMultiplyMatr((m3dMATR *)(this + 0xceb),(m3dMATR *)&local_4c,pmVar8);
  m3dMATR::Scale(pmVar8,param_1,param_1,param_1,2);
  m3dAddMatr((m3dMATR *)(this + 0xceb),pmVar8,pmVar8);
  fVar21 = param_1 * *(float *)(this + 0x157);
  local_8 = this + 0xde7;
  *(float *)(this + 0xddb) = fVar21 * *(float *)(this + 0xe4b) + *(float *)(this + 0xd2b);
  *(float *)(this + 0xddf) = fVar21 * *(float *)(this + 0xe4f) + *(float *)(this + 0xd2f);
  *(float *)(this + 0xde3) = fVar21 * *(float *)(this + 0xe53) + *(float *)(this + 0xd33);
  *(float *)local_8 = param_1 * *(float *)(this + 0xe57) + *(float *)(this + 0xd37);
  *(float *)(this + 0xdeb) = param_1 * *(float *)(this + 0xe5b) + *(float *)(this + 0xd3b);
  *(float *)(this + 0xdef) = param_1 * *(float *)(this + 0xe5f) + *(float *)(this + 0xd3f);
  m3dMATR::Orthonormalize(pmVar8);
  pmVar9 = local_cc;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pmVar9 = *(undefined4 *)pmVar8;
    pmVar8 = pmVar8 + 4;
    pmVar9 = pmVar9 + 4;
  }
  prVar7 = this + 0xd9b;
  pmVar8 = local_8c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pmVar8 = *(undefined4 *)prVar7;
    prVar7 = prVar7 + 4;
    pmVar8 = pmVar8 + 4;
  }
  m3dMATR::Transpose(local_cc);
  m3dMATR::Transform(local_8c,(m3dMATR *)(this + 0x15b),1);
  m3dMATR::Transform(local_8c,local_cc,1);
  prVar7 = this + 0xdf3;
  pmVar8 = local_8c;
  prVar6 = prVar7;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(float *)prVar6 = *(float *)pmVar8;
    pmVar8 = pmVar8 + 4;
    prVar6 = prVar6 + 4;
  }
  prVar6 = this + 0xe33;
  if (m3dSimdType != 0) {
    if (m3dSimdType != 1) {
      iVar5 = 3;
      iVar10 = (int)prVar7 - (int)prVar6;
      do {
        *(float *)prVar6 = 0.0;
        iVar4 = 0;
        prVar7 = prVar6 + iVar10;
        do {
          iVar1 = iVar4 * 4;
          fVar21 = *(float *)prVar7;
          iVar4 = iVar4 + 1;
          prVar7 = prVar7 + 0x10;
          *(float *)prVar6 = *(float *)(local_8 + iVar1) * fVar21 + *(float *)prVar6;
        } while (iVar4 < 3);
        prVar6 = prVar6 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return;
    }
    FastExitMediaState();
    uVar11 = (undefined4)*(undefined8 *)local_8;
    uVar14 = CONCAT44(uVar11,uVar11);
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)local_8 >> 0x20);
    uVar18 = CONCAT44(uVar11,uVar11);
    uVar15 = CONCAT44(*(float *)(local_8 + 8),*(float *)(local_8 + 8));
    uVar12 = PackedFloatingMUL(uVar14,*(undefined8 *)prVar7);
    uVar13 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xe03));
    uVar16 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0xe13));
    uVar17 = PackedFloatingMUL(uVar14,*(undefined8 *)(this + 0xdfb));
    uVar14 = PackedFloatingADD(uVar13,uVar16);
    uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xe0b));
    uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0xe1b));
    uVar14 = PackedFloatingADD(uVar12,uVar14);
    uVar12 = PackedFloatingADD(uVar18,uVar13);
    *(undefined8 *)prVar6 = uVar14;
    uVar14 = PackedFloatingADD(uVar17,uVar12);
    *(int *)(this + 0xe3b) = (int)uVar14;
    FastExitMediaState();
    return;
  }
  if (((uint)prVar7 & 0xf) == 0) {
    fVar21 = *(float *)local_8;
    fVar2 = *(float *)(local_8 + 4);
    fVar3 = *(float *)(local_8 + 8);
    fVar19 = fVar21 * *(float *)prVar7 + fVar2 * *(float *)(this + 0xe03) +
             fVar3 * *(float *)(this + 0xe13);
    fVar20 = fVar21 * *(float *)(this + 0xdf7) + fVar2 * *(float *)(this + 0xe07) +
             fVar3 * *(float *)(this + 0xe17);
    fVar21 = fVar21 * *(float *)(this + 0xdfb) + fVar2 * *(float *)(this + 0xe0b) +
             fVar3 * *(float *)(this + 0xe1b);
  }
  else {
    fVar21 = *(float *)local_8;
    fVar2 = *(float *)(local_8 + 4);
    fVar3 = *(float *)(local_8 + 8);
    fVar19 = fVar21 * (float)*(undefined8 *)prVar7 + fVar2 * (float)*(undefined8 *)(this + 0xe03) +
             fVar3 * (float)*(undefined8 *)(this + 0xe13);
    fVar20 = fVar21 * (float)((ulonglong)*(undefined8 *)prVar7 >> 0x20) +
             fVar2 * (float)((ulonglong)*(undefined8 *)(this + 0xe03) >> 0x20) +
             fVar3 * (float)((ulonglong)*(undefined8 *)(this + 0xe13) >> 0x20);
    fVar21 = fVar21 * (float)*(undefined8 *)(this + 0xdfb) +
             fVar2 * (float)*(undefined8 *)(this + 0xe0b) +
             fVar3 * (float)*(undefined8 *)(this + 0xe1b);
  }
  *(ulonglong *)prVar6 = CONCAT44(fVar20,fVar19);
  *(float *)(this + 0xe3b) = fVar21;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 00511560 */

void __thiscall rgdRIGID::CheckAtRest(rgdRIGID *this,float param_1)

{
  rgdRIGID *prVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_4;
  
  if (((byte)this[0x14f] & 2) != 0) {
    return;
  }
  if ((2 < *(int *)(this + 0x1a3)) && (*(int *)(this + 0xcdb) < 3)) {
    return;
  }
  iVar2 = 0;
  local_4 = *(float *)(this + 0xd2b) * *(float *)(this + 0xd2b) +
            *(float *)(this + 0xd2f) * *(float *)(this + 0xd2f) +
            *(float *)(this + 0xd33) * *(float *)(this + 0xd33);
  if (m3dSimdType == 0) {
    local_4 = local_4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)local_4),ZEXT416((uint)local_4));
    fVar6 = auVar7._0_4_;
    local_4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - local_4 * fVar6 * fVar6) * local_4;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)local_4;
    uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
    uVar5 = PackedFloatingMUL(uVar4,uVar4);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
    in_MM1 = PackedFloatingMUL(uVar4,uVar3);
    local_4 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_4 = SQRT(local_4);
  }
  local_4 = (float)(uint)(ABS(local_4) < ___real_3d8f5c29);
  if ((float)(int)local_4 != ___real_00000000) {
    local_4 = *(float *)(this + 0xd83) * *(float *)(this + 0xd83) +
              *(float *)(this + 0xd87) * *(float *)(this + 0xd87) +
              *(float *)(this + 0xd8b) * *(float *)(this + 0xd8b);
    if (m3dSimdType == 0) {
      local_4 = local_4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)local_4),ZEXT416((uint)local_4));
      fVar6 = auVar7._0_4_;
      local_4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_4 * fVar6 * fVar6) * local_4;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)local_4;
      uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      in_MM1 = PackedFloatingMUL(uVar4,uVar3);
      local_4 = (float)in_MM1;
      FastExitMediaState();
    }
    else {
      local_4 = SQRT(local_4);
    }
    local_4 = (float)(uint)(ABS(local_4) < ___real_3f333333);
    if (((float)(int)local_4 != ___real_00000000) && ((*(uint *)(this + 0x14f) & 2) == 0)) {
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 2;
      animINST::Validate(*(animINST **)(this + 0xbc),2);
      in_MM1 = extraout_MM1;
    }
  }
  local_4 = *(float *)(this + 0xd2b) * *(float *)(this + 0xd2b) +
            *(float *)(this + 0xd2f) * *(float *)(this + 0xd2f) +
            *(float *)(this + 0xd33) * *(float *)(this + 0xd33);
  if (m3dSimdType == 0) {
    local_4 = local_4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)local_4),ZEXT416((uint)local_4));
    fVar6 = auVar7._0_4_;
    local_4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - local_4 * fVar6 * fVar6) * local_4;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)local_4;
    uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
    uVar5 = PackedFloatingMUL(uVar4,uVar4);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
    in_MM1 = PackedFloatingMUL(uVar4,uVar3);
    local_4 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_4 = SQRT(local_4);
  }
  local_4 = (float)(uint)(ABS(local_4) < ___real_3e4ccccd);
  if ((float)(int)local_4 != ___real_00000000) {
    local_4 = *(float *)(this + 0xd83) * *(float *)(this + 0xd83) +
              *(float *)(this + 0xd87) * *(float *)(this + 0xd87) +
              *(float *)(this + 0xd8b) * *(float *)(this + 0xd8b);
    if (m3dSimdType == 0) {
      local_4 = local_4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)local_4),ZEXT416((uint)local_4));
      fVar6 = auVar7._0_4_;
      local_4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_4 * fVar6 * fVar6) * local_4;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)local_4;
      uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      uVar4 = PackedFloatingMUL(uVar4,uVar3);
      local_4 = (float)uVar4;
      FastExitMediaState();
    }
    else {
      local_4 = SQRT(local_4);
    }
    local_4 = (float)(uint)(ABS(local_4) < ___real_40000000);
    if ((float)(int)local_4 != ___real_00000000) {
      fVar6 = *(float *)(this + 0xe63);
      *(float *)(this + 0xe63) = param_1 + fVar6;
      if ((___real_3e99999a < param_1 + fVar6) && ((*(uint *)(this + 0x14f) & 2) == 0)) {
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 2;
        animINST::Validate(*(animINST **)(this + 0xbc),2);
      }
      goto LAB_005119b6;
    }
  }
  *(undefined4 *)(this + 0xe63) = 0;
LAB_005119b6:
  if (0 < *(int *)(this + 0x387)) {
    prVar1 = this + 0x3ab;
    do {
      if ((___real_3fc00000 < *(float *)prVar1) && ((*(uint *)(this + 0x14f) & 2) == 0)) {
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 2;
        animINST::Validate(*(animINST **)(this + 0xbc),2);
      }
      iVar2 = iVar2 + 1;
      prVar1 = prVar1 + 0x24;
    } while (iVar2 < *(int *)(this + 0x387));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 00511A10 */

void __thiscall rgdRIGID::CalcPointWCS(rgdRIGID *this,rgdCFG *param_1,m3dV *param_2,m3dV *param_3)

{
  rgdCFG *prVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  m3dV *pmVar5;
  m3dV *pmVar6;
  int iVar7;
  float *pfVar8;
  m3dV *pmVar9;
  float *pfVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_1c [3];
  rgdRIGID *local_10;
  rgdCFG *local_c;
  rgdCFG *local_8;
  
  pmVar5 = param_3;
  prVar1 = param_1 + 0xc;
  local_10 = this;
  local_c = prVar1;
  local_8 = prVar1;
  if (m3dSimdType == 0) {
    if (((uint)prVar1 & 0xf) == 0) {
      fVar22 = *(float *)param_2;
      fVar4 = *(float *)(param_2 + 4);
      fVar3 = *(float *)(param_2 + 8);
      fVar20 = fVar22 * *(float *)prVar1 + *(float *)(param_1 + 0x3c) +
               fVar4 * *(float *)(param_1 + 0x1c) + fVar3 * *(float *)(param_1 + 0x2c);
      fVar21 = fVar22 * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x40) +
               fVar4 * *(float *)(param_1 + 0x20) + fVar3 * *(float *)(param_1 + 0x30);
      fVar22 = fVar22 * *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x44) +
               fVar4 * *(float *)(param_1 + 0x24) + fVar3 * *(float *)(param_1 + 0x34);
    }
    else {
      fVar22 = *(float *)param_2;
      fVar4 = *(float *)(param_2 + 4);
      fVar3 = *(float *)(param_2 + 8);
      fVar20 = fVar22 * (float)*(undefined8 *)prVar1 +
               fVar4 * (float)*(undefined8 *)(param_1 + 0x1c) +
               fVar3 * (float)*(undefined8 *)(param_1 + 0x2c) +
               (float)*(undefined8 *)(param_1 + 0x3c);
      fVar21 = fVar22 * (float)((ulonglong)*(undefined8 *)prVar1 >> 0x20) +
               fVar4 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) +
               fVar3 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(param_1 + 0x3c) >> 0x20);
      fVar22 = fVar22 * (float)*(undefined8 *)(param_1 + 0x14) +
               fVar4 * (float)*(undefined8 *)(param_1 + 0x24) +
               fVar3 * (float)*(undefined8 *)(param_1 + 0x34) +
               (float)*(undefined8 *)(param_1 + 0x44);
    }
    *(ulonglong *)param_3 = CONCAT44(fVar21,fVar20);
    *(float *)(param_3 + 8) = fVar22;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar12 = (undefined4)*(undefined8 *)param_2;
    uVar13 = CONCAT44(uVar12,uVar12);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    uVar18 = CONCAT44(uVar12,uVar12);
    uVar19 = CONCAT44(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8));
    uVar15 = PackedFloatingMUL(uVar13,*(undefined8 *)prVar1);
    uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_1 + 0x1c));
    uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x2c));
    uVar15 = PackedFloatingADD(uVar15,*(undefined8 *)(param_1 + 0x3c));
    uVar17 = PackedFloatingMUL(uVar13,*(undefined8 *)(param_1 + 0x14));
    uVar13 = PackedFloatingADD(uVar14,uVar16);
    uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_1 + 0x24));
    uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x34));
    uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(param_1 + 0x44));
    uVar13 = PackedFloatingADD(uVar15,uVar13);
    uVar15 = PackedFloatingADD(uVar14,uVar19);
    *(undefined8 *)param_3 = uVar13;
    uVar13 = PackedFloatingADD(uVar18,uVar15);
    *(int *)(param_3 + 8) = (int)uVar13;
    FastExitMediaState();
  }
  else {
    iVar11 = 0;
    pmVar6 = param_3;
    do {
      iVar7 = 0;
      *(float *)pmVar6 = 0.0;
      pmVar9 = pmVar6 + ((int)prVar1 - (int)param_3);
      do {
        iVar2 = iVar7 * 4;
        fVar22 = *(float *)pmVar9;
        iVar7 = iVar7 + 1;
        pmVar9 = pmVar9 + 0x10;
        *(float *)pmVar6 = *(float *)(param_2 + iVar2) * fVar22 + *(float *)pmVar6;
      } while (iVar7 < 3);
      iVar7 = iVar11 + iVar7 * 4;
      iVar11 = iVar11 + 1;
      *(float *)pmVar6 = *(float *)(prVar1 + iVar7 * 4) + *(float *)pmVar6;
      pmVar6 = pmVar6 + 4;
    } while (iVar11 < 3);
  }
  *(float *)param_3 = *(float *)param_1 + *(float *)param_3;
  *(float *)(param_3 + 4) = *(float *)(param_1 + 4) + *(float *)(param_3 + 4);
  *(float *)(param_3 + 8) = *(float *)(param_1 + 8) + *(float *)(param_3 + 8);
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar13 = *(undefined8 *)(this + 0xe3f);
      uVar12 = (undefined4)uVar13;
      uVar15 = CONCAT44(uVar12,uVar12);
      uVar12 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar18 = CONCAT44(uVar12,uVar12);
      uVar19 = CONCAT44(*(undefined4 *)(this + 0xe47),*(undefined4 *)(this + 0xe47));
      uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)prVar1);
      uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_1 + 0x1c));
      uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x2c));
      uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 0x14));
      uVar15 = PackedFloatingADD(uVar14,uVar16);
      uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_1 + 0x24));
      uVar14 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x34));
      uVar13 = PackedFloatingADD(uVar13,uVar15);
      uVar15 = PackedFloatingADD(uVar18,uVar14);
      local_1c[1] = (float)((ulonglong)uVar13 >> 0x20);
      local_1c[0] = (float)uVar13;
      uVar13 = PackedFloatingADD(uVar17,uVar15);
      local_1c[2] = (float)uVar13;
      FastExitMediaState();
    }
    else {
      pfVar10 = local_1c;
      param_3 = (m3dV *)0x3;
      do {
        *pfVar10 = 0.0;
        iVar11 = 0;
        pfVar8 = (float *)(((int)prVar1 - (int)local_1c) + (int)pfVar10);
        fVar22 = ___real_00000000;
        do {
          iVar7 = iVar11 * 4;
          fVar4 = *pfVar8;
          iVar11 = iVar11 + 1;
          pfVar8 = pfVar8 + 4;
          fVar22 = *(float *)(this + 0xe3f + iVar7) * fVar4 + fVar22;
        } while (iVar11 < 3);
        *pfVar10 = fVar22;
        pfVar10 = pfVar10 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != (m3dV *)0x0);
    }
  }
  *(float *)pmVar5 = local_1c[0] + *(float *)pmVar5;
  *(float *)(pmVar5 + 4) = local_1c[1] + *(float *)(pmVar5 + 4);
  *(float *)(pmVar5 + 8) = local_1c[2] + *(float *)(pmVar5 + 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 00511D30 */

int __thiscall
rgdRIGID::GetClosestPoint
          (rgdRIGID *this,m3dV *param_1,float param_2,m3dV *param_3,m3dV *param_4,float *param_5)

{
  int iVar1;
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
  float local_4;
  
  local_10 = _m3dVZero;
  local_8 = DAT_00963744;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = DAT_00963740;
  local_4 = 0.0;
  local_24 = 0;
  local_2c = &cdtREFINE::_vftable_;
  local_28 = 2;
  if (((byte)this[0x14f] & 1) == 0) {
    iVar1 = scnSCENE::GetClosestPoint
                      (gsScenePtr,param_1,param_2,0,(cdtREFINE *)&local_2c,(cdtINFO *)&local_20);
    if (iVar1 == 0) {
      return 0;
    }
    if (param_3 != (m3dV *)0x0) {
      *(undefined4 *)param_3 = local_10;
      *(undefined4 *)(param_3 + 4) = local_c;
      *(undefined4 *)(param_3 + 8) = local_8;
    }
    if (param_5 != (float *)0x0) {
      *param_5 = local_4;
    }
    scnSCENE::GetCDTFace(gsScenePtr,(cdtINFO *)&local_20,(m3dPOLY *)0x0,param_4);
  }
  else {
    iVar1 = rgdPLANE_SET::GetClosestPoint
                      ((rgdPLANE_SET *)(this + 0xe87),param_1,param_2,param_3,param_4,param_5);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid.cpp
   addr: 00511E30 */

void __thiscall rgdRIGID::SetupDynPlaneSet(rgdRIGID *this)

{
  rgdRIGID *prVar1;
  rgdRIGID *prVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined **local_40;
  undefined4 local_3c;
  float local_38 [4];
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c [3];
  float *local_10;
  rgdRIGID *local_c;
  rgdRIGID *local_8;
  
  local_68 = _m3dVZero;
  local_60 = DAT_00963744;
  local_8 = this + 0xd9b;
  local_64 = DAT_00963740;
  local_3c = 3;
  local_40 = &m3dSPHERE::_vftable_;
  local_20 = 0;
  local_28 = &cdtREFINE::_vftable_;
  local_24 = 10;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_5c = 0;
  local_c = (rgdRIGID *)local_38;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar13 = *(undefined8 *)(this + 0x667);
      uVar10 = (undefined4)uVar13;
      uVar11 = CONCAT44(uVar10,uVar10);
      uVar10 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar16 = CONCAT44(uVar10,uVar10);
      uVar17 = CONCAT44(*(undefined4 *)(this + 0x66f),*(undefined4 *)(this + 0x66f));
      uVar13 = PackedFloatingMUL(uVar11,*(undefined8 *)local_8);
      uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0xdab));
      uVar14 = PackedFloatingMUL(uVar17,*(undefined8 *)(this + 0xdbb));
      uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(this + 0xdcb));
      uVar15 = PackedFloatingMUL(uVar11,*(undefined8 *)(this + 0xda3));
      uVar11 = PackedFloatingADD(uVar12,uVar14);
      uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0xdb3));
      uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(this + 0xdc3));
      uVar16 = PackedFloatingADD(uVar15,*(undefined8 *)(this + 0xdd3));
      uVar13 = PackedFloatingADD(uVar13,uVar11);
      uVar11 = PackedFloatingADD(uVar12,uVar17);
      local_38[1] = (float)((ulonglong)uVar13 >> 0x20);
      local_38[0] = (float)uVar13;
      uVar13 = PackedFloatingADD(uVar16,uVar11);
      local_38[2] = (float)uVar13;
      FastExitMediaState();
    }
    else {
      iVar9 = 0;
      local_10 = (float *)((int)local_8 - (int)local_38);
      pfVar7 = local_38;
      do {
        pfVar8 = local_10;
        iVar6 = 0;
        *pfVar7 = 0.0;
        pfVar8 = (float *)((int)pfVar8 + (int)pfVar7);
        fVar5 = ___real_00000000;
        do {
          iVar3 = iVar6 * 4;
          fVar4 = *pfVar8;
          iVar6 = iVar6 + 1;
          pfVar8 = pfVar8 + 4;
          fVar5 = *(float *)(this + 0x667 + iVar3) * fVar4 + fVar5;
        } while (iVar6 < 3);
        *pfVar7 = fVar5;
        iVar6 = iVar9 + iVar6 * 4;
        iVar9 = iVar9 + 1;
        *pfVar7 = fVar5 + *(float *)(local_8 + iVar6 * 4);
        pfVar7 = pfVar7 + 1;
      } while (iVar9 < 3);
    }
  }
  local_38[0] = local_38[0] + *(float *)(this + 0xd8f);
  local_10 = local_1c;
  prVar1 = this + 0xd9b;
  prVar2 = this + 0xe3f;
  local_38[1] = local_38[1] + *(float *)(this + 0xd93);
  local_c = prVar2;
  local_8 = prVar1;
  local_38[2] = local_38[2] + *(float *)(this + 0xd97);
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar10 = (undefined4)*(undefined8 *)prVar2;
      uVar13 = CONCAT44(uVar10,uVar10);
      uVar10 = (undefined4)((ulonglong)*(undefined8 *)prVar2 >> 0x20);
      uVar16 = CONCAT44(uVar10,uVar10);
      uVar17 = CONCAT44(*(undefined4 *)(this + 0xe47),*(undefined4 *)(this + 0xe47));
      uVar11 = PackedFloatingMUL(uVar13,*(undefined8 *)prVar1);
      uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0xdab));
      uVar14 = PackedFloatingMUL(uVar17,*(undefined8 *)(this + 0xdbb));
      uVar15 = PackedFloatingMUL(uVar13,*(undefined8 *)(this + 0xda3));
      uVar13 = PackedFloatingADD(uVar12,uVar14);
      uVar16 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0xdb3));
      uVar12 = PackedFloatingMUL(uVar17,*(undefined8 *)(this + 0xdc3));
      uVar13 = PackedFloatingADD(uVar11,uVar13);
      uVar11 = PackedFloatingADD(uVar16,uVar12);
      local_1c[1] = (float)((ulonglong)uVar13 >> 0x20);
      local_1c[0] = (float)uVar13;
      uVar13 = PackedFloatingADD(uVar15,uVar11);
      local_1c[2] = (float)uVar13;
      FastExitMediaState();
    }
    else {
      pfVar7 = local_1c;
      local_10 = (float *)0x3;
      do {
        *pfVar7 = 0.0;
        iVar9 = 0;
        pfVar8 = (float *)(((int)prVar1 - (int)local_1c) + (int)pfVar7);
        fVar5 = ___real_00000000;
        do {
          iVar6 = iVar9 * 4;
          fVar4 = *pfVar8;
          iVar9 = iVar9 + 1;
          pfVar8 = pfVar8 + 4;
          fVar5 = *(float *)(prVar2 + iVar6) * fVar4 + fVar5;
        } while (iVar9 < 3);
        *pfVar7 = fVar5;
        pfVar7 = pfVar7 + 1;
        local_10 = (float *)((int)local_10 + -1);
      } while (local_10 != (float *)0x0);
    }
  }
  local_38[0] = local_1c[0] + local_38[0];
  local_38[1] = local_1c[1] + local_38[1];
  *(undefined4 *)(this + 0xeff) = 0;
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
  local_38[2] = local_1c[2] + local_38[2];
  local_38[3] = *(float *)(this + 0x673) * ___real_40200000;
  iVar9 = scnSCENE::GetClosestPoint
                    (gsScenePtr,(m3dV *)local_38,local_38[3],0,(cdtREFINE *)&local_28,
                     (cdtINFO *)&local_78);
  if (iVar9 != 0) {
    local_4c = local_38[0] - local_68;
    local_58 = local_68;
    local_54 = local_64;
    local_48 = local_38[1] - local_64;
    local_50 = local_60;
    local_44 = local_38[2] - local_60;
    m3dNormalize((m3dV *)&local_4c);
    rgdPLANE_SET::AddPlane((rgdPLANE_SET *)(this + 0xe87),(m3dPLANE *)&local_58);
  }
  return;
}




/* from: gs:phys_rigid.cpp
   addr: 00512240 */

int __thiscall
rgdRIGID_EXPLOS::ProcessMsg
          (rgdRIGID_EXPLOS *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  objOBJ *poVar1;
  
  if (param_1 < 3) {
    if (param_1 != 2) {
      if (param_1 == -0x2785) {
        if (DAT_005f7854 != 0) {
          poVar1 = objFind(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),objIsNFace,(void *)0x0);
          shtShatter(poVar1,10);
          msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
          return 0;
        }
      }
      else if (param_1 == 1) {
        DAT_005f7854 = param_1;
        return param_1;
      }
    }
  }
  else if (param_1 == 1000) {
    msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,-0x2785,(msgADDR *)0x0,1.0);
  }
  return 0;
}




/* from: gs:phys_rigid.cpp
   addr: 005122D0 */

entENTITY * __fastcall rgdRIGID_EXPLOS::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x14f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}

