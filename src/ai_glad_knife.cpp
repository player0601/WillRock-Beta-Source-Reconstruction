
/* from: ai_glad_knife.cpp
   addr: 004416E0 */

entENTITY * __fastcall aiGLAD_KNIFE::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x593);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x94) = 0xb;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_glad_knife.cpp
   addr: 00441730 */

int __thiscall aiGLAD_KNIFE::ProcessINIT(aiGLAD_KNIFE *this,void *param_1)

{
  int iVar1;
  
  iVar1 = aiGLAD_GENERIC::ProcessINIT((aiGLAD_GENERIC *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x52b) = 0x42b40000;
  *(undefined4 *)(this + 0x54b) = 5;
  return 1;
}




/* from: ai_glad_knife.cpp
   addr: 00441770 */

void __thiscall aiGLAD_KNIFE::ProcessINIT_LEVEL(aiGLAD_KNIFE *this)

{
  objOBJ *this_00;
  
  if ((*(int *)(this + 0xbc) != 0) &&
     (this_00 = *(objOBJ **)(*(int *)(this + 0xbc) + 0x10), this_00 != (objOBJ *)0x0)) {
    objOBJ::ReplaceTex(this_00,s_gladiator_01a,s_gladiator_01b);
  }
  aiNPC_WR::ProcessINIT_LEVEL((aiNPC_WR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_knife.cpp
   addr: 004417A0 */

int __thiscall aiGLAD_KNIFE::EvalAnimGoalSeq(aiGLAD_KNIFE *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(this + 1099);
  if (((uVar1 & 1) == 0) && ((uVar1 & 0x10000) == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  if ((uVar1 & 0x200000) == 0) {
    iVar3 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
    if (iVar3 == 0) {
      uVar1 = *(uint *)(this + 0x53f);
      if ((uVar1 & 0x200) == 0) {
        uVar2 = *(uint *)(this + 1099);
        if ((uVar2 & 0x10000) == 0) {
          if ((uVar1 & 0x30) == 0) {
            if ((uVar1 & 8) == 0) {
              if (*(float *)(this + 0x517) <= _DAT_005d2fcc) {
                if ((uVar2 & 0x1000) == 0) {
                  if ((uVar1 & 4) == 0) {
                    uVar4 = ~-(uint)((uVar2 & 4) != 0) & uVar4;
                  }
                  else {
                    uVar4 = 4;
                  }
                }
                else {
                  uVar4 = 3;
                }
              }
              else {
                uVar4 = 0;
              }
            }
            else {
              uVar4 = *(uint *)(this + 0x54b);
            }
          }
          else {
            uVar4 = ((uVar2 & 0x200000) != 0) + 5;
            *(uint *)(this + 0x53f) = uVar1 & 0xffffffcf | 8;
            *(uint *)(this + 0x54f) = ~uVar2 >> 0x15 & 1;
            *(uint *)(this + 0x54b) = uVar4;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 6;
  }
  if (((byte)this[0x53f] & 0x40) != 0) {
    uVar4 = uVar4 + 7;
  }
  return uVar4;
}




/* from: ai_glad_knife.cpp
   addr: 004418B0 */

int __fastcall aiGladKnifePjlInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pjl_knife_glad,0x4b4e4946,0x32,pjlKNIFE::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_knife.cpp
   addr: 004418E0 */

entENTITY * __fastcall pjlKNIFE::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1c0);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0xbf800000;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xffffffff;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x16f) = 0xbf800000;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined ***)this = &pjlPJL<struct_pjlSFX_TRAIL>::_vftable_;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = _m3dVZero;
    *(undefined4 *)(this + 400) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x194) = uVar1;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_glad_knife.cpp
   addr: 004419A0
   addr: 004419A0
   addr: 004419A0
   addr: 004419A0 */

void * __thiscall
pjlPJL<struct_pjlSFX_TRAIL>::_vector_deleting_destructor_
          (pjlPJL<struct_pjlSFX_TRAIL> *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_knife.cpp
   addr: 004419D0 */

int __thiscall pjlKNIFE::ProcessINIT(pjlKNIFE *this,physINIT *param_1)

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
  pjlCDT local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
    this[0x173] = *(pjlKNIFE *)(param_1 + 0x50);
    if (((byte)this[0x88] & 4) != 0) {
      if (*(int *)(param_1 + 0x48) != -1) {
        peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
        if (peVar3 != (entIACTIVE_OBJ *)0x0) {
          physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar3);
        }
      }
      *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
    }
    if (*(int *)(gsSysMP + 0x28) != 4) {
      pjlSFX_TRAIL::StartSFX((pjlSFX_TRAIL *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1)
      ;
    }
    if ((((byte)this[0x88] & 4) != 0) && (*(int *)(param_1 + 0x48) != -1)) {
      peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar3 != (entIACTIVE_OBJ *)0x0) {
        local_60 = *(undefined4 *)(peVar3 + 0xbc);
        local_68 = &cdtREFINE::_vftable_;
        local_64 = 2;
        cdtINFO::cdtINFO((cdtINFO *)&local_44);
        pjlCDT::pjlCDT(local_24);
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
          local_10 = local_34;
          local_14 = local_38;
          local_4 = local_28;
          local_8 = local_2c;
          msgSYSTEM::PostMsgData
                    (&msgSystem,(msgADDR *)this,0x4d1,(msgDATA *)local_24,(msgADDR *)this);
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
      *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
      *(undefined4 *)(this_00 + 0x7c) = uVar1;
      *(undefined4 *)(this_00 + 0x84) = 0x41200000;
      *(undefined4 *)(this_00 + 0x88) = 0x42820000;
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
    *(sncCHANNEL **)(this + 0x1a4) = this_00;
    if (this_00 == (sncCHANNEL *)0x0) {
      return 0;
    }
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
    poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_rot_center);
    *(objOBJ **)(this + 0x19c) = poVar4;
    if (poVar4 != (objOBJ *)0x0) {
      *(undefined4 *)(this + 0x1a0) = 0;
      *(undefined4 *)(this + 0x1b0) = 0x3f800000;
      *(undefined4 *)(this + 0x1b4) = 0;
      *(undefined4 *)(this + 0x1b8) = 0;
      fVar5 = m3dRandMax(extraout_ECX);
      *(float *)(this + 0x1bc) = fVar5 + ___real_43af0000;
      m3dMATR::RotateX((m3dMATR *)(*(int *)(this + 0x19c) + 0x7c),-90.0,1);
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_knife.cpp
   addr: 00441D20 */

void __thiscall pjlKNIFE::ProcessFRAME(pjlKNIFE *this)

{
  int iVar1;
  sncSOUND_DESCR_3D *psVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 extraout_MM1_01;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  m3dV *pmVar9;
  float fStack_20;
  int local_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  m3dV amStack_c [12];
  
  *(undefined4 *)(this + 0x1a8) = 0;
  iVar1 = _apCfgReadBool((void **)&DAT_0060bf54,s_Debug,s_Decomp_OFF_AI,&local_1c);
  if ((iVar1 != 0) && (local_1c != 0)) {
    return;
  }
  pjlEV_CHANGE_STATE::pjlEV_CHANGE_STATE((pjlEV_CHANGE_STATE *)&local_18);
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    pjlMACE_SFX::UpdateSFX((pjlMACE_SFX *)(this + 0x153),(physPHYS *)this);
  }
  iVar1 = (**(code **)(*(int *)this + 0x90))();
  if (*(int *)(this + 0x178) != iVar1) {
    pjlEV_CHANGE_STATE::pjlEV_CHANGE_STATE((pjlEV_CHANGE_STATE *)&local_18);
    fStack_10 = (float)(**(code **)(*(int *)this + 0x90))();
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)&local_18,0x10000,0xfffffffd,
               0xfffffffd);
    *(float *)(this + 0x178) = fStack_10;
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),amStack_c);
  if ((*(uint *)(this + 0x1a0) & 0x100) == 0) {
    uVar5 = extraout_MM1;
    if ((*(uint *)(this + 0x1a0) & 0x200) == 0) goto LAB_00441e4b;
    pmVar9 = amStack_c;
    psVar2 = aiGladGetSound(0xd);
    gsSND_SYSTEM::Play(gsSysSound,psVar2,pmVar9);
    uVar3 = *(uint *)(this + 0x1a0) & 0xfffffdff;
    uVar5 = extraout_MM1_01;
  }
  else {
    pmVar9 = amStack_c;
    psVar2 = aiGladGetSound(0xd);
    gsSND_SYSTEM::Play(gsSysSound,psVar2,pmVar9);
    uVar3 = *(uint *)(this + 0x1a0) & 0xfffffeff;
    uVar5 = extraout_MM1_00;
  }
  *(uint *)(this + 0x1a0) = uVar3;
LAB_00441e4b:
  iVar1 = *(int *)(this + 0x14f);
  local_18 = *(float *)(iVar1 + 0x48);
  fStack_14 = *(float *)(iVar1 + 0x4c);
  fStack_10 = *(float *)(iVar1 + 0x50);
  fStack_20 = local_18 * local_18 + fStack_14 * fStack_14 + fStack_10 * fStack_10;
  if (m3dSimdType == 0) {
    fStack_20 = fStack_20 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fStack_20),ZEXT416((uint)fStack_20));
    fVar8 = auVar7._0_4_;
    fStack_20 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_20 * fVar8 * fVar8) *
                fStack_20;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fStack_20;
    uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    fStack_20 = (float)uVar5;
    FastExitMediaState();
  }
  else {
    fStack_20 = SQRT(fStack_20);
  }
  fStack_20 = (float)(uint)(ABS(fStack_20) < ___real_3e4ccccd);
  if ((float)(int)fStack_20 != ___real_00000000) {
    *(uint *)(this + 0x1a0) = *(uint *)(this + 0x1a0) | 1;
    iVar1 = *(int *)(this + 0x14f);
    *(undefined4 *)(iVar1 + 0x48) = _m3dVZero;
    *(undefined4 *)(iVar1 + 0x4c) = DAT_00963740;
    *(undefined4 *)(iVar1 + 0x50) = DAT_00963744;
    *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
    msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,5.0);
  }
  if (((byte)this[0x1a0] & 1) == 0) {
    m3dMATR::RotateX((m3dMATR *)(*(int *)(this + 0x19c) + 0x7c),
                     gsElapsedTime * *(float *)(this + 0x1bc) * *(float *)(this + 0x1b0),1);
    objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x19c));
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  }
  if (((((byte)this[0x88] & 4) != 0) && (((byte)this[0x1a0] & 1) == 0)) &&
     (fVar8 = entENTITY::GetDistToClosestPlayer
                        ((entENTITY *)this,1.5,(m3dV *)&local_18,(plgsACTION **)0x0),
     fVar8 < *(float *)(this + 0x1ac))) {
    GenerateCDTUponHittingPlayer(this);
    iVar1 = *(int *)(this + 0x14f);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x48) = _m3dVZero;
      *(undefined4 *)(iVar1 + 0x4c) = DAT_00963740;
      *(undefined4 *)(iVar1 + 0x50) = DAT_00963744;
    }
    objOBJ::SetStateProcYes
              (*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_knife.cpp
   addr: 00442080 */

void __thiscall pjlKNIFE::ProcessEV_CDT(pjlKNIFE *this,pjlEV_CDT *param_1)

{
  int iVar1;
  
  *(uint *)(this + 0x174) = *(uint *)(this + 0x174) | 1;
  if (*(int *)(gsSysMP + 0x28) != 4) {
    (**(code **)(*(int *)this + 0x84))(param_1);
  }
  if ((*(int *)(*(int *)(this + 0x14f) + 0x80) <= *(int *)(*(int *)(this + 0x14f) + 0xb0)) ||
     ((*(int *)(param_1 + 8) != 1 && (*(int *)(param_1 + 8) != 0)))) {
    pjlGEFEST_SFX::StopSFX((pjlGEFEST_SFX *)(this + 0x153),(physPHYS *)this);
    iVar1 = *(int *)(this + 0x14f);
    *(uint *)(this + 0x1a0) = *(uint *)(this + 0x1a0) | 1;
    *(undefined4 *)(iVar1 + 0x48) = _m3dVZero;
    *(undefined4 *)(iVar1 + 0x4c) = DAT_00963740;
    *(undefined4 *)(iVar1 + 0x50) = DAT_00963744;
    *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
    msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,0.1);
  }
  return;
}




