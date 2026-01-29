/* from: pwp_comm.cpp
   addr: 00415170 */

int __fastcall pwpInit(void)

{
  int iVar1;
  
  iVar1 = pwpSVLInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpBSKInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpBulWpnInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpMCGInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpCLTInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpSTGInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpMDGInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpMNGInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpCRBInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpBMBInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpACDInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpAMGInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpOppSfxInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pwpWaterSfxInit();
  return (uint)(iVar1 != 0);
}




/* from: pwp_comm.cpp
   addr: 00415200 */

void __fastcall pwpTerm(void)

{
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  return;
}




/* from: pwp_comm.cpp
   addr: 00415250 */

void __thiscall pwpWEAPON::Recharge(pwpWEAPON *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(this + 399);
  iVar2 = *(int *)(this + 0x18b);
  if (iVar1 != iVar2) {
    uVar3 = ftol();
    uVar4 = iVar2 - iVar1;
    uVar3 = uVar3 & ((int)uVar3 < 1) - 1;
    if ((int)uVar4 < (int)uVar3) {
      uVar3 = uVar4;
    }
    *(uint *)(this + 399) = iVar1 + uVar3;
  }
  return;
}




/* from: pwp_comm.cpp
   addr: 004152A0 */

int __thiscall pwpWEAPON::SubtractAmmo(pwpWEAPON *this,float param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(wrSysGO + 0xa0) == 0) {
    iVar1 = wpnWEAPON::SubtractAmmo((wpnWEAPON *)this,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = *(int *)(this + 399);
    if (iVar1 != -1) {
      iVar2 = ftol();
      *(int *)(this + 399) = iVar1 - iVar2;
    }
  }
  return 1;
}




/* from: pwp_comm.cpp
   addr: 004152F0 */

void __thiscall pwpWEAPON::SetShootRate(pwpWEAPON *this,float param_1)

