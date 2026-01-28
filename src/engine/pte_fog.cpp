
/* from: engine:pte_fog.cpp
   addr: 0057E690 */

int __fastcall pteFogInit(void)

{
  int iVar1;
  
  iVar1 = pteMANAGER::RegisterClass(pteManager,s_fog,0x32,pteFOG_GROUND::Create);
  return (uint)(iVar1 != 0);
}




/* from: engine:pte_fog.cpp
   addr: 0057E6B0 */

pteSHADER * __fastcall pteFOG_GROUND::Create(animINST *param_1,objOBJ *param_2)

{
  pteSHADER *this;
  pteSHADER *ppVar1;
  int iVar2;
  
  if (param_2 == (objOBJ *)0x0) {
    return (pteSHADER *)0x0;
  }
  this = (pteSHADER *)operator_new(0xa4c);
  if (this != (pteSHADER *)0x0) {
    pteSHADER::pteSHADER(this);
    ppVar1 = this + 0x90;
    iVar2 = 5;
    do {
      *(undefined4 *)(ppVar1 + 4) = 0;
      *(undefined4 *)(ppVar1 + 8) = 0;
      *(undefined4 *)(ppVar1 + 0xc) = 0;
      *(undefined4 *)(ppVar1 + 0x14) = 1;
      *(undefined ***)(ppVar1 + 0x10) = &m3dBOX::_vftable_;
      *(undefined4 *)(ppVar1 + 0x30) = 0;
      *(undefined4 *)(ppVar1 + 0x34) = 0;
      *(undefined4 *)(ppVar1 + 0x38) = 0;
      *(undefined ***)ppVar1 = &scnDOMAIN::_vftable_;
      ppVar1 = ppVar1 + 0x3c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(this + 0x1d4) = 0;
    *(undefined4 *)(this + 0x1d8) = 0;
    *(undefined4 *)(this + 0x1dc) = 0;
    *(undefined4 *)(this + 0x1e0) = 0;
    *(undefined4 *)(this + 0x1e4) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x7c) = 0xba;
    *(undefined4 *)(this + 0x210) = 0;
    *(undefined4 *)(this + 0x9e4) = 0;
    *(undefined4 *)(this + 0xa38) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
    *(objOBJ **)(this + 0xc4) = param_2;
    iVar2 = (**(code **)(*(int *)(this + *(int *)(this + 0x8c) * 0x3c + 0x90) + 4))();
    if (iVar2 != 0) {
      *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + 1;
    }
    return this;
  }
  return (pteSHADER *)0x0;
}




/* from: engine:pte_fog.cpp
   addr: 0057E7A0 */

pteFOG_GROUND * __thiscall pteFOG_GROUND::pteFOG_GROUND(pteFOG_GROUND *this,objOBJ *param_1)

{
  pteFOG_GROUND *ppVar1;
  int iVar2;
  
  pteSHADER::pteSHADER((pteSHADER *)this);
  ppVar1 = this + 0x90;
  iVar2 = 5;
  do {
    *(undefined4 *)(ppVar1 + 4) = 0;
    *(undefined4 *)(ppVar1 + 8) = 0;
    *(undefined4 *)(ppVar1 + 0xc) = 0;
    *(undefined4 *)(ppVar1 + 0x14) = 1;
    *(undefined ***)(ppVar1 + 0x10) = &m3dBOX::_vftable_;
    *(undefined4 *)(ppVar1 + 0x30) = 0;
    *(undefined4 *)(ppVar1 + 0x34) = 0;
    *(undefined4 *)(ppVar1 + 0x38) = 0;
    *(undefined ***)ppVar1 = &scnDOMAIN::_vftable_;
    ppVar1 = ppVar1 + 0x3c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x7c) = 0xba;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x9e4) = 0;
  *(undefined4 *)(this + 0xa38) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  if (param_1 != (objOBJ *)0x0) {
    *(objOBJ **)(this + 0xc4) = param_1;
    iVar2 = (**(code **)(*(int *)(this + *(int *)(this + 0x8c) * 0x3c + 0x90) + 4))();
    if (iVar2 != 0) {
      *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + 1;
    }
  }
  return this;
}




/* from: engine:pte_fog.cpp
   addr: 0057E860
   addr: 0057E860 */

void * __thiscall pteFOG_GROUND::_scalar_deleting_destructor_(pteFOG_GROUND *this,uint param_1)

