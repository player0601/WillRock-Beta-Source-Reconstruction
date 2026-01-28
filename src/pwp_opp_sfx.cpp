
/* from: pwp_opp_sfx.cpp
   addr: 00415E40 */

int __fastcall pwpOppSfxInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pwp_sfx_opp,0x504d4447,0x46,pwpOPP_SFX::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pwp_sfx_opp_acd_expl,0x24534658,0x50,pwpOPP_ACD_EXPLODE::Create,
                           (char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  pwpOPP_SFX::pMGDCloudTex = txmMANAGER::Add(txmManager,s_sfx_mdg_cloud,0x40003,1);
  if (pwpOPP_SFX::pMGDCloudTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpOPP_SFX::pBurnTex = txmMANAGER::Add(txmManager,s_sfx_nuke_burn,0x40000,1);
  if (pwpOPP_SFX::pBurnTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpOPP_SFX::pStoneTex = txmMANAGER::Add(txmManager,s_sfx_mdg_stone,0x40000,1);
  if (pwpOPP_SFX::pStoneTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpOPP_SFX::pBloodTex = txmMANAGER::Add(txmManager,s_sfx_acd_opp,0x40000,1);
  if (pwpOPP_SFX::pBloodTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpOPP_SFX::pChromeTex = txmMANAGER::Add(txmManager,s_emap_chrome,0x40000,1);
  if (pwpOPP_SFX::pChromeTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpOPP_SFX::pFireTex = txmMANAGER::Add(txmManager,s_sfx_opp_fire,0x40003,1);
  if (pwpOPP_SFX::pFireTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpOPP_SFX::pTexSmokeAcd = txmMANAGER::Add(txmManager,s_sfx_acd_smoke,0x40003,1);
  if (pwpOPP_SFX::pTexSmokeAcd == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpOPP_SFX::pTexSplashAcd = txmMANAGER::Add(txmManager,s_sfx_opp_acd_splash,0x40003,1);
  if (pwpOPP_SFX::pTexSplashAcd == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpOPP_SFX::pTexDropsAcd = txmMANAGER::Add(txmManager,s_sfx_acd_drops,0x40003,1);
  if (pwpOPP_SFX::pTexDropsAcd == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpOPP_SFX::pTexBloodAcd = txmMANAGER::Add(txmManager,s_sfx_opp_acd_blood,0x40003,1);
  if (pwpOPP_SFX::pTexBloodAcd == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpOPP_SFX::pTexSplashBloodAcd = txmMANAGER::Add(txmManager,s_sfx_opp_acd_blood_splash,0x40003,1);
  if (pwpOPP_SFX::pTexSplashBloodAcd == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(5,(sncSOUND_DESCR_3D *)&DAT_006032f8);
  return (uint)(iVar1 != 0);
}




/* from: pwp_opp_sfx.cpp
   addr: 00416000 */

entENTITY * __fastcall pwpOPP_ACD_EXPLODE::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x16f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined4 *)(this + 0x16b) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: pwp_opp_sfx.cpp
   addr: 00416060
   addr: 00416060 */

void * __thiscall
pwpOPP_ACD_EXPLODE::_vector_deleting_destructor_(pwpOPP_ACD_EXPLODE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00416090 */

pwpMDG_SHOOT_TARGET_SFX_EMITTER * __thiscall
pwpMDG_SHOOT_TARGET_SFX_EMITTER::pwpMDG_SHOOT_TARGET_SFX_EMITTER
          (pwpMDG_SHOOT_TARGET_SFX_EMITTER *this,float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,153.33333,2.0);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.5,0.5);
  partEMITTER_PHYS::SetAnimEmission
            ((partEMITTER_PHYS *)this,param_2 * ___real_3f19999a + ___real_40000000,0.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_40a00000);
  fVar2 = param_1 * ___real_41200000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.5,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.065,37.995003);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpOPP_SFX::pMGDCloudTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,150.0);
  fVar2 = param_1 * ___real_40f00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3dcccccd;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_41500000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xe0) = fVar2;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0xa408;
  *(uint *)(this + 4) = uVar1 | 0x80a408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 004162A0 */

pwpOPP_ACD_EXPL_SMOKE * __thiscall
pwpOPP_ACD_EXPL_SMOKE::pwpOPP_ACD_EXPL_SMOKE(pwpOPP_ACD_EXPL_SMOKE *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x46,600.0,1.4);
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
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,450.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,450.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.05,0.35);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_40700000,param_1 * ___real_3f400000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpOPP_SFX::pTexSmokeAcd);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  fVar1 = param_1 * ___real_40a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  fVar1 = param_1 * ___real_40900000;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar1;
  *(float *)(this + 0xb8) = param_1 * ___real_40100000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 004164C0 */

pwpOPP_ACD_EXPL_SPLASH * __thiscall
pwpOPP_ACD_EXPL_SPLASH::pwpOPP_ACD_EXPL_SPLASH(pwpOPP_ACD_EXPL_SPLASH *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,10,50.0,0.4);
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
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,30.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.1,30.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.1);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_40a20000);
  fVar1 = param_1 * ___real_41a20000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,fVar1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.5,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpOPP_SFX::pTexSplashAcd);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00416700 */

pwpOPP_ACD_EXPL_DROPS * __thiscall
pwpOPP_ACD_EXPL_DROPS::pwpOPP_ACD_EXPL_DROPS(pwpOPP_ACD_EXPL_DROPS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,400,3000.0,3.0);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,3000.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.1,3000.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,2.5,0.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3e75c290,param_1 * ___real_3df5c290,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.5,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpOPP_SFX::pTexDropsAcd);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_40c00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xb0) = param_1;
  *(float *)(this + 0xe8) = fVar2;
  fVar2 = param_1 * ___real_41a00000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_41200000;
  *(float *)(this + 0xc0) = param_1 * ___real_40400000;
  *(float *)(this + 0xc4) = param_1 * ___real_3fc00000;
  *(float *)(this + 0xe0) = param_1 * ___real_c1f00000;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.0,param_1 * ___real_3d4ccccd,3);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10009;
  *(uint *)(this + 4) = uVar1 | 0x1a009;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00416970 */

pwpOPP_ACD_EXPL_PARTS * __thiscall
pwpOPP_ACD_EXPL_PARTS::pwpOPP_ACD_EXPL_PARTS(pwpOPP_ACD_EXPL_PARTS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x1e,200.0,3.0);
  *(undefined ***)this = &_vftable_;
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
    m3dSPL::AllocKpList(this_00,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.033333335,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.1,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,2.0,0.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f200000,param_1 * ___real_3ec00000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpOPP_SFX::pTexBloodAcd);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,120.0);
  fVar2 = param_1 * ___real_40800000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar2;
  fVar2 = param_1 * ___real_41400000;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_40c00000;
  *(float *)(this + 0xe0) = param_1 * ___real_c1a00000;
  partEMITTER_PHYS::SetCDTParam
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f000000,0.0,param_1 * ___real_3d4ccccd,1);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x30408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  return this;
}




/* from: pwp_opp_sfx.cpp
   addr: 00416B80
   addr: 00416B80 */

void * __thiscall
pwpOPP_ACD_EXPL_PARTS::_scalar_deleting_destructor_(pwpOPP_ACD_EXPL_PARTS *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::~partEMITTER_PHYS((partEMITTER_PHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: pwp_opp_sfx.cpp
   addr: 00416BB0 */

void __thiscall
pwpOPP_ACD_EXPL_PARTS::PartUpdate
          (pwpOPP_ACD_EXPL_PARTS *this,int param_1,partPART **param_2,float param_3)

{
  partPART *ppVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  partEMITTER_PHYS::PartUpdate((partEMITTER_PHYS *)this,param_1,param_2,param_3);
  iVar3 = 0;
  if (0 < param_1) {
    do {
      ppVar1 = param_2[iVar3];
      if (((byte)ppVar1[0x38] & 8) == 0) {
        partEMITTER_PHYS::SetPosDirSpeed
                  (*(partEMITTER_PHYS **)(this + 0x2c0),(m3dV *)(ppVar1 + 0x10),
                   (m3dV *)(ppVar1 + 0x1c),(m3dV *)(ppVar1 + 0x1c));
        fVar4 = param_3;
        iVar2 = partEMITTER_PHYS::UpdateGetNmbEmit(*(partEMITTER_PHYS **)(this + 0x2c0),param_3);
        partEMITTER_PHYS::UpdateEmit(*(partEMITTER_PHYS **)(this + 0x2c0),iVar2,fVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00416C20 */

pwpOPP_ACD_EXPL_BLOOD_FLY * __thiscall
pwpOPP_ACD_EXPL_BLOOD_FLY::pwpOPP_ACD_EXPL_BLOOD_FLY(pwpOPP_ACD_EXPL_BLOOD_FLY *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,400.0,0.6);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,10.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.45,0.15);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(this_00,0,8,1);
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,param_1 * ___real_3e800000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.5,param_1 * ___real_3e000000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f400000,0.0,(m3dSPL_LINEAR1D *)this_00,1.0)
  ;
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpOPP_SFX::pTexBloodAcd);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_c1a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xe8) = param_1;
  *(float *)(this + 0xe0) = fVar2;
  fVar2 = param_1 * ___real_3d4ccccd;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3ecccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.0,fVar2,1);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00416E00 */

pwpOPP_ACD_EXPL_BLOOD_HIT * __thiscall
pwpOPP_ACD_EXPL_BLOOD_HIT::pwpOPP_ACD_EXPL_BLOOD_HIT(pwpOPP_ACD_EXPL_BLOOD_HIT *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,400.0,0.6);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,10.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.45,0.15);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(this_00,0,8,1);
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,param_1 * ___real_3e800000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.5,param_1 * ___real_3e000000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3e99999a,param_1 * ___real_3e19999a,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpOPP_SFX::pTexBloodAcd);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_c1a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xe8) = param_1;
  *(float *)(this + 0xe0) = fVar2;
  fVar2 = param_1 * ___real_3d4ccccd;
  *(undefined4 *)(this + 0xf8) = 0x42580001;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.0,fVar2,1);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00416FF0 */