{
  *(float *)(this + 0x153) = param_1;
  *(float *)(this + 0x1a3) = param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_comm.cpp
   addr: 00415310 */

float __thiscall pwpWEAPON::GetDamage(pwpWEAPON *this)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(this + 0x15b);
  iVar2 = plrPLAYER_COMMON::IsActivePowerup(*(plrPLAYER_COMMON **)(this + 0x187),0);
  if (iVar2 != 0) {
    return fVar1 * ___real_40800000;
  }
  return fVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_comm.cpp
   addr: 00415340 */

void __thiscall pwpWEAPON::AdjustTiming(pwpWEAPON *this)

{
  int iVar1;
  float fVar2;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0x138);
  local_8 = 1.0;
  local_4 = 0.5;
  fVar2 = ___real_3ecccccd;
  switch(*(undefined4 *)(this + 0x94)) {
  case 0:
    local_8 = 0.7;
  case 1:
    local_4 = 0.7;
    break;
  case 2:
    local_8 = 0.6;
    break;
  case 3:
    fVar2 = ___real_3f333333;
    break;
  case 4:
    local_8 = 0.6;
    local_4 = 0.7;
    fVar2 = ___real_3f19999a;
    break;
  case 5:
    local_4 = 0.6;
    fVar2 = ___real_3eb33333;
    break;
  case 6:
    local_4 = 1.0;
    break;
  case 7:
    local_8 = 0.5;
    local_4 = 0.8;
    fVar2 = ___real_3f000000;
    break;
  case 8:
    local_4 = 0.8;
    fVar2 = ___real_3f266666;
    break;
  case 9:
    local_8 = 0.5;
    fVar2 = ___real_3eb33333;
    break;
  case 10:
    local_8 = 0.7;
    fVar2 = ___real_3f0ccccd;
  }
  *(float *)(*(int *)(iVar1 + 0x90) + 0x270) = fVar2 * *(float *)(*(int *)(iVar1 + 0x90) + 0x270);
  *(float *)(*(int *)(iVar1 + 0x90) + 0x2f8) = fVar2 * *(float *)(*(int *)(iVar1 + 0x90) + 0x2f8);
  *(float *)(*(int *)(iVar1 + 0x90) + 0x380) = fVar2 * *(float *)(*(int *)(iVar1 + 0x90) + 0x380);
  *(float *)(*(int *)(iVar1 + 0x90) + 0x408) = local_8 * *(float *)(*(int *)(iVar1 + 0x90) + 0x408);
  *(float *)(*(int *)(iVar1 + 0x90) + 0x490) = local_4 * *(float *)(*(int *)(iVar1 + 0x90) + 0x490);
  *(float *)(*(int *)(iVar1 + 0x90) + 0x518) = local_4 * *(float *)(*(int *)(iVar1 + 0x90) + 0x518);
  if (*(int *)(this + 0x94) == 4) {
    *(float *)(*(int *)(iVar1 + 0x90) + 0x5a0) =
         local_8 * *(float *)(*(int *)(iVar1 + 0x90) + 0x5a0);
  }
  if (*(int *)(this + 0x94) == 10) {
    *(float *)(*(int *)(iVar1 + 0x90) + 0x5a0) =
         local_8 * *(float *)(*(int *)(iVar1 + 0x90) + 0x5a0);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x0041592f) */
/* from: pwp_comm.cpp
   addr: 00415520 */

int __thiscall pwpWEAPON::SetupAniSystem(pwpWEAPON *this)

{
  animTPL *paVar1;
  undefined4 *puVar2;
  animSYSTEM *this_00;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  animSEQ *local_c;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  if ((((byte)this[0x88] & 1) == 0) || ((gsAppState & 0x800U) != 0)) {
    if (*(animSEQ **)(paVar1 + 0x90) == (animSEQ *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(paVar1 + 0x8c);
      local_c = *(animSEQ **)(paVar1 + 0x90);
    }
    *(undefined4 *)(paVar1 + 0x8c) = 10;
    puVar2 = (undefined4 *)operator_new(0x554);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 10;
      puVar2 = puVar2 + 1;
      iVar7 = 10;
      puVar5 = puVar2;
      do {
        puVar8 = puVar5;
        for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        puVar5[0x20] = 2;
        iVar7 = iVar7 + -1;
        puVar5 = puVar5 + 0x22;
      } while (iVar7 != 0);
    }
    *(undefined4 **)(paVar1 + 0x90) = puVar2;
    _entAnimSetSeqName(paVar1,0,s_PWP_SEQ_UNUSED);
    _entAnimSetSeqName(paVar1,1,s_PWP_SEQ_IDLE);
    _entAnimSetSeqName(paVar1,2,s_PWP_SEQ_IDLE_1);
    _entAnimSetSeqName(paVar1,3,s_PWP_SEQ_RUN);
    _entAnimSetSeqName(paVar1,4,s_PWP_SEQ_TAKE_OFF);
    _entAnimSetSeqName(paVar1,5,s_PWP_SEQ_TAKE_OFF_EMPTY);
    _entAnimSetSeqName(paVar1,6,s_PWP_SEQ_PUT_ON);
    _entAnimSetSeqName(paVar1,7,s_PWP_SEQ_SHOOT);
    _entAnimSetSeqName(paVar1,8,s_PWP_SEQ_RECHARGE);
    _entAnimSetSeqName(paVar1,9,s_PWP_SEQ_FORCE_RECHARGE);
    entAnimAssignTplSeq(paVar1,local_c,iVar6);
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x40) = 0;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x44) = 0x3f800000;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x50) = 0x43fa0000;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x80) = 0;
    AdjustTiming(this);
    this_00 = (animSYSTEM *)operator_new(0x14);
    if ((this_00 == (animSYSTEM *)0x0) ||
       (piVar3 = (int *)animSYSTEM::animSYSTEM(this_00,10,0), piVar3 == (int *)0x0)) {
      return 0;
    }
    *(int **)(paVar1 + 0xa4) = piVar3;
    (**(code **)(*piVar3 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0xc))(1,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0x14))(1);
    (**(code **)(*piVar3 + 0x14))(3);
    (**(code **)(*piVar3 + 4))(3,1,0,1,1);
    (**(code **)(*piVar3 + 4))(3,4,0,4,1);
    (**(code **)(*piVar3 + 4))(3,6,0,6,1);
    (**(code **)(*piVar3 + 4))(3,7,0,7,1);
    (**(code **)(*piVar3 + 0xc))(4,1,1,0xffffffff);
    (**(code **)(*piVar3 + 4))(4,6,0,6,0);
    (**(code **)(*piVar3 + 4))(6,3,1,3,1);
    (**(code **)(*piVar3 + 4))(6,1,0,1,1);
    (**(code **)(*piVar3 + 4))(6,6,2,6,1);
    (**(code **)(*piVar3 + 4))(6,7,1,7,1);
    (**(code **)(*piVar3 + 0xc))(7,1,1,0xffffffff);
    (**(code **)(*piVar3 + 4))(7,1,1,1,0);
    (**(code **)(*piVar3 + 4))(7,3,1,1,0);
    (**(code **)(*piVar3 + 4))(7,7,1,7,0);
    (**(code **)(*piVar3 + 4))(7,8,0,8,1);
    (**(code **)(*piVar3 + 4))(1,7,0,7,0);
    (**(code **)(*piVar3 + 4))(3,7,0,7,0);
    (**(code **)(*piVar3 + 0xc))(8,1,1,0xffffffff);
    (**(code **)(*piVar3 + 4))(4,1,0,1,0);
    (**(code **)(*piVar3 + 4))(4,6,0,6,0);
    (**(code **)(*piVar3 + 4))(1,6,0,6,0);
    (**(code **)(*piVar3 + 4))(3,6,0,6,0);
    (**(code **)(*piVar3 + 4))(7,6,0,6,0);
    (**(code **)(*piVar3 + 4))(8,6,0,6,0);
    (**(code **)(*piVar3 + 0x20))(1,2);
    (**(code **)(*piVar3 + 4))(2,1,1,1,1);
    iVar6 = *(int *)(paVar1 + 0x90);
    if (*(int *)(iVar6 + 0x328) == 2) {
      puVar2 = (undefined4 *)(iVar6 + 0x220);
      puVar5 = (undefined4 *)(iVar6 + 0x2a8);
      for (iVar7 = 0x22; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    (**(code **)(*piVar3 + 0x20))(4,5);
    iVar6 = *(int *)(paVar1 + 0x90);
    if (*(int *)(iVar6 + 0x548) == 2) {
      puVar2 = (undefined4 *)(iVar6 + 0x440);
      puVar5 = (undefined4 *)(iVar6 + 0x4c8);
      for (iVar7 = 0x22; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    (**(code **)(*piVar3 + 0x20))(8,9);
    (**(code **)(*piVar3 + 4))(3,9,0,9);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_comm.cpp
   addr: 00415970 */

int __thiscall pwpWEAPON::ProcessINIT(pwpWEAPON *this)

{
  undefined4 uVar1;
  int iVar2;
  sncCHANNEL *this_00;
  undefined **local_4;
  
  local_4 = &objFILTER_SET_TRANSP_LAST::_vftable_;
  iVar2 = wpnWEAPON::ProcessINIT((wpnWEAPON *)this);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x1ab) = 0;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
  *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) | 4;
  *(undefined4 *)(this + 0x18b) = 0xffffffff;
  *(undefined4 *)(this + 399) = 0xffffffff;
  *(undefined4 *)(this + 0x197) = 0;
  *(undefined4 *)(this + 0x19f) = 0;
  *(undefined4 *)(this + 0x19b) = 0xffffffff;
  *(undefined4 *)(this + 0x193) = 0;
  this_00 = (sncCHANNEL *)operator_new(0xbc);
  if (this_00 == (sncCHANNEL *)0x0) {
    this_00 = (sncCHANNEL *)0x0;
  }
  else {
    sncCHANNEL::sncCHANNEL(this_00);
    *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this_00 + 0x80) = 0;
    *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
    *(undefined4 *)(this_00 + 0x7c) = uVar1;
    *(undefined4 *)(this_00 + 0x84) = 0x41200000;
    *(undefined1 **)(this_00 + 0x88) = &DAT_42480000;
    *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
    *(undefined4 *)(this_00 + 0x94) = 0;
    *(undefined4 *)(this_00 + 0x98) = _m3dVZero;
    *(undefined4 *)(this_00 + 0x9c) = DAT_00963740;
    *(undefined4 *)(this_00 + 0xa0) = DAT_00963744;
    *(undefined4 *)(this_00 + 0xa4) = _m3dVZero;
    *(undefined4 *)(this_00 + 0xa8) = DAT_00963740;
    *(undefined4 *)(this_00 + 0xac) = DAT_00963744;
    *(undefined4 *)(this_00 + 0xb0) = _m3dVUnitZ;
    *(undefined4 *)(this_00 + 0xb4) = DAT_005f99a0;
    uVar1 = DAT_005f99a4;
    *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
    *(undefined4 *)(this_00 + 0xb8) = uVar1;
  }
  *(sncCHANNEL **)(this + 0x183) = this_00;
  if (this_00 == (sncCHANNEL *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0xbc))();
  if (iVar2 == 0) {
    *(uint *)(*(int *)(this + 0x183) + 4) = *(uint *)(*(int *)(this + 0x183) + 4) | 1;
    objOBJ::SetStateRendYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x1000000);
    objFind(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),(objFILTER *)&local_4);
  }
  gsSND_SYSTEM::AddChannel
            (gsSysSound,*(sncCHANNEL **)(this + 0x183),(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  return 1;
}




/* from: pwp_comm.cpp
   addr: 00415B40 */

int __thiscall objFILTER_SET_TRANSP_LAST::IsUse(objFILTER_SET_TRANSP_LAST *this,objOBJ *param_1)

{
  if (((byte)param_1[0x24] & 0x20) != 0) {
    objOBJ::SetStateRendYes(param_1,0x8000000);
  }
  return 0;
}




/* from: pwp_comm.cpp
   addr: 00415B60 */

int __thiscall pwpWEAPON::ProcessINIT_LEVEL(pwpWEAPON *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x183) != 0) {
    iVar2 = (**(code **)(*(int *)this + 0xbc))();
    iVar1 = *(int *)(this + 0x183);
    if (iVar2 == 0) {
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
      return 1;
    }
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
  }
  return 1;
}




