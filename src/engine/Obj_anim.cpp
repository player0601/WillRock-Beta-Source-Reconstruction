
/* from: engine:Obj_anim.cpp
   addr: 004D1170 */

objOBJ * __fastcall objGetTplObj(objOBJ *param_1)

{
  int iVar1;
  objOBJ *poVar2;
  
  if ((*(int *)(param_1 + 0xbc) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xbc) + 0x138), iVar1 != 0)) {
    poVar2 = objFindID(*(objOBJ **)(iVar1 + 0x88),(int)*(short *)(param_1 + 0x1c));
    return poVar2;
  }
  return (objOBJ *)0x0;
}




/* from: engine:Obj_anim.cpp
   addr: 004D11A0 */

void __thiscall objOBJ::FreezeLTM(objOBJ *this)

{
  int iVar1;
  float fVar2;
  int iVar3;
  objOBJ *poVar4;
  float *pfVar5;
  objOBJ *poVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  objOBJ *local_30;
  objOBJ *local_2c;
  int local_28;
  float local_24 [3];
  int local_18;
  int local_14;
  objOBJ *local_10;
  float *local_c;
  objOBJ *local_8;
  
  local_30 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_30 = *(objOBJ **)(this + 0x38);
    local_28 = 0;
    local_2c = local_30;
  }
  local_14 = 0;
  if (0 < *(int *)(this + 0x14)) {
    local_18 = 0;
    do {
      if (((byte)*this & 1) == 0) {
        local_c = local_24;
        local_8 = this + 0x3c;
        poVar6 = (objOBJ *)(*(int *)(*(int *)(this + 0x28) + 0x40) + local_18);
        local_10 = poVar6;
        if (m3dSimdType != 0) {
          if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar8 = (undefined4)*(undefined8 *)poVar6;
            uVar11 = CONCAT44(uVar8,uVar8);
            uVar8 = (undefined4)((ulonglong)*(undefined8 *)poVar6 >> 0x20);
            uVar14 = CONCAT44(uVar8,uVar8);
            uVar15 = CONCAT44(*(undefined4 *)(poVar6 + 8),*(undefined4 *)(poVar6 + 8));
            uVar9 = PackedFloatingMUL(uVar11,*(undefined8 *)local_8);
            uVar10 = PackedFloatingMUL(uVar14,*(undefined8 *)(this + 0x4c));
            uVar12 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0x5c));
            uVar9 = PackedFloatingADD(uVar9,*(undefined8 *)(this + 0x6c));
            uVar13 = PackedFloatingMUL(uVar11,*(undefined8 *)(this + 0x44));
            uVar11 = PackedFloatingADD(uVar10,uVar12);
            uVar10 = PackedFloatingMUL(uVar14,*(undefined8 *)(this + 0x54));
            uVar15 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 100));
            uVar14 = PackedFloatingADD(uVar13,*(undefined8 *)(this + 0x74));
            uVar11 = PackedFloatingADD(uVar9,uVar11);
            uVar9 = PackedFloatingADD(uVar10,uVar15);
            local_24[1] = (float)((ulonglong)uVar11 >> 0x20);
            local_24[0] = (float)uVar11;
            uVar11 = PackedFloatingADD(uVar14,uVar9);
            local_24[2] = (float)uVar11;
            FastExitMediaState();
          }
          else {
            iVar7 = 0;
            local_10 = local_8 + -(int)local_24;
            pfVar5 = local_24;
            do {
              poVar4 = local_10;
              iVar3 = 0;
              *pfVar5 = 0.0;
              poVar4 = poVar4 + (int)pfVar5;
              do {
                iVar1 = iVar3 * 4;
                fVar2 = *(float *)poVar4;
                iVar3 = iVar3 + 1;
                poVar4 = poVar4 + 0x10;
                *pfVar5 = *(float *)(poVar6 + iVar1) * fVar2 + *pfVar5;
              } while (iVar3 < 3);
              iVar3 = iVar7 + iVar3 * 4;
              iVar7 = iVar7 + 1;
              *pfVar5 = *(float *)(local_8 + iVar3 * 4) + *pfVar5;
              pfVar5 = pfVar5 + 1;
            } while (iVar7 < 3);
          }
        }
      }
      else {
        pfVar5 = (float *)(*(int *)(*(int *)(this + 0x28) + 0x40) + local_18);
        local_24[0] = *pfVar5;
        local_24[1] = pfVar5[1];
        local_24[2] = pfVar5[2];
      }
      pfVar5 = (float *)(*(int *)(*(int *)(this + 0x28) + 0x40) + local_18);
      local_18 = local_18 + 0xc;
      *pfVar5 = local_24[0];
      pfVar5[1] = local_24[1];
      pfVar5[2] = local_24[2];
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(this + 0x14));
  }
  m3dMATR::Identity((m3dMATR *)(this + 0x3c));
  m3dMATR::Identity((m3dMATR *)(this + 0x7c));
  *(uint *)this = *(uint *)this | 1;
  while ((local_30 != (objOBJ *)0x0 && ((local_28 == 0 || (local_2c != local_30))))) {
    FreezeLTM(local_2c);
    local_2c = *(objOBJ **)(local_2c + 0x30);
    local_28 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Obj_anim.cpp
   addr: 004D13F0 */

void __thiscall objOBJ::UnfreezeLTM(objOBJ *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_5c [4];
  float local_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float local_2c [3];
  float afStack_20 [4];
  int local_10;
  float *local_c;
  float *local_8;
  
  iVar7 = 0;
  if ((*(animINST **)(this + 0xbc) != (animINST *)0x0) && (((byte)*this & 1) != 0)) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    m3dMATR::Invert((m3dMATR *)(this + 0x3c),(m3dMATR *)local_5c);
    local_10 = 0;
    if (0 < *(int *)(this + 0x14)) {
      local_c = local_5c;
      do {
        local_8 = (float *)(*(int *)(*(int *)(this + 0x28) + 0x40) + iVar7);
        if (m3dSimdType == 0) {
          if (((uint)local_5c & 0xf) == 0) {
            fVar18 = *local_8;
            fVar3 = local_8[1];
            fVar2 = local_8[2];
            fVar16 = fVar18 * local_5c[0] + local_2c[0] + fVar3 * local_4c + fVar2 * local_3c;
            fVar17 = fVar18 * local_5c[1] + local_2c[1] + fVar3 * fStack_48 + fVar2 * fStack_38;
            fVar18 = fVar18 * local_5c[2] + local_2c[2] + fVar3 * fStack_44 + fVar2 * fStack_34;
          }
          else {
            fVar18 = *local_8;
            fVar3 = local_8[1];
            fVar2 = local_8[2];
            fVar16 = fVar18 * local_5c[0] + fVar3 * local_4c + fVar2 * local_3c + local_2c[0];
            fVar17 = fVar18 * local_5c[1] + fVar3 * fStack_48 + fVar2 * fStack_38 + local_2c[1];
            fVar18 = fVar18 * local_5c[2] + fVar3 * fStack_44 + fVar2 * fStack_34 + local_2c[2];
          }
          *(ulonglong *)local_8 = CONCAT44(fVar17,fVar16);
          local_8[2] = fVar18;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar8 = (undefined4)*(undefined8 *)local_8;
          uVar11 = CONCAT44(uVar8,uVar8);
          uVar8 = (undefined4)((ulonglong)*(undefined8 *)local_8 >> 0x20);
          uVar14 = CONCAT44(uVar8,uVar8);
          uVar15 = CONCAT44(local_8[2],local_8[2]);
          uVar9 = PackedFloatingMUL(uVar11,CONCAT44(local_5c[1],local_5c[0]));
          uVar10 = PackedFloatingMUL(uVar14,CONCAT44(fStack_48,local_4c));
          uVar12 = PackedFloatingMUL(uVar15,CONCAT44(fStack_38,local_3c));
          uVar9 = PackedFloatingADD(uVar9,CONCAT44(local_2c[1],local_2c[0]));
          uVar13 = PackedFloatingMUL(uVar11,CONCAT44(local_5c[3],local_5c[2]));
          uVar11 = PackedFloatingADD(uVar10,uVar12);
          uVar10 = PackedFloatingMUL(uVar14,CONCAT44(uStack_40,fStack_44));
          uVar15 = PackedFloatingMUL(uVar15,CONCAT44(uStack_30,fStack_34));
          uVar14 = PackedFloatingADD(uVar13,CONCAT44(afStack_20[0],local_2c[2]));
          uVar11 = PackedFloatingADD(uVar9,uVar11);
          uVar9 = PackedFloatingADD(uVar10,uVar15);
          *(undefined8 *)local_8 = uVar11;
          uVar11 = PackedFloatingADD(uVar14,uVar9);
          local_8[2] = (float)uVar11;
          FastExitMediaState();
        }
        else {
          iVar6 = 0;
          do {
            iVar4 = 0;
            pfVar5 = local_5c + iVar6;
            afStack_20[iVar6 + 1] = 0.0;
            fVar18 = ___real_00000000;
            do {
              pfVar1 = local_8 + iVar4;
              fVar3 = *pfVar5;
              iVar4 = iVar4 + 1;
              pfVar5 = pfVar5 + 4;
              fVar18 = *pfVar1 * fVar3 + fVar18;
            } while (iVar4 < 3);
            iVar4 = iVar6 + iVar4 * 4;
            iVar6 = iVar6 + 1;
            afStack_20[iVar6] = fVar18 + local_5c[iVar4];
          } while (iVar6 < 3);
          *local_8 = afStack_20[1];
          local_8[1] = afStack_20[2];
          local_8[2] = afStack_20[3];
        }
        local_10 = local_10 + 1;
        iVar7 = iVar7 + 0xc;
      } while (local_10 < *(int *)(this + 0x14));
    }
    *(uint *)this = *(uint *)this & 0xfffffffe;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Obj_anim.cpp
   addr: 004D15D0 */

void __thiscall objOBJ::FreezeModelMatr(objOBJ *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  objOBJ *poVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  m3dMATR *pmVar10;
  float *pfVar11;
  m3dMATR *pmVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  m3dMATR local_74 [68];
  int local_30;
  int local_2c;
  int local_28;
  float local_24 [3];
  objOBJ *local_18;
  int local_14;
  float *local_10;
  int local_c;
  objOBJ *local_8;
  
  local_18 = this;
  local_30 = 0;
  if (this != (objOBJ *)0x0) {
    local_28 = 0;
    local_30 = *(int *)(this + 0x38);
    local_2c = *(int *)(this + 0x38);
  }
  local_14 = 0;
  if (0 < *(int *)(this + 0x14)) {
    local_c = 0;
    local_8 = this + 0x7c;
    do {
      iVar9 = 0;
      pfVar11 = (float *)(*(int *)(*(int *)(this + 0x28) + 0x40) + local_c);
      local_10 = pfVar11;
      if (m3dSimdType == 0) {
        if (((uint)local_8 & 0xf) == 0) {
          fVar23 = *pfVar11;
          fVar3 = pfVar11[1];
          fVar2 = pfVar11[2];
          fVar21 = fVar23 * *(float *)local_8 + *(float *)(local_8 + 0x30) +
                   fVar3 * *(float *)(local_8 + 0x10) + fVar2 * *(float *)(local_8 + 0x20);
          fVar22 = fVar23 * *(float *)(local_8 + 4) + *(float *)(local_8 + 0x34) +
                   fVar3 * *(float *)(local_8 + 0x14) + fVar2 * *(float *)(local_8 + 0x24);
          fVar23 = fVar23 * *(float *)(local_8 + 8) + *(float *)(local_8 + 0x38) +
                   fVar3 * *(float *)(local_8 + 0x18) + fVar2 * *(float *)(local_8 + 0x28);
        }
        else {
          fVar23 = *pfVar11;
          fVar3 = pfVar11[1];
          fVar2 = pfVar11[2];
          fVar21 = fVar23 * (float)*(undefined8 *)local_8 +
                   fVar3 * (float)*(undefined8 *)(local_8 + 0x10) +
                   fVar2 * (float)*(undefined8 *)(local_8 + 0x20) +
                   (float)*(undefined8 *)(local_8 + 0x30);
          fVar22 = fVar23 * (float)((ulonglong)*(undefined8 *)local_8 >> 0x20) +
                   fVar3 * (float)((ulonglong)*(undefined8 *)(local_8 + 0x10) >> 0x20) +
                   fVar2 * (float)((ulonglong)*(undefined8 *)(local_8 + 0x20) >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)(local_8 + 0x30) >> 0x20);
          fVar23 = fVar23 * (float)*(undefined8 *)(local_8 + 8) +
                   fVar3 * (float)*(undefined8 *)(local_8 + 0x18) +
                   fVar2 * (float)*(undefined8 *)(local_8 + 0x28) +
                   (float)*(undefined8 *)(local_8 + 0x38);
        }
        *(ulonglong *)pfVar11 = CONCAT44(fVar22,fVar21);
        pfVar11[2] = fVar23;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar13 = (undefined4)*(undefined8 *)pfVar11;
        uVar16 = CONCAT44(uVar13,uVar13);
        uVar13 = (undefined4)((ulonglong)*(undefined8 *)pfVar11 >> 0x20);
        uVar19 = CONCAT44(uVar13,uVar13);
        uVar20 = CONCAT44(pfVar11[2],pfVar11[2]);
        uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)local_8);
        uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_8 + 0x10));
        uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_8 + 0x20));
        uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(local_8 + 0x30));
        uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(local_8 + 8));
        uVar16 = PackedFloatingADD(uVar15,uVar17);
        uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_8 + 0x18));
        uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_8 + 0x28));
        uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(local_8 + 0x38));
        uVar16 = PackedFloatingADD(uVar14,uVar16);
        uVar14 = PackedFloatingADD(uVar15,uVar20);
        *(undefined8 *)pfVar11 = uVar16;
        uVar16 = PackedFloatingADD(uVar19,uVar14);
        pfVar11[2] = (float)uVar16;
        FastExitMediaState();
      }
      else {
        iVar8 = (int)local_8 - (int)local_24;
        pfVar6 = local_24;
        do {
          *pfVar6 = 0.0;
          poVar4 = local_8;
          iVar5 = 0;
          pfVar7 = (float *)(iVar8 + (int)pfVar6);
          fVar23 = ___real_00000000;
          do {
            pfVar1 = pfVar11 + iVar5;
            fVar3 = *pfVar7;
            iVar5 = iVar5 + 1;
            pfVar7 = pfVar7 + 4;
            fVar23 = *pfVar1 * fVar3 + fVar23;
          } while (iVar5 < 3);
          iVar5 = iVar9 + iVar5 * 4;
          *pfVar6 = fVar23;
          iVar9 = iVar9 + 1;
          *pfVar6 = fVar23 + *(float *)(poVar4 + iVar5 * 4);
          pfVar6 = pfVar6 + 1;
        } while (iVar9 < 3);
        *pfVar11 = local_24[0];
        pfVar11[1] = local_24[1];
        pfVar11[2] = local_24[2];
        this = local_18;
      }
      local_14 = local_14 + 1;
      local_c = local_c + 0xc;
    } while (local_14 < *(int *)(this + 0x14));
  }
  while ((local_30 != 0 && ((local_28 == 0 || (local_2c != local_30))))) {
    pmVar12 = (m3dMATR *)(local_2c + 0x7c);
    m3dMultiplyMatr(pmVar12,(m3dMATR *)(this + 0x7c),local_74);
    pmVar10 = local_74;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined4 *)pmVar12 = *(undefined4 *)pmVar10;
      pmVar10 = pmVar10 + 4;
      pmVar12 = pmVar12 + 4;
    }
    local_2c = *(int *)(local_2c + 0x30);
    local_28 = 1;
  }
  m3dMATR::Identity((m3dMATR *)(this + 0x7c));
  return;
}




