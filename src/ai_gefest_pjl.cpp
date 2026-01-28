
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest_pjl.cpp
   addr: 0043F310 */

pjlGEFEST_SFX_TRAIL * __thiscall
pjlGEFEST_SFX_TRAIL::pjlGEFEST_SFX_TRAIL(pjlGEFEST_SFX_TRAIL *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,30.0,0.3);
  *(undefined ***)this = &_vftable_;
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,30.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,30.0,(m3dSPL_LINEAR1D *)pmVar3);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_3f000000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,aiGEFEST_GENERIC::pTexCarbons);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,150.0);
  fVar2 = param_1 * ___real_3ecccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar2;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3e99999a;
  *(undefined4 *)(this + 0xd0) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x419;
  *(uint *)(this + 4) = uVar1 | 0x619;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest_pjl.cpp
   addr: 0043F4B0 */

int __thiscall pjlGEFEST_SFX::StartSFX(pjlGEFEST_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  char cVar1;
  animINST *paVar2;
  pjlGEFEST_SFX_TRAIL *this_00;
  int iVar3;
  objOBJ *poVar4;
  uint uVar5;
  char *pcVar6;
  float fVar7;
  m3dV local_c [12];
  
  paVar2 = *(animINST **)(param_1 + 0xbc);
  fVar7 = *(float *)(param_2 + 0x51);
  animINST::Scale(paVar2,fVar7,fVar7,fVar7,0);
  this_00 = (pjlGEFEST_SFX_TRAIL *)operator_new(0x2c0);
  if (this_00 == (pjlGEFEST_SFX_TRAIL *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = pjlGEFEST_SFX_TRAIL::pjlGEFEST_SFX_TRAIL(this_00,*(float *)(param_2 + 0x51));
  }
  *(int *)this = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar6 = s_emitter;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  poVar4 = objFindNameN(*(objOBJ **)(paVar2 + 0x10),s_emitter,~uVar5 - 1);
  *(objOBJ **)(this + 4) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  fVar7 = m3dRandom();
  animINST::SetAnimSeq(paVar2,0,fVar7 * ___real_3fc00000);
  if (*(int *)this != 0) {
    paVar2 = *(animINST **)(param_1 + 0xbc);
    animINST::AdvanceTime(paVar2,gsElapsedTime,0,(float *)0x0);
    animINST::Validate(paVar2,4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 4),local_c);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)(param_1 + 0xe0));
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  return 1;
}




/* from: ai_gefest_pjl.cpp
   addr: 0043F5C0 */

void __thiscall pjlGEFEST_SFX::UpdateSFX(pjlGEFEST_SFX *this,physPHYS *param_1)

{
  animINST *this_00;
  m3dV local_c [12];
  
  if (*(int *)this != 0) {
    this_00 = *(animINST **)(param_1 + 0xbc);
    animINST::AdvanceTime(this_00,gsElapsedTime,0,(float *)0x0);
    animINST::Validate(this_00,4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 4),local_c);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)(param_1 + 0xe0));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest_pjl.cpp
   addr: 0043F620 */

int __thiscall pjlGEFEST::ProcessINIT(pjlGEFEST *this,physINIT *param_1)