/* from: ai_glad_knife.cpp
   addr: 00442140 */

void __thiscall pjlKNIFE::ShowCollisSFX(pjlKNIFE *this,pjlEV_CDT *param_1)

{
  if (*(int *)(param_1 + 8) == 1) {
    *(uint *)(this + 0x1a0) = *(uint *)(this + 0x1a0) | 0x100;
    return;
  }
  *(uint *)(this + 0x1a0) = *(uint *)(this + 0x1a0) | 0x200;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_knife.cpp
   addr: 00442170 */

void __thiscall aiGLAD_KNIFE::AimKnifeToPlayer(aiGLAD_KNIFE *this,m3dV *param_1,physINIT *param_2)

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
    iVar3 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,35.0,(m3dV *)&local_c);
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
      goto LAB_00442261;
    }
  }
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  in_MM2 = extraout_MM1;
LAB_00442261:
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
  fVar7 = (float)param_1 * ___real_3cea0ea1;
  local_20 = local_20 * ___real_420c0000;
  local_1c = local_1c * ___real_420c0000;
  fVar9 = *(float *)(pmVar2 + 4);
  *(float *)(param_2 + 4) = local_24 * ___real_420c0000;
  fVar1 = fVar7 * fVar7 * ___real_c0900000;
  *(float *)(param_2 + 8) = local_20;
  *(float *)(param_2 + 0xc) = local_1c;
  *(float *)(param_2 + 8) = ((local_8 - fVar9) - fVar1) / fVar7;
  *(float *)(param_2 + 0x10) = _m3dVUnitY * ___real_c1100000;
  *(float *)(param_2 + 0x14) = DAT_005f9994 * ___real_c1100000;
  *(float *)(param_2 + 0x18) = DAT_005f9998 * ___real_c1100000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_knife.cpp
   addr: 004423D0 */