pwpOPP_ACD_EXPL_BLOOD_SPLASH * __thiscall
pwpOPP_ACD_EXPL_BLOOD_SPLASH::pwpOPP_ACD_EXPL_BLOOD_SPLASH
          (pwpOPP_ACD_EXPL_BLOOD_SPLASH *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xf,100.0,0.6);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,70.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.06666667,70.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.45,0.15);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_40c80000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_41700000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,fVar2,param_1 * ___real_3fa00000,(m3dSPL_LINEAR1D *)pmVar3,1.0
            );
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,204.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpOPP_SFX::pTexSplashBloodAcd);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 0x40c;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00417220 */

int __thiscall
pwpOPP_ACD_EXPLODE::ProcessMsg
          (pwpOPP_ACD_EXPLODE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  pwpOPP_ACD_EXPL_SMOKE *this_00;
  partEMITTER_PHYS *ppVar3;
  pwpOPP_ACD_EXPL_SPLASH *this_01;
  pwpOPP_ACD_EXPL_DROPS *this_02;
  objOBJ *this_03;
  pwpOPP_ACD_EXPL_BLOOD_SPLASH *this_04;
  pwpOPP_ACD_EXPL_PARTS *this_05;
  pwpOPP_ACD_EXPL_BLOOD_FLY *this_06;
  pwpOPP_ACD_EXPL_BLOOD_HIT *this_07;
  float in_EDX;
  m3dV local_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar1 = *param_2;
    animINST::GetPos(*(animINST **)(this + 0xbc),local_44);
    this_00 = (pwpOPP_ACD_EXPL_SMOKE *)operator_new(0x2c0);
    if (this_00 == (pwpOPP_ACD_EXPL_SMOKE *)0x0) {
      ppVar3 = (partEMITTER_PHYS *)0x0;
    }
    else {
      ppVar3 = (partEMITTER_PHYS *)pwpOPP_ACD_EXPL_SMOKE::pwpOPP_ACD_EXPL_SMOKE(this_00,fVar1);
    }
    *(partEMITTER_PHYS **)(this + 0x14f) = ppVar3;
    if (ppVar3 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_44,(m3dV *)0x0,(m3dV *)0x0);
      this_01 = (pwpOPP_ACD_EXPL_SPLASH *)operator_new(0x2c0);
      if (this_01 == (pwpOPP_ACD_EXPL_SPLASH *)0x0) {
        ppVar3 = (partEMITTER_PHYS *)0x0;
      }
      else {
        ppVar3 = (partEMITTER_PHYS *)pwpOPP_ACD_EXPL_SPLASH::pwpOPP_ACD_EXPL_SPLASH(this_01,fVar1);
      }
      *(partEMITTER_PHYS **)(this + 0x153) = ppVar3;
      if (ppVar3 != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_44,(m3dV *)0x0,(m3dV *)0x0);
        this_02 = (pwpOPP_ACD_EXPL_DROPS *)operator_new(0x2c0);
        if (this_02 == (pwpOPP_ACD_EXPL_DROPS *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = pwpOPP_ACD_EXPL_DROPS::pwpOPP_ACD_EXPL_DROPS(this_02,fVar1);
        }
        *(int *)(this + 0x157) = iVar2;
        if (iVar2 != 0) {
          this_03 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_drops_emitter);
          if (this_03 != (objOBJ *)0x0) {
            objOBJ::SetStateProcYes(this_03,0x40008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
            iVar2 = partSetAreaEmissionObj
                              (*(partEMITTER_PHYS **)(this + 0x157),this_03,-1,(m3dV *)0x0);
            if (iVar2 != 0) {
              this_04 = (pwpOPP_ACD_EXPL_BLOOD_SPLASH *)operator_new(0x2c0);
              if (this_04 == (pwpOPP_ACD_EXPL_BLOOD_SPLASH *)0x0) {
                ppVar3 = (partEMITTER_PHYS *)0x0;
              }
              else {
                ppVar3 = (partEMITTER_PHYS *)
                         pwpOPP_ACD_EXPL_BLOOD_SPLASH::pwpOPP_ACD_EXPL_BLOOD_SPLASH(this_04,fVar1);
              }
              *(partEMITTER_PHYS **)(this + 0x167) = ppVar3;
              if (ppVar3 != (partEMITTER_PHYS *)0x0) {
                partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_44,(m3dV *)0x0,(m3dV *)0x0);
                this_05 = (pwpOPP_ACD_EXPL_PARTS *)operator_new(0x2c4);
                if (this_05 == (pwpOPP_ACD_EXPL_PARTS *)0x0) {
                  ppVar3 = (partEMITTER_PHYS *)0x0;
                }
                else {
                  ppVar3 = (partEMITTER_PHYS *)
                           pwpOPP_ACD_EXPL_PARTS::pwpOPP_ACD_EXPL_PARTS(this_05,fVar1);
                }
                *(partEMITTER_PHYS **)(this + 0x15b) = ppVar3;
                if (ppVar3 != (partEMITTER_PHYS *)0x0) {
                  partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_44,(m3dV *)0x0,(m3dV *)0x0);
                  this_06 = (pwpOPP_ACD_EXPL_BLOOD_FLY *)operator_new(0x2c0);
                  if (this_06 == (pwpOPP_ACD_EXPL_BLOOD_FLY *)0x0) {
                    iVar2 = 0;
                  }
                  else {
                    iVar2 = pwpOPP_ACD_EXPL_BLOOD_FLY::pwpOPP_ACD_EXPL_BLOOD_FLY(this_06,fVar1);
                  }
                  *(int *)(this + 0x15f) = iVar2;
                  if (iVar2 != 0) {
                    this_07 = (pwpOPP_ACD_EXPL_BLOOD_HIT *)operator_new(0x2c0);
                    if (this_07 == (pwpOPP_ACD_EXPL_BLOOD_HIT *)0x0) {
                      ppVar3 = (partEMITTER_PHYS *)0x0;
                    }
                    else {
                      ppVar3 = (partEMITTER_PHYS *)
                               pwpOPP_ACD_EXPL_BLOOD_HIT::pwpOPP_ACD_EXPL_BLOOD_HIT(this_07,fVar1);
                    }
                    *(partEMITTER_PHYS **)(this + 0x163) = ppVar3;
                    if (ppVar3 != (partEMITTER_PHYS *)0x0) {
                      partEMITTER_PHYS::AttachEmitter
                                (*(partEMITTER_PHYS **)(this + 0x15b),ppVar3,0,10);
                      *(uint *)(*(int *)(this + 0x15b) + 4) =
                           *(uint *)(*(int *)(this + 0x15b) + 4) | 0x80000;
                      *(undefined4 *)(*(int *)(this + 0x15b) + 0x2c0) =
                           *(undefined4 *)(this + 0x15f);
                      objOBJ::GetOrigin(this_03,(m3dV *)&local_38);
                      iVar2 = wrsfxFindFloor((m3dV *)&local_38,(m3dBOX *)&local_20);
                      if (iVar2 == 0) {
                        local_38 = _m3dVZero;
                        local_34 = DAT_00963740;
                        local_30 = DAT_00963744;
                      }
                      else {
                        local_34 = local_14;
                      }
                      local_2c = _m3dVUnitY;
                      local_28 = DAT_005f9994;
                      local_24 = DAT_005f9998;
                      partEMITTER_PHYS::SetCDTPlane
                                (*(partEMITTER_PHYS **)(this + 0x157),1,0,(m3dPLANE *)&local_38);
                      partEMITTER_PHYS::SetCDTPlane
                                (*(partEMITTER_PHYS **)(this + 0x15b),1,0,(m3dPLANE *)&local_38);
                      partEMITTER_PHYS::SetCDTPlane
                                (*(partEMITTER_PHYS **)(this + 0x163),1,0,(m3dPLANE *)&local_38);
                      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
                      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
                      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x167));
                      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
                      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x15b));
                      *(uint *)(*(int *)(this + 0xbc) + 4) =
                           *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
                      *(undefined4 *)(this + 0x16b) = 0x40800000;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 2) {
    if (*(undefined4 **)(this + 0x15b) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x15b))(1);
      *(undefined4 *)(this + 0x15b) = 0;
    }
    if (*(undefined4 **)(this + 0x15f) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x15f))(1);
      *(undefined4 *)(this + 0x15f) = 0;
    }
    if (*(undefined4 **)(this + 0x163) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x163))(1);
      *(undefined4 *)(this + 0x163) = 0;
    }
    if (*(undefined4 **)(this + 0x167) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x167))(1);
      *(undefined4 *)(this + 0x167) = 0;
    }
    if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x157))(1);
      *(undefined4 *)(this + 0x157) = 0;
    }
    if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x153))(1);
      *(undefined4 *)(this + 0x153) = 0;
    }
    if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x14f))(1);
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
  }
  else if (param_1 == 1000) {
    iVar2 = m3dUpdateTimeField((float *)(this + 0x16b),in_EDX);
    if (iVar2 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00417630 */

pwpOPP_BURN * __thiscall
pwpOPP_BURN::pwpOPP_BURN(pwpOPP_BURN *this,float param_1,float param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,param_2 * ___real_42c80000,0.6);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.45,0.15);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_3f4ccccd);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.2,param_1 * ___real_3fc00000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,param_1 * ___real_40800000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,1.0,0.2,(m3dSPL_LINEAR1D *)pmVar3,1.6);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.255,178.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpOPP_SFX::pFireTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,900.0);
  fVar2 = param_1 * ___real_3f000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xb4) = param_1;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc4) = fVar2;
  fVar2 = param_1 * ___real_41200000;
  *(undefined4 *)(this + 0xcc) = 0x3f4ccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(float *)(this + 0xe0) = fVar2;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xc0) = param_1;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,4,2,0.0,5.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,180.0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(uint *)(this + 4) = uVar1 | 0x40f;
  *(uint *)(this + 4) = uVar1 | 41999;
  *(uint *)(this + 4) = uVar1 | 0x80a40f;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00417890 */

