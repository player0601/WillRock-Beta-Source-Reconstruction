
/* from: sfx_perseus.cpp
   addr: 00473A00 */

int __fastcall wrsfxPerseusInit(void)

{
  int iVar1;
  
  wrsfxPERSEUS::pTexLgtn = txmMANAGER::Add(txmManager,s_sfx_statue_lightning,0x40003,1);
  if (wrsfxPERSEUS::pTexLgtn == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxPERSEUS::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_statue_spark,0x40003,1);
  if (wrsfxPERSEUS::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_perseus,0x24534658,0x50,wrsfxPERSEUS::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(2,(sncSOUND_DESCR_3D *)&DAT_0060e870);
  if (iVar1 == 0) {
    apMsg(s_Cannot_link_sound_data);
    return 0;
  }
  return 1;
}




/* from: sfx_perseus.cpp
   addr: 00473A90 */

wrsfxPERSEUS_LIGHTNING * __thiscall
wrsfxPERSEUS_LIGHTNING::wrsfxPERSEUS_LIGHTNING(wrsfxPERSEUS_LIGHTNING *this)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,30.0,0.9);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.041666668,21.497496);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.625,30.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,1.4583334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,30.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.7,0.0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.6,0.3);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,2.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.785);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,2.5,0.0,(m3dSPL_LINEAR1D *)pmVar2,0.25);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.935,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.083333336,2.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.6666666,0.0);
  *(undefined4 *)(this + 0xb4) = 0x3f800000;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x40000000;
  *(undefined4 *)(this + 0xc4) = 0;
  *(m3dSPL **)(this + 200) = pmVar2;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,480.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxPERSEUS::pTexLgtn);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  return this;
}




/* from: sfx_perseus.cpp
   addr: 00473CF0 */

wrsfxPERSEUS_SPARKS * __thiscall wrsfxPERSEUS_SPARKS::wrsfxPERSEUS_SPARKS(wrsfxPERSEUS_SPARKS *this)

{
  m3dSPL *pmVar1;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x3d,700.0,0.56666666);
  *(undefined ***)this = &_vftable_;
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar1,0,8,1);
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.041666668,700.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,0.16666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar1);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.28333333,0.21666665);
  *(undefined4 *)(this + 0xe8) = 0x3f266666;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.3,0.1,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar1,0,8,1);
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,151.215);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.0,0.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100004;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc1a00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb0) = 0x3f800000;
  *(undefined4 *)(this + 0xb4) = 0x41400000;
  *(undefined4 *)(this + 0xb8) = 0x40c00000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x40666667;
  *(undefined4 *)(this + 0xc4) = 0x3fe66667;
  *(undefined4 *)(this + 200) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxPERSEUS::pTexSparks);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,2.0,0.0);
  return this;
}




/* from: sfx_perseus.cpp
   addr: 00473EA0 */

int __thiscall wrsfxPERSEUS::SetupAniSystem(wrsfxPERSEUS *this)

{
  animTPL *paVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  animSYSTEM *this_00;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_8;
  animSEQ *local_4;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  if (*(animSEQ **)(paVar1 + 0x90) == (animSEQ *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(paVar1 + 0x8c);
    local_4 = *(animSEQ **)(paVar1 + 0x90);
  }
  iVar6 = 3;
  *(undefined4 *)(paVar1 + 0x8c) = 3;
  puVar2 = (undefined4 *)operator_new(0x19c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = 3;
    puVar2 = puVar3;
    do {
      puVar7 = puVar2;
      for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar2[0x20] = 2;
      iVar6 = iVar6 + -1;
      puVar2 = puVar2 + 0x22;
    } while (iVar6 != 0);
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar3;
  _entAnimSetSeqName(paVar1,0,s_WR_SFX_PERSEUS_SEQ_UNUSED);
  _entAnimSetSeqName(paVar1,1,s_WR_SFX_PERSEUS_SEQ_EFFECT);
  _entAnimSetSeqName(paVar1,2,s_WR_SFX_PERSEUS_SEQ_SHOOT);
  entAnimAssignTplSeq(paVar1,local_4,local_8);
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x40) = 0;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x44) = 0x3f800000;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x50) = 0x43fa0000;
  *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x80) = 0;
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,3,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*piVar4 + 0x14))(1);
    (**(code **)(*piVar4 + 4))(1,2,0,2,0);
    (**(code **)(*piVar4 + 4))(2,2,1,1,0);
    iVar6 = 1;
    (**(code **)(*piVar4 + 4))(2,1,1,1,0);
    if (iVar6 != 0) {
      operator_delete((void *)(iVar6 + -4));
    }
    return 1;
  }
  return 0;
}