{
  undefined4 uVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  sncCHANNEL *this_00;
  undefined **local_68;
  undefined4 local_64;
  undefined4 local_60;
  m3dV local_5c [4];
  float local_58;
  m3dV local_50 [12];
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  msgDATA local_24 [2];
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = pjlPJL<struct_pjlGEFEST_SFX>::ProcessINIT((pjlPJL<struct_pjlGEFEST_SFX> *)this,param_1);
  if (iVar2 != 0) {
    if ((((byte)this[0x88] & 4) != 0) && (*(int *)(param_1 + 0x48) != -1)) {
      peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar3 != (entIACTIVE_OBJ *)0x0) {
        local_60 = *(undefined4 *)(peVar3 + 0xbc);
        local_34 = _m3dVZero;
        local_68 = &cdtREFINE::_vftable_;
        local_64 = 2;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_30 = DAT_00963740;
        local_2c = DAT_00963744;
        local_28 = 0;
        msgDATA::msgDATA(local_24);
        local_20 = 0xffffffff;
        local_18 = 0xffffffff;
        local_14 = 0xffffffff;
        local_22 = 0x24;
        animINST::GetPos(*(animINST **)(peVar3 + 0xbc),local_5c);
        animINST::GetPos(*(animINST **)(this + 0xbc),local_50);
        local_58 = local_58 + ___real_3fc00000;
        iVar2 = scnSCENE::IsVisiblePoint
                          (gsScenePtr,local_5c,local_50,0,(cdtREFINE *)&local_68,
                           (cdtINFO *)&local_44);
        if (iVar2 == 0) {
          if ((local_40 == 0) || (*(int *)(local_40 + 0x13c) == 0)) {
            local_20 = 0xffffffff;
          }
          else {
            local_20 = *(undefined4 *)(*(int *)(local_40 + 0x13c) + 0x8c);
          }
          local_18 = local_3c;
          local_1c = local_44;
          local_c = local_30;
          local_14 = local_38;
          local_10 = local_34;
          local_8 = local_2c;
          local_4 = local_28;
          msgSYSTEM::PostMsgData(&msgSystem,(msgADDR *)this,0x4d1,local_24,(msgADDR *)this);
        }
      }
    }
    *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 2;
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
      *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x7c) = uVar1;
      *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
      *(undefined4 *)(this_00 + 0x84) = 0x41200000;
      *(undefined4 *)(this_00 + 0x88) = 0x42820000;
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
    *(sncCHANNEL **)(this + 0x1a0) = this_00;
    if (this_00 != (sncCHANNEL *)0x0) {
      gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest_pjl.cpp
   addr: 0043F8C0 */

void __thiscall pjlGEFEST::ProcessFRAME(pjlGEFEST *this)

{
  uint uVar1;
  physMATH *this_00;
  int iVar2;
  sncSOUND_DESCR_3D *psVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  m3dV *pmVar9;
  undefined4 uVar10;
  float fStack_44;
  int local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  m3dV amStack_c [12];
  
  iVar2 = _apCfgReadBool((void **)&DAT_0060b990,s_Debug,s_Decomp_OFF_AI,&local_40);
  if ((iVar2 == 0) || (local_40 == 0)) {
    gsEVENT::gsEVENT((gsEVENT *)&local_18);
    local_10 = 0.0;
    local_14 = 9.80909e-45;
    local_18 = (float)CONCAT22(0xc,(undefined2)local_18);
    if (((byte)gsSysCinema[0x80] & 1) == 0) {
      physPHYS::ProcessFRAME((physPHYS *)this);
      pjlGEFEST_SFX::UpdateSFX((pjlGEFEST_SFX *)(this + 0x153),(physPHYS *)this);
    }
    iVar2 = (**(code **)(*(int *)this + 0x90))();
    if (*(int *)(this + 0x178) != iVar2) {
      fStack_28 = 0.0;
      fStack_2c = 9.80909e-45;
      fStack_30 = 1.124985e-39;
      fStack_28 = (float)(**(code **)(*(int *)this + 0x90))();
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)&fStack_30,0x10000,0xfffffffd,
                 0xfffffffd);
      *(float *)(this + 0x178) = fStack_28;
    }
    animINST::GetPos(*(animINST **)(this + 0xbc),amStack_c);
    uVar1 = *(uint *)(this + 0x19c);
    if ((uVar1 & 0x100) == 0) {
      if ((uVar1 & 0x200) == 0) {
        if ((uVar1 & 1) == 0) {
          uVar10 = 0;
          iVar2 = **(int **)(this + 0x1a0);
          psVar3 = aiGefestGetSound(8);
          (**(code **)(iVar2 + 4))(psVar3,uVar10);
        }
        else {
          iVar2 = **(int **)(this + 0x1a0);
          psVar3 = aiGefestGetSound(8);
          iVar2 = (**(code **)(iVar2 + 8))(psVar3);
          if (iVar2 != 0) {
            (**(code **)(**(int **)(this + 0x1a0) + 0xc))();
          }
        }
      }
      else {
        pmVar9 = amStack_c;
        psVar3 = aiGefestGetSound(10);
        gsSND_SYSTEM::Play(gsSysSound,psVar3,pmVar9);
        *(uint *)(this + 0x19c) = *(uint *)(this + 0x19c) & 0xfffffdff;
      }
    }
    else {
      pmVar9 = amStack_c;
      psVar3 = aiGefestGetSound(9);
      gsSND_SYSTEM::Play(gsSysSound,psVar3,pmVar9);
      *(uint *)(this + 0x19c) = *(uint *)(this + 0x19c) & 0xfffffeff;
    }
    this_00 = *(physMATH **)(this + 0x14f);
    local_18 = *(float *)(this_00 + 0x48);
    local_14 = *(float *)(this_00 + 0x4c);
    local_10 = *(float *)(this_00 + 0x50);
    if (local_14 < ___real_00000000) {
      physMATH::GetPos(this_00,(m3dV *)&local_18);
      iVar2 = *(int *)(this + 0x14f);
      fStack_3c = *(float *)(iVar2 + 0x48);
      fStack_38 = *(float *)(iVar2 + 0x4c);
      fStack_34 = *(float *)(iVar2 + 0x50);
      fStack_44 = fStack_3c * fStack_3c + fStack_38 * fStack_38 + fStack_34 * fStack_34;
      if (m3dSimdType == 0) {
        fStack_44 = fStack_44 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar8 = rsqrtss(ZEXT416((uint)fStack_44),ZEXT416((uint)fStack_44));
        fVar7 = auVar8._0_4_;
        fStack_44 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_44 * fVar7 * fVar7) *
                    fStack_44;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar4 = (ulonglong)(uint)fStack_44;
        uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
        uVar6 = PackedFloatingMUL(uVar5,uVar5);
        uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
        uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
        uVar5 = PackedFloatingMUL(uVar5,uVar4);
        fStack_44 = (float)uVar5;
        FastExitMediaState();
      }
      else {
        fStack_44 = SQRT(fStack_44);
      }
      entENTITY::GetDistToClosestPlayer((entENTITY *)this,0.5,(m3dV *)&fStack_24,(plgsACTION **)0x0)
      ;
      fStack_30 = fStack_24 - local_18;
      fStack_2c = fStack_20 - local_14;
      fStack_28 = fStack_1c - local_10;
      m3dNormalize((m3dV *)&fStack_30);
      fStack_3c = fStack_30 * ___real_40200000 + fStack_3c;
      fStack_38 = fStack_2c * ___real_40200000 + fStack_38;
      fStack_34 = fStack_28 * ___real_40200000 + fStack_34;
      m3dNormalize((m3dV *)&fStack_3c);
      iVar2 = *(int *)(this + 0x14f);
      *(float *)(iVar2 + 0x48) = fStack_3c * fStack_44;
      *(float *)(iVar2 + 0x4c) = fStack_38 * fStack_44;
      *(float *)(iVar2 + 0x50) = fStack_34 * fStack_44;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest_pjl.cpp
   addr: 0043FC40 */

void __thiscall pjlGEFEST::ShowCollisSFX(pjlGEFEST *this,pjlEV_CDT *param_1)

{
  uint uVar1;
  float fVar2;
  m3dV *pmVar3;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = *(uint *)(this + 0x19c) | 0x100;
  }
  else {
    uVar1 = *(uint *)(this + 0x19c) | 0x200;
  }
  *(uint *)(this + 0x19c) = uVar1;
  pmVar3 = (m3dV *)(param_1 + 0x18);
  fVar2 = m3dAngleVector_COS(pmVar3,&m3dVUnitY);
  fVar2 = ABS(fVar2);
  if ((fVar2 <= ___real_3f333333) || (fVar2 < ___real_3f800000 == (fVar2 == ___real_3f800000))) {
    pmVar3 = &m3dVUnitY;
  }
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),pmVar3);
  local_9c = 0x3f800000;
  entCreate(gsScenePtr,s_sfx_gefest_expl,s_sfx_gefest_expl,local_98,&local_9c,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest_pjl.cpp
   addr: 0043FD10 */

void __thiscall
aiGEFEST_GENERIC::AimPjlToPlayer(aiGEFEST_GENERIC *this,m3dV *param_1,physINIT *param_2)

{
  float fVar1;
  m3dV *pmVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_MM2;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pmVar2 = param_1;
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  local_14 = 0.0;
  if (((byte)this[0x51b] & 0x10) == 0) {
    iVar3 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,15.0,(m3dV *)&local_c);
    if (iVar3 != 0) {
      local_8 = local_8 + ___real_3fc00000;
      local_20 = 0.0;
      local_24 = local_c - *(float *)param_1;
      local_1c = local_4 - *(float *)(param_1 + 8);
      m3dNormalize((m3dV *)&local_24);
      fVar9 = m3xzAngleVector((m3dV *)&local_24,(m3dV *)&local_18);
      if (*(float *)(this + 0x187) < ABS(fVar9)) {
        local_24 = local_18;
        local_20 = local_14;
        local_1c = local_10;
      }
      goto LAB_0043fe01;
    }
  }
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  in_MM2 = extraout_MM1;
LAB_0043fe01:
  local_8 = local_8 + ___real_3ecccccd;
  fVar9 = (*(float *)param_1 - local_c) * (*(float *)param_1 - local_c) +
          (*(float *)(param_1 + 8) - local_4) * (*(float *)(param_1 + 8) - local_4);
  if (m3dSimdType == 0) {
    fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar7 = auVar8._0_4_;
    param_1 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar7 * fVar7) * fVar9
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar9;
    uVar5 = PackedFloatingReciprocalSQRAprox(in_MM2,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    param_1 = (m3dV *)uVar5;
    FastExitMediaState();
  }
  else {
    param_1 = (m3dV *)SQRT(fVar9);
  }
  if (*(float *)(this + 0x18b) < (float)param_1) {
    local_24 = local_18;
    local_20 = local_14;
    local_1c = local_10;
  }
  fVar7 = (float)param_1 * ___real_3d888889;
  local_24 = local_24 * ___real_41700000;
  local_20 = local_20 * ___real_41700000;
  local_1c = local_1c * ___real_41700000;
  fVar9 = *(float *)(pmVar2 + 4);
  *(float *)(param_2 + 4) = local_24;
  fVar1 = fVar7 * fVar7 * ___real_c0f00000;
  *(float *)(param_2 + 8) = local_20;
  *(float *)(param_2 + 0xc) = local_1c;
  *(float *)(param_2 + 8) = ((local_8 - fVar9) - fVar1) / fVar7;
  *(float *)(param_2 + 0x10) = _m3dVUnitY * ___real_c1700000;
  *(float *)(param_2 + 0x14) = DAT_005f9994 * ___real_c1700000;
  *(float *)(param_2 + 0x18) = DAT_005f9998 * ___real_c1700000;
  *(float *)(param_2 + 0x61) = *(float *)(param_2 + 4);
  *(undefined4 *)(param_2 + 0x65) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 0x69) = *(undefined4 *)(param_2 + 0xc);
  m3dNormalize((m3dV *)(param_2 + 0x61));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_gefest_pjl.cpp
   addr: 0043FFA0 */