/* from: engine:Obj_anim.cpp
   addr: 004D1800 */

void __thiscall objOBJ::GetCenter(objOBJ *this,m3dV *param_1)

{
  animINST *this_00;
  
  this_00 = *(animINST **)(this + 0xbc);
  if (this_00 == (animINST *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004d1828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(this + 0xc0) + 0x24))();
    return;
  }
  if (((byte)this_00[0xc] & 8) == 0) {
    GetOrigin(this,param_1);
    return;
  }
  animINST::GetCenter(this_00,param_1);
  return;
}




/* from: engine:Obj_anim.cpp
   addr: 004D1830 */

void __thiscall objOBJ::RotateGlbAxis(objOBJ *this,float param_1,m3dV *param_2)

{
  m3dMATR *this_00;
  m3dMATR *this_01;
  m3dV local_8c [12];
  m3dMATR local_80 [64];
  m3dMATR local_40 [64];
  
  this_00 = (m3dMATR *)(this + 0x3c);
  m3dMATR::GetOrigin(this_00,local_8c);
  m3dMATR::Invert(this_00,local_80);
  m3dMATR::MakeRotRay(local_40,local_8c,param_2,param_1);
  this_01 = (m3dMATR *)(this + 0x7c);
  m3dMATR::Transform(this_01,local_80,1);
  m3dMATR::Transform(this_01,local_40,1);
  m3dMATR::Transform(this_01,this_00,1);
  DeclareProcAnim(this);
  return;
}




