
/* from: engine:Animbvol.cpp
   addr: 004CCE80 */

abvVOL_UPD * __fastcall abvVOL_UPD::Make(m3dVOL *param_1)

{
  abvVOL_UPD *paVar1;
  undefined4 *puVar2;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
    paVar1 = (abvVOL_UPD *)operator_new(0x20);
    if (paVar1 == (abvVOL_UPD *)0x0) {
LAB_004ccfba:
      paVar1 = (abvVOL_UPD *)0x0;
      goto LAB_004ccfbc;
    }
    *(undefined4 *)(paVar1 + 4) = 0;
    *(undefined ***)paVar1 = &abvBOX_UPD::_vftable_;
    puVar2 = (undefined4 *)operator_new(0x20);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 1;
      *puVar2 = &m3dBOX::_vftable_;
      *(undefined4 **)(paVar1 + 4) = puVar2;
      goto LAB_004ccfbc;
    }
    break;
  case 2:
    paVar1 = (abvVOL_UPD *)operator_new(0x30);
    if (paVar1 == (abvVOL_UPD *)0x0) goto LAB_004ccfba;
    *(undefined4 *)(paVar1 + 4) = 0;
    *(undefined ***)paVar1 = &abvPRISM_UPD::_vftable_;
    puVar2 = (undefined4 *)operator_new(0xb4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 2;
      *puVar2 = &m3dPRISM::_vftable_;
      *(undefined4 **)(paVar1 + 4) = puVar2;
      goto LAB_004ccfbc;
    }
    break;
  case 3:
    paVar1 = (abvVOL_UPD *)operator_new(0x14);
    if (paVar1 == (abvVOL_UPD *)0x0) goto LAB_004ccfba;
    *(undefined4 *)(paVar1 + 4) = 0;
    *(undefined ***)paVar1 = &abvSPHERE_UPD::_vftable_;
    puVar2 = (undefined4 *)operator_new(0x18);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 3;
      *puVar2 = &m3dSPHERE::_vftable_;
      *(undefined4 **)(paVar1 + 4) = puVar2;
      goto LAB_004ccfbc;
    }
    break;
  case 4:
    paVar1 = (abvVOL_UPD *)operator_new(0x40);
    if (paVar1 == (abvVOL_UPD *)0x0) goto LAB_004ccfba;
    *(undefined4 *)(paVar1 + 4) = 0;
    *(undefined4 *)(paVar1 + 0xc) = 4;
    *(undefined ***)(paVar1 + 8) = &m3dOBB::_vftable_;
    *(undefined ***)paVar1 = &abvOBB_UPD::_vftable_;
    puVar2 = (undefined4 *)operator_new(0x38);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 4;
      *puVar2 = &m3dOBB::_vftable_;
      *(undefined4 **)(paVar1 + 4) = puVar2;
      goto LAB_004ccfbc;
    }
    break;
  default:
    return (abvVOL_UPD *)0x0;
  }
  *(undefined4 *)(paVar1 + 4) = 0;
LAB_004ccfbc:
  if (*(undefined4 **)(paVar1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(paVar1 + 4))(1);
  }
  *(m3dVOL **)(paVar1 + 4) = param_1;
  return paVar1;
}




/* from: engine:Animbvol.cpp
   addr: 004CCFF0 */

void __thiscall abvBVOL::abvBVOL(abvBVOL *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 3;
  *(undefined ***)(this + 0xc) = &m3dSPHERE::_vftable_;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x20) = 0xbf800000;
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD020 */

void __thiscall abvBVOL::~abvBVOL(abvBVOL *this)

{
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 8))(1);
  }
  *(undefined ***)(this + 0xc) = &m3dVOL::_vftable_;
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD040 */

abvBVOL * __thiscall abvBVOL::operator=(abvBVOL *this,abvBVOL *param_1)

{
  Alloc(this,*(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 4));
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  DuplicateVol(this,param_1);
  return this;
}




/* from: engine:Animbvol.cpp
   addr: 004CD090 */

int __thiscall abvBVOL::Alloc(abvBVOL *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(this + 0x20) = 0xbf800000;
  switch(param_1) {
  case 1:
    puVar1 = (undefined4 *)operator_new(0x20);
    if (puVar1 == (undefined4 *)0x0) {
LAB_004cd203:
      *(undefined4 *)(this + 8) = 0;
      return 1;
    }
    puVar1[1] = 0;
    *puVar1 = &abvBOX_UPD::_vftable_;
    puVar2 = (undefined4 *)operator_new(0x20);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 1;
      *puVar2 = &m3dBOX::_vftable_;
      puVar1[1] = puVar2;
      *(undefined4 **)(this + 8) = puVar1;
      return 1;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)operator_new(0x30);
    if (puVar1 == (undefined4 *)0x0) goto LAB_004cd203;
    puVar1[1] = 0;
    *puVar1 = &abvPRISM_UPD::_vftable_;
    puVar2 = (undefined4 *)operator_new(0xb4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 2;
      *puVar2 = &m3dPRISM::_vftable_;
      puVar1[1] = puVar2;
      *(undefined4 **)(this + 8) = puVar1;
      return 1;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)operator_new(0x14);
    if (puVar1 == (undefined4 *)0x0) goto LAB_004cd203;
    puVar1[1] = 0;
    *puVar1 = &abvSPHERE_UPD::_vftable_;
    puVar2 = (undefined4 *)operator_new(0x18);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 3;
      *puVar2 = &m3dSPHERE::_vftable_;
      puVar1[1] = puVar2;
      *(undefined4 **)(this + 8) = puVar1;
      return 1;
    }
    break;
  case 4:
    puVar1 = (undefined4 *)operator_new(0x40);
    if (puVar1 == (undefined4 *)0x0) goto LAB_004cd203;
    puVar1[1] = 0;
    puVar1[3] = 4;
    puVar1[2] = &m3dOBB::_vftable_;
    *puVar1 = &abvOBB_UPD::_vftable_;
    puVar2 = (undefined4 *)operator_new(0x38);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 4;
      *puVar2 = &m3dOBB::_vftable_;
      puVar1[1] = puVar2;
      *(undefined4 **)(this + 8) = puVar1;
      return 1;
    }
    break;
  default:
    return 0;
  }
  puVar1[1] = 0;
  *(undefined4 **)(this + 8) = puVar1;
  return 1;
}




/* from: engine:Animbvol.cpp
   addr: 004CD230 */