{
  int iVar1;
  pteFOG_GROUND *ppVar2;
  
  iVar1 = 0;
  *(undefined ***)this = &_vftable_;
  if (0 < *(int *)(this + 0x8c)) {
    ppVar2 = this + 0x90;
    do {
      (**(code **)(*(int *)ppVar2 + 8))();
      iVar1 = iVar1 + 1;
      ppVar2 = ppVar2 + 0x3c;
    } while (iVar1 < *(int *)(this + 0x8c));
  }
  iVar1 = 5;
  ppVar2 = this + 0x1bc;
  do {
    iVar1 = iVar1 + -1;
    *(undefined ***)(ppVar2 + -0x3c) = &scnDOMAIN::_vftable_;
    *(undefined ***)(ppVar2 + -0x2c) = &m3dVOL::_vftable_;
    ppVar2 = ppVar2 + -0x3c;
  } while (iVar1 != 0);
  pteSHADER::~pteSHADER((pteSHADER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:pte_fog.cpp
   addr: 0057E8D0 */

int __thiscall pteFOG_GROUND::InitLevel(pteFOG_GROUND *this,scnSCENE *param_1)

{
  int iVar1;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_3c = 0;
  local_38 = 0x437f0000;
  local_34 = 0x437f0000;
  local_30 = 0x437f0000;
  local_2c = 0x437f0000;
  local_28 = 5.0;
  local_20 = 0.0;
  local_1c = 0.8;
  local_24 = 8.0;
  local_18 = 1.0;
  local_14 = 0.25;
  local_10 = 1.5;
  local_c = 0.3;
  local_8 = 0.5;
  local_4 = 0.0;
  pteSHADER::ReadColor((pteSHADER *)this,s_color,(m3dCOLOR *)&local_38);
  pteSHADER::ReadFloat((pteSHADER *)this,s_depth,&local_28);
  pteSHADER::ReadFloat((pteSHADER *)this,s_farIntensity,&local_1c);
  pteSHADER::ReadFloat((pteSHADER *)this,s_nearIntensity,&local_20);
  pteSHADER::ReadFloat((pteSHADER *)this,s_farDist,&local_24);
  pteSHADER::ReadFloat((pteSHADER *)this,s_gamma,&local_18);
  iVar1 = pteSHADER::ReadBool((pteSHADER *)this,s_isGround,&local_44);
  if ((iVar1 != 0) && (local_44 != 0)) {
    local_3c = local_3c | 2;
  }
  iVar1 = pteSHADER::ReadBool((pteSHADER *)this,s_isApplyNoise,&local_40);
  if ((iVar1 != 0) && (local_40 != 0)) {
    local_3c = local_3c | 1;
  }
  pteSHADER::ReadFloat((pteSHADER *)this,s_freqXZ,&local_14);
  pteSHADER::ReadFloat((pteSHADER *)this,s_freqTime,&local_10);
  pteSHADER::ReadFloat((pteSHADER *)this,s_noisePercent,&local_c);
  pteSHADER::ReadFloat((pteSHADER *)this,s_windSpeed,&local_8);
  pteSHADER::ReadFloat((pteSHADER *)this,s_farNoiseScale,&local_4);
  InitParam(this,param_1,(pteFOG_GROUND_PARAM *)&local_3c);
  return 1;
}




/* from: engine:pte_fog.cpp
   addr: 0057EA80 */

int __thiscall pteFOG_GROUND::SetDomainObj(pteFOG_GROUND *this,objOBJ *param_1)

{
  int iVar1;
  
  *(objOBJ **)(this + *(int *)(this + 0x8c) * 0x3c + 0xc4) = param_1;
  iVar1 = (**(code **)(*(int *)(this + *(int *)(this + 0x8c) * 0x3c + 0x90) + 4))();
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + 1;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_fog.cpp
   addr: 0057EAE0 */

int __thiscall
pteFOG_GROUND::InitParam(pteFOG_GROUND *this,scnSCENE *param_1,pteFOG_GROUND_PARAM *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  animINST *paVar4;
  int iVar5;
  pteFOG_GROUND *ppVar6;
  
  ppVar6 = this + 0x1d4;
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)ppVar6 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    ppVar6 = ppVar6 + 4;
  }
  *(undefined4 *)(this + 0x1c8) = _m3dVUnitY;
  *(undefined4 *)(this + 0x1cc) = DAT_005f9994;
  uVar2 = DAT_005f9998;
  *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(this + 0x9c);
  *(undefined4 *)(this + 0x1d0) = uVar2;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  param_2 = (pteFOG_GROUND_PARAM *)0x0;
  if (0 < *(int *)(this + 0x8c)) {
    ppVar6 = this + 0x90;
    do {
      *(float *)((scnDOMAIN *)ppVar6 + 8) = *(float *)(this + 0x1c0) - *(float *)(this + 0x1e8);
      scnDOMAIN::CalcBBox((scnDOMAIN *)ppVar6);
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x48)) {
        do {
          pbVar1 = *(byte **)(*(int *)(param_1 + 0x4c) + iVar5 * 4);
          if (((*pbVar1 & 0x10) == 0) &&
             (iVar3 = (**(code **)(*(int *)ppVar6 + 0x20))(pbVar1), iVar3 != 0)) {
            if (499 < *(int *)(this + 0x210)) break;
            *(undefined4 *)(this + *(int *)(this + 0x210) * 4 + 0x214) =
                 *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar5 * 4);
            *(int *)(this + 0x210) = *(int *)(this + 0x210) + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x48));
      }
      for (paVar4 = scnSCENE::FindNextInst(param_1,(animINST *)0x0); paVar4 != (animINST *)0x0;
          paVar4 = scnSCENE::FindNextInst(param_1,paVar4)) {
        if ((((byte)paVar4[4] & 0x40) != 0) &&
           (((*(int *)(paVar4 + 0x138) == 0 || (*(int *)(*(int *)(paVar4 + 0x138) + 0x8c) == 0)) &&
            (iVar5 = (**(code **)(*(int *)ppVar6 + 0x24))(*(undefined4 *)(paVar4 + 0x10)),
            iVar5 != 0)))) {
          if (0x13 < *(int *)(this + 0x9e4)) break;
          *(animINST **)(this + *(int *)(this + 0x9e4) * 4 + 0x9e8) = paVar4;
          *(int *)(this + 0x9e4) = *(int *)(this + 0x9e4) + 1;
        }
      }
      param_2 = param_2 + 1;
      ppVar6 = (pteFOG_GROUND *)((scnDOMAIN *)ppVar6 + 0x3c);
    } while ((int)param_2 < *(int *)(this + 0x8c));
  }
  return 1;
}




