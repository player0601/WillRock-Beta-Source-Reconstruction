
/* from: engine:Rend_ini.cpp
   addr: 004DA550 */

void __thiscall _rendSCN_STAT::Collect(_rendSCN_STAT *this,objOBJ *param_1)

{
  int iVar1;
  objOBJ *poVar2;
  ushort *puVar3;
  bool bVar4;
  uint uVar5;
  txmTEXTURE *ptVar6;
  txmTEXTURE *ptVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  objOBJ *local_8;
  
  if (param_1 != (objOBJ *)0x0) {
    poVar2 = *(objOBJ **)(param_1 + 0x38);
    bVar4 = false;
    if (((*(int *)(param_1 + 0x10) == 0) && (poVar2 != (objOBJ *)0x0)) &&
       (*(int *)(poVar2 + 0x30) == *(int *)(poVar2 + 0x34))) {
      *(int *)this = *(int *)this + 1;
    }
    if ((*(int *)(param_1 + 0x28) != 0) &&
       (puVar3 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18), puVar3 != (ushort *)0x0)) {
      uVar5 = (uint)*puVar3;
      iVar9 = 0;
      if (uVar5 != 0) {
        do {
          iVar1 = iVar9 + 1;
          iVar10 = iVar1;
          if (iVar1 < (int)uVar5) {
            do {
              ptVar6 = objOBJ::GetSplitTexRendMtl(param_1,iVar9,0);
              ptVar7 = objOBJ::GetSplitTexRendMtl(param_1,iVar10,0);
              if (((ptVar6 != (txmTEXTURE *)0x0) && (ptVar7 != (txmTEXTURE *)0x0)) &&
                 (iVar8 = stricmp((char *)(ptVar6 + 8),(char *)(ptVar7 + 8)), iVar8 == 0)) {
                *(int *)(this + 4) = *(int *)(this + 4) + 1;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)(uint)**(ushort **)(*(int *)(param_1 + 0x28) + 0x18));
          }
          uVar5 = (uint)**(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
          iVar9 = iVar1;
        } while (iVar1 < (int)uVar5);
      }
      *(uint *)(this + 0x10) =
           *(int *)(this + 0x10) + (uint)**(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
    }
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    local_8 = poVar2;
    if (0 < *(int *)(param_1 + 0x10)) {
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
    }
    for (; (poVar2 != (objOBJ *)0x0 && ((!bVar4 || (local_8 != poVar2))));
        local_8 = *(objOBJ **)(local_8 + 0x30)) {
      Collect(this,local_8);
      bVar4 = true;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Rend_ini.cpp
   addr: 004DA690 */

rendDRIVER * __thiscall rendDRIVER::rendDRIVER(rendDRIVER *this)

{
  rendDRIVER *prVar1;
  int iVar2;
  
  iVar2 = 2;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  prVar1 = this + 0x90;
  *(undefined4 *)(this + 0x40) = _m3dVZero;
  *(undefined4 *)(this + 0x44) = DAT_00963740;
  *(undefined4 *)(this + 0x48) = DAT_00963744;
  *(undefined4 *)(this + 0x4c) = _m3dVZero;
  *(undefined4 *)(this + 0x50) = DAT_00963740;
  *(undefined4 *)(this + 0x54) = DAT_00963744;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 1;
  do {
    rnsBUF_OPAQUE::rnsBUF_OPAQUE((rnsBUF_OPAQUE *)prVar1);
    prVar1 = (rendDRIVER *)((rnsBUF_OPAQUE *)prVar1 + 0x324);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  prVar1 = this + 0x6d8;
  iVar2 = 2;
  do {
    rnsBUF_TRANSP::rnsBUF_TRANSP((rnsBUF_TRANSP *)prVar1);
    prVar1 = (rendDRIVER *)((rnsBUF_TRANSP *)prVar1 + 0x40);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x1e04) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 8) = 1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  *(undefined4 *)(this + 0x58) = 0x437f0000;
  *(undefined4 *)(this + 0x5c) = 0x437f0000;
  *(undefined4 *)(this + 0x60) = 0x437f0000;
  *(undefined4 *)(this + 100) = 0x437f0000;
  *(undefined4 *)(this + 0x68) = 0x437f0000;
  *(undefined4 *)(this + 0x6c) = 0x437f0000;
  *(undefined4 *)(this + 0x70) = 0x437f0000;
  *(undefined4 *)(this + 0x74) = 0x437f0000;
  iVar2 = objOBJ::RegisterUsrData(0x524e4443);
  *(int *)(this + 0x78) = iVar2;
  return this;
}




/* from: engine:Rend_ini.cpp
   addr: 004DA790
   addr: 004DA790 */

void * __thiscall rendDRIVER::_scalar_deleting_destructor_(rendDRIVER *this,uint param_1)

{
  rendDRIVER *prVar1;
  int iVar2;
  
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x78) = 0xffffffff;
  objOBJ::UnregisterUsrData(0x524e4443);
  prVar1 = this + 0x758;
  iVar2 = 2;
  do {
    prVar1 = prVar1 + -0x40;
    _vector_destructor_iterator_(prVar1,0x10,4,rnsBUF_TRANSP_TYPE::~rnsBUF_TRANSP_TYPE);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  prVar1 = this + 0x6d8;
  iVar2 = 2;
  do {
    prVar1 = prVar1 + -0x324;
    _vector_destructor_iterator_(prVar1,0x14,0x28,rnsSIGNATURE::~rnsSIGNATURE);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:Rend_ini.cpp
   addr: 004DA810 */

void __thiscall rendDRIVER::~rendDRIVER(rendDRIVER *this)

{
  rendDRIVER *prVar1;
  int iVar2;
  
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x78) = 0xffffffff;
  objOBJ::UnregisterUsrData(0x524e4443);
  prVar1 = this + 0x758;
  iVar2 = 2;
  do {
    prVar1 = prVar1 + -0x40;
    _vector_destructor_iterator_(prVar1,0x10,4,rnsBUF_TRANSP_TYPE::~rnsBUF_TRANSP_TYPE);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  prVar1 = this + 0x6d8;
  iVar2 = 2;
  do {
    prVar1 = prVar1 + -0x324;
    _vector_destructor_iterator_(prVar1,0x14,0x28,rnsSIGNATURE::~rnsSIGNATURE);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DA880 */

int __thiscall rendDRIVER::InitHW(rendDRIVER *this,scnSCENE *param_1)

{
  animINST *paVar1;
  
  (**(code **)(*(int *)this + 0x88))(param_1);
  if ((param_1 != (scnSCENE *)0x0) &&
     (paVar1 = scnSCENE::FindNextInst(param_1,(animINST *)0x0), paVar1 != (animINST *)0x0)) {
    do {
      rnsMNG::UnLinkInst((rnsMNG *)(this + 0x8c),paVar1);
      paVar1 = scnSCENE::FindNextInst(param_1,paVar1);
    } while (paVar1 != (animINST *)0x0);
  }
  rnsMNG::InitLevel((rnsMNG *)(this + 0x8c),param_1);
  return 1;
}




/* from: engine:Rend_ini.cpp
   addr: 004DA8E0 */

void __thiscall
rendDRIVER::BeginCamera(rendDRIVER *this,camCAMERA *param_1,float param_2,float param_3)

{
  *(camCAMERA **)(this + 0x84) = param_1;
  camCAMERA::SetNearPlane(param_1,param_2);
  *(float *)(param_1 + 0x84) = param_3;
  camCAMERA::CalcPOVQual(param_1);
  if (((byte)this[4] & 0x10) != 0) {
    camCAMERA::TransformPoint(param_1,(m3dV *)(this + 0xc),(m3dV *)(this + 0x24));
    camCAMERA::TransformVector(param_1,(m3dV *)(this + 0x18),(m3dV *)(this + 0x30));
  }
  (**(code **)(*(int *)this + 0x28))();
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DA940 */

void __thiscall rendDRIVER::ConfigureClipPlane(rendDRIVER *this,m3dV *param_1,m3dV *param_2)

{
  *(undefined4 *)(this + 0xc) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)param_2;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_2 + 8);
  if (*(camCAMERA **)(this + 0x84) != (camCAMERA *)0x0) {
    camCAMERA::TransformPoint
              (*(camCAMERA **)(this + 0x84),(m3dV *)(this + 0xc),(m3dV *)(this + 0x24));
    camCAMERA::TransformVector
              (*(camCAMERA **)(this + 0x84),(m3dV *)(this + 0x18),(m3dV *)(this + 0x30));
  }
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DA9B0 */

void __thiscall rendDRIVER::EnableClipPlane(rendDRIVER *this,int param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
    return;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffef;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Rend_ini.cpp
   addr: 004DA9E0 */

void __thiscall rendDRIVER::InitLevel(rendDRIVER *this,scnSCENE *param_1)

{
  int iVar1;
  scnSCENE *psVar2;
  int iVar3;
  float *pfVar4;
  rendDRIVER *prVar5;
  float *pfStack_60;
  float local_3c [4];
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  scnSCENE *local_8;
  undefined4 local_4;
  
  local_28 = DAT_00963740;
  local_3c[2] = DAT_00963740 + ___real_42480000;
  local_3c[0] = 0.0;
  local_2c = _m3dVZero;
  local_24 = DAT_00963744;
  local_10 = 0;
  local_c = 0;
  local_8 = (scnSCENE *)0x0;
  local_4 = 0;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_3c[1] = (float)_m3dVZero;
  iVar1 = *(int *)this;
  local_3c[3] = (float)DAT_00963744;
  pfVar4 = local_3c;
  prVar5 = this + 0x3c;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(float *)prVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    prVar5 = prVar5 + 4;
  }
  pfStack_60 = local_3c;
  (**(code **)(iVar1 + 0x6c))();
  (**(code **)(*(int *)this + 0x70))(1);
  (**(code **)(*(int *)this + 0x70))(1);
  psVar2 = local_8;
  (**(code **)(*(int *)this + 0x88))(local_8);
  rnsMNG::InitLevel((rnsMNG *)(this + 0x8c),psVar2);
  pfStack_60 = (float *)0x0;
  _rendSCN_STAT::Collect((_rendSCN_STAT *)&pfStack_60,*(objOBJ **)(psVar2 + 0x44));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Rend_ini.cpp
   addr: 004DAAF0 */

void __thiscall rendDRIVER::InstLoadNotify(rendDRIVER *this,animINST *param_1)

{
  animINST *this_00;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  rendDRIVER *prVar4;
  undefined4 uStack_4c;
  float local_48 [3];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
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
  
  this_00 = param_1;
  if (param_1 != (animINST *)0x0) {
    local_38 = _m3dVZero;
    local_2c = _m3dVZero;
    local_34 = DAT_00963740;
    local_28 = DAT_00963740;
    local_3c = 0;
    local_30 = DAT_00963744;
    local_24 = DAT_00963744;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    param_1 = (animINST *)0x0;
    iVar1 = animINST::GetInt(this_00,s_LIGHTING,s_isSource,(int *)&param_1);
    if ((iVar1 != 0) && (param_1 != (animINST *)0x0)) {
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      animINST::GetPos(this_00,(m3dV *)&local_38);
      iVar1 = *(int *)this;
      puVar3 = &local_3c;
      prVar4 = this + 0x3c;
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)prVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        prVar4 = prVar4 + 4;
      }
      (**(code **)(iVar1 + 0x6c))(&local_3c);
      (**(code **)(*(int *)this + 0x70))(1);
    }
    iVar1 = animINST::GetFloat(this_00,s_LIGHTING,s_kD,local_48);
    if (iVar1 != 0) {
      uStack_4c = 0x3ecccccd;
      local_48[1] = 0.5;
      if (*(objOBJ **)(this_00 + 0x10) != (objOBJ *)0x0) {
        objOBJ::SetMtlCoeff(*(objOBJ **)(this_00 + 0x10),(mtlCOEFF *)&uStack_4c);
        objOBJ::SetStateRendYes(*(objOBJ **)(this_00 + 0x10),0x800);
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Rend_ini.cpp
   addr: 004DAC20 */

void __thiscall rendDRIVER::ObjLoadNotify(rendDRIVER *this,objOBJ *param_1)

{
  int iVar1;
  float local_10;
  float local_c [3];
  
  if (*(psSHEET **)(param_1 + 0xf0) != (psSHEET *)0x0) {
    local_10 = 0.5;
    psSHEET::GetFloat(*(psSHEET **)(param_1 + 0xf0),s_LIGHTING,s_kA,&local_10);
    iVar1 = psSHEET::GetFloat(*(psSHEET **)(param_1 + 0xf0),s_LIGHTING,s_kD,local_c);
    if (iVar1 != 0) {
      if (___real_3d4ccccd <= local_c[0]) {
        objOBJ::SetMtlCoeff(param_1,(mtlCOEFF *)&local_10);
        objOBJ::SetStateRendYes(param_1,0x800);
      }
      else {
        objOBJ::SetStateRendNo(param_1,0x800);
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    (**(code **)(*(int *)this + 0x80))(param_1);
  }
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DACC0 */

void __thiscall rendDRIVER::ObjDestroyNotify(rendDRIVER *this,objOBJ *param_1)

{
  if (param_1 != (objOBJ *)0x0) {
    rnsMNG::ObjDestroyNotify((rnsMNG *)(this + 0x8c),param_1);
    return;
  }
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DACE0 */

int __thiscall rendDRIVER::BeginFrame(rendDRIVER *this,scnSCENE *param_1)

{
  *(scnSCENE **)(this + 0x88) = param_1;
  *(undefined4 *)(this + 0x1e04) = *(undefined4 *)(param_1 + 0x6c);
  return 1;
}




/* from: engine:Rend_ini.cpp
   addr: 004DAD00 */

void __thiscall rendDRIVER::EndFrame(rendDRIVER *this)

{
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x1e04) = 0;
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DAD20 */

void __thiscall rendDRIVER::InvalidatePrepCFG(rendDRIVER *this,scnSCENE *param_1)

{
  animINST *paVar1;
  
  if (param_1 != (scnSCENE *)0x0) {
    (**(code **)(*(int *)this + 0x84))(*(undefined4 *)(param_1 + 0x44));
    for (paVar1 = scnSCENE::FindNextInst(param_1,(animINST *)0x0); paVar1 != (animINST *)0x0;
        paVar1 = scnSCENE::FindNextInst(param_1,paVar1)) {
      (**(code **)(*(int *)this + 0x84))(*(undefined4 *)(paVar1 + 0x10));
    }
  }
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DAD70 */

void __thiscall rendDRIVER::InvalidatePrepCFG(rendDRIVER *this,objOBJ *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != (objOBJ *)0x0) {
    iVar1 = *(int *)(param_1 + 0x38);
    bVar2 = false;
    objOBJ::InvalidateRendCFG(param_1);
    rnsMNG::UnLinkObj((rnsMNG *)(this + 0x8c),param_1);
    for (iVar3 = iVar1; (iVar1 != 0 && ((!bVar2 || (iVar3 != iVar1))));
        iVar3 = *(int *)(iVar3 + 0x30)) {
      (**(code **)(*(int *)this + 0x84))(iVar3);
      bVar2 = true;
    }
  }
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DADF0 */

void __thiscall rendDRIVER::ValidatePrepCFG(rendDRIVER *this,objOBJ *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xe8) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xe8) + *(int *)(this + 0x78) * 4), iVar1 != 0)) {
    iVar2 = 0;
    if (**(short **)(*(int *)(param_1 + 0x28) + 0x18) != 0) {
      do {
        (**(code **)(*(int *)this + 0x8c))
                  (param_1,iVar2,*(int *)(iVar1 + 8) * iVar2 + *(int *)(iVar1 + 0xc));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)**(ushort **)(*(int *)(param_1 + 0x28) + 0x18));
    }
    objOBJ::SetStateRendYes(param_1,0x20000000);
  }
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DAE60 */

void __thiscall
rendDRIVER::ValidatePrepCFG(rendDRIVER *this,objOBJ *param_1,int param_2,rendCFG_PREP *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)param_3 + 4))(param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 0xdc) != 0) {
    rnsMNG::LinkObjSplit((rnsMNG *)(this + 0x8c),param_1,(int)param_1,param_3);
  }
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DAEB0 */

void __thiscall rendMTL_TBL::UseNMtl(rendMTL_TBL *this,int param_1)

{
  uint uVar1;
  int iVar2;
  rendMTL_TBL *prVar3;
  rendMTL_TBL *prVar4;
  
  if (param_1 < *(int *)(this + 0xb4)) {
    prVar3 = this + param_1 * 0x24;
    prVar4 = this;
    for (uVar1 = (*(int *)(this + 0xb4) - param_1) * 9 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1)
    {
      *(undefined4 *)prVar4 = *(undefined4 *)prVar3;
      prVar3 = prVar3 + 4;
      prVar4 = prVar4 + 4;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *prVar4 = *prVar3;
      prVar3 = prVar3 + 1;
      prVar4 = prVar4 + 1;
    }
    *(int *)(this + 0xb4) = *(int *)(this + 0xb4) - param_1;
    return;
  }
  *(undefined4 *)(this + 0xb4) = 0;
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DAF10 */

void __thiscall rendCFG::InitMtl1(rendCFG *this,txmTEXTURE *param_1)

{
  *(undefined4 *)(this + 0xb4) = 1;
  *(txmTEXTURE **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DAF30 */

rendMTL * __thiscall rendCFG::FindMtlRendMtl(rendCFG *this,int param_1)

{
  rendCFG *prVar1;
  int iVar2;
  
  iVar2 = 0;
  prVar1 = this + 0xb4;
  if (0 < *(int *)prVar1) {
    do {
      if (*(int *)((rendMTL *)this + 8) == param_1) {
        return (rendMTL *)this;
      }
      iVar2 = iVar2 + 1;
      this = (rendCFG *)((rendMTL *)this + 0x24);
    } while (iVar2 < *(int *)prVar1);
  }
  return (rendMTL *)0x0;
}




/* from: engine:Rend_ini.cpp
   addr: 004DAF70 */

int __thiscall rendOBJ_UD_PREP_CFG::Init(rendOBJ_UD_PREP_CFG *this,objOBJ *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (**(short **)(*(int *)(param_1 + 0x28) + 0x18) != 0) {
    do {
      (*(code *)**(undefined4 **)(*(int *)(this + 8) * iVar1 + *(int *)(this + 0xc)))(param_1,iVar1)
      ;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)**(ushort **)(*(int *)(param_1 + 0x28) + 0x18));
  }
  return 1;
}




/* from: engine:Rend_ini.cpp
   addr: 004DAFC0 */

int __thiscall rendCFG_PREP::Init(rendCFG_PREP *this,objOBJ *param_1,int param_2)

{
  *(objOBJ **)(this + 0xd4) = param_1;
  *(int *)(this + 0xd8) = param_2 * 0x70 + *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 2);
  return 1;
}




/* from: engine:Rend_ini.cpp
   addr: 004DB010 */

void __thiscall rnsBUF_TRANSP_TYPE::~rnsBUF_TRANSP_TYPE(rnsBUF_TRANSP_TYPE *this)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 4));
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DB030
   addr: 004DB030 */

void * __thiscall
rnsBUF_TRANSP_TYPE::_vector_deleting_destructor_(rnsBUF_TRANSP_TYPE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 4));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:Rend_ini.cpp
   addr: 004DB060 */

void __thiscall rnsBUF_OPAQUE::rnsBUF_OPAQUE(rnsBUF_OPAQUE *this)

{
  rnsBUF_OPAQUE *prVar1;
  int iVar2;
  
  iVar2 = 0x28;
  prVar1 = this + 8;
  do {
    *(undefined4 *)(prVar1 + -4) = 0;
    *(undefined4 *)prVar1 = 0;
    *(undefined4 *)(prVar1 + 4) = 0;
    *(undefined4 *)(prVar1 + 8) = 0;
    *(undefined ***)(prVar1 + -8) = &rnsSIGNATURE::_vftable_;
    prVar1 = prVar1 + 0x14;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 800) = 0;
  return;
}




/* from: engine:Rend_ini.cpp
   addr: 004DB090 */

void __thiscall rnsBUF_TRANSP::rnsBUF_TRANSP(rnsBUF_TRANSP *this)

{
  rnsBUF_TRANSP *prVar1;
  int iVar2;
  
  iVar2 = 4;
  prVar1 = this + 8;
  do {
    *(undefined4 *)(prVar1 + -4) = 0;
    *(undefined4 *)prVar1 = 0;
    *(undefined4 *)(prVar1 + 4) = 0;
    *(undefined ***)(prVar1 + -8) = &rnsBUF_TRANSP_TYPE::_vftable_;
    prVar1 = prVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