/* from: pwp_comm.cpp
   addr: 00415BB0 */

void __thiscall pwpWEAPON::ProcessFRAME(pwpWEAPON *this)

{
  wpnWEAPON::ProcessFRAME((wpnWEAPON *)this);
  (**(code **)(*(int *)this + 0xb0))();
                    /* WARNING: Could not recover jumptable at 0x00415bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0xac))();
  return;
}




/* from: pwp_comm.cpp
   addr: 00415BE0 */

int __thiscall pwpWEAPON::IsShooting(pwpWEAPON *this)

{
  int iVar1;
  
  if (((byte)this[0x193] & 2) == 0) {
    return 1;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,*(int *)(this + 0x19b));
  return (uint)(iVar1 != 0);
}




/* from: pwp_comm.cpp
   addr: 00415C10 */

int __thiscall pwpWEAPON::IsReadyRecharge(pwpWEAPON *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,*(int *)(this + 0x197));
  return (uint)(iVar1 != 0);
}




/* from: pwp_comm.cpp
   addr: 00415C30 */

void __thiscall pwpWEAPON::SetZoom(pwpWEAPON *this,int param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 0x193) = *(uint *)(this + 0x193) | 8;
    return;
  }
  *(uint *)(this + 0x193) = *(uint *)(this + 0x193) & 0xfffffff7;
  return;
}




/* from: pwp_comm.cpp
   addr: 00415C60 */

void __thiscall pwpWEAPON::UpdateSound(pwpWEAPON *this)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0xf8);
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x1ab) = uVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_comm.cpp
   addr: 00415C80 */

int __thiscall pwpWEAPON::IsEmpty(pwpWEAPON *this)

{
  if ((((byte)this[0x14f] & 4) == 0) && (*(float *)(this + 0x17f) <= ___real_00000000)) {
    return 1;
  }
  return 0;
}