void __thiscall aiGEFEST_GENERIC::LaunchOneProjectile(aiGEFEST_GENERIC *this,objOBJ *param_1)

{
  uint uVar1;
  entENTITY *peVar2;
  int iVar3;
  objOBJ *poVar4;
  undefined4 *puVar5;
  physINIT local_108;
  undefined1 local_107;
  undefined2 local_106;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b7;
  m3dV local_b3 [27];
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  local_104 = _m3dVZero;
  local_f8 = _m3dVZero;
  local_100 = DAT_00963740;
  local_f4 = DAT_00963740;
  local_e8 = DAT_005d2f8c;
  local_e4 = 1;
  local_b8 = 1;
  local_108 = (physINIT)0x0;
  local_107 = 0x40;
  local_fc = DAT_00963744;
  local_f0 = DAT_00963744;
  local_ec = 0x3dcccccd;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0xbf800000;
  local_cc = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0xffffffff;
  local_c0 = 0xffffffff;
  local_bc = 0xbf800000;
  local_b7 = 0x3f800000;
  local_106 = 0x6d;
  animCREATE_DATA::animCREATE_DATA(local_98);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(param_1,local_b3);
  uVar1 = *(uint *)(this + 0x53f);
  poVar4 = param_1 + 0x3c;
  puVar5 = local_86;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)poVar4;
    poVar4 = poVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  if ((uVar1 & 0x400) == 0) {
    local_d0 = 0x41f00000;
    local_cc = 0x40800000;
  }
  else {
    local_d0 = 0x41a00000;
    local_cc = 0x40000000;
  }
  local_c0 = *(undefined4 *)(this + 0x8c);
  local_c4 = 3;
  local_ec = 0x3f4ccccd;
  local_e8 = 0x447a0000;
  local_e4 = 5;
  local_dc = 0x3f000000;
  local_e0 = 0x3f000000;
  AimPjlToPlayer(this,local_b3,&local_108);
  peVar2 = entCreate(gsScenePtr,s_pjl_gefest,s_pjl_gefest,local_98,&local_108,0);
  if (peVar2 != (entENTITY *)0x0) {
    gsEffApplyLMChar(peVar2,(cdtINFO *)(this + 0x453),0);
  }
  return;
}