void __thiscall abvBVOL::DuplicateVol(abvBVOL *this,abvBVOL *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = *(int *)(this + 8);
  iVar2 = *(int *)(iVar1 + 4);
  switch(*(undefined4 *)(iVar2 + 4)) {
  case 1:
    iVar4 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar4 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
    *(int *)(*(int *)(this + 8) + 4) = iVar2;
    iVar1 = *(int *)(*(int *)(this + 8) + 4);
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 4);
    puVar7 = (undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
    puVar6 = (undefined4 *)(iVar2 + 8);
    puVar3 = (undefined4 *)(iVar2 + 0x14);
    puVar5 = (undefined4 *)(iVar1 + 0x14);
    break;
  case 2:
    iVar4 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar4 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
    *(int *)(*(int *)(this + 8) + 4) = iVar2;
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
    iVar2 = *(int *)(*(int *)(this + 8) + 4);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    puVar6 = (undefined4 *)(iVar1 + 8);
    puVar7 = (undefined4 *)(iVar2 + 8);
    for (iVar4 = 0x29; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(iVar1 + 0xac);
    *(undefined4 *)(iVar2 + 0xb0) = *(undefined4 *)(iVar1 + 0xb0);
    return;
  case 3:
    iVar4 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
    *(int *)(*(int *)(this + 8) + 4) = iVar2;
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
    iVar2 = *(int *)(*(int *)(this + 8) + 4);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
    return;
  case 4:
    iVar4 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar4 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar4 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar4 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar4 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar4 + 0x3c);
    *(int *)(*(int *)(this + 8) + 4) = iVar2;
    iVar1 = *(int *)(*(int *)(this + 8) + 4);
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 4);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
    puVar6 = (undefined4 *)(iVar2 + 0x20);
    puVar7 = (undefined4 *)(iVar1 + 0x20);
    puVar3 = (undefined4 *)(iVar2 + 0x2c);
    puVar5 = (undefined4 *)(iVar1 + 0x2c);
    break;
  default:
    goto switchD_004cd247_default;
  }
  *puVar7 = *puVar6;
  puVar7[1] = puVar6[1];
  puVar7[2] = puVar6[2];
  *puVar5 = *puVar3;
  puVar5[1] = puVar3[1];
  puVar5[2] = puVar3[2];
switchD_004cd247_default:
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD4A0 */

void __thiscall abvBVOL::Calc(abvBVOL *this,animINST *param_1)

