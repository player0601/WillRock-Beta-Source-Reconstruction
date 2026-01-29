/* from: plw_mng.cpp
   addr: 00410980 */

int __fastcall pwpMNGInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pwp_mng,0x504d4e47,0x50,pwpMINIGUN::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  pwpMNG_SHELL::pTex = txmMANAGER::Add(txmManager,s_sfx_mng_shells,0x40003,1);
  if (pwpMNG_SHELL::pTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpMNG_SMOKE::pTex = txmMANAGER::Add(txmManager,s_sfx_discus_land_cloud,0x40003,1);
  if (pwpMNG_SMOKE::pTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(7,(sncSOUND_DESCR_3D *)&DAT_006029b8);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mng.cpp
   addr: 00410A00 */

pwpMNG_SHELL * __thiscall
pwpMNG_SHELL::pwpMNG_SHELL
          (pwpMNG_SHELL *this,sncCHANNEL **param_1,sncSOUND_DESCR_3D *param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,25.0,4.0);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(sncCHANNEL ***)(this + 0x2c0) = param_1;
  *(sncSOUND_DESCR_3D **)(this + 0x2c4) = param_2;
  *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) | 0x400;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,25.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.2,param_3 * ___real_3e0ded29);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.5,param_3 * ___real_3f93d70a);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_3 * ___real_3e333333,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.9,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,4.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.0,180.0,300.0,0.0);
  uVar1 = *(uint *)(this + 4);
  fVar2 = param_3 * ___real_c21ccccd;
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(undefined4 *)(this + 0xdc) = 0;
  *(float *)(this + 0xe0) = fVar2;
  fVar2 = param_3 * ___real_41400000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f4ccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xf8) = 0x41900000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_3 * ___real_40400000;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pTex);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x468;
  *(uint *)(this + 4) = uVar1 | 0x4000468;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.015,0.4,0.3,4);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10010000;
  return this;
}




/* from: plw_mng.cpp
   addr: 00410CA0 */