void __fastcall pwpOPP_SFX::Start(pwpOPP_SFX_START *param_1,animINST *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  msgADDR *pmVar3;
  plrPLAYER_COMMON *this;
  float fVar4;
  int iVar5;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  dmgWEAPON local_34 [8];
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_48 = 0;
  local_47 = 0x40;
  local_44 = 0.0;
  local_40 = 0xffffffff;
  local_3c = 0xffffffff;
  local_38 = 0xffffffff;
  local_46 = 0x14;
  dmgWEAPON::dmgWEAPON(local_34);
  iVar5 = dmgIsHiddenObstacles(param_2,(entENTITY *)0x0,(m3dV *)param_1);
  if (iVar5 == 0) {
    iVar5 = *(int *)(*(int *)(param_2 + 0x13c) + 0x14);
    if ((iVar5 != 0x244e5043) && (iVar5 != 0x504c5952)) {
      local_5c = *(float *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      animINST::GetCenter(param_2,(m3dV *)&local_24);
      local_18 = uVar2;
      animINST::GetDir(param_2,(m3dV *)&local_54);
      local_14 = local_54 * ___real_40400000 + local_24;
      local_2c = local_5c;
      local_10 = local_50 * ___real_40400000 + local_20;
      local_c = local_4c * ___real_40400000 + local_1c;
      local_28 = uVar1;
      dmgDispatchExplosDamageInst
                (param_2,(entENTITY *)0x0,(m3dV *)param_1,local_5c,*(float *)(param_1 + 0x14),2,
                 *(int *)(param_1 + 0xc),(cdtINFO *)0x0,0xffffffff,(dmgDISPATCHER *)0x0);
      return;
    }
    local_40 = *(undefined4 *)(param_1 + 0xc);
    local_38 = *(undefined4 *)(*(int *)(param_2 + 0x13c) + 0x8c);
    local_3c = *(undefined4 *)(param_1 + 0x18);
    local_5c = CalcRadDamage(param_1,param_2);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    local_44 = local_5c;
    animINST::GetCenter(param_2,(m3dV *)&local_24);
    local_18 = uVar2;
    animINST::GetDir(param_2,(m3dV *)&local_54);
    local_2c = local_5c;
    pmVar3 = *(msgADDR **)(param_2 + 0x13c);
    local_14 = local_54 * ___real_40400000 + local_24;
    local_10 = local_50 * ___real_40400000 + local_20;
    local_c = local_4c * ___real_40400000 + local_1c;
    local_28 = uVar1;
    if ((*(int *)(pmVar3 + 0x14) == 0x244e5043) &&
       ((((iVar5 = *(int *)(pmVar3 + 0x94), iVar5 == 5 || (iVar5 == 6)) || (iVar5 == 0xd)) ||
        (((iVar5 == 0xe || (iVar5 == 0xf)) || (iVar5 == 0x10)))))) {
      msgSYSTEM::SendMsg(&msgSystem,pmVar3,0x4c5,local_34,(msgADDR *)0x0);
      return;
    }
    local_5c = 1.0;
    if (*(int *)(pmVar3 + 0x14) == 0x504c5952) {
      if (((byte)pmVar3[0x29b] & 4) != 0) {
        return;
      }
      local_5c = wrGO_SYSTEM::GetPlrDmgScale(wrSysGO);
    }
    fVar4 = local_2c;
    if (*(int *)(*(plrPLAYER_COMMON **)(param_2 + 0x13c) + 0x14) == 0x504c5952) {
      plrPLAYER_COMMON::GetHealthArmorDiff
                (*(plrPLAYER_COMMON **)(param_2 + 0x13c),(dmgDAMAGE *)local_34,&local_60,&local_58);
      fVar4 = local_60;
    }
    local_60 = fVar4 * local_5c;
    this = *(plrPLAYER_COMMON **)(param_2 + 0x13c);
    if (local_60 < *(float *)(this + 0xcc)) {
      msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x4c5,local_34,(msgADDR *)0x0);
      return;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      if (*(int *)(this + 0x14) == 0x244e5043) {
        if (((byte)this[0x51b] & 4) != 0) {
          return;
        }
        if ((*(uint *)(this + 1099) & 0x200000) != 0) {
          return;
        }
      }
      else {
        if ((*(uint *)(this + 0x29b) & 0x40000000) != 0) {
          return;
        }
        iVar5 = (**(code **)(*(int *)this + 0x78))();
        if (iVar5 != 0) {
          return;
        }
        iVar5 = plrPLAYER_COMMON::IsIgnoreDmg(this,(dmgDAMAGE *)local_34);
        if (iVar5 != 0) {
          return;
        }
      }
      entCreate(gsScenePtr,s_pwp_sfx_opp,s_,(animCREATE_DATA *)0x0,&local_48,0);
    }
  }
  return;
}




/* from: pwp_opp_sfx.cpp
   addr: 00417B90 */

void __fastcall pwpOPP_SFX::Start(pwpOPP_SFX_START *param_1)