{
  (**(code **)(**(int **)(this + 8) + 4))(param_1,*(undefined4 *)(this + 4));
  (**(code **)(**(int **)(*(int *)(this + 8) + 4) + 0x1c))(this + 0xc);
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD4D0 */

void __thiscall abvBVOL::GetOrg(abvBVOL *this,animINST *param_1,m3dV *param_2)

{
  if (*(objOBJ **)(this + 4) == (objOBJ *)0x0) {
    animINST::GetPos(param_1,param_2);
    return;
  }
  if (((byte)param_1[0xc] & 4) != 0) {
    objValidateLTM(*(objOBJ **)(this + 4));
  }
  objOBJ::GetOrigin(*(objOBJ **)(this + 4),param_2);
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD510 */

int __thiscall
abvBVOL::IsIsectCyl(abvBVOL *this,m3dV *param_1,m3dV *param_2,float param_3,float param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004cd528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(**(int **)(*(int *)(this + 8) + 4) + 8))();
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Animbvol.cpp
   addr: 004CD530 */

int __thiscall
abvBVOL::IsectRay(abvBVOL *this,m3dV *param_1,m3dV *param_2,float param_3,cdtINFO *param_4)

{
  int iVar1;
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
  local_8 = DAT_00963744;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_4 = 0;
  if (param_4 == (cdtINFO *)0x0) {
    param_4 = (cdtINFO *)&local_20;
  }
  iVar1 = (**(code **)(**(int **)(*(int *)(this + 8) + 4) + 0xc))
                    (param_1,param_2,param_3,param_4 + 0x10,param_4 + 0x1c,param_4 + 0xc);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Animbvol.cpp
   addr: 004CD5A0 */

int __thiscall abvBVOL::DistPoint(abvBVOL *this,m3dV *param_1,float param_2,cdtINFO *param_3)

{
  int iVar1;
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
  local_8 = DAT_00963744;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_4 = 0;
  if (param_3 == (cdtINFO *)0x0) {
    param_3 = (cdtINFO *)&local_20;
  }
  iVar1 = (**(code **)(**(int **)(*(int *)(this + 8) + 4) + 0x10))
                    (param_1,param_2,param_3 + 0x10,param_3 + 0x1c,param_3 + 0xc);
  return iVar1;
}




/* from: engine:Animbvol.cpp
   addr: 004CD610 */

void __thiscall
abvVOL_UPD::GetFace(abvVOL_UPD *this,cdtINFO *param_1,m3dPOLY *param_2,m3dV *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x004cd620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(this + 4) + 0x28))();
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD650 */

void __thiscall abvSPHERE_UPD::MakeUpdStruct(abvSPHERE_UPD *this,animINST *param_1,objOBJ *param_2)

{
  int iVar1;
  float unaff_EBX;
  float fStack_c;
  float fStack_8;
  
  iVar1 = *(int *)(this + 4);
  (**(code **)(*(int *)(param_2 + 0xc0) + 0x1c))(iVar1);
  objOBJ::GetOrigin(param_2,(m3dV *)&stack0xfffffff0);
  *(float *)(this + 8) = *(float *)(iVar1 + 8) - unaff_EBX;
  *(float *)(this + 0xc) = *(float *)(iVar1 + 0xc) - fStack_c;
  *(float *)(this + 0x10) = *(float *)(iVar1 + 0x10) - fStack_8;
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD6B0 */

void __thiscall abvSPHERE_UPD::Update(abvSPHERE_UPD *this,animINST *param_1,abvBVOL *param_2)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(this + 4);
  if (*(objOBJ **)(param_2 + 4) == (objOBJ *)0x0) {
    animINST::GetPos(param_1,(m3dV *)&local_c);
  }
  else {
    if (((byte)param_1[0xc] & 4) != 0) {
      objValidateLTM(*(objOBJ **)(param_2 + 4));
    }
    objOBJ::GetOrigin(*(objOBJ **)(param_2 + 4),(m3dV *)&local_c);
  }
  *(float *)(iVar1 + 8) = local_c + *(float *)(this + 8);
  *(float *)(iVar1 + 0xc) = local_8 + *(float *)(this + 0xc);
  *(float *)(iVar1 + 0x10) = local_4 + *(float *)(this + 0x10);
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD730 */

void __thiscall
abvSPHERE_UPD::GetFace(abvSPHERE_UPD *this,cdtINFO *param_1,m3dPOLY *param_2,m3dV *param_3)

{
  int iVar1;
  
  if (param_3 != (m3dV *)0x0) {
    iVar1 = *(int *)(this + 4);
    *(float *)param_3 = *(float *)(param_1 + 0x10) - *(float *)(iVar1 + 8);
    *(float *)(param_3 + 4) = *(float *)(param_1 + 0x14) - *(float *)(iVar1 + 0xc);
    *(float *)(param_3 + 8) = *(float *)(param_1 + 0x18) - *(float *)(iVar1 + 0x10);
    m3dNormalize(param_3);
  }
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD770 */

void __thiscall abvBOX_UPD::MakeUpdStruct(abvBOX_UPD *this,animINST *param_1,objOBJ *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float unaff_EBX;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_8;
  
  iVar3 = *(int *)(this + 4);
  (**(code **)(*(int *)(param_2 + 0xc0) + 0x24))(&local_24);
  fVar1 = *(float *)(param_2 + 200);
  fVar2 = *(float *)(param_2 + 0xcc);
  fStack_8 = *(float *)(param_2 + 0xd0) - fStack_20;
  *(float *)(iVar3 + 8) = (fVar1 - unaff_EBX) + unaff_EBX;
  *(float *)(iVar3 + 0xc) = local_24 + (fVar2 - local_24);
  *(float *)(iVar3 + 0x10) = fStack_20 + fStack_8;
  *(float *)(iVar3 + 0x14) = unaff_EBX - (fVar1 - unaff_EBX);
  *(float *)(iVar3 + 0x18) = local_24 - (fVar2 - local_24);
  *(float *)(iVar3 + 0x1c) = fStack_20 - fStack_8;
  objOBJ::GetOrigin(param_2,(m3dV *)&fStack_1c);
  *(float *)(this + 8) = *(float *)(iVar3 + 8) - fStack_1c;
  *(float *)(this + 0xc) = *(float *)(iVar3 + 0xc) - fStack_18;
  *(float *)(this + 0x10) = *(float *)(iVar3 + 0x10) - fStack_14;
  *(float *)(this + 0x14) = *(float *)(iVar3 + 0x14) - fStack_1c;
  *(float *)(this + 0x18) = *(float *)(iVar3 + 0x18) - fStack_18;
  *(float *)(this + 0x1c) = *(float *)(iVar3 + 0x1c) - fStack_14;
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD840 */

void __thiscall abvBOX_UPD::Update(abvBOX_UPD *this,animINST *param_1,abvBVOL *param_2)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(this + 4);
  if (*(objOBJ **)(param_2 + 4) == (objOBJ *)0x0) {
    animINST::GetPos(param_1,(m3dV *)&local_c);
  }
  else {
    if (((byte)param_1[0xc] & 4) != 0) {
      objValidateLTM(*(objOBJ **)(param_2 + 4));
    }
    objOBJ::GetOrigin(*(objOBJ **)(param_2 + 4),(m3dV *)&local_c);
  }
  *(float *)(iVar1 + 8) = local_c + *(float *)(this + 8);
  *(float *)(iVar1 + 0xc) = local_8 + *(float *)(this + 0xc);
  *(float *)(iVar1 + 0x10) = local_4 + *(float *)(this + 0x10);
  *(float *)(iVar1 + 0x14) = local_c + *(float *)(this + 0x14);
  *(float *)(iVar1 + 0x18) = local_8 + *(float *)(this + 0x18);
  *(float *)(iVar1 + 0x1c) = local_4 + *(float *)(this + 0x1c);
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD8D0 */

void __thiscall abvBOX_UPD::Expand(abvBOX_UPD *this,float param_1)

{
  float unaff_retaddr;
  
  (**(code **)(**(int **)(this + 4) + 0x2c))(param_1);
  *(float *)(this + 0xc) = *(float *)(this + 0xc) - unaff_retaddr;
  *(float *)(this + 0x18) = unaff_retaddr + *(float *)(this + 0x18);
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD900 */

void __thiscall abvPRISM_UPD::MakeUpdStruct(abvPRISM_UPD *this,animINST *param_1,objOBJ *param_2)

{
  m3dPRISM *this_00;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [2];
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_34;
  
  this_00 = *(m3dPRISM **)(this + 4);
  objCalcBPrism(param_2,this_00);
  objOBJ::GetOrigin(param_2,(m3dV *)&local_6c);
  *(float *)(this + 0x28) = *(float *)(this_00 + 0xac) - local_68;
  *(float *)(this + 0x2c) = *(float *)(this_00 + 0xb0) - local_68;
  m3dPRISM::GetVertices(this_00,(m3dV *)local_60);
  *(float *)(this + 8) = local_60[0] - local_6c;
  *(float *)(this + 0xc) = local_58 - local_64;
  *(float *)(this + 0x10) = local_54 - local_6c;
  *(float *)(this + 0x14) = local_4c - local_64;
  *(float *)(this + 0x18) = local_48 - local_6c;
  *(float *)(this + 0x1c) = local_40 - local_64;
  *(float *)(this + 0x20) = local_3c - local_6c;
  *(float *)(this + 0x24) = local_34 - local_64;
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CD9C0 */

void __thiscall abvPRISM_UPD::Update(abvPRISM_UPD *this,animINST *param_1,abvBVOL *param_2)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(this + 4);
  if (*(objOBJ **)(param_2 + 4) == (objOBJ *)0x0) {
    animINST::GetPos(param_1,(m3dV *)&local_c);
  }
  else {
    if (((byte)param_1[0xc] & 4) != 0) {
      objValidateLTM(*(objOBJ **)(param_2 + 4));
    }
    objOBJ::GetOrigin(*(objOBJ **)(param_2 + 4),(m3dV *)&local_c);
  }
  *(float *)(iVar1 + 0xac) = local_8 + *(float *)(this + 0x28);
  *(float *)(iVar1 + 0xb0) = local_8 + *(float *)(this + 0x2c);
  *(float *)(iVar1 + 0xc) = local_c + *(float *)(this + 8);
  *(float *)(iVar1 + 0x10) = local_4 + *(float *)(this + 0xc);
  *(float *)(iVar1 + 0x14) = local_c + *(float *)(this + 0x10);
  *(float *)(iVar1 + 0x18) = local_4 + *(float *)(this + 0x14);
  *(float *)(iVar1 + 0x1c) = local_c + *(float *)(this + 0x18);
  *(float *)(iVar1 + 0x20) = local_4 + *(float *)(this + 0x1c);
  *(float *)(iVar1 + 0x24) = local_c + *(float *)(this + 0x20);
  *(float *)(iVar1 + 0x28) = local_4 + *(float *)(this + 0x24);
  return;
}




/* WARNING: Removing unreachable block (ram,0x004cde84) */
/* WARNING: Removing unreachable block (ram,0x004cdbe2) */
/* WARNING: Removing unreachable block (ram,0x004cdd3b) */
/* WARNING: Removing unreachable block (ram,0x004cdfd2) */
/* from: engine:Animbvol.cpp
   addr: 004CDA80 */

void __thiscall abvOBB_UPD::MakeUpdStruct(abvOBB_UPD *this,animINST *param_1,objOBJ *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  abvOBB_UPD *paVar7;
  abvOBB_UPD *paVar8;
  abvOBB_UPD *paVar9;
  animINST *paVar10;
  float *pfVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float local_20 [3];
  undefined4 uStack_14;
  abvOBB_UPD *local_10;
  float *local_c;
  int local_8;
  
  local_8 = *(int *)(this + 4);
  local_10 = this;
  if (param_2 == (objOBJ *)0x0) {
    animINST::Validate(param_1,0x40);
    paVar10 = param_1 + 0xa0;
    pfVar11 = local_50;
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *pfVar11 = *(float *)paVar10;
      paVar10 = paVar10 + 4;
      pfVar11 = pfVar11 + 1;
    }
  }
  else {
    objValidateLTM(param_2);
    m3dMATR::Invert((m3dMATR *)(param_2 + 0x3c),(m3dMATR *)local_50);
  }
  local_c = local_50;
  paVar7 = this + 0x10;
  pfVar11 = (float *)(local_8 + 8);
  if (m3dSimdType == 0) {
    fVar4 = *pfVar11;
    fVar2 = *(float *)(local_8 + 0xc);
    fVar3 = *(float *)(local_8 + 0x10);
    *(ulonglong *)paVar7 =
         CONCAT44(fVar4 * local_50[1] + local_20[1] + fVar2 * fStack_3c + fVar3 * fStack_2c,
                  fVar4 * local_50[0] + local_20[0] + fVar2 * local_40 + fVar3 * local_30);
    *(float *)(this + 0x18) =
         fVar4 * local_50[2] + local_20[2] + fVar2 * fStack_38 + fVar3 * fStack_28;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar13 = (undefined4)*(undefined8 *)pfVar11;
    uVar16 = CONCAT44(uVar13,uVar13);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)pfVar11 >> 0x20);
    uVar19 = CONCAT44(uVar13,uVar13);
    uVar20 = CONCAT44(*(undefined4 *)(local_8 + 0x10),*(undefined4 *)(local_8 + 0x10));
    uVar14 = PackedFloatingMUL(uVar16,CONCAT44(local_50[1],local_50[0]));
    uVar15 = PackedFloatingMUL(uVar19,CONCAT44(fStack_3c,local_40));
    uVar17 = PackedFloatingMUL(uVar20,CONCAT44(fStack_2c,local_30));
    uVar14 = PackedFloatingADD(uVar14,CONCAT44(local_20[1],local_20[0]));
    uVar18 = PackedFloatingMUL(uVar16,CONCAT44(local_50[3],local_50[2]));
    uVar16 = PackedFloatingADD(uVar15,uVar17);
    uVar15 = PackedFloatingMUL(uVar19,CONCAT44(uStack_34,fStack_38));
    uVar20 = PackedFloatingMUL(uVar20,CONCAT44(uStack_24,fStack_28));
    uVar19 = PackedFloatingADD(uVar18,CONCAT44(uStack_14,local_20[2]));
    uVar16 = PackedFloatingADD(uVar14,uVar16);
    uVar14 = PackedFloatingADD(uVar15,uVar20);
    *(undefined8 *)paVar7 = uVar16;
    uVar16 = PackedFloatingADD(uVar19,uVar14);
    *(int *)(this + 0x18) = (int)uVar16;
    FastExitMediaState();
  }
  else {
    iVar12 = 0;
    paVar9 = paVar7;
    do {
      *(float *)paVar9 = 0.0;
      iVar6 = 0;
      paVar8 = paVar9 + ((int)local_50 - (int)paVar7);
      do {
        pfVar1 = pfVar11 + iVar6;
        fVar4 = *(float *)paVar8;
        iVar6 = iVar6 + 1;
        paVar8 = paVar8 + 0x10;
        *(float *)paVar9 = *pfVar1 * fVar4 + *(float *)paVar9;
      } while (iVar6 < 3);
      iVar6 = iVar12 + iVar6 * 4;
      iVar12 = iVar12 + 1;
      *(float *)paVar9 = local_50[iVar6] + *(float *)paVar9;
      paVar9 = paVar9 + 4;
      this = local_10;
    } while (iVar12 < 3);
  }
  paVar7 = this + 0x1c;
  pfVar11 = (float *)(local_8 + 0x14);
  local_c = local_50;
  if (m3dSimdType == 0) {
    fVar4 = *pfVar11;
    fVar2 = *(float *)(local_8 + 0x18);
    fVar3 = *(float *)(local_8 + 0x1c);
    *(ulonglong *)paVar7 =
         CONCAT44(fVar4 * local_50[1] + fVar2 * fStack_3c + fVar3 * fStack_2c,
                  fVar4 * local_50[0] + fVar2 * local_40 + fVar3 * local_30);
    *(float *)(this + 0x24) = fVar4 * local_50[2] + fVar2 * fStack_38 + fVar3 * fStack_28;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar13 = (undefined4)*(undefined8 *)pfVar11;
    uVar16 = CONCAT44(uVar13,uVar13);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)pfVar11 >> 0x20);
    uVar19 = CONCAT44(uVar13,uVar13);
    uVar20 = CONCAT44(*(undefined4 *)(local_8 + 0x1c),*(undefined4 *)(local_8 + 0x1c));
    uVar14 = PackedFloatingMUL(uVar16,CONCAT44(local_50[1],local_50[0]));
    uVar15 = PackedFloatingMUL(uVar19,CONCAT44(fStack_3c,local_40));
    uVar17 = PackedFloatingMUL(uVar20,CONCAT44(fStack_2c,local_30));
    uVar18 = PackedFloatingMUL(uVar16,CONCAT44(local_50[3],local_50[2]));
    uVar16 = PackedFloatingADD(uVar15,uVar17);
    uVar19 = PackedFloatingMUL(uVar19,CONCAT44(uStack_34,fStack_38));
    uVar15 = PackedFloatingMUL(uVar20,CONCAT44(uStack_24,fStack_28));
    uVar16 = PackedFloatingADD(uVar14,uVar16);
    uVar14 = PackedFloatingADD(uVar19,uVar15);
    *(undefined8 *)paVar7 = uVar16;
    uVar16 = PackedFloatingADD(uVar18,uVar14);
    *(int *)(this + 0x24) = (int)uVar16;
    FastExitMediaState();
  }
  else {
    param_2 = (objOBJ *)0x3;
    iVar12 = (int)local_50 - (int)paVar7;
    do {
      *(float *)paVar7 = 0.0;
      iVar6 = 0;
      paVar9 = paVar7 + iVar12;
      do {
        pfVar1 = pfVar11 + iVar6;
        fVar4 = *(float *)paVar9;
        iVar6 = iVar6 + 1;
        paVar9 = paVar9 + 0x10;
        *(float *)paVar7 = *pfVar1 * fVar4 + *(float *)paVar7;
      } while (iVar6 < 3);
      paVar7 = paVar7 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != (objOBJ *)0x0);
  }
  paVar7 = this + 0x28;
  pfVar11 = (float *)(local_8 + 0x20);
  local_c = local_50;
  if (m3dSimdType == 0) {
    fVar4 = *pfVar11;
    fVar2 = *(float *)(local_8 + 0x24);
    fVar3 = *(float *)(local_8 + 0x28);
    *(ulonglong *)paVar7 =
         CONCAT44(fVar4 * local_50[1] + fVar2 * fStack_3c + fVar3 * fStack_2c,
                  fVar4 * local_50[0] + fVar2 * local_40 + fVar3 * local_30);
    *(float *)(this + 0x30) = fVar4 * local_50[2] + fVar2 * fStack_38 + fVar3 * fStack_28;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar13 = (undefined4)*(undefined8 *)pfVar11;
    uVar16 = CONCAT44(uVar13,uVar13);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)pfVar11 >> 0x20);
    uVar19 = CONCAT44(uVar13,uVar13);
    uVar20 = CONCAT44(*(undefined4 *)(local_8 + 0x28),*(undefined4 *)(local_8 + 0x28));
    uVar14 = PackedFloatingMUL(uVar16,CONCAT44(local_50[1],local_50[0]));
    uVar15 = PackedFloatingMUL(uVar19,CONCAT44(fStack_3c,local_40));
    uVar17 = PackedFloatingMUL(uVar20,CONCAT44(fStack_2c,local_30));
    uVar18 = PackedFloatingMUL(uVar16,CONCAT44(local_50[3],local_50[2]));
    uVar16 = PackedFloatingADD(uVar15,uVar17);
    uVar19 = PackedFloatingMUL(uVar19,CONCAT44(uStack_34,fStack_38));
    uVar15 = PackedFloatingMUL(uVar20,CONCAT44(uStack_24,fStack_28));
    uVar16 = PackedFloatingADD(uVar14,uVar16);
    uVar14 = PackedFloatingADD(uVar19,uVar15);
    *(undefined8 *)paVar7 = uVar16;
    uVar16 = PackedFloatingADD(uVar18,uVar14);
    *(int *)(this + 0x30) = (int)uVar16;
    FastExitMediaState();
  }
  else {
    iVar12 = 3;
    iVar6 = (int)local_50 - (int)paVar7;
    do {
      *(float *)paVar7 = 0.0;
      iVar5 = 0;
      paVar9 = paVar7 + iVar6;
      do {
        pfVar1 = pfVar11 + iVar5;
        fVar4 = *(float *)paVar9;
        iVar5 = iVar5 + 1;
        paVar9 = paVar9 + 0x10;
        *(float *)paVar7 = *pfVar1 * fVar4 + *(float *)paVar7;
      } while (iVar5 < 3);
      paVar7 = paVar7 + 4;
      iVar12 = iVar12 + -1;
      this = local_10;
    } while (iVar12 != 0);
  }
  paVar7 = this + 0x34;
  pfVar11 = (float *)(local_8 + 0x2c);
  local_10 = (abvOBB_UPD *)local_50;
  if (m3dSimdType != 0) {
    if (m3dSimdType != 1) {
      iVar12 = 3;
      iVar6 = (int)local_50 - (int)paVar7;
      do {
        *(float *)paVar7 = 0.0;
        iVar5 = 0;
        paVar9 = paVar7 + iVar6;
        do {
          pfVar1 = pfVar11 + iVar5;
          fVar4 = *(float *)paVar9;
          iVar5 = iVar5 + 1;
          paVar9 = paVar9 + 0x10;
          *(float *)paVar7 = *pfVar1 * fVar4 + *(float *)paVar7;
        } while (iVar5 < 3);
        paVar7 = paVar7 + 4;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      return;
    }
    FastExitMediaState();
    uVar13 = (undefined4)*(undefined8 *)pfVar11;
    uVar16 = CONCAT44(uVar13,uVar13);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)pfVar11 >> 0x20);
    uVar19 = CONCAT44(uVar13,uVar13);
    uVar20 = CONCAT44(*(undefined4 *)(local_8 + 0x34),*(undefined4 *)(local_8 + 0x34));
    uVar14 = PackedFloatingMUL(uVar16,CONCAT44(local_50[1],local_50[0]));
    uVar15 = PackedFloatingMUL(uVar19,CONCAT44(fStack_3c,local_40));
    uVar17 = PackedFloatingMUL(uVar20,CONCAT44(fStack_2c,local_30));
    uVar18 = PackedFloatingMUL(uVar16,CONCAT44(local_50[3],local_50[2]));
    uVar16 = PackedFloatingADD(uVar15,uVar17);
    uVar19 = PackedFloatingMUL(uVar19,CONCAT44(uStack_34,fStack_38));
    uVar15 = PackedFloatingMUL(uVar20,CONCAT44(uStack_24,fStack_28));
    uVar16 = PackedFloatingADD(uVar14,uVar16);
    uVar14 = PackedFloatingADD(uVar19,uVar15);
    *(undefined8 *)paVar7 = uVar16;
    uVar16 = PackedFloatingADD(uVar18,uVar14);
    *(int *)(this + 0x3c) = (int)uVar16;
    FastExitMediaState();
    return;
  }
  fVar4 = *pfVar11;
  fVar2 = *(float *)(local_8 + 0x30);
  fVar3 = *(float *)(local_8 + 0x34);
  *(ulonglong *)paVar7 =
       CONCAT44(fVar4 * local_50[1] + fVar2 * fStack_3c + fVar3 * fStack_2c,
                fVar4 * local_50[0] + fVar2 * local_40 + fVar3 * local_30);
  *(float *)(this + 0x3c) = fVar4 * local_50[2] + fVar2 * fStack_38 + fVar3 * fStack_28;
  return;
}




