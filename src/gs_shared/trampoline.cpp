
/* from: gs_shared:trampoline.cpp
   addr: 005433F0 */

int __fastcall trmpInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_trampoline,0x54524d50,0x28,trmpTRAMPOLINE::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:trampoline.cpp
   addr: 00543420 */

void __thiscall trmpTRAMPOLINE::ProcessINIT(trmpTRAMPOLINE *this)

{
  trmpTRAMPOLINE *ptVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  animINST *this_00;
  ulonglong uVar6;
  undefined8 extraout_MM1;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_50;
  float local_4c [2];
  float local_44;
  char local_40 [64];
  
  ptVar1 = this + 0x15f;
  *(float *)ptVar1 = 20.0;
  iVar4 = animINST::GetFloat(*(animINST **)(this + 0xbc),s_TRAMPOLINE,s_height,(float *)ptVar1);
  *(float *)(this + 0x173) = 0.0;
  animINST::GetFloat(*(animINST **)(this + 0xbc),s_TRAMPOLINE,s_randShift,(float *)(this + 0x173));
  *(undefined4 *)(this + 0x163) = 0;
  iVar5 = animINST::GetStr(*(animINST **)(this + 0xbc),s_TRAMPOLINE,s_target,local_40,0x40);
  if (iVar5 == 0) {
    *(float *)(this + 0x177) = 0.0;
    animINST::GetFloat(*(animINST **)(this + 0xbc),s_TRAMPOLINE,s_speedXZ,(float *)(this + 0x177));
  }
  else {
    this_00 = scnSCENE::FindInstName(gsScenePtr,local_40);
    if (this_00 != (animINST *)0x0) {
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)local_4c);
      animINST::GetPos(this_00,(m3dV *)(this + 0x167));
      fVar3 = ___real_41f00000;
      fVar2 = ___real_41700000;
      if (iVar4 == 0) {
        local_4c[0] = local_4c[0] - *(float *)(this + 0x167);
        local_50 = local_4c[0] * local_4c[0] +
                   (local_44 - *(float *)(this + 0x16f)) * (local_44 - *(float *)(this + 0x16f));
        if (m3dSimdType == 0) {
          local_50 = local_50 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar10 = rsqrtss(ZEXT416((uint)local_50),ZEXT416((uint)local_50));
          fVar9 = auVar10._0_4_;
          local_50 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_50 * fVar9 * fVar9) *
                     local_50;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar6 = (ulonglong)(uint)local_50;
          uVar7 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar6);
          uVar8 = PackedFloatingMUL(uVar7,uVar7);
          uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
          uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
          uVar7 = PackedFloatingMUL(uVar7,uVar6);
          local_50 = (float)uVar7;
          FastExitMediaState();
        }
        else {
          local_50 = SQRT(local_50);
        }
        if (local_50 < ___real_41a00000) {
          *(undefined4 *)(this + 0x163) = 1;
          *(float *)ptVar1 = fVar2;
          goto LAB_00543621;
        }
        if (___real_42700000 < local_50) {
          *(undefined4 *)(this + 0x163) = 1;
          *(float *)ptVar1 = fVar3;
          goto LAB_00543621;
        }
        *(float *)ptVar1 = (local_50 - ___real_41a00000) * ___real_3ec00000 + ___real_41700000;
      }
      *(undefined4 *)(this + 0x163) = 1;
    }
  }
