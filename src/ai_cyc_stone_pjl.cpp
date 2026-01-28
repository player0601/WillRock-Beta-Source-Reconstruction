
/* from: ai_cyc_stone_pjl.cpp
   addr: 004396A0 */

int __fastcall aiCycStonePjlInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pjl_stone_cyclop,0x53544f4e,0x32,pjlSTONE::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyc_stone_pjl.cpp
   addr: 004396D0 */

entENTITY * __fastcall pjlSTONE::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1b8);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0xbf800000;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0xffffffff;
    *(undefined4 *)(this + 0x15f) = 0xffffffff;
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xbf800000;
    *(undefined4 *)(this + 0x16c) = 0;
    *(undefined ***)this = &pjlPJL<struct_pjlSFX_NONE>::_vftable_;
    *(undefined4 *)(this + 0x170) = 0;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = _m3dVZero;
    *(undefined4 *)(this + 0x188) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x18c) = uVar1;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_cyc_stone_pjl.cpp
   addr: 00439790
   addr: 00439790
   addr: 00439790
   addr: 00439790 */

void * __thiscall pjlSTONE::_vector_deleting_destructor_(pjlSTONE *this,uint param_1)

{
  *(undefined ***)this = &pjlPJL<struct_pjlSFX_NONE>::_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyc_stone_pjl.cpp
   addr: 004397C0 */

int __thiscall pjlSTONE::ProcessINIT(pjlSTONE *this,physINIT *param_1)

{
  undefined4 uVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  sncCHANNEL *this_00;
  objOBJ *poVar4;
  float extraout_ECX;
  float fVar5;
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
  
  *(undefined4 *)(this + 0x1a0) = 0;
  iVar2 = pjlPJL<struct_pjlSFX_NONE>::ProcessINIT((pjlPJL<struct_pjlSFX_NONE> *)this,param_1);
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
    *(sncCHANNEL **)(this + 0x19c) = this_00;
    if (this_00 == (sncCHANNEL *)0x0) {
      return 0;
    }
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
    poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_rot_center);
    *(objOBJ **)(this + 0x194) = poVar4;
    if (poVar4 != (objOBJ *)0x0) {
      *(undefined4 *)(this + 0x198) = 0;
      m3dMakeVUnitRandom((m3dV *)(this + 0x1a8));
      fVar5 = m3dRandMax(extraout_ECX);
      *(float *)(this + 0x1b4) = fVar5 + ___real_41f00000;
      *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 4;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00439b4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyc_stone_pjl.cpp
   addr: 00439AB0
   addr: 00439AB0 */

void __thiscall pjlKNIFE::GenerateCDTUponHittingPlayer(pjlKNIFE *this)

{
  plgsACTION *local_30;
  m3dV local_2c [12];
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = _m3dVZero;
  local_c = DAT_00963740;
  local_8 = DAT_00963744;
  local_4 = 0;
  entENTITY::GetDistToClosestPlayer((entENTITY *)this,1.5,local_2c,&local_30);
  local_20 = local_20 | 2;
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_10);
  local_1c = *(undefined4 *)(local_30 + 0xbc);
  msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x3f9,&local_20,(msgADDR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyc_stone_pjl.cpp
   addr: 00439B60 */

void __thiscall pjlSTONE::ProcessFRAME(pjlSTONE *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  sncSOUND_DESCR_3D *psVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 extraout_MM1_01;
  undefined8 extraout_MM1_02;
  undefined8 extraout_MM1_03;
  undefined8 extraout_MM1_04;
  undefined8 extraout_MM1_05;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined4 uVar10;
  float fStack_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  pjlEV_CHANGE_STATE::pjlEV_CHANGE_STATE((pjlEV_CHANGE_STATE *)&local_c);
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
  }
  iVar2 = (**(code **)(*(int *)this + 0x90))();
  uVar6 = extraout_MM1;
  if (*(int *)(this + 0x170) != iVar2) {
    pjlEV_CHANGE_STATE::pjlEV_CHANGE_STATE((pjlEV_CHANGE_STATE *)&local_c);
    fStack_4 = (float)(**(code **)(*(int *)this + 0x90))();
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)&local_c,0x10000,0xfffffffd,
               0xfffffffd);
    *(float *)(this + 0x170) = fStack_4;
    uVar6 = extraout_MM1_00;
  }
  iVar2 = *(int *)(this + 0x14f);
  local_c = *(float *)(iVar2 + 0x48);
  fStack_8 = *(float *)(iVar2 + 0x4c);
  fStack_4 = *(float *)(iVar2 + 0x50);
  uVar1 = *(uint *)(this + 0x198);
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 0x200) == 0) {
      if ((uVar1 & 0x10) == 0) {
        uVar10 = 0;
        iVar2 = **(int **)(this + 0x19c);
        psVar4 = aiCyclopGetSound(9);
        (**(code **)(iVar2 + 4))(psVar4,uVar10);
        uVar6 = extraout_MM1_03;
      }
      else {
        iVar2 = **(int **)(this + 0x19c);
        psVar4 = aiCyclopGetSound(9);
        iVar2 = (**(code **)(iVar2 + 8))(psVar4);
        uVar6 = extraout_MM1_04;
        if (iVar2 != 0) {
          (**(code **)(**(int **)(this + 0x19c) + 0xc))();
          uVar6 = extraout_MM1_05;
        }
      }
    }
    else {
      fStack_10 = local_c * local_c + fStack_8 * fStack_8 + fStack_4 * fStack_4;
      if (m3dSimdType == 0) {
        fStack_10 = fStack_10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar8 = rsqrtss(ZEXT416((uint)fStack_10),ZEXT416((uint)fStack_10));
        fVar9 = auVar8._0_4_;
        fStack_10 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_10 * fVar9 * fVar9) *
                    fStack_10;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar5 = (ulonglong)(uint)fStack_10;
        uVar6 = PackedFloatingReciprocalSQRAprox(uVar6,uVar5);
        uVar7 = PackedFloatingMUL(uVar6,uVar6);
        uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
        uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
        uVar6 = PackedFloatingMUL(uVar6,uVar5);
        fStack_10 = (float)uVar6;
        FastExitMediaState();
      }
      else {
        fStack_10 = SQRT(fStack_10);
      }
      if (___real_41200000 < fStack_10) {
        fStack_10 = ___real_41200000;
      }
      uVar10 = 0;
      *(float *)(*(int *)(this + 0x19c) + 0x54) = fStack_10 * ___real_40800000 - ___real_42200000;
      iVar2 = **(int **)(this + 0x19c);
      psVar4 = aiCyclopGetSound(0xe);
      (**(code **)(iVar2 + 4))(psVar4,uVar10);
      *(uint *)(this + 0x198) = *(uint *)(this + 0x198) & 0xfffffdff;
      uVar6 = extraout_MM1_02;
    }
  }
  else {
    fStack_10 = local_c * local_c + fStack_8 * fStack_8 + fStack_4 * fStack_4;
    if (m3dSimdType == 0) {
      fStack_10 = fStack_10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar8 = rsqrtss(ZEXT416((uint)fStack_10),ZEXT416((uint)fStack_10));
      fVar9 = auVar8._0_4_;
      fStack_10 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                  (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_10 * fVar9 * fVar9) *
                  fStack_10;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar5 = (ulonglong)(uint)fStack_10;
      uVar6 = PackedFloatingReciprocalSQRAprox(uVar6,uVar5);
      uVar7 = PackedFloatingMUL(uVar6,uVar6);
      uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
      uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
      uVar6 = PackedFloatingMUL(uVar6,uVar5);
      fStack_10 = (float)uVar6;
      FastExitMediaState();
    }
    else {
      fStack_10 = SQRT(fStack_10);
    }
    if (fStack_10 < ___real_3f800000) {
      *(uint *)(this + 0x198) = *(uint *)(this + 0x198) & 0xfffffeff;
    }
    else {
      if (___real_41200000 < fStack_10) {
        fStack_10 = ___real_41200000;
      }
      uVar10 = 0;
      *(float *)(*(int *)(this + 0x19c) + 0x54) = fStack_10 * ___real_40800000 - ___real_42200000;
      iVar2 = **(int **)(this + 0x19c);
      iVar3 = m3dRandSelect(10,0xb,0xc,0xd);
      psVar4 = aiCyclopGetSound(iVar3);
      (**(code **)(iVar2 + 4))(psVar4,uVar10);
      *(uint *)(this + 0x198) = *(uint *)(this + 0x198) & 0xfffffeff;
      uVar6 = extraout_MM1_01;
    }
  }
  fStack_10 = local_c * local_c + fStack_8 * fStack_8 + fStack_4 * fStack_4;
  if (m3dSimdType == 0) {
    fStack_10 = fStack_10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)fStack_10),ZEXT416((uint)fStack_10));
    fVar9 = auVar8._0_4_;
    fStack_10 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_10 * fVar9 * fVar9) *
                fStack_10;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar5 = (ulonglong)(uint)fStack_10;
    uVar6 = PackedFloatingReciprocalSQRAprox(uVar6,uVar5);
    uVar7 = PackedFloatingMUL(uVar6,uVar6);
    uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
    uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
    uVar6 = PackedFloatingMUL(uVar6,uVar5);
    fStack_10 = (float)uVar6;
    FastExitMediaState();
  }
  else {
    fStack_10 = SQRT(fStack_10);
  }
  fStack_10 = (float)(uint)(ABS(fStack_10) < ___real_3e4ccccd);
  if ((float)(int)fStack_10 != ___real_00000000) {
    *(uint *)(this + 0x198) = *(uint *)(this + 0x198) | 1;
    iVar2 = *(int *)(this + 0x14f);
    *(undefined4 *)(iVar2 + 0x48) = _m3dVZero;
    *(undefined4 *)(iVar2 + 0x4c) = DAT_00963740;
    *(undefined4 *)(iVar2 + 0x50) = DAT_00963744;
    *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
    msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,5.0);
  }
  if (((byte)this[0x198] & 1) == 0) {
    fVar9 = gsElapsedTime * *(float *)(this + 0x1b4);
    m3dMATR::RotateX((m3dMATR *)(*(int *)(this + 0x194) + 0x7c),fVar9 * *(float *)(this + 0x1a8),1);
    m3dMATR::RotateY((m3dMATR *)(*(int *)(this + 0x194) + 0x7c),fVar9 * *(float *)(this + 0x1ac),1);
    m3dMATR::RotateZ((m3dMATR *)(*(int *)(this + 0x194) + 0x7c),fVar9 * *(float *)(this + 0x1b0),1);
    objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x194));
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  }
  if (((((byte)this[0x88] & 4) != 0) && (((byte)this[0x198] & 1) == 0)) &&
     (fVar9 = entENTITY::GetDistToClosestPlayer
                        ((entENTITY *)this,1.5,(m3dV *)&local_c,(plgsACTION **)0x0),
     fVar9 < *(float *)(this + 0x1a4))) {
    pjlKNIFE::GenerateCDTUponHittingPlayer((pjlKNIFE *)this);
    iVar2 = *(int *)(this + 0x14f);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x48) = _m3dVZero;
      *(undefined4 *)(iVar2 + 0x4c) = DAT_00963740;
      *(undefined4 *)(iVar2 + 0x50) = DAT_00963744;
    }
    objOBJ::SetStateProcYes
              (*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyc_stone_pjl.cpp
   addr: 0043A0E0 */

void __thiscall pjlSTONE::ProcessEV_CDT(pjlSTONE *this,pjlEV_CDT *param_1)

{
  int iVar1;
  
  *(uint *)(this + 0x16c) = *(uint *)(this + 0x16c) | 1;
  *(uint *)(this + 0x198) = *(uint *)(this + 0x198) | 0x10;
  if (*(int *)(gsSysMP + 0x28) != 4) {
    (**(code **)(*(int *)this + 0x84))(param_1);
  }
  iVar1 = *(int *)(this + 0x14f);
  if ((*(int *)(iVar1 + 0x80) <= *(int *)(iVar1 + 0xb0)) ||
     ((*(int *)(param_1 + 8) != 1 && (*(int *)(param_1 + 8) != 0)))) {
    *(uint *)(this + 0x198) = *(uint *)(this + 0x198) | 1;
    *(undefined4 *)(iVar1 + 0x48) = _m3dVZero;
    *(undefined4 *)(iVar1 + 0x4c) = DAT_00963740;
    *(undefined4 *)(iVar1 + 0x50) = DAT_00963744;
    *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
    msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,0.1);
  }
  return;
}