/* WARNING: Removing unreachable block (ram,0x004ce429) */
/* WARNING: Removing unreachable block (ram,0x004ce187) */
/* WARNING: Removing unreachable block (ram,0x004ce2e0) */
/* WARNING: Removing unreachable block (ram,0x004ce577) */
/* from: engine:Animbvol.cpp
   addr: 004CE030 */

void __thiscall abvOBB_UPD::Update(abvOBB_UPD *this,animINST *param_1,abvBVOL *param_2)

{
  abvOBB_UPD *paVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float local_20 [3];
  undefined4 uStack_14;
  abvOBB_UPD *local_10;
  float *local_c;
  int local_8;
  
  local_8 = *(int *)(this + 4);
  local_10 = this;
  if (*(objOBJ **)(param_2 + 4) == (objOBJ *)0x0) {
    animINST::GetMatrL2W(param_1,(m3dMATR *)local_50);
  }
  else {
    objValidateLTM(*(objOBJ **)(param_2 + 4));
    pfVar10 = (float *)(*(int *)(param_2 + 4) + 0x3c);
    pfVar6 = local_50;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar6 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  local_c = local_50;
  pfVar10 = (float *)(local_8 + 8);
  paVar1 = this + 0x10;
  if (m3dSimdType == 0) {
    fVar5 = *(float *)paVar1;
    fVar3 = *(float *)(this + 0x14);
    fVar4 = *(float *)(this + 0x18);
    *(ulonglong *)pfVar10 =
         CONCAT44(fVar5 * local_50[1] + local_20[1] + fVar3 * fStack_3c + fVar4 * fStack_2c,
                  fVar5 * local_50[0] + local_20[0] + fVar3 * local_40 + fVar4 * local_30);
    *(float *)(local_8 + 0x10) =
         fVar5 * local_50[2] + local_20[2] + fVar3 * fStack_38 + fVar4 * fStack_28;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar12 = (undefined4)*(undefined8 *)paVar1;
    uVar15 = CONCAT44(uVar12,uVar12);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)paVar1 >> 0x20);
    uVar18 = CONCAT44(uVar12,uVar12);
    uVar19 = CONCAT44(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x18));
    uVar13 = PackedFloatingMUL(uVar15,CONCAT44(local_50[1],local_50[0]));
    uVar14 = PackedFloatingMUL(uVar18,CONCAT44(fStack_3c,local_40));
    uVar16 = PackedFloatingMUL(uVar19,CONCAT44(fStack_2c,local_30));
    uVar13 = PackedFloatingADD(uVar13,CONCAT44(local_20[1],local_20[0]));
    uVar17 = PackedFloatingMUL(uVar15,CONCAT44(local_50[3],local_50[2]));
    uVar15 = PackedFloatingADD(uVar14,uVar16);
    uVar14 = PackedFloatingMUL(uVar18,CONCAT44(uStack_34,fStack_38));
    uVar19 = PackedFloatingMUL(uVar19,CONCAT44(uStack_24,fStack_28));
    uVar18 = PackedFloatingADD(uVar17,CONCAT44(uStack_14,local_20[2]));
    uVar15 = PackedFloatingADD(uVar13,uVar15);
    uVar13 = PackedFloatingADD(uVar14,uVar19);
    *(undefined8 *)pfVar10 = uVar15;
    uVar15 = PackedFloatingADD(uVar18,uVar13);
    *(int *)(local_8 + 0x10) = (int)uVar15;
    FastExitMediaState();
  }
  else {
    iVar8 = 0;
    pfVar6 = pfVar10;
    do {
      *pfVar6 = 0.0;
      iVar9 = 0;
      pfVar11 = (float *)(((int)local_50 - (int)pfVar10) + (int)pfVar6);
      do {
        iVar7 = iVar9 * 4;
        fVar5 = *pfVar11;
        iVar9 = iVar9 + 1;
        pfVar11 = pfVar11 + 4;
        *pfVar6 = *(float *)(paVar1 + iVar7) * fVar5 + *pfVar6;
      } while (iVar9 < 3);
      iVar9 = iVar8 + iVar9 * 4;
      iVar8 = iVar8 + 1;
      *pfVar6 = local_50[iVar9] + *pfVar6;
      pfVar6 = pfVar6 + 1;
      this = local_10;
    } while (iVar8 < 3);
  }
  paVar1 = this + 0x1c;
  pfVar10 = (float *)(local_8 + 0x14);
  local_c = local_50;
  if (m3dSimdType == 0) {
    fVar5 = *(float *)paVar1;
    fVar3 = *(float *)(this + 0x20);
    fVar4 = *(float *)(this + 0x24);
    *(ulonglong *)pfVar10 =
         CONCAT44(fVar5 * local_50[1] + fVar3 * fStack_3c + fVar4 * fStack_2c,
                  fVar5 * local_50[0] + fVar3 * local_40 + fVar4 * local_30);
    *(float *)(local_8 + 0x1c) = fVar5 * local_50[2] + fVar3 * fStack_38 + fVar4 * fStack_28;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar12 = (undefined4)*(undefined8 *)paVar1;
    uVar15 = CONCAT44(uVar12,uVar12);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)paVar1 >> 0x20);
    uVar18 = CONCAT44(uVar12,uVar12);
    uVar19 = CONCAT44(*(undefined4 *)(this + 0x24),*(undefined4 *)(this + 0x24));
    uVar13 = PackedFloatingMUL(uVar15,CONCAT44(local_50[1],local_50[0]));
    uVar14 = PackedFloatingMUL(uVar18,CONCAT44(fStack_3c,local_40));
    uVar16 = PackedFloatingMUL(uVar19,CONCAT44(fStack_2c,local_30));
    uVar17 = PackedFloatingMUL(uVar15,CONCAT44(local_50[3],local_50[2]));
    uVar15 = PackedFloatingADD(uVar14,uVar16);
    uVar18 = PackedFloatingMUL(uVar18,CONCAT44(uStack_34,fStack_38));
    uVar14 = PackedFloatingMUL(uVar19,CONCAT44(uStack_24,fStack_28));
    uVar15 = PackedFloatingADD(uVar13,uVar15);
    uVar13 = PackedFloatingADD(uVar18,uVar14);
    *(undefined8 *)pfVar10 = uVar15;
    uVar15 = PackedFloatingADD(uVar17,uVar13);
    *(int *)(local_8 + 0x1c) = (int)uVar15;
    FastExitMediaState();
  }
  else {
    param_2 = (abvBVOL *)0x3;
    iVar8 = (int)local_50 - (int)pfVar10;
    do {
      *pfVar10 = 0.0;
      iVar9 = 0;
      pfVar6 = (float *)(iVar8 + (int)pfVar10);
      do {
        iVar7 = iVar9 * 4;
        fVar5 = *pfVar6;
        iVar9 = iVar9 + 1;
        pfVar6 = pfVar6 + 4;
        *pfVar10 = *(float *)(paVar1 + iVar7) * fVar5 + *pfVar10;
      } while (iVar9 < 3);
      pfVar10 = pfVar10 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != (abvBVOL *)0x0);
  }
  paVar1 = this + 0x28;
  pfVar10 = (float *)(local_8 + 0x20);
  local_c = local_50;
  if (m3dSimdType == 0) {
    fVar5 = *(float *)paVar1;
    fVar3 = *(float *)(this + 0x2c);
    fVar4 = *(float *)(this + 0x30);
    *(ulonglong *)pfVar10 =
         CONCAT44(fVar5 * local_50[1] + fVar3 * fStack_3c + fVar4 * fStack_2c,
                  fVar5 * local_50[0] + fVar3 * local_40 + fVar4 * local_30);
    *(float *)(local_8 + 0x28) = fVar5 * local_50[2] + fVar3 * fStack_38 + fVar4 * fStack_28;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar12 = (undefined4)*(undefined8 *)paVar1;
    uVar15 = CONCAT44(uVar12,uVar12);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)paVar1 >> 0x20);
    uVar18 = CONCAT44(uVar12,uVar12);
    uVar19 = CONCAT44(*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x30));
    uVar13 = PackedFloatingMUL(uVar15,CONCAT44(local_50[1],local_50[0]));
    uVar14 = PackedFloatingMUL(uVar18,CONCAT44(fStack_3c,local_40));
    uVar16 = PackedFloatingMUL(uVar19,CONCAT44(fStack_2c,local_30));
    uVar17 = PackedFloatingMUL(uVar15,CONCAT44(local_50[3],local_50[2]));
    uVar15 = PackedFloatingADD(uVar14,uVar16);
    uVar18 = PackedFloatingMUL(uVar18,CONCAT44(uStack_34,fStack_38));
    uVar14 = PackedFloatingMUL(uVar19,CONCAT44(uStack_24,fStack_28));
    uVar15 = PackedFloatingADD(uVar13,uVar15);
    uVar13 = PackedFloatingADD(uVar18,uVar14);
    *(undefined8 *)pfVar10 = uVar15;
    uVar15 = PackedFloatingADD(uVar17,uVar13);
    *(int *)(local_8 + 0x28) = (int)uVar15;
    FastExitMediaState();
  }
  else {
    iVar8 = 3;
    iVar9 = (int)local_50 - (int)pfVar10;
    do {
      *pfVar10 = 0.0;
      iVar7 = 0;
      pfVar6 = (float *)(iVar9 + (int)pfVar10);
      do {
        iVar2 = iVar7 * 4;
        fVar5 = *pfVar6;
        iVar7 = iVar7 + 1;
        pfVar6 = pfVar6 + 4;
        *pfVar10 = *(float *)(paVar1 + iVar2) * fVar5 + *pfVar10;
      } while (iVar7 < 3);
      pfVar10 = pfVar10 + 1;
      iVar8 = iVar8 + -1;
      this = local_10;
    } while (iVar8 != 0);
  }
  paVar1 = this + 0x34;
  pfVar10 = (float *)(local_8 + 0x2c);
  local_10 = (abvOBB_UPD *)local_50;
  if (m3dSimdType != 0) {
    if (m3dSimdType != 1) {
      iVar8 = 3;
      iVar9 = (int)local_50 - (int)pfVar10;
      do {
        *pfVar10 = 0.0;
        iVar7 = 0;
        pfVar6 = (float *)((int)pfVar10 + iVar9);
        do {
          iVar2 = iVar7 * 4;
          fVar5 = *pfVar6;
          iVar7 = iVar7 + 1;
          pfVar6 = pfVar6 + 4;
          *pfVar10 = *(float *)(paVar1 + iVar2) * fVar5 + *pfVar10;
        } while (iVar7 < 3);
        pfVar10 = pfVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      return;
    }
    FastExitMediaState();
    uVar12 = (undefined4)*(undefined8 *)paVar1;
    uVar15 = CONCAT44(uVar12,uVar12);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)paVar1 >> 0x20);
    uVar18 = CONCAT44(uVar12,uVar12);
    uVar19 = CONCAT44(*(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x3c));
    uVar13 = PackedFloatingMUL(uVar15,CONCAT44(local_50[1],local_50[0]));
    uVar14 = PackedFloatingMUL(uVar18,CONCAT44(fStack_3c,local_40));
    uVar16 = PackedFloatingMUL(uVar19,CONCAT44(fStack_2c,local_30));
    uVar17 = PackedFloatingMUL(uVar15,CONCAT44(local_50[3],local_50[2]));
    uVar15 = PackedFloatingADD(uVar14,uVar16);
    uVar18 = PackedFloatingMUL(uVar18,CONCAT44(uStack_34,fStack_38));
    uVar14 = PackedFloatingMUL(uVar19,CONCAT44(uStack_24,fStack_28));
    uVar15 = PackedFloatingADD(uVar13,uVar15);
    uVar13 = PackedFloatingADD(uVar18,uVar14);
    *(undefined8 *)pfVar10 = uVar15;
    uVar15 = PackedFloatingADD(uVar17,uVar13);
    *(int *)(local_8 + 0x34) = (int)uVar15;
    FastExitMediaState();
    return;
  }
  fVar5 = *(float *)paVar1;
  fVar3 = *(float *)(this + 0x38);
  fVar4 = *(float *)(this + 0x3c);
  *(ulonglong *)pfVar10 =
       CONCAT44(fVar5 * local_50[1] + fVar3 * fStack_3c + fVar4 * fStack_2c,
                fVar5 * local_50[0] + fVar3 * local_40 + fVar4 * local_30);
  *(float *)(local_8 + 0x34) = fVar5 * local_50[2] + fVar3 * fStack_38 + fVar4 * fStack_28;
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CE5D0 */