/* from: ai_gefest_pjl.cpp
   addr: 00440170 */

void __thiscall aiGEFEST_GENERIC::LaunchSeveralProjectiles(aiGEFEST_GENERIC *this,objOBJ *param_1)

{
  uint uVar1;
  entENTITY *peVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  objOBJ *poVar6;
  physINIT *ppVar7;
  undefined4 *puVar8;
  physINIT *ppVar9;
  ulonglong uVar10;
  undefined8 extraout_MM1;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float local_180;
  physINIT local_178 [2];
  undefined2 local_176;
  float local_174;
  float local_170;
  float local_16c;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined4 local_127;
  m3dV local_123 [27];
  physINIT local_108 [2];
  undefined2 local_106;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b7;
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  physINIT::physINIT(local_178);
  local_140 = 0xbf800000;
  local_13c = 0;
  local_138 = 0xffffffff;
  local_134 = 0xffffffff;
  local_130 = 0xffffffff;
  local_12c = 0xbf800000;
  local_128 = 1;
  local_127 = 0x3f800000;
  local_176 = 0x6d;
  physINIT::physINIT(local_108);
  local_d0 = 0xbf800000;
  local_cc = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0xffffffff;
  local_c0 = 0xffffffff;
  local_bc = 0xbf800000;
  local_b8 = 1;
  local_b7 = 0x3f800000;
  local_106 = 0x6d;
  animCREATE_DATA::animCREATE_DATA(local_98);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(param_1,local_123);
  uVar1 = *(uint *)(this + 0x53f);
  poVar6 = param_1 + 0x3c;
  puVar8 = local_86;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *(undefined4 *)poVar6;
    poVar6 = poVar6 + 4;
    puVar8 = puVar8 + 1;
  }
  if ((uVar1 & 0x400) == 0) {
    local_140 = 0x41f00000;
    local_13c = 0x40800000;
  }
  else {
    local_140 = 0x41a00000;
    local_13c = 0x40000000;
  }
  local_130 = *(undefined4 *)(this + 0x8c);
  local_134 = 3;
  local_15c = 0x3f4ccccd;
  local_158 = 0x447a0000;
  local_154 = 5;
  local_14c = 0x3f000000;
  local_150 = 0x3f000000;
  AimPjlToPlayer(this,local_123,local_178);
  iVar3 = m3dRandIntRange(5,7);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      ppVar7 = local_178;
      ppVar9 = local_108;
      for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)ppVar9 = *(undefined4 *)ppVar7;
        ppVar7 = ppVar7 + 4;
        ppVar9 = ppVar9 + 4;
      }
      *ppVar9 = *ppVar7;
      m3dNormalize((m3dV *)&local_104);
      m3dMakeVUnitConusRandom((m3dV *)&local_104,(float)&local_104,(m3dV *)0x41000000);
      m3dNormalize((m3dV *)&local_104);
      local_180 = local_174 * local_174 + local_170 * local_170 + local_16c * local_16c;
      if (m3dSimdType == 0) {
        local_180 = local_180 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar14 = rsqrtss(ZEXT416((uint)local_180),ZEXT416((uint)local_180));
        fVar13 = auVar14._0_4_;
        local_180 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - local_180 * fVar13 * fVar13) *
                    local_180;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar10 = (ulonglong)(uint)local_180;
        uVar11 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar10);
        uVar12 = PackedFloatingMUL(uVar11,uVar11);
        uVar12 = PackedFloatingReciprocalSQRIter1(uVar12,uVar10);
        uVar11 = PackedFloatingReciprocalIter2(uVar12,uVar11);
        uVar11 = PackedFloatingMUL(uVar11,uVar10);
        local_180 = (float)uVar11;
        FastExitMediaState();
      }
      else {
        local_180 = SQRT(local_180);
      }
      local_104 = local_104 * local_180;
      local_100 = local_100 * local_180;
      local_fc = local_fc * local_180;
      peVar2 = entCreate(gsScenePtr,s_pjl_gefest,s_pjl_gefest,local_98,local_108,0);
      if (peVar2 == (entENTITY *)0x0) {
        return;
      }
      gsEffApplyLMChar(peVar2,(cdtINFO *)(this + 0x453),0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}