/* from: engine:Obj_anim.cpp
   addr: 004D18B0 */

void __thiscall
objOBJ::SetMatrLT(objOBJ *this,m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,int param_5)

{
  int iVar1;
  objOBJ *poVar2;
  m3dMATR *pmVar3;
  m3dMATR local_100 [64];
  m3dMATR local_c0 [64];
  m3dMATR local_80 [64];
  m3dMATR local_40 [64];
  
  if (param_2 == (m3dV *)0x0) {
    if (param_3 == (m3dV *)0x0) {
      if (param_4 == (m3dV *)0x0) {
        poVar2 = this + 0x3c;
        pmVar3 = local_100;
        for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined4 *)pmVar3 = *(undefined4 *)poVar2;
          poVar2 = poVar2 + 4;
          pmVar3 = pmVar3 + 4;
        }
        m3dMATR::Translate(local_100,param_1,0);
      }
      else {
        m3dMATR::MakeLCS2WCS_VZ(local_100,param_1,param_4);
      }
      goto LAB_004d195e;
    }
    if (param_4 == (m3dV *)0x0) {
      m3dMATR::MakeLCS2WCS_VY(local_100,param_1,param_3);
      goto LAB_004d195e;
    }
  }
  if ((param_3 == (m3dV *)0x0) && (param_4 == (m3dV *)0x0)) {
    m3dMATR::MakeLCS2WCS_VX(local_100,param_1,param_2);
  }
  else {
    m3dMATR::MakeLCS2WCS(local_100,param_1,param_2,param_3,param_4);
  }
