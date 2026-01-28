
/* from: sfx_bridge.cpp
   addr: 00462A60 */

int __fastcall wrsfxBridgeInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_bridge,0x24534658,0x50,wrsfxBRIDGE::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxBRIDGE_CRASH::pDustTex = txmMANAGER::Add(txmManager,s_sfx_discus_land_cloud,0x40003,1);
  if (wrsfxBRIDGE_CRASH::pDustTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_bridge_crash,0x24534658,0x50,wrsfxBRIDGE_CRASH::Create,(char *)0x0,
                           1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_bridge.cpp
   addr: 00462AD0 */

wrsfxBRIDGE_CRASH_DUST * __thiscall
wrsfxBRIDGE_CRASH_DUST::wrsfxBRIDGE_CRASH_DUST
          (wrsfxBRIDGE_CRASH_DUST *this,wrsfxBRIDGE_CRASH_DUST_PARAMS *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,150.0,4.0);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,150.0,*(m3dSPL_LINEAR1D **)(param_1 + 4));
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.0,1.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,*(float *)param_1,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x14) = 8;
    *(undefined4 *)(this_00 + 0x18) = 8;
    *(undefined4 *)(this_00 + 0x1c) = 1;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.09,21.164999);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxBRIDGE_CRASH::pDustTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  fVar2 = *(float *)param_1 * ___real_3fc00000;
  fVar3 = *(float *)param_1 * ___real_3f000000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar3;
  *(float *)(this + 0xb8) = fVar2;
  fVar2 = *(float *)param_1 * ___real_40400000;
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xc4) = fVar2;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  *(uint *)(this + 4) = uVar1 | 0xa408;
  return this;
}




/* from: sfx_bridge.cpp
   addr: 00462C40 */

int __thiscall
wrsfxBRIDGE_CRASH::ProcessINIT(wrsfxBRIDGE_CRASH *this,wrsfxBRIDGE_CRASH_PARAMS *param_1)