/* from: engine:pte_fog.cpp
   addr: 0057EC40 */

int __thiscall pteFOG_GROUND::IsActive(pteFOG_GROUND *this,camCAMERA *param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x60) == 0) {
    iVar1 = *(int *)(this + 100);
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0xbc) != 0) && ((*(byte *)(*(int *)(iVar1 + 0xbc) + 4) & 2) != 0)) {
        return 0;
      }
      if ((*(byte *)(iVar1 + 8) & 0x20) != 0) {
        return 0;
      }
    }
  }
  else if ((*(byte *)(*(int *)(this + 0x60) + 4) & 2) != 0) {
    return 0;
  }
  return 1;
}




/* from: engine:pte_fog.cpp
   addr: 0057EC90 */

void __thiscall pteFOG_GROUND::Update(pteFOG_GROUND *this,float param_1)

{
  *(float *)(this + 0xa38) = param_1 + *(float *)(this + 0xa38);
  return;
}




/* from: engine:pte_fog.cpp
   addr: 0057ECB0 */

int __thiscall pteFOG_GROUND::IsShadeInst(pteFOG_GROUND *this,animINST *param_1)

{
  int iVar1;
  int iVar2;
  pteFOG_GROUND *ppVar3;
  undefined **local_20;
  undefined4 local_1c;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  if ((*(int *)(this + 0xa3c) == 0) && (((byte)this[0x1d4] & 2) != 0)) {
    return 1;
  }
  if ((((byte)param_1[4] & 0x40) != 0) &&
     ((*(int *)(param_1 + 0x138) == 0 || (*(int *)(*(int *)(param_1 + 0x138) + 0x8c) == 0)))) {
    iVar1 = 0;
    if (0 < *(int *)(this + 0x9e4)) {
      ppVar3 = this + 0x9e8;
      do {
        if (param_1 == *(animINST **)ppVar3) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        ppVar3 = ppVar3 + 4;
      } while (iVar1 < *(int *)(this + 0x9e4));
    }
  }
  animINST::GetBBox(param_1,(m3dBOX *)&local_20);
  iVar1 = 0;
  if (0 < *(int *)(this + 0x8c)) {
    ppVar3 = this + 0x90;
    do {
      iVar2 = (**(code **)(*(int *)ppVar3 + 0x1c))(&local_20);
      if (iVar2 != 0) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      ppVar3 = ppVar3 + 0x3c;
    } while (iVar1 < *(int *)(this + 0x8c));
  }
  return 0;
}