LAB_004d195e:
  m3dMATR::Invert((m3dMATR *)(this + 0x3c),local_80);
  m3dMultiplyMatr(local_100,local_80,local_c0);
  m3dMATR::Transform((m3dMATR *)(this + 0x7c),local_c0,1);
  if ((param_5 != 0) && (*(int *)(this + 0x38) != 0)) {
    m3dMATR::Invert(local_c0,local_40);
    m3dMATR::Transform((m3dMATR *)(*(int *)(this + 0x38) + 0x7c),local_40,2);
  }
  animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  DeclareProcAnim(this);
  return;
}




/* from: engine:Obj_anim.cpp
   addr: 004D19F0 */

void __fastcall objValidateLTM(objOBJ *param_1)

{
  animINST *this;
  int iVar1;
  undefined4 *puVar2;
  objOBJ *poVar3;
  objOBJ *poVar4;
  
  if (((param_1 != (objOBJ *)0x0) &&
      (this = *(animINST **)(param_1 + 0xbc), this != (animINST *)0x0)) &&
     ((*(uint *)(this + 0xc) & 4) != 0)) {
    if ((*(uint *)(this + 0xc) & 0x18) != 0) {
      if (*(objOBJ **)(param_1 + 0x2c) == (objOBJ *)0x0) {
        animINST::Validate(this,0);
        animINST::StartApplyAnim(*(animINST **)(param_1 + 0xbc));
      }
      else {
        _objValidateAnim(*(objOBJ **)(param_1 + 0x2c));
      }
      animINST::CalcObjModelMatrix(*(animINST **)(param_1 + 0xbc),param_1);
    }
    if (*(objOBJ **)(param_1 + 0x2c) != (objOBJ *)0x0) {
      _objValidateLTM(*(objOBJ **)(param_1 + 0x2c));
      if ((*(uint *)param_1 & 0x1000) != 0) {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0x2c) + 0x3c);
        poVar3 = param_1 + 0x3c;
        for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined4 *)poVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          poVar3 = poVar3 + 4;
        }
        return;
      }
      m3dMultiplyMatr((m3dMATR *)(param_1 + 0x7c),(m3dMATR *)(*(int *)(param_1 + 0x2c) + 0x3c),
                      (m3dMATR *)(param_1 + 0x3c));
      return;
    }
    poVar3 = (objOBJ *)(*(int *)(param_1 + 0xbc) + 0x60);
    if (*(int *)(param_1 + 0xbc) == 0) {
      poVar3 = param_1 + 0x7c;
    }
    poVar4 = param_1 + 0x3c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)poVar4 = *(undefined4 *)poVar3;
      poVar3 = poVar3 + 4;
      poVar4 = poVar4 + 4;
    }
  }
  return;
}




