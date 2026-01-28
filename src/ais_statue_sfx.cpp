
/* from: ais_statue_sfx.cpp
   addr: 0042F060 */

int __fastcall aisStatueSFXInit(void)

{
  int iVar1;
  
  DAT_00609bb0 = txmMANAGER::Add(txmManager,s_sfx_mcg_part,0x40003,1);
  if (DAT_00609bb0 == (txmTEXTURE *)0x0) {
    return 0;
  }
  DAT_00609ba8 = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (DAT_00609ba8 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_statue_break_part,0x2444594e,0x28,aisSTATUE_BREAK_PART_SFX::Create,
                           (char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: ais_statue_sfx.cpp
   addr: 0042F0D0 */

entENTITY * __fastcall aisSTATUE_BREAK_PART_SFX::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x173);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: ais_statue_sfx.cpp
   addr: 0042F100 */

void __fastcall aisStatueSFXStartBreakPart(aisSTATUE *param_1)

{
  entCreate(gsScenePtr,s_sfx_statue_break_part,s_,(animCREATE_DATA *)0x0,param_1,0);
  return;
}




/* from: ais_statue_sfx.cpp
   addr: 0042F120 */

int __thiscall
aisSTATUE_BREAK_PART_SFX::ProcessMsg
          (aisSTATUE_BREAK_PART_SFX *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (param_1 == 1) {
    ProcessINIT(this,(aisSTATUE *)param_2);
  }
  else if (param_1 == 1000) {
    ProcessFRAME(this);
    return 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_statue_sfx.cpp
   addr: 0042F150 */

int __thiscall
aisSTATUE_BREAK_PART_SFX::ProcessINIT(aisSTATUE_BREAK_PART_SFX *this,aisSTATUE *param_1)

{
  m3dV *pmVar1;
  int iVar2;
  aisSTATUE_PARTS *this_00;
  partEMITTER_PHYS *ppVar3;
  aisSTATUE_SMOKE *this_01;
  m3dV local_44 [4];
  float local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  animINST::GetPos(*(animINST **)(param_1 + 0xbc),local_44);
  local_40 = local_40 + ___real_3f800000;
  iVar2 = wrsfxFindFloor(local_44,(m3dBOX *)&local_20);
  local_38 = _m3dVZero;
  local_34 = DAT_00963740;
  local_30 = DAT_00963744;
  if (iVar2 != 0) {
    local_38 = local_18;
    local_34 = local_14;
    local_30 = local_10;
  }
  local_2c = _m3dVUnitY;
  local_28 = DAT_005f9994;
  local_24 = DAT_005f9998;
  *(undefined4 *)(this + 0x163) = local_38;
  *(undefined4 *)(this + 0x167) = local_34;
  *(undefined4 *)(this + 0x16b) = local_30;
  animINST::Validate(*(animINST **)(param_1 + 0xbc),2);
  pmVar1 = (m3dV *)(this + 0x157);
  animINST::GetPos(*(animINST **)(param_1 + 0xbc),pmVar1);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(this + 0x15b);
  *(float *)(this + 0x15b) =
       *(float *)(*(int *)(*(int *)(param_1 + 0xbc) + 0x10) + 0xd8) - ___real_3e99999a;
  this_00 = (aisSTATUE_PARTS *)operator_new(0x2c0);
  if (this_00 == (aisSTATUE_PARTS *)0x0) {
    ppVar3 = (partEMITTER_PHYS *)0x0;
  }
  else {
    ppVar3 = (partEMITTER_PHYS *)aisSTATUE_PARTS::aisSTATUE_PARTS(this_00,(m3dPLANE *)&local_38);
  }
  *(partEMITTER_PHYS **)(this + 0x14f) = ppVar3;
  if (ppVar3 != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::SetPosDirSpeed(ppVar3,pmVar1,(m3dV *)0x0,(m3dV *)0x0);
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
    this_01 = (aisSTATUE_SMOKE *)operator_new(0x2c0);
    if (this_01 == (aisSTATUE_SMOKE *)0x0) {
      ppVar3 = (partEMITTER_PHYS *)0x0;
    }
    else {
      ppVar3 = (partEMITTER_PHYS *)aisSTATUE_SMOKE::aisSTATUE_SMOKE(this_01,(m3dPLANE *)&local_38);
    }
    *(partEMITTER_PHYS **)(this + 0x153) = ppVar3;
    if (ppVar3 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed(ppVar3,pmVar1,(m3dV *)0x0,(m3dV *)0x0);
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
      return 1;
    }
    return 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_statue_sfx.cpp
   addr: 0042F2E0 */

void __thiscall aisSTATUE_BREAK_PART_SFX::ProcessFRAME(aisSTATUE_BREAK_PART_SFX *this)

{
  undefined4 *puVar1;
  
  if (*(float *)(this + 0x16f) < *(float *)(this + 0x15b)) {
    *(float *)(this + 0x15b) = *(float *)(this + 0x15b) - gsElapsedTime * ___real_40e00000;
  }
  if (*(partEMITTER_PHYS **)(this + 0x14f) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 0x14f),(m3dV *)(this + 0x157),(m3dV *)0x0,(m3dV *)0x0);
    puVar1 = *(undefined4 **)(this + 0x14f);
    if (((*(byte *)(puVar1 + 2) & 1) == 0) && (puVar1[0x12] == 0)) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(this + 0x14f) = 0;
    }
  }
  if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 0x153),(m3dV *)(this + 0x157),(m3dV *)0x0,(m3dV *)0x0);
    puVar1 = *(undefined4 **)(this + 0x153);
    if (((*(byte *)(puVar1 + 2) & 1) == 0) && (puVar1[0x12] == 0)) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(this + 0x153) = 0;
    }
  }
  if ((*(int *)(this + 0x14f) == 0) && (*(int *)(this + 0x153) == 0)) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
  }
  return;
}




/* from: ais_statue_sfx.cpp
   addr: 0042F3C0 */

aisSTATUE_PARTS * __thiscall
aisSTATUE_PARTS::aisSTATUE_PARTS(aisSTATUE_PARTS *this,m3dPLANE *param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x46,50.0,7.0);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,1.6666666,50.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,2.5,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,4.0,0.0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,5.0,2.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.2,0.1,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.8,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,180.0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc0c00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x40000000;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xe8) = 0x3f800000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,DAT_00609bb0);
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.35,0.2,4);
  partEMITTER_PHYS::SetCDTPlane((partEMITTER_PHYS *)this,1,0,param_1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000;
  return this;
}




/* from: ais_statue_sfx.cpp
   addr: 0042F5A0 */

aisSTATUE_SMOKE * __thiscall
aisSTATUE_SMOKE::aisSTATUE_SMOKE(aisSTATUE_SMOKE *this,m3dPLANE *param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x28,16.0,4.0);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,4.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.6666666,16.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,2.5,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,4.0,0.0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.0,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,1.715);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,7.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,7.0,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.26,76.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,120.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc0c00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x3fc00000;
  *(undefined4 *)(this + 0xb8) = 0x3f000000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,DAT_00609ba8);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.0,0.15,8);
  partEMITTER_PHYS::SetCDTPlane((partEMITTER_PHYS *)this,1,0,param_1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,6.0,0.1);
  return this;
}