/* from: engine:pte_fog.cpp
   addr: 0057ED70 */

int __thiscall pteFOG_GROUND::IsShadeObj(pteFOG_GROUND *this,objOBJ *param_1)

{
  int iVar1;
  pteFOG_GROUND *ppVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  if (((byte)*param_1 & 0x10) == 0) {
    if ((*(int *)(this + 0xa3c) == 0) && (((byte)this[0x1d4] & 2) != 0)) {
      return 1;
    }
    iVar3 = *(int *)(param_1 + 0xbc);
    if (iVar3 == 0) {
      iVar3 = 0;
      if (0 < *(int *)(this + 0x210)) {
        ppVar2 = this + 0x214;
        do {
          if (param_1 == *(objOBJ **)ppVar2) {
            return 1;
          }
          iVar3 = iVar3 + 1;
          ppVar2 = ppVar2 + 4;
        } while (iVar3 < *(int *)(this + 0x210));
        return iVar1;
      }
    }
    else if (((*(byte *)(iVar3 + 4) & 0x40) != 0) &&
            (((*(int *)(iVar3 + 0x138) == 0 || (*(int *)(*(int *)(iVar3 + 0x138) + 0x8c) == 0)) &&
             (iVar4 = *(int *)(this + 0x9e4), 0 < iVar4)))) {
      ppVar2 = this + 0x9e8;
      do {
        if (iVar3 == *(int *)ppVar2) {
          iVar1 = 1;
        }
        ppVar2 = ppVar2 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return iVar1;
}




/* from: engine:pte_fog.cpp
   addr: 0057EE30 */

void __thiscall
pteFOG_GROUND::PrepareFrame(pteFOG_GROUND *this,scnSCENE *param_1,camCAMERA *param_2)

{
  int iVar1;
  int iVar2;
  pteFOG_GROUND *ppVar3;
  
  camCAMERA::GetOrigin(param_2,(m3dV *)(this + 0xa40));
  if (*(float *)(this + 0x1c0) < *(float *)(this + 0xa44)) {
    *(undefined4 *)(this + 0xa3c) = 1;
    return;
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x8c)) {
    *(undefined4 *)(this + 0xa3c) = 1;
    ppVar3 = this + 0x90;
    do {
      iVar1 = (**(code **)(*(int *)ppVar3 + 0xc))((m3dV *)(this + 0xa40));
      if (iVar1 != 0) {
        *(undefined4 *)(this + 0xa3c) = 0;
        return;
      }
      iVar2 = iVar2 + 1;
      ppVar3 = ppVar3 + 0x3c;
    } while (iVar2 < *(int *)(this + 0x8c));
    return;
  }
  *(undefined4 *)(this + 0xa3c) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_fog.cpp
   addr: 0057EED0 */

int __thiscall
pteFOG_GROUND::ShadeFace
          (pteFOG_GROUND *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  m3dV *pmVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  m3dV *pmVar14;
  ptePOLY_DATA *ppVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  m3dV local_128 [4];
  float afStack_124 [59];
  float local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  m3dV *local_1c;
  m3dV *local_18;
  pteFOG_GROUND *local_14;
  float local_10;
  objOBJ *local_c;
  float *local_8;
  
  local_14 = this;
  if (((byte)*param_1 & 1) == 0) {
    pmVar14 = local_128;
    local_10 = 0.0;
    local_c = param_1 + 0x3c;
    local_18 = pmVar14;
    do {
      piVar5 = *(int **)(param_1 + 0x28);
      local_1c = pmVar14;
      pfVar11 = (float *)(piVar5[0x10] +
                         (uint)*(ushort *)
                                ((uint)*(byte *)(piVar5 + 1) * param_2 + 2 + (int)local_10 * 2 +
                                *piVar5) * 0xc);
      local_8 = pfVar11;
      if (m3dSimdType == 0) {
        if (((uint)local_c & 0xf) == 0) {
          fVar26 = *pfVar11;
          fVar3 = pfVar11[1];
          fVar4 = pfVar11[2];
          fVar24 = fVar26 * *(float *)local_c + *(float *)(local_c + 0x30) +
                   fVar3 * *(float *)(local_c + 0x10) + fVar4 * *(float *)(local_c + 0x20);
          fVar25 = fVar26 * *(float *)(local_c + 4) + *(float *)(local_c + 0x34) +
                   fVar3 * *(float *)(local_c + 0x14) + fVar4 * *(float *)(local_c + 0x24);
          fVar26 = fVar26 * *(float *)(local_c + 8) + *(float *)(local_c + 0x38) +
                   fVar3 * *(float *)(local_c + 0x18) + fVar4 * *(float *)(local_c + 0x28);
        }
        else {
          fVar26 = *pfVar11;
          fVar3 = pfVar11[1];
          fVar4 = pfVar11[2];
          fVar24 = fVar26 * (float)*(undefined8 *)local_c +
                   fVar3 * (float)*(undefined8 *)(local_c + 0x10) +
                   fVar4 * (float)*(undefined8 *)(local_c + 0x20) +
                   (float)*(undefined8 *)(local_c + 0x30);
          fVar25 = fVar26 * (float)((ulonglong)*(undefined8 *)local_c >> 0x20) +
                   fVar3 * (float)((ulonglong)*(undefined8 *)(local_c + 0x10) >> 0x20) +
                   fVar4 * (float)((ulonglong)*(undefined8 *)(local_c + 0x20) >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)(local_c + 0x30) >> 0x20);
          fVar26 = fVar26 * (float)*(undefined8 *)(local_c + 8) +
                   fVar3 * (float)*(undefined8 *)(local_c + 0x18) +
                   fVar4 * (float)*(undefined8 *)(local_c + 0x28) +
                   (float)*(undefined8 *)(local_c + 0x38);
        }
        *(ulonglong *)pmVar14 = CONCAT44(fVar25,fVar24);
        *(float *)(pmVar14 + 8) = fVar26;
        local_18 = pmVar14;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar16 = (undefined4)*(undefined8 *)pfVar11;
        uVar19 = CONCAT44(uVar16,uVar16);
        uVar16 = (undefined4)((ulonglong)*(undefined8 *)pfVar11 >> 0x20);
        uVar22 = CONCAT44(uVar16,uVar16);
        uVar23 = CONCAT44(pfVar11[2],pfVar11[2]);
        uVar17 = PackedFloatingMUL(uVar19,*(undefined8 *)local_c);
        uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_c + 0x10));
        uVar20 = PackedFloatingMUL(uVar23,*(undefined8 *)(local_c + 0x20));
        uVar17 = PackedFloatingADD(uVar17,*(undefined8 *)(local_c + 0x30));
        uVar21 = PackedFloatingMUL(uVar19,*(undefined8 *)(local_c + 8));
        uVar19 = PackedFloatingADD(uVar18,uVar20);
        uVar18 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_c + 0x18));
        uVar23 = PackedFloatingMUL(uVar23,*(undefined8 *)(local_c + 0x28));
        uVar22 = PackedFloatingADD(uVar21,*(undefined8 *)(local_c + 0x38));
        uVar19 = PackedFloatingADD(uVar17,uVar19);
        uVar17 = PackedFloatingADD(uVar18,uVar23);
        *(undefined8 *)pmVar14 = uVar19;
        uVar19 = PackedFloatingADD(uVar22,uVar17);
        *(float *)(pmVar14 + 8) = (float)uVar19;
        FastExitMediaState();
        local_18 = pmVar14;
      }
      else {
        iVar13 = 0;
        iVar12 = (int)local_c - (int)pmVar14;
        local_18 = pmVar14;
        do {
          *(float *)pmVar14 = 0.0;
          iVar9 = 0;
          pmVar10 = pmVar14 + iVar12;
          do {
            pfVar1 = pfVar11 + iVar9;
            fVar26 = *(float *)pmVar10;
            iVar9 = iVar9 + 1;
            pmVar10 = pmVar10 + 0x10;
            *(float *)pmVar14 = *pfVar1 * fVar26 + *(float *)pmVar14;
          } while (iVar9 < 3);
          iVar9 = iVar13 + iVar9 * 4;
          iVar13 = iVar13 + 1;
          *(float *)pmVar14 = *(float *)(local_c + iVar9 * 4) + *(float *)pmVar14;
          pmVar14 = pmVar14 + 4;
        } while (iVar13 < 3);
      }
      local_10 = (float)((int)local_10 + 1);
      pmVar14 = local_18 + 0xc;
      local_18 = pmVar14;
    } while ((int)local_10 < 3);
  }
  else {
    piVar5 = *(int **)(param_1 + 0x28);
    iVar12 = 0;
    pmVar14 = local_128;
    do {
      iVar13 = iVar12 * 2;
      iVar12 = iVar12 + 1;
      puVar2 = (undefined4 *)
               (piVar5[0x10] +
               (uint)*(ushort *)((uint)*(byte *)(piVar5 + 1) * param_2 + 2 + iVar13 + *piVar5) * 0xc
               );
      *(undefined4 *)pmVar14 = *puVar2;
      *(undefined4 *)(pmVar14 + 4) = puVar2[1];
      *(undefined4 *)(pmVar14 + 8) = puVar2[2];
      pmVar14 = pmVar14 + 0xc;
    } while (iVar12 < 3);
  }
  if (*(int *)(local_14 + 0xa3c) != 0) {
    iVar12 = 0;
    pfVar11 = afStack_124;
    do {
      if (*pfVar11 < *(float *)(local_14 + 0x1c0) - _DAT_005df58c !=
          (*pfVar11 == *(float *)(local_14 + 0x1c0) - _DAT_005df58c)) break;
      iVar12 = iVar12 + 1;
      pfVar11 = pfVar11 + 3;
    } while (iVar12 < 3);
    if (iVar12 == 3) {
      return 0;
    }
  }
  iVar12 = 0;
  pmVar14 = local_128;
  pmVar10 = (m3dV *)(local_14 + 0xa40);
  do {
    fVar26 = CalcVertFog(local_14,pmVar10,pmVar14);
    local_38[iVar12] = fVar26;
    iVar12 = iVar12 + 1;
    pmVar14 = pmVar14 + 0xc;
  } while (iVar12 < 3);
  local_38[3] = *(float *)(local_14 + 0x1d8);
  local_28 = *(undefined4 *)(local_14 + 0x1dc);
  local_24 = *(undefined4 *)(local_14 + 0x1e0);
  local_20 = *(undefined4 *)(local_14 + 0x1e4);
  if (**(int **)param_3 != 0) {
    local_10 = local_38[1] - local_38[0];
    iVar12 = 0;
    local_8 = (float *)(local_38[2] - local_38[0]);
    if (0 < *(int *)(param_3 + 4)) {
      uVar6 = ftol();
      uVar7 = ftol();
      uVar8 = ftol();
      iVar13 = 0x118;
      do {
        iVar9 = ftol();
        iVar12 = iVar12 + 1;
        *(uint *)(param_4 + iVar13 + -0xd4) =
             ((iVar9 << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff) << 8 | uVar8 & 0xff;
        iVar13 = iVar13 + 4;
      } while (iVar12 < *(int *)(param_3 + 4));
    }
    return 1;
  }
  iVar12 = 0;
  uVar6 = ftol();
  uVar7 = ftol();
  uVar8 = ftol();
  ppVar15 = param_4 + 0x44;
  do {
    iVar13 = ftol();
    iVar12 = iVar12 + 1;
    *(uint *)ppVar15 = ((iVar13 << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff) << 8 | uVar8 & 0xff;
    ppVar15 = ppVar15 + 4;
  } while (iVar12 < 3);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_fog.cpp
   addr: 0057F2C0 */

int __thiscall
pteFOG_GROUND::ShadeVert(pteFOG_GROUND *this,objOBJ *param_1,int param_2,pteVERT_DATA *param_3)

{
  objOBJ *poVar1;
  int iVar2;
  undefined8 *puVar3;
  pteFOG_GROUND *ppVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
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
  float local_18 [3];
  pteFOG_GROUND *local_c;
  objOBJ *local_8;
  
  local_c = this;
  if (((byte)*param_1 & 1) == 0) {
    poVar1 = param_1 + 0x3c;
    local_8 = poVar1;
    puVar3 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc);
    if (m3dSimdType != 0) {
      if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar12 = (undefined4)*puVar3;
        uVar15 = CONCAT44(uVar12,uVar12);
        uVar12 = (undefined4)((ulonglong)*puVar3 >> 0x20);
        uVar18 = CONCAT44(uVar12,uVar12);
        uVar19 = CONCAT44(*(undefined4 *)(puVar3 + 1),*(undefined4 *)(puVar3 + 1));
        uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)poVar1);
        uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_1 + 0x4c));
        uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x5c));
        uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(param_1 + 0x6c));
        uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 0x44));
        uVar15 = PackedFloatingADD(uVar14,uVar16);
        uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_1 + 0x54));
        uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 100));
        uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(param_1 + 0x74));
        uVar15 = PackedFloatingADD(uVar13,uVar15);
        uVar13 = PackedFloatingADD(uVar14,uVar19);
        local_18[1] = (float)((ulonglong)uVar15 >> 0x20);
        local_18[0] = (float)uVar15;
        uVar15 = PackedFloatingADD(uVar18,uVar13);
        local_18[2] = (float)uVar15;
        FastExitMediaState();
      }
      else {
        iVar11 = 0;
        pfVar5 = local_18;
        do {
          iVar9 = 0;
          *pfVar5 = 0.0;
          pfVar10 = (float *)(((int)poVar1 - (int)local_18) + (int)pfVar5);
          do {
            iVar2 = iVar9 * 4;
            fVar20 = *pfVar10;
            iVar9 = iVar9 + 1;
            pfVar10 = pfVar10 + 4;
            *pfVar5 = *(float *)((int)puVar3 + iVar2) * fVar20 + *pfVar5;
          } while (iVar9 < 3);
          iVar9 = iVar11 + iVar9 * 4;
          iVar11 = iVar11 + 1;
          *pfVar5 = *(float *)(poVar1 + iVar9 * 4) + *pfVar5;
          pfVar5 = pfVar5 + 1;
        } while (iVar11 < 3);
      }
    }
  }
  else {
    iVar11 = *(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc;
    local_18[0] = *(float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + param_2 * 0xc);
    local_18[1] = *(float *)(iVar11 + 4);
    local_18[2] = *(float *)(iVar11 + 8);
  }
  ppVar4 = local_c;
  fVar20 = CalcVertFog(local_c,(m3dV *)(local_c + 0xa40),(m3dV *)local_18);
  *(float *)(ppVar4 + 0x78) = fVar20 * ___real_437f0000;
  iVar11 = ftol();
  uVar6 = ftol();
  uVar7 = ftol();
  uVar8 = ftol();
  *(uint *)(param_3 + 9) = ((iVar11 << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff) << 8 | uVar8 & 0xff;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_fog.cpp
   addr: 0057F4F0 */

float __thiscall pteFOG_GROUND::CalcVertFog(pteFOG_GROUND *this,m3dV *param_1,m3dV *param_2)

{
  m3dV *pmVar1;
  m3dV *pmVar2;
  int iVar3;
  ulonglong uVar4;
  float10 fVar5;
  float10 fVar6;
  undefined8 in_MM1;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_MM1;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  m3dV *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pmVar2 = param_2;
  if (*(int *)(this + 0xa3c) == 0) {
LAB_0057f531:
    if (*(float *)(param_2 + 4) < *(float *)(this + 0x1c0)) {
      fVar9 = (*(float *)(this + 0xa40) - *(float *)param_2) *
              (*(float *)(this + 0xa40) - *(float *)param_2) +
              (*(float *)(this + 0xa44) - *(float *)(param_2 + 4)) *
              (*(float *)(this + 0xa44) - *(float *)(param_2 + 4)) +
              (*(float *)(this + 0xa48) - *(float *)(param_2 + 8)) *
              (*(float *)(this + 0xa48) - *(float *)(param_2 + 8));
      if (m3dSimdType == 0) {
        fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar10 = auVar11._0_4_;
        param_1 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                           (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar10 * fVar10) *
                          fVar9);
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar4 = (ulonglong)(uint)fVar9;
        uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
        uVar8 = PackedFloatingMUL(uVar7,uVar7);
        uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar4);
        uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
        uVar7 = PackedFloatingMUL(uVar7,uVar4);
        param_1 = (m3dV *)uVar7;
        FastExitMediaState();
      }
      else {
        param_1 = (m3dV *)SQRT(fVar9);
      }
      param_2 = param_1;
      goto LAB_0057f789;
    }
  }
  else {
    if (*(float *)(this + 0x1c0) - _DAT_005df58c < *(float *)(param_2 + 4) !=
        (*(float *)(this + 0x1c0) - _DAT_005df58c == *(float *)(param_2 + 4))) {
      return ___real_00000000;
    }
    if (*(int *)(this + 0xa3c) == 0) goto LAB_0057f531;
  }
  local_18 = *(float *)param_2 - *(float *)param_1;
  local_14 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  local_10 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  m3dNormalize((m3dV *)&local_18);
  pmVar1 = (m3dV *)(this + 0xa40);
  iVar3 = _m3dIsectRayVNPlane(pmVar1,(m3dV *)&local_18,(m3dV *)(this + 0x1bc),(m3dV *)(this + 0x1c8)
                              ,(m3dV *)0x0,(float *)&param_2);
  if (iVar3 == 0) {
    param_2 = (m3dV *)ABS((*(float *)pmVar1 - *(float *)(this + 0x1bc)) * *(float *)(this + 0x1c8) +
                          (*(float *)(this + 0xa44) - *(float *)(this + 0x1c0)) *
                          *(float *)(this + 0x1cc) +
                          (*(float *)(this + 0xa48) - *(float *)(this + 0x1c4)) *
                          *(float *)(this + 0x1d0));
  }
  if (*(int *)(this + 0xa3c) != 0) {
    fVar9 = (*(float *)pmVar1 - *(float *)pmVar2) * (*(float *)pmVar1 - *(float *)pmVar2) +
            (*(float *)(this + 0xa44) - *(float *)(pmVar2 + 4)) *
            (*(float *)(this + 0xa44) - *(float *)(pmVar2 + 4)) +
            (*(float *)(this + 0xa48) - *(float *)(pmVar2 + 8)) *
            (*(float *)(this + 0xa48) - *(float *)(pmVar2 + 8));
    if (m3dSimdType == 0) {
      fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      param_1 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar10 * fVar10) *
                        fVar9);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)fVar9;
      uVar7 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar4);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar4);
      param_1 = (m3dV *)uVar7;
      FastExitMediaState();
    }
    else {
      param_1 = (m3dV *)SQRT(fVar9);
    }
    param_2 = (m3dV *)((float)param_1 - (float)param_2);
  }