{
  m3dSPL *pmVar1;
  wrsfxBRIDGE_CRASH_DUST *pwVar2;
  int iVar3;
  objOBJ *poVar4;
  undefined4 local_8;
  m3dSPL_LINEAR1D *local_4;
  
  local_8 = *(undefined4 *)param_1;
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.16666667,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.2,90.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,1.5333333,90.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,3,2.0333333,0.0);
  local_4 = (m3dSPL_LINEAR1D *)pmVar1;
  pwVar2 = (wrsfxBRIDGE_CRASH_DUST *)operator_new(0x2c0);
  if (pwVar2 == (wrsfxBRIDGE_CRASH_DUST *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = wrsfxBRIDGE_CRASH_DUST::wrsfxBRIDGE_CRASH_DUST
                      (pwVar2,(wrsfxBRIDGE_CRASH_DUST_PARAMS *)&local_8);
  }
  *(int *)(this + 0x14f) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  poVar4 = objFindName(*(objOBJ **)(param_1 + 4),s__h__nc_plane1);
  *(objOBJ **)(this + 0x153) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.033333335,90.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,1.2,90.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,3,1.8333334,0.0);
  local_4 = (m3dSPL_LINEAR1D *)pmVar1;
  pwVar2 = (wrsfxBRIDGE_CRASH_DUST *)operator_new(0x2c0);
  if (pwVar2 == (wrsfxBRIDGE_CRASH_DUST *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = wrsfxBRIDGE_CRASH_DUST::wrsfxBRIDGE_CRASH_DUST
                      (pwVar2,(wrsfxBRIDGE_CRASH_DUST_PARAMS *)&local_8);
  }
  *(int *)(this + 0x157) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  poVar4 = objFindName(*(objOBJ **)(param_1 + 4),s__h__nc_plane7);
  *(objOBJ **)(this + 0x15b) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.13333334,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.16666667,90.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,2.5333333,90.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,3,3.3333333,0.0);
  local_4 = (m3dSPL_LINEAR1D *)pmVar1;
  pwVar2 = (wrsfxBRIDGE_CRASH_DUST *)operator_new(0x2c0);
  if (pwVar2 == (wrsfxBRIDGE_CRASH_DUST *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = wrsfxBRIDGE_CRASH_DUST::wrsfxBRIDGE_CRASH_DUST
                      (pwVar2,(wrsfxBRIDGE_CRASH_DUST_PARAMS *)&local_8);
  }
  *(int *)(this + 0x15f) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  poVar4 = objFindName(*(objOBJ **)(param_1 + 4),s__h__nc_plane6);
  *(objOBJ **)(this + 0x163) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.53333336,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.56666666,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,1.2333333,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,3,1.2666667,0.0);
  local_4 = (m3dSPL_LINEAR1D *)pmVar1;
  pwVar2 = (wrsfxBRIDGE_CRASH_DUST *)operator_new(0x2c0);
  if (pwVar2 == (wrsfxBRIDGE_CRASH_DUST *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = wrsfxBRIDGE_CRASH_DUST::wrsfxBRIDGE_CRASH_DUST
                      (pwVar2,(wrsfxBRIDGE_CRASH_DUST_PARAMS *)&local_8);
  }
  *(int *)(this + 0x167) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  poVar4 = objFindName(*(objOBJ **)(param_1 + 4),s__h__nc_plane2);
  *(objOBJ **)(this + 0x16b) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,1.1666666,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,1.2,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,2.1333334,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,3,2.9,0.0);
  local_4 = (m3dSPL_LINEAR1D *)pmVar1;
  pwVar2 = (wrsfxBRIDGE_CRASH_DUST *)operator_new(0x2c0);
  if (pwVar2 == (wrsfxBRIDGE_CRASH_DUST *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = wrsfxBRIDGE_CRASH_DUST::wrsfxBRIDGE_CRASH_DUST
                      (pwVar2,(wrsfxBRIDGE_CRASH_DUST_PARAMS *)&local_8);
  }
  *(int *)(this + 0x16f) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  poVar4 = objFindName(*(objOBJ **)(param_1 + 4),s__h__nc_plane3);
  *(objOBJ **)(this + 0x173) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.13333334,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.16666667,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,1.9,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,3,1.9333333,0.0);
  local_4 = (m3dSPL_LINEAR1D *)pmVar1;
  pwVar2 = (wrsfxBRIDGE_CRASH_DUST *)operator_new(0x2c0);
  if (pwVar2 == (wrsfxBRIDGE_CRASH_DUST *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = wrsfxBRIDGE_CRASH_DUST::wrsfxBRIDGE_CRASH_DUST
                      (pwVar2,(wrsfxBRIDGE_CRASH_DUST_PARAMS *)&local_8);
  }
  *(int *)(this + 0x177) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  poVar4 = objFindName(*(objOBJ **)(param_1 + 4),s__h__nc_plane4);
  *(objOBJ **)(this + 0x17b) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.16666667,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.2,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,0.8666667,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,3,1.2333333,0.0);
  local_4 = (m3dSPL_LINEAR1D *)pmVar1;
  pwVar2 = (wrsfxBRIDGE_CRASH_DUST *)operator_new(0x2c0);
  if (pwVar2 == (wrsfxBRIDGE_CRASH_DUST *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = wrsfxBRIDGE_CRASH_DUST::wrsfxBRIDGE_CRASH_DUST
                      (pwVar2,(wrsfxBRIDGE_CRASH_DUST_PARAMS *)&local_8);
  }
  *(int *)(this + 0x17f) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  poVar4 = objFindName(*(objOBJ **)(param_1 + 4),s__h__nc_plane5);
  *(objOBJ **)(this + 0x183) = poVar4;
  return (uint)(poVar4 != (objOBJ *)0x0);
}




/* from: sfx_bridge.cpp
   addr: 00463300 */

void __thiscall wrsfxBRIDGE_CRASH::Start(wrsfxBRIDGE_CRASH *this,int param_1)

{
  int iVar1;
  int iVar2;
  wrsfxBRIDGE_CRASH *pwVar3;
  
  if (param_1 == 0) {
    *(undefined4 *)(this + 0x18b) = 0;
    *(undefined4 *)(this + 399) = 3;
  }
  else if (param_1 == 1) {
    *(undefined4 *)(this + 0x18b) = 3;
    *(undefined4 *)(this + 399) = 7;
  }
  iVar2 = *(int *)(this + 0x18b);
  if (iVar2 < *(int *)(this + 399)) {
    pwVar3 = this + iVar2 * 8 + 0x14f;
    do {
      iVar1 = partSetAreaEmissionObj
                        (*(partEMITTER_PHYS **)pwVar3,*(objOBJ **)(pwVar3 + 4),-1,(m3dV *)0x0);
      if (iVar1 == 0) {
        return;
      }
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)pwVar3);
      iVar2 = iVar2 + 1;
      pwVar3 = pwVar3 + 8;
    } while (iVar2 < *(int *)(this + 399));
  }
  *(undefined4 *)(this + 0x187) = 1;
  return;
}




/* from: sfx_bridge.cpp
   addr: 00463390 */