void __thiscall abvOBB_UPD::Expand(abvOBB_UPD *this,float param_1)

{
  (**(code **)(**(int **)(this + 4) + 0x2c))(param_1);
  (**(code **)(*(int *)(this + 8) + 0x2c))(param_1);
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CE5F0 */

int __thiscall animTPL::AbvInit(animTPL *this,abvBVOL *param_1)

{
  undefined4 *puVar1;
  abvBVOL *this_00;
  
  if ((*(int *)(this + 0xb0) == 0) && (((byte)this[0x84] & 0x40) == 0)) {
    *(undefined4 *)(this + 0xb0) = 1;
    puVar1 = (undefined4 *)operator_new(0x28);
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (abvBVOL *)0x0;
    }
    else {
      *puVar1 = 1;
      this_00 = (abvBVOL *)(puVar1 + 1);
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[5] = 3;
      puVar1[4] = &m3dSPHERE::_vftable_;
      *(undefined ***)this_00 = &abvBVOL::_vftable_;
      puVar1[9] = 0xbf800000;
    }
    *(abvBVOL **)(this + 0xb4) = this_00;
    abvBVOL::Alloc(this_00,1);
    *(undefined4 *)(*(int *)(this + 0xb4) + 4) = *(undefined4 *)(this + 0x88);
  }
  if (param_1 != (abvBVOL *)0x0) {
    *(abvBVOL **)(this + 0xb8) = param_1;
    return 1;
  }
  AbvCalcBVolEnclos(this);
  return 1;
}