/* from: ai_cyc_stone_pjl.cpp
   addr: 0043A1A0 */

void __thiscall pjlSTONE::ShowCollisSFX(pjlSTONE *this,pjlEV_CDT *param_1)

{
  if (*(int *)(param_1 + 8) == 1) {
    *(uint *)(this + 0x198) = *(uint *)(this + 0x198) | 0x100;
    return;
  }
  *(uint *)(this + 0x198) = *(uint *)(this + 0x198) | 0x200;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyc_stone_pjl.cpp
   addr: 0043A1D0 */

void __thiscall aiCYCLOP::AimStoneToPlayer(aiCYCLOP *this,m3dV *param_1,physINIT *param_2)

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
    iVar3 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,60.0,(m3dV *)&local_c);
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
      goto LAB_0043a2c1;
    }
  }
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  in_MM2 = extraout_MM1;
LAB_0043a2c1:
  local_20 = local_20 * ___real_42700000;
  local_1c = local_1c * ___real_42700000;
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
  fVar7 = (float)param_1 * ___real_3c888889;
  fVar9 = *(float *)(pmVar2 + 4);
  fVar1 = fVar7 * fVar7 * ___real_c0900000;
  *(float *)(param_2 + 4) = local_24 * ___real_42700000;
  *(float *)(param_2 + 8) = local_20;
  *(float *)(param_2 + 0xc) = local_1c;
  *(float *)(param_2 + 8) = ((local_8 - fVar9) - fVar1) / fVar7;
  *(float *)(param_2 + 0x10) = _m3dVUnitY * ___real_c1100000;
  *(float *)(param_2 + 0x14) = DAT_005f9994 * ___real_c1100000;
  *(float *)(param_2 + 0x18) = DAT_005f9998 * ___real_c1100000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyc_stone_pjl.cpp
   addr: 0043A430 */

