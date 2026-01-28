
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_vis.cpp
   addr: 004CF890 */

int __thiscall
scnSCENE::ShootRay(scnSCENE *this,m3dV *param_1,m3dV *param_2,float param_3,int param_4,
                  cdtREFINE *param_5,cdtINFO *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  cdtINFO *pcVar4;
  cdtINFO *pcVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = _m3dVZero;
  uVar3 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = DAT_00963740;
  local_8 = DAT_00963744;
  local_4 = 0;
  pcVar4 = param_6;
  if (param_6 == (cdtINFO *)0x0) {
    pcVar4 = (cdtINFO *)&local_20;
    param_4 = param_4 | 4;
  }
  pcVar5 = pcVar4;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar5 = 0;
    pcVar5 = pcVar5 + 4;
  }
  param_6 = (cdtINFO *)(uint)(ABS(param_3) < _DAT_005dbd58);
  if ((float)(int)param_6 != ___real_00000000) {
    return 0;
  }
  if ((((byte)param_5[4] & 1) == 0) &&
     (uVar3 = (**(code **)(**(int **)(this + 0x50) + 0x58))(param_1,param_2,param_3,param_4,pcVar4),
     uVar3 != 0)) {
    param_3 = *(float *)(pcVar4 + 0x1c);
  }
  if (((*(uint *)(param_5 + 4) & 2) == 0) || ((*(uint *)(param_5 + 4) & 8) == 0)) {
    uVar1 = ShootRayAnim(this,param_1,param_2,param_3,param_4,param_5,pcVar4);
    uVar3 = uVar3 | uVar1;
  }
  return (uint)(uVar3 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_vis.cpp
   addr: 004CF9C0 */

int __thiscall
scnSCENE::ShootRayAnim
          (scnSCENE *this,m3dV *param_1,m3dV *param_2,float param_3,int param_4,cdtREFINE *param_5,
          cdtINFO *param_6)

{
  abvBVOL *this_00;
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iStack_4ec;
  float fStack_4e8;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  scnAOBJ asStack_4b0 [4];
  int aiStack_4ac [299];
  
  local_4c0 = _m3dVZero;
  local_4b8 = DAT_00963744;
  iVar5 = 0;
  local_4d0 = 0;
  local_4cc = 0;
  local_4c8 = 0;
  local_4c4 = 0;
  local_4bc = DAT_00963740;
  local_4b4 = 0;
  if (param_3 < _DAT_005dbd58 * ___real_42c80000) {
    return 0;
  }
  if (param_6 == (cdtINFO *)0x0) {
    param_6 = (cdtINFO *)&local_4d0;
  }
  fStack_4dc = param_3 * *(float *)param_2 + *(float *)param_1;
  fStack_4d8 = param_3 * *(float *)(param_2 + 4) + *(float *)(param_1 + 4);
  fStack_4d4 = param_3 * *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
  iVar2 = MakeAnimList(this,param_1,(m3dV *)&fStack_4dc,0.0,param_5,asStack_4b0,0x96);
  iStack_4ec = 0;
  fStack_4e8 = param_3;
  if (0 < iVar2) {
    do {
      if (DAT_0093445c == 0) {
LAB_004cfadf:
        if (((param_4 & 0x20U) == 0) || (aiStack_4ac[iVar5 * 2] < 0)) {
LAB_004cfb54:
          iVar4 = IsectRayInst(this,(animINST *)aiStack_4ac[iVar5 * 2 + -1],param_1,param_2,
                               fStack_4e8,param_5,param_6);
          if (iVar4 == 0) {
            if (iStack_4ec == 0) goto LAB_004cfb99;
          }
          else {
            fStack_4e8 = *(float *)(param_6 + 0x1c);
            iStack_4ec = 1;
          }
        }
        else {
          bVar1 = *(byte *)(aiStack_4ac[iVar5 * 2 + -1] + 4);
          if ((char)param_4 < '\0') {
            bVar1 = bVar1 & 0x40;
          }
          else {
            bVar1 = bVar1 & 0x48;
          }
          if ((bVar1 != 0) ||
             (this_00 = (abvBVOL *)
                        (*(int *)(aiStack_4ac[iVar5 * 2 + -1] + 0xf8) +
                        aiStack_4ac[iVar5 * 2] * 0x24), this_00 == (abvBVOL *)0x0))
          goto LAB_004cfb54;
          iVar4 = abvBVOL::IsectRay(this_00,param_1,param_2,fStack_4e8,param_6);
          if ((iVar4 == 0) || (iVar4 == 2)) goto LAB_004cfb99;
          iVar4 = aiStack_4ac[iVar5 * 2];
          fStack_4e8 = *(float *)(param_6 + 0x1c);
          *(int *)(param_6 + 4) = aiStack_4ac[iVar5 * 2 + -1];
          *(int *)(param_6 + 8) = iVar4;
          iStack_4ec = 1;
          *(uint *)param_6 = *(uint *)param_6 & 0xfffffeff;
        }
        if ((param_4 & 4U) != 0) break;
      }
      else {
        pcVar3 = *(char **)(aiStack_4ac[iVar5 * 2 + -1] + 0x20);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = s_;
        }
        pcVar3 = strstr(pcVar3,s_lustra);
        if (pcVar3 == (char *)0x0) goto LAB_004cfadf;
      }
LAB_004cfb99:
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
    if (iStack_4ec != 0) {
      *(uint *)param_6 = *(uint *)param_6 | 2;
    }
  }
  return iStack_4ec;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_vis.cpp
   addr: 004CFBD0 */

int __thiscall
scnSCENE::IsectRayInst
          (scnSCENE *this,animINST *param_1,m3dV *param_2,m3dV *param_3,float param_4,
          cdtREFINE *param_5,cdtINFO *param_6)

{
  int iVar1;
  cdtINFO *pcVar2;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = DAT_00963744;
  local_10 = _m3dVZero;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = DAT_00963740;
  local_4 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = &cdtREFINE::_vftable_;
  if (param_6 == (cdtINFO *)0x0) {
    param_6 = (cdtINFO *)&local_20;
  }
  pcVar2 = param_6;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar2 = 0;
    pcVar2 = pcVar2 + 4;
  }
  if (param_5 == (cdtREFINE *)0x0) {
    param_5 = (cdtREFINE *)&local_2c;
  }
  iVar1 = IsectRayInst(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}




/* from: engine:scn_vis.cpp
   addr: 004CFC70 */

int __thiscall
scnSCENE::IsectRayInst
          (scnSCENE *this,animINST *param_1,m3dV *param_2,m3dV *param_3,float param_4,
          cdtREFINE *param_5,cdtINFO *param_6)

{
  objOBJ *poVar1;
  int iVar2;
  int iVar3;
  m3dSPHERE *pmVar4;
  uint uVar5;
  int iVar6;
  float local_84;
  int local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **local_68 [25];
  undefined4 uStack_4;
  
  cdtCOLL::cdtCOLL((cdtCOLL *)local_68);
  local_68[0] = &cdtCOLL_OBJ::_vftable_;
  animINST::LODSetTemp(param_1,5,0);
  animINST::Validate(param_1,0x209);
  local_84 = param_4;
  if ((*(cdtCOLL_INST **)(param_1 + 0x144) == (cdtCOLL_INST *)0x0) ||
     (iVar2 = cdtCOLL_INST::IsCDTFrame(*(cdtCOLL_INST **)(param_1 + 0x144)), iVar2 == 0)) {
    iVar2 = 0;
    iVar6 = 0;
    local_80 = 0;
    if (*(int *)(param_1 + 0x128) < 1) goto LAB_004cfe4b;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 300) + iVar6 * 4);
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x10) != 0)) &&
         (iVar3 = (**(code **)(*(int *)param_5 + 4))(iVar3), iVar3 != 0)) {
        poVar1 = *(objOBJ **)(*(int *)(param_1 + 300) + iVar6 * 4);
        iVar2 = *(int *)(poVar1 + 0x28);
        pmVar4 = animGetObjBSphere(poVar1);
        *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(pmVar4 + 4);
        *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(pmVar4 + 8);
        *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(pmVar4 + 0xc);
        *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(pmVar4 + 0x10);
        *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(pmVar4 + 0x14);
        uStack_4 = *(undefined4 *)(*(int *)(param_1 + 300) + iVar6 * 4);
        iVar3 = cdtCOLL_OBJ::ShootRay((cdtCOLL_OBJ *)local_68,param_2,param_3,local_84,0,param_6);
        iVar2 = local_80;
        if (iVar3 != 0) {
          uStack_6c = *(undefined4 *)(param_6 + 8);
          local_84 = *(float *)(param_6 + 0x1c);
          uStack_78 = *(undefined4 *)(param_6 + 0x10);
          local_80 = 1;
          uStack_74 = *(undefined4 *)(param_6 + 0x14);
          uStack_70 = *(undefined4 *)(param_6 + 0x18);
          iVar2 = 1;
          iStack_7c = iVar6;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x128));
    if (iVar2 == 0) goto LAB_004cfe4b;
    *(int *)(param_6 + 8) = iStack_7c;
    *(undefined4 *)(param_6 + 0xc) = uStack_6c;
    *(float *)(param_6 + 0x1c) = local_84;
    *(undefined4 *)(param_6 + 0x10) = uStack_78;
    *(undefined4 *)(param_6 + 0x14) = uStack_74;
    *(undefined4 *)(param_6 + 0x18) = uStack_70;
    uVar5 = *(uint *)param_6 | 0x102;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x144) + 0x58))(param_2,param_3,param_4,0,param_6);
    if (iVar2 == 0) goto LAB_004cfe4b;
    uVar5 = *(uint *)param_6 | 0x100;
  }
  *(animINST **)(param_6 + 4) = param_1;
  *(uint *)param_6 = uVar5;