/* from: engine:Animbvol.cpp
   addr: 004CE6A0 */

void __thiscall animTPL::AbvTerm(animTPL *this)

{
  if (*(undefined4 **)(this + 0xb4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xb4))(3);
  }
  *(undefined4 *)(this + 0xb4) = 0;
  if ((0 < *(int *)(this + 0x8c)) && (*(undefined4 **)(this + 0xb8) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(this + 0xb8))(3);
  }
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CE6E0 */

int __thiscall animINST::AbvInit(animINST *this)

{
  abvBVOL *paVar1;
  int iVar2;
  int *piVar3;
  objOBJ *poVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  abvBVOL *this_00;
  int local_50;
  float local_4c;
  char local_40 [64];
  
  if (*(int *)(this + 0x10) != 0) {
    if (*(int *)(this + 0x138) != 0) {
      paVar1 = *(abvBVOL **)(this + 0xe0);
      if (paVar1 == (abvBVOL *)0xffffffff) {
        local_4c = 0.0;
      }
      else {
        local_4c = animSEQ::FrameToTime
                             ((animSEQ *)
                              (*(int *)(*(int *)(this + 0x138) + 0x90) + (int)paVar1 * 0x88),
                              *(float *)(this + 0xe4));
      }
      iVar2 = *(int *)(this + 0x138);
      if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x8c))) {
        SetAnimSeq(this,*(int *)(iVar2 + 0x94),0.0);
      }
      Validate(this,6);
      iVar2 = *(int *)(this + 0x138);
      iVar6 = *(int *)(iVar2 + 0xb0);
      *(int *)(this + 0xf4) = iVar6;
      if ((iVar6 == 0) || (piVar3 = (int *)operator_new(iVar6 * 0x24 + 4), piVar3 == (int *)0x0)) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = iVar6;
        piVar3 = piVar3 + 1;
        piVar7 = piVar3;
        if (-1 < iVar6 + -1) {
          do {
            piVar7[1] = 0;
            piVar7[2] = 0;
            m3dSPHERE::m3dSPHERE((m3dSPHERE *)(piVar7 + 3));
            *piVar7 = (int)&abvBVOL::_vftable_;
            piVar7[8] = -0x40800000;
            piVar7 = piVar7 + 9;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      *(int **)(this + 0xf8) = piVar3;
      local_50 = 0;
      this_00 = paVar1;
      if (0 < *(int *)(this + 0xf4)) {
        iVar6 = 0;
        do {
          iVar5 = *(int *)(iVar2 + 0xb4) + iVar6;
          this_00 = (abvBVOL *)(*(int *)(this + 0xf8) + iVar6);
          abvBVOL::Alloc(this_00,*(int *)(*(int *)(*(int *)(iVar5 + 8) + 4) + 4));
          poVar4 = objFindName(*(objOBJ **)(this + 0x10),*(char **)(*(int *)(iVar5 + 4) + 0x18));
          iVar5 = GetStr(this,s_ANIM_PROP,s_cdtRootObj,local_40,0x40);
          if (iVar5 != 0) {
            poVar4 = objFindName(*(objOBJ **)(this + 0x10),local_40);
          }
          *(objOBJ **)(this_00 + 4) = poVar4;
          *(short *)(*(int *)(this + 0x10) + 0x1e) = (short)local_50;
          (**(code **)(**(int **)(this_00 + 8) + 4))(this,*(undefined4 *)(this_00 + 4));
          (**(code **)(**(int **)(*(int *)(this_00 + 8) + 4) + 0x1c))(this_00 + 0xc);
          local_50 = local_50 + 1;
          iVar6 = iVar6 + 0x24;
        } while (local_50 < *(int *)(this + 0xf4));
      }
      if ((*(int *)(this + 0xf4) == 1) && (*(int *)(this_00 + 4) == *(int *)(this + 0x10))) {
        *(undefined4 *)(this_00 + 4) = 0;
        *(uint *)(this + 4) = *(uint *)(this + 4) | 0x80;
      }
      AbvCalcBVolEnclos(this,4,2,-1.0);
      if ((*(int *)(this + 0x138) != 0) && (0 < *(int *)(*(int *)(this + 0x138) + 0x8c))) {
        SetAnimSeq(this,(int)paVar1,local_4c);
      }
      return 1;
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
  }
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  return 1;
}