void __thiscall aiGLAD_KNIFE::LaunchOneProjectile(aiGLAD_KNIFE *this)

{
  entENTITY *peVar1;
  int iVar2;
  objOBJ *poVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  bool bVar7;
  physINIT local_f8;
  undefined1 local_f7;
  undefined2 local_f6;
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
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  local_f4 = _m3dVZero;
  local_e8 = _m3dVZero;
  local_d8 = DAT_005d2fd0;
  local_f0 = DAT_00963740;
  local_e4 = DAT_00963740;
  local_f8 = (physINIT)0x0;
  local_f7 = 0x40;
  local_ec = DAT_00963744;
  local_e0 = DAT_00963744;
  local_dc = 0x3dcccccd;
  local_d4 = 1;
  local_d0 = 0;
  local_cc = 0;
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
  animCREATE_DATA::animCREATE_DATA(local_98);
  poVar3 = *(objOBJ **)(this + 0x55b);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(poVar3,local_a4);
  bVar7 = ((byte)this[0x53f] & 0x40) == 0;
  poVar3 = poVar3 + 0x3c;
  puVar5 = local_86;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *(undefined4 *)poVar3;
    poVar3 = poVar3 + 4;
    puVar5 = puVar5 + 1;
  }
  if (bVar7) {
    pcVar6 = s_pjl_gladM_knife;
  }
  else {
    pcVar6 = s_pjl_gladXL_knife;
  }
  uVar4 = (uint)bVar7;
  local_dc = (&DAT_005f07b0)[uVar4];
  local_b0 = *(undefined4 *)(this + 0x8c);
  local_d8 = 0x447a0000;
  local_d4 = 2;
  local_cc = 0x3f000000;
  local_d0 = 0x3f000000;
  local_a8 = 0;
  local_b4 = 3;
  local_bc = 0x3fc00000;
  local_c0 = 0x41200000;
  if (uVar4 != 0) {
    local_c0 = 0x41100000;
  }
  AimKnifeToPlayer(this,local_a4,&local_f8);
  peVar1 = entCreate(gsScenePtr,s_pjl_knife_glad,pcVar6,local_98,&local_f8,0);
  if (peVar1 != (entENTITY *)0x0) {
    *(uint *)(peVar1 + 0x1a8) = uVar4;
    *(float *)(peVar1 + 0x1ac) = (float)(&DAT_005f07b0)[uVar4] + ___real_3f000000;
    gsEffApplyLMChar(peVar1,(cdtINFO *)(this + 0x453),0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_knife.cpp
   addr: 00442580 */

void __thiscall aiGLAD_KNIFE::ProcessActionFrame(aiGLAD_KNIFE *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fStack_3c;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float afStack_28 [2];
  float fStack_20;
  dmgGENERAL local_1c [8];
  float fStack_14;
  float fStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  dmgGENERAL::dmgGENERAL(local_1c);
  uVar3 = -(uint)(((byte)this[0x53f] & 0x40) != 0) & 7;
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 1,0);
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 1,1);
  iVar2 = uVar3 + 3;
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),iVar2,0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x1c4))();
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),iVar2,1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x1c4))();
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffd;
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),iVar2,2);
  if (iVar2 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 2;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
    if ((0 < *(int *)(this + 0x547)) &&
       (iVar2 = *(int *)(this + 0x547) + -1, *(int *)(this + 0x547) = iVar2, iVar2 == 0)) {
      *(undefined4 *)(this + 0x543) = 0x40e00000;
    }
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 4,0);
  if ((iVar2 != 0) ||
     (iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 4,1), iVar2 != 0)) {
    m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x55b) + 0x3c),(m3dV *)&fStack_34);
    (**(code **)(*(int *)this + 0xe4))(afStack_28);
    fStack_3c = (afStack_28[0] - fStack_34) * (afStack_28[0] - fStack_34) +
                (fStack_20 - fStack_2c) * (fStack_20 - fStack_2c);
    if (m3dSimdType == 0) {
      fStack_3c = fStack_3c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar8 = rsqrtss(ZEXT416((uint)fStack_3c),ZEXT416((uint)fStack_3c));
      fVar7 = auVar8._0_4_;
      fStack_3c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                  (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_3c * fVar7 * fVar7) *
                  fStack_3c;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)fStack_3c;
      uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      fStack_3c = (float)uVar5;
      FastExitMediaState();
    }
    else {
      fStack_3c = SQRT(fStack_3c);
    }
    fVar7 = fStack_3c;
    fStack_4 = fStack_2c;
    fStack_c = fStack_34;
    uStack_8 = uStack_30;
    fStack_14 = ___real_41200000;
    if (((___real_3f800000 <= fStack_3c) &&
        (fStack_14 = ___real_00000000, fStack_3c <= ___real_3fa66666)) &&
       (fStack_3c = (float)(uint)(0.29999995 < _DAT_005d2fcc), fStack_14 = ___real_40a00000,
       (float)(int)fStack_3c == ___real_00000000)) {
      fStack_14 = ___real_41200000 - (fVar7 - ___real_3f800000) * ___real_42055557;
    }
    if ((___real_3dcccccd < fStack_14) && (*(msgADDR **)(this + 0x4c3) != (msgADDR *)0x0)) {
      msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x4c3),0x4c5,local_1c,(msgADDR *)this);
    }
    *(undefined4 *)(this + 0x543) = 0x40000000;
  }
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 5,0);
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 5,1);
  if ((iVar2 != 0) && (*(int *)(this + 0x54f) != 0)) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff7;
  }
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 6,0);
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 6,1);
  if ((iVar2 != 0) && (*(int *)(this + 0x54f) != 0)) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff7;
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 2,0);
  if (iVar2 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffdff;
  }
  aiGLAD_GENERIC::ProcessActionFrame((aiGLAD_GENERIC *)this);
  return;
}




