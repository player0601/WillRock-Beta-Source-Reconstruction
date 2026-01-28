
/* from: engine:pte_envmap.cpp
   addr: 004D3D30 */

int __fastcall pteEnvMapInit(void)

{
  int iVar1;
  
  DAT_00934498 = txmMANAGER::Add(txmManager,s_emap_specular,0x40000,1);
  if (DAT_00934498 == (txmTEXTURE *)0x0) {
    return 0;
  }
  DAT_00934494 = txmMANAGER::Add(txmManager,s_emap_chrome,0x40000,1);
  if (DAT_00934494 == (txmTEXTURE *)0x0) {
    return 0;
  }
  DAT_009344a0 = txmMANAGER::Add(txmManager,s_emap_panel,0x40000,1);
  if (DAT_009344a0 == (txmTEXTURE *)0x0) {
    return 0;
  }
  DAT_00934490 = txmMANAGER::Add(txmManager,s_emap_water,0x40000,1);
  if (DAT_00934490 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = pteMANAGER::RegisterClass(pteManager,s_emap_chrome,0x1e,pteEMAP_CHROME::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pteMANAGER::RegisterClass(pteManager,s_emap_specular,0x28,pteEMAP_SPECULAR::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pteMANAGER::RegisterClass(pteManager,s_emap_envir,0x1e,pteEMAP_ENVIR::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pteMANAGER::RegisterClass(pteManager,s_emap_panel,0x1e,pteEMAP_PANEL::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pteMANAGER::RegisterClass(pteManager,s_emap_reflect,0x23,pteEMAP_REFLECT::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pteMANAGER::RegisterClass(pteManager,s_emap_refract,0x1e,pteEMAP_REFRACT::Create);
  return (uint)(iVar1 != 0);
}




/* from: engine:pte_envmap.cpp
   addr: 004D3E60 */

pteEMAP * __thiscall pteEMAP::pteEMAP(pteEMAP *this)

{
  pteSHADER::pteSHADER((pteSHADER *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x10c) = 0x3f800000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D3E80 */

void __thiscall pteEMAP::Init(pteEMAP *this)

{
  pteEMAP *ppVar1;
  char cVar2;
  objOBJ *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_4c;
  char acStack_40 [64];
  
  pteSHADER::Init((pteSHADER *)this);
  this_00 = *(objOBJ **)(this + 100);
  if ((this_00 != (objOBJ *)0x0) && (*(int *)(*(int *)(this_00 + 0x28) + 0x48) == 0)) {
    objOBJ::AllocVertNormalList(this_00,*(int *)(this_00 + 0x14));
    if (*(int *)(*(objOBJ **)(this + 100) + 0xbc) == 0) {
      objOBJ::CalcVertNormals(*(objOBJ **)(this + 100));
    }
  }
  if (*(int *)(this + 0x60) != 0) {
    objOBJ::AllocVertNormalList(*(objOBJ **)(*(int *)(this + 0x60) + 0x10));
  }
  pcVar6 = (char *)(**(code **)(*(int *)this + 0x68))();
  pcVar8 = acStack_40;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar8 = cVar2;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  ppVar1 = this + 0x6c;
  uVar3 = *(undefined4 *)ppVar1;
  uVar4 = *(undefined4 *)(this + 0x70);
  uVar5 = *(undefined4 *)(this + 0x74);
  pteSHADER::ReadStr((pteSHADER *)this,s_blendType,acStack_40,0x40);
  pteSHADER::ReadFloat((pteSHADER *)this,s_blendCoeff,(float *)(this + 0x10c));
  iVar7 = stricmp(acStack_40,s_add);
  if (iVar7 == 0) {
    uVar9 = 0x6b;
  }
  else {
    iVar7 = stricmp(acStack_40,s_blend);
    if (iVar7 == 0) {
      (**(code **)(*(int *)this + 0x1c))(0xab);
      *(undefined4 *)ppVar1 = uVar3;
      *(undefined4 *)(this + 0x70) = uVar4;
      *(undefined4 *)(this + 0x74) = uStack_4c;
      *(undefined4 *)(this + 0x78) = uVar5;
      return;
    }
    iVar7 = stricmp(acStack_40,s_mult);
    if (iVar7 != 0) {
      stricmp(acStack_40,s_decal);
      if (*(objOBJ **)(this + 100) != (objOBJ *)0x0) {
        objOBJ::SetStateRendYes(*(objOBJ **)(this + 100),0x20000);
        (**(code **)(*(int *)this + 0x1c))(3);
        return;
      }
      objOBJ::SetStateRendYes(*(objOBJ **)(*(int *)(this + 0x60) + 0x10),0x20000);
      (**(code **)(*(int *)this + 0x1c))(3);
      return;
    }
    uVar9 = 299;
  }
  (**(code **)(*(int *)this + 0x1c))(uVar9);
  *(undefined4 *)ppVar1 = uVar3;
  *(undefined4 *)(this + 0x70) = uVar4;
  *(undefined4 *)(this + 0x74) = uStack_4c;
  *(undefined4 *)(this + 0x78) = uVar5;
  return;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4010 */

int __thiscall pteEMAP::IsShadeObj(pteEMAP *this,objOBJ *param_1)

{
  if ((param_1 != *(objOBJ **)(this + 100)) &&
     ((*(int *)(param_1 + 0xbc) == 0 || (*(int *)(param_1 + 0xbc) != *(int *)(this + 0x60))))) {
    return 0;
  }
  return 1;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4040 */

void __thiscall pteEMAP::GetMatrL2W(pteEMAP *this,m3dMATR *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_c [12];
  
  if (*(animINST **)(this + 0x60) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(this + 0x60),4);
  }
  iVar2 = *(int *)(this + 100);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xbc) != 0)) {
    puVar3 = (undefined4 *)(iVar2 + 0x3c);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 4;
    }
    return;
  }
  if (*(int *)(this + 0x60) != 0) {
    puVar3 = (undefined4 *)(*(int *)(this + 0x60) + 0x60);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 4;
    }
    return;
  }
  m3dMATR::Identity(param_1);
  (**(code **)(*(int *)(*(int *)(this + 100) + 0xc0) + 0x24))(local_c);
  m3dMATR::Translate(param_1,(m3dV *)&stack0xfffffff0,0);
  return;
}




/* from: engine:pte_envmap.cpp
   addr: 004D40D0 */

void __thiscall pteEMAP::PrepareFrame(pteEMAP *this,scnSCENE *param_1,camCAMERA *param_2)

{
  animINST *paVar1;
  int iVar2;
  
  paVar1 = *(animINST **)(this + 0x60);
  if ((paVar1 != (animINST *)0x0) && (((byte)paVar1[4] & 3) == 0)) {
    animINST::Validate(paVar1,0x400);
  }
  iVar2 = *(int *)(this + 100);
  if ((((iVar2 != 0) && (paVar1 = *(animINST **)(iVar2 + 0xbc), paVar1 != (animINST *)0x0)) &&
      (((*(byte *)(iVar2 + 8) & 0x3f) == 0 || ((*(uint *)(iVar2 + 0x24) & 0x20000) != 0)))) &&
     ((((byte)paVar1[4] & 1) == 0 && ((*(byte *)(*(int *)(this + 0x60) + 4) & 2) == 0)))) {
    animINST::Validate(paVar1,0x400);
  }
  (**(code **)(*(int *)this + 100))((m3dMATR *)(this + 0x8c));
  m3dMATR::Invert((m3dMATR *)(this + 0x8c),(m3dMATR *)(this + 0xcc));
  return;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4150 */

pteSHADER * __fastcall pteEMAP_CHROME::Create(animINST *param_1,objOBJ *param_2)

{
  pteSHADER *this;
  
  this = (pteSHADER *)operator_new(0x110);
  if (this != (pteSHADER *)0x0) {
    pteSHADER::pteSHADER(this);
    *(undefined4 *)(this + 0x10c) = 0x3f800000;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x68) = DAT_00934494;
    return this;
  }
  return (pteSHADER *)0x0;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4190 */

pteSHADER * __fastcall pteEMAP_SPECULAR::Create(animINST *param_1,objOBJ *param_2)

{
  pteSHADER *this;
  
  this = (pteSHADER *)operator_new(0x120);
  if (this != (pteSHADER *)0x0) {
    pteSHADER::pteSHADER(this);
    *(undefined4 *)(this + 0x10c) = 0x3f800000;
    *(undefined ***)this = &pteEMAP_SPHERE::_vftable_;
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x68) = DAT_00934498;
    return this;
  }
  return (pteSHADER *)0x0;
}




/* from: engine:pte_envmap.cpp
   addr: 004D41F0 */

pteSHADER * __fastcall pteEMAP_ENVIR::Create(animINST *param_1,objOBJ *param_2)

{
  pteSHADER *this;
  
  this = (pteSHADER *)operator_new(0x110);
  if (this != (pteSHADER *)0x0) {
    pteSHADER::pteSHADER(this);
    *(undefined4 *)(this + 0x10c) = 0x3f800000;
    *(undefined ***)this = &pteEMAP_SPHERE::_vftable_;
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (pteSHADER *)0x0;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4240 */

pteSHADER * __fastcall pteEMAP_PANEL::Create(animINST *param_1,objOBJ *param_2)

{
  undefined4 uVar1;
  pteSHADER *this;
  
  this = (pteSHADER *)operator_new(0x11c);
  if (this != (pteSHADER *)0x0) {
    pteSHADER::pteSHADER(this);
    *(undefined4 *)(this + 0x10c) = 0x3f800000;
    *(undefined ***)this = &_vftable_;
    uVar1 = DAT_009344a0;
    *(undefined4 *)(this + 0x10c) = 0x3d23d70a;
    *(undefined4 *)(this + 0x68) = uVar1;
    return this;
  }
  return (pteSHADER *)0x0;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4290 */

pteSHADER * __fastcall pteEMAP_REFLECT::Create(animINST *param_1,objOBJ *param_2)

{
  pteSHADER *this;
  
  this = (pteSHADER *)operator_new(0x128);
  if (this != (pteSHADER *)0x0) {
    pteSHADER::pteSHADER(this);
    *(undefined4 *)(this + 0x114) = 3;
    *(undefined ***)(this + 0x110) = &m3dSPHERE::_vftable_;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x10c) = 0x3e19999a;
    *(undefined4 *)(this + 0x68) = DAT_00934490;
    return this;
  }
  return (pteSHADER *)0x0;
}




/* from: engine:pte_envmap.cpp
   addr: 004D42E0 */

pteSHADER * __fastcall pteEMAP_REFRACT::Create(animINST *param_1,objOBJ *param_2)

{
  pteSHADER *this;
  
  if (param_1 == (animINST *)0x0) {
    return (pteSHADER *)0x0;
  }
  this = (pteSHADER *)operator_new(0x1a4);
  if (this != (pteSHADER *)0x0) {
    pteSHADER::pteSHADER(this);
    *(undefined ***)this = &pteEMAP::_vftable_;
    *(undefined4 *)(this + 0x10c) = 0x3f800000;
    *(undefined4 *)(this + 0x118) = 1;
    *(undefined ***)(this + 0x114) = &m3dBOX::_vftable_;
    cdtCOLL::cdtCOLL((cdtCOLL *)(this + 0x13c));
    *(undefined ***)(this + 0x13c) = &cdtCOLL_OBJ::_vftable_;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x10c) = 0x3f000000;
    return this;
  }
  return (pteSHADER *)0x0;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4360 */

pteEMAP_CHROME * __thiscall pteEMAP_CHROME::pteEMAP_CHROME(pteEMAP_CHROME *this)

{
  pteSHADER::pteSHADER((pteSHADER *)this);
  *(undefined4 *)(this + 0x10c) = 0x3f800000;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x68) = DAT_00934494;
  return this;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4390
   addr: 004D4390 */

void * __thiscall
pteEMAP_SPECULAR::_scalar_deleting_destructor_(pteEMAP_SPECULAR *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x11c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x11c))(1);
    *(undefined4 *)(this + 0x11c) = 0;
  }
  pteSHADER::~pteSHADER((pteSHADER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D43F0 */

void __thiscall pteEMAP_SPECULAR::Init(pteEMAP_SPECULAR *this)

{
  undefined4 uVar1;
  animINST *this_00;
  int iVar2;
  animCTRL_3D_FOLLOW *this_01;
  int local_10 [4];
  
  pteEMAP::Init((pteEMAP *)this);
  this_00 = scnSCENE::FindNextInst(*(scnSCENE **)(pteManager + 0x1793c),(animINST *)0x0);
  do {
    if (this_00 == (animINST *)0x0) {
LAB_004d4454:
      apLogErr(s_Specular_source_not_found_in_sce);
      uVar1 = DAT_00963744;
      if (this_00 == (animINST *)0x0) {
        *(undefined4 *)(this + 0x110) = _m3dVZero;
        *(undefined4 *)(this + 0x114) = 0x42c80000;
        *(undefined4 *)(this + 0x118) = uVar1;
        *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x10;
        return;
      }
LAB_004d4469:
      this_01 = (animCTRL_3D_FOLLOW *)operator_new(0x2c);
      if (this_01 != (animCTRL_3D_FOLLOW *)0x0) {
        *(undefined4 *)(this_01 + 4) = 0;
        *(undefined4 *)(this_01 + 8) = 0;
        *(undefined4 *)(this_01 + 0xc) = 0x3f800000;
        *(undefined4 *)(this_01 + 0x10) = 0x3f800000;
        *(undefined4 *)(this_01 + 0x14) = 0;
        *(undefined ***)this_01 = &m3dCTRL_TIME::_vftable_;
        *(uint *)(this_01 + 4) = *(uint *)(this_01 + 4) | 1;
        *(undefined4 *)(this_01 + 0x18) = _m3dVZero;
        *(undefined4 *)(this_01 + 0x1c) = DAT_00963740;
        uVar1 = DAT_00963744;
        *(undefined4 *)(this_01 + 0x24) = 0;
        *(undefined4 *)(this_01 + 0x28) = 0;
        *(undefined4 *)(this_01 + 0x20) = uVar1;
        *(undefined ***)this_01 = &animCTRL_3D_FOLLOW::_vftable_;
        *(animCTRL_3D_FOLLOW **)(this + 0x11c) = this_01;
        animCTRL_3D_FOLLOW::SetFollow(this_01,this_00,(objOBJ *)0x0);
        *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x10;
        return;
      }
      *(undefined4 *)(this + 0x11c) = 0;
      animCTRL_3D_FOLLOW::SetFollow((animCTRL_3D_FOLLOW *)0x0,this_00,(objOBJ *)0x0);
      *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x10;
      return;
    }
    iVar2 = animINST::GetBool(this_00,s_SPECULAR,s_isSource,local_10);
    if ((iVar2 != 0) && (local_10[0] != 0)) {
      if (this_00 != (animINST *)0x0) goto LAB_004d4469;
      goto LAB_004d4454;
    }
    this_00 = scnSCENE::FindNextInst(*(scnSCENE **)(pteManager + 0x1793c),this_00);
  } while( true );
}




/* from: engine:pte_envmap.cpp
   addr: 004D4540 */

void __thiscall
pteEMAP_SPECULAR::PrepareFrame(pteEMAP_SPECULAR *this,scnSCENE *param_1,camCAMERA *param_2)

{
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int **)(this + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x11c) + 0xc))(&local_c);
    *(undefined4 *)(this + 0x110) = local_c;
    *(undefined4 *)(this + 0x114) = uStack_8;
    *(undefined4 *)(this + 0x118) = uStack_4;
  }
  pteEMAP::PrepareFrame((pteEMAP *)this,param_1,param_2);
  return;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4590 */

void __thiscall pteEMAP_SPECULAR::GetMatrL2W(pteEMAP_SPECULAR *this,m3dMATR *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  m3dMATR *pmVar4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  m3dV local_c [12];
  
  if (*(animINST **)(this + 0x60) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(this + 0x60),4);
  }
  iVar2 = *(int *)(this + 100);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xbc) == 0)) {
    if (*(int *)(this + 0x60) == 0) {
      m3dMATR::Identity(param_1);
      (**(code **)(*(int *)(*(int *)(this + 100) + 0xc0) + 0x24))(local_c);
      m3dMATR::Translate(param_1,local_c,0);
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(this + 0x60) + 0x60);
      pmVar4 = param_1;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pmVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        pmVar4 = pmVar4 + 4;
      }
    }
  }
  else {
    puVar3 = (undefined4 *)(iVar2 + 0x3c);
    pmVar4 = param_1;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pmVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pmVar4 = pmVar4 + 4;
    }
  }
  m3dMATR::GetOrigin(param_1,(m3dV *)&local_18);
  local_24 = local_18 - *(float *)(this + 0x110);
  local_20 = local_14 - *(float *)(this + 0x114);
  local_1c = local_10 - *(float *)(this + 0x118);
  m3dNormalize((m3dV *)&local_24);
  m3dMATR::MakeLCS2WCS_VX(param_1,(m3dV *)&local_18,(m3dV *)&local_24);
  return;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4670 */

