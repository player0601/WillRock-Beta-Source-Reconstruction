
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:animkinem.cpp
   addr: 004EF050 */

void __thiscall
animOBJ_ANIM::GetVisibility(animOBJ_ANIM *this,float param_1,int param_2,float *param_3)

{
  int iVar1;
  float unaff_ESI;
  float *unaff_retaddr;
  float fStack_1c;
  undefined1 *puStack_18;
  float fStack_14;
  undefined1 local_c [4];
  float fStack_8;
  
  puStack_18 = local_c;
  if (*(int **)(this + 0x3c) == (int *)0x0) {
    return;
  }
  fStack_14 = 0.0;
  fStack_1c = param_1;
  (**(code **)(**(int **)(this + 0x3c) + 0x10))();
  if ((___real_3ba3d70a < (float)puStack_18) && ((float)puStack_18 < ___real_3f7eb852)) {
    iVar1 = ftol();
    fStack_8 = (float)iVar1;
    (**(code **)(**(int **)(this + 0x3c) + 0x10))(fStack_8,&fStack_14,0);
    (**(code **)(**(int **)(this + 0x3c) + 0x10))(fStack_14 + ___real_3f800000,&fStack_1c,0);
    if ((fStack_14 < ___real_3ba3d70a) && (___real_3f7eb852 < unaff_ESI)) {
      puStack_18 = (undefined1 *)0x3f800000;
      goto LAB_004ef110;
    }
    if ((___real_3f7eb852 < fStack_14) && (unaff_ESI < ___real_3ba3d70a)) {
      *unaff_retaddr = 0.0;
      return;
    }
  }
  if ((float)puStack_18 < ___real_00000000) {
    *unaff_retaddr = ___real_00000000;
    return;
  }
  if (___real_3f800000 < (float)puStack_18) {
    *unaff_retaddr = ___real_3f800000;
    return;
  }
LAB_004ef110:
  *unaff_retaddr = (float)puStack_18;
  return;
}




/* from: engine:animkinem.cpp
   addr: 004EF1B0 */

void __thiscall animINST::ApplyAnim(animINST *this)

{
  if (*(int *)(this + 0x10) != 0) {
    StartApplyAnim(this);
    CalcObjModelMatrix(this,*(objOBJ **)(this + 0x10));
    objOBJ::PropagateStateProc(*(objOBJ **)(this + 0x10),4,0);
  }
  return;
}




/* from: engine:animkinem.cpp
   addr: 004EF1E0 */

void __thiscall animINST::StartApplyAnim(animINST *this)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(*(int *)(this + 0x138) + 0x90);
  if ((*(uint *)(this + 4) & 0x200) != 0) {
    if (*(int *)(this + 0x30) < 0) {
      *(undefined4 *)(this + 0x40) = 0xc0000000;
    }
    else {
      fVar2 = animSEQ::TimeToFrame
                        ((animSEQ *)(iVar1 + *(int *)(this + 0x30) * 0x88),*(float *)(this + 0x38));
      *(float *)(this + 0x40) = fVar2;
    }
    fVar2 = animSEQ::TimeToFrame
                      ((animSEQ *)(iVar1 + *(int *)(this + 0x34) * 0x88),*(float *)(this + 0x3c));
    *(float *)(this + 0x44) = fVar2;
    return;
  }
  fVar2 = animSEQ::TimeToFrame
                    ((animSEQ *)(iVar1 + *(int *)(this + 0xe0) * 0x88),*(float *)(this + 0x24));
  *(float *)(this + 0xe4) = fVar2;
  return;
}




/* from: engine:animkinem.cpp
   addr: 004EF260 */

void __thiscall animINST::CalcObjModelMatrix(animINST *this,objOBJ *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  iVar4 = 0;
  local_c = (objOBJ *)0x0;
  if (param_1 != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(param_1 + 0x38);
    local_4 = 0;
    local_c = local_8;
  }
  iVar3 = 0;
  while( true ) {
    piVar1 = *(int **)(this + 0xe8);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*piVar1 + 0xc);
    }
    if (iVar2 <= iVar3) break;
    animCHN::BegObjHier((animCHN *)(piVar1[1] + iVar4),param_1);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x18;
  }
  if (((*(uint *)(this + 4) & 0x400000) == 0) || ((*(uint *)param_1 & 0x800) == 0)) {
    CalcObjModelMatrix(this,param_1);
    while ((local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))))) {
      CalcObjModelMatrix(this,local_8);
      local_8 = *(objOBJ **)(local_8 + 0x30);
      local_4 = 1;
    }
  }
  iVar3 = 0;
  iVar4 = 0;
  while( true ) {
    piVar1 = *(int **)(this + 0xe8);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*piVar1 + 0xc);
    }
    if (iVar2 <= iVar3) break;
    animCHN::EndObjHier((animCHN *)(piVar1[1] + iVar4),param_1);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x18;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:animkinem.cpp
   addr: 004EF340 */