void __thiscall aiCYCLOP::LaunchOneStone(aiCYCLOP *this)

{
  uint uVar1;
  entENTITY *this_00;
  int iVar2;
  float extraout_ECX;
  float extraout_ECX_00;
  objOBJ *poVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  physINIT local_f8;
  undefined1 local_f7;
  undefined2 local_f6;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  m3dV local_a4 [12];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_86 [33];
  
  local_f4 = _m3dVZero;
  local_e8 = _m3dVZero;
  local_d8 = DAT_005d2898;
  local_f0 = DAT_00963740;
  local_e4 = DAT_00963740;
  local_f8 = (physINIT)0x0;
  local_f7 = 0x40;
  local_ec = DAT_00963744;
  local_e0 = DAT_00963744;
  local_dc = 0.1;
  local_d4 = 1;
  local_d0 = 0.0;
  local_cc = 0.0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0xbf800000;
  local_bc = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0xffffffff;
  local_b0 = 0xffffffff;
  local_ac = 0xbf800000;
  local_a8 = 1;
  local_f6 = 0x51;
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_98);
  poVar3 = *(objOBJ **)(this + 0x56b);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(poVar3,local_a4);
  iVar5 = *(int *)(this + 0xbc);
  poVar3 = poVar3 + 0x3c;
  puVar4 = local_86;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)poVar3;
    poVar3 = poVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  local_98 = 0x40800000;
  local_94 = 0x40800000;
  local_90 = 0x40800000;
  if (*(int *)(iVar5 + 0xe0) != 7) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffff9fff;
    return;
  }
  fVar6 = m3dRandom();
  if (___real_3ea8f5c3 <= fVar6) {
    iVar5 = 1;
    if ((float)___real_3fe51eb851eb851f <= fVar6) {
      iVar5 = 2;
    }
  }
  else {
    iVar5 = 0;
  }
  if ((*(uint *)(this + 0x53f) & 0x10000000) != 0) {
    iVar5 = iVar5 + 3;
  }
  local_dc = (float)(&DAT_005eff28)[iVar5] * ___real_3f638e39;
  local_d8 = 0x447a0000;
  local_d4 = 0xf;
  fVar6 = m3dRandMax(extraout_ECX);
  local_cc = (fVar6 - ___real_3ccccccd) + ___real_3f000000;
  fVar6 = m3dRandMax(extraout_ECX_00);
  local_b0 = *(undefined4 *)(this + 0x8c);
  local_d0 = (fVar6 - ___real_3ccccccd) + ___real_3f000000;
  local_b4 = 3;
  local_bc = 0x40400000;
  local_c0 = *(undefined4 *)(iVar5 * 4 + 0x5eff40);
  AimStoneToPlayer(this,local_a4,&local_f8);
  this_00 = entCreate(gsScenePtr,s_pjl_stone_cyclop,*(char **)(iVar5 * 4 + 0x5eff10),
                      (animCREATE_DATA *)&local_98,&local_f8,0);
  if (this_00 != (entENTITY *)0x0) {
    *(int *)(this_00 + 0x1a0) = iVar5;
    *(float *)(this_00 + 0x1a4) = (float)(&DAT_005eff28)[iVar5] + ___real_3f000000;
    physPHYS::AddEntCDTExclude((physPHYS *)this_00,(entENTITY *)this);
    gsEffApplyLMChar(this_00,(cdtINFO *)(this + 0x453),0);
    uVar1 = *(uint *)(this + 0x53f);
    *(uint *)(this + 0x53f) = uVar1 & 0xffffbfff;
    fVar6 = m3dRandMax((float)(uVar1 & 0xffffbfff));
    *(float *)(this + 0x553) = fVar6 + ___real_3d4ccccd;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyc_stone_pjl.cpp
   addr: 0043A6B0 */

void __thiscall aiCYCLOP::LaunchSeveralStones(aiCYCLOP *this)

{
  entENTITY *peVar1;
  int iVar2;
  int iVar3;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  int iVar4;
  objOBJ *poVar5;
  physINIT *ppVar6;
  undefined4 *puVar7;
  physINIT *ppVar8;
  ulonglong uVar9;
  undefined8 extraout_MM1;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float local_15c;
  int local_154;
  m3dV local_14c [12];
  physINIT local_140 [2];
  undefined2 local_13e;
  float local_13c;
  float local_138;
  float local_134;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  physINIT local_ec [2];
  undefined2 local_ea;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_86 [33];
  
  physINIT::physINIT(local_140);
  local_108 = 0xbf800000;
  local_104 = 0;
  local_100 = 0xffffffff;
  local_fc = 0xffffffff;
  local_f8 = 0xffffffff;
  local_f4 = 0xbf800000;
  local_f0 = 1;
  local_13e = 0x51;
  physINIT::physINIT(local_ec);
  local_b4 = 0xbf800000;
  local_b0 = 0;
  local_ac = 0xffffffff;
  local_a8 = 0xffffffff;
  local_a4 = 0xffffffff;
  local_a0 = 0xbf800000;
  local_9c = 1;
  local_ea = 0x51;
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_98);
  poVar5 = *(objOBJ **)(this + 0x56b);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(poVar5,local_14c);
  poVar5 = poVar5 + 0x3c;
  puVar7 = local_86;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *(undefined4 *)poVar5;
    poVar5 = poVar5 + 4;
    puVar7 = puVar7 + 1;
  }
  local_98 = 0x40000000;
  local_94 = 0x40000000;
  local_90 = 0x40000000;
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) != 7) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffff9fff;
    return;
  }
  local_f8 = *(undefined4 *)(this + 0x8c);
  local_120 = 0x447a0000;
  local_11c = 0xf;
  local_114 = 0x3f000000;
  local_118 = 0x3f000000;
  local_fc = 3;
  local_104 = 0x40400000;
  AimStoneToPlayer(this,local_14c,local_140);
  iVar2 = m3dRandIntRange(10,0xe);
  local_154 = 0;
  if (0 < iVar2) {
    do {
      fVar13 = m3dRandom();
      if (___real_3ea8f5c3 <= fVar13) {
        iVar4 = 1;
        if ((float)___real_3fe51eb851eb851f <= fVar13) {
          iVar4 = 2;
        }
      }
      else {
        iVar4 = 0;
      }
      if ((*(uint *)(this + 0x53f) & 0x10000000) != 0) {
        iVar4 = iVar4 + 3;
      }
      local_124 = (float)(&DAT_005eff28)[iVar4] * ___real_3ee38e39;
      local_108 = *(undefined4 *)(iVar4 * 4 + 0x5eff40);
      ppVar6 = local_140;
      ppVar8 = local_ec;
      for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)ppVar8 = *(undefined4 *)ppVar6;
        ppVar6 = ppVar6 + 4;
        ppVar8 = ppVar8 + 4;
      }
      *ppVar8 = *ppVar6;
      fVar13 = m3dRandRange(0.0,extraout_EDX);
      local_e8 = fVar13 * local_e8;
      fVar13 = m3dRandRange(extraout_ECX,extraout_EDX_00);
      local_e4 = fVar13 * local_e4;
      fVar13 = m3dRandRange(extraout_ECX_00,extraout_EDX_01);
      local_e0 = fVar13 * local_e0;
      m3dNormalize((m3dV *)&local_e8);
      local_15c = local_13c * local_13c + local_138 * local_138 + local_134 * local_134;
      if (m3dSimdType == 0) {
        local_15c = local_15c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar12 = rsqrtss(ZEXT416((uint)local_15c),ZEXT416((uint)local_15c));
        fVar13 = auVar12._0_4_;
        local_15c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - local_15c * fVar13 * fVar13) *
                    local_15c;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar9 = (ulonglong)(uint)local_15c;
        uVar10 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar9);
        uVar11 = PackedFloatingMUL(uVar10,uVar10);
        uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
        uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
        uVar10 = PackedFloatingMUL(uVar10,uVar9);
        local_15c = (float)uVar10;
        FastExitMediaState();
      }
      else {
        local_15c = SQRT(local_15c);
      }
      local_e8 = local_e8 * local_15c;
      local_e4 = local_e4 * local_15c;
      local_e0 = local_15c * local_e0;
      peVar1 = entCreate(gsScenePtr,s_pjl_stone_cyclop,*(char **)(iVar4 * 4 + 0x5eff10),
                         (animCREATE_DATA *)&local_98,local_ec,0);
      if (peVar1 == (entENTITY *)0x0) {
        return;
      }
      *(int *)(peVar1 + 0x1a0) = iVar4;
      *(float *)(peVar1 + 0x1a4) = (float)(&DAT_005eff28)[iVar4] + ___real_3f000000;
      gsEffApplyLMChar(peVar1,(cdtINFO *)(this + 0x453),0);
      local_154 = local_154 + 1;
    } while (local_154 < iVar2);
  }
  *(undefined4 *)(this + 0x553) = 0x40000000;
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xffffbfff;
  return;
}