void __thiscall pteEMAP_CHROME::GetMatrL2W(pteEMAP_CHROME *this,m3dMATR *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(pteManager + 0x17940);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 4;
  }
  return;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4690 */

void __thiscall pteEMAP_ENVIR::Init(pteEMAP_ENVIR *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  m3dMATR *pmVar4;
  m3dV local_c [12];
  
  pteEMAP::Init((pteEMAP *)this);
  iVar2 = *(int *)(this + 100);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xbc) == 0)) {
    if (*(int *)(this + 0x60) == 0) {
      (**(code **)(*(int *)(iVar2 + 0xc0) + 0x24))();
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(this + 0x60) + 0x60);
      pmVar4 = (m3dMATR *)(this + 0x8c);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pmVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        pmVar4 = pmVar4 + 4;
      }
      m3dMATR::GetOrigin((m3dMATR *)(this + 0x8c),local_c);
    }
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(iVar2 + 0xbc) + 0x60);
    pmVar4 = (m3dMATR *)(this + 0x8c);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pmVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pmVar4 = pmVar4 + 4;
    }
    m3dMATR::GetOrigin((m3dMATR *)(this + 0x8c),local_c);
  }
  m3dMATR::Identity((m3dMATR *)(this + 0x8c));
  m3dMATR::Translate((m3dMATR *)(this + 0x8c),local_c,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D4730 */

void __thiscall pteEMAP_PANEL::Init(pteEMAP_PANEL *this)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
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
  undefined4 local_150;
  float local_14c [60];
  int local_5c [3];
  float local_50 [3];
  m3dV local_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  byte *local_2c;
  float *local_28;
  int local_24;
  float *local_20;
  int local_1c;
  pteEMAP_PANEL *local_18;
  int local_14;
  int local_10;
  float *local_c;
  float *local_8;
  
  local_5c[0] = 1;
  local_5c[1] = 2;
  local_5c[2] = 5;
  local_18 = this;
  pteEMAP::Init((pteEMAP *)this);
  *(float *)(this + 0x118) = 1.0;
  pteSHADER::ReadFloat((pteSHADER *)this,s_scaleTile,(float *)(this + 0x118));
  iVar10 = *(int *)(this + 100);
  if (iVar10 != 0) {
    local_10 = 0;
    local_50[0] = 0.0;
    local_50[1] = 0.0;
    local_50[2] = 0.0;
    if (0 < *(int *)(iVar10 + 0x10)) {
      local_14 = 0;
      do {
        puVar7 = (undefined4 *)(*(int *)(*(int *)(iVar10 + 0x28) + 0x44) + local_14);
        iVar10 = 0;
        local_c = (float *)-_DAT_005dbdc8;
        local_38 = *puVar7;
        local_34 = puVar7[1];
        local_30 = puVar7[2];
        do {
          fVar22 = m3dAngleVector_COS((m3dV *)&local_38,(m3dV *)(&m3dBoxNorm + local_5c[iVar10] * 3)
                                     );
          local_8 = (float *)ABS(fVar22);
          if ((float)local_c < (float)local_8) {
            local_1c = iVar10;
            local_c = local_8;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 3);
        local_2c = *(byte **)(this + 100);
        local_150 = 3;
        if ((*local_2c & 1) == 0) {
          pfVar6 = local_14c;
          local_24 = 0;
          local_8 = (float *)(local_2c + 0x3c);
          local_c = pfVar6;
          do {
            piVar5 = *(int **)(local_2c + 0x28);
            local_28 = pfVar6;
            pfVar1 = (float *)(piVar5[0x10] +
                              (uint)*(ushort *)
                                     ((uint)*(byte *)(piVar5 + 1) * local_10 + 2 + local_24 * 2 +
                                     *piVar5) * 0xc);
            local_20 = pfVar1;
            if (m3dSimdType == 0) {
              if (((uint)local_8 & 0xf) == 0) {
                fVar22 = *pfVar1;
                fVar3 = pfVar1[1];
                fVar4 = pfVar1[2];
                fVar20 = fVar22 * *local_8 + local_8[0xc] + fVar3 * local_8[4] + fVar4 * local_8[8];
                fVar21 = fVar22 * local_8[1] + local_8[0xd] + fVar3 * local_8[5] +
                         fVar4 * local_8[9];
                fVar22 = fVar22 * local_8[2] + local_8[0xe] + fVar3 * local_8[6] +
                         fVar4 * local_8[10];
              }
              else {
                fVar22 = *pfVar1;
                fVar3 = pfVar1[1];
                fVar4 = pfVar1[2];
                fVar20 = fVar22 * (float)*(undefined8 *)local_8 +
                         fVar3 * (float)*(undefined8 *)(local_8 + 4) +
                         fVar4 * (float)*(undefined8 *)(local_8 + 8) +
                         (float)*(undefined8 *)(local_8 + 0xc);
                fVar21 = fVar22 * (float)((ulonglong)*(undefined8 *)local_8 >> 0x20) +
                         fVar3 * (float)((ulonglong)*(undefined8 *)(local_8 + 4) >> 0x20) +
                         fVar4 * (float)((ulonglong)*(undefined8 *)(local_8 + 8) >> 0x20) +
                         (float)((ulonglong)*(undefined8 *)(local_8 + 0xc) >> 0x20);
                fVar22 = fVar22 * (float)*(undefined8 *)(local_8 + 2) +
                         fVar3 * (float)*(undefined8 *)(local_8 + 6) +
                         fVar4 * (float)*(undefined8 *)(local_8 + 10) +
                         (float)*(undefined8 *)(local_8 + 0xe);
              }
              *(ulonglong *)pfVar6 = CONCAT44(fVar21,fVar20);
              pfVar6[2] = fVar22;
              local_c = pfVar6;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar12 = (undefined4)*(undefined8 *)pfVar1;
              uVar15 = CONCAT44(uVar12,uVar12);
              uVar12 = (undefined4)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
              uVar18 = CONCAT44(uVar12,uVar12);
              uVar19 = CONCAT44(pfVar1[2],pfVar1[2]);
              uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)local_8);
              uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_8 + 4));
              uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_8 + 8));
              uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(local_8 + 0xc));
              uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(local_8 + 2));
              uVar15 = PackedFloatingADD(uVar14,uVar16);
              uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_8 + 6));
              uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_8 + 10));
              uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(local_8 + 0xe));
              uVar15 = PackedFloatingADD(uVar13,uVar15);
              uVar13 = PackedFloatingADD(uVar14,uVar19);
              *(undefined8 *)pfVar6 = uVar15;
              uVar15 = PackedFloatingADD(uVar18,uVar13);
              pfVar6[2] = (float)uVar15;
              FastExitMediaState();
              local_c = pfVar6;
            }
            else {
              iVar11 = 0;
              iVar10 = (int)local_8 - (int)pfVar6;
              local_c = pfVar6;
              do {
                *pfVar6 = 0.0;
                iVar8 = 0;
                pfVar9 = (float *)(iVar10 + (int)pfVar6);
                do {
                  pfVar2 = pfVar1 + iVar8;
                  fVar22 = *pfVar9;
                  iVar8 = iVar8 + 1;
                  pfVar9 = pfVar9 + 4;
                  *pfVar6 = *pfVar2 * fVar22 + *pfVar6;
                } while (iVar8 < 3);
                iVar8 = iVar11 + iVar8 * 4;
                iVar11 = iVar11 + 1;
                *pfVar6 = local_8[iVar8] + *pfVar6;
                pfVar6 = pfVar6 + 1;
              } while (iVar11 < 3);
            }
            local_24 = local_24 + 1;
            pfVar6 = local_c + 3;
            local_c = pfVar6;
          } while (local_24 < 3);
        }
        else {
          iVar10 = 0;
          pfVar6 = local_14c;
          do {
            piVar5 = *(int **)(local_2c + 0x28);
            iVar11 = iVar10 * 2;
            iVar10 = iVar10 + 1;
            pfVar1 = (float *)(piVar5[0x10] +
                              (uint)*(ushort *)
                                     ((uint)*(byte *)(piVar5 + 1) * local_10 + 2 + iVar11 + *piVar5)
                              * 0xc);
            *pfVar6 = *pfVar1;
            pfVar6[1] = pfVar1[1];
            pfVar6[2] = pfVar1[2];
            pfVar6 = pfVar6 + 3;
          } while (iVar10 < 3);
        }
        pfVar6 = local_50 + local_1c;
        fVar22 = m3dCalcPolyArea((m3dPOLY *)&local_150);
        this = local_18;
        iVar10 = *(int *)(local_18 + 100);
        iVar8 = local_10 + 1;
        iVar11 = *(int *)(iVar10 + 0x10);
        local_10 = iVar8;
        *pfVar6 = fVar22 + *pfVar6;
        local_14 = local_14 + 0xc;
      } while (iVar8 < iVar11);
    }
    fVar22 = -_DAT_005dbdc8;
    iVar10 = 0;
    do {
      if (fVar22 < local_50[iVar10]) {
        fVar22 = local_50[iVar10];
        local_1c = iVar10;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
    (**(code **)(*(int *)(*(int *)(this + 100) + 0xc0) + 0x24))(local_44);
    m3dMATR::MakeLCS2WCS_VY
              ((m3dMATR *)(this + 0x8c),local_44,(m3dV *)(&m3dBoxNorm + local_5c[local_1c] * 3));
  }
  return;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4AD0
   addr: 004D4AD0
   addr: 004D4AD0 */

void __thiscall pteEMAP_ENVIR::GetMatrL2W(pteEMAP_ENVIR *this,m3dMATR *param_1)

{
  int iVar1;
  pteEMAP_ENVIR *ppVar2;
  
  ppVar2 = this + 0x8c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)ppVar2;
    ppVar2 = ppVar2 + 4;
    param_1 = param_1 + 4;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D4AF0 */

void __thiscall
pteEMAP_PANEL::PrepareFrame(pteEMAP_PANEL *this,scnSCENE *param_1,camCAMERA *param_2)

{
  float10 fVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pteEMAP::PrepareFrame((pteEMAP *)this,param_1,param_2);
  camCAMERA::GetOrigin(param_2,(m3dV *)&local_c);
  local_14 = local_8 * ___real_3e19999a;
  local_18 = 0.0;
  local_10 = local_4 * ___real_3e19999a;
  fVar1 = (float10)(**(code **)(*(int *)m3dNoise + 8))(&local_18);
  *(float *)(this + 0x110) = (float)(fVar1 * (float10)___real_3e19999a);
  local_14 = 0.0;
  local_18 = local_c * ___real_3e19999a;
  fVar1 = (float10)(**(code **)(*(int *)m3dNoise + 8))(&stack0xffffffe4);
  *(float *)(this + 0x114) = (float)(fVar1 * (float10)___real_3e19999a);
  return;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4BD0 */

pteEMAP_REFLECT * __thiscall pteEMAP_REFLECT::pteEMAP_REFLECT(pteEMAP_REFLECT *this)

{
  pteSHADER::pteSHADER((pteSHADER *)this);
  *(undefined4 *)(this + 0x114) = 3;
  *(undefined ***)(this + 0x110) = &m3dSPHERE::_vftable_;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x10c) = 0x3e19999a;
  *(undefined4 *)(this + 0x68) = DAT_00934490;
  return this;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4C10
   addr: 004D4C10
   addr: 004D4C10
   addr: 004D4C10 */

void * __thiscall
pteEMAP_REFLECT_WATER::_vector_deleting_destructor_(pteEMAP_REFLECT_WATER *this,uint param_1)

{
  *(undefined ***)(this + 0x110) = &m3dVOL::_vftable_;
  pteSHADER::~pteSHADER((pteSHADER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:pte_envmap.cpp
   addr: 004D4C40
   addr: 004D4C40 */

void * __thiscall pteEMAP_REFRACT::_scalar_deleting_destructor_(pteEMAP_REFRACT *this,uint param_1)

{
  *(undefined ***)(this + 0x13c) = &cdtCOLL_OBJ::_vftable_;
  cdtCOLL::~cdtCOLL((cdtCOLL *)(this + 0x13c));
  *(undefined ***)(this + 0x114) = &m3dVOL::_vftable_;
  pteSHADER::~pteSHADER((pteSHADER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D4C80 */

int __thiscall pteEMAP_SPHERE::ShadeFacePrepare(pteEMAP_SPHERE *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  pteEMAP_SPHERE *ppVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  objOBJ *poVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float local_60 [3];
  undefined8 local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [3];
  pteEMAP_SPHERE *local_24;
  objOBJ *local_20;
  float *local_1c;
  pteEMAP_SPHERE *local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  
  local_24 = this;
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0x400);
  }
  camCAMERA::GetOrigin(*(camCAMERA **)(pteManager + 0x17940),(m3dV *)&local_48);
  iVar4 = dsDYN_ARRAY::Expand((dsDYN_ARRAY *)&DAT_009344a4,*(int *)(param_1 + 0x14));
  if (iVar4 == 0) {
    return 0;
  }
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_14 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x28);
      if ((*(byte *)(local_10 + *(int *)(iVar4 + 0x20)) & 0x40) != 0) {
        if (((byte)*param_1 & 1) == 0) {
          pfVar8 = (float *)(*(int *)(iVar4 + 0x40) + local_14);
          poVar1 = param_1 + 0x3c;
          local_18 = (pteEMAP_SPHERE *)local_30;
          local_1c = pfVar8;
          local_20 = poVar1;
          if (m3dSimdType != 0) {
            if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar9 = (undefined4)*(undefined8 *)pfVar8;
              uVar10 = CONCAT44(uVar9,uVar9);
              uVar9 = (undefined4)((ulonglong)*(undefined8 *)pfVar8 >> 0x20);
              uVar13 = CONCAT44(uVar9,uVar9);
              uVar16 = CONCAT44(pfVar8[2],pfVar8[2]);
              uVar11 = PackedFloatingMUL(uVar10,*(undefined8 *)poVar1);
              uVar15 = PackedFloatingMUL(uVar13,*(undefined8 *)(param_1 + 0x4c));
              uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x5c));
              uVar11 = PackedFloatingADD(uVar11,*(undefined8 *)(param_1 + 0x6c));
              uVar14 = PackedFloatingMUL(uVar10,*(undefined8 *)(param_1 + 0x44));
              uVar10 = PackedFloatingADD(uVar15,uVar12);
              uVar15 = PackedFloatingMUL(uVar13,*(undefined8 *)(param_1 + 0x54));
              uVar16 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 100));
              uVar13 = PackedFloatingADD(uVar14,*(undefined8 *)(param_1 + 0x74));
              uVar10 = PackedFloatingADD(uVar11,uVar10);
              uVar11 = PackedFloatingADD(uVar15,uVar16);
              local_30[1] = (float)((ulonglong)uVar10 >> 0x20);
              local_30[0] = (float)uVar10;
              uVar10 = PackedFloatingADD(uVar13,uVar11);
              local_30[2] = (float)uVar10;
              FastExitMediaState();
            }
            else {
              iVar4 = 0;
              local_20 = poVar1 + -(int)local_30;
              pfVar5 = local_30;
              do {
                poVar7 = local_20;
                iVar6 = 0;
                *pfVar5 = 0.0;
                poVar7 = poVar7 + (int)pfVar5;
                do {
                  pfVar3 = pfVar8 + iVar6;
                  fVar17 = *(float *)poVar7;
                  iVar6 = iVar6 + 1;
                  poVar7 = poVar7 + 0x10;
                  *pfVar5 = *pfVar3 * fVar17 + *pfVar5;
                } while (iVar6 < 3);
                iVar6 = iVar4 + iVar6 * 4;
                iVar4 = iVar4 + 1;
                *pfVar5 = *(float *)(poVar1 + iVar6 * 4) + *pfVar5;
                pfVar5 = pfVar5 + 1;
              } while (iVar4 < 3);
            }
          }
        }
        else {
          pfVar8 = (float *)(*(int *)(iVar4 + 0x40) + local_14);
          local_30[0] = *pfVar8;
          local_30[1] = pfVar8[1];
          local_30[2] = pfVar8[2];
        }
        local_3c = local_30[0] - local_48;
        local_38 = local_30[1] - local_44;
        local_34 = local_30[2] - local_40;
        m3dNormalize((m3dV *)&local_3c);
        m3dReflectVector((m3dV *)(*(int *)(*(int *)(param_1 + 0x28) + 0x48) + local_14),
                         (m3dV *)&local_3c,(m3dV *)local_60);
        local_20 = (objOBJ *)&local_54;
        ppVar2 = local_24 + 0xcc;
        local_1c = local_60;
        local_18 = ppVar2;
        if (m3dSimdType == 0) {
          if (((uint)ppVar2 & 0xf) == 0) {
            fVar17 = local_60[0] * *(float *)ppVar2 + local_60[1] * *(float *)(local_24 + 0xdc) +
                     local_60[2] * *(float *)(local_24 + 0xec);
            fVar18 = local_60[0] * *(float *)(local_24 + 0xd0) +
                     local_60[1] * *(float *)(local_24 + 0xe0) +
                     local_60[2] * *(float *)(local_24 + 0xf0);
            local_4c = local_60[0] * *(float *)(local_24 + 0xd4) +
                       local_60[1] * *(float *)(local_24 + 0xe4) +
                       local_60[2] * *(float *)(local_24 + 0xf4);
          }
          else {
            fVar17 = local_60[0] * (float)*(undefined8 *)ppVar2 +
                     local_60[1] * (float)*(undefined8 *)(local_24 + 0xdc) +
                     local_60[2] * (float)*(undefined8 *)(local_24 + 0xec);
            fVar18 = local_60[0] * (float)((ulonglong)*(undefined8 *)ppVar2 >> 0x20) +
                     local_60[1] * (float)((ulonglong)*(undefined8 *)(local_24 + 0xdc) >> 0x20) +
                     local_60[2] * (float)((ulonglong)*(undefined8 *)(local_24 + 0xec) >> 0x20);
            local_4c = local_60[0] * (float)*(undefined8 *)(local_24 + 0xd4) +
                       local_60[1] * (float)*(undefined8 *)(local_24 + 0xe4) +
                       local_60[2] * (float)*(undefined8 *)(local_24 + 0xf4);
          }
          local_54 = CONCAT44(fVar18,fVar17);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar10 = PackedFloatingMUL(CONCAT44(local_60[0],local_60[0]),*(undefined8 *)ppVar2);
          uVar11 = PackedFloatingMUL(CONCAT44(local_60[1],local_60[1]),
                                     *(undefined8 *)(local_24 + 0xdc));
          uVar13 = PackedFloatingMUL(CONCAT44(local_60[2],local_60[2]),
                                     *(undefined8 *)(local_24 + 0xec));
          uVar15 = PackedFloatingMUL(CONCAT44(local_60[0],local_60[0]),
                                     *(undefined8 *)(local_24 + 0xd4));
          uVar11 = PackedFloatingADD(uVar11,uVar13);
          uVar13 = PackedFloatingMUL(CONCAT44(local_60[1],local_60[1]),
                                     *(undefined8 *)(local_24 + 0xe4));
          uVar16 = PackedFloatingMUL(CONCAT44(local_60[2],local_60[2]),
                                     *(undefined8 *)(local_24 + 0xf4));
          local_54 = PackedFloatingADD(uVar10,uVar11);
          uVar10 = PackedFloatingADD(uVar13,uVar16);
          uVar10 = PackedFloatingADD(uVar15,uVar10);
          local_4c = (float)uVar10;
          FastExitMediaState();
        }
        else {
          pfVar8 = (float *)&local_54;
          iVar4 = 3;
          do {
            *pfVar8 = 0.0;
            iVar6 = 0;
            pfVar5 = (float *)(((int)ppVar2 - (int)&local_54) + (int)pfVar8);
            fVar17 = ___real_00000000;
            do {
              pfVar3 = local_60 + iVar6;
              fVar18 = *pfVar5;
              iVar6 = iVar6 + 1;
              pfVar5 = pfVar5 + 4;
              fVar17 = *pfVar3 * fVar18 + fVar17;
            } while (iVar6 < 3);
            *pfVar8 = fVar17;
            pfVar8 = pfVar8 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        m3dWCS2SphereCoord((m3dV *)&local_54,&local_c,&local_8);
        pfVar8 = (float *)(DAT_009344ac * local_10 + *DAT_009344bc);
        *pfVar8 = local_8 / (_DAT_005dbdcc + _DAT_005dbdcc);
        pfVar8[1] = local_c / _DAT_005dbdcc;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0xc;
    } while (local_10 < *(int *)(param_1 + 0x14));
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D5090 */

int __thiscall
pteEMAP_SPHERE::ShadeFace
          (pteEMAP_SPHERE *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ptePOLY_DATA *ppVar4;
  int iVar5;
  m3dV *pmVar6;
  m3dV *pmVar7;
  int iVar8;
  int iVar9;
  pteSDR_INFO *ppVar10;
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
  m3dV local_1c [12];
  int local_10;
  ptePOLY_DATA *local_c;
  m3dV *local_8;
  
  ppVar10 = param_3;
  iVar9 = *(int *)(param_3 + 4);
  if (*(int *)(param_3 + 0x21c) == 0) {
    pteSDR_INFO::ValidateReflectPoint(param_3,param_1,param_2);
    if (0 < iVar9) {
      param_3 = (pteSDR_INFO *)(this + 0xcc);
      local_c = param_4 + 8;
      local_8 = local_1c;
      ppVar10 = ppVar10 + 0x1b8;
      local_10 = iVar9;
      do {
        pmVar7 = local_8;
        ppVar4 = local_c;
        if (m3dSimdType == 0) {
          if (((uint)param_3 & 0xf) == 0) {
            fVar21 = *(float *)ppVar10;
            fVar2 = *(float *)(ppVar10 + 4);
            fVar1 = *(float *)(ppVar10 + 8);
            fVar19 = fVar21 * *(float *)param_3 + fVar2 * *(float *)(param_3 + 0x10) +
                     fVar1 * *(float *)(param_3 + 0x20);
            fVar20 = fVar21 * *(float *)(param_3 + 4) + fVar2 * *(float *)(param_3 + 0x14) +
                     fVar1 * *(float *)(param_3 + 0x24);
            fVar21 = fVar21 * *(float *)(param_3 + 8) + fVar2 * *(float *)(param_3 + 0x18) +
                     fVar1 * *(float *)(param_3 + 0x28);
          }
          else {
            fVar21 = *(float *)ppVar10;
            fVar2 = *(float *)(ppVar10 + 4);
            fVar1 = *(float *)(ppVar10 + 8);
            fVar19 = fVar21 * (float)*(undefined8 *)param_3 +
                     fVar2 * (float)*(undefined8 *)(param_3 + 0x10) +
                     fVar1 * (float)*(undefined8 *)(param_3 + 0x20);
            fVar20 = fVar21 * (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) +
                     fVar2 * (float)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20) +
                     fVar1 * (float)((ulonglong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
            fVar21 = fVar21 * (float)*(undefined8 *)(param_3 + 8) +
                     fVar2 * (float)*(undefined8 *)(param_3 + 0x18) +
                     fVar1 * (float)*(undefined8 *)(param_3 + 0x28);
          }
          *(ulonglong *)local_8 = CONCAT44(fVar20,fVar19);
          *(float *)(local_8 + 8) = fVar21;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar11 = (undefined4)*(undefined8 *)ppVar10;
          uVar14 = CONCAT44(uVar11,uVar11);
          uVar11 = (undefined4)((ulonglong)*(undefined8 *)ppVar10 >> 0x20);
          uVar18 = CONCAT44(uVar11,uVar11);
          uVar15 = CONCAT44(*(float *)(ppVar10 + 8),*(float *)(ppVar10 + 8));
          uVar12 = PackedFloatingMUL(uVar14,*(undefined8 *)param_3);
          uVar13 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_3 + 0x10));
          uVar16 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_3 + 0x20));
          uVar17 = PackedFloatingMUL(uVar14,*(undefined8 *)(param_3 + 8));
          uVar14 = PackedFloatingADD(uVar13,uVar16);
          uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_3 + 0x18));
          uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_3 + 0x28));
          uVar14 = PackedFloatingADD(uVar12,uVar14);
          uVar12 = PackedFloatingADD(uVar18,uVar13);
          *(undefined8 *)local_8 = uVar14;
          uVar14 = PackedFloatingADD(uVar17,uVar12);
          *(int *)(pmVar7 + 8) = (int)uVar14;
          FastExitMediaState();
        }
        else {
          pmVar7 = local_1c;
          iVar9 = 3;
          do {
            *(float *)pmVar7 = 0.0;
            iVar5 = 0;
            pmVar6 = pmVar7 + ((int)param_3 - (int)local_1c);
            fVar21 = ___real_00000000;
            do {
              iVar3 = iVar5 * 4;
              fVar2 = *(float *)pmVar6;
              iVar5 = iVar5 + 1;
              pmVar6 = pmVar6 + 0x10;
              fVar21 = *(float *)(ppVar10 + iVar3) * fVar2 + fVar21;
            } while (iVar5 < 3);
            *(float *)pmVar7 = fVar21;
            pmVar7 = pmVar7 + 4;
            iVar9 = iVar9 + -1;
            ppVar4 = local_c;
          } while (iVar9 != 0);
        }
        param_4 = (ptePOLY_DATA *)ppVar10;
        m3dWCS2SphereCoord(local_1c,(float *)&param_1,(float *)&param_2);
        ppVar10 = ppVar10 + 0xc;
        local_c = ppVar4 + 8;
        local_10 = local_10 + -1;
        *(float *)(ppVar4 + -4) = (float)param_2 / (_DAT_005dbdcc + _DAT_005dbdcc);
        *(float *)ppVar4 = (float)param_1 / _DAT_005dbdcc;
      } while (local_10 != 0);
    }
  }
  else {
    iVar5 = 0;
    if (0 < iVar9) {
      ppVar4 = param_4 + 4;
      do {
        iVar8 = (uint)*(ushort *)
                       ((uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) * param_2 + 2 + iVar5 * 2 +
                       **(int **)(param_1 + 0x28)) * DAT_009344ac;
        iVar3 = *DAT_009344bc;
        iVar5 = iVar5 + 1;
        *(undefined4 *)ppVar4 = *(undefined4 *)(iVar8 + iVar3);
        *(undefined4 *)(ppVar4 + 4) = *(undefined4 *)(iVar8 + 4 + iVar3);
        ppVar4 = ppVar4 + 8;
      } while (iVar5 < iVar9);
      return 1;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D52D0 */

int __thiscall pteEMAP_SPECULAR::ShadeFacePrepare(pteEMAP_SPECULAR *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  objOBJ *poVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  unkbyte10 extraout_ST1;
  unkbyte10 in_ST2;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  m3dV local_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [3];
  pteEMAP_SPECULAR *local_1c;
  objOBJ *local_18;
  undefined8 *local_14;
  int local_10;
  int local_c;
  float *local_8;
  
  local_1c = this;
  pteEMAP_SPHERE::ShadeFacePrepare((pteEMAP_SPHERE *)this,param_1);
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0x400);
  }
  iVar3 = dsDYN_ARRAY::Expand((dsDYN_ARRAY *)&DAT_009344c0,*(int *)(param_1 + 0x14));
  if (iVar3 != 0) {
    local_c = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      local_10 = 0;
      do {
        uVar15 = (undefined8)in_ST2;
        iVar3 = *(int *)(param_1 + 0x28);
        if ((*(byte *)(local_c + *(int *)(iVar3 + 0x20)) & 0x40) != 0) {
          if (((byte)*param_1 & 1) == 0) {
            puVar10 = (undefined8 *)(*(int *)(iVar3 + 0x40) + local_10);
            poVar1 = param_1 + 0x3c;
            local_8 = local_28;
            local_14 = puVar10;
            local_18 = poVar1;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar11 = (undefined4)*puVar10;
                uVar16 = CONCAT44(uVar11,uVar11);
                uVar11 = (undefined4)((ulonglong)*puVar10 >> 0x20);
                uVar18 = CONCAT44(uVar11,uVar11);
                uVar19 = CONCAT44(*(undefined4 *)(puVar10 + 1),*(undefined4 *)(puVar10 + 1));
                uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)poVar1);
                uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_1 + 0x4c));
                uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x5c));
                uVar12 = PackedFloatingADD(uVar12,*(undefined8 *)(param_1 + 0x6c));
                uVar17 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x44));
                uVar16 = PackedFloatingADD(uVar14,uVar15);
                uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_1 + 0x54));
                uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 100));
                uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(param_1 + 0x74));
                uVar16 = PackedFloatingADD(uVar12,uVar16);
                uVar12 = PackedFloatingADD(uVar14,uVar19);
                local_28[1] = (float)((ulonglong)uVar16 >> 0x20);
                local_28[0] = (float)uVar16;
                uVar16 = PackedFloatingADD(uVar18,uVar12);
                local_28[2] = (float)uVar16;
                FastExitMediaState();
              }
              else {
                iVar3 = 0;
                local_18 = poVar1 + -(int)local_28;
                pfVar4 = local_28;
                do {
                  poVar9 = local_18;
                  iVar8 = 0;
                  *pfVar4 = 0.0;
                  poVar9 = poVar9 + (int)pfVar4;
                  do {
                    iVar2 = iVar8 * 4;
                    fVar22 = *(float *)poVar9;
                    iVar8 = iVar8 + 1;
                    poVar9 = poVar9 + 0x10;
                    *pfVar4 = *(float *)((int)puVar10 + iVar2) * fVar22 + *pfVar4;
                  } while (iVar8 < 3);
                  iVar8 = iVar3 + iVar8 * 4;
                  iVar3 = iVar3 + 1;
                  *pfVar4 = *(float *)(poVar1 + iVar8 * 4) + *pfVar4;
                  pfVar4 = pfVar4 + 1;
                } while (iVar3 < 3);
              }
            }
          }
          else {
            pfVar4 = (float *)(*(int *)(iVar3 + 0x40) + local_10);
            local_28[0] = *pfVar4;
            local_28[1] = pfVar4[1];
            local_28[2] = pfVar4[2];
          }
          camCAMERA::GetOrigin(*(camCAMERA **)(pteManager + 0x17940),(m3dV *)&local_40);
          local_34 = local_28[0] - local_40;
          local_30 = local_28[1] - local_3c;
          local_2c = local_28[2] - local_38;
          m3dNormalize((m3dV *)&local_34);
          iVar3 = local_10;
          m3dReflectVector((m3dV *)(*(int *)(*(int *)(param_1 + 0x28) + 0x48) + local_10),
                           (m3dV *)&local_34,local_4c);
          fVar22 = m3dAngleVector_COS(local_4c,(m3dV *)(*(int *)(*(int *)(param_1 + 0x28) + 0x48) +
                                                       iVar3));
          if (fVar22 < ___real_00000000) {
            fVar22 = ___real_00000000;
          }
          if (m3dSimdType == 0) {
            fVar22 = fVar22 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar21 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
            fVar20 = auVar21._0_4_;
            local_8 = (float *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar20 *
                                (`float___cdecl_m3dSqrt(float)'::__l2::three -
                                fVar22 * fVar20 * fVar20) * fVar22);
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar13 = (ulonglong)(uint)fVar22;
            uVar15 = PackedFloatingReciprocalSQRAprox(uVar15,uVar13);
            uVar16 = PackedFloatingMUL(uVar15,uVar15);
            uVar16 = PackedFloatingReciprocalSQRIter1(uVar16,uVar13);
            uVar15 = PackedFloatingReciprocalIter2(uVar16,uVar15);
            uVar15 = PackedFloatingMUL(uVar15,uVar13);
            local_8 = (float *)uVar15;
            FastExitMediaState();
          }
          else {
            local_8 = (float *)SQRT(fVar22);
          }
          uVar5 = ftol();
          iVar3 = ftol();
          uVar6 = ftol();
          in_ST2 = extraout_ST1;
          uVar7 = ftol();
          *(uint *)(DAT_009344c8 * local_c + *DAT_009344d8) =
               ((uVar5 & 0xff | iVar3 << 8) << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff;
        }
        local_c = local_c + 1;
        local_10 = local_10 + 0xc;
      } while (local_c < *(int *)(param_1 + 0x14));
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D56B0 */

int __thiscall
pteEMAP_SPECULAR::ShadeFace
          (pteEMAP_SPECULAR *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ptePOLY_DATA *ppVar6;
  int iVar7;
  m3dV *pmVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  unkbyte10 extraout_ST1;
  unkbyte10 in_ST2;
  float fVar12;
  
  iVar2 = pteEMAP_SPHERE::ShadeFace((pteEMAP_SPHERE *)this,param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_3 + 4);
  iVar7 = 1;
  if (1 < iVar2) {
    ppVar6 = param_4 + 0xc;
    do {
      if (___real_3f0ccccd <= ABS(*(float *)ppVar6 - *(float *)(param_4 + 4))) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      ppVar6 = ppVar6 + 8;
    } while (iVar7 < iVar2);
  }
  if (*(int *)(param_3 + 0x21c) == 0) {
    pteSDR_INFO::ValidateReflectPoint(param_3,param_1,param_2);
    if (0 < iVar2) {
      pmVar8 = (m3dV *)(param_3 + 0x1b8);
      ppVar6 = param_4 + 0x44;
      do {
        uVar10 = (undefined8)in_ST2;
        fVar12 = m3dAngleVector_COS(pmVar8,pmVar8 + -0xc0);
        if (m3dSimdType == 0) {
          rsqrtss(ZEXT416((uint)(fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small)),
                  ZEXT416((uint)(fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small)));
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar9 = (ulonglong)(uint)fVar12;
          uVar10 = PackedFloatingReciprocalSQRAprox(uVar10,uVar9);
          uVar11 = PackedFloatingMUL(uVar10,uVar10);
          uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
          uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
          PackedFloatingMUL(uVar10,uVar9);
          FastExitMediaState();
        }
        uVar3 = ftol();
        iVar7 = ftol();
        uVar4 = ftol();
        in_ST2 = extraout_ST1;
        uVar5 = ftol();
        pmVar8 = pmVar8 + 0xc;
        *(uint *)ppVar6 = ((uVar3 & 0xff | iVar7 << 8) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
        iVar2 = iVar2 + -1;
        ppVar6 = ppVar6 + 4;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar7 = 0;
    if (0 < iVar2) {
      ppVar6 = param_4 + 0x44;
      do {
        iVar1 = iVar7 * 2;
        iVar7 = iVar7 + 1;
        *(undefined4 *)ppVar6 =
             *(undefined4 *)
              ((uint)*(ushort *)
                      ((uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) * param_2 + 2 + iVar1 +
                      **(int **)(param_1 + 0x28)) * DAT_009344c8 + *DAT_009344d8);
        ppVar6 = ppVar6 + 4;
      } while (iVar7 < iVar2);
      return 1;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D5900 */

int __thiscall
pteEMAP_ENVIR::ShadeFace
          (pteEMAP_ENVIR *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  int iVar1;
  ptePOLY_DATA *ppVar2;
  ptePOLY_DATA *ppVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_3 + 4);
  iVar1 = pteEMAP_SPHERE::ShadeFace((pteEMAP_SPHERE *)this,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 1;
  if (1 < iVar4) {
    ppVar3 = param_4 + 4;
    ppVar2 = param_4 + 0xc;
    while (ABS(*(float *)ppVar2 - *(float *)ppVar3) < ___real_3f0ccccd) {
      iVar1 = iVar1 + 1;
      ppVar2 = ppVar2 + 8;
      if (iVar4 <= iVar1) {
        return 1;
      }
    }
    if ((iVar1 < iVar4) && (0 < iVar4)) {
      do {
        if (*(float *)ppVar3 < ___real_3f000000) {
          *(float *)ppVar3 = *(float *)ppVar3 + ___real_3f800000;
        }
        ppVar3 = ppVar3 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D59B0 */

int __thiscall
pteEMAP_CHROME::ShadeFace
          (pteEMAP_CHROME *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  pteEMAP_CHROME *ppVar7;
  ptePOLY_DATA *ppVar8;
  int iVar9;
  pteSDR_INFO *ppVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float local_14 [3];
  int local_8;
  
  iVar9 = *(int *)(param_3 + 4);
  pteSDR_INFO::ValidateNormalSmooth(param_3,param_1,param_2);
  if (0 < iVar9) {
    ppVar7 = this + 0xcc;
    ppVar10 = param_3 + 0xf8;
    local_8 = iVar9;
    ppVar8 = param_4 + 8;
    do {
      if (m3dSimdType == 0) {
        if (((uint)ppVar7 & 0xf) == 0) {
          local_14[2] = *(float *)ppVar10 * *(float *)(this + 0xd4) +
                        *(float *)(ppVar10 + 4) * *(float *)(this + 0xe4) +
                        *(float *)(ppVar10 + 8) * *(float *)(this + 0xf4);
        }
        else {
          local_14[2] = *(float *)ppVar10 * (float)*(undefined8 *)(this + 0xd4) +
                        *(float *)(ppVar10 + 4) * (float)*(undefined8 *)(this + 0xe4) +
                        *(float *)(ppVar10 + 8) * (float)*(undefined8 *)(this + 0xf4);
        }
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar11 = (undefined4)*(undefined8 *)ppVar10;
        uVar14 = CONCAT44(uVar11,uVar11);
        uVar11 = (undefined4)((ulonglong)*(undefined8 *)ppVar10 >> 0x20);
        uVar18 = CONCAT44(uVar11,uVar11);
        uVar15 = CONCAT44(*(float *)(ppVar10 + 8),*(float *)(ppVar10 + 8));
        uVar12 = PackedFloatingMUL(uVar14,*(undefined8 *)ppVar7);
        uVar13 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xdc));
        uVar16 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0xec));
        uVar17 = PackedFloatingMUL(uVar14,*(undefined8 *)(this + 0xd4));
        uVar14 = PackedFloatingADD(uVar13,uVar16);
        uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0xe4));
        uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0xf4));
        uVar14 = PackedFloatingADD(uVar12,uVar14);
        uVar12 = PackedFloatingADD(uVar18,uVar13);
        local_14[1] = (float)((ulonglong)uVar14 >> 0x20);
        local_14[0] = (float)uVar14;
        uVar14 = PackedFloatingADD(uVar17,uVar12);
        local_14[2] = (float)(int)uVar14;
        FastExitMediaState();
      }
      else {
        pfVar6 = local_14;
        iVar9 = 3;
        do {
          *pfVar6 = 0.0;
          iVar4 = 0;
          pfVar5 = (float *)(((int)ppVar7 - (int)local_14) + (int)pfVar6);
          fVar3 = ___real_00000000;
          do {
            iVar1 = iVar4 * 4;
            fVar2 = *pfVar5;
            iVar4 = iVar4 + 1;
            pfVar5 = pfVar5 + 4;
            fVar3 = *(float *)(ppVar10 + iVar1) * fVar2 + fVar3;
          } while (iVar4 < 3);
          *pfVar6 = fVar3;
          pfVar6 = pfVar6 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      ppVar10 = ppVar10 + 0xc;
      local_8 = local_8 + -1;
      *(float *)(ppVar8 + -4) = (local_14[0] + ___real_3f800000) * ___real_3f000000;
      *(float *)ppVar8 = (local_14[1] + ___real_3f800000) * ___real_3f000000;
      ppVar8 = ppVar8 + 8;
    } while (local_8 != 0);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D5B90 */

int __thiscall
pteEMAP_CHROME::ShadeVert(pteEMAP_CHROME *this,objOBJ *param_1,int param_2,pteVERT_DATA *param_3)

{
  pteEMAP_CHROME *ppVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float local_14 [3];
  pteEMAP_CHROME *local_8;
  
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0x400);
  }
  puVar3 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x48) + param_2 * 0xc);
  ppVar1 = this + 0xcc;
  local_8 = ppVar1;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar9 = (undefined4)*puVar3;
      uVar12 = CONCAT44(uVar9,uVar9);
      uVar9 = (undefined4)((ulonglong)*puVar3 >> 0x20);
      uVar16 = CONCAT44(uVar9,uVar9);
      uVar13 = CONCAT44(*(undefined4 *)(puVar3 + 1),*(undefined4 *)(puVar3 + 1));
      uVar10 = PackedFloatingMUL(uVar12,*(undefined8 *)ppVar1);
      uVar11 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0xdc));
      uVar14 = PackedFloatingMUL(uVar13,*(undefined8 *)(this + 0xec));
      uVar15 = PackedFloatingMUL(uVar12,*(undefined8 *)(this + 0xd4));
      uVar12 = PackedFloatingADD(uVar11,uVar14);
      uVar16 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0xe4));
      uVar11 = PackedFloatingMUL(uVar13,*(undefined8 *)(this + 0xf4));
      uVar12 = PackedFloatingADD(uVar10,uVar12);
      uVar10 = PackedFloatingADD(uVar16,uVar11);
      local_14[1] = (float)((ulonglong)uVar12 >> 0x20);
      local_14[0] = (float)uVar12;
      PackedFloatingADD(uVar15,uVar10);
      FastExitMediaState();
    }
    else {
      pfVar6 = local_14;
      iVar8 = 3;
      do {
        *pfVar6 = 0.0;
        iVar5 = 0;
        pfVar7 = (float *)(((int)ppVar1 - (int)local_14) + (int)pfVar6);
        do {
          iVar2 = iVar5 * 4;
          fVar4 = *pfVar7;
          iVar5 = iVar5 + 1;
          pfVar7 = pfVar7 + 4;
          *pfVar6 = *(float *)((int)puVar3 + iVar2) * fVar4 + *pfVar6;
        } while (iVar5 < 3);
        pfVar6 = pfVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  fVar4 = (local_14[0] + ___real_3f800000) * ___real_3f000000;
  *(undefined4 *)(param_3 + 9) = 0xffffffff;
  *(float *)(param_3 + 1) = fVar4;
  *(float *)(param_3 + 5) = (local_14[1] + ___real_3f800000) * ___real_3f000000;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D5D50 */

int __thiscall
pteEMAP_PANEL::ShadeFace
          (pteEMAP_PANEL *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  pteEMAP_PANEL *ppVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  ptePOLY_DATA *ppVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  pteSDR_INFO *ppVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_34 [3];
  float local_28;
  float local_24;
  float local_20;
  float local_1c [3];
  int local_10;
  ptePOLY_DATA *local_c;
  float *local_8;
  
  iVar6 = *(int *)(param_3 + 4);
  camCAMERA::GetOrigin(*(camCAMERA **)(pteManager + 0x17940),(m3dV *)&local_28);
  if (0 < iVar6) {
    ppVar1 = this + 0xcc;
    local_8 = local_1c;
    local_c = param_4 + 8;
    ppVar9 = param_3 + 0x10;
    local_10 = iVar6;
    do {
      pfVar8 = local_8;
      local_1c[0] = *(float *)(ppVar9 + -8) - local_28;
      local_1c[1] = *(float *)(ppVar9 + -4) - local_24;
      local_1c[2] = *(float *)ppVar9 - local_20;
      if (m3dSimdType == 0) {
        if (((uint)ppVar1 & 0xf) == 0) {
          fVar20 = *local_8;
          fVar4 = local_8[1];
          fVar3 = local_8[2];
          fVar18 = fVar20 * *(float *)ppVar1 + fVar4 * *(float *)(this + 0xdc) +
                   fVar3 * *(float *)(this + 0xec);
          fVar19 = fVar20 * *(float *)(this + 0xd0) + fVar4 * *(float *)(this + 0xe0) +
                   fVar3 * *(float *)(this + 0xf0);
          fVar20 = fVar20 * *(float *)(this + 0xd4) + fVar4 * *(float *)(this + 0xe4) +
                   fVar3 * *(float *)(this + 0xf4);
        }
        else {
          fVar20 = *local_8;
          fVar4 = local_8[1];
          fVar3 = local_8[2];
          fVar18 = fVar20 * (float)*(undefined8 *)ppVar1 +
                   fVar4 * (float)*(undefined8 *)(this + 0xdc) +
                   fVar3 * (float)*(undefined8 *)(this + 0xec);
          fVar19 = fVar20 * (float)((ulonglong)*(undefined8 *)ppVar1 >> 0x20) +
                   fVar4 * (float)((ulonglong)*(undefined8 *)(this + 0xdc) >> 0x20) +
                   fVar3 * (float)((ulonglong)*(undefined8 *)(this + 0xec) >> 0x20);
          fVar20 = fVar20 * (float)*(undefined8 *)(this + 0xd4) +
                   fVar4 * (float)*(undefined8 *)(this + 0xe4) +
                   fVar3 * (float)*(undefined8 *)(this + 0xf4);
        }
        *(ulonglong *)local_8 = CONCAT44(fVar19,fVar18);
        local_8[2] = fVar20;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar10 = (undefined4)*(undefined8 *)local_8;
        uVar13 = CONCAT44(uVar10,uVar10);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)local_8 >> 0x20);
        uVar17 = CONCAT44(uVar10,uVar10);
        uVar14 = CONCAT44(local_8[2],local_8[2]);
        uVar11 = PackedFloatingMUL(uVar13,*(undefined8 *)ppVar1);
        uVar12 = PackedFloatingMUL(uVar17,*(undefined8 *)(this + 0xdc));
        uVar15 = PackedFloatingMUL(uVar14,*(undefined8 *)(this + 0xec));
        uVar16 = PackedFloatingMUL(uVar13,*(undefined8 *)(this + 0xd4));
        uVar13 = PackedFloatingADD(uVar12,uVar15);
        uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(this + 0xe4));
        uVar12 = PackedFloatingMUL(uVar14,*(undefined8 *)(this + 0xf4));
        uVar13 = PackedFloatingADD(uVar11,uVar13);
        uVar11 = PackedFloatingADD(uVar17,uVar12);
        *(undefined8 *)local_8 = uVar13;
        uVar13 = PackedFloatingADD(uVar16,uVar11);
        pfVar8[2] = (float)uVar13;
        FastExitMediaState();
      }
      else {
        pfVar8 = local_34;
        param_4 = (ptePOLY_DATA *)0x3;
        do {
          *pfVar8 = 0.0;
          iVar6 = 0;
          pfVar7 = (float *)(((int)ppVar1 - (int)local_34) + (int)pfVar8);
          fVar20 = ___real_00000000;
          do {
            pfVar2 = local_1c + iVar6;
            fVar4 = *pfVar7;
            iVar6 = iVar6 + 1;
            pfVar7 = pfVar7 + 4;
            fVar20 = *pfVar2 * fVar4 + fVar20;
          } while (iVar6 < 3);
          *pfVar8 = fVar20;
          pfVar8 = pfVar8 + 1;
          param_4 = param_4 + -1;
        } while (param_4 != (ptePOLY_DATA *)0x0);
        local_1c[0] = local_34[0];
        local_1c[2] = local_34[2];
      }
      ppVar5 = local_c;
      ppVar9 = ppVar9 + 0xc;
      local_c = local_c + 8;
      *(float *)(ppVar5 + -4) =
           local_1c[0] * ___real_3d888889 * *(float *)(this + 0x118) + *(float *)(this + 0x110);
      *(float *)ppVar5 =
           local_1c[2] * ___real_3d888889 * *(float *)(this + 0x118) + *(float *)(this + 0x114);
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: engine:pte_envmap.cpp
   addr: 004D5F70 */

int __thiscall
pteEMAP_PANEL::ShadeVert(pteEMAP_PANEL *this,objOBJ *param_1,int param_2,pteVERT_DATA *param_3)

{
  pteEMAP_PANEL *ppVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float local_28 [3];
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [3];
  
  camCAMERA::GetOrigin(*(camCAMERA **)(pteManager + 0x17940),(m3dV *)&local_1c);
  iVar8 = *(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc;
  local_28[0] = *(float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc);
  local_10[0] = local_28[0] - local_1c;
  local_28[1] = *(float *)(iVar8 + 4);
  local_28[2] = *(float *)(iVar8 + 8);
  local_10[1] = local_28[1] - local_18;
  ppVar1 = this + 0xcc;
  local_10[2] = local_28[2] - local_14;
  if (m3dSimdType == 0) {
    if (((uint)ppVar1 & 0xf) == 0) {
      local_10[0] = local_10[0] * *(float *)ppVar1 + local_10[1] * *(float *)(this + 0xdc) +
                    local_10[2] * *(float *)(this + 0xec);
    }
    else {
      local_10[0] = local_10[0] * (float)*(undefined8 *)ppVar1 +
                    local_10[1] * (float)*(undefined8 *)(this + 0xdc) +
                    local_10[2] * (float)*(undefined8 *)(this + 0xec);
    }
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar9 = PackedFloatingMUL(CONCAT44(local_10[0],local_10[0]),*(undefined8 *)ppVar1);
    uVar10 = PackedFloatingMUL(CONCAT44(local_10[1],local_10[1]),*(undefined8 *)(this + 0xdc));
    uVar11 = PackedFloatingMUL(CONCAT44(local_10[2],local_10[2]),*(undefined8 *)(this + 0xec));
    uVar12 = PackedFloatingMUL(CONCAT44(local_10[0],local_10[0]),*(undefined8 *)(this + 0xd4));
    uVar10 = PackedFloatingADD(uVar10,uVar11);
    uVar11 = PackedFloatingMUL(CONCAT44(local_10[1],local_10[1]),*(undefined8 *)(this + 0xe4));
    uVar13 = PackedFloatingMUL(CONCAT44(local_10[2],local_10[2]),*(undefined8 *)(this + 0xf4));
    uVar9 = PackedFloatingADD(uVar9,uVar10);
    uVar10 = PackedFloatingADD(uVar11,uVar13);
    local_10[0] = (float)uVar9;
    uVar9 = PackedFloatingADD(uVar12,uVar10);
    local_10[2] = (float)uVar9;
    FastExitMediaState();
  }
  else {
    pfVar7 = local_28;
    iVar8 = 3;
    do {
      *pfVar7 = 0.0;
      iVar5 = 0;
      pfVar6 = (float *)(((int)ppVar1 - (int)local_28) + (int)pfVar7);
      fVar4 = ___real_00000000;
      do {
        pfVar2 = local_10 + iVar5;
        fVar3 = *pfVar6;
        iVar5 = iVar5 + 1;
        pfVar6 = pfVar6 + 4;
        fVar4 = *pfVar2 * fVar3 + fVar4;
      } while (iVar5 < 3);
      *pfVar7 = fVar4;
      pfVar7 = pfVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    local_10[0] = local_28[0];
    local_10[2] = local_28[2];
  }
  *(float *)(param_3 + 1) =
       local_10[0] * ___real_3d888889 * *(float *)(this + 0x118) + *(float *)(this + 0x110);
  *(float *)(param_3 + 5) =
       local_10[2] * ___real_3d888889 * *(float *)(this + 0x118) + *(float *)(this + 0x114);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D6170 */

void __thiscall pteEMAP_REFLECT::Init(pteEMAP_REFLECT *this)

{
  m3dV *pmVar1;
  int iVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  m3dMATR amStack_44 [4];
  undefined1 local_40 [64];
  
  pteEMAP::Init((pteEMAP *)this);
  (**(code **)(*(int *)this + 100))(local_40);
  pmVar1 = (m3dV *)(this + 0x118);
  m3dMATR::GetOrigin(amStack_44,pmVar1);
  iVar2 = *(int *)(this + 100);
  uVar5 = extraout_MM1;
  if (iVar2 == 0) {
    animINST::Validate(*(animINST **)(this + 0x60),2);
    iVar2 = *(int *)(*(int *)(this + 0x60) + 0x10);
    uVar5 = extraout_MM1_00;
  }
  fVar7 = *(float *)pmVar1 - *(float *)(iVar2 + 0xd4);
  fVar9 = *(float *)(this + 0x11c) - *(float *)(iVar2 + 0xd8);
  fVar8 = *(float *)(this + 0x120) - *(float *)(iVar2 + 0xdc);
  fVar7 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  if (m3dSimdType == 0) {
    fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar10._0_4_;
    fVar7 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar7;
    uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    fVar7 = (float)uVar5;
    FastExitMediaState();
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  fVar8 = *(float *)pmVar1 - *(float *)(iVar2 + 200);
  fVar3 = *(float *)(this + 0x11c) - *(float *)(iVar2 + 0xcc);
  fVar9 = *(float *)(this + 0x120) - *(float *)(iVar2 + 0xd0);
  fVar8 = fVar8 * fVar8 + fVar3 * fVar3 + fVar9 * fVar9;
  if (m3dSimdType == 0) {
    fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar9 = auVar10._0_4_;
    fVar8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar8;
    uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    fVar8 = (float)uVar5;
    FastExitMediaState();
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  if (fVar8 <= fVar7) {
    fVar8 = fVar7;
  }
  *(float *)(this + 0x124) = fVar8 + ___real_40400000;
  pteSHADER::ReadFloat((pteSHADER *)this,s_sphRadius,(float *)(this + 0x124));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D63A0 */

int __thiscall
pteEMAP_REFLECT::ShadeFace
          (pteEMAP_REFLECT *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  pteSDR_INFO *ppVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  pteSDR_INFO::ValidateReflectPoint(param_3,param_1,param_2);
  iVar3 = *(int *)(param_3 + 4);
  if (0 < iVar3) {
    ppVar4 = param_3 + 0x1c0;
    do {
      local_24 = *(float *)(ppVar4 + -0x1b8);
      local_18 = *(float *)(ppVar4 + -8) * ___real_42480000 + local_24;
      local_20 = *(float *)(ppVar4 + -0x1b4);
      local_1c = *(float *)(ppVar4 + -0x1b0);
      local_14 = *(float *)(ppVar4 + -4) * ___real_42480000 + local_20;
      local_10 = *(float *)ppVar4 * ___real_42480000 + local_1c;
      local_30 = *(float *)(ppVar4 + -8) * ___real_bf800000;
      local_2c = *(float *)(ppVar4 + -4) * ___real_bf800000;
      local_28 = *(float *)ppVar4 * ___real_bf800000;
      iVar2 = (**(code **)(*(int *)(this + 0x110) + 0xc))
                        (&local_18,&local_30,0x42c80000,&local_c,0,0);
      if (iVar2 == 0) {
        local_30 = local_30 * ___real_bf800000;
        local_2c = local_2c * ___real_bf800000;
        local_28 = local_28 * ___real_bf800000;
      }
      else {
        local_30 = local_c - *(float *)(this + 0x118);
        local_2c = fStack_8 - *(float *)(this + 0x11c);
        local_28 = fStack_4 - *(float *)(this + 0x120);
        m3dNormalize((m3dV *)&local_30);
      }
      ppVar4 = ppVar4 + 0xc;
      iVar3 = iVar3 + -1;
      fVar1 = ___real_3f800000 / (local_2c + ___real_3f800000 + local_2c + ___real_3f800000);
      *(float *)(param_4 + 4) = local_28 * fVar1 + ___real_3f000000;
      *(float *)(param_4 + 8) = local_30 * fVar1 + ___real_3f000000;
      param_4 = param_4 + 8;
    } while (iVar3 != 0);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D6530 */

int __thiscall
pteEMAP_REFLECT::ShadeVert(pteEMAP_REFLECT *this,objOBJ *param_1,int param_2,pteVERT_DATA *param_3)

{
  objOBJ *poVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  objOBJ *poVar6;
  objOBJ *poVar7;
  pteEMAP_REFLECT *ppVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
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
  float local_28 [3];
  float local_1c;
  float local_18;
  float local_14;
  objOBJ *local_10;
  float *local_c;
  pteEMAP_REFLECT *local_8;
  
  local_8 = this;
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0x400);
  }
  if (((byte)*param_1 & 1) == 0) {
    local_c = local_28;
    poVar1 = param_1 + 0x3c;
    poVar7 = (objOBJ *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc);
    ppVar8 = local_8;
    local_10 = poVar7;
    if (m3dSimdType != 0) {
      if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar10 = (undefined4)*(undefined8 *)poVar7;
        uVar13 = CONCAT44(uVar10,uVar10);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)poVar7 >> 0x20);
        uVar16 = CONCAT44(uVar10,uVar10);
        uVar17 = CONCAT44(*(undefined4 *)(poVar7 + 8),*(undefined4 *)(poVar7 + 8));
        uVar11 = PackedFloatingMUL(uVar13,*(undefined8 *)poVar1);
        uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x4c));
        uVar14 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x5c));
        uVar11 = PackedFloatingADD(uVar11,*(undefined8 *)(param_1 + 0x6c));
        uVar15 = PackedFloatingMUL(uVar13,*(undefined8 *)(param_1 + 0x44));
        uVar13 = PackedFloatingADD(uVar12,uVar14);
        uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x54));
        uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 100));
        uVar16 = PackedFloatingADD(uVar15,*(undefined8 *)(param_1 + 0x74));
        uVar13 = PackedFloatingADD(uVar11,uVar13);
        uVar11 = PackedFloatingADD(uVar12,uVar17);
        local_28[1] = (float)((ulonglong)uVar13 >> 0x20);
        local_28[0] = (float)uVar13;
        uVar13 = PackedFloatingADD(uVar16,uVar11);
        local_28[2] = (float)uVar13;
        FastExitMediaState();
      }
      else {
        iVar9 = 0;
        local_10 = poVar1 + -(int)local_28;
        pfVar4 = local_28;
        do {
          poVar6 = local_10;
          iVar5 = 0;
          *pfVar4 = 0.0;
          poVar6 = poVar6 + (int)pfVar4;
          do {
            iVar2 = iVar5 * 4;
            fVar3 = *(float *)poVar6;
            iVar5 = iVar5 + 1;
            poVar6 = poVar6 + 0x10;
            *pfVar4 = *(float *)(poVar7 + iVar2) * fVar3 + *pfVar4;
          } while (iVar5 < 3);
          iVar5 = iVar9 + iVar5 * 4;
          iVar9 = iVar9 + 1;
          *pfVar4 = *(float *)(poVar1 + iVar5 * 4) + *pfVar4;
          pfVar4 = pfVar4 + 1;
          ppVar8 = local_8;
        } while (iVar9 < 3);
      }
    }
  }
  else {
    pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc);
    local_28[0] = *pfVar4;
    local_28[1] = pfVar4[1];
    local_28[2] = pfVar4[2];
    ppVar8 = this;
  }
  camCAMERA::GetOrigin(*(camCAMERA **)(pteManager + 0x17940),(m3dV *)&local_40);
  local_34 = local_28[0] - local_40;
  local_30 = local_28[1] - local_3c;
  local_2c = local_28[2] - local_38;
  m3dNormalize((m3dV *)&local_34);
  m3dReflectVector((m3dV *)(*(int *)(*(int *)(param_1 + 0x28) + 0x48) + param_2 * 0xc),
                   (m3dV *)&local_34,(m3dV *)&local_1c);
  if (local_18 < ___real_00000000) {
    local_18 = 0.0;
  }
  local_6c = *(undefined4 *)(ppVar8 + 0x114);
  local_4c = local_1c * ___real_42480000 + local_28[0];
  local_68 = *(undefined4 *)(ppVar8 + 0x118);
  local_5c = *(undefined4 *)(ppVar8 + 0x124);
  local_64 = *(undefined4 *)(ppVar8 + 0x11c);
  local_60 = *(undefined4 *)(ppVar8 + 0x120);
  local_48 = local_18 * ___real_42480000 + local_28[1];
  local_70 = &m3dSPHERE::_vftable_;
  local_44 = local_14 * ___real_42480000 + local_28[2];
  local_1c = local_1c * ___real_bf800000;
  local_18 = local_18 * ___real_bf800000;
  local_14 = local_14 * ___real_bf800000;
  iVar9 = m3dSPHERE::IsectRay((m3dSPHERE *)&local_70,(m3dV *)&local_4c,(m3dV *)&local_1c,100.0,
                              (m3dV *)&local_58,(float *)0x0,(int *)0x0);
  if (iVar9 == 0) {
    local_1c = _m3dVUnitY;
    local_18 = DAT_005f9994;
    local_14 = DAT_005f9998;
  }
  else {
    local_1c = local_58 - *(float *)(ppVar8 + 0x118);
    local_18 = local_54 - *(float *)(ppVar8 + 0x11c);
    local_14 = local_50 - *(float *)(ppVar8 + 0x120);
    m3dNormalize((m3dV *)&local_1c);
  }
  fVar3 = ___real_3f800000 / (local_18 + ___real_3f800000 + local_18 + ___real_3f800000);
  *(float *)(param_3 + 1) = local_1c * fVar3 + ___real_3f000000;
  *(float *)(param_3 + 5) = local_14 * fVar3 + ___real_3f000000;
  return 1;
}




/* from: engine:pte_envmap.cpp
   addr: 004D68B0 */

void __thiscall pteEMAP_REFRACT::Init(pteEMAP_REFRACT *this)

{
  int iVar1;
  objOBJ *poVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  char local_40 [64];
  
  pteEMAP::Init((pteEMAP *)this);
  if (*(int *)(this + 100) == 0) {
    local_40[0] = '\0';
    iVar1 = pteSHADER::ReadStr((pteSHADER *)this,s_objBed,local_40,0x40);
    if (iVar1 != 0) {
      poVar2 = objFindName(*(objOBJ **)(*(int *)(pteManager + 0x1793c) + 0x44),local_40);
      *(objOBJ **)(this + 0x110) = poVar2;
      if (poVar2 != (objOBJ *)0x0) {
        *(undefined4 *)(this + 0x134) = 0;
        iVar1 = pteSHADER::ReadStr((pteSHADER *)this,s_isectBed,local_40,0x40);
        if (iVar1 != 0) {
          iVar1 = 5;
          bVar5 = true;
          pcVar3 = local_40;
          pcVar4 = &s_bbox;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar5 = *pcVar3 == *pcVar4;
            pcVar3 = pcVar3 + 1;
            pcVar4 = pcVar4 + 1;
          } while (bVar5);
          if (bVar5) {
            *(undefined4 *)(this + 0x134) = 1;
          }
        }
        iVar1 = *(int *)(this + 0x110);
        *(undefined4 *)(this + 0x134) = 1;
        *(undefined4 *)(this + 0x118) = *(undefined4 *)(iVar1 + 0xc4);
        *(undefined4 *)(this + 0x11c) = *(undefined4 *)(iVar1 + 200);
        *(undefined4 *)(this + 0x120) = *(undefined4 *)(iVar1 + 0xcc);
        *(undefined4 *)(this + 0x124) = *(undefined4 *)(iVar1 + 0xd0);
        *(undefined4 *)(this + 0x128) = *(undefined4 *)(iVar1 + 0xd4);
        *(undefined4 *)(this + 300) = *(undefined4 *)(iVar1 + 0xd8);
        *(undefined4 *)(this + 0x130) = *(undefined4 *)(iVar1 + 0xdc);
        *(float *)(this + 0x138) = -1.0;
        pteSHADER::ReadFloat((pteSHADER *)this,s_alphaMax,(float *)(this + 0x138));
        *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x10;
      }
    }
  }
  return;
}




/* from: engine:pte_envmap.cpp
   addr: 004D69D0 */

int __thiscall
pteEMAP_REFRACT::ShadeFace
          (pteEMAP_REFRACT *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  int iVar1;
  m3dV *pmVar2;
  ptePOLY_DATA *ppVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  pteVERT_DATA local_10;
  undefined4 local_f;
  undefined4 local_b;
  
  pteSDR_INFO::ValidateNormalSmooth(param_3,param_1,param_2);
  iVar1 = *(int *)(param_3 + 4);
  if (0 < iVar1) {
    pmVar2 = (m3dV *)(param_3 + 0xf8);
    ppVar3 = param_4 + 4;
    do {
      local_1c = *(undefined4 *)(pmVar2 + -0xf0);
      local_18 = *(undefined4 *)(pmVar2 + -0xec);
      local_14 = *(undefined4 *)(pmVar2 + -0xe8);
      ShadeVert3D(this,param_1,(m3dV *)&local_1c,pmVar2,&local_10);
      *(undefined4 *)ppVar3 = local_f;
      *(undefined4 *)(ppVar3 + 4) = local_b;
      pmVar2 = pmVar2 + 0xc;
      ppVar3 = ppVar3 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}




/* from: engine:pte_envmap.cpp
   addr: 004D6A60 */

int __thiscall
pteEMAP_REFRACT::ShadeVert(pteEMAP_REFRACT *this,objOBJ *param_1,int param_2,pteVERT_DATA *param_3)

{
  objOBJ *poVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  objOBJ *poVar6;
  undefined4 *puVar7;
  objOBJ *poVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c [3];
  pteEMAP_REFRACT *local_10;
  objOBJ *local_c;
  float *local_8;
  
  local_10 = this;
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0x400);
  }
  if (((byte)*param_1 & 1) == 0) {
    local_8 = local_1c;
    poVar1 = param_1 + 0x3c;
    poVar8 = (objOBJ *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc);
    local_c = poVar8;
    if (m3dSimdType != 0) {
      if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar10 = (undefined4)*(undefined8 *)poVar8;
        uVar13 = CONCAT44(uVar10,uVar10);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)poVar8 >> 0x20);
        uVar16 = CONCAT44(uVar10,uVar10);
        uVar17 = CONCAT44(*(undefined4 *)(poVar8 + 8),*(undefined4 *)(poVar8 + 8));
        uVar11 = PackedFloatingMUL(uVar13,*(undefined8 *)poVar1);
        uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x4c));
        uVar14 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x5c));
        uVar11 = PackedFloatingADD(uVar11,*(undefined8 *)(param_1 + 0x6c));
        uVar15 = PackedFloatingMUL(uVar13,*(undefined8 *)(param_1 + 0x44));
        uVar13 = PackedFloatingADD(uVar12,uVar14);
        uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x54));
        uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 100));
        uVar16 = PackedFloatingADD(uVar15,*(undefined8 *)(param_1 + 0x74));
        uVar13 = PackedFloatingADD(uVar11,uVar13);
        uVar11 = PackedFloatingADD(uVar12,uVar17);
        local_1c[1] = (float)((ulonglong)uVar13 >> 0x20);
        local_1c[0] = (float)uVar13;
        uVar13 = PackedFloatingADD(uVar16,uVar11);
        local_1c[2] = (float)uVar13;
        FastExitMediaState();
      }
      else {
        iVar9 = 0;
        local_c = poVar1 + -(int)local_1c;
        pfVar4 = local_1c;
        do {
          poVar6 = local_c;
          iVar5 = 0;
          *pfVar4 = 0.0;
          poVar6 = poVar6 + (int)pfVar4;
          do {
            iVar2 = iVar5 * 4;
            fVar3 = *(float *)poVar6;
            iVar5 = iVar5 + 1;
            poVar6 = poVar6 + 0x10;
            *pfVar4 = *(float *)(poVar8 + iVar2) * fVar3 + *pfVar4;
          } while (iVar5 < 3);
          iVar5 = iVar9 + iVar5 * 4;
          iVar9 = iVar9 + 1;
          *pfVar4 = *(float *)(poVar1 + iVar5 * 4) + *pfVar4;
          pfVar4 = pfVar4 + 1;
        } while (iVar9 < 3);
      }
    }
  }
  else {
    pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc);
    local_1c[0] = *pfVar4;
    local_1c[1] = pfVar4[1];
    local_1c[2] = pfVar4[2];
  }
  puVar7 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x48) + param_2 * 0xc);
  local_28 = *puVar7;
  local_24 = puVar7[1];
  local_20 = puVar7[2];
  iVar9 = ShadeVert3D(local_10,param_1,(m3dV *)local_1c,(m3dV *)&local_28,param_3);
  return iVar9;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D6C70 */

int __thiscall
pteEMAP_REFRACT::ShadeVert3D
          (pteEMAP_REFRACT *this,objOBJ *param_1,m3dV *param_2,m3dV *param_3,pteVERT_DATA *param_4)

{
  float fVar1;
  m3dV *pmVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 extraout_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
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
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  pmVar2 = param_2;
  local_c = DAT_00963740;
  local_10 = _m3dVZero;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_8 = DAT_00963744;
  local_4 = 0;
  camCAMERA::GetOrigin(*(camCAMERA **)(pteManager + 0x17940),(m3dV *)&local_38);
  local_44 = local_38 - *(float *)param_2;
  local_40 = local_34 - *(float *)(param_2 + 4);
  local_3c = local_30 - *(float *)(param_2 + 8);
  m3dNormalize((m3dV *)&local_44);
  fVar1 = local_44 * *(float *)param_3 +
          local_40 * *(float *)(param_3 + 4) + local_3c * *(float *)(param_3 + 8);
  fVar10 = ___real_3f800000 - (___real_3f800000 - fVar1 * fVar1) * ___real_3f100000;
  if (m3dSimdType == 0) {
    fVar10 = fVar10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar11 = auVar12._0_4_;
    param_2 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar10 * fVar11 * fVar11) *
                      fVar10);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)fVar10;
    uVar8 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    uVar8 = PackedFloatingMUL(uVar8,uVar7);
    param_2 = (m3dV *)uVar8;
    FastExitMediaState();
  }
  else {
    param_2 = (m3dV *)SQRT(fVar10);
  }
  fVar1 = fVar1 * ___real_3f400000 - (float)param_2;
  local_50 = fVar1 * *(float *)param_3 - local_44 * ___real_3f400000;
  local_4c = fVar1 * *(float *)(param_3 + 4) - local_40 * ___real_3f400000;
  local_48 = fVar1 * *(float *)(param_3 + 8) - local_3c * ___real_3f400000;
  m3dNormalize((m3dV *)&local_50);
  iVar3 = IsectRayBed(this,pmVar2,(m3dV *)&local_50,100.0,(cdtINFO *)&local_20);
  if (iVar3 == 0) {
    local_38 = *(float *)pmVar2 - local_38;
    local_34 = *(float *)(pmVar2 + 4) - local_34;
    local_48 = *(float *)(pmVar2 + 8) - local_30;
  }
  else {
    animINST::GetPos(*(animINST **)(param_1 + 0xbc),(m3dV *)&local_2c);
    local_50 = local_10 - local_2c;
    local_4c = local_c - local_28;
    local_48 = local_8 - local_24;
    m3dNormalize((m3dV *)&local_50);
    local_38 = local_50;
    local_34 = local_4c;
  }
  fVar1 = ___real_3f800000 / ((___real_3f800000 - local_34) + (___real_3f800000 - local_34));
  *(float *)(param_4 + 1) = local_38 * fVar1 + ___real_3f000000;
  *(float *)(param_4 + 5) = local_48 * fVar1 + ___real_3f000000;
  uVar4 = ftol();
  uVar5 = ftol();
  uVar6 = ftol();
  *(uint *)(param_4 + 9) = ((uVar4 | 0xffffff00) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_envmap.cpp
   addr: 004D6FF0 */

int __thiscall
pteEMAP_REFRACT::IsectRayBed
          (pteEMAP_REFRACT *this,m3dV *param_1,m3dV *param_2,float param_3,cdtINFO *param_4)

{
  cdtINFO *pcVar1;
  int iVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(this + 0x134) == 0) {
    *(undefined4 *)(this + 0x1a0) = *(undefined4 *)(this + 0x110);
    iVar2 = (**(code **)(*(int *)(this + 0x13c) + 0x58))(param_1,param_2,param_3,0,param_4);
    return iVar2;
  }
  local_c = param_3 * *(float *)param_2 + *(float *)param_1;
  local_8 = param_3 * *(float *)(param_2 + 4) + *(float *)(param_1 + 4);
  local_4 = param_3 * *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
  local_18 = *(float *)param_2 * ___real_bf800000;
  local_14 = *(float *)(param_2 + 4) * ___real_bf800000;
  local_10 = *(float *)(param_2 + 8) * ___real_bf800000;
  pcVar1 = param_4 + 0x1c;
  iVar2 = (**(code **)(*(int *)(this + 0x114) + 0xc))
                    (&local_c,&local_18,param_3,param_4 + 0x10,pcVar1,param_4 + 0xc);
  *(float *)pcVar1 = local_c - *(float *)pcVar1;
  return (uint)(iVar2 == 1);
}