void __thiscall animINST::CalcObjModelMatrix(animINST *this,objOBJ *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  animCHN *paVar6;
  float fVar7;
  int local_c0;
  float local_bc;
  int local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  animINST *local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  m3dV local_50 [12];
  m3dV local_44 [12];
  m3dQUAT local_38 [16];
  float local_28 [5];
  float local_14 [5];
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0xf000) == 0) {
    if ((uVar1 & 8) != 0) {
      return;
    }
    if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x38) == 0)) {
      return;
    }
  }
  local_bc = 2.0;
  local_68 = this;
  GetBlendParams(this,&local_64,&local_b0,&local_b4);
  if (((*(uint *)(this + 4) & 0x200) == 0) || ((*(uint *)(this + 4) & 0x800000) != 0)) {
    fVar7 = *(float *)(this + 0xe4);
LAB_004ef510:
    local_b8 = GetObjTRSV(this,param_1,fVar7,(m3dV *)&local_a0,(m3dQUAT *)&local_94,
                          (m3dV *)&local_ac,&local_bc);
LAB_004ef51c:
    iVar3 = 0;
    if (local_b8 != 0) {
      local_c0 = 0;
      while( true ) {
        piVar2 = *(int **)(this + 0xe8);
        if (piVar2 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*piVar2 + 0xc);
        }
        if (iVar4 <= local_c0) break;
        paVar6 = (animCHN *)(piVar2[1] + iVar3);
        iVar4 = animCHN::IsActive(paVar6,param_1,4);
        if (iVar4 != 0) {
          local_b0 = animCHN::GetFrameCur(paVar6);
          local_b4 = *(float *)(paVar6 + 0xc);
          local_b8 = GetObjTRSV(this,param_1,local_b0,local_50,local_38,local_44,&local_bc);
          local_84 = local_a0;
          local_80 = local_9c;
          local_7c = local_98;
          local_60 = local_94;
          local_5c = local_90;
          local_58 = local_8c;
          local_54 = local_88;
          local_78 = local_ac;
          local_74 = local_a8;
          local_70 = local_a4;
          local_6c = local_b4;
          m3dLerpVector_L((m3dV *)&local_84,local_50,0.0,1.0,local_b4,(m3dV *)&local_a0);
          fVar7 = local_6c;
          m3dLerpVector_L((m3dV *)&local_78,local_44,0.0,1.0,local_6c,(m3dV *)&local_ac);
          m3dSlerpQuat((m3dQUAT *)&local_60,local_38,fVar7,(m3dQUAT *)&local_94);
        }
        local_c0 = local_c0 + 1;
        iVar3 = iVar3 + 0x18;
      }
    }
  }
  else {
    fVar7 = local_b0;
    if ((*(uint *)param_1 & 0x200) != 0) goto LAB_004ef510;
    iVar3 = GetObjTRSV(this,param_1,local_64,(m3dV *)&local_84,(m3dQUAT *)&local_60,
                       (m3dV *)&local_78,&local_bc);
    if (iVar3 != 0) {
      local_b8 = GetObjTRSV(this,param_1,local_b0,local_50,local_38,local_44,&local_bc);
      fVar7 = local_b4;
      m3dLerpVector_L((m3dV *)&local_84,local_50,0.0,1.0,local_b4,(m3dV *)&local_a0);
      m3dLerpVector_L((m3dV *)&local_78,local_44,0.0,1.0,fVar7,(m3dV *)&local_ac);
      m3dSlerpQuat((m3dQUAT *)&local_60,local_38,fVar7,(m3dQUAT *)&local_94);
      goto LAB_004ef51c;
    }
    local_b8 = 0;
  }
  if (local_bc <= ___real_3f800000) {
    iVar3 = ftol();
    if ((0 < iVar3) && (iVar3 < 0xfe)) {
      objOBJ::SetConstColor(param_1,iVar3 << 0x18,1);
    }
    if (iVar3 < 1) {
      if (((byte)param_1[8] & 4) == 0) {
        objOBJ::SetStateProcYes(param_1,4,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      }
    }
    else if (((byte)param_1[8] & 4) != 0) {
      objOBJ::SetStateProcNo(param_1,4,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      objOBJ::SetConstColor(param_1,iVar3 << 0x18,1);
    }
  }
  if (((*(uint *)(param_1 + 8) & 0x1c) != 0) && ((*(uint *)(param_1 + 8) & 0xf000) == 0)) {
    return;
  }
  if (local_b8 == 1) {
    m3dQUAT::GetMatr((m3dQUAT *)&local_94,(m3dMATR *)(param_1 + 0x7c));
  }
  else {
    if (local_b8 != 2) goto LAB_004ef6e0;
    m3dQUAT::GetMatr((m3dQUAT *)&local_94,(m3dMATR *)(param_1 + 0x7c));
    m3dMATR::Scale((m3dMATR *)(param_1 + 0x7c),local_ac,local_a8,local_a4,1);
  }
  m3dMATR::Translate((m3dMATR *)(param_1 + 0x7c),(m3dV *)&local_a0,2);
LAB_004ef6e0:
  if (((*(uint *)(param_1 + 8) & 0x3f) == 0) || ((*(uint *)(param_1 + 8) & 0xf000) != 0)) {
    iVar3 = 0;
    if ((*(int *)(param_1 + 0x28) != 0) && (*(short *)(*(int *)(param_1 + 0x28) + 0x58) != 0)) {
      iVar4 = 0;
      local_c0 = 0;
      while( true ) {
        piVar2 = *(int **)(local_68 + 0xe8);
        if (piVar2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*piVar2 + 0xc);
        }
        if (iVar5 <= local_c0) break;
        paVar6 = (animCHN *)(piVar2[1] + iVar3);
        iVar5 = animCHN::IsActive(paVar6,param_1,0x200);
        if (iVar5 != 0) {
          fVar7 = animCHN::GetFrameCur(paVar6);
          local_14[iVar4] = fVar7;
          local_28[iVar4] = *(float *)(paVar6 + 0xc);
          iVar4 = iVar4 + 1;
        }
        local_c0 = local_c0 + 1;
        iVar3 = iVar3 + 0x18;
      }
      local_14[iVar4] = *(float *)(local_68 + 0xe4);
      local_28[iVar4] = 1.0;
      objOBJ::AnimateModifiers(param_1,iVar4 + 1,local_14,local_28);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:animkinem.cpp
   addr: 004EF7B0 */

int __thiscall
animINST::GetObjTRSV
          (animINST *this,objOBJ *param_1,float param_2,m3dV *param_3,m3dQUAT *param_4,m3dV *param_5
          ,float *param_6)

{
  int *piVar1;
  animOBJ_ANIM *this_00;
  int iVar2;
  
  if (*(short *)(param_1 + 0x20) < 0) {
    *(undefined4 *)param_3 = _m3dVZero;
    *(undefined4 *)(param_3 + 4) = DAT_00963740;
    *(undefined4 *)(param_3 + 8) = DAT_00963744;
    m3dQUAT::Identity(param_4);
    *(undefined4 *)(param_5 + 8) = 0x3f800000;
    *(undefined4 *)(param_5 + 4) = 0x3f800000;
    *(undefined4 *)param_5 = 0x3f800000;
    *param_6 = 2.0;
    return 0;
  }
  this_00 = (animOBJ_ANIM *)
            (*(short *)(param_1 + 0x20) * 0x40 +
            *(int *)(*(int *)(*(int *)(param_1 + 0xbc) + 0x138) + 0xa0));
  if (*(int **)(this_00 + 0x14) == (int *)0x0) {
    if ((*(int *)(this_00 + 0x28) == 0) && (*(int *)(this_00 + 0x38) == 0)) {
      iVar2 = 0;
      goto LAB_004ef918;
    }
    *(undefined4 *)param_3 = *(undefined4 *)(this_00 + 8);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this_00 + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this_00 + 0x10);
  }
  else {
    iVar2 = **(int **)(this_00 + 0x14);
    if ((*(uint *)(this + 4) & 0x200000) == 0) {
      (**(code **)(iVar2 + 0x10))(param_2,param_3,0);
    }
    else {
      (**(code **)(iVar2 + 0x14))();
    }
  }
  piVar1 = *(int **)(this_00 + 0x28);
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)param_4 = *(undefined4 *)(this_00 + 0x18);
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(this_00 + 0x1c);
    *(undefined4 *)(param_4 + 8) = *(undefined4 *)(this_00 + 0x20);
    *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(this_00 + 0x24);
  }
  else if ((*(uint *)(this + 4) & 0x200000) == 0) {
    (**(code **)(*piVar1 + 0x10))(param_2,param_4,0);
  }
  else {
    (**(code **)(*piVar1 + 0x14))();
  }
  m3dQUAT::Invert(param_4);
  if (*(int **)(this_00 + 0x38) == (int *)0x0) {
    *(undefined4 *)param_5 = *(undefined4 *)(this_00 + 0x2c);
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)(this_00 + 0x30);
    *(undefined4 *)(param_5 + 8) = *(undefined4 *)(this_00 + 0x34);
  }
  else {
    iVar2 = **(int **)(this_00 + 0x38);
    if ((*(uint *)(this + 4) & 0x200000) == 0) {
      (**(code **)(iVar2 + 0x10))(param_2,param_5,0);
    }
    else {
      (**(code **)(iVar2 + 0x14))();
    }
  }
  iVar2 = 2 - (uint)((*(uint *)param_1 & 0x400) != 0);
LAB_004ef918:
  *param_6 = 2.0;
  animOBJ_ANIM::GetVisibility(this_00,param_2,*(uint *)(this + 4) & 0x200000,param_6);
  return iVar2;
}




/* from: engine:animkinem.cpp
   addr: 004EF940 */

void __fastcall _animCombineTRS(m3dV *param_1,m3dQUAT *param_2,m3dV *param_3,m3dMATR *param_4)

{
  m3dQUAT::GetMatr(param_2,param_4);
  m3dMATR::Scale(param_4,*(float *)param_3,*(float *)(param_3 + 4),*(float *)(param_3 + 8),1);
  m3dMATR::Translate(param_4,param_1,2);
  return;
}