void * __thiscall pwpMNG_SHELL::_scalar_deleting_destructor_(pwpMNG_SHELL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::~partEMITTER_PHYS((partEMITTER_PHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mng.cpp
   addr: 00410CD0 */

void __thiscall
pwpMNG_SHELL::PartUpdate(pwpMNG_SHELL *this,int param_1,partPART **param_2,float param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  unkbyte10 extraout_ST1;
  unkbyte10 Var5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_18;
  float local_14;
  float local_10;
  
  partEMITTER_PHYS::PartUpdate((partEMITTER_PHYS *)this,param_1,param_2,param_3);
  local_18 = *(float *)(*(int *)(this + 0x2c8) + 0xe0);
  local_10 = *(float *)(*(int *)(this + 0x2c8) + 0xe8);
  local_14 = 0.0;
  fVar6 = local_18 * local_18 + local_10 * local_10;
  if (m3dSimdType == 0) {
    fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar10._0_4_;
    param_3 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar6;
    uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    param_3 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    param_3 = SQRT(fVar6);
  }
  param_3 = (float)(uint)(ABS(param_3) < ___real_3c23d70a);
  if ((float)(int)param_3 != ___real_00000000) {
    objOBJ::GetAxisZ(*(objOBJ **)(*(int *)(this + 0x2c8) + 0x1cf),(m3dV *)&local_18);
    local_14 = 0.0;
    m3dNormalize((m3dV *)&local_18);
    iVar1 = 0;
    Var5 = extraout_ST1;
    if (0 < param_1) {
      do {
        fVar6 = *(float *)(param_2[iVar1] + 0x1c);
        fVar7 = *(float *)(param_2[iVar1] + 0x24);
        fVar8 = fVar6 * fVar6 + fVar7 * fVar7;
        if (m3dSimdType == 0) {
          fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
          fVar9 = auVar10._0_4_;
          param_3 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar2 = (ulonglong)(uint)fVar8;
          uVar3 = PackedFloatingReciprocalSQRAprox((longlong)Var5,uVar2);
          uVar4 = PackedFloatingMUL(uVar3,uVar3);
          uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
          uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
          uVar3 = PackedFloatingMUL(uVar3,uVar2);
          Var5 = CONCAT28((short)((unkuint10)Var5 >> 0x40),uVar3);
          param_3 = (float)uVar3;
          FastExitMediaState();
        }
        else {
          param_3 = SQRT(fVar8);
        }
        if ((local_14 * ___real_00000000 + local_18 * fVar6 + fVar7 * local_10 <
             ___real_3f4ccccd * param_3) && (___real_3f000000 < param_3)) {
          *(float *)(param_2[iVar1] + 0x1c) = *(float *)(param_2[iVar1] + 0x1c) * ___real_00000000;
          *(float *)(param_2[iVar1] + 0x24) = *(float *)(param_2[iVar1] + 0x24) * ___real_00000000;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mng.cpp
   addr: 00410F70 */

pwpMNG_SMOKE * __thiscall pwpMNG_SMOKE::pwpMNG_SMOKE(pwpMNG_SMOKE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x1e,100.0,0.3);
  *(undefined ***)this = &_vftable_;
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.5,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_3f000000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,param_1,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,48.45);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.0,180.0,0.0,0.0);
  fVar2 = param_1 * ___real_40a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_3fc00000;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xc0) = fVar2;
  *(float *)(this + 0xe0) = param_1 * ___real_c11ccccd;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0xa408;
  *(uint *)(this + 4) = uVar1 | 0x400a408;
  return this;
}




/* from: plw_mng.cpp
   addr: 00411170 */

void * __thiscall pwpMNG_SMOKE::_scalar_deleting_destructor_(pwpMNG_SMOKE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::~partEMITTER_PHYS((partEMITTER_PHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mng.cpp
   addr: 004111C0 */

int __thiscall pwpMNG_MOD_FLARE::Modify(pwpMNG_MOD_FLARE *this)

{
  int iVar1;
  float extraout_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  m3dMATR local_40 [64];
  
  m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x18) + 0x3c),(m3dV *)&local_58);
  m3dMATR::GetAxisZ((m3dMATR *)(*(int *)(this + 0x18) + 0x3c),(m3dV *)&local_70);
  m3dNormalize((m3dV *)&local_70);
  local_64 = _viewPos - local_58;
  local_60 = _DAT_0093446c - local_54;
  local_5c = _DAT_00934470 - local_50;
  m3dNormalize((m3dV *)&local_64);
  fVar5 = m3dAngleVector((m3dV *)&local_70,(m3dV *)&local_64);
  local_4c = local_6c * local_5c - local_68 * local_60;
  local_48 = local_68 * local_64 - local_5c * local_70;
  local_44 = local_70 * local_60 - local_6c * local_64;
  iVar1 = _m3dNormalize((m3dV *)&local_4c);
  if (iVar1 != 0) {
    objOBJ::RotateGlbAxis(*(objOBJ **)(this + 0x18),fVar5,(m3dV *)&local_4c);
    m3dMATR::GetAxisZ((m3dMATR *)(*(int *)(this + 0x18) + 0x7c),(m3dV *)&local_70);
    m3dNormalize((m3dV *)&local_70);
    m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x18) + 0x7c),(m3dV *)&local_58);
    fVar5 = m3dRandMax(extraout_ECX);
    m3dMATR::MakeRotRay(local_40,(m3dV *)&local_58,(m3dV *)&local_70,fVar5);
    m3dMATR::Transform((m3dMATR *)(*(int *)(this + 0x18) + 0x7c),local_40,2);
    iVar1 = *(int *)(this + 0x18);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      m3dMultiplyMatr((m3dMATR *)(iVar1 + 0x7c),(m3dMATR *)(*(int *)(iVar1 + 0x2c) + 0x3c),
                      (m3dMATR *)(iVar1 + 0x3c));
      return 1;
    }
    puVar3 = (undefined4 *)(iVar1 + 0x7c);
    puVar4 = (undefined4 *)(iVar1 + 0x3c);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mng.cpp
   addr: 00411350 */

int __thiscall pwpMINIGUN::CreateMngFlare(pwpMINIGUN *this)

{
  entENTITY *peVar1;
  objOBJ *this_00;
  objMOD_BILLBOARD *this_01;
  
  peVar1 = entCreate(gsScenePtr,s_dynamic,s_sfx_mng_flare,(animCREATE_DATA *)0x0,(void *)0x0,0);
  *(entENTITY **)(this + 0x1c3) = peVar1;
  if (peVar1 == (entENTITY *)0x0) {
    return 0;
  }
  objOBJ::SetStateRendYes(*(objOBJ **)(*(int *)(peVar1 + 0xbc) + 0x10),0x1000000);
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(*(int *)(this + 0x1c3) + 0xbc) + 0x10),0x10);
  *(uint *)(*(int *)(*(int *)(this + 0x1c3) + 0xbc) + 4) =
       *(uint *)(*(int *)(*(int *)(this + 0x1c3) + 0xbc) + 4) | 0x10;
  dynDYNAMIC::StartAnim
            (*(dynDYNAMIC **)(this + 0x1c3),0,
             *(float *)(*(int *)(*(int *)(*(int *)(*(dynDYNAMIC **)(this + 0x1c3) + 0xbc) + 0x138) +
                                0x90) + 0x50) * ___real_3a83126f,0);
  *(uint *)(*(int *)(this + 0x1c3) + 0xb4) = *(uint *)(*(int *)(this + 0x1c3) + 0xb4) | 4;
  animINST::Scale(*(animINST **)(*(int *)(this + 0x1c3) + 0xbc),0.8,0.8,0.8,1);
  this_00 = objFind(*(objOBJ **)(*(int *)(*(int *)(this + 0x1c3) + 0xbc) + 0x10),objIsNFace,
                    (void *)0x0);
  this_01 = (objMOD_BILLBOARD *)operator_new(0x9c);
  if (this_01 == (objMOD_BILLBOARD *)0x0) {
    this_01 = (objMOD_BILLBOARD *)0x0;
  }
  else {
    objMOD_BILLBOARD::objMOD_BILLBOARD(this_01);
    *(undefined ***)this_01 = &pwpMNG_MOD_FLARE::_vftable_;
  }
  (**(code **)(*(int *)this_01 + 4))(this_00);
  objOBJ::SetStateRendYes(this_00,0x60);
  return 1;
}




/* from: plw_mng.cpp
   addr: 00411480 */