/* from: engine:Obj_anim.cpp
   addr: 004D1AB0 */

void __fastcall _objValidateLTM(objOBJ *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  objOBJ *poVar3;
  objOBJ *poVar4;
  
  if (*(objOBJ **)(param_1 + 0x2c) == (objOBJ *)0x0) {
    poVar3 = (objOBJ *)(*(int *)(param_1 + 0xbc) + 0x60);
    if (*(int *)(param_1 + 0xbc) == 0) {
      poVar3 = param_1 + 0x7c;
    }
    poVar4 = param_1 + 0x3c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)poVar4 = *(undefined4 *)poVar3;
      poVar3 = poVar3 + 4;
      poVar4 = poVar4 + 4;
    }
    return;
  }
  _objValidateLTM(*(objOBJ **)(param_1 + 0x2c));
  if ((*(uint *)param_1 & 0x1000) != 0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x2c) + 0x3c);
    poVar3 = param_1 + 0x3c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)poVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      poVar3 = poVar3 + 4;
    }
    return;
  }
  m3dMultiplyMatr((m3dMATR *)(param_1 + 0x7c),(m3dMATR *)(*(int *)(param_1 + 0x2c) + 0x3c),
                  (m3dMATR *)(param_1 + 0x3c));
  return;
}




/* from: engine:Obj_anim.cpp
   addr: 004D1B20 */

void __fastcall _objValidateAnim(objOBJ *param_1)

{
  if (*(objOBJ **)(param_1 + 0x2c) != (objOBJ *)0x0) {
    _objValidateAnim(*(objOBJ **)(param_1 + 0x2c));
    animINST::CalcObjModelMatrix(*(animINST **)(param_1 + 0xbc),param_1);
    return;
  }
  animINST::Validate(*(animINST **)(param_1 + 0xbc),0);
  animINST::StartApplyAnim(*(animINST **)(param_1 + 0xbc));
  animINST::CalcObjModelMatrix(*(animINST **)(param_1 + 0xbc),param_1);
  return;
}