/* from: ai_glad_knife.cpp
   addr: 00442900 */

int __thiscall
pjlPJL<struct_pjlSFX_TRAIL>::ProcessINIT(pjlPJL<struct_pjlSFX_TRAIL> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
  this[0x173] = *(pjlPJL<struct_pjlSFX_TRAIL> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pjlSFX_TRAIL::StartSFX((pjlSFX_TRAIL *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: ai_glad_knife.cpp
   addr: 004429B0
   addr: 004429B0
   addr: 004429B0
   addr: 004429B0 */

void __thiscall pjlPJL<struct_pjlGEFEST_SFX>::ProcessTERM(pjlPJL<struct_pjlGEFEST_SFX> *this)

{
  pjlGEFEST_SFX::StopSFX((pjlGEFEST_SFX *)(this + 0x153),(physPHYS *)this);
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* from: ai_glad_knife.cpp
   addr: 004429D0 */

void __thiscall pjlPJL<struct_pjlSFX_TRAIL>::ProcessFRAME(pjlPJL<struct_pjlSFX_TRAIL> *this)

{
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    pjlMACE_SFX::UpdateSFX((pjlMACE_SFX *)(this + 0x153),(physPHYS *)this);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_knife.cpp
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00
   addr: 00442A00 */

int __thiscall
pjlNPC_PJL<struct_pjlZEVS_SFX>::ProcessMsg
          (pjlNPC_PJL<struct_pjlZEVS_SFX> *this,int param_1,void *param_2,msgADDR *param_3,
          int *param_4)

{
  entIACTIVE_OBJ *peVar1;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  physPHYS::ProcessMsg((physPHYS *)this,param_1,param_2,param_3,param_4);
  if (param_1 == 0x4d1) {
    local_c = DAT_00963740;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = _m3dVZero;
    local_8 = DAT_00963744;
    local_4 = 0;
    local_20 = 2;
    if (*(int *)((int)param_2 + 4) == -1) {
      local_1c = 0;
    }
    else {
      peVar1 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)((int)param_2 + 4),0);
      if (peVar1 == (entIACTIVE_OBJ *)0x0) {
        return 0;
      }
      local_1c = *(int *)(peVar1 + 0xbc);
      if (local_1c == 0) {
        return 0;
      }
    }
    local_20 = *(undefined4 *)((int)param_2 + 8);
    local_18 = *(undefined4 *)((int)param_2 + 0xc);
    local_14 = *(undefined4 *)((int)param_2 + 0x10);
    local_10 = *(undefined4 *)((int)param_2 + 0x14);
    local_4 = *(undefined4 *)((int)param_2 + 0x20);
    local_c = *(undefined4 *)((int)param_2 + 0x18);
    local_8 = *(undefined4 *)((int)param_2 + 0x1c);
    *(undefined4 *)(*(int *)(this + 0x14f) + 0x80) = 1;
    *(int *)(*(int *)(this + 0x14f) + 0xb0) = *(int *)(*(int *)(this + 0x14f) + 0xb0) + 1;
    msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x3f9,&local_20,(msgADDR *)this);
  }
  return 0;
}