void * __thiscall
pwpMNG_MOD_FLARE::_vector_deleting_destructor_(pwpMNG_MOD_FLARE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  objMODIFIER::~objMODIFIER((objMODIFIER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mng.cpp
   addr: 004114B0 */

int __thiscall pwpMINIGUN::CreateMngShells(pwpMINIGUN *this)

{
  undefined4 uVar1;
  sncCHANNEL *this_00;
  pwpMNG_SHELL *this_01;
  objOBJ *poVar2;
  int iVar3;
  pwpMINIGUN *local_4;
  
  iVar3 = 0;
  local_4 = this + 0x1bb;
  do {
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
      *(undefined4 *)(this_00 + 0x84) = 0x3f800000;
      *(undefined4 *)(this_00 + 0x88) = 0x40a00000;
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
    *(sncCHANNEL **)local_4 = this_00;
    if (this_00 == (sncCHANNEL *)0x0) {
      return 0;
    }
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
    iVar3 = iVar3 + 1;
    local_4 = local_4 + 4;
  } while (iVar3 < 1);
  this_01 = (pwpMNG_SHELL *)operator_new(0x2cc);
  if (this_01 == (pwpMNG_SHELL *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = pwpMNG_SHELL::pwpMNG_SHELL
                      (this_01,(sncCHANNEL **)(this + 0x1bb),(sncSOUND_DESCR_3D *)&DAT_00602c28,0.05
                      );
  }
  *(int *)(this + 0x1b7) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  *(pwpMINIGUN **)(iVar3 + 0x2c8) = this;
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_shell_source);
  *(objOBJ **)(this + 0x1cf) = poVar2;
  return (uint)(poVar2 != (objOBJ *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mng.cpp
   addr: 00411640 */

void __thiscall pwpMINIGUN::ShowMngShells(pwpMINIGUN *this)

{
  int iVar1;
  float extraout_ECX;
  undefined4 uVar2;
  m3dV local_70 [8];
  m3dPLANE amStack_68 [4];
  m3dV local_64 [8];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  byte bStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_30 = _m3dVZero;
  local_2c = DAT_00963740;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_28 = DAT_00963744;
  local_24 = 0;
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x1cf),local_70);
  objOBJ::GetAxisZ(*(objOBJ **)(this + 0x1cf),local_64);
  iVar1 = (**(code **)(**(int **)(this + 0x187) + 0x40))();
  if ((iVar1 == 0) || ((bStack_44 & 2) == 0)) {
    iVar1 = wrsfxFindFloor((m3dV *)&stack0xffffff8c,(m3dBOX *)&local_24);
    if (iVar1 == 0) {
      uStack_58 = 0xc47a0000;
      uStack_54 = DAT_00963744;
      uStack_5c = _m3dVZero;
    }
    else {
      uStack_58 = uStack_18;
      uStack_54 = uStack_14;
      uStack_5c = local_1c;
    }
  }
  else {
    uStack_58 = local_30;
    uStack_54 = local_2c;
    uStack_5c = local_34;
  }
  uStack_50 = _m3dVUnitY;
  uStack_48 = DAT_005f9998;
  uStack_4c = DAT_005f9994;
  (**(code **)(**(int **)(this + 0x1b7) + 4))(*(undefined4 *)(this + 0x9c),0,0);
  partEMITTER_PHYS::SetCDTPlane(*(partEMITTER_PHYS **)(this + 0x1b7),1,0,amStack_68);
  partEMITTER_PHYS::SetPosDirSpeed
            (*(partEMITTER_PHYS **)(this + 0x1b7),(m3dV *)&stack0xffffff80,(m3dV *)&stack0xffffff8c,
             (m3dV *)(this + 0xe0));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x1b7));
  uVar2 = 0;
  iVar1 = **(int **)(this + 0x1b7);
  m3dRandRange(extraout_ECX,(float)*(int **)(this + 0x1b7));
  uVar2 = ftol(uVar2);
  (**(code **)(iVar1 + 0x10))(uVar2);
  partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x1b7));
  return;
}




/* WARNING: Removing unreachable block (ram,0x00411d26) */
/* from: plw_mng.cpp
   addr: 004117D0 */

