
/* from: sfx_appear.cpp
   addr: 0045DB60 */

int __fastcall wrsfxInit(void)

{
  int iVar1;
  
  wrsfxAPPEAR::pTexCloud = txmMANAGER::Add(txmManager,s_sfx_cloud,0x40003,1);
  if (wrsfxAPPEAR::pTexCloud == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxAPPEAR::pTexPart = txmMANAGER::Add(txmManager,s_sfx_appear_part,0x40003,1);
  if (wrsfxAPPEAR::pTexPart == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxAPPEAR::pTexHole = txmMANAGER::Add(txmManager,s_sfx_appear_hole,0x40003,1);
  if (wrsfxAPPEAR::pTexHole == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_appear,0x24534658,0x2d,wrsfxAPPEAR::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_0060e580);
  if (iVar1 == 0) {
    apMsg(s_Cannot_link_sound_data);
    return 0;
  }
  iVar1 = wrsfxBloodInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxDustInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxWaterInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxPortalInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxItemInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxPerseusInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxAltarInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxTreasureInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxFlameInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxProjectileInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxBridgeInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxFountainInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxWFallInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxFlareInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxMirrorsInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxBarrelInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxBarrelInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxLavaInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxOppAppearInit();
  return (uint)(iVar1 != 0);
}




/* from: sfx_appear.cpp
   addr: 0045DCD0 */

void __fastcall wrsfxTerm(void)

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
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  return;
}




/* from: sfx_appear.cpp
   addr: 0045DD30 */

void __thiscall
objFILTER_PART_SOURCE::objFILTER_PART_SOURCE(objFILTER_PART_SOURCE *this,int param_1)

{
  *(int *)(this + 8) = param_1;
  *(undefined ***)this = &_vftable_;
  if (2 < param_1) {
    *(undefined4 *)(this + 8) = 2;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}




/* from: sfx_appear.cpp
   addr: 0045DD70 */

int __thiscall objFILTER_PART_SOURCE::IsUse(objFILTER_PART_SOURCE *this,objOBJ *param_1)

{
  objMODIFIER *poVar1;
  int iVar2;
  int iVar3;
  objFILTER_PART_SOURCE *poVar4;
  
  if (((*(short *)(param_1 + 0x22) != -1) && (((byte)param_1[8] & 0x3f) == 0)) &&
     ((poVar1 = objOBJ::FindNextModifier(param_1,(objMODIFIER *)0x0,0,0x534b494e),
      poVar1 == (objMODIFIER *)0x0 || (*(int *)(poVar1 + 0x38) < 2)))) {
    iVar2 = *(int *)(this + 8);
    iVar3 = 0;
    if (0 < iVar2) {
      poVar4 = this + 0xc;
      do {
        if ((*(int *)poVar4 == 0) || (*(int *)(*(int *)poVar4 + 0x10) < *(int *)(param_1 + 0x10)))
        break;
        iVar3 = iVar3 + 1;
        poVar4 = poVar4 + 4;
      } while (iVar3 < iVar2);
    }
    if (iVar3 < iVar2) {
      memmove(this + iVar3 * 4 + 0x10,this + iVar3 * 4 + 0xc,(iVar2 - (iVar3 + 1)) * 4);
      *(objOBJ **)(this + iVar3 * 4 + 0xc) = param_1;
      iVar2 = *(int *)(this + 4) + 1;
      if (*(int *)(this + 8) <= *(int *)(this + 4) + 1) {
        iVar2 = *(int *)(this + 8);
      }
      *(int *)(this + 4) = iVar2;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_appear.cpp
   addr: 0045DE00 */

int __fastcall wrsfxFindFloor(m3dV *param_1,m3dBOX *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = *(undefined4 *)param_1;
  local_c = *(undefined4 *)param_1;
  local_10 = *(undefined4 *)(param_1 + 8);
  local_14 = *(float *)(param_1 + 4) + ___real_3f000000;
  local_4 = *(undefined4 *)(param_1 + 8);
  local_8 = *(undefined4 *)(*(int *)(gsScenePtr + 0x50) + 0x20);
  (**(code **)(**(int **)(gsScenePtr + 0x50) + 8))(&local_18,&local_c,cdtOflPtr,0);
  iVar2 = 0;
  m3dBOX::CalcStart(param_2);
  iVar3 = 0;
  if (0 < *(int *)cdtOflPtr) {
    iVar2 = 1;
    while( true ) {
      iVar1 = (**(code **)(**(int **)(gsScenePtr + 0x50) + 0x18))
                        (*(undefined2 *)(*(int *)(cdtOflPtr + 4) + iVar3 * 2));
      if ((*(byte *)(iVar1 + 0xc) & 1) != 0) break;
      iVar3 = iVar3 + 1;
      if (*(int *)cdtOflPtr <= iVar3) {
        return 0;
      }
    }
    m3dBOX::CalcUpdate(param_2,(m3dBOX *)(iVar1 + 0xc0));
  }
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_appear.cpp
   addr: 0045DED0 */

int __fastcall
wrsfxSCORCHMARK::Add
          (float param_1,float param_2,txmTEXTURE *param_3,m3dV *param_4,ulong param_5,int param_6,
          float param_7,float param_8)

{
  int iVar1;
  pteSPOT *this;
  ulong uVar2;
  m3dSPL *this_00;
  m3dCTRL_TIME *this_01;
  uint uVar3;
  uint uVar4;
  float unaff_EBX;
  float unaff_retaddr;
  float fVar5;
  float fVar6;
  float fVar7;
  m3dV *local_5c;
  uint local_54 [2];
  cdtREFINE acStack_4c [4];
  undefined **local_48;
  undefined4 local_44;
  undefined4 local_40 [3];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  cdtINFO acStack_24 [4];
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
  local_40[0] = 0;
  local_48 = &cdtREFINE::_vftable_;
  local_44 = 2;
  iVar1 = _apCfgReadBool((void **)&DAT_0060e5f4,s_Video,s_VIDEO_LowScorchQuality,(int *)local_54);
  if ((iVar1 == 0) || (local_5c = (m3dV *)0x40000000, local_54[0] == 0)) {
    local_5c = (m3dV *)0x3f800000;
  }
  iVar1 = pteMANAGER::FindShaderAround
                    (pteManager,1,&param_6,(m3dV *)param_2,(float)local_5c * param_7);
  if (iVar1 != 0) {
    return 0;
  }
  this = (pteSPOT *)operator_new(0x108);
  if (this == (pteSPOT *)0x0) {
    return 0;
  }
  pteSPOT::pteSPOT(this,0);
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined ***)this = &_vftable_;
  (**(code **)(*(int *)this + 0x1c))(0xaf);
  pteSPOT::SetTex(this,(txmTEXTURE *)param_1);
  *(ulong *)(this + 0x14) = param_5;
  pteSPOT::SetRadius(this,unaff_retaddr);
  if (param_4 == (m3dV *)0x0) {
    iVar1 = scnSCENE::FloorPlace
                      (gsScenePtr,local_5c,unaff_retaddr,(m3dV *)local_40,2.0,0.0,0,acStack_4c,
                       acStack_24);
    if (iVar1 == 0) {
      fStack_34 = 255.0;
      fStack_30 = 255.0;
      fStack_2c = 255.0;
      goto LAB_0045e0e3;
    }
    uVar2 = gsEffEnvirColor(acStack_24,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
    uVar4 = uVar2 >> 0x10;
    uVar3 = uVar2 >> 8;
    local_54[0] = uVar2 & 0xff;
  }
  else {
    uVar4 = (uint)param_4 >> 0x10;
    uVar3 = (uint)param_4 >> 8;
    local_54[0] = (uint)param_4 & 0xff;
  }
  fStack_30 = (float)(uVar3 & 0xff);
  fStack_34 = (float)(uVar4 & 0xff);
  local_54[1] = 0;
  fStack_2c = (float)local_54[0];
LAB_0045e0e3:
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 != (m3dSPL *)0x0) {
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
    fVar7 = fStack_2c;
    if (param_4 == (m3dV *)0x0) {
      m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,0,0.0,255.0,255.0,255.0,0.0);
      m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,1,param_7 / (float)param_3 + _DAT_005d55c8,255.0,
                          255.0,255.0,255.0);
      m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,2,0.85,255.0,255.0,255.0,255.0);
      fVar7 = 255.0;
      fVar6 = 255.0;
      fVar5 = 255.0;
    }
    else {
      m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,0,0.0,fStack_34,fStack_30,fStack_2c,0.0);
      m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,1,param_7 / (float)param_3 + _DAT_005d55c8,
                          fStack_34,fStack_30,fVar7,255.0);
      m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,2,0.85,fStack_34,fStack_30,fVar7,255.0);
      fVar5 = fStack_34;
      fVar6 = fStack_30;
    }
    m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,3,1.0,fVar5,fVar6,fVar7,0.0);
    this_01 = (m3dCTRL_TIME *)operator_new(0x2c);
    if (this_01 != (m3dCTRL_TIME *)0x0) {
      *(undefined4 *)(this_01 + 4) = 0;
      *(undefined4 *)(this_01 + 8) = 0;
      *(undefined4 *)(this_01 + 0x10) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x14) = 0;
      *(undefined ***)this_01 = &m3dCTRL_TIME::_vftable_;
      *(float *)(this_01 + 0xc) = (float)param_3 / unaff_EBX;
      m3dCTRL_TIME::Enable(this_01,1);
      *(undefined4 *)(this_01 + 0x18) = 0;
      *(undefined4 *)(this_01 + 0x1c) = 0;
      *(undefined4 *)(this_01 + 0x20) = 0;
      *(undefined4 *)(this_01 + 0x24) = 0;
      *(m3dSPL **)(this_01 + 0x28) = this_00;
      *(undefined ***)this_01 = &m3dCTRL_COLOR_SPL::_vftable_;
      *(uint *)(this_01 + 4) = *(uint *)(this_01 + 4) | 6;
      pteSPOT_ANIM::SetCtrlColorBase((pteSPOT_ANIM *)this,(m3dCTRL_COLOR *)this_01);
      *(uint *)(this + 0xf4) = *(uint *)(this + 0xf4) | 4;
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40;
      iVar1 = pteSHADER::Register((pteSHADER *)this);
      if (iVar1 != 0) {
        (**(code **)(*(int *)this + 0x14))(local_5c);
        (**(code **)(*(int *)this + 4))(1);
        iVar1 = pteSHADER::CalcStaticData((pteSHADER *)this,0);
        return (uint)(iVar1 != 0);
      }
      return 0;
    }
  }
  return 0;
}