/* from: engine:Animbvol.cpp
   addr: 004CE930 */

void __thiscall animINST::AbvTermBVolEnclos(animINST *this)

{
  if (((byte)this[8] & 1) != 0) {
    if (*(undefined4 **)(this + 0x100) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x100))(1);
    }
    *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffffffe;
  }
  *(undefined4 *)(this + 0x100) = 0;
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CE960 */

void __thiscall animINST::AbvTerm(animINST *this)

{
  if (*(undefined4 **)(this + 0xfc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xfc))(3);
  }
  *(undefined4 *)(this + 0xfc) = 0;
  if (*(undefined4 **)(this + 0xf8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xf8))(3);
  }
  *(undefined4 *)(this + 0xf8) = 0;
  if (((byte)this[8] & 1) != 0) {
    if (*(undefined4 **)(this + 0x100) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x100))(1);
    }
    *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffffffe;
  }
  *(undefined4 *)(this + 0x100) = 0;
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CE9C0 */

void __thiscall animINST::AbvUpdateBVList(animINST *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0xf4)) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(this + 0xf8) + iVar2;
      (**(code **)(**(int **)(iVar3 + 8) + 8))(this,iVar3);
      (**(code **)(**(int **)(*(int *)(iVar3 + 8) + 4) + 0x1c))(iVar3 + 0xc);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < *(int *)(this + 0xf4));
  }
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CEA10 */

void __thiscall m3dSPHERE::m3dSPHERE(m3dSPHERE *this)

{
  *(undefined4 *)(this + 4) = 3;
  *(undefined ***)this = &_vftable_;
  return;
}




/* from: engine:Animbvol.cpp
   addr: 004CEA30
   addr: 004CEA30
   addr: 004CEA30
   addr: 004CEA30
   addr: 004CEA30
   addr: 004CEA30
   addr: 004CEA30
   addr: 004CEA30 */

void * __thiscall abvPRISM_UPD::_scalar_deleting_destructor_(abvPRISM_UPD *this,uint param_1)

{
  *(undefined ***)this = &abvVOL_UPD::_vftable_;
  if (*(undefined4 **)(this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 4))(1);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:Animbvol.cpp
   addr: 004CEA60
   addr: 004CEA60 */

void * __thiscall abvOBB_UPD::_scalar_deleting_destructor_(abvOBB_UPD *this,uint param_1)

{
  *(undefined ***)(this + 8) = &m3dVOL::_vftable_;
  *(undefined ***)this = &abvVOL_UPD::_vftable_;
  if (*(undefined4 **)(this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 4))(1);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