int __thiscall pwpMINIGUN::SetupAniSystem(pwpMINIGUN *this)

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
    *(undefined4 *)(paVar1 + 0x8c) = 0xd;
    puVar2 = (undefined4 *)operator_new(0x6ec);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0xd;
      puVar2 = puVar2 + 1;
      iVar7 = 0xd;
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
    _entAnimSetSeqName(paVar1,3,s_PWP_SEQ_RUN);
    _entAnimSetSeqName(paVar1,7,s_PWP_SEQ_SHOOT);
    _entAnimSetSeqName(paVar1,8,s_PWP_SEQ_RECHARGE);
    _entAnimSetSeqName(paVar1,4,s_PWP_SEQ_TAKE_OFF);
    _entAnimSetSeqName(paVar1,5,s_PWP_SEQ_TAKE_OFF_EMPTY);
    _entAnimSetSeqName(paVar1,6,s_PWP_SEQ_PUT_ON);
    _entAnimSetSeqName(paVar1,10,s_PWP_MNG_SEQ_START_SHOOT);
    _entAnimSetSeqName(paVar1,0xb,s_PWP_MNG_SEQ_STOP_SHOOT);
    _entAnimSetSeqName(paVar1,9,s_PWP_SEQ_FORCE_RECHARGE);
    _entAnimSetSeqName(paVar1,0xc,s_PWP_MNG_SEQ_SHELLS_FINISHED);
    entAnimAssignTplSeq(paVar1,local_c,iVar6);
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x40) = 0;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x44) = 0x3f800000;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x50) = 0x43fa0000;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x80) = 0;
    pwpWEAPON::AdjustTiming((pwpWEAPON *)this);
    this_00 = (animSYSTEM *)operator_new(0x14);
    if ((this_00 == (animSYSTEM *)0x0) ||
       (piVar3 = (int *)animSYSTEM::animSYSTEM(this_00,0xd,0), piVar3 == (int *)0x0)) {
      return 0;
    }
    *(int **)(paVar1 + 0xa4) = piVar3;
    (**(code **)(*piVar3 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0xc))(1,0,1,0xffffffff);
    (**(code **)(*piVar3 + 4))(1,7,0,10,0);
    (**(code **)(*piVar3 + 0x14))(1);
    (**(code **)(*piVar3 + 0x14))(3);
    (**(code **)(*piVar3 + 4))(3,1,0,1,1);
    (**(code **)(*piVar3 + 4))(3,4,0,4,1);
    (**(code **)(*piVar3 + 4))(3,6,0,6,1);
    (**(code **)(*piVar3 + 4))(3,7,0,10,1);
    (**(code **)(*piVar3 + 4))(10,7,1,7,0);
    (**(code **)(*piVar3 + 4))(10,1,0,0xb,2);
    (**(code **)(*piVar3 + 4))(10,3,1,0xb,0);
    (**(code **)(*piVar3 + 4))(10,8,1,0xb,0);
    (**(code **)(*piVar3 + 4))(10,4,1,0xb,0);
    (**(code **)(*piVar3 + 4))(10,0xb,0,0xb,2);
    (**(code **)(*piVar3 + 4))(10,10,1,10,0);
    (**(code **)(*piVar3 + 4))(7,1,1,0xb,0);
    (**(code **)(*piVar3 + 4))(7,3,1,0xb,0);
    (**(code **)(*piVar3 + 4))(7,8,1,0xb,0);
    (**(code **)(*piVar3 + 4))(7,4,1,0xb,0);
    (**(code **)(*piVar3 + 4))(7,7,1,7,0);
    (**(code **)(*piVar3 + 4))(7,0xc,1,0xc,0);
    (**(code **)(*piVar3 + 4))(7,9,1,0xb,0);
    (**(code **)(*piVar3 + 0xc))(0xc,1,0,8);
    (**(code **)(*piVar3 + 4))(0xc,8,1,8,0);
    (**(code **)(*piVar3 + 0xc))(4,1,1,0xffffffff);
    (**(code **)(*piVar3 + 4))(4,6,0,6,0);
    (**(code **)(*piVar3 + 4))(6,3,1,3,0);
    (**(code **)(*piVar3 + 4))(6,1,0,1,1);
    (**(code **)(*piVar3 + 4))(6,6,2,6,0);
    (**(code **)(*piVar3 + 4))(6,7,1,10,0);
    (**(code **)(*piVar3 + 0xc))(0xb,1,0,0xffffffff);
    (**(code **)(*piVar3 + 0xc))(8,1,1,0xffffffff);
    (**(code **)(*piVar3 + 4))(4,1,0,1,0);
    (**(code **)(*piVar3 + 4))(4,6,0,6,0);
    (**(code **)(*piVar3 + 4))(1,6,0,6,0);
    (**(code **)(*piVar3 + 4))(3,6,0,6,0);
    (**(code **)(*piVar3 + 4))(7,6,0,6,0);
    (**(code **)(*piVar3 + 4))(8,6,0,6,0);
    (**(code **)(*piVar3 + 4))(10,6,0,6,0);
    (**(code **)(*piVar3 + 4))(0xb,6,0,6,0);
    (**(code **)(*piVar3 + 4))(0xb,6,0,6,0);
    (**(code **)(*piVar3 + 4))(0xc,6,0,6,0);
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
    (**(code **)(*piVar3 + 4))(3,9,0,9,0);
    (**(code **)(*piVar3 + 4))(10,9,1,0xb,0);
    (**(code **)(*piVar3 + 4))(1,9,0,9,0);
    (**(code **)(*piVar3 + 4))(0xb,9,1,9,0);
    (**(code **)(*piVar3 + 4))(7,9,1,0xb);
  }
  return 1;
}




/* from: plw_mng.cpp
   addr: 00411D40 */

void __thiscall pwpMINIGUN::ShowSFX(pwpMINIGUN *this,pwpMCG_SHOOT *param_1)

{
  pwpBULLET_WPN::ShowSFX((pwpBULLET_WPN *)this,param_1);
  animINST::SetPos(*(animINST **)(*(int *)(this + 0x1c3) + 0xbc),(m3dV *)(param_1 + 0x18));
  dynDYNAMIC::StartAnim(*(dynDYNAMIC **)(this + 0x1c3),0,0.0,0);
  return;
}




/* from: plw_mng.cpp
   addr: 00411D80 */

void __thiscall pwpMINIGUN::AdvanceAnimation(pwpMINIGUN *this,int param_1,float param_2)