/* from: sfx_appear.cpp
   addr: 0045E320 */

int __thiscall wrsfxSCORCHMARK::IsShadeObj(wrsfxSCORCHMARK *this,objOBJ *param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 0xc) & 2) == 0) && ((*(uint *)(param_1 + 0xc) & 4) == 0)) {
    iVar1 = pteSPOT::IsShadeObj((pteSPOT *)this,param_1);
    return iVar1;
  }
  return 0;
}




/* from: sfx_appear.cpp
   addr: 0045E340 */

wrsfxAPPEAR_CLOUD * __thiscall
wrsfxAPPEAR_CLOUD::wrsfxAPPEAR_CLOUD(wrsfxAPPEAR_CLOUD *this,float param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xf,50.0,3.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.125,50.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.41666666,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,4.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,2.0,1.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,5.0,1.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.095,51.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,72.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xb4) = 0x40000000;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxAPPEAR::pTexCloud);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x2400;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  return this;
}




/* from: sfx_appear.cpp
   addr: 0045E4F0 */

wrsfxAPPEAR_LARGE_PART * __thiscall
wrsfxAPPEAR_LARGE_PART::wrsfxAPPEAR_LARGE_PART(wrsfxAPPEAR_LARGE_PART *this,float param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  uint uVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x14,150.0,3.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.25,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,4.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.0,0.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.5,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.98,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,240.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc1200000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x41200000;
  *(undefined4 *)(this + 0xb8) = 0x40a00000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x40000000;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxAPPEAR::pTexPart);
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,0.75,0.25,0.75,0.25);
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.3,0.4,-1);
  uVar1 = *(uint *)(this + 4);
  uVar3 = uVar1 | 0x30000;
  *(uint *)(this + 4) = uVar3;
  uVar1 = CONCAT22((short)(uVar3 >> 0x10),(short)uVar1);
  *(uint *)(this + 4) = uVar1 | 0x2000;
  *(uint *)(this + 4) = uVar1 | 0x2008;
  return this;
}