LAB_0057f789:
  pmVar1 = *(m3dV **)(this + 0x1ec);
  local_34 = (m3dV *)0x0;
  param_1 = pmVar1;
  if ((float)pmVar1 < ___real_00000000) {
    param_1 = (m3dV *)0x0;
    local_34 = pmVar1;
  }
  fVar5 = (float10)CIpow();
  if (((byte)this[0x1d4] & 1) != 0) {
    local_c = *(float *)(this + 0x1fc) * *(float *)pmVar2 +
              *(float *)(this + 0x208) * *(float *)(this + 0xa38);
    local_4 = *(float *)(this + 0x1fc) * *(float *)(pmVar2 + 8);
    local_8 = *(float *)(this + 0x200) * *(float *)(this + 0xa38);
    fVar5 = (float10)(**(code **)(*(int *)m3dNoise + 8))(&local_c);
    fVar9 = *(float *)(this + 0x1ec);
    local_30 = 1.0;
    local_20 = fVar9;
    fVar12 = 0.0;
    fVar10 = *(float *)(this + 0x20c);
    if (fVar9 < ___real_00000000) {
      local_20 = 0.0;
      fVar12 = fVar9;
      local_30 = *(float *)(this + 0x20c);
      fVar10 = ___real_3f800000;
    }
    fVar6 = (float10)fVar10;
    if (fVar12 <= (float)param_1) {
      if ((float)param_1 <= local_20) {
        local_28 = local_30;
        local_2c = fVar12;
        local_24 = fVar10;
        if (local_20 < fVar12) {
          local_24 = local_30;
          local_2c = local_20;
          local_28 = fVar10;
          local_20 = fVar12;
        }
        fVar6 = (((float10)(float)param_1 - (float10)local_2c) *
                ((float10)local_24 - (float10)local_28)) / ((float10)local_20 - (float10)local_2c) +
                (float10)local_28;
      }
    }
    else {
      fVar6 = (float10)local_30;
    }
    fVar5 = (((float10)___real_3f800000 - fVar6 * (float10)*(float *)(this + 0x204)) +
            fVar6 * (float10)*(float *)(this + 0x204) * fVar5) * (float10)(float)local_34;
    if (fVar5 < (float10)___real_00000000) {
      return ___real_00000000;
    }
    if ((float10)___real_3f800000 < fVar5) {
      fVar5 = (float10)___real_3f800000;
    }
  }
  return (float)fVar5;
}