{
  if ((param_1 == 7) && (*(int *)(this + 399) == 1)) {
    param_1 = 0xc;
  }
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),
             param_1,param_2 * *(float *)(this + 0x1a7));
  return;
}




/* from: plw_mng.cpp
   addr: 00411DC0 */

int __thiscall pwpMINIGUN::IsShooting(pwpMINIGUN *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xc,0);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = pwpWEAPON::IsShooting((pwpWEAPON *)this);
  return iVar1;
}




/* from: plw_mng.cpp
   addr: 00411DF0 */

int __thiscall pwpMINIGUN::IsReadyRecharge(pwpMINIGUN *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xc,1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = pwpWEAPON::IsReadyRecharge((pwpWEAPON *)this);
  return iVar1;
}




/* from: plw_mng.cpp
   addr: 00411E20 */

void __thiscall pwpMINIGUN::PlayShootSound(pwpMINIGUN *this)

{
  int iVar1;
  
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 0xc) {
    iVar1 = (**(code **)(**(int **)(this + 0x183) + 8))(&DAT_00602a88);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(this + 0x183) + 0xc))();
      (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602a88,0);
      return;
    }
  }
  (**(code **)(**(int **)(this + 0x183) + 0xc))();
  (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602a20,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mng.cpp
   addr: 00411E90 */

int __thiscall
pwpMINIGUN::FillCDTShootList
          (pwpMINIGUN *this,m3dV *param_1,cdtINFO *param_2,cdtINFO *param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float extraout_ECX;
  m3dMATR *pmVar5;
  m3dMATR *extraout_EDX;
  cdtINFO *pcVar6;
  cdtINFO *pcVar7;
  cdtINFO *pcVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 in_MM1;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float10 fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  unkbyte10 in_ST2;
  undefined8 uVar17;
  undefined8 uVar18;
  unkbyte10 Var19;
  unkbyte10 Var20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  m3dMATR local_94 [64];
  float local_54 [2];
  cdtINFO *local_4c;
  float *local_48;
  int local_44;
  float local_40;
  m3dMATR *local_3c;
  cdtINFO *local_38;
  undefined **local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [2];
  cdtINFO *local_8;
  
  pcVar6 = param_2;
  local_2c = *(undefined4 *)(plrPlayer + 0xbc);
  local_30 = 0;
  local_28 = 0;
  pcVar7 = param_2;
  pcVar8 = param_3;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  local_34 = &entCDT_REFINE_EXCL::_vftable_;
  fVar25 = (*(float *)param_1 - *(float *)(param_2 + 0x10)) *
           (*(float *)param_1 - *(float *)(param_2 + 0x10)) +
           (*(float *)(param_1 + 8) - *(float *)(param_2 + 0x18)) *
           (*(float *)(param_1 + 8) - *(float *)(param_2 + 0x18)) +
           (*(float *)(param_1 + 4) - *(float *)(param_2 + 0x14)) *
           (*(float *)(param_1 + 4) - *(float *)(param_2 + 0x14));
  if (m3dSimdType == 0) {
    fVar25 = fVar25 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar24 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
    fVar23 = auVar24._0_4_;
    param_2 = (cdtINFO *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar23 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar25 * fVar23 * fVar23) * fVar25);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar10 = (ulonglong)(uint)fVar25;
    uVar12 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar10);
    uVar13 = PackedFloatingMUL(uVar12,uVar12);
    uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar10);
    uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
    in_MM1 = PackedFloatingMUL(uVar12,uVar10);
    param_2 = (cdtINFO *)in_MM1;
    FastExitMediaState();
  }
  else {
    param_2 = (cdtINFO *)SQRT(fVar25);
  }
  if (___real_40a00000 <= (float)param_2) {
    if ((float)param_2 <= ___real_42a00000) {
      local_24 = ((float)param_2 - ___real_40a00000) * ___real_3ca94d24 + ___real_3ee66666;
    }
    else {
      local_24 = 2.0;
    }
  }
  else {
    local_24 = 0.45;
  }
  local_1c = *(float *)(pcVar6 + 0x10) - *(float *)param_1;
  local_18 = *(float *)(pcVar6 + 0x14) - *(float *)(param_1 + 4);
  local_14 = *(float *)(pcVar6 + 0x18) - *(float *)(param_1 + 8);
  fVar25 = local_1c * local_1c + local_18 * local_18 + local_14 * local_14;
  if (m3dSimdType == 0) {
    fVar25 = fVar25 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar24 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
    fVar23 = auVar24._0_4_;
    param_2 = (cdtINFO *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar23 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar25 * fVar23 * fVar23) * fVar25);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar10 = (ulonglong)(uint)fVar25;
    uVar12 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar10);
    uVar13 = PackedFloatingMUL(uVar12,uVar12);
    uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar10);
    uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
    uVar12 = PackedFloatingMUL(uVar12,uVar10);
    param_2 = (cdtINFO *)uVar12;
    FastExitMediaState();
  }
  else {
    param_2 = (cdtINFO *)SQRT(fVar25);
  }
  local_38 = param_2;
  Var19 = in_ST2;
  m3dNormalize((m3dV *)&local_1c);
  m3dMATR::MakeLCS2WCS_VZ(local_94,param_1,(m3dV *)&local_1c);
  fVar14 = (float10)fpatan((float10)local_24 / (float10)(float)local_38,(float10)1);
  Var20 = Var19;
  iVar4 = (**(code **)(*(int *)this + 0xf0))
                    (param_1,&local_1c,(float)local_38 + ___real_41200000,
                     (float)(((float10)___real_43340000 / (float10)_DAT_005cfbfc) * fVar14),param_3,
                     2);
  if ((*(uint *)(plrPlayer + 0x29b) & 0x800) != 0) {
    local_28 = local_28 | 1;
  }
  if (1 < iVar4) {
    return iVar4 + 1;
  }
  local_48 = local_10;
  pcVar6 = param_3 + iVar4 * 0x20;
  pmVar5 = local_94;
  local_40 = -local_24;
  local_44 = 2 - iVar4;
  local_3c = pmVar5;
  do {
    local_20 = iVar4;
    uVar12 = (undefined8)in_ST2;
    local_8 = local_38;
    in_ST2 = Var19;
    Var19 = Var20;
    local_10[0] = m3dRandRange(local_40,(float)pmVar5);
    fVar25 = m3dRandRange(extraout_ECX,local_40);
    local_10[1] = fVar25 * ___real_3f333333;
    if (m3dSimdType == 0) {
      if (((uint)local_3c & 0xf) == 0) {
        fVar25 = *local_48;
        fVar23 = local_48[1];
        fVar2 = local_48[2];
        fVar21 = fVar25 * *(float *)local_3c + fVar23 * *(float *)(local_3c + 0x10) +
                 fVar2 * *(float *)(local_3c + 0x20);
        fVar22 = fVar25 * *(float *)(local_3c + 4) + fVar23 * *(float *)(local_3c + 0x14) +
                 fVar2 * *(float *)(local_3c + 0x24);
        fVar25 = fVar25 * *(float *)(local_3c + 8) + fVar23 * *(float *)(local_3c + 0x18) +
                 fVar2 * *(float *)(local_3c + 0x28);
      }
      else {
        fVar25 = *local_48;
        fVar23 = local_48[1];
        fVar2 = local_48[2];
        fVar21 = fVar25 * (float)*(undefined8 *)local_3c +
                 fVar23 * (float)*(undefined8 *)(local_3c + 0x10) +
                 fVar2 * (float)*(undefined8 *)(local_3c + 0x20);
        fVar22 = fVar25 * (float)((ulonglong)*(undefined8 *)local_3c >> 0x20) +
                 fVar23 * (float)((ulonglong)*(undefined8 *)(local_3c + 0x10) >> 0x20) +
                 fVar2 * (float)((ulonglong)*(undefined8 *)(local_3c + 0x20) >> 0x20);
        fVar25 = fVar25 * (float)*(undefined8 *)(local_3c + 8) +
                 fVar23 * (float)*(undefined8 *)(local_3c + 0x18) +
                 fVar2 * (float)*(undefined8 *)(local_3c + 0x28);
      }
      *(ulonglong *)local_48 = CONCAT44(fVar22,fVar21);
      local_48[2] = fVar25;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar9 = (undefined4)*(undefined8 *)local_48;
      uVar12 = CONCAT44(uVar9,uVar9);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)local_48 >> 0x20);
      uVar18 = CONCAT44(uVar9,uVar9);
      uVar15 = CONCAT44(local_48[2],local_48[2]);
      uVar13 = PackedFloatingMUL(uVar12,*(undefined8 *)local_3c);
      uVar11 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_3c + 0x10));
      uVar16 = PackedFloatingMUL(uVar15,*(undefined8 *)(local_3c + 0x20));
      uVar17 = PackedFloatingMUL(uVar12,*(undefined8 *)(local_3c + 8));
      uVar12 = PackedFloatingADD(uVar11,uVar16);
      uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_3c + 0x18));
      uVar11 = PackedFloatingMUL(uVar15,*(undefined8 *)(local_3c + 0x28));
      uVar13 = PackedFloatingADD(uVar13,uVar12);
      uVar18 = PackedFloatingADD(uVar18,uVar11);
      Var19 = CONCAT28((short)((unkuint10)Var19 >> 0x40),uVar18);
      *(undefined8 *)local_48 = uVar13;
      uVar13 = PackedFloatingADD(uVar17,uVar18);
      in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar13);
      local_48[2] = (float)uVar13;
      FastExitMediaState();
    }
    else {
      iVar4 = 0;
      do {
        *(undefined4 *)((int)local_54 + iVar4) = 0;
        iVar3 = 0;
        pmVar5 = local_94 + iVar4;
        fVar25 = ___real_00000000;
        do {
          pfVar1 = local_10 + iVar3;
          fVar23 = *(float *)pmVar5;
          iVar3 = iVar3 + 1;
          pmVar5 = pmVar5 + 0x10;
          fVar25 = *pfVar1 * fVar23 + fVar25;
        } while (iVar3 < 3);
        *(float *)((int)local_54 + iVar4) = fVar25;
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0xc);
      local_10[0] = local_54[0];
      local_10[1] = local_54[1];
      local_8 = local_4c;
    }
    fVar25 = (float)local_8 * (float)local_8 + local_10[0] * local_10[0] + local_10[1] * local_10[1]
    ;
    if (m3dSimdType == 0) {
      fVar25 = fVar25 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar24 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
      fVar23 = auVar24._0_4_;
      param_2 = (cdtINFO *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar23 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar25 * fVar23 * fVar23) * fVar25);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar10 = (ulonglong)(uint)fVar25;
      uVar12 = PackedFloatingReciprocalSQRAprox(uVar12,uVar10);
      uVar13 = PackedFloatingMUL(uVar12,uVar12);
      uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar10);
      uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
      uVar12 = PackedFloatingMUL(uVar12,uVar10);
      param_2 = (cdtINFO *)uVar12;
      FastExitMediaState();
    }
    else {
      param_2 = (cdtINFO *)SQRT(fVar25);
    }
    fVar25 = ___real_3f800000 / (float)param_2;
    local_10[0] = local_10[0] * fVar25;
    local_10[1] = local_10[1] * fVar25;
    local_8 = (cdtINFO *)(fVar25 * (float)local_8);
    Var20 = Var19;
    iVar4 = scnSCENE::ShootRay(gsScenePtr,param_1,(m3dV *)local_10,(float)param_2 + ___real_41200000
                               ,0,(cdtREFINE *)&local_34,pcVar6);
    if (iVar4 == 0) {
      pcVar7 = param_3;
      pcVar8 = pcVar6;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
    }
    pcVar6 = pcVar6 + 0x20;
    local_44 = local_44 + -1;
    pmVar5 = extraout_EDX;
    iVar4 = local_20 + 1;
  } while (local_44 != 0);
  return local_20 + 2;
}