LAB_00543621:
  scnSCENE::SetStateYesInst(gsScenePtr,*(animINST **)(this + 0xbc),8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:trampoline.cpp
   addr: 00543640 */

int __thiscall
trmpTRAMPOLINE::ProcessMsg
          (trmpTRAMPOLINE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  m3dV *pmVar6;
  cdtREFINE acStack_364 [12];
  undefined **local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined **local_34c;
  undefined4 local_348;
  m3dV amStack_338 [12];
  scnAOBJ asStack_32c [812];
  
  iVar4 = 0;
  local_354 = 0;
  local_350 = 0;
  local_358 = &cdtREFINE::_vftable_;
  local_348 = 1;
  local_34c = &m3dBOX::_vftable_;
  if (param_1 == 1) {
    (**(code **)(*(int *)this + 0x68))();
  }
  else if (param_1 == 1000) {
    if ((*(int *)(this + 0x30) < 1) && (((byte)(*(animINST **)(this + 0xbc))[4] & 3) == 0)) {
      if (*(float *)(this + 0x15b) <= ___real_40a00000) {
        *(float *)(this + 0x15b) = gsElapsedTime + *(float *)(this + 0x15b);
      }
      else {
        if (DAT_005f96e4 != 0) {
          animINST::Invalidate(*(animINST **)(this + 0xbc),1);
        }
        *(undefined4 *)(this + 0x15b) = 0;
      }
      iVar2 = (**(code **)(*(int *)plgsPlayer + 0xa0))(*(undefined4 *)(this + 0xbc),0,1);
      if ((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)plgsPlayer + 0x78))(), iVar2 == 0)) {
        pmVar6 = (m3dV *)&stack0xfffffc90;
        fVar5 = (float10)(**(code **)(*(int *)plgsPlayer + 0xa8))();
        GetSpeedThrow(this,(float)fVar5,pmVar6);
        (**(code **)(*(int *)plgsPlayer + 0xa4))(&stack0xfffffc90,1);
        animINST::GetPos(*(animINST **)(this + 0xbc),amStack_338);
        *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
      }
      if (((byte)this[0x88] & 4) != 0) {
        animINST::GetBBox(*(animINST **)(this + 0xbc),(m3dBOX *)&local_358);
        m3dBOX::Expand((m3dBOX *)&local_358,2.0);
        iVar2 = scnSCENE::MakeAnimList(gsScenePtr,(m3dBOX *)&local_358,acStack_364,asStack_32c,100);
        if (0 < iVar2) {
          do {
            piVar1 = *(int **)(*(int *)(asStack_32c + iVar4 * 8) + 0x13c);
            if (((piVar1[5] == 0x244e5043) &&
                (iVar3 = (**(code **)(*piVar1 + 0x174))(*(undefined4 *)(this + 0xbc)), iVar3 != 0))
               && ((*(uint *)((int)piVar1 + 1099) & 0x200000) == 0)) {
              pmVar6 = (m3dV *)&stack0xfffffc90;
              fVar5 = (float10)(**(code **)(*piVar1 + 0x164))();
              GetSpeedThrow(this,(float)fVar5,pmVar6);
              (**(code **)(*piVar1 + 0x168))(&stack0xfffffc90);
              *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar2);
          return 0;
        }
      }
    }
  }
  else if (param_1 == 0x3f4) {
    (**(code **)(*(int *)this + 0x44))(0,1,0);
    *(undefined4 *)(this + 0x15b) = 0;
    return 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:trampoline.cpp
   addr: 00543870 */

void __thiscall trmpTRAMPOLINE::GetSpeedThrow(trmpTRAMPOLINE *this,float param_1,m3dV *param_2)

{
  m3dV *pmVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  m3dV local_c [12];
  
  pmVar1 = param_2;
  m3dMakeVTangRandom(&m3dVUnitY,(m3dV *)&local_30);
  if (*(int *)(this + 0x163) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    fVar7 = m3dRandMax(*(float *)(this + 0x173));
    local_18 = local_30 * fVar7 + *(float *)(this + 0x167);
    local_14 = local_2c * fVar7 + *(float *)(this + 0x16b);
    local_10 = local_28 * fVar7 + *(float *)(this + 0x16f);
    cgmGetThrowSpeed_H(local_c,(m3dV *)&local_18,*(float *)(this + 0x15f),-param_1,param_2);
    return;
  }
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
  fVar7 = *(float *)(this + 0x177);
  *(float *)param_2 = local_24 * fVar7;
  *(float *)(param_2 + 4) = local_20 * fVar7;
  *(float *)(param_2 + 8) = local_1c * fVar7;
  fVar7 = param_1 * *(float *)(this + 0x15f) + param_1 * *(float *)(this + 0x15f);
  if (m3dSimdType == 0) {
    fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar5 = auVar6._0_4_;
    param_2 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar5 * fVar5) * fVar7
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar7;
    uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    param_2 = (m3dV *)uVar3;
    FastExitMediaState();
  }
  else {
    param_2 = (m3dV *)SQRT(fVar7);
  }
  *(m3dV **)(pmVar1 + 4) = param_2;
  if (___real_3dcccccd < ABS((float)param_2)) {
    fVar7 = *(float *)(this + 0x173) / ((float)param_2 / param_1 + (float)param_2 / param_1);
    *(float *)pmVar1 = local_30 * fVar7 + *(float *)pmVar1;
    *(float *)(pmVar1 + 4) = (float)param_2 + local_2c * fVar7;
    *(float *)(pmVar1 + 8) = local_28 * fVar7 + *(float *)(pmVar1 + 8);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:trampoline.cpp
   addr: 00543A80 */

entENTITY * __fastcall trmpTRAMPOLINE::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x17b);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = _m3dVUndef;
    *(undefined4 *)(this + 0x153) = DAT_0096374c;
    uVar1 = DAT_00963750;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x157) = uVar1;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: gs_shared:trampoline.cpp
   addr: 00543AD0
   addr: 00543AD0 */

void * __thiscall trmpTRAMPOLINE::_scalar_deleting_destructor_(trmpTRAMPOLINE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