{
  int iVar1;
  int local_54;
  undefined4 local_50 [20];
  
  if (*(int *)(param_1 + 0x20) == 2) {
    dmgCollectInst((m3dV *)param_1,(float)local_50,*(animINST ***)(param_1 + 0x14),&local_54,0x14);
    iVar1 = 0;
    if (0 < local_54) {
      do {
        Start(param_1,(animINST *)local_50[iVar1]);
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_54);
      return;
    }
  }
  else {
    Start(param_1,*(animINST **)(param_1 + 0x1c));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00417BF0 */

int __thiscall pwpOPP_SFX::ProcessINIT(pwpOPP_SFX *this,void *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  animINST *this_00;
  void *pvVar4;
  void *pvVar5;
  entIACTIVE_OBJ *peVar6;
  int iVar7;
  objFILTER_PART_SOURCE *poVar8;
  undefined4 uVar9;
  pteTEX2 *ppVar10;
  m3dCTRL_TIME *this_01;
  pwpMDG_SHOOT_TARGET_SFX_EMITTER *this_02;
  partEMITTER_PHYS *ppVar11;
  pteSHADER *this_03;
  pwpOPP_BURN *this_04;
  pteEMAP_CHROME *this_05;
  m3dSPL *pmVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined8 extraout_MM1;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  m3dV amStack_6c [12];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined **local_54;
  undefined4 local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  dmgWEAPON adStack_34 [8];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  pvVar4 = param_1;
  local_50 = 1;
  local_54 = &m3dBOX::_vftable_;
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
  peVar6 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)((int)param_1 + 0x10),0);
  *(entIACTIVE_OBJ **)(this + 0x157) = peVar6;
  if (peVar6 == (entIACTIVE_OBJ *)0x0) {
    return 0;
  }
  if (*(int *)(peVar6 + 0x14) == 0x504c5952) {
    *(uint *)(peVar6 + 0x29b) = *(uint *)(peVar6 + 0x29b) | 0x40000000;
    iVar7 = (**(code **)(**(int **)(this + 0x157) + 0x110))();
    if (iVar7 == 0) {
      *(undefined4 *)(this + 0x157) = *(undefined4 *)(*(int *)(this + 0x157) + 0x377);
    }
    *(uint *)(this + 0x153) = *(uint *)(this + 0x153) | 1;
  }
  else if (*(int *)(peVar6 + 0x14) == 0x244e5043) {
    *(uint *)(peVar6 + 0x51b) = *(uint *)(peVar6 + 0x51b) | 4;
  }
  if (((byte)this[0x153] & 1) == 0) {
    poVar8 = (objFILTER_PART_SOURCE *)operator_new(0x14);
    if (poVar8 != (objFILTER_PART_SOURCE *)0x0) {
      uVar9 = objFILTER_PART_SOURCE::objFILTER_PART_SOURCE(poVar8,1);
      goto LAB_00417ce0;
    }
  }
  else {
    poVar8 = (objFILTER_PART_SOURCE *)operator_new(0x14);
    if (poVar8 != (objFILTER_PART_SOURCE *)0x0) {
      uVar9 = objFILTER_PART_SOURCE::objFILTER_PART_SOURCE(poVar8,2);
      goto LAB_00417ce0;
    }
  }
  uVar9 = 0;
LAB_00417ce0:
  *(undefined4 *)(this + 0x18b) = uVar9;
  animINST::GetBBox(*(animINST **)(*(int *)(this + 0x157) + 0xbc),(m3dBOX *)&local_54);
  fVar20 = ___real_3f800000;
  fVar17 = (fStack_4c - fStack_40) * (fStack_4c - fStack_40) +
           (fStack_48 - fStack_3c) * (fStack_48 - fStack_3c) +
           (fStack_44 - fStack_38) * (fStack_44 - fStack_38);
  uVar15 = extraout_MM1;
  if (m3dSimdType == 0) {
    fVar17 = fVar17 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar18 = auVar19._0_4_;
    param_1 = (void *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar18 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar17 * fVar18 * fVar18) *
                      fVar17);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar14 = (ulonglong)(uint)fVar17;
    uVar15 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar14);
    uVar16 = PackedFloatingMUL(uVar15,uVar15);
    uVar16 = PackedFloatingReciprocalSQRIter1(uVar16,uVar14);
    uVar15 = PackedFloatingReciprocalIter2(uVar16,uVar15);
    uVar15 = PackedFloatingMUL(uVar15,uVar14);
    param_1 = (void *)uVar15;
    FastExitMediaState();
  }
  else {
    param_1 = (void *)SQRT(fVar17);
  }
  pvVar5 = param_1;
  if (m3dSimdType == 0) {
    fVar17 = `float___cdecl_m3dSqrt(float)'::__l2::very_small + 5.0;
    auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar18 = auVar19._0_4_;
    param_1 = (void *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar18 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar17 * fVar18 * fVar18) *
                      fVar17);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar15 = PackedFloatingReciprocalSQRAprox(uVar15,0x40a00000);
    uVar16 = PackedFloatingMUL(uVar15,uVar15);
    uVar16 = PackedFloatingReciprocalSQRIter1(uVar16,0x40a00000);
    uVar15 = PackedFloatingReciprocalIter2(uVar16,uVar15);
    uVar15 = PackedFloatingMUL(uVar15,0x40a00000);
    param_1 = (void *)uVar15;
    FastExitMediaState();
  }
  else {
    param_1 = (void *)SQRT((float)___real_4014000000000000);
  }
  fVar17 = ((float)pvVar5 / (float)param_1) * ___real_3f000000;
  *(float *)(this + 0x163) = fVar17;
  if (fVar17 <= fVar20) {
    *(float *)(this + 0x173) = fVar17;
    *(float *)(this + 0x16f) = fVar17;
    *(float *)(this + 0x16b) = fVar17;
    *(float *)(this + 0x167) = fVar17;
  }
  else {
    fVar20 = fVar17 - ___real_3f800000;
    *(float *)(this + 0x167) = ___real_3f2aaaab * fVar20 + ___real_3f800000;
    *(float *)(this + 0x16b) = ___real_3f000000 * fVar20 + ___real_3f800000;
    *(float *)(this + 0x16f) = ___real_3eaaaaab * fVar20 + ___real_3f800000;
    *(float *)(this + 0x173) = fVar20 * ___real_3e800000 + ___real_3f800000;
  }
  uVar9 = *(undefined4 *)((int)pvVar4 + 8);
  *(undefined4 *)(this + 0x14f) = uVar9;
  fVar20 = *(float *)((int)pvVar4 + 4);
  *(float *)(this + 0x17f) = fVar20;
  fVar18 = *(float *)((int)pvVar4 + 0xc);
  *(float *)(this + 0x183) = fVar18;
  *(undefined4 *)(this + 0x15b) = 0;
  switch(uVar9) {
  case 4:
    fVar17 = m3dRandRange(fVar20,fVar18);
    *(float *)(this + 0x15f) = fVar17;
    ppVar10 = (pteTEX2 *)operator_new(0x1e4);
    if (ppVar10 == (pteTEX2 *)0x0) {
      this_03 = (pteSHADER *)0x0;
    }
    else {
      this_03 = (pteSHADER *)pteTEX2::pteTEX2(ppVar10);
    }
    pteSHADER::SetInstCreate(this_03,*(animINST **)(*(int *)(this + 0x157) + 0xbc));
    pteSHADER::Register(this_03);
    pteTEX2::AddTexReplace((pteTEX2 *)this_03,(txmTEXTURE *)0x0,pBurnTex);
    pmVar12 = (m3dSPL *)operator_new(0x34);
    if (pmVar12 == (m3dSPL *)0x0) {
      pmVar12 = (m3dSPL *)0x0;
    }
    else {
      *(undefined4 *)(pmVar12 + 4) = 0;
      *(undefined4 *)(pmVar12 + 8) = 0;
      *(undefined4 *)(pmVar12 + 0xc) = 0;
      *(undefined4 *)(pmVar12 + 0x14) = 8;
      *(undefined4 *)(pmVar12 + 0x18) = 8;
      *(undefined4 *)(pmVar12 + 0x1c) = 1;
      *(undefined4 *)(pmVar12 + 0x20) = 0;
      *(undefined4 *)(pmVar12 + 0x24) = 0;
      *(undefined4 *)(pmVar12 + 0x28) = 0;
      *(undefined4 *)(pmVar12 + 0x2c) = 0;
      *(undefined4 *)(pmVar12 + 0x30) = 0;
      *(undefined ***)pmVar12 = &m3dSPL_LINEAR1D::_vftable_;
      m3dSPL::AllocKpList(pmVar12,3);
    }
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar12,0,0.0,0.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar12,1,0.3,0.4);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar12,2,0.95,1.0);
    puVar13 = (undefined4 *)operator_new(0x20);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      uVar9 = *(undefined4 *)(this + 0x15f);
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = uVar9;
      puVar13[4] = 0x3f800000;
      puVar13[5] = 0;
      *puVar13 = &m3dCTRL_TIME::_vftable_;
      puVar13[1] = puVar13[1] | 1;
      puVar13[6] = 0;
      puVar13[7] = pmVar12;
      *puVar13 = &m3dCTRL_1D_SPL::_vftable_;
    }
    *(undefined4 **)(this + 0x193) = puVar13;
    puVar13[1] = puVar13[1] | 6;
    *(undefined4 *)(this_03 + 0x9c) = *(undefined4 *)(this + 0x193);
    *(pteSHADER **)(this + 399) = this_03;
    *(undefined4 *)(this + 0x177) = 0x3f800000;
    *(undefined4 *)(this + 0x17b) = 0x3e99999a;
    this_04 = (pwpOPP_BURN *)operator_new(0x2c0);
    if (this_04 == (pwpOPP_BURN *)0x0) {
      ppVar11 = (partEMITTER_PHYS *)0x0;
    }
    else {
      ppVar11 = (partEMITTER_PHYS *)
                pwpOPP_BURN::pwpOPP_BURN
                          (this_04,*(float *)(this + 0x173) * ___real_3e800000,
                           *(float *)(this + 0x173) * ___real_3f99999a,*(float *)(this + 0x15f));
    }
    iVar7 = AddPartSfx(this,ppVar11);
    if (iVar7 == 0) {
      return 0;
    }
    animINST::GetCenter(*(animINST **)(*(int *)(this + 0x157) + 0xbc),amStack_6c);
    gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_006033c8,amStack_6c);
    return 1;
  case 5:
    fVar17 = m3dRandRange(fVar20,fVar18);
    *(float *)(this + 0x15f) = fVar17;
    *(undefined4 *)(this + 0x177) = 0x3f800000;
    *(undefined4 *)(this + 0x17b) = 0x40100000;
    animINST::GetCenter(*(animINST **)(*(int *)(this + 0x157) + 0xbc),amStack_6c);
    gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_006032f8,amStack_6c);
    return 1;
  case 7:
    fVar17 = *(float *)(this + 0x16b) * ___real_3f4ccccd;
    fVar20 = m3dRandRange(fVar20,fVar18);
    *(float *)(this + 0x15f) = fVar20 + fVar17;
    ppVar10 = (pteTEX2 *)operator_new(0x1e4);
    if (ppVar10 == (pteTEX2 *)0x0) {
      param_1 = (void *)0x0;
    }
    else {
      param_1 = (void *)pteTEX2::pteTEX2(ppVar10);
    }
    pteSHADER::SetInstCreate((pteSHADER *)param_1,*(animINST **)(*(int *)(this + 0x157) + 0xbc));
    pteSHADER::Register((pteSHADER *)param_1);
    pteTEX2::AddTexReplace((pteTEX2 *)param_1,(txmTEXTURE *)0x0,pStoneTex);
    pmVar12 = (m3dSPL *)operator_new(0x34);
    if (pmVar12 == (m3dSPL *)0x0) {
      pmVar12 = (m3dSPL *)0x0;
    }
    else {
      *(undefined4 *)(pmVar12 + 4) = 0;
      *(undefined4 *)(pmVar12 + 8) = 0;
      *(undefined4 *)(pmVar12 + 0xc) = 0;
      *(undefined4 *)(pmVar12 + 0x14) = 8;
      *(undefined4 *)(pmVar12 + 0x18) = 8;
      *(undefined4 *)(pmVar12 + 0x1c) = 1;
      *(undefined4 *)(pmVar12 + 0x20) = 0;
      *(undefined4 *)(pmVar12 + 0x24) = 0;
      *(undefined4 *)(pmVar12 + 0x28) = 0;
      *(undefined4 *)(pmVar12 + 0x2c) = 0;
      *(undefined4 *)(pmVar12 + 0x30) = 0;
      *(undefined ***)pmVar12 = &m3dSPL_LINEAR1D::_vftable_;
      m3dSPL::AllocKpList(pmVar12,2);
    }
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar12,0,0.0,0.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar12,1,1.0,1.0);
    this_01 = (m3dCTRL_TIME *)operator_new(0x20);
    if (this_01 == (m3dCTRL_TIME *)0x0) {
      this_01 = (m3dCTRL_TIME *)0x0;
    }
    else {
      *(undefined4 *)(this_01 + 4) = 0;
      *(float *)(this_01 + 0xc) = fVar17;
      *(undefined4 *)(this_01 + 8) = 0;
      *(undefined4 *)(this_01 + 0x10) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x14) = 0;
      *(undefined ***)this_01 = &m3dCTRL_TIME::_vftable_;
      m3dCTRL_TIME::Enable(this_01,1);
      *(undefined4 *)(this_01 + 0x18) = 0;
      *(m3dSPL **)(this_01 + 0x1c) = pmVar12;
      *(undefined ***)this_01 = &m3dCTRL_1D_SPL::_vftable_;
    }
    *(m3dCTRL_TIME **)(this + 0x193) = this_01;
    *(uint *)(this_01 + 4) = *(uint *)(this_01 + 4) | 6;
    *(undefined4 *)((int)param_1 + 0x9c) = *(undefined4 *)(this + 0x193);
    *(void **)(this + 399) = param_1;
    this_02 = (pwpMDG_SHOOT_TARGET_SFX_EMITTER *)operator_new(0x2c0);
    if (this_02 == (pwpMDG_SHOOT_TARGET_SFX_EMITTER *)0x0) {
      ppVar11 = (partEMITTER_PHYS *)0x0;
    }
    else {
      ppVar11 = (partEMITTER_PHYS *)
                pwpMDG_SHOOT_TARGET_SFX_EMITTER::pwpMDG_SHOOT_TARGET_SFX_EMITTER
                          (this_02,*(float *)(this + 0x173) * ___real_3d8f5c29,
                           *(float *)(this + 0x16b));
    }
    iVar7 = AddPartSfx(this,ppVar11);
    if (iVar7 == 0) {
      return 0;
    }
    break;
  case 10:
    *(float *)(this + 0x15f) = fVar17 * ___real_40800000;
    this_05 = (pteEMAP_CHROME *)operator_new(0x118);
    if (this_05 == (pteEMAP_CHROME *)0x0) {
      this_05 = (pteEMAP_CHROME *)0x0;
    }
    else {
      pteEMAP_CHROME::pteEMAP_CHROME(this_05);
      *(undefined ***)this_05 = &minoREGEN_CHROME::_vftable_;
      *(undefined4 *)(this_05 + 0x10c) = 0x3e19999a;
      *(undefined4 *)(this_05 + 0x110) = 0;
      *(undefined4 *)(this_05 + 0x7c) = 0xaf;
    }
    *(txmTEXTURE **)((pteSHADER *)this_05 + 0x68) = pChromeTex;
    pteSHADER::SetInstCreate((pteSHADER *)this_05,*(animINST **)(*(int *)(this + 0x157) + 0xbc));
    pteSHADER::Register((pteSHADER *)this_05);
    pmVar12 = (m3dSPL *)operator_new(0x34);
    if (pmVar12 == (m3dSPL *)0x0) {
      pmVar12 = (m3dSPL *)0x0;
    }
    else {
      *(undefined4 *)(pmVar12 + 4) = 0;
      *(undefined4 *)(pmVar12 + 8) = 0;
      *(undefined4 *)(pmVar12 + 0xc) = 0;
      *(undefined4 *)(pmVar12 + 0x14) = 8;
      *(undefined4 *)(pmVar12 + 0x18) = 8;
      *(undefined4 *)(pmVar12 + 0x1c) = 1;
      *(undefined4 *)(pmVar12 + 0x20) = 0;
      *(undefined4 *)(pmVar12 + 0x24) = 0;
      *(undefined4 *)(pmVar12 + 0x28) = 0;
      *(undefined4 *)(pmVar12 + 0x2c) = 0;
      *(undefined4 *)(pmVar12 + 0x30) = 0;
      *(undefined ***)pmVar12 = &m3dSPL_LINEAR1D::_vftable_;
      m3dSPL::AllocKpList(pmVar12,4);
    }
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar12,0,0.0,0.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar12,1,0.05,0.75);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar12,2,0.95,0.75);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar12,3,1.0,1.0);
    puVar13 = (undefined4 *)operator_new(0x20);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      uVar9 = *(undefined4 *)(this + 0x15f);
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = uVar9;
      puVar13[4] = 0x3f800000;
      puVar13[5] = 0;
      *puVar13 = &m3dCTRL_TIME::_vftable_;
      puVar13[1] = puVar13[1] | 1;
      puVar13[6] = 0;
      puVar13[7] = pmVar12;
      *puVar13 = &m3dCTRL_1D_SPL::_vftable_;
    }
    *(undefined4 **)(this + 0x193) = puVar13;
    puVar13[1] = puVar13[1] | 6;
    *(undefined4 *)((pteSHADER *)this_05 + 0x114) = *(undefined4 *)(this + 0x193);
    piVar1 = *(int **)(this + 0x157);
    *(pteEMAP_CHROME **)(this + 399) = this_05;
    if ((*(byte *)(piVar1 + 0x22) & 1) == 0) {
      if (piVar1[5] == 0x244e5043) {
        (**(code **)(*piVar1 + 0x160))();
      }
      else if (piVar1[0x25] == 2) {
        dmgWEAPON::dmgWEAPON(adStack_34);
        uVar9 = *(undefined4 *)(this + 0x17f);
        uVar2 = *(undefined4 *)(this + 0x183);
        uVar3 = *(undefined4 *)(this + 0x14f);
        this_00 = *(animINST **)(*(int *)(this + 0x157) + 0xbc);
        animINST::GetCenter(this_00,(m3dV *)&fStack_24);
        uStack_18 = uVar3;
        animINST::GetDir(this_00,(m3dV *)&fStack_60);
        fStack_14 = fStack_60 * ___real_40400000 + fStack_24;
        fStack_10 = fStack_5c * ___real_40400000 + fStack_20;
        fStack_c = fStack_58 * ___real_40400000 + fStack_1c;
        uStack_2c = uVar9;
        uStack_28 = uVar2;
        (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c5,adStack_34,0x20000);
      }
    }
    chdMeltStart(*(entENTITY **)(this + 0x157));
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00418630 */

void __thiscall pwpOPP_SFX::ProcessFRAME(pwpOPP_SFX *this)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  objOBJ *poVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  objMODIFIER *poVar8;
  pwpMDG_SHOOT_TARGET_SFX_EMITTER *this_00;
  partEMITTER_PHYS *ppVar9;
  objOBJ *poVar10;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  dmgWEAPON local_cc [52];
  animCREATE_DATA local_98 [152];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  dmgWEAPON::dmgWEAPON(local_cc);
  if ((((byte)this[0x153] & 2) == 0) && (iVar7 = UpdatePartSfx(this), iVar7 != 0)) {
    local_e8 = (float)(uint)(ABS(*(float *)(this + 0x177)) < _DAT_005d0170);
    if (((float)(int)local_e8 == ___real_00000000) &&
       (local_e8 = (float)(uint)(ABS(*(float *)(this + 0x17b)) < _DAT_005d0170),
       (float)(int)local_e8 == ___real_00000000)) {
      fVar2 = *(float *)(this + 0x15f);
      fVar3 = *(float *)(this + 0x15b);
      local_e0 = 0.0;
      fVar5 = *(float *)(this + 0x177);
      local_ec = *(float *)(this + 0x17b);
      local_e4 = fVar2;
      if (fVar2 < ___real_00000000) {
        local_e4 = 0.0;
        fVar5 = *(float *)(this + 0x17b);
        local_ec = *(float *)(this + 0x177);
        local_e0 = fVar2;
      }
      fVar2 = fVar5;
      if ((local_e0 <= fVar3) && (fVar2 = local_ec, fVar3 <= local_e4)) {
        local_dc = local_e4;
        local_d8 = local_e0;
        local_d0 = local_ec;
        local_e8 = fVar5;
        if (local_e4 < local_e0) {
          local_d8 = local_e4;
          local_dc = local_e0;
          local_e8 = local_ec;
          local_d0 = fVar5;
        }
        fVar2 = ((fVar3 - local_d8) * (local_d0 - local_e8)) / (local_dc - local_d8) + local_e8;
      }
      local_ec = fVar2;
      poVar4 = *(objOBJ **)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10);
      if (0 < *(int *)(poVar4 + 0x14)) {
        for (poVar8 = objOBJ::FindNextModifier(poVar4,(objMODIFIER *)0x0,0x200,0x534b494e);
            poVar8 != (objMODIFIER *)0x0;
            poVar8 = objOBJ::FindNextModifier(poVar4,poVar8,0x200,0x534b494e)) {
          *(float *)(poVar8 + 0x40) = local_ec;
        }
      }
      bVar6 = false;
      poVar4 = *(objOBJ **)(poVar4 + 0x38);
      for (poVar10 = poVar4; (poVar4 != (objOBJ *)0x0 && ((!bVar6 || (poVar10 != poVar4))));
          poVar10 = *(objOBJ **)(poVar10 + 0x30)) {
        SetSkinScaleYZ(this,poVar10,local_ec);
        bVar6 = true;
      }
      animINST::Invalidate(*(animINST **)(*(int *)(this + 0x157) + 0xbc),0x200);
    }
    if ((*(int *)(this + 0x14f) == 10) &&
       (iVar7 = chdMeltIsComplete(*(objOBJ **)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10)),
       iVar7 != 0)) {
      chdMeltStartSink(*(objOBJ **)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10));
      if (*(int *)(this + 0x187) == 0) {
        this_00 = (pwpMDG_SHOOT_TARGET_SFX_EMITTER *)operator_new(0x2c0);
        if (this_00 == (pwpMDG_SHOOT_TARGET_SFX_EMITTER *)0x0) {
          ppVar9 = (partEMITTER_PHYS *)0x0;
        }
        else {
          ppVar9 = (partEMITTER_PHYS *)
                   pwpMDG_SHOOT_TARGET_SFX_EMITTER::pwpMDG_SHOOT_TARGET_SFX_EMITTER
                             (this_00,*(float *)(this + 0x173) * ___real_3d8f5c29,
                              *(float *)(this + 0x16b) + *(float *)(this + 0x16b));
        }
        iVar7 = AddPartSfx(this,ppVar9);
        if (iVar7 == 0) {
          return;
        }
      }
      puVar1 = (uint *)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 4);
      *puVar1 = *puVar1 | 0x2000000;
    }
    fVar2 = gsElapsedTime + *(float *)(this + 0x15b);
    *(float *)(this + 0x15b) = fVar2;
    if ((*(float *)(this + 0x15f) < fVar2) && (((byte)this[0x153] & 2) == 0)) {
      FinishEffect(this);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00418960 */

void __thiscall pwpOPP_SFX::OnFinishEffect(pwpOPP_SFX *this)

{
  entENTITY *peVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  sncSOUND_DESCR_3D *psVar7;
  uint uVar8;
  m3dV local_c4 [12];
  float local_b8;
  undefined **local_b4 [7];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  local_b4[0] = &rgdSHATTER_RIGID_START::_vftable_;
  animCREATE_DATA::animCREATE_DATA(local_98);
  peVar1 = *(entENTITY **)(this + 0x157);
  if (peVar1 == (entENTITY *)0x0) {
    return;
  }
  uVar8 = *(uint *)(this + 0x153);
  if ((uVar8 & 2) != 0) {
    return;
  }
  iVar6 = *(int *)(this + 0x14f);
  if (iVar6 == 4) {
    bVar3 = (uVar8 & 1) == 0;
    if (bVar3) {
      iVar6 = 1;
    }
    else {
      iVar6 = 2;
    }
    uVar8 = (uint)!bVar3;
    fVar5 = 3.0;
    fVar4 = 8.0;
    iVar2 = ftol();
    rgdSHATTER_RIGID_START::StartExplos
              ((rgdSHATTER_RIGID_START *)local_b4,peVar1,iVar2,fVar4,fVar5,iVar6,uVar8);
    animINST::GetCenter(*(animINST **)(*(int *)(this + 0x157) + 0xbc),local_c4);
    psVar7 = (sncSOUND_DESCR_3D *)&DAT_00603430;
  }
  else if (iVar6 == 5) {
    animINST::GetCenter(*(animINST **)(peVar1 + 0xbc),local_c4);
    m3dMATR::MakeLCS2WCS_VY(local_86,local_c4,&m3dVUnitY);
    local_b8 = *(float *)(this + 0x167) * ___real_3e4ccccd;
    entCreate(gsScenePtr,s_pwp_sfx_opp_acd_expl,s_pwp_sfx_opp_acd_expl,local_98,&local_b8,0);
    if (((byte)this[0xc] & 4) != 0) goto LAB_00418aed;
    animINST::GetCenter(*(animINST **)(*(int *)(this + 0x157) + 0xbc),local_c4);
    psVar7 = (sncSOUND_DESCR_3D *)&DAT_00603360;
  }
  else {
    if (iVar6 != 7) goto LAB_00418aed;
    bVar3 = (uVar8 & 1) == 0;
    if (bVar3) {
      iVar6 = 1;
    }
    else {
      iVar6 = 2;
    }
    uVar8 = (uint)!bVar3;
    fVar5 = 3.0;
    fVar4 = 8.0;
    iVar2 = ftol();
    rgdSHATTER_RIGID_START::StartExplos
              ((rgdSHATTER_RIGID_START *)local_b4,peVar1,iVar2,fVar4,fVar5,iVar6,uVar8);
    animINST::GetCenter(*(animINST **)(*(int *)(this + 0x157) + 0xbc),local_c4);
    psVar7 = (sncSOUND_DESCR_3D *)&DAT_00603498;
  }
  gsSND_SYSTEM::Play(gsSysSound,psVar7,local_c4);
LAB_00418aed:
  if ((((byte)(*(msgADDR **)(this + 0x157))[0x88] & 4) != 0) && (((byte)this[0x153] & 1) == 0)) {
    msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x157),2,(msgADDR *)0x0);
  }
  msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
  uVar8 = *(uint *)(this + 0x153);
  *(uint *)(this + 0x153) = uVar8 | 2;
  if (((uVar8 & 1) != 0) && ((uVar8 & 4) == 0)) {
    RemovePlrSfx(this);
  }
  return;
}




/* from: pwp_opp_sfx.cpp
   addr: 00418B50 */

void __thiscall pwpOPP_SFX::RemovePlrSfx(pwpOPP_SFX *this)

{
  uint *puVar1;
  uint uVar2;
  objOBJ *this_00;
  objMODIFIER *poVar3;
  objOBJ *poStack_10;
  objOBJ *poStack_c;
  objOBJ *poStack_8;
  int iStack_4;
  
  uVar2 = *(uint *)(this + 0x153);
  if (((uVar2 & 1) != 0) && ((uVar2 & 4) == 0)) {
    *(uint *)(this + 0x153) = uVar2 | 4;
    if (*(int *)(this + 0x14f) == 10) {
      chdRemoveDeform(*(objOBJ **)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10));
    }
    if (*(undefined4 **)(this + 399) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 399))(1);
    }
    pwpOppSfxRestoreTex(*(objOBJ **)
                         (*(int *)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x138) + 0x88),
                        *(objOBJ ***)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 300));
    objOBJ::SetStateProcYes
              (*(objOBJ **)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10),8,
               (_func_int_objOBJ_ptr_void_ptr *)0x0);
    this_00 = *(objOBJ **)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10);
    poStack_10 = this_00;
    objOBJ_ITER::Rewind((objOBJ_ITER *)&poStack_10);
    if (0 < *(int *)(this_00 + 0x14)) {
      for (poVar3 = objOBJ::FindNextModifier(this_00,(objMODIFIER *)0x0,0x200,0x534b494e);
          poVar3 != (objMODIFIER *)0x0;
          poVar3 = objOBJ::FindNextModifier(this_00,poVar3,0x200,0x534b494e)) {
        *(undefined4 *)(poVar3 + 0x40) = 0x3f800000;
      }
    }
    poStack_c = (objOBJ *)0x0;
    if (poStack_10 != (objOBJ *)0x0) {
      iStack_4 = 0;
      poStack_c = *(objOBJ **)(poStack_10 + 0x38);
      poStack_8 = poStack_c;
    }
    for (; (poStack_c != (objOBJ *)0x0 && ((iStack_4 == 0 || (poStack_8 != poStack_c))));
        poStack_8 = *(objOBJ **)(poStack_8 + 0x30)) {
      SetSkinScaleYZ(this,poStack_8,1.0);
      iStack_4 = 1;
    }
    animINST::Invalidate(*(animINST **)(*(int *)(this + 0x157) + 0xbc),0x200);
    *(uint *)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 4) =
         *(uint *)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 4) & 0xfdffffff;
    if (*(int *)(*(int *)(this + 0x157) + 0x94) == 2) {
      *(uint *)(plrPlayer + 0x29b) = *(uint *)(plrPlayer + 0x29b) & 0xbfffffff;
      return;
    }
    puVar1 = (uint *)(*(int *)(this + 0x157) + 0x29b);
    *puVar1 = *puVar1 & 0xbfffffff;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00418D00 */

void __thiscall pwpOPP_SFX::FinishEffect(pwpOPP_SFX *this)

{
  int iVar1;
  undefined4 uVar2;
  animINST *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  msgDATA local_48;
  undefined1 local_47;
  undefined2 local_46;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  dmgWEAPON local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  
  dmgWEAPON::dmgWEAPON(local_34);
  if (((((byte)this[0x153] & 2) == 0) && (iVar1 = *(int *)(this + 0x157), iVar1 != 0)) &&
     (((byte)this[0x88] & 4) != 0)) {
    if ((*(byte *)(iVar1 + 0x88) & 4) != 0) {
      uVar2 = *(undefined4 *)(this + 0x17f);
      this_00 = *(animINST **)(iVar1 + 0xbc);
      uVar3 = *(undefined4 *)(this + 0x14f);
      uVar4 = *(undefined4 *)(this + 0x183);
      animINST::GetCenter(this_00,(m3dV *)&local_24);
      local_18 = uVar3;
      animINST::GetDir(this_00,(m3dV *)&local_40);
      iVar1 = *(int *)(this + 0x157);
      local_14 = local_40 * ___real_40400000 + local_24;
      local_10 = local_3c * ___real_40400000 + local_20;
      local_c = local_38 * ___real_40400000 + local_1c;
      local_2c = uVar2;
      local_28 = uVar4;
      if (((*(int *)(iVar1 + 0x14) == 0x504c5952) && (*(int *)(iVar1 + 0x94) == 2)) &&
         (*(int *)(this + 0x14f) != 10)) {
        (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c5,local_34,0x20000);
      }
      else {
        (**(code **)(*(int *)gsSysClient + 0x2c))(iVar1,0x4c5,local_34,0x20000);
        if (*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x13c) + 0x14) == 0x244e5043) {
          *(uint *)(*(int *)(this + 0x157) + 0x51b) =
               *(uint *)(*(int *)(this + 0x157) + 0x51b) & 0xfffffffb;
        }
      }
    }
    local_48 = (msgDATA)0x0;
    local_47 = 0x40;
    local_46 = 8;
    local_44 = 0;
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_48,0x20000,0xfffffffd,0xfffffffd);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00418E90 */

void __thiscall pwpOPP_SFX::ProcessMP_GET_SYNC_DATA(pwpOPP_SFX *this,void *param_1)

{
  undefined *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_00603508 & 1) == 0) {
      DAT_00603508 = DAT_00603508 | 1;
      DAT_006032e8 = 0;
      DAT_006032e9 = 0x40;
      DAT_006032ec = 0;
      _DAT_006032ea = 8;
      atexit((_func_4879 *)&__E62);
    }
    puVar1 = &DAT_006032e8;
    *(undefined1 **)param_1 = &DAT_006032e8;
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(this + 0x15b);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00418F00 */

void __thiscall pwpOPP_SFX::ProcessMP_READ_SYNC_DATA(pwpOPP_SFX *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined *puVar2;
  short local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  puVar2 = *(undefined **)param_1;
  local_10 = 0;
  if (puVar2 == (undefined *)0x0) {
    if ((DAT_00603508 & 1) == 0) {
      DAT_00603508 = DAT_00603508 | 1;
      DAT_006032ec = 0;
      _DAT_006032e8 = 0x84000;
      atexit((_func_4879 *)&__E62);
    }
    puVar2 = &DAT_006032e8;
    *(undefined **)param_1 = &DAT_006032e8;
    _DAT_006032e8 = 0x84000;
    DAT_006032ec = 0;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  while ((iVar1 != 0 && (local_10 != 1))) {
    if (local_10 == 0xf0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2 + 4,4,4);
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  }
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: pwp_opp_sfx.cpp
   addr: 00419000 */

int __thiscall
pwpOPP_SFX::ProcessMsg(pwpOPP_SFX *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 4) {
    if (param_1 == 3) {
      if (param_2 == *(void **)(this + 0x157)) {
        *(undefined4 *)(this + 0x157) = 0;
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
        return 0;
      }
    }
    else {
      if (param_1 == 1) {
        ProcessINIT(this,param_2);
        return 0;
      }
      if (param_1 == 2) {
        RemovePlrSfx(this);
        if (*(partEMITTER_PHYS **)(this + 0x187) != (partEMITTER_PHYS *)0x0) {
          partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x187));
          *(uint *)(*(int *)(this + 0x187) + 4) = *(uint *)(*(int *)(this + 0x187) + 4) | 0x200;
          *(undefined4 *)(this + 0x187) = 0;
        }
        if (*(void **)(this + 0x18b) != (void *)0x0) {
          operator_delete(*(void **)(this + 0x18b));
          *(undefined4 *)(this + 0x18b) = 0;
          return 0;
        }
      }
    }
  }
  else {
    if (param_1 == 1000) {
      ProcessFRAME(this);
      return 0;
    }
    if (param_1 == 0x40c) {
      if (*(int *)((int)param_2 + 4) == -100) {
        uVar1 = *(undefined4 *)(*(int *)((int)param_2 + 8) + 4);
        *(undefined4 *)(this + 0x15b) = uVar1;
        iVar2 = *(int *)(this + 0x193);
        if ((iVar2 != 0) && ((*(byte *)(iVar2 + 4) & 1) != 0)) {
          *(undefined4 *)(iVar2 + 8) = uVar1;
          return 0;
        }
      }
      else if (*(int *)((int)param_2 + 4) == 0) {
        OnFinishEffect(this);
        return 0;
      }
    }
  }
  return 0;
}




/* from: pwp_opp_sfx.cpp
   addr: 00419120 */

void __thiscall pwpOPP_SFX::SetSkinScaleYZ(pwpOPP_SFX *this,objOBJ *param_1,float param_2)

{
  objOBJ *poVar1;
  bool bVar2;
  objMODIFIER *poVar3;
  objOBJ *poVar4;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    for (poVar3 = objOBJ::FindNextModifier(param_1,(objMODIFIER *)0x0,0x200,0x534b494e);
        poVar3 != (objMODIFIER *)0x0;
        poVar3 = objOBJ::FindNextModifier(param_1,poVar3,0x200,0x534b494e)) {
      *(float *)(poVar3 + 0x40) = param_2;
    }
  }
  bVar2 = false;
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  for (poVar4 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar4 != poVar1))));
      poVar4 = *(objOBJ **)(poVar4 + 0x30)) {
    SetSkinScaleYZ(this,poVar4,param_2);
    bVar2 = true;
  }
  return;
}




/* from: pwp_opp_sfx.cpp
   addr: 004191A0 */

int __thiscall pwpOPP_SFX::AddPartSfx(pwpOPP_SFX *this,partEMITTER_PHYS *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x187) == 0) {
    if (param_1 == (partEMITTER_PHYS *)0x0) {
      return (int)param_1;
    }
    *(partEMITTER_PHYS **)(this + 0x187) = param_1;
    iVar1 = ftol();
    objFILTER_PART_SOURCE::Reset(*(objFILTER_PART_SOURCE **)(this + 0x18b));
    objFind(*(objOBJ **)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10),
            *(objFILTER **)(this + 0x18b));
    iVar2 = *(int *)(*(int *)(this + 0x18b) + 4);
    if (0 < iVar2) {
      iVar2 = partSetAreaEmissionObjList
                        (*(partEMITTER_PHYS **)(this + 0x187),iVar2,
                         (objOBJ **)(*(int *)(this + 0x18b) + 0xc),iVar1,(m3dV *)0x0);
      if (iVar2 == 0) {
        return 0;
      }
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x187));
    }
  }
  return 1;
}




/* from: pwp_opp_sfx.cpp
   addr: 00419240 */

int __thiscall pwpOPP_SFX::UpdatePartSfx(pwpOPP_SFX *this)

{
  objFILTER_PART_SOURCE *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  objFILTER_PART_SOURCE *poVar4;
  int iVar5;
  m3dV local_58 [12];
  m3dV local_4c [12];
  m3dMATR local_40 [64];
  
  if (((*(int *)(this + 0x187) != 0) && (*(int *)(this + 0x157) != 0)) &&
     (*(int *)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10) != 0)) {
    iVar2 = ftol();
    this_00 = *(objFILTER_PART_SOURCE **)(this + 0x18b);
    bVar1 = false;
    iVar3 = *(int *)(this_00 + 4);
    if (0 < iVar3) {
      poVar4 = this_00 + 0xc;
      iVar5 = iVar3;
      do {
        if ((*(byte *)(*(int *)poVar4 + 8) & 3) != 0) {
          bVar1 = true;
        }
        poVar4 = poVar4 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ((iVar3 == 0) || (bVar1)) {
      objFILTER_PART_SOURCE::Reset(this_00);
      objFind(*(objOBJ **)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10),
              *(objFILTER **)(this + 0x18b));
    }
    if (*(int *)(*(int *)(this + 0x18b) + 4) < 1) {
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x187));
    }
    else {
      animINST::Validate(*(animINST **)(this + 0xbc),0x204);
      objOBJ::GetOrigin(*(objOBJ **)(*(int *)(this + 0x18b) + 0xc),local_58);
      objOBJ::GetAxisY(*(objOBJ **)(*(int *)(this + 0x18b) + 0xc),local_4c);
      m3dMATR::MakeLCS2WCS_VY(local_40,local_58,&m3dVUnitY);
      partEMITTER_PHYS::SetCS(*(partEMITTER_PHYS **)(this + 0x187),local_40);
      iVar3 = partSetAreaEmissionObjList
                        (*(partEMITTER_PHYS **)(this + 0x187),*(int *)(*(int *)(this + 0x18b) + 4),
                         (objOBJ **)(*(int *)(this + 0x18b) + 0xc),iVar2,local_58);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00419390 */

float __fastcall pwpOPP_SFX::CalcRadDamage(pwpOPP_SFX_START *param_1,animINST *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  
  if (*(int *)(param_1 + 0x20) == 1) {
    return *(float *)(param_1 + 0x10);
  }
  if ((*(int *)(param_1 + 0x20) == 2) && (param_2 == *(animINST **)(param_1 + 0x1c))) {
    if ((*(int *)(param_1 + 0xc) != 5) && (*(int *)(param_1 + 0xc) != 7)) {
      return *(float *)(param_1 + 0x10);
    }
    return ___real_43160000;
  }
  (**(code **)(**(int **)(param_2 + 0x13c) + 0x5c))(&local_c);
  fStack_2c = 0.0;
  fVar1 = (fStack_10 - *(float *)param_1) * (fStack_10 - *(float *)param_1) +
          (local_c - *(float *)(param_1 + 4)) * (local_c - *(float *)(param_1 + 4)) +
          (fStack_8 - *(float *)(param_1 + 8)) * (fStack_8 - *(float *)(param_1 + 8));
  fVar2 = *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = fVar2;
  fStack_28 = *(float *)(param_1 + 0x10) * ___real_3dcccccd;
  if (fVar2 < ___real_00000000) {
    fVar4 = 0.0;
    fVar3 = *(float *)(param_1 + 0x10) * ___real_3dcccccd;
    fStack_2c = fVar2;
    fStack_28 = *(float *)(param_1 + 0x10);
  }
  if (fStack_2c <= fVar1) {
    if (fVar4 < fVar1) {
      return fStack_28;
    }
    fStack_20 = fStack_2c;
    fStack_18 = fStack_28;
    fStack_1c = fVar3;
    fStack_14 = fVar4;
    if (fVar4 < fStack_2c) {
      fStack_14 = fStack_2c;
      fStack_1c = fStack_28;
      fStack_20 = fVar4;
      fStack_18 = fVar3;
    }
    fVar3 = ((fVar1 - fStack_20) * (fStack_18 - fStack_1c)) / (fStack_14 - fStack_20) + fStack_1c;
  }
  return fVar3;
}




/* from: pwp_opp_sfx.cpp
   addr: 00419500 */

void __fastcall pwpOppSfxRestoreTex(objOBJ *param_1,objOBJ **param_2)

{
  objOBJ *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  objOBJ *local_10;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  local_10 = param_1;
  objOBJ_ITER::Rewind((objOBJ_ITER *)&local_10);
  if (0 < *(int *)(param_1 + 0x10)) {
    local_18 = 0;
    this = param_2[*(short *)(param_1 + 0x1c)];
    if (**(short **)(*(int *)(this + 0x28) + 0x18) != 0) {
      iVar5 = *(int *)(*(short **)(*(int *)(this + 0x28) + 0x18) + 1);
      iVar4 = 0;
      do {
        iVar2 = iVar4 + iVar5;
        iVar3 = 0;
        if (0 < *(short *)(iVar2 + 100)) {
          iVar1 = 0;
          do {
            iVar3 = iVar3 + 1;
            *(undefined4 *)(iVar1 + iVar2) =
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 2) + iVar4 + -0x19 +
                  iVar1 + 0x19);
            iVar5 = *(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2);
            iVar2 = iVar4 + iVar5;
            iVar1 = iVar1 + 0x19;
          } while (iVar3 < *(short *)(iVar4 + 100 + iVar5));
        }
        local_18 = local_18 + 1;
        iVar4 = iVar4 + 0x70;
      } while (local_18 < (int)(uint)**(ushort **)(*(int *)(this + 0x28) + 0x18));
    }
    objOBJ::SetStateRendNo(this,0x20000000);
  }
  for (; (local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    pwpOppSfxRestoreTex(local_8,param_2);
    local_4 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 004195F0 */

void __thiscall minoREGEN_CHROME::GetMatrL2W(minoREGEN_CHROME *this,m3dMATR *param_1)

{
  m3dV local_c [12];
  
  animINST::GetPos(*(animINST **)(this + 0x60),local_c);
  m3dMATR::Identity(param_1);
  m3dMATR::RotateY(param_1,*(float *)(this + 0x110) * ___real_41f00000,1);
  m3dMATR::RotateX(param_1,*(float *)(this + 0x110) * ___real_41f00000,1);
  m3dMATR::Translate(param_1,local_c,2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: pwp_opp_sfx.cpp
   addr: 00419660 */

void __thiscall minoREGEN_CHROME::Update(minoREGEN_CHROME *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x110) = param_1 + *(float *)(this + 0x110);
  (**(code **)(**(int **)(this + 0x114) + 4))(param_1);
  if ((*(byte *)(*(int *)(this + 0x114) + 4) & 1) == 0) {
    (**(code **)(*(int *)this + 4))(0);
  }
  (**(code **)(**(int **)(this + 0x114) + 0xc))(this + 0x10c);
  fVar1 = *(float *)(this + 0x10c) * ___real_437f0000;
  *(undefined4 *)(this + 0x6c) = 0x437f0000;
  *(undefined4 *)(this + 0x70) = 0x437f0000;
  *(undefined4 *)(this + 0x74) = 0x437f0000;
  *(float *)(this + 0x78) = fVar1;
  return;
}




/* from: pwp_opp_sfx.cpp
   addr: 00419700 */

void __thiscall objOBJ_ITER::Rewind(objOBJ_ITER *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 4) = 0;
  if (*(int *)this != 0) {
    *(undefined4 *)(this + 0xc) = 0;
    uVar1 = *(undefined4 *)(*(int *)this + 0x38);
    *(undefined4 *)(this + 4) = uVar1;
    *(undefined4 *)(this + 8) = uVar1;
  }
  return;
}




/* from: pwp_opp_sfx.cpp
   addr: 00419730 */

void __thiscall pteSHADER::GetColor(pteSHADER *this,int param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x6c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x70);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x74);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x78);
  return;
}




/* from: pwp_opp_sfx.cpp
   addr: 00419770 */

int __thiscall pteSHADER::GetStateRend(pteSHADER *this,int param_1,int *param_2)

{
  *param_2 = *(int *)(this + 0x7c);
  return (uint)(param_1 == 1);
}




/* from: pwp_opp_sfx.cpp
   addr: 004197A0 */

entENTITY * __fastcall pwpOPP_SFX::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x19b);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x18b) = 0;
    *(undefined4 *)(this + 399) = 0;
    *(undefined4 *)(this + 0x193) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: pwp_opp_sfx.cpp
   addr: 00419810
   addr: 00419810 */

void * __thiscall pwpOPP_SFX::_scalar_deleting_destructor_(pwpOPP_SFX *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