/* from: plw_mng.cpp
   addr: 004123C0 */

void __thiscall pwpMINIGUN::Anim2Sound(pwpMINIGUN *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
    return;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xb,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
    return;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
    return;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 0x10;
  }
  return;
}




/* from: plw_mng.cpp
   addr: 00412450 */

void __thiscall pwpMINIGUN::UpdateSound(pwpMINIGUN *this)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  uVar1 = *(uint *)(this + 0xf8);
  if ((uVar1 & 1) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_006029b8,0);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if ((uVar1 & 4) != 0) {
    iVar2 = (**(code **)(**(int **)(this + 0x183) + 8))(&DAT_006029b8);
    puVar3 = &DAT_00602af0;
    if (iVar2 == 0) {
      puVar3 = &DAT_00602a88;
    }
    (**(code **)(**(int **)(this + 0x183) + 0xc))();
    (**(code **)(**(int **)(this + 0x183) + 4))(puVar3,0);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if ((uVar1 & 8) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 0xc))();
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602b58,0);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if ((uVar1 & 0x10) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602bc0,0);
  }
  pwpWEAPON::UpdateSound((pwpWEAPON *)this);
  return;
}




/* from: plw_mng.cpp
   addr: 00412510 */

int __thiscall pwpMINIGUN::ProcessINIT(pwpMINIGUN *this)