/* from: ai_cyc_stone_pjl.cpp
   addr: 0043AA90 */

int __thiscall
pjlPJL<struct_pjlSFX_NONE>::ProcessINIT(pjlPJL<struct_pjlSFX_NONE> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x153) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x157) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x4c);
  this[0x16b] = *(pjlPJL<struct_pjlSFX_NONE> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x48);
  }
  return 1;
}




/* from: ai_cyc_stone_pjl.cpp
   addr: 0043AB30
   addr: 0043AB30 */

void __thiscall pjlPJL<struct_pwpMDG_PJL_SFX>::ProcessFRAME(pjlPJL<struct_pwpMDG_PJL_SFX> *this)

{
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cyc_stone_pjl.cpp
   addr: 0043AB50
   addr: 0043AB50 */

void __thiscall
pjlPJL<struct_pjlSPHINX_SFX>::ProcessEV_CDT(pjlPJL<struct_pjlSPHINX_SFX> *this,pjlEV_CDT *param_1)

{
  int iVar1;
  
  *(uint *)(this + 0x16c) = *(uint *)(this + 0x16c) | 1;
  if (*(int *)(gsSysMP + 0x28) != 4) {
    (**(code **)(*(int *)this + 0x84))(param_1);
  }
  iVar1 = *(int *)(this + 0x14f);
  *(undefined4 *)(iVar1 + 0x48) = _m3dVZero;
  *(undefined4 *)(iVar1 + 0x4c) = DAT_00963740;
  *(undefined4 *)(iVar1 + 0x50) = DAT_00963744;
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
  (**(code **)(*(int *)this + 0x88))();
  return;
}




/* from: ai_cyc_stone_pjl.cpp
   addr: 0043ABC0 */

void __thiscall pjlEV_CHANGE_STATE::pjlEV_CHANGE_STATE(pjlEV_CHANGE_STATE *this)

{
  *this = (pjlEV_CHANGE_STATE)0x0;
  this[1] = (pjlEV_CHANGE_STATE)0x40;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 7;
  *(undefined2 *)(this + 2) = 0xc;
  return;
}