/* from: sfx_perseus.cpp
   addr: 00474030 */

void __thiscall wrsfxPERSEUS::Enable(wrsfxPERSEUS *this,int param_1)

{
  *(int *)(this + 0x16b) = param_1;
  if (param_1 != 0) {
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
    return;
  }
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
  partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x15f));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_perseus.cpp
   addr: 00474070 */

int __thiscall
wrsfxPERSEUS::ProcessMsg(wrsfxPERSEUS *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  m3dV *pmVar1;
  objOBJ *poVar2;
  wrsfxPERSEUS_LIGHTNING *this_00;
  partEMITTER_PHYS *ppVar3;
  int iVar4;
  wrsfxPERSEUS_SPARKS *this_01;
  objMOD_TEX_FRAME_ANIM *poVar5;
  entIACTIVE_OBJ *this_02;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_ECX_01;
  float extraout_ECX_02;
  float extraout_ECX_03;
  float extraout_ECX_04;
  float extraout_EDX;
  aiENEMY *this_03;
  ulonglong uVar6;
  undefined8 extraout_MM1;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_MM2;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined **local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  m3dV local_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [3];
  m3dV local_28 [12];
  msgDATA local_1c;
  undefined1 local_1b;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_5c = 0;
  local_64 = &cdtREFINE::_vftable_;
  local_60 = 2;
  if ((DAT_0060e95c & 1) == 0) {
    DAT_0060e95c = DAT_0060e95c | 1;
    DAT_0060e944 = 0;
    DAT_0060e945 = 0x40;
    _DAT_0060e948 = 0xffffffff;
    _DAT_0060e946 = 0xc;
    atexit((_func_4879 *)&__E30);
  }
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      if (*(int *)(this + 0x16b) != 0) {
        animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_70);
        animINST::GetDir(*(animINST **)(this + 0xbc),local_4c);
        if (((byte)this[0x88] & 4) != 0) {
          iVar4 = *(int *)(*(int *)(*(int *)(this + 0xbc) + 0xe8) + 0x20);
          *(undefined4 *)(this + 0x173) = 1;
          this_02 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(this + 0x183),0);
          if (this_02 == (entIACTIVE_OBJ *)0x0) {
            return 0;
          }
          if (iVar4 == 1) {
            iVar4 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,0);
            if (iVar4 != 0) {
              *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
            }
            iVar4 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,1);
            if (iVar4 != 0) {
              *(undefined4 *)(this_02 + 0x483) = 0;
              *(uint *)(this_02 + 0x44f) = *(uint *)(this_02 + 0x44f) | 0x10000;
              aiNPC::DecideEnemy((aiNPC *)this_02);
              this_03 = (aiENEMY *)(this_02 + 0x4bb);
              *(uint *)(this_02 + 0x44f) = *(uint *)(this_02 + 0x44f) & 0xfffeffff;
              aiENEMY::GetPos(this_03,(m3dV *)&local_7c);
              aiENEMY::GetDir(this_03,(m3dV *)local_34);
              local_58 = local_7c - local_70;
              local_54 = local_78 - local_6c;
              local_50 = local_74 - local_68;
              objOBJ::GetOrigin(*(objOBJ **)(this + 0x15b),local_28);
              local_3c = local_78 + ___real_3f800000;
              local_38 = local_74;
              local_40 = local_7c;
              iVar4 = aiENEMY::IsDead(this_03);
              if ((((iVar4 == 0) && ((local_6c - ___real_407a7efa) - ___real_3f800000 < local_78))
                  && (local_78 < ___real_41200000 + (local_6c - ___real_407a7efa))) &&
                 (fVar10 = m3xzAngleVector(local_4c,(m3dV *)&local_58),
                 ABS(fVar10) < ___real_42a00000)) {
                local_80 = (local_70 - local_7c) * (local_70 - local_7c) +
                           (local_68 - local_74) * (local_68 - local_74);
                if (m3dSimdType == 0) {
                  local_80 = local_80 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
                  auVar9 = rsqrtss(ZEXT416((uint)local_80),ZEXT416((uint)local_80));
                  fVar10 = auVar9._0_4_;
                  local_80 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                             (`float___cdecl_m3dSqrt(float)'::__l2::three -
                             local_80 * fVar10 * fVar10) * local_80;
                }
                else if (m3dSimdType == 1) {
                  FastExitMediaState();
                  uVar6 = (ulonglong)(uint)local_80;
                  uVar7 = PackedFloatingReciprocalSQRAprox(in_MM2,uVar6);
                  uVar8 = PackedFloatingMUL(uVar7,uVar7);
                  uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
                  uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
                  uVar7 = PackedFloatingMUL(uVar7,uVar6);
                  local_80 = (float)uVar7;
                  FastExitMediaState();
                }
                else {
                  local_80 = SQRT(local_80);
                }
                if ((local_80 < ___real_41c80000) &&
                   (iVar4 = scnSCENE::IsVisiblePoint
                                      (gsScenePtr,local_28,(m3dV *)&local_40,0,
                                       (cdtREFINE *)&local_64,(cdtINFO *)0x0), iVar4 != 0)) {
                  local_34[1] = 0.0;
                  *(float *)(this + 0x17b) = local_78;
                  *(float *)(this + 0x177) = local_34[0] + local_34[0] + local_7c;
                  *(float *)(this + 0x17f) = local_34[2] + local_34[2] + local_74;
                  fVar10 = m3dRandRange(extraout_ECX_03,local_78);
                  *(float *)(this + 0x177) = fVar10 + *(float *)(this + 0x177);
                  fVar10 = m3dRandRange(extraout_ECX_04,extraout_EDX);
                  *(undefined4 *)(this + 0x16f) = 1;
                  *(float *)(this + 0x17f) = fVar10 + *(float *)(this + 0x17f);
                }
              }
            }
            iVar4 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),1,2);
            if ((iVar4 != 0) && (*(int *)(this + 0x16f) != 0)) {
              *(undefined4 *)(this + 0x16f) = 0;
              *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 2;
              *(undefined4 *)(this + 0x173) = 2;
            }
          }
          else if ((iVar4 == 2) &&
                  (iVar4 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),2,0), iVar4 != 0)) {
            objOBJ::GetOrigin(*(objOBJ **)(this + 0x157),(m3dV *)(this + 0x177));
            dmgDispatchExplosDamage
                      ((entENTITY *)this_02,(m3dV *)(this + 0x177),7.0,3.0,3,-1,(cdtINFO *)0x0,
                       0xffffffff,(dmgDISPATCHER *)0x0);
            *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
          }
          local_10 = *(undefined4 *)(this + 0x173);
          local_c = *(undefined4 *)(this + 0x177);
          local_8 = *(undefined4 *)(this + 0x17b);
          local_14 = *(undefined4 *)(this + 0x14f);
          local_4 = *(undefined4 *)(this + 0x17f);
          local_1c = (msgDATA)0x0;
          local_1b = 0x40;
          local_18 = 0;
          local_1a = 0x1c;
          gsMP_SERVER::SendMsgClientAll
                    (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_1c,0x10000,0xffffffff,
                     0xfffffffd);
        }
        if (((byte)this[0x88] & 2) != 0) {
          if (((byte)this[0x14f] & 1) != 0) {
            ppVar3 = *(partEMITTER_PHYS **)(this + 0x15f);
            partEMITTER_PHYS::StopEmission(ppVar3);
            partEMITTER_PHYS::StartEmission(ppVar3);
            gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060e870,(m3dV *)&local_70);
          }
          if (((byte)this[0x14f] & 2) != 0) {
            pmVar1 = (m3dV *)(this + 0x177);
            objOBJ::SetMatrLT(*(objOBJ **)(this + 0x157),pmVar1,(m3dV *)0x0,(m3dV *)0x0,(m3dV *)0x0,
                              0);
            m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x15b) + 0x3c),(m3dV *)&local_7c);
            local_40 = *(float *)pmVar1 - local_7c;
            local_3c = *(float *)(this + 0x17b) - local_78;
            local_38 = *(float *)(this + 0x17f) - local_74;
            m3dNormalize((m3dV *)&local_40);
            objOBJ::SetMatrLT(*(objOBJ **)(this + 0x15b),(m3dV *)&local_7c,(m3dV *)0x0,(m3dV *)0x0,
                              (m3dV *)&local_40,0);
            local_80 = (local_7c - *(float *)pmVar1) * (local_7c - *(float *)pmVar1) +
                       (local_78 - *(float *)(this + 0x17b)) * (local_78 - *(float *)(this + 0x17b))
                       + (local_74 - *(float *)(this + 0x17f)) *
                         (local_74 - *(float *)(this + 0x17f));
            if (m3dSimdType == 0) {
              local_80 = local_80 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar9 = rsqrtss(ZEXT416((uint)local_80),ZEXT416((uint)local_80));
              fVar10 = auVar9._0_4_;
              local_80 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - local_80 * fVar10 * fVar10)
                         * local_80;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar6 = (ulonglong)(uint)local_80;
              uVar7 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar6);
              uVar8 = PackedFloatingMUL(uVar7,uVar7);
              uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
              uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
              uVar7 = PackedFloatingMUL(uVar7,uVar6);
              local_80 = (float)uVar7;
              FastExitMediaState();
            }
            else {
              local_80 = SQRT(local_80);
            }
            m3dMATR::Scale((m3dMATR *)(*(int *)(this + 0x15b) + 0x7c),1.0,1.0,
                           local_80 * ___real_3d924925,1);
            objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x15b));
            gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060e870,(m3dV *)&local_70);
          }
          if (((byte)this[0x14f] & 4) != 0) {
            partEMITTER_PHYS::SetPosDirSpeed
                      (*(partEMITTER_PHYS **)(this + 0x163),(m3dV *)(this + 0x177),(m3dV *)0x0,
                       (m3dV *)0x0);
            ppVar3 = *(partEMITTER_PHYS **)(this + 0x163);
            partEMITTER_PHYS::StopEmission(ppVar3);
            partEMITTER_PHYS::StartEmission(ppVar3);
            gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060e8d8,(m3dV *)(this + 0x177))
            ;
          }
          *(undefined4 *)(this + 0x14f) = 0;
        }
        animSYSTEM_INST::AdvanceAnimation
                  (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),
                   *(animINST **)(this + 0xbc),*(int *)(this + 0x173),gsElapsedTime);
        partSetAreaEmissionObj
                  (*(partEMITTER_PHYS **)(this + 0x15f),*(objOBJ **)(this + 0x153),-1,(m3dV *)0x0);
        return 0;
      }
    }
    else if (param_1 == 1) {
      poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_end_effect);
      *(objOBJ **)(this + 0x157) = poVar2;
      if (poVar2 != (objOBJ *)0x0) {
        poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_length_control);
        *(objOBJ **)(this + 0x15b) = poVar2;
        if (poVar2 != (objOBJ *)0x0) {
          poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
          *(objOBJ **)(this + 0x153) = poVar2;
          if (poVar2 != (objOBJ *)0x0) {
            objOBJ::SetStateProcYes(poVar2,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
            *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
            this_00 = (wrsfxPERSEUS_LIGHTNING *)operator_new(0x2c0);
            if (this_00 == (wrsfxPERSEUS_LIGHTNING *)0x0) {
              ppVar3 = (partEMITTER_PHYS *)0x0;
            }
            else {
              ppVar3 = (partEMITTER_PHYS *)wrsfxPERSEUS_LIGHTNING::wrsfxPERSEUS_LIGHTNING(this_00);
            }
            *(partEMITTER_PHYS **)(this + 0x15f) = ppVar3;
            if ((ppVar3 != (partEMITTER_PHYS *)0x0) &&
               (iVar4 = partSetAreaEmissionObj(ppVar3,*(objOBJ **)(this + 0x153),-1,(m3dV *)0x0),
               iVar4 != 0)) {
              partAttachInst(*(partEMITTER_PHYS **)(this + 0x15f),*(animINST **)(this + 0xbc));
              this_01 = (wrsfxPERSEUS_SPARKS *)operator_new(0x2c0);
              if (this_01 == (wrsfxPERSEUS_SPARKS *)0x0) {
                iVar4 = 0;
              }
              else {
                iVar4 = wrsfxPERSEUS_SPARKS::wrsfxPERSEUS_SPARKS(this_01);
              }
              *(int *)(this + 0x163) = iVar4;
              if (iVar4 != 0) {
                animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
                *(uint *)(*(int *)(this + 0xbc) + 4) =
                     *(uint *)(*(int *)(this + 0xbc) + 4) | 0x40000;
                poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_lightning_1__ds);
                if (poVar2 != (objOBJ *)0x0) {
                  poVar5 = (objMOD_TEX_FRAME_ANIM *)operator_new(0x4c);
                  if (poVar5 == (objMOD_TEX_FRAME_ANIM *)0x0) {
                    poVar5 = (objMOD_TEX_FRAME_ANIM *)0x0;
                    fVar10 = extraout_ECX;
                  }
                  else {
                    poVar5 = (objMOD_TEX_FRAME_ANIM *)
                             objMOD_TEX_FRAME_ANIM::objMOD_TEX_FRAME_ANIM(poVar5,0);
                    fVar10 = extraout_ECX_00;
                  }
                  iVar13 = 1;
                  fVar12 = -1.0;
                  fVar11 = -1.0;
                  iVar4 = -1;
                  fVar10 = m3dRandMax(fVar10);
                  objMOD_TEX_FRAME_ANIM::SetParams
                            (poVar5,4,1,0.15,fVar10,iVar4,fVar11,fVar12,iVar13);
                  (**(code **)(*(int *)poVar5 + 4))(poVar2);
                  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_lightning_2__ds)
                  ;
                  if (poVar2 != (objOBJ *)0x0) {
                    poVar5 = (objMOD_TEX_FRAME_ANIM *)operator_new(0x4c);
                    if (poVar5 == (objMOD_TEX_FRAME_ANIM *)0x0) {
                      poVar5 = (objMOD_TEX_FRAME_ANIM *)0x0;
                      fVar10 = extraout_ECX_01;
                    }
                    else {
                      poVar5 = (objMOD_TEX_FRAME_ANIM *)
                               objMOD_TEX_FRAME_ANIM::objMOD_TEX_FRAME_ANIM(poVar5,0);
                      fVar10 = extraout_ECX_02;
                    }
                    iVar13 = 1;
                    fVar12 = -1.0;
                    fVar11 = -1.0;
                    iVar4 = -1;
                    fVar10 = m3dRandMax(fVar10);
                    objMOD_TEX_FRAME_ANIM::SetParams
                              (poVar5,4,1,0.15,fVar10,iVar4,fVar11,fVar12,iVar13);
                    (**(code **)(*(int *)poVar5 + 4))(poVar2);
                    gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (param_1 == 2) {
      if (*(undefined4 **)(this + 0x15f) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x15f))(1);
      }
      *(undefined4 *)(this + 0x15f) = 0;
      if (*(undefined4 **)(this + 0x163) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x163))(1);
      }
      *(undefined4 *)(this + 0x163) = 0;
      return 0;
    }
  }
  else if (param_1 == 0x40c) {
    if (*(int *)((int)param_2 + 4) == -100) {
      iVar4 = *(int *)((int)param_2 + 8);
      *(undefined4 *)(this + 0x173) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(this + 0x183) = *(undefined4 *)(iVar4 + 8);
    }
    else if (*(int *)((int)param_2 + 4) == 0) {
      *(undefined4 *)(this + 0x173) = *(undefined4 *)((int)param_2 + 0xc);
      *(undefined4 *)(this + 0x177) = *(undefined4 *)((int)param_2 + 0x10);
      *(undefined4 *)(this + 0x17b) = *(undefined4 *)((int)param_2 + 0x14);
      *(undefined4 *)(this + 0x17f) = *(undefined4 *)((int)param_2 + 0x18);
      *(undefined4 *)(this + 0x14f) = *(undefined4 *)((int)param_2 + 8);
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_perseus.cpp
   addr: 00474A70 */

void __thiscall wrsfxPERSEUS::ProcessMP_GET_SYNC_DATA(wrsfxPERSEUS *this,void *param_1)

{
  undefined *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_0060e954 & 1) == 0) {
      DAT_0060e954 = DAT_0060e954 | 1;
      DAT_0060e860 = 0;
      DAT_0060e861 = 0x40;
      DAT_0060e864 = 0xffffffff;
      _DAT_0060e862 = 0xc;
      atexit((_func_4879 *)&__E32);
    }
    puVar1 = &DAT_0060e860;
    *(undefined1 **)param_1 = &DAT_0060e860;
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(*(int *)(*(int *)(this + 0xbc) + 0xe8) + 0x20);
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(this + 0x183);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: sfx_perseus.cpp
   addr: 00474B00 */

void __thiscall
wrsfxPERSEUS::ProcessMP_WRITE_SYNC_DATA(wrsfxPERSEUS *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined4 uVar2;
  gsMSG_MP_SAVELOAD *pgVar3;
  gsMSG_MP_SAVELOAD **ppgStack_28;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  
  pgVar3 = param_1;
  local_e = 0xffffffff;
  local_a = 0xffff;
  uStack_8 = 0xffff;
  local_6 = 0xffff;
  uStack_4 = 0xffff;
  iVar1 = *(int *)param_1;
  local_10 = 0;
  ppgStack_28 = (gsMSG_MP_SAVELOAD **)0x474b36;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
  param_1 = *(gsMSG_MP_SAVELOAD **)(iVar1 + 4);
  ppgStack_28 = &param_1;
  (**(code **)(**(int **)(pgVar3 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar3 + 4),(fioCHUNK *)&stack0xffffffe4);
  fioFILE::WriteChunk(*(fioFILE **)(pgVar3 + 4),0xf1,(fioCHUNK *)&stack0xffffffe4);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  uStack_8 = (undefined2)uVar2;
  local_6 = (undefined2)((uint)uVar2 >> 0x10);
  (**(code **)(**(int **)(pgVar3 + 4) + 0x18))(&uStack_8,4,1);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar3 + 4),(fioCHUNK *)&ppgStack_28);
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar3 + 4));
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)pgVar3);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_perseus.cpp
   addr: 00474BB0 */

void __thiscall
wrsfxPERSEUS::ProcessMP_READ_SYNC_DATA(wrsfxPERSEUS *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 local_14;
  short local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined4 local_6;
  
  puVar3 = *(undefined **)param_1;
  local_10 = 0;
  uStack_e = 0xffff;
  uStack_c = 0xffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  if (puVar3 == (undefined *)0x0) {
    if ((DAT_0060e954 & 1) == 0) {
      DAT_0060e954 = DAT_0060e954 | 1;
      DAT_0060e864 = 0xffffffff;
      _DAT_0060e860 = 0xc4000;
      atexit((_func_4879 *)&__E32);
    }
    puVar3 = &DAT_0060e860;
    *(undefined **)param_1 = &DAT_0060e860;
    _DAT_0060e860 = 0xc4000;
    DAT_0060e864 = 0xffffffff;
    DAT_0060e868 = local_14;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  do {
    if ((iVar1 == 0) || (local_10 == 1)) {
      rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
      return;
    }
    if (local_10 == 0xf0) {
      puVar2 = puVar3 + 4;
LAB_00474c7f:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2,4,4);
    }
    else if (local_10 == 0xf1) {
      puVar2 = puVar3 + 8;
      goto LAB_00474c7f;
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  } while( true );
}




/* from: sfx_perseus.cpp
   addr: 00474CB0 */

entENTITY * __fastcall wrsfxPERSEUS::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x187);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x173) = 0;
    *(undefined4 *)(this + 0x16b) = 1;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_perseus.cpp
   addr: 00474D20
   addr: 00474D20 */

void * __thiscall wrsfxPERSEUS::_scalar_deleting_destructor_(wrsfxPERSEUS *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