int __thiscall
wrsfxBRIDGE_CRASH::ProcessMsg
          (wrsfxBRIDGE_CRASH *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  wrsfxBRIDGE_CRASH *pwVar2;
  int iVar3;
  
  if (param_1 == 1) {
    ProcessINIT(this,(wrsfxBRIDGE_CRASH_PARAMS *)param_2);
  }
  else {
    if (param_1 == 2) {
      pwVar2 = this + 0x14f;
      iVar3 = 7;
      do {
        if (*(undefined4 **)pwVar2 != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)pwVar2)(1);
        }
        *(int *)pwVar2 = 0;
        *(int *)(pwVar2 + 4) = 0;
        pwVar2 = pwVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return 0;
    }
    if (((param_1 == 1000) && (*(int *)(this + 0x187) != 0)) &&
       (iVar3 = *(int *)(this + 0x18b), iVar3 < *(int *)(this + 399))) {
      pwVar2 = this + iVar3 * 8 + 0x14f;
      while( true ) {
        iVar1 = partSetAreaEmissionObj
                          (*(partEMITTER_PHYS **)pwVar2,*(objOBJ **)(pwVar2 + 4),-1,(m3dV *)0x0);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
        pwVar2 = pwVar2 + 8;
        if (*(int *)(this + 399) <= iVar3) {
          return 0;
        }
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_bridge.cpp
   addr: 00463440 */

int __thiscall
wrsfxBRIDGE::ProcessMsg(wrsfxBRIDGE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  entENTITY *peVar3;
  float extraout_EDX;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == 1) {
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
    local_8 = 0x3f800000;
    local_4 = *(undefined4 *)(*(int *)(this + 0xbc) + 0x10);
    peVar3 = entCreate(gsScenePtr,s_sfx_bridge_crash,s_,(animCREATE_DATA *)0x0,&local_8,0);
    *(entENTITY **)(this + 0x177) = peVar3;
    if (peVar3 != (entENTITY *)0x0) {
      _DAT_0060e6a8 = 0x40000000;
      DAT_0060e6a4 = 0;
    }
  }
  else {
    if (param_1 == 2) {
      msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x177),2,(msgADDR *)0x0);
      return 0;
    }
    if (param_1 == 1000) {
      dynDYNAMIC::ProcessFRAME((dynDYNAMIC *)this);
      iVar2 = m3dUpdateTimeField((float *)&DAT_0060e6a8,extraout_EDX);
      uVar1 = DAT_0060e6a4;
      if (iVar2 != 0) {
        if ((DAT_0060e6a4 == 0) || (DAT_0060e6a4 == 1)) {
          dynDYNAMIC::StartAnim((dynDYNAMIC *)this,DAT_0060e6a4,0.0,0);
        }
        wrsfxBRIDGE_CRASH::Start(*(wrsfxBRIDGE_CRASH **)(this + 0x177),uVar1);
        *(uint *)(this + 0x17b) = uVar1;
        _DAT_0060e6a8 = 0x41200000;
        DAT_0060e6a4 = (uint)(DAT_0060e6a4 == 0);
      }
      if ((*(int *)(this + 0x17b) != -1) && ((*(byte *)(*(int *)(this + 0xbc) + 0x28) & 1) != 0)) {
        iVar2 = *(int *)(this + 0x177);
        iVar5 = *(int *)(iVar2 + 0x18b);
        if (iVar5 < *(int *)(iVar2 + 399)) {
          puVar4 = (undefined4 *)(iVar2 + 0x14f + iVar5 * 8);
          do {
            partEMITTER_PHYS::StopEmission((partEMITTER_PHYS *)*puVar4);
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 2;
          } while (iVar5 < *(int *)(iVar2 + 399));
        }
        *(undefined4 *)(iVar2 + 0x187) = 0;
        *(undefined4 *)(this + 0x17b) = 0xffffffff;
        return 0;
      }
    }
  }
  return 0;
}




/* from: sfx_bridge.cpp
   addr: 004635D0 */

entENTITY * __fastcall wrsfxBRIDGE_CRASH::Create(animINST *param_1)

{
  entENTITY *this;
  entENTITY *peVar1;
  int iVar2;
  
  this = (entENTITY *)operator_new(0x193);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x187) = 1;
    *(undefined4 *)(this + 0x18b) = 0;
    *(undefined4 *)(this + 399) = 0;
    *(undefined ***)this = &_vftable_;
    peVar1 = this + 0x153;
    iVar2 = 7;
    do {
      *(undefined4 *)(peVar1 + -4) = 0;
      *(undefined4 *)peVar1 = 0;
      peVar1 = peVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_bridge.cpp
   addr: 00463630
   addr: 00463630 */

void * __thiscall
wrsfxBRIDGE_CRASH::_vector_deleting_destructor_(wrsfxBRIDGE_CRASH *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_bridge.cpp
   addr: 00463660 */

entENTITY * __fastcall wrsfxBRIDGE::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x17f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = _m3dVZero;
    *(undefined4 *)(this + 0x167) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x16b) = uVar1;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0xffffffff;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_bridge.cpp
   addr: 004636F0
   addr: 004636F0 */

void * __thiscall wrsfxBRIDGE::_vector_deleting_destructor_(wrsfxBRIDGE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