{
  int iVar1;
  pwpMNG_SMOKE *this_00;
  objOBJ *this_01;
  
  iVar1 = pwpBULLET_WPN::ProcessINIT((pwpBULLET_WPN *)this);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(this + 0x193) = *(uint *)(this + 0x193) | 2;
  *(undefined4 *)(this + 0x18b) = 100;
  *(undefined4 *)(this + 399) = 100;
  *(undefined4 *)(this + 0x19b) = 0;
  *(undefined4 *)(this + 0x197) = 1;
  (**(code **)(*(int *)this + 0xa0))(0x41200000);
  *(undefined4 *)(this + 0x15b) = 0x41000000;
  *(undefined4 *)(this + 0x157) = 0x447a0000;
  wpnWEAPON::SetAmmo((wpnWEAPON *)this,500.0);
  *(undefined4 *)(this + 0x1bf) = 0x3e800000;
  (**(code **)(*(int *)this + 0xdc))(0x3f800000);
  iVar1 = CreateMngFlare(this);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = CreateMngShells(this);
  if (iVar1 != 0) {
    this_00 = (pwpMNG_SMOKE *)operator_new(0x2c0);
    if (this_00 == (pwpMNG_SMOKE *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pwpMNG_SMOKE::pwpMNG_SMOKE(this_00,0.05);
    }
    *(int *)(this + 0x1c7) = iVar1;
    if (iVar1 != 0) {
      this_01 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_smoke_source);
      *(objOBJ **)(this + 0x1cb) = this_01;
      if (this_01 != (objOBJ *)0x0) {
        objOBJ::SetStateProcYes(this_01,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
        return 1;
      }
    }
  }
  return 0;
}




/* from: plw_mng.cpp
   addr: 00412620 */

void __thiscall pwpMINIGUN::ProcessTERM(pwpMINIGUN *this)

{
  int iVar1;
  
  pwpBULLET_WPN::ProcessTERM((pwpBULLET_WPN *)this);
  if (*(undefined4 **)(this + 0x1c7) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x1c7))(1);
  }
  iVar1 = *(int *)(this + 0x1c3);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & 0xfffffffb;
    msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x1c3),2,(msgADDR *)0x0);
  }
  return;
}




/* from: plw_mng.cpp
   addr: 00412670 */

void __thiscall pwpMINIGUN::ProcessFRAME(pwpMINIGUN *this)