/* from: sfx_appear.cpp
   addr: 0045E6C0 */

wrsfxAPPEAR_SMALL_PART * __thiscall
wrsfxAPPEAR_SMALL_PART::wrsfxAPPEAR_SMALL_PART(wrsfxAPPEAR_SMALL_PART *this,float param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x8c,10.0,4.0);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,10.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.25,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,4.0,0.0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.0,1.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.2,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.7,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,168.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc1200000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x40000000;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxAPPEAR::pTexPart);
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,0.715,0.285,0.715,0.285);
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.3,0.4,5);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10008;
  return this;
}




/* from: sfx_appear.cpp
   addr: 0045E8B0 */

int __fastcall wrsfxAPPEAR::Start(m3dV *param_1,int param_2,cdtINFO *param_3)

{
  int iVar1;
  entENTITY *peVar2;
  char *pcVar3;
  char *pcVar4;
  cdtINFO **ppcVar5;
  int local_a4;
  cdtINFO *local_a0;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_a4 = 0x41504546;
  m3dMATR::MakeLCS2WCS_VY(local_86,param_1,&m3dVUnitY);
  if (param_2 == 0) {
    iVar1 = pteMANAGER::FindShaderAround(pteManager,1,&local_a4,param_1,6.0);
    if (iVar1 != 0) {
      return 1;
    }
    ppcVar5 = &local_a0;
    local_a0 = param_3;
    local_9c = 1;
    pcVar4 = s_sfx_appear;
    pcVar3 = s_sfx_appear;
  }
  else {
    ppcVar5 = (cdtINFO **)0x0;
    pcVar4 = s_;
    pcVar3 = s_sfx_opp_appear;
  }
  peVar2 = entCreate(gsScenePtr,pcVar3,pcVar4,local_98,ppcVar5,0);
  if (peVar2 != (entENTITY *)0x0) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_appear.cpp
   addr: 0045E970 */

int __thiscall
wrsfxAPPEAR::ProcessMsg(wrsfxAPPEAR *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  wrsfxAPPEAR_CLOUD *this_00;
  partEMITTER_PHYS *this_01;
  wrsfxAPPEAR_LARGE_PART *this_02;
  partEMITTER_PHYS *this_03;
  wrsfxAPPEAR_SMALL_PART *this_04;
  partEMITTER_PHYS *this_05;
  objOBJ *this_06;
  ulong uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  m3dV local_44 [12];
  m3dPLANE local_38 [12];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  if (param_1 == 1) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_44);
    this_00 = (wrsfxAPPEAR_CLOUD *)operator_new(0x2c0);
    if (((((this_00 != (wrsfxAPPEAR_CLOUD *)0x0) &&
          (this_01 = (partEMITTER_PHYS *)wrsfxAPPEAR_CLOUD::wrsfxAPPEAR_CLOUD(this_00,1.0),
          this_01 != (partEMITTER_PHYS *)0x0)) &&
         (this_02 = (wrsfxAPPEAR_LARGE_PART *)operator_new(0x2c0),
         this_02 != (wrsfxAPPEAR_LARGE_PART *)0x0)) &&
        ((this_03 = (partEMITTER_PHYS *)wrsfxAPPEAR_LARGE_PART::wrsfxAPPEAR_LARGE_PART(this_02,1.0),
         this_03 != (partEMITTER_PHYS *)0x0 &&
         (this_04 = (wrsfxAPPEAR_SMALL_PART *)operator_new(0x2c0),
         this_04 != (wrsfxAPPEAR_SMALL_PART *)0x0)))) &&
       (this_05 = (partEMITTER_PHYS *)wrsfxAPPEAR_SMALL_PART::wrsfxAPPEAR_SMALL_PART(this_04,1.0),
       this_05 != (partEMITTER_PHYS *)0x0)) {
      fVar4 = 0.0;
      fVar3 = 0.0;
      iVar2 = 0x41504546;
                    /* WARNING: Load size is inaccurate */
      uVar1 = 0;
      if (*param_2 != (cdtINFO *)0x0) {
        uVar1 = gsEffEnvirColor(*param_2,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
      }
      wrsfxSCORCHMARK::Add
                ((float)pTexHole,(float)local_44,(txmTEXTURE *)0x40400000,(m3dV *)0x41200000,uVar1,
                 iVar2,fVar3,fVar4);
      this_06 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
      if (this_06 != (objOBJ *)0x0) {
        objOBJ::SetStateProcYes(this_06,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
        *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
        partEMITTER_PHYS::AttachEmitter(this_03,this_05,0,3);
        *(uint *)(this_03 + 4) = *(uint *)(this_03 + 4) | 0xc0000;
        iVar2 = partSetAreaEmissionObj(this_01,this_06,-1,(m3dV *)0x0);
        if ((iVar2 != 0) &&
           (iVar2 = partSetAreaEmissionObj(this_03,this_06,-1,(m3dV *)0x0), iVar2 != 0)) {
          if (*(int *)((int)param_2 + 4) == 0) {
            wrsfxFindFloor(local_44,(m3dBOX *)&local_20);
            local_2c = _m3dVUnitY;
            local_24 = DAT_005f9998;
            local_28 = DAT_005f9994;
            partEMITTER_PHYS::SetCDTPlane(this_03,1,0,local_38);
            partEMITTER_PHYS::SetCDTPlane(this_05,1,0,local_38);
          }
          partEMITTER_PHYS::StartEmission(this_03);
          partEMITTER_PHYS::StartEmission(this_05);
          partEMITTER_PHYS::StartEmission(this_01);
          gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060e580,local_44);
          msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
        }
      }
    }
  }
  return 0;
}




/* from: sfx_appear.cpp
   addr: 0045EBA0 */

entENTITY * __fastcall wrsfxAPPEAR::Create(animINST *param_1)

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




/* from: sfx_appear.cpp
   addr: 0045EBD0
   addr: 0045EBD0 */

void * __thiscall wrsfxAPPEAR::_vector_deleting_destructor_(wrsfxAPPEAR *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