LAB_004cfe4b:
  animINST::LODRestore(param_1);
  local_68[0] = &cdtCOLL_OBJ::_vftable_;
  cdtCOLL::~cdtCOLL((cdtCOLL *)local_68);
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_vis.cpp
   addr: 004CFE80 */

int __thiscall
scnSCENE::IsVisiblePoint
          (scnSCENE *this,m3dV *param_1,m3dV *param_2,int param_3,cdtREFINE *param_4,
          cdtINFO *param_5)

{
  int iVar1;
  cdtINFO *pcVar2;
  ulonglong uVar3;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
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
  pcVar2 = param_5;
  if (param_5 == (cdtINFO *)0x0) {
    pcVar2 = (cdtINFO *)&local_20;
  }
  DAT_0093445c = 1;
  local_2c = *(float *)param_2 - *(float *)param_1;
  local_28 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  local_24 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  fVar6 = (*(float *)param_1 - *(float *)param_2) * (*(float *)param_1 - *(float *)param_2) +
          (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) *
          (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) +
          (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) *
          (*(float *)(param_1 + 8) - *(float *)(param_2 + 8));
  if (m3dSimdType == 0) {
    fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    param_5 = (cdtINFO *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)fVar6;
    uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
    uVar5 = PackedFloatingMUL(uVar4,uVar4);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
    uVar4 = PackedFloatingMUL(uVar4,uVar3);
    param_5 = (cdtINFO *)uVar4;
    FastExitMediaState();
  }
  else {
    param_5 = (cdtINFO *)SQRT(fVar6);
  }
  if (___real_3a83126f <= (float)param_5) {
    m3dNormalize((m3dV *)&local_2c);
    iVar1 = ShootRay(this,param_1,(m3dV *)&local_2c,(float)param_5,param_3,param_4,pcVar2);
    if (iVar1 != 0) {
      DAT_0093445c = 0;
      fVar6 = (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) *
              (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) +
              (*(float *)param_1 - *(float *)param_2) * (*(float *)param_1 - *(float *)param_2) +
              (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) *
              (*(float *)(param_1 + 4) - *(float *)(param_2 + 4));
      if (m3dSimdType == 0) {
        fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar7 = auVar8._0_4_;
        param_5 = (cdtINFO *)
                  (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6);
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar3 = (ulonglong)(uint)fVar6;
        uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
        uVar5 = PackedFloatingMUL(uVar4,uVar4);
        uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
        uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
        uVar4 = PackedFloatingMUL(uVar4,uVar3);
        param_5 = (cdtINFO *)uVar4;
        FastExitMediaState();
      }
      else {
        param_5 = (cdtINFO *)SQRT(fVar6);
      }
      if (*(float *)(pcVar2 + 0x1c) < (float)param_5) {
        return 0;
      }
    }
  }
  DAT_0093445c = 0;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_vis.cpp
   addr: 004D00E0 */

int __thiscall
scnSCENE::IsVisiblePointCone
          (scnSCENE *this,m3dV *param_1,m3dV *param_2,float param_3,float param_4,float param_5,
          m3dV *param_6,int param_7,cdtREFINE *param_8,cdtINFO *param_9)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = m3dIsBelongPointCone(param_6,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  local_10 = _m3dVZero;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = DAT_00963740;
  local_8 = DAT_00963744;
  local_4 = 0;
  if (param_9 == (cdtINFO *)0x0) {
    param_9 = (cdtINFO *)&local_20;
  }
  DAT_0093445c = 1;
  local_2c = *(float *)param_6 - *(float *)param_1;
  local_28 = *(float *)(param_6 + 4) - *(float *)(param_1 + 4);
  local_24 = *(float *)(param_6 + 8) - *(float *)(param_1 + 8);
  fVar5 = (*(float *)param_1 - *(float *)param_6) * (*(float *)param_1 - *(float *)param_6) +
          (*(float *)(param_1 + 4) - *(float *)(param_6 + 4)) *
          (*(float *)(param_1 + 4) - *(float *)(param_6 + 4)) +
          (*(float *)(param_1 + 8) - *(float *)(param_6 + 8)) *
          (*(float *)(param_1 + 8) - *(float *)(param_6 + 8));
  if (m3dSimdType == 0) {
    fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    param_5 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar5;
    uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    param_5 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    param_5 = SQRT(fVar5);
  }
  if (___real_3a83126f <= param_5) {
    m3dNormalize((m3dV *)&local_2c);
    iVar1 = ShootRay(this,param_1,(m3dV *)&local_2c,param_5,param_7,param_8,param_9);
    if (iVar1 != 0) {
      DAT_0093445c = 0;
      fVar5 = (*(float *)(param_1 + 8) - *(float *)(param_6 + 8)) *
              (*(float *)(param_1 + 8) - *(float *)(param_6 + 8)) +
              (*(float *)param_1 - *(float *)param_6) * (*(float *)param_1 - *(float *)param_6) +
              (*(float *)(param_1 + 4) - *(float *)(param_6 + 4)) *
              (*(float *)(param_1 + 4) - *(float *)(param_6 + 4));
      if (m3dSimdType == 0) {
        fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        param_5 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                  (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar2 = (ulonglong)(uint)fVar5;
        uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1_00,uVar2);
        uVar4 = PackedFloatingMUL(uVar3,uVar3);
        uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
        uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
        uVar3 = PackedFloatingMUL(uVar3,uVar2);
        param_5 = (float)uVar3;
        FastExitMediaState();
      }
      else {
        param_5 = SQRT(fVar5);
      }
      if (*(float *)(param_9 + 0x1c) < param_5) {
        return 0;
      }
    }
  }
  DAT_0093445c = 0;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_vis.cpp
   addr: 004D0370 */

int __thiscall
scnSCENE::FloorPlace
          (scnSCENE *this,m3dV *param_1,float param_2,m3dV *param_3,float param_4,float param_5,
          int param_6,cdtREFINE *param_7,cdtINFO *param_8)

{
  float fVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  m3dV local_2c [12];
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
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_8 = DAT_00963744;
  local_4 = 0;
  if (param_3 == (m3dV *)0x0) {
    param_3 = local_2c;
  }
  if (param_8 == (cdtINFO *)0x0) {
    param_8 = (cdtINFO *)&local_20;
  }
  *(undefined4 *)param_3 = *(undefined4 *)param_1;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
  if (___real_461c4000 < param_2) {
    param_2 = 10000.0;
  }
  local_38 = *(undefined4 *)param_1;
  local_30 = *(undefined4 *)(param_1 + 8);
  local_34 = param_4 + *(float *)(param_1 + 4);
  local_3c = 0;
  local_44 = 0;
  local_40 = 0xbf800000;
  iVar2 = ShootRay(this,(m3dV *)&local_38,(m3dV *)&local_44,param_2,param_6,param_7,param_8);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(float *)(param_8 + 0x1c) <= param_4) {
    fVar1 = *(float *)(param_3 + 4);
  }
  else {
    fVar1 = *(float *)(param_1 + 4);
  }
  *(float *)(param_8 + 0x1c) = fVar1 - *(float *)(param_8 + 0x14);
  *(float *)(param_3 + 4) = param_5 + *(float *)(param_8 + 0x14);
  return 1;
}