{
  partEMITTER_PHYS *this_00;
  int iVar1;
  m3dV local_c [12];
  
  pwpBULLET_WPN::ProcessFRAME((pwpBULLET_WPN *)this);
  if (((byte)(*(animINST **)(this + 0xbc))[4] & 1) == 0) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,0);
    if (iVar1 != 0) {
      ShowMngShells(this);
      this_00 = *(partEMITTER_PHYS **)(this + 0x1c7);
      partEMITTER_PHYS::StopEmission(this_00);
      partEMITTER_PHYS::StartEmission(this_00);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x1c7),(m3dV *)0x0,(m3dV *)0x0,(m3dV *)(this + 0xe0))
      ;
    }
    wpnWEAPON::GetOrgDirTip((wpnWEAPON *)this,local_c,(m3dV *)0x0);
    animINST::SetPos(*(animINST **)(*(int *)(this + 0x1c3) + 0xbc),local_c);
    partSetAreaEmissionObj
              (*(partEMITTER_PHYS **)(this + 0x1c7),*(objOBJ **)(this + 0x1cb),-1,(m3dV *)0x0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_mng.cpp
   addr: 00412710 */

int __cdecl _m3dNormalize(m3dV *param_1)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  float10 fVar4;
  undefined8 in_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_1c;
  
  if (m3dSimdType == 0) {
    fVar11 = *(float *)param_1;
    fVar1 = *(float *)(param_1 + 4);
    fVar2 = *(float *)(param_1 + 8);
    fVar9 = fVar11 * fVar11 + fVar1 * fVar1 + fVar2 * fVar2;
    if (fVar9 < DAT_00602c94) {
      return 0;
    }
    auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar10 = auVar12._0_4_;
    fVar9 = `int___cdecl__m3dNormalize(struct_m3dV*)'::__l2::half * fVar10 *
            (`int___cdecl__m3dNormalize(struct_m3dV*)'::__l2::three - fVar9 * fVar10 * fVar10);
    *(float *)param_1 = fVar9 * fVar11;
    *(float *)(param_1 + 4) = fVar9 * fVar1;
    *(float *)(param_1 + 8) = fVar9 * fVar2;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = *(undefined8 *)param_1;
    uVar3 = (ulonglong)*(uint *)(param_1 + 8);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar5 = PackedFloatingMUL(uVar3,uVar3);
    uVar8 = PackedFloatingAccumulate(uVar8,uVar8);
    uVar8 = PackedFloatingADD(uVar8,uVar5);
    uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar8);
    if ((int)uVar8 < (int)DAT_005cfbf8) {
      FastExitMediaState();
      return 0;
    }
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar8 = PackedFloatingReciprocalSQRIter1(uVar6,uVar8);
    uVar8 = PackedFloatingReciprocalIter2(uVar8,uVar5);
    uVar8 = CONCAT44((int)uVar8,(int)uVar8);
    uVar5 = PackedFloatingMUL(uVar3,uVar8);
    uVar7 = PackedFloatingMUL(uVar7,uVar8);
    *(int *)(param_1 + 8) = (int)uVar5;
    *(undefined8 *)param_1 = uVar7;
    FastExitMediaState();
  }
  else {
    local_1c = *(float *)(param_1 + 8) * *(float *)(param_1 + 8) +
               *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
               *(float *)param_1 * *(float *)param_1;
    if (m3dSimdType == 0) {
      local_1c = local_1c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar12 = rsqrtss(ZEXT416((uint)local_1c),ZEXT416((uint)local_1c));
      fVar11 = auVar12._0_4_;
      local_1c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_1c * fVar11 * fVar11) *
                 local_1c;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)local_1c;
      uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar3);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar3);
      local_1c = (float)uVar7;
      FastExitMediaState();
    }
    else {
      fVar4 = (float10)sqrtf(local_1c,local_1c,local_1c);
      local_1c = (float)fVar4;
    }
    if (local_1c < DAT_005cfbf8) {
      return 0;
    }
    local_1c = ___real_3f800000 / local_1c;
    *(float *)param_1 = local_1c * *(float *)param_1;
    *(float *)(param_1 + 4) = local_1c * *(float *)(param_1 + 4);
    *(float *)(param_1 + 8) = local_1c * *(float *)(param_1 + 8);
  }
  return 1;
}




/* from: plw_mng.cpp
   addr: 00412960 */

int __thiscall pwpMINIGUN::SubtractAmmo(pwpMINIGUN *this,float param_1)

{
  pwpWEAPON::SubtractAmmo((pwpWEAPON *)this,1.0);
  return 1;
}




/* from: plw_mng.cpp
   addr: 00412980 */

entENTITY * __fastcall pwpMINIGUN::Create(animINST *param_1)

{
  pwpBULLET_WPN *this;
  
  this = (pwpBULLET_WPN *)operator_new(0x1d3);
  if (this != (pwpBULLET_WPN *)0x0) {
    pwpBULLET_WPN::pwpBULLET_WPN(this);
    *(undefined4 *)(this + 0x1c3) = 0;
    *(undefined4 *)(this + 0x1c7) = 0;
    *(undefined4 *)(this + 0x1cb) = 0;
    *(undefined4 *)(this + 0x1cf) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 8;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}

