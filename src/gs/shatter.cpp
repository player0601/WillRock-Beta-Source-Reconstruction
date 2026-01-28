
/* WARNING: Function: chkstk replaced with injection: alloca_probe */
/* from: gs:shatter.cpp
   addr: 0050A820 */

void __fastcall shtShatter(objOBJ *param_1,int param_2)

{
  dsDYN_ARRAY *this;
  undefined1 *puVar1;
  int iVar2;
  undefined **local_590c;
  undefined **local_5908 [625];
  dsDYN_ARRAY local_4f44 [19228];
  undefined1 local_428 [1060];
  undefined4 uStack_4;
  
  uStack_4 = 0x50a82a;
  cgmWED_SYS::cgmWED_SYS((cgmWED_SYS *)local_5908);
  local_5908[0] = &cgmWED_3D::_vftable_;
  this = local_4f44;
  iVar2 = 100;
  do {
    dsDYN_ARRAY::dsDYN_ARRAY(this + -0x1c);
    dsDYN_ARRAY::dsDYN_ARRAY(this);
    _vector_constructor_iterator_(this + 0x1c,0x1c,3,dsDYN_ARRAY::dsDYN_ARRAY);
    dsDYN_ARRAY::dsDYN_ARRAY(this + 0x70);
    this = this + 0xc0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_590c = &shtSHATTER::_vftable_;
  if (DAT_005f7828 != 0) {
    entRegisterClass(s_sht_vis,0x2444594e,0x32,shtVIS::Create,(char *)0x0,1);
    DAT_005f7828 = 0;
  }
  if (*(animINST **)(param_1 + 0xbc) == (animINST *)0x0) {
    iVar2 = 100;
    puVar1 = local_428;
    do {
      dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(puVar1 + -0x6c));
      _vector_destructor_iterator_(puVar1 + -0xc0,0x1c,3,dsDYN_ARRAY::~dsDYN_ARRAY);
      dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(puVar1 + -0xdc));
      dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(puVar1 + -0xf8));
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -0xc0;
    } while (iVar2 != 0);
    return;
  }
  animINST::Validate(*(animINST **)(param_1 + 0xbc),0x206);
  objOBJ::Detach(param_1);
  shtSHATTER::Start((shtSHATTER *)&local_590c,param_1,param_2);
  shtSHATTER::ProcessShards((shtSHATTER *)&local_590c);
  iVar2 = 100;
  puVar1 = local_428;
  do {
    dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(puVar1 + -0x6c));
    _vector_destructor_iterator_(puVar1 + -0xc0,0x1c,3,dsDYN_ARRAY::~dsDYN_ARRAY);
    dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(puVar1 + -0xdc));
    dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(puVar1 + -0xf8));
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -0xc0;
  } while (iVar2 != 0);
  return;
}




/* from: gs:shatter.cpp
   addr: 0050A980 */

void __thiscall shtSHATTER::Start(shtSHATTER *this,objOBJ *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  objOBJ *this_00;
  int iVar3;
  shtSHATTER *psVar4;
  float fVar5;
  shtSHATTER *local_4;
  
  local_4 = this;
  iVar2 = _apCfgReadBool((void **)&DAT_00951cf0,s_Video,s_VIDEO_LowShatterQual,(int *)&local_4);
  if (((iVar2 != 0) && (local_4 != (shtSHATTER *)0x0)) && (4 < param_2)) {
    ftol();
  }
  if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),0x204);
    if ((*(uint *)(param_1 + 8) & 4) != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffb;
    }
    animINST::Validate(*(animINST **)(param_1 + 0xbc),2);
  }
  *(undefined4 *)(this + 0x9a4) = 0;
  *(objOBJ **)(this + 0x44) = param_1;
  iVar2 = *(int *)(this + 0x9a4);
  fVar5 = m3dBOX::GetArea((m3dBOX *)(*(int *)(this + iVar2 * 8 + 0x44) + 0xc0));
  *(float *)(this + iVar2 * 8 + 0x48) = fVar5;
  *(int *)(this + 0x9a4) = *(int *)(this + 0x9a4) + 1;
  (**(code **)(*(int *)(param_1 + 0xc0) + 0x24))(this + 0x58e0);
  if (param_1 != (objOBJ *)0x1) {
    objOBJ::FreeSplitUnshared(param_1);
    objOBJ::UnshareAll(param_1);
    objOBJ::Weld(param_1,(objWELD_PARAM *)0x0);
    if (*(int *)(*(int *)(param_1 + 0x28) + 0x48) == 0) {
      *(undefined4 *)(this + 0x58ec) = 0;
    }
    else {
      *(undefined4 *)(this + 0x58ec) = 1;
      objOBJ::FreeVertNormalList(param_1);
    }
    objOBJ::FreeNormalList(param_1);
    objOBJ::FreeNormalListLCS(param_1);
    objOBJ::FreeVertNormalListLCS(param_1);
    iVar2 = *(int *)(this + 0x9a4);
    while (iVar2 < (int)param_1) {
      this_00 = SelectShardToSplit(this);
      if (this_00 == (objOBJ *)0x0) {
        iVar2 = 0;
      }
      else {
        *(objOBJ **)(this + 0x5908) = this_00;
        iVar2 = Split(this);
        if (iVar2 != 0) {
          (**(code **)(*(int *)gsSysLevel + 0x30))(this_00);
          objOBJ::~objOBJ(this_00);
          operator_delete(this_00);
        }
      }
      StoreShards(this);
      if (iVar2 == 0) break;
      iVar2 = *(int *)(this + 0x9a4);
    }
    iVar2 = 0;
    if (0 < *(int *)(this + 0x9a4)) {
      psVar4 = this + 0x44;
      do {
        iVar3 = objOBJ::AllocNormalList(*(objOBJ **)psVar4,*(int *)(*(objOBJ **)psVar4 + 0x10));
        if (iVar3 != 0) {
          objOBJ::CalcFaceNormals(*(objOBJ **)psVar4);
          objOBJ::FreeStateFaceList(*(objOBJ **)psVar4);
          objOBJ::FreeStateVertList(*(objOBJ **)psVar4);
          iVar3 = *(int *)(*(int *)psVar4 + 0x28);
          *(undefined4 *)(iVar3 + 0x66) = 0;
          *(undefined4 *)(iVar3 + 0x6a) = 0;
          *(undefined2 *)(iVar3 + 0x6e) = 0;
          *(undefined4 *)(iVar3 + 0x70) = 0;
          *(undefined2 *)(iVar3 + 0x74) = 0;
          *(undefined2 *)(iVar3 + 0x76) = 0xffff;
          *(undefined2 *)(*(int *)(*(int *)psVar4 + 0x28) + 0x78) = 0;
          *(undefined4 *)(*(int *)(*(int *)psVar4 + 0x28) + 0x7a) = 0;
          puVar1 = (uint *)(*(int *)(*(int *)psVar4 + 0x28) + 0x66);
          *puVar1 = *puVar1 | 0x10;
        }
        if (*(int *)(this + 0x58ec) != 0) {
          objOBJ::CalcVertNormals(*(objOBJ **)psVar4);
        }
        iVar2 = iVar2 + 1;
        psVar4 = psVar4 + 8;
      } while (iVar2 < *(int *)(this + 0x9a4));
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:shatter.cpp
   addr: 0050ABA0 */

objOBJ * __thiscall shtSHATTER::SelectShardToSplit(shtSHATTER *this)

{
  float fVar1;
  objOBJ *poVar2;
  uint uVar3;
  int iVar4;
  shtSHATTER *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  shtSHATTER *psVar9;
  
  iVar4 = *(int *)(this + 0x9a4);
  if (iVar4 == 0) {
    return (objOBJ *)0x0;
  }
  fVar1 = -_DAT_005dcabc;
  if (0 < iVar4) {
    psVar5 = this + 0x48;
    iVar7 = iVar4;
    do {
      if (fVar1 < *(float *)psVar5) {
        fVar1 = *(float *)psVar5;
      }
      psVar5 = psVar5 + 8;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = -1;
  iVar8 = 0;
  iVar6 = 30000;
  if (0 < iVar4) {
    psVar5 = this + 0x44;
    do {
      if ((fVar1 * ___real_3f19999a < *(float *)(psVar5 + 4) !=
           (fVar1 * ___real_3f19999a == *(float *)(psVar5 + 4))) &&
         (*(int *)(*(int *)psVar5 + 0x10) < iVar6)) {
        iVar7 = iVar8;
        iVar6 = *(int *)(*(int *)psVar5 + 0x10);
      }
      iVar8 = iVar8 + 1;
      psVar5 = psVar5 + 8;
    } while (iVar8 < iVar4);
    if ((-1 < iVar7) && (iVar7 < iVar4)) goto LAB_0050ac1e;
  }
  iVar7 = 0;
LAB_0050ac1e:
  poVar2 = *(objOBJ **)(this + iVar7 * 8 + 0x44);
  if (iVar7 < iVar4 + -1) {
    psVar5 = this + iVar7 * 8 + 0x4c;
    psVar9 = this + iVar7 * 8 + 0x44;
    for (uVar3 = (iVar4 - iVar7) * 8 - 8U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)psVar9 = *(undefined4 *)psVar5;
      psVar5 = psVar5 + 4;
      psVar9 = psVar9 + 4;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *psVar9 = *psVar5;
      psVar5 = psVar5 + 1;
      psVar9 = psVar9 + 1;
    }
  }
  *(int *)(this + 0x9a4) = *(int *)(this + 0x9a4) + -1;
  return poVar2;
}




/* from: gs:shatter.cpp
   addr: 0050AC60 */

void __thiscall shtSHATTER::StoreShards(shtSHATTER *this)

{
  objOBJ *this_00;
  int iVar1;
  shtSHATTER *psVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  int local_4;
  
  local_4 = 0;
  if (*(int *)(this + 0x54a8) < 1) {
    *(undefined4 *)(this + 0x54a8) = 0;
    return;
  }
  psVar2 = this + 0x9a8;
  do {
    *(undefined4 *)(this + *(int *)(this + 0x9a4) * 8 + 0x44) = *(undefined4 *)psVar2;
    if (*(int *)(this + *(int *)(this + 0x9a4) * 8 + 0x44) == 0) {
LAB_0050acf2:
      this_00 = *(objOBJ **)(this + *(int *)(this + 0x9a4) * 8 + 0x44);
      if (this_00 != (objOBJ *)0x0) {
        objOBJ::~objOBJ(this_00);
        operator_delete(this_00);
      }
    }
    else {
      iVar1 = (**(code **)(*(int *)this + 4))(*(int *)(this + *(int *)(this + 0x9a4) * 8 + 0x44));
      if (iVar1 != 0) goto LAB_0050acf2;
      objCalcBBox(*(objOBJ **)(this + *(int *)(this + 0x9a4) * 8 + 0x44));
      puVar3 = (undefined4 *)(*(int *)(this + *(int *)(this + 0x9a4) * 8 + 0x44) + 0x7c);
      puVar4 = (undefined4 *)(*(int *)(this + *(int *)(this + 0x9a4) * 8 + 0x44) + 0x3c);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      iVar1 = *(int *)(this + 0x9a4);
      fVar5 = m3dBOX::GetArea((m3dBOX *)(*(int *)(this + iVar1 * 8 + 0x44) + 0xc0));
      *(float *)(this + iVar1 * 8 + 0x48) = fVar5;
      *(int *)(this + 0x9a4) = *(int *)(this + 0x9a4) + 1;
    }
    local_4 = local_4 + 1;
    psVar2 = psVar2 + 0xc0;
    if (*(int *)(this + 0x54a8) <= local_4) {
      *(undefined4 *)(this + 0x54a8) = 0;
      return;
    }
  } while( true );
}




/* from: gs:shatter.cpp
   addr: 0050AD50 */

void __thiscall shtSHATTER::ProcessShards(shtSHATTER *this)

{
  animINST *this_00;
  float extraout_ECX;
  float extraout_EDX;
  int iVar1;
  float fVar2;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x9a4)) {
    do {
      this_00 = scnSCENE::CreateInst
                          (gsScenePtr,*(objOBJ **)(this + iVar1 * 8 + 0x44),(animCREATE_DATA *)0x0);
      animINST::Invalidate(this_00,4);
      animINST::Validate(this_00,4);
      *(uint *)(this_00 + 4) = *(uint *)(this_00 + 4) | 0x10;
      entCreate(s_dynamic,this_00,(void *)0x0,0);
      animINST::Validate(this_00,2);
      (**(code **)(*(int *)(*(int *)(this_00 + 0x10) + 0xc0) + 0x24))(&local_c);
      fStack_18 = local_c - *(float *)(this + 0x58e0);
      fStack_14 = fStack_8 - *(float *)(this + 0x58e4);
      fStack_10 = fStack_4 - *(float *)(this + 0x58e8);
      fVar2 = m3dRandRange(extraout_ECX,extraout_EDX);
      fStack_18 = fStack_18 * fVar2;
      fStack_14 = fStack_14 * fVar2;
      fStack_10 = fStack_10 * fVar2;
      animINST::Translate(this_00,(m3dV *)&fStack_18,2);
      if (iVar1 == -1) {
        msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this_00 + 0x13c),2,(msgADDR *)0x0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x9a4));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:shatter.cpp
   addr: 0050AE80 */

void __thiscall shtSHATTER::SelectPlane(shtSHATTER *this)

{
  int iVar1;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = &m3dBOX::_vftable_;
  iVar1 = *(int *)(this + 0x5908);
  local_1c = *(undefined4 *)(iVar1 + 0xc4);
  local_18 = *(undefined4 *)(iVar1 + 200);
  local_14 = *(undefined4 *)(iVar1 + 0xcc);
  local_10 = *(undefined4 *)(iVar1 + 0xd0);
  local_c = *(undefined4 *)(iVar1 + 0xd4);
  local_8 = *(undefined4 *)(iVar1 + 0xd8);
  local_4 = *(undefined4 *)(iVar1 + 0xdc);
  m3dBOX::GetCenter((m3dBOX *)&local_20,(m3dV *)(this + 0x58f0));
  *(undefined4 *)(this + 0x58fc) = _m3dVUnitY;
  *(undefined4 *)(this + 0x5900) = DAT_005f9994;
  *(undefined4 *)(this + 0x5904) = DAT_005f9998;
  m3dMakeVUnitRandom((m3dV *)(this + 0x58fc));
  return;
}




/* from: gs:shatter.cpp
   addr: 0050AF10 */

int __thiscall shtSHATTER::Split(shtSHATTER *this)

{
  ushort uVar1;
  cgmWED_NODE *this_00;
  cgmWED_NODE *pcVar2;
  objOBJ *poVar3;
  int *piVar4;
  int iVar5;
  m3dV *pmVar6;
  cgmWED_EDGE *pcVar7;
  objMTL *poVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  cgmWED_NODE *pcVar12;
  shtSHATTER *psVar13;
  int iVar14;
  shtSHATTER *psVar15;
  undefined ***pppuVar16;
  undefined4 *puVar17;
  shtSHATTER *psVar18;
  int iVar19;
  shtSHATTER *psVar20;
  int iVar21;
  int iStack_84;
  int iStack_80;
  shtSHATTER *psStack_78;
  shtSHATTER *local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined *puStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  cgmQUERY acStack_24 [4];
  undefined **local_20 [6];
  shtSHATTER *psStack_8;
  
  local_20[0] = &shtQUALIFY_PLANE::_vftable_;
  *(undefined4 *)(this + 0x54a8) = 0;
  local_74 = this;
  iVar5 = (**(code **)(*(int *)(this + 4) + 0x24))(*(undefined4 *)(this + 0x5908));
  if (iVar5 == 0) {
    return 0;
  }
  objOBJ::TransformPoints(*(objOBJ **)(this + 0x5908),(m3dMATR *)0x0,(m3dV *)0x0);
  pmVar6 = objOBJ::GetTransformedVertList();
  objOBJ::GetTransformedVertNmb();
  if ((**(byte **)(this + 0x5908) & 1) == 0) {
    m3dMATR::Invert((m3dMATR *)(*(byte **)(this + 0x5908) + 0x3c),(m3dMATR *)(this + 0x58a0));
  }
  else {
    m3dMATR::Identity((m3dMATR *)(this + 0x58a0));
  }
  *(m3dV **)(this + 0x40) = pmVar6;
  iStack_84 = 0;
  do {
    (**(code **)(*(int *)this + 8))();
    psVar18 = this + 0x58f0;
    pppuVar16 = local_20;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pppuVar16 = *(undefined ***)psVar18;
      psVar18 = psVar18 + 4;
      pppuVar16 = pppuVar16 + 1;
    }
    psStack_8 = this;
    iVar5 = cgmWED_SYS::DepthFirstSearch((cgmWED_SYS *)(this + 4),acStack_24);
  } while ((iVar5 < 2) && (iStack_84 = iStack_84 + 1, iStack_84 < 10));
  if (iStack_84 != 10) {
    *(int *)(this + 0x54a8) = iVar5;
    *(undefined4 *)(this + 0x5894) = 0;
    *(undefined **)(this + 0x5898) = &DAT_00951cf8;
    *(undefined4 **)(this + 0x589c) = &DAT_0094de70;
    uVar11 = *(int *)(*(int *)(this + 0x5908) + 0x10) * 2;
    iStack_80 = 0;
    puVar17 = &DAT_0094de70;
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar17 = 0xffffffff;
      puVar17 = puVar17 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar17 = 0xff;
      puVar17 = (undefined4 *)((int)puVar17 + 1);
    }
    if (0 < *(int *)(this + 0x18)) {
      iVar5 = 0;
      do {
        iVar14 = *(int *)(this + 0x1c) + iVar5;
        iVar21 = **(int **)(iVar14 + 0xc);
        iVar19 = (*(int **)(iVar14 + 0xc))[1];
        this_00 = *(cgmWED_NODE **)(iVar21 + 8);
        pcVar12 = *(cgmWED_NODE **)(iVar19 + 8);
        pcVar2 = *(cgmWED_NODE **)(iVar21 + 0xc);
        if ((this_00 == pcVar12) || (pcVar2 == pcVar12)) {
          pcVar12 = *(cgmWED_NODE **)(iVar19 + 0xc);
        }
        iVar19 = *(int *)(this_00 + 0x20);
        if (iVar19 == *(int *)(pcVar2 + 0x20)) {
          if (iVar19 == *(int *)(pcVar12 + 0x20)) {
            *(short *)(*(int *)(this + 0x589c) + iStack_80 * 2) = (short)iVar19;
          }
          else {
            iVar21 = FindBelt(this,this_00,pcVar12);
            *(undefined4 *)
             (*(int *)(this + iVar21 * 0x14 + 0x54b8) + *(int *)(this + iVar21 * 0x14 + 0x54b4) * 4)
                 = *(undefined4 *)(iVar14 + 4);
            *(int *)(this + iVar21 * 0x14 + 0x54b4) = *(int *)(this + iVar21 * 0x14 + 0x54b4) + 1;
            pcVar7 = cgmWED_NODE::IsIncidentNode(this_00,pcVar12);
            *(undefined4 *)(this + iVar21 * 0x14 + 0x54bc) = *(undefined4 *)(pcVar7 + 4);
          }
        }
        else {
          iVar19 = FindBelt(this,this_00,pcVar2);
          *(undefined4 *)
           (*(int *)(this + iVar19 * 0x14 + 0x54b8) + *(int *)(this + iVar19 * 0x14 + 0x54b4) * 4) =
               *(undefined4 *)(iVar14 + 4);
          *(int *)(this + iVar19 * 0x14 + 0x54b4) = *(int *)(this + iVar19 * 0x14 + 0x54b4) + 1;
          *(undefined4 *)(this + iVar19 * 0x14 + 0x54bc) = *(undefined4 *)(iVar21 + 4);
        }
        iStack_80 = iStack_80 + 1;
        iVar5 = iVar5 + 0x1c;
      } while (iStack_80 < *(int *)(this + 0x18));
    }
    (**(code **)(*(int *)(this + 4) + 8))();
    iVar5 = 0;
    if (0 < *(int *)(this + 0x54a8)) {
      do {
        SplitCreate(this,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 0x54a8));
    }
    iVar5 = 0;
    if (0 < *(int *)(this + 0x54a8)) {
      psVar18 = this + 0x9a8;
      do {
        shtSPLIT::InitAllDynArr((shtSPLIT *)psVar18);
        iVar5 = iVar5 + 1;
        psVar18 = (shtSHATTER *)((shtSPLIT *)psVar18 + 0xc0);
      } while (iVar5 < *(int *)(this + 0x54a8));
    }
    iVar5 = 0;
    if (0 < *(int *)(this + 0x5894)) {
      do {
        BeltProcess(this,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 0x5894));
    }
    iStack_80 = 0;
    if (0 < *(int *)(this + 0x54a8)) {
      psVar18 = this + 0xa68;
      psVar13 = this + 0x9a8;
      do {
        if ((*(int *)(*(int *)psVar13 + 0x10) < 3) ||
           (iVar5 = (**(code **)(*(int *)this + 4))(*(int *)psVar13), iVar5 != 0)) {
          poVar3 = *(objOBJ **)psVar13;
          if (poVar3 != (objOBJ *)0x0) {
            objOBJ::~objOBJ(poVar3);
            operator_delete(poVar3);
          }
          if (iStack_80 < *(int *)(this + 0x54a8) + -1) {
            psVar15 = psVar18;
            psVar20 = psVar13;
            for (uVar11 = (uint)(((*(int *)(this + 0x54a8) - iStack_80) + -1) * 0xc0) >> 2;
                uVar11 != 0; uVar11 = uVar11 - 1) {
              *(int *)psVar20 = *(int *)psVar15;
              psVar15 = psVar15 + 4;
              psVar20 = psVar20 + 4;
            }
            for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
              *psVar20 = *psVar15;
              psVar15 = psVar15 + 1;
              psVar20 = psVar20 + 1;
            }
          }
          psVar18 = psVar18 + -0xc0;
          iStack_80 = iStack_80 + -1;
          *(int *)(this + 0x54a8) = *(int *)(this + 0x54a8) + -1;
          psVar13 = psVar13 + -0xc0;
        }
        iStack_80 = iStack_80 + 1;
        psVar18 = psVar18 + 0xc0;
        psVar13 = psVar13 + 0xc0;
      } while (iStack_80 < *(int *)(this + 0x54a8));
    }
    iStack_80 = 0;
    if (0 < *(int *)(this + 0x54a8)) {
      psVar18 = this + 0xa58;
      do {
        objWELD_PARAM::objWELD_PARAM((objWELD_PARAM *)&local_74);
        puStack_44 = &DAT_00951cf8;
        puStack_38 = &DAT_0094de70;
        puStack_40 = &DAT_00952c98;
        uStack_3c = *(undefined4 *)(gsScenePtr + 0x6c);
        uStack_34 = 4000;
        uStack_28 = 8000;
        uStack_30 = 8000;
        uStack_2c = *(undefined4 *)(gsScenePtr + 0x68);
        uStack_60 = 0;
        objOBJ::RemoveUnusedVertTexCoord(*(objOBJ **)(psVar18 + -0xb0),(objWELD_PARAM *)&local_74);
        *(uint *)psVar18 = 0;
        iStack_84 = 0;
        *(uint *)(psVar18 + 4) = 0;
        *(uint *)(psVar18 + 8) = 0;
        *(uint *)(psVar18 + 0xc) = 0;
        if (0 < (int)*(uint *)(psVar18 + -4)) {
          do {
            iVar21 = 0;
            piVar4 = *(int **)(*(uint *)(psVar18 + -0xb0) + 0x28);
            uVar1 = *(ushort *)((uint)*(byte *)(piVar4 + 1) * iStack_84 + *piVar4);
            iVar5 = *(int *)(piVar4[6] + 2);
            do {
              iVar19 = (uint)*(byte *)(*(int **)(*(uint *)(psVar18 + -0xb0) + 0x28) + 1) * iStack_84
                       + **(int **)(*(uint *)(psVar18 + -0xb0) + 0x28);
              uVar11 = (uint)*(ushort *)(iVar19 + 2 + iVar21 * 2);
              if ((int)*(uint *)psVar18 < (int)uVar11) {
                *(uint *)psVar18 = uVar11;
              }
              iVar14 = 0;
              psVar13 = psVar18;
              do {
                psVar13 = psVar13 + 4;
                poVar8 = objSPLIT_ENTRY::FindMtlTCCoordID
                                   ((objSPLIT_ENTRY *)((uint)uVar1 * 0x70 + iVar5),
                                    *(objOBJ **)(psVar18 + -0xb0),iVar14);
                if ((poVar8 != (objMTL *)0x0) &&
                   (uVar11 = (uint)*(ushort *)
                                    (iVar19 + 8 +
                                    (iVar21 + (uint)*(byte *)(*(int *)(*(int *)(*(uint *)(psVar18 +
                                                                                         -0xb0) +
                                                                               0x28) + 0x18) + 6 +
                                                             (char)poVar8[0x18] * 4) * 3) * 2),
                   (int)*(uint *)psVar13 < (int)uVar11)) {
                  *(uint *)psVar13 = uVar11;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < 3);
              iVar21 = iVar21 + 1;
            } while (iVar21 < 3);
            iStack_84 = iStack_84 + 1;
            this = psStack_78;
          } while (iStack_84 < (int)*(uint *)(psVar18 + -4));
        }
        uStack_50 = *(uint *)(psVar18 + 4);
        uStack_68 = 0;
        uStack_64 = 0;
        uStack_54 = *(uint *)psVar18;
        uStack_6c = 1;
        uStack_5c = 1;
        uStack_58 = *(uint *)(psVar18 + -4);
        uStack_48 = *(uint *)(psVar18 + 0xc);
        uStack_4c = *(uint *)(psVar18 + 8);
        local_74 = (shtSHATTER *)0x3a83126f;
        uStack_70 = 0x3a83126f;
        objOBJ::Weld(*(objOBJ **)(psVar18 + -0xb0),(objWELD_PARAM *)&local_74);
        objOBJ::SortMtlList(*(objOBJ **)(psVar18 + -0xb0));
        iStack_80 = iStack_80 + 1;
        psVar18 = psVar18 + 0xc0;
      } while (iStack_80 < *(int *)(this + 0x54a8));
    }
    iVar5 = 0;
    if (0 < *(int *)(this + 0x54a8)) {
      psVar18 = this + 0x9a8;
      psVar13 = this + 0xa68;
      do {
        poVar3 = *(objOBJ **)psVar18;
        if (*(int *)(poVar3 + 0x10) < 3) {
          if (poVar3 != (objOBJ *)0x0) {
            objOBJ::~objOBJ(poVar3);
            operator_delete(poVar3);
          }
          if (iVar5 < *(int *)(this + 0x54a8) + -1) {
            psVar15 = psVar13;
            psVar20 = psVar18;
            for (uVar11 = (uint)(((*(int *)(this + 0x54a8) - iVar5) + -1) * 0xc0) >> 2; uVar11 != 0;
                uVar11 = uVar11 - 1) {
              *(undefined4 *)psVar20 = *(undefined4 *)psVar15;
              psVar15 = psVar15 + 4;
              psVar20 = psVar20 + 4;
            }
            for (iVar21 = 0; iVar21 != 0; iVar21 = iVar21 + -1) {
              *psVar20 = *psVar15;
              psVar15 = psVar15 + 1;
              psVar20 = psVar20 + 1;
            }
          }
          psVar13 = psVar13 + -0xc0;
          iVar5 = iVar5 + -1;
          *(int *)(this + 0x54a8) = *(int *)(this + 0x54a8) + -1;
          psVar18 = psVar18 + -0xc0;
        }
        iVar5 = iVar5 + 1;
        psVar13 = psVar13 + 0xc0;
        psVar18 = psVar18 + 0xc0;
      } while (iVar5 < *(int *)(this + 0x54a8));
    }
    iVar5 = 0;
    if (0 < *(int *)(this + 0x54a8)) {
      psVar18 = this + 0x9a8;
      do {
        shtSPLIT::InitAllDynArr((shtSPLIT *)psVar18);
        iVar5 = iVar5 + 1;
        psVar18 = (shtSHATTER *)((shtSPLIT *)psVar18 + 0xc0);
      } while (iVar5 < *(int *)(this + 0x54a8));
    }
    iVar5 = 0;
    if (0 < *(int *)(this + 0x54a8)) {
      do {
        SplitPatch(this,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 0x54a8));
    }
    iVar5 = 0;
    if (0 < *(int *)(this + 0x54a8)) {
      psVar18 = this + 0x9a8;
      do {
        if (*(int *)psVar18 != 0) {
          iVar21 = 0;
          puVar9 = *(ushort **)(*(int *)(*(int *)psVar18 + 0x28) + 0x18);
          if (*puVar9 != 0) {
            iVar19 = 0;
            do {
              *(short *)(*(int *)(puVar9 + 1) + 0x66 + iVar19) = (short)iVar21;
              iVar21 = iVar21 + 1;
              iVar19 = iVar19 + 0x70;
              puVar9 = *(ushort **)(*(int *)(*(int *)psVar18 + 0x28) + 0x18);
            } while (iVar21 < (int)(uint)*puVar9);
          }
        }
        iVar5 = iVar5 + 1;
        psVar18 = psVar18 + 0xc0;
      } while (iVar5 < *(int *)(this + 0x54a8));
    }
    iVar5 = 0;
    if (0 < *(int *)(this + 0x5894)) {
      psVar18 = this + 0x54b8;
      do {
        apFree(*(void **)psVar18);
        *(undefined4 *)psVar18 = 0;
        iVar5 = iVar5 + 1;
        psVar18 = psVar18 + 0x14;
      } while (iVar5 < *(int *)(this + 0x5894));
    }
    *(undefined4 *)(this + 0x5894) = 0;
    return 1;
  }
  (**(code **)(*(int *)(this + 4) + 8))();
  *(undefined4 *)(this + 0x9a8) = *(undefined4 *)(this + 0x5908);
  *(undefined4 *)(this + 0x54a8) = 1;
  return 0;
}




/* from: gs:shatter.cpp
   addr: 0050B630 */

void __thiscall shtSHATTER::SplitCreate(shtSHATTER *this,int param_1)

{
  shtSHATTER *psVar1;
  int iVar2;
  objOBJ *poVar3;
  char *pcVar4;
  objSPLIT *poVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  objSPLIT *poVar9;
  undefined4 uVar10;
  
  psVar1 = this + param_1 * 0xc0 + 0x9a8;
  uVar7 = *(uint *)(*(int *)(this + 0x5908) + 0x10);
  puVar8 = *(undefined4 **)(this + 0x5898);
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(this + 0x5908) + 0x10)) {
    do {
      if ((uint)*(ushort *)(*(int *)(this + 0x589c) + iVar2 * 2) == param_1) {
        *(undefined1 *)(iVar2 + *(int *)(this + 0x5898)) = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(this + 0x5908) + 0x10));
  }
  poVar3 = objOBJ::ExtractObj(*(objOBJ **)(this + 0x5908),*(uchar **)(this + 0x5898),0);
  *(objOBJ **)psVar1 = poVar3;
  if (poVar3 != (objOBJ *)0x0) {
    *(int *)(psVar1 + 0xac) = *(int *)(poVar3 + 0x10);
    pcVar4 = strstr(*(char **)(*(int *)(this + 0x5908) + 0x18),s__split_);
    if (pcVar4 == (char *)0x0) {
      uVar10 = *(undefined4 *)(*(int *)(this + 0x5908) + 0x18);
      pcVar4 = s__s_split__d;
    }
    else {
      uVar10 = *(undefined4 *)(*(int *)(this + 0x5908) + 0x18);
      pcVar4 = s__s__d;
    }
    sprintf((char *)&apBuffer,pcVar4,uVar10,param_1);
    objOBJ::SetName(*(objOBJ **)psVar1,(char *)&apBuffer);
    if (*(int *)(*(int *)(*(int *)psVar1 + 0x28) + 0x18) == 0) {
      poVar5 = objSPLIT::Make();
      puVar8 = (undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0x5908) + 0x28) + 0x18) + 6);
      poVar9 = poVar5 + 6;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)poVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        poVar9 = poVar9 + 4;
      }
      *(undefined2 *)poVar9 = *(undefined2 *)puVar8;
      *(objSPLIT **)(*(int *)(*(int *)psVar1 + 0x28) + 0x18) = poVar5;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:shatter.cpp
   addr: 0050B760 */

void __thiscall shtSHATTER::SplitPatch(shtSHATTER *this,int param_1)

{
  shtSPLIT *this_00;
  objOBJ *this_01;
  float fVar1;
  short sVar2;
  cgmWED_SYS *this_02;
  int iVar3;
  m3dV *pmVar4;
  uint uVar5;
  byte *pbVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  void *local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34 [3];
  shtSHATTER *local_28;
  shtSPLIT *local_24;
  int local_20;
  float *local_1c;
  cgmWED_SYS *local_18;
  int local_14;
  byte *local_10;
  undefined8 *local_c;
  undefined **local_8;
  
  local_8 = &cgmQUERY_BOUNDARY::_vftable_;
  local_48 = (void *)0x0;
  this_01 = *(objOBJ **)(this + param_1 * 0xc0 + 0x9a8);
  this_00 = (shtSPLIT *)(this + param_1 * 0xc0 + 0x9a8);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_28 = this;
  local_24 = this_00;
  if ((*(int *)(this_01 + 0x14) < 4) || (*(int *)(this_01 + 0x10) == 0)) {
    if (this_01 != (objOBJ *)0x0) {
      objOBJ::~objOBJ(this_01);
      operator_delete(this_01);
    }
    *(undefined4 *)this_00 = 0;
  }
  else {
    shtSPLIT::InitAllDynArr(this_00);
    this_02 = (cgmWED_SYS *)operator_new(0x40);
    if (this_02 == (cgmWED_SYS *)0x0) {
      this_02 = (cgmWED_SYS *)0x0;
    }
    else {
      cgmWED_SYS::cgmWED_SYS(this_02);
      *(undefined ***)this_02 = &cgmWED_3D::_vftable_;
    }
    local_18 = this_02;
    iVar3 = (**(code **)(*(int *)this_02 + 0x24))(*(undefined4 *)this_00);
    if (iVar3 != 0) {
      objOBJ::TransformPoints(*(objOBJ **)this_00,(m3dMATR *)0x0,(m3dV *)0x0);
      pmVar4 = objOBJ::GetTransformedVertList();
      objOBJ::GetTransformedVertNmb();
      *(m3dV **)(this_02 + 0x3c) = pmVar4;
      cgmWED_SYS::CalcBoundary(this_02,0);
      uVar5 = cgmWED_SYS::DepthFirstSearch(this_02,(cgmQUERY *)&local_8);
      local_48 = apCalloc(uVar5,0x24);
      iVar3 = 0;
      if (0 < *(int *)(this_02 + 0xc)) {
        local_c = (undefined8 *)0x0;
        do {
          pbVar6 = (byte *)(*(int *)(this_02 + 0x10) + (int)local_c);
          if ((*pbVar6 & 0x10) != 0) {
            if (*(int *)((int)local_48 + *(int *)(*(int *)(pbVar6 + 8) + 0x20) * 0x24) == 0) {
              *(undefined4 *)((int)local_48 + *(int *)(*(int *)(pbVar6 + 8) + 0x20) * 0x24) = 1;
              *(int *)((int)local_48 + *(int *)(*(int *)(pbVar6 + 8) + 0x20) * 0x24 + 0x14) =
                   local_40;
              local_40 = local_40 + 1;
            }
            local_3c = local_3c + 1;
          }
          iVar3 = iVar3 + 1;
          local_c = (undefined8 *)((int)local_c + 0x24);
        } while (iVar3 < *(int *)(this_02 + 0xc));
      }
      puVar10 = &DAT_00952c98;
      for (iVar3 = 4000; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar10 = 0xffffffff;
        puVar10 = puVar10 + 1;
      }
      pbVar6 = *(byte **)this_00;
      local_38 = 0;
      local_20 = 0;
      if (0 < *(int *)(pbVar6 + 0x14)) {
        local_14 = 0;
        do {
          iVar3 = *(int *)(*(int *)(this_02 + 8) + local_14 + 0x20);
          if (*(int *)((int)local_48 + iVar3 * 0x24) != 0) {
            iVar11 = *(int *)(*(int *)(this_02 + 8) + local_14 + 4);
            if ((*pbVar6 & 1) == 0) {
              local_1c = local_34;
              local_10 = pbVar6 + 0x3c;
              local_c = (undefined8 *)(*(int *)(*(int *)(pbVar6 + 0x28) + 0x40) + iVar11 * 0xc);
              if (m3dSimdType != 0) {
                if (m3dSimdType == 1) {
                  FastExitMediaState();
                  uVar12 = (undefined4)*local_c;
                  uVar15 = CONCAT44(uVar12,uVar12);
                  uVar12 = (undefined4)((ulonglong)*local_c >> 0x20);
                  uVar18 = CONCAT44(uVar12,uVar12);
                  uVar19 = CONCAT44(*(undefined4 *)(local_c + 1),*(undefined4 *)(local_c + 1));
                  uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)local_10);
                  uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(pbVar6 + 0x4c));
                  uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar6 + 0x5c));
                  uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(pbVar6 + 0x6c));
                  uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(pbVar6 + 0x44));
                  uVar15 = PackedFloatingADD(uVar14,uVar16);
                  uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(pbVar6 + 0x54));
                  uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar6 + 100));
                  uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(pbVar6 + 0x74));
                  uVar15 = PackedFloatingADD(uVar13,uVar15);
                  uVar13 = PackedFloatingADD(uVar14,uVar19);
                  local_34[1] = (float)((ulonglong)uVar15 >> 0x20);
                  local_34[0] = (float)uVar15;
                  uVar15 = PackedFloatingADD(uVar18,uVar13);
                  local_34[2] = (float)uVar15;
                  FastExitMediaState();
                }
                else {
                  iVar11 = 0;
                  local_1c = (float *)(local_10 + -(int)local_34);
                  pfVar7 = local_34;
                  do {
                    pfVar9 = local_1c;
                    iVar8 = 0;
                    *pfVar7 = 0.0;
                    pfVar9 = (float *)((int)pfVar9 + (int)pfVar7);
                    do {
                      iVar8 = iVar8 + 1;
                      *pfVar7 = *(float *)((int)local_c + iVar8 * 4 + -4) * *pfVar9 + *pfVar7;
                      pfVar9 = pfVar9 + 4;
                    } while (iVar8 < 3);
                    iVar8 = iVar11 + iVar8 * 4;
                    iVar11 = iVar11 + 1;
                    *pfVar7 = *(float *)(local_10 + iVar8 * 4) + *pfVar7;
                    pfVar7 = pfVar7 + 1;
                    this_02 = local_18;
                  } while (iVar11 < 3);
                }
              }
            }
            else {
              iVar8 = *(int *)(*(int *)(pbVar6 + 0x28) + 0x40) + iVar11 * 0xc;
              local_34[0] = *(float *)(*(int *)(*(int *)(pbVar6 + 0x28) + 0x40) + iVar11 * 0xc);
              local_34[1] = *(float *)(iVar8 + 4);
              local_34[2] = *(float *)(iVar8 + 8);
            }
            *(float *)((int)local_48 + iVar3 * 0x24 + 4) =
                 local_34[0] + *(float *)((int)local_48 + iVar3 * 0x24 + 4);
            *(float *)((int)local_48 + iVar3 * 0x24 + 8) =
                 local_34[1] + *(float *)((int)local_48 + iVar3 * 0x24 + 8);
            *(float *)((int)local_48 + iVar3 * 0x24 + 0xc) =
                 local_34[2] + *(float *)((int)local_48 + iVar3 * 0x24 + 0xc);
            sVar2 = (short)local_38;
            local_38 = local_38 + 1;
            *(short *)((int)&DAT_00952c98 + local_20 * 2) =
                 *(short *)(*(int *)(*(int *)local_24 + 0x28) + 6) + sVar2;
            *(int *)((int)local_48 + iVar3 * 0x24 + 0x10) =
                 *(int *)((int)local_48 + iVar3 * 0x24 + 0x10) + 1;
          }
          local_20 = local_20 + 1;
          local_14 = local_14 + 0x24;
          pbVar6 = *(byte **)local_24;
        } while (local_20 < *(int *)(pbVar6 + 0x14));
      }
      iVar3 = 0;
      if (0 < (int)uVar5) {
        iVar11 = 0;
        do {
          if (*(int *)(iVar11 + (int)local_48) != 0) {
            pfVar7 = (float *)(iVar11 + 4 + (int)local_48);
            fVar1 = ___real_3f800000 / (float)*(int *)(iVar11 + 0x10 + (int)local_48);
            *pfVar7 = fVar1 * *pfVar7;
            pfVar7[1] = fVar1 * pfVar7[1];
            pfVar7[2] = fVar1 * pfVar7[2];
          }
          iVar3 = iVar3 + 1;
          iVar11 = iVar11 + 0x24;
        } while (iVar3 < (int)uVar5);
      }
      local_44 = uVar5;
      SplitPatchAddFaces(local_28,param_1,(cgmWED_3D *)this_02,(shtRIM *)&local_48);
      (**(code **)(*(int *)this_02 + 8))();
      (*(code *)**(undefined4 **)this_02)(1);
      apFree(local_48);
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: gs:shatter.cpp
   addr: 0050BB80 */

void __thiscall
shtSHATTER::SplitPatchAddFaces(shtSHATTER *this,int param_1,cgmWED_3D *param_2,shtRIM *param_3)

{
  shtSHATTER *psVar1;
  float *pfVar2;
  float fVar3;
  ushort uVar4;
  objOBJ *this_00;
  ushort *puVar5;
  int *piVar6;
  shtSHATTER *psVar7;
  objMTL *poVar8;
  int iVar9;
  byte *pbVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  shtSHATTER *psVar18;
  int iVar19;
  float *pfVar20;
  undefined4 *puVar21;
  short *psVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 local_15c [6];
  undefined1 local_144;
  undefined4 local_143;
  undefined1 local_12b;
  undefined2 local_f8;
  undefined2 local_f6;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined4 local_f0;
  m3dMATR local_ec [64];
  float local_ac [4];
  undefined4 local_9c;
  undefined4 uStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  float fStack_84;
  undefined4 uStack_80;
  float local_7c [3];
  undefined4 uStack_70;
  int local_6c;
  float local_68;
  int local_64;
  shtSHATTER *local_60;
  int local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 auStack_50 [10];
  int local_3c;
  int *local_38;
  shtSHATTER *local_34;
  int local_30;
  shtSHATTER *local_2c;
  float *local_28;
  float local_24 [3];
  undefined8 local_18;
  float local_10;
  float *local_c;
  float *local_8;
  
  iVar19 = param_1 * 0xc0;
  psVar18 = this + iVar19 + 0x9a8;
  local_60 = this;
  local_34 = psVar18;
  _vector_constructor_iterator_(local_15c,0x19,4,objMTL::objMTL);
  local_f6 = 0;
  local_f4 = 0;
  local_f2 = 0;
  local_f0 = 0;
  local_f8 = 1;
  local_15c[0] = (**(code **)(*(int *)this + 0xc))(*(undefined4 *)(this + 0x5908));
  this_00 = *(objOBJ **)(this + 0x5908);
  local_144 = *(undefined1 *)(*(int *)(*(int *)(this_00 + 0x28) + 0x18) + 8);
  poVar8 = objOBJ::GetSplitMtlRendMtl
                     (this_00,*(objSPLIT_ENTRY **)(*(int *)(*(int *)(this_00 + 0x28) + 0x18) + 2),1)
  ;
  if ((poVar8 != (objMTL *)0x0) && (*(int *)poVar8 != 0)) {
    local_f8 = 2;
    poVar8 = objOBJ::GetSplitMtlRendMtl
                       (*(objOBJ **)(this + 0x5908),
                        *(objSPLIT_ENTRY **)
                         (*(int *)(*(int *)(*(objOBJ **)(this + 0x5908) + 0x28) + 0x18) + 2),1);
    local_143 = *(undefined4 *)poVar8;
    local_12b = *(undefined1 *)(*(int *)(*(int *)(*(int *)(this + 0x5908) + 0x28) + 0x18) + 0xc);
  }
  local_3c = objOBJ::GetTCIndIDRendMtl(*(objOBJ **)(this + 0x5908),0);
  objOBJ::GetTCIndIDRendMtl(*(objOBJ **)(this + 0x5908),1);
  local_6c = objOBJ::GetTCCoordIDRendMtl(*(objOBJ **)(this + 0x5908),0);
  local_5c = objOBJ::GetTCCoordIDRendMtl(*(objOBJ **)(this + 0x5908),1);
  m3dMATR::MakeLCS2WCS_VZ(local_ec,(m3dV *)(this + 0x58f0),(m3dV *)(this + 0x58fc));
  m3dMATR::Invert(local_ec,(m3dMATR *)local_ac);
  iVar9 = dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(this + iVar19 + 0x9c8),*(int *)(param_3 + 8));
  if (((iVar9 != 0) &&
      (iVar9 = dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(this + iVar19 + 0xa38),1), iVar9 != 0)) &&
     (iVar9 = dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(this + iVar19 + 0x9ac),*(int *)(param_3 + 0xc)),
     iVar9 != 0)) {
    local_28 = (float *)(local_3c * 0x1c);
    iVar19 = dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(this + (int)local_28 + iVar19 + 0x9e4),
                                 *(int *)(param_3 + 0x10) + *(int *)(param_3 + 8));
    if (iVar19 != 0) {
      pbVar10 = *(byte **)psVar18;
      param_1 = 0;
      if (0 < *(int *)(pbVar10 + 0x14)) {
        local_38 = (int *)0x0;
        local_30 = 0;
        do {
          if (*(int *)(*(int *)param_3 + *(int *)(local_30 + 0x20 + *(int *)(param_2 + 8)) * 0x24)
              != 0) {
            if ((*pbVar10 & 1) == 0) {
              local_2c = (shtSHATTER *)&local_18;
              pfVar11 = (float *)(pbVar10 + 0x3c);
              pfVar20 = (float *)(*(int *)(*(int *)(pbVar10 + 0x28) + 0x40) + (int)local_38);
              local_c = pfVar20;
              if (m3dSimdType == 0) {
                if (((uint)pfVar11 & 0xf) == 0) {
                  fVar34 = *pfVar20 * *pfVar11 + *(float *)(pbVar10 + 0x6c) +
                           pfVar20[1] * *(float *)(pbVar10 + 0x4c) +
                           pfVar20[2] * *(float *)(pbVar10 + 0x5c);
                  fVar36 = *pfVar20 * *(float *)(pbVar10 + 0x40) + *(float *)(pbVar10 + 0x70) +
                           pfVar20[1] * *(float *)(pbVar10 + 0x50) +
                           pfVar20[2] * *(float *)(pbVar10 + 0x60);
                }
                else {
                  fVar34 = *pfVar20 * (float)*(undefined8 *)pfVar11 +
                           pfVar20[1] * (float)*(undefined8 *)(pbVar10 + 0x4c) +
                           pfVar20[2] * (float)*(undefined8 *)(pbVar10 + 0x5c) +
                           (float)*(undefined8 *)(pbVar10 + 0x6c);
                  fVar36 = *pfVar20 * (float)((ulonglong)*(undefined8 *)pfVar11 >> 0x20) +
                           pfVar20[1] * (float)((ulonglong)*(undefined8 *)(pbVar10 + 0x4c) >> 0x20)
                           + pfVar20[2] *
                             (float)((ulonglong)*(undefined8 *)(pbVar10 + 0x5c) >> 0x20) +
                             (float)((ulonglong)*(undefined8 *)(pbVar10 + 0x6c) >> 0x20);
                }
                local_18 = CONCAT44(fVar36,fVar34);
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar25 = (undefined4)*(undefined8 *)pfVar20;
                uVar26 = CONCAT44(uVar25,uVar25);
                uVar25 = (undefined4)((ulonglong)*(undefined8 *)pfVar20 >> 0x20);
                uVar28 = CONCAT44(uVar25,uVar25);
                uVar31 = CONCAT44(pfVar20[2],pfVar20[2]);
                uVar27 = PackedFloatingMUL(uVar26,*(undefined8 *)pfVar11);
                uVar30 = PackedFloatingMUL(uVar28,*(undefined8 *)(pbVar10 + 0x4c));
                uVar32 = PackedFloatingMUL(uVar31,*(undefined8 *)(pbVar10 + 0x5c));
                uVar27 = PackedFloatingADD(uVar27,*(undefined8 *)(pbVar10 + 0x6c));
                uVar29 = PackedFloatingMUL(uVar26,*(undefined8 *)(pbVar10 + 0x44));
                uVar26 = PackedFloatingADD(uVar30,uVar32);
                uVar30 = PackedFloatingMUL(uVar28,*(undefined8 *)(pbVar10 + 0x54));
                uVar31 = PackedFloatingMUL(uVar31,*(undefined8 *)(pbVar10 + 100));
                uVar28 = PackedFloatingADD(uVar29,*(undefined8 *)(pbVar10 + 0x74));
                local_18 = PackedFloatingADD(uVar27,uVar26);
                uVar26 = PackedFloatingADD(uVar30,uVar31);
                uVar26 = PackedFloatingADD(uVar28,uVar26);
                local_10 = (float)uVar26;
                FastExitMediaState();
              }
              else {
                iVar19 = 0;
                local_8 = (float *)((int)pfVar11 - (int)&local_18);
                pfVar17 = (float *)&local_18;
                do {
                  pfVar14 = local_8;
                  iVar9 = 0;
                  *pfVar17 = 0.0;
                  pfVar14 = (float *)((int)pfVar14 + (int)pfVar17);
                  do {
                    pfVar2 = pfVar20 + iVar9;
                    fVar34 = *pfVar14;
                    iVar9 = iVar9 + 1;
                    pfVar14 = pfVar14 + 4;
                    *pfVar17 = *pfVar2 * fVar34 + *pfVar17;
                  } while (iVar9 < 3);
                  iVar9 = iVar19 + iVar9 * 4;
                  iVar19 = iVar19 + 1;
                  *pfVar17 = pfVar11[iVar9] + *pfVar17;
                  pfVar17 = pfVar17 + 1;
                  psVar18 = local_34;
                } while (iVar19 < 3);
              }
            }
            else {
              pfVar11 = (float *)(*(int *)(*(int *)(pbVar10 + 0x28) + 0x40) + (int)local_38);
              local_18._0_4_ = *pfVar11;
              local_18._4_4_ = pfVar11[1];
              local_18 = *(undefined8 *)pfVar11;
              local_10 = pfVar11[2];
            }
            local_2c = (shtSHATTER *)local_ac;
            local_8 = local_24;
            local_c = (float *)&local_18;
            fVar34 = (float)local_18;
            fVar36 = (float)((ulonglong)local_18 >> 0x20);
            if (m3dSimdType == 0) {
              if (((uint)local_ac & 0xf) == 0) {
                local_24[2] = fVar34 * local_ac[2] + local_7c[2] + fVar36 * fStack_94 +
                              local_10 * fStack_84;
              }
              else {
                local_24[2] = fVar34 * local_ac[2] + fVar36 * fStack_94 +
                              local_10 * fStack_84 + local_7c[2];
              }
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar26 = PackedFloatingMUL(CONCAT44(fVar34,fVar34),CONCAT44(local_ac[1],local_ac[0]));
              uVar27 = PackedFloatingMUL(CONCAT44(fVar36,fVar36),CONCAT44(uStack_98,local_9c));
              uVar28 = PackedFloatingMUL(CONCAT44(local_10,local_10),CONCAT44(uStack_88,local_8c));
              uVar26 = PackedFloatingADD(uVar26,CONCAT44(local_7c[1],local_7c[0]));
              uVar30 = PackedFloatingMUL(CONCAT44(fVar34,fVar34),CONCAT44(local_ac[3],local_ac[2]));
              uVar27 = PackedFloatingADD(uVar27,uVar28);
              uVar31 = PackedFloatingMUL(CONCAT44(fVar36,fVar36),CONCAT44(uStack_90,fStack_94));
              uVar32 = PackedFloatingMUL(CONCAT44(local_10,local_10),CONCAT44(uStack_80,fStack_84));
              uVar28 = PackedFloatingADD(uVar30,CONCAT44(uStack_70,local_7c[2]));
              uVar26 = PackedFloatingADD(uVar26,uVar27);
              uVar27 = PackedFloatingADD(uVar31,uVar32);
              local_24[1] = (float)((ulonglong)uVar26 >> 0x20);
              local_24[0] = (float)uVar26;
              uVar26 = PackedFloatingADD(uVar28,uVar27);
              local_24[2] = (float)uVar26;
              FastExitMediaState();
            }
            else {
              iVar19 = 0;
              do {
                local_24[iVar19] = 0.0;
                iVar9 = 0;
                pfVar11 = local_ac + iVar19;
                fVar34 = ___real_00000000;
                do {
                  iVar15 = iVar9 * 4;
                  fVar36 = *pfVar11;
                  iVar9 = iVar9 + 1;
                  pfVar11 = pfVar11 + 4;
                  fVar34 = *(float *)((int)&local_18 + iVar15) * fVar36 + fVar34;
                } while (iVar9 < 3);
                iVar15 = iVar19 + 1;
                local_24[iVar19] = fVar34 + local_ac[iVar19 + iVar9 * 4];
                iVar19 = iVar15;
              } while (iVar15 < 3);
            }
            local_68 = local_24[0];
            local_64 = (int)local_24[1];
            iVar19 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(psVar18 + (int)local_28 + 0x3c),1);
            if (iVar19 != 0) {
              uVar16 = (uint)*(ushort *)(*(int *)(*(int *)psVar18 + 0x28) + 6 + local_3c * 2);
              iVar19 = *(int *)(*(int *)(*(int *)psVar18 + 0x28) + 0xc + local_3c * 4);
              *(float *)(iVar19 + uVar16 * 8) = local_68;
              *(int *)(iVar19 + 4 + uVar16 * 8) = local_64;
              psVar22 = (short *)(*(int *)(*(int *)psVar18 + 0x28) + 6 + local_3c * 2);
              *psVar22 = *psVar22 + 1;
            }
          }
          pbVar10 = *(byte **)psVar18;
          param_1 = param_1 + 1;
          local_30 = local_30 + 0x24;
          local_38 = local_38 + 3;
        } while (param_1 < *(int *)(pbVar10 + 0x14));
      }
      param_1 = 0;
      if (0 < *(int *)(param_3 + 4)) {
        local_30 = 0;
        do {
          psVar18 = local_34;
          piVar12 = (int *)(*(int *)param_3 + local_30);
          local_38 = piVar12;
          if (*piVar12 != 0) {
            psVar1 = local_60 + 0x58a0;
            local_2c = psVar1;
            local_c = (float *)(piVar12 + 1);
            iVar19 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(local_34 + 0x20),1);
            psVar7 = local_34;
            piVar6 = local_38;
            if (iVar19 == 0) {
              iVar19 = -1;
            }
            else {
              pfVar11 = (float *)(*(int *)(*(int *)(*(int *)psVar18 + 0x28) + 0x40) +
                                 *(int *)(*(int *)psVar18 + 0x14) * 0xc);
              if (m3dSimdType == 0) {
                if (((uint)local_2c & 0xf) == 0) {
                  fVar34 = *local_c;
                  fVar36 = local_c[1];
                  fVar3 = local_c[2];
                  fVar33 = fVar34 * *(float *)local_2c + *(float *)(local_2c + 0x30) +
                           fVar36 * *(float *)(local_2c + 0x10) +
                           fVar3 * *(float *)(local_2c + 0x20);
                  fVar35 = fVar34 * *(float *)(local_2c + 4) + *(float *)(local_2c + 0x34) +
                           fVar36 * *(float *)(local_2c + 0x14) +
                           fVar3 * *(float *)(local_2c + 0x24);
                  fVar34 = fVar34 * *(float *)(local_2c + 8) + *(float *)(local_2c + 0x38) +
                           fVar36 * *(float *)(local_2c + 0x18) +
                           fVar3 * *(float *)(local_2c + 0x28);
                }
                else {
                  fVar34 = *local_c;
                  fVar36 = local_c[1];
                  fVar3 = local_c[2];
                  fVar33 = fVar34 * (float)*(undefined8 *)local_2c +
                           fVar36 * (float)*(undefined8 *)(local_2c + 0x10) +
                           fVar3 * (float)*(undefined8 *)(local_2c + 0x20) +
                           (float)*(undefined8 *)(local_2c + 0x30);
                  fVar35 = fVar34 * (float)((ulonglong)*(undefined8 *)local_2c >> 0x20) +
                           fVar36 * (float)((ulonglong)*(undefined8 *)(local_2c + 0x10) >> 0x20) +
                           fVar3 * (float)((ulonglong)*(undefined8 *)(local_2c + 0x20) >> 0x20) +
                           (float)((ulonglong)*(undefined8 *)(local_2c + 0x30) >> 0x20);
                  fVar34 = fVar34 * (float)*(undefined8 *)(local_2c + 8) +
                           fVar36 * (float)*(undefined8 *)(local_2c + 0x18) +
                           fVar3 * (float)*(undefined8 *)(local_2c + 0x28) +
                           (float)*(undefined8 *)(local_2c + 0x38);
                }
                *(ulonglong *)pfVar11 = CONCAT44(fVar35,fVar33);
                pfVar11[2] = fVar34;
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar25 = (undefined4)*(undefined8 *)local_c;
                uVar26 = CONCAT44(uVar25,uVar25);
                uVar25 = (undefined4)((ulonglong)*(undefined8 *)local_c >> 0x20);
                uVar28 = CONCAT44(uVar25,uVar25);
                uVar31 = CONCAT44(local_c[2],local_c[2]);
                uVar27 = PackedFloatingMUL(uVar26,*(undefined8 *)local_2c);
                uVar30 = PackedFloatingMUL(uVar28,*(undefined8 *)(local_2c + 0x10));
                uVar32 = PackedFloatingMUL(uVar31,*(undefined8 *)(local_2c + 0x20));
                uVar27 = PackedFloatingADD(uVar27,*(undefined8 *)(local_2c + 0x30));
                uVar29 = PackedFloatingMUL(uVar26,*(undefined8 *)(local_2c + 8));
                uVar26 = PackedFloatingADD(uVar30,uVar32);
                uVar30 = PackedFloatingMUL(uVar28,*(undefined8 *)(local_2c + 0x18));
                uVar31 = PackedFloatingMUL(uVar31,*(undefined8 *)(local_2c + 0x28));
                uVar28 = PackedFloatingADD(uVar29,*(undefined8 *)(local_2c + 0x38));
                uVar26 = PackedFloatingADD(uVar27,uVar26);
                uVar27 = PackedFloatingADD(uVar30,uVar31);
                *(undefined8 *)pfVar11 = uVar26;
                uVar26 = PackedFloatingADD(uVar28,uVar27);
                pfVar11[2] = (float)uVar26;
                FastExitMediaState();
              }
              else {
                iVar19 = 0;
                pfVar20 = pfVar11;
                do {
                  iVar9 = 0;
                  *pfVar20 = 0.0;
                  pfVar17 = (float *)(((int)psVar1 - (int)pfVar11) + (int)pfVar20);
                  do {
                    pfVar14 = (float *)(piVar12 + 1 + iVar9);
                    fVar34 = *pfVar17;
                    iVar9 = iVar9 + 1;
                    pfVar17 = pfVar17 + 4;
                    *pfVar20 = *pfVar14 * fVar34 + *pfVar20;
                  } while (iVar9 < 3);
                  iVar9 = iVar19 + iVar9 * 4;
                  iVar19 = iVar19 + 1;
                  *pfVar20 = *(float *)(psVar1 + iVar9 * 4) + *pfVar20;
                  pfVar20 = pfVar20 + 1;
                  psVar18 = local_34;
                } while (iVar19 < 3);
              }
              *(int *)(*(int *)psVar18 + 0x14) = *(int *)(*(int *)psVar18 + 0x14) + 1;
              iVar19 = *(int *)(*(int *)psVar18 + 0x14) + -1;
            }
            local_38[6] = iVar19;
            local_8 = local_24;
            local_c = (float *)(local_38 + 1);
            local_2c = (shtSHATTER *)local_ac;
            if (m3dSimdType == 0) {
              if (((uint)local_ac & 0xf) == 0) {
                local_24[2] = *local_c * local_ac[2] + local_7c[2] + (float)local_38[2] * fStack_94
                              + (float)local_38[3] * fStack_84;
              }
              else {
                local_24[2] = *local_c * local_ac[2] + (float)local_38[2] * fStack_94 +
                              (float)local_38[3] * fStack_84 + local_7c[2];
              }
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar25 = (undefined4)*(undefined8 *)local_c;
              uVar26 = CONCAT44(uVar25,uVar25);
              uVar25 = (undefined4)((ulonglong)*(undefined8 *)local_c >> 0x20);
              uVar28 = CONCAT44(uVar25,uVar25);
              uVar31 = CONCAT44(local_38[3],local_38[3]);
              uVar27 = PackedFloatingMUL(uVar26,CONCAT44(local_ac[1],local_ac[0]));
              uVar30 = PackedFloatingMUL(uVar28,CONCAT44(uStack_98,local_9c));
              uVar32 = PackedFloatingMUL(uVar31,CONCAT44(uStack_88,local_8c));
              uVar27 = PackedFloatingADD(uVar27,CONCAT44(local_7c[1],local_7c[0]));
              uVar29 = PackedFloatingMUL(uVar26,CONCAT44(local_ac[3],local_ac[2]));
              uVar26 = PackedFloatingADD(uVar30,uVar32);
              uVar30 = PackedFloatingMUL(uVar28,CONCAT44(uStack_90,fStack_94));
              uVar31 = PackedFloatingMUL(uVar31,CONCAT44(uStack_80,fStack_84));
              uVar28 = PackedFloatingADD(uVar29,CONCAT44(uStack_70,local_7c[2]));
              uVar26 = PackedFloatingADD(uVar27,uVar26);
              uVar27 = PackedFloatingADD(uVar30,uVar31);
              local_24[1] = (float)((ulonglong)uVar26 >> 0x20);
              local_24[0] = (float)uVar26;
              uVar26 = PackedFloatingADD(uVar28,uVar27);
              local_24[2] = (float)uVar26;
              FastExitMediaState();
            }
            else {
              iVar19 = 0;
              do {
                local_24[iVar19] = 0.0;
                iVar9 = 0;
                pfVar11 = local_ac + iVar19;
                do {
                  pfVar20 = local_c + iVar9;
                  fVar34 = *pfVar11;
                  iVar9 = iVar9 + 1;
                  pfVar11 = pfVar11 + 4;
                  local_24[iVar19] = *pfVar20 * fVar34 + local_24[iVar19];
                } while (iVar9 < 3);
                iVar15 = iVar19 + 1;
                local_24[iVar19] = local_ac[iVar19 + iVar9 * 4] + local_24[iVar19];
                iVar19 = iVar15;
              } while (iVar15 < 3);
            }
            local_68 = local_24[0];
            local_64 = (int)local_24[1];
            iVar19 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(local_34 + (int)local_28 + 0x3c),1);
            if (iVar19 == 0) {
              iVar19 = -1;
            }
            else {
              uVar16 = (uint)*(ushort *)(*(int *)(*(int *)psVar7 + 0x28) + 6 + local_3c * 2);
              iVar19 = *(int *)(*(int *)(*(int *)psVar7 + 0x28) + 0xc + local_3c * 4);
              *(float *)(iVar19 + uVar16 * 8) = local_68;
              *(int *)(iVar19 + 4 + uVar16 * 8) = local_64;
              psVar22 = (short *)(*(int *)(*(int *)psVar7 + 0x28) + 6 + local_3c * 2);
              *psVar22 = *psVar22 + 1;
              iVar19 = *(ushort *)(*(int *)(*(int *)psVar7 + 0x28) + 6 + local_3c * 2) - 1;
            }
            piVar6[7] = iVar19;
            piVar6[8] = -1;
          }
          param_1 = param_1 + 1;
          local_30 = local_30 + 0x24;
        } while (param_1 < *(int *)(param_3 + 4));
      }
      if ((-1 < local_5c) && (param_1 = 0, 0 < *(int *)(param_2 + 4))) {
        iVar19 = 0;
        do {
          iVar15 = *(int *)(*(int *)(param_2 + 8) + iVar19 + 0x20);
          iVar9 = *(int *)param_3 + iVar15 * 0x24;
          if ((*(int *)(*(int *)param_3 + iVar15 * 0x24) != 0) && (*(int *)(iVar9 + 0x20) == -1)) {
            iVar15 = **(int **)(*(int *)(param_2 + 8) + iVar19 + 0xc);
            iVar13 = *(int *)(iVar15 + 0x10);
            if (iVar13 == 0) {
              iVar13 = *(int *)(iVar15 + 0x14);
            }
            iVar15 = objFACE::GetTCInd((objFACE *)
                                       ((uint)*(byte *)(*(int **)(*(int *)local_34 + 0x28) + 1) *
                                        *(int *)(iVar13 + 4) + **(int **)(*(int *)local_34 + 0x28)),
                                       0,local_5c);
            *(int *)(iVar9 + 0x20) = iVar15;
          }
          param_1 = param_1 + 1;
          iVar19 = iVar19 + 0x24;
        } while (param_1 < *(int *)(param_2 + 4));
      }
      iVar19 = *(int *)local_34;
      psVar22 = *(short **)(*(int *)(iVar19 + 0x28) + 0x18);
      *psVar22 = *psVar22 + 1;
      puVar5 = *(ushort **)(*(int *)(iVar19 + 0x28) + 0x18);
      uVar4 = *puVar5;
      puVar24 = (undefined4 *)((uint)uVar4 * 0x70 + -0x70 + *(int *)(puVar5 + 1));
      *(ushort *)((int)puVar24 + 0x66) = uVar4 - 1;
      puVar21 = local_15c;
      puVar23 = puVar24;
      for (iVar9 = 0x19; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar23 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar23 = puVar23 + 1;
      }
      *(undefined2 *)puVar23 = *(undefined2 *)puVar21;
      *(undefined2 *)(puVar24 + 0x1a) = *(undefined2 *)(iVar19 + 0x10);
      *(undefined2 *)((int)puVar24 + 0x6a) = 0;
      param_1 = 0;
      puVar24 = &local_58;
      for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
        *puVar24 = 0;
        puVar24 = puVar24 + 1;
      }
      *(undefined2 *)puVar24 = 0;
      if (0 < *(int *)(param_2 + 0xc)) {
        local_30 = 0;
        do {
          iVar19 = *(int *)(param_2 + 0x10) + local_30;
          if ((*(byte *)(*(int *)(param_2 + 0x10) + local_30) & 0x10) != 0) {
            iVar9 = *(int *)(iVar19 + 8);
            local_3c = *(int *)(*(int *)(iVar19 + 0xc) + 4);
            iVar19 = *(int *)param_3 + *(int *)(iVar9 + 0x20) * 0x24;
            psVar18 = *(shtSHATTER **)(iVar9 + 4);
            local_38 = (int *)iVar19;
            local_2c = psVar18;
            local_54 = (short)local_3c;
            local_58._2_2_ = *(undefined2 *)(iVar19 + 0x18);
            local_52 = (short)psVar18;
            local_64 = (int)&local_58 + local_6c * 6;
            auStack_50[local_6c * 3] = *(undefined2 *)(iVar19 + 0x1c);
            if (-1 < local_5c) {
              auStack_50[local_5c * 3] = *(undefined2 *)(iVar19 + 0x20);
            }
            pbVar10 = *(byte **)local_34;
            if ((*pbVar10 & 1) == 0) {
              local_28 = (float *)&local_18;
              pfVar11 = (float *)(pbVar10 + 0x3c);
              pfVar20 = (float *)(*(int *)(*(int *)(pbVar10 + 0x28) + 0x40) + (int)psVar18 * 0xc);
              local_8 = pfVar20;
              local_c = pfVar11;
              if (m3dSimdType == 0) {
                if (((uint)pfVar11 & 0xf) == 0) {
                  fVar34 = *pfVar20 * *pfVar11 + *(float *)(pbVar10 + 0x6c) +
                           pfVar20[1] * *(float *)(pbVar10 + 0x4c) +
                           pfVar20[2] * *(float *)(pbVar10 + 0x5c);
                  fVar36 = *pfVar20 * *(float *)(pbVar10 + 0x40) + *(float *)(pbVar10 + 0x70) +
                           pfVar20[1] * *(float *)(pbVar10 + 0x50) +
                           pfVar20[2] * *(float *)(pbVar10 + 0x60);
                }
                else {
                  fVar34 = *pfVar20 * (float)*(undefined8 *)pfVar11 +
                           pfVar20[1] * (float)*(undefined8 *)(pbVar10 + 0x4c) +
                           pfVar20[2] * (float)*(undefined8 *)(pbVar10 + 0x5c) +
                           (float)*(undefined8 *)(pbVar10 + 0x6c);
                  fVar36 = *pfVar20 * (float)((ulonglong)*(undefined8 *)pfVar11 >> 0x20) +
                           pfVar20[1] * (float)((ulonglong)*(undefined8 *)(pbVar10 + 0x4c) >> 0x20)
                           + pfVar20[2] *
                             (float)((ulonglong)*(undefined8 *)(pbVar10 + 0x5c) >> 0x20) +
                             (float)((ulonglong)*(undefined8 *)(pbVar10 + 0x6c) >> 0x20);
                }
                local_18 = CONCAT44(fVar36,fVar34);
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar25 = (undefined4)*(undefined8 *)pfVar20;
                uVar26 = CONCAT44(uVar25,uVar25);
                uVar25 = (undefined4)((ulonglong)*(undefined8 *)pfVar20 >> 0x20);
                uVar28 = CONCAT44(uVar25,uVar25);
                uVar31 = CONCAT44(pfVar20[2],pfVar20[2]);
                uVar27 = PackedFloatingMUL(uVar26,*(undefined8 *)pfVar11);
                uVar30 = PackedFloatingMUL(uVar28,*(undefined8 *)(pbVar10 + 0x4c));
                uVar32 = PackedFloatingMUL(uVar31,*(undefined8 *)(pbVar10 + 0x5c));
                uVar27 = PackedFloatingADD(uVar27,*(undefined8 *)(pbVar10 + 0x6c));
                uVar29 = PackedFloatingMUL(uVar26,*(undefined8 *)(pbVar10 + 0x44));
                uVar26 = PackedFloatingADD(uVar30,uVar32);
                uVar30 = PackedFloatingMUL(uVar28,*(undefined8 *)(pbVar10 + 0x54));
                uVar31 = PackedFloatingMUL(uVar31,*(undefined8 *)(pbVar10 + 100));
                uVar28 = PackedFloatingADD(uVar29,*(undefined8 *)(pbVar10 + 0x74));
                local_18 = PackedFloatingADD(uVar27,uVar26);
                uVar26 = PackedFloatingADD(uVar30,uVar31);
                uVar26 = PackedFloatingADD(uVar28,uVar26);
                local_10 = (float)uVar26;
                FastExitMediaState();
              }
              else {
                iVar19 = 0;
                local_60 = (shtSHATTER *)((int)pfVar11 - (int)&local_18);
                pfVar17 = (float *)&local_18;
                do {
                  iVar9 = 0;
                  *pfVar17 = 0.0;
                  psVar18 = (shtSHATTER *)((int)pfVar11 - (int)&local_18) + (int)pfVar17;
                  do {
                    pfVar14 = pfVar20 + iVar9;
                    fVar34 = *(float *)psVar18;
                    iVar9 = iVar9 + 1;
                    psVar18 = psVar18 + 0x10;
                    *pfVar17 = *pfVar14 * fVar34 + *pfVar17;
                  } while (iVar9 < 3);
                  iVar9 = iVar19 + iVar9 * 4;
                  iVar19 = iVar19 + 1;
                  *pfVar17 = pfVar11[iVar9] + *pfVar17;
                  pfVar17 = pfVar17 + 1;
                  psVar18 = local_2c;
                } while (iVar19 < 3);
              }
            }
            else {
              iVar9 = *(int *)(*(int *)(pbVar10 + 0x28) + 0x40);
              iVar19 = iVar9 + (int)psVar18 * 0xc;
              local_18._0_4_ = *(float *)(iVar9 + (int)psVar18 * 0xc);
              local_18._4_4_ = *(float *)(iVar19 + 4);
              local_10 = *(float *)(iVar19 + 8);
            }
            local_28 = local_24;
            local_8 = (float *)&local_18;
            local_c = local_ac;
            fVar34 = (float)local_18;
            fVar36 = (float)((ulonglong)local_18 >> 0x20);
            if (m3dSimdType == 0) {
              if (((uint)local_ac & 0xf) == 0) {
                local_24[2] = fVar34 * local_ac[2] + local_7c[2] + fVar36 * fStack_94 +
                              local_10 * fStack_84;
              }
              else {
                local_24[2] = fVar34 * local_ac[2] + fVar36 * fStack_94 +
                              local_10 * fStack_84 + local_7c[2];
              }
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar26 = PackedFloatingMUL(CONCAT44(fVar34,fVar34),CONCAT44(local_ac[1],local_ac[0]));
              uVar27 = PackedFloatingMUL(CONCAT44(fVar36,fVar36),CONCAT44(uStack_98,local_9c));
              uVar28 = PackedFloatingMUL(CONCAT44(local_10,local_10),CONCAT44(uStack_88,local_8c));
              uVar26 = PackedFloatingADD(uVar26,CONCAT44(local_7c[1],local_7c[0]));
              uVar30 = PackedFloatingMUL(CONCAT44(fVar34,fVar34),CONCAT44(local_ac[3],local_ac[2]));
              uVar27 = PackedFloatingADD(uVar27,uVar28);
              uVar31 = PackedFloatingMUL(CONCAT44(fVar36,fVar36),CONCAT44(uStack_90,fStack_94));
              uVar32 = PackedFloatingMUL(CONCAT44(local_10,local_10),CONCAT44(uStack_80,fStack_84));
              uVar28 = PackedFloatingADD(uVar30,CONCAT44(uStack_70,local_7c[2]));
              PackedFloatingADD(uVar26,uVar27);
              uVar26 = PackedFloatingADD(uVar31,uVar32);
              uVar26 = PackedFloatingADD(uVar28,uVar26);
              local_24[2] = (float)uVar26;
              FastExitMediaState();
            }
            else {
              iVar19 = 0;
              do {
                local_24[iVar19] = 0.0;
                iVar9 = 0;
                pfVar11 = local_ac + iVar19;
                fVar34 = ___real_00000000;
                do {
                  iVar15 = iVar9 * 4;
                  fVar36 = *pfVar11;
                  iVar9 = iVar9 + 1;
                  pfVar11 = pfVar11 + 4;
                  fVar34 = *(float *)((int)&local_18 + iVar15) * fVar36 + fVar34;
                } while (iVar9 < 3);
                iVar15 = iVar19 + 1;
                local_24[iVar19] = fVar34 + local_ac[iVar19 + iVar9 * 4];
                iVar19 = iVar15;
              } while (iVar15 < 3);
            }
            *(undefined2 *)((int)&local_58 + (local_6c * 3 + 6) * 2) =
                 *(undefined2 *)((int)&DAT_00952c98 + (int)psVar18 * 2);
            if (-1 < local_5c) {
              *(undefined2 *)((int)&local_58 + (local_5c * 3 + 6) * 2) =
                   *(undefined2 *)((int)local_38 + 0x20);
            }
            pbVar10 = *(byte **)local_34;
            if ((*pbVar10 & 1) == 0) {
              local_28 = (float *)&local_18;
              pfVar11 = (float *)(pbVar10 + 0x3c);
              local_c = pfVar11;
              pfVar20 = (float *)(*(int *)(*(int *)(pbVar10 + 0x28) + 0x40) + local_3c * 0xc);
              local_8 = pfVar20;
              if (m3dSimdType == 0) {
                if (((uint)pfVar11 & 0xf) == 0) {
                  fVar34 = *pfVar20 * *pfVar11 + *(float *)(pbVar10 + 0x6c) +
                           pfVar20[1] * *(float *)(pbVar10 + 0x4c) +
                           pfVar20[2] * *(float *)(pbVar10 + 0x5c);
                  fVar36 = *pfVar20 * *(float *)(pbVar10 + 0x40) + *(float *)(pbVar10 + 0x70) +
                           pfVar20[1] * *(float *)(pbVar10 + 0x50) +
                           pfVar20[2] * *(float *)(pbVar10 + 0x60);
                }
                else {
                  fVar34 = *pfVar20 * (float)*(undefined8 *)pfVar11 +
                           pfVar20[1] * (float)*(undefined8 *)(pbVar10 + 0x4c) +
                           pfVar20[2] * (float)*(undefined8 *)(pbVar10 + 0x5c) +
                           (float)*(undefined8 *)(pbVar10 + 0x6c);
                  fVar36 = *pfVar20 * (float)((ulonglong)*(undefined8 *)pfVar11 >> 0x20) +
                           pfVar20[1] * (float)((ulonglong)*(undefined8 *)(pbVar10 + 0x4c) >> 0x20)
                           + pfVar20[2] *
                             (float)((ulonglong)*(undefined8 *)(pbVar10 + 0x5c) >> 0x20) +
                             (float)((ulonglong)*(undefined8 *)(pbVar10 + 0x6c) >> 0x20);
                }
                local_18 = CONCAT44(fVar36,fVar34);
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar25 = (undefined4)*(undefined8 *)pfVar20;
                uVar26 = CONCAT44(uVar25,uVar25);
                uVar25 = (undefined4)((ulonglong)*(undefined8 *)pfVar20 >> 0x20);
                uVar28 = CONCAT44(uVar25,uVar25);
                uVar31 = CONCAT44(pfVar20[2],pfVar20[2]);
                uVar27 = PackedFloatingMUL(uVar26,*(undefined8 *)pfVar11);
                uVar30 = PackedFloatingMUL(uVar28,*(undefined8 *)(pbVar10 + 0x4c));
                uVar32 = PackedFloatingMUL(uVar31,*(undefined8 *)(pbVar10 + 0x5c));
                uVar27 = PackedFloatingADD(uVar27,*(undefined8 *)(pbVar10 + 0x6c));
                uVar29 = PackedFloatingMUL(uVar26,*(undefined8 *)(pbVar10 + 0x44));
                uVar26 = PackedFloatingADD(uVar30,uVar32);
                uVar30 = PackedFloatingMUL(uVar28,*(undefined8 *)(pbVar10 + 0x54));
                uVar31 = PackedFloatingMUL(uVar31,*(undefined8 *)(pbVar10 + 100));
                uVar28 = PackedFloatingADD(uVar29,*(undefined8 *)(pbVar10 + 0x74));
                local_18 = PackedFloatingADD(uVar27,uVar26);
                uVar26 = PackedFloatingADD(uVar30,uVar31);
                uVar26 = PackedFloatingADD(uVar28,uVar26);
                local_10 = (float)uVar26;
                FastExitMediaState();
              }
              else {
                iVar19 = 0;
                local_60 = (shtSHATTER *)((int)pfVar11 - (int)&local_18);
                pfVar17 = (float *)&local_18;
                do {
                  iVar9 = 0;
                  *pfVar17 = 0.0;
                  psVar18 = (shtSHATTER *)((int)pfVar11 - (int)&local_18) + (int)pfVar17;
                  do {
                    pfVar14 = pfVar20 + iVar9;
                    fVar34 = *(float *)psVar18;
                    iVar9 = iVar9 + 1;
                    psVar18 = psVar18 + 0x10;
                    *pfVar17 = *pfVar14 * fVar34 + *pfVar17;
                  } while (iVar9 < 3);
                  iVar9 = iVar19 + iVar9 * 4;
                  iVar19 = iVar19 + 1;
                  *pfVar17 = pfVar11[iVar9] + *pfVar17;
                  pfVar17 = pfVar17 + 1;
                } while (iVar19 < 3);
              }
            }
            else {
              iVar9 = *(int *)(*(int *)(pbVar10 + 0x28) + 0x40);
              iVar19 = iVar9 + local_3c * 0xc;
              local_18._0_4_ = *(float *)(iVar9 + local_3c * 0xc);
              local_18._4_4_ = *(float *)(iVar19 + 4);
              local_10 = *(float *)(iVar19 + 8);
            }
            local_28 = local_24;
            local_8 = (float *)&local_18;
            local_c = local_ac;
            fVar34 = (float)local_18;
            fVar36 = (float)((ulonglong)local_18 >> 0x20);
            if (m3dSimdType == 0) {
              if (((uint)local_ac & 0xf) == 0) {
                local_24[2] = fVar34 * local_ac[2] + local_7c[2] + fVar36 * fStack_94 +
                              local_10 * fStack_84;
              }
              else {
                local_24[2] = fVar34 * local_ac[2] + fVar36 * fStack_94 +
                              local_10 * fStack_84 + local_7c[2];
              }
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar26 = PackedFloatingMUL(CONCAT44(fVar34,fVar34),CONCAT44(local_ac[1],local_ac[0]));
              uVar27 = PackedFloatingMUL(CONCAT44(fVar36,fVar36),CONCAT44(uStack_98,local_9c));
              uVar28 = PackedFloatingMUL(CONCAT44(local_10,local_10),CONCAT44(uStack_88,local_8c));
              uVar26 = PackedFloatingADD(uVar26,CONCAT44(local_7c[1],local_7c[0]));
              uVar30 = PackedFloatingMUL(CONCAT44(fVar34,fVar34),CONCAT44(local_ac[3],local_ac[2]));
              uVar27 = PackedFloatingADD(uVar27,uVar28);
              uVar31 = PackedFloatingMUL(CONCAT44(fVar36,fVar36),CONCAT44(uStack_90,fStack_94));
              uVar32 = PackedFloatingMUL(CONCAT44(local_10,local_10),CONCAT44(uStack_80,fStack_84));
              uVar28 = PackedFloatingADD(uVar30,CONCAT44(uStack_70,local_7c[2]));
              PackedFloatingADD(uVar26,uVar27);
              uVar26 = PackedFloatingADD(uVar31,uVar32);
              uVar26 = PackedFloatingADD(uVar28,uVar26);
              local_24[2] = (float)uVar26;
              FastExitMediaState();
            }
            else {
              iVar19 = 0;
              do {
                local_24[iVar19] = 0.0;
                iVar9 = 0;
                pfVar11 = local_ac + iVar19;
                fVar34 = ___real_00000000;
                do {
                  iVar15 = iVar9 * 4;
                  fVar36 = *pfVar11;
                  iVar9 = iVar9 + 1;
                  pfVar11 = pfVar11 + 4;
                  fVar34 = *(float *)((int)&local_18 + iVar15) * fVar36 + fVar34;
                } while (iVar9 < 3);
                iVar15 = iVar19 + 1;
                local_24[iVar19] = fVar34 + local_ac[iVar19 + iVar9 * 4];
                iVar19 = iVar15;
              } while (iVar15 < 3);
            }
            auStack_50[local_6c * 3 + 1] = *(undefined2 *)((int)&DAT_00952c98 + local_3c * 2);
            if (-1 < local_5c) {
              auStack_50[local_5c * 3 + 1] = *(undefined2 *)((int)local_38 + 0x20);
            }
            psVar18 = local_34;
            iVar19 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(local_34 + 4),1);
            if (iVar19 != 0) {
              *(int *)(*(int *)psVar18 + 0x10) = *(int *)(*(int *)psVar18 + 0x10) + 1;
              piVar12 = *(int **)(*(int *)psVar18 + 0x28);
              psVar22 = (short *)((uint)*(byte *)(piVar12 + 1) *
                                  (*(int *)(*(int *)psVar18 + 0x10) + -1) + *piVar12);
              memmove(psVar22,&local_58,(uint)*(byte *)(piVar12 + 1));
              *psVar22 = **(short **)(*(int *)(*(int *)psVar18 + 0x28) + 0x18) + -1;
              puVar5 = *(ushort **)(*(int *)(*(int *)psVar18 + 0x28) + 0x18);
              psVar22 = (short *)((uint)*puVar5 * 0x70 + -6 + *(int *)(puVar5 + 1));
              *psVar22 = *psVar22 + 1;
            }
          }
          param_1 = param_1 + 1;
          local_30 = local_30 + 0x24;
        } while (param_1 < *(int *)(param_2 + 0xc));
      }
    }
  }
  return;
}




/* from: gs:shatter.cpp
   addr: 0050CD70 */

txmTEXTURE * __thiscall shtSHATTER::GetPatchTex(shtSHATTER *this,objOBJ *param_1)

{
  txmTEXTURE *ptVar1;
  
  ptVar1 = objOBJ::GetFaceTexRendMtl(*(objOBJ **)(this + 0x5908),0,0);
  return ptVar1;
}




/* from: gs:shatter.cpp
   addr: 0050CD90 */

void __thiscall shtSHATTER::BeltProcess(shtSHATTER *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  shtSHATTER *psVar3;
  shtSHATTER *psVar4;
  float fVar5;
  float fVar6;
  undefined2 uVar7;
  short *psVar8;
  ushort *puVar9;
  dsDYN_ARRAY *pdVar10;
  int *piVar11;
  objFACE *poVar12;
  dsDYN_ARRAY *pdVar13;
  int iVar14;
  dsDYN_ARRAY *pdVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  objOBJ *this_00;
  undefined4 *puVar19;
  undefined4 *puVar20;
  m3dPOLY *pmVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  m3dPOLY local_228 [244];
  undefined4 local_134;
  dsDYN_ARRAY local_130 [240];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  objOBJ *local_20;
  shtSHATTER *local_1c;
  int local_18;
  int local_14;
  dsDYN_ARRAY *local_10;
  dsDYN_ARRAY *local_c;
  dsDYN_ARRAY *local_8;
  
  iVar17 = *(int *)(this + param_1 * 0x14 + 0x54b4);
  psVar3 = this + param_1 * 0x14 + 0x54ac;
  iVar14 = iVar17 * 2;
  local_3c = *(undefined4 *)(this + 0x58f0);
  local_38 = *(undefined4 *)(this + 0x58f4);
  local_30 = -*(float *)(this + 0x58fc);
  local_34 = *(undefined4 *)(this + 0x58f8);
  local_2c = -*(float *)(this + 0x5900);
  local_28 = -*(float *)(this + 0x5904);
  psVar4 = this + *(int *)psVar3 * 0xc0 + 0x9a8;
  local_1c = this;
  dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(psVar4 + 0x90),iVar14);
  dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(psVar4 + 4),iVar14);
  local_c = (dsDYN_ARRAY *)(iVar17 * 6);
  dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(psVar4 + 0x20),(int)local_c);
  local_8 = (dsDYN_ARRAY *)(psVar4 + 0x3c);
  iVar17 = 6;
  do {
    if (*(short *)(iVar17 + *(int *)(*(int *)psVar4 + 0x28)) != 0) {
      dsDYN_ARRAY::Expand(local_8,(int)local_c);
    }
    iVar17 = iVar17 + 2;
    local_8 = local_8 + 0x1c;
  } while (iVar17 < 0xc);
  iVar17 = *(int *)(psVar3 + 8);
  iVar14 = iVar17 * 2;
  psVar4 = this + *(int *)(psVar3 + 4) * 0xc0 + 0x9a8;
  dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(psVar4 + 0x90),iVar14);
  dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(psVar4 + 4),iVar14);
  local_c = (dsDYN_ARRAY *)(iVar17 * 6);
  dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(psVar4 + 0x20),(int)local_c);
  local_8 = (dsDYN_ARRAY *)(psVar4 + 0x3c);
  iVar17 = 6;
  do {
    if (*(short *)(iVar17 + *(int *)(*(int *)psVar4 + 0x28)) != 0) {
      dsDYN_ARRAY::Expand(local_8,(int)local_c);
    }
    iVar17 = iVar17 + 2;
    local_8 = local_8 + 0x1c;
  } while (iVar17 < 0xc);
  local_24 = 0xffffffff;
  local_14 = 0;
  if (0 < *(int *)(psVar3 + 8)) {
    do {
      this_00 = *(objOBJ **)(this + 0x5908);
      iVar17 = *(int *)(*(int *)(psVar3 + 0xc) + local_14 * 4);
      if (*(ushort *)
           ((uint)*(byte *)(*(int **)(this_00 + 0x28) + 1) * iVar17 + **(int **)(this_00 + 0x28)) !=
          local_24) {
        poVar12 = objOBJ::GetFace(this_00,iVar17);
        puVar16 = (undefined4 *)
                  ((uint)*(ushort *)poVar12 * 0x70 +
                  *(int *)(*(int *)(*(int *)(this_00 + 0x28) + 0x18) + 2));
        iVar17 = *(int *)(this + *(int *)psVar3 * 0xc0 + 0x9a8);
        local_10 = (dsDYN_ARRAY *)iVar17;
        dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(this + *(int *)psVar3 * 0xc0 + 0xa38),1);
        psVar8 = *(short **)(*(int *)(iVar17 + 0x28) + 0x18);
        *psVar8 = *psVar8 + 1;
        puVar9 = *(ushort **)(*(int *)(iVar17 + 0x28) + 0x18);
        puVar19 = (undefined4 *)((uint)*puVar9 * 0x70 + -0x70 + *(int *)(puVar9 + 1));
        puVar18 = puVar16;
        puVar20 = puVar19;
        for (iVar17 = 0x19; iVar17 != 0; iVar17 = iVar17 + -1) {
          *puVar20 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar20 = puVar20 + 1;
        }
        *(undefined2 *)puVar20 = *(undefined2 *)puVar18;
        uVar7 = *(undefined2 *)((int)local_10 + 0x10);
        *(undefined2 *)((int)puVar19 + 0x6a) = 0;
        *(undefined2 *)(puVar19 + 0x1a) = uVar7;
        *(short *)((int)puVar19 + 0x66) = **(short **)(*(int *)((int)local_10 + 0x28) + 0x18) + -1;
        pdVar10 = *(dsDYN_ARRAY **)(local_1c + *(int *)(psVar3 + 4) * 0xc0 + 0x9a8);
        local_10 = pdVar10;
        dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(local_1c + *(int *)psVar3 * 0xc0 + 0xa38),1);
        **(short **)((int)*(float *)(pdVar10 + 0x28) + 0x18) =
             **(short **)((int)*(float *)(pdVar10 + 0x28) + 0x18) + 1;
        puVar19 = (undefined4 *)
                  ((uint)**(ushort **)((int)*(float *)(pdVar10 + 0x28) + 0x18) * 0x70 + -0x70 +
                  *(int *)(*(ushort **)((int)*(float *)(pdVar10 + 0x28) + 0x18) + 1));
        puVar18 = puVar19;
        for (iVar17 = 0x19; iVar17 != 0; iVar17 = iVar17 + -1) {
          *puVar18 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar18 = puVar18 + 1;
        }
        *(undefined2 *)puVar18 = *(undefined2 *)puVar16;
        *(undefined2 *)(puVar19 + 0x1a) = *(undefined2 *)(local_10 + 0x10);
        *(undefined2 *)((int)puVar19 + 0x6a) = 0;
        *(short *)((int)puVar19 + 0x66) = **(short **)((int)*(float *)(local_10 + 0x28) + 0x18) + -1
        ;
        this_00 = *(objOBJ **)(local_1c + 0x5908);
        iVar17 = *(int *)(*(int *)(psVar3 + 0xc) + local_14 * 4);
        local_24 = (uint)*(ushort *)
                          ((uint)*(byte *)(*(int **)(this_00 + 0x28) + 1) * iVar17 +
                          **(int **)(this_00 + 0x28));
        this = local_1c;
      }
      local_134 = 3;
      if (((byte)*this_00 & 1) == 0) {
        local_20 = this_00 + 0x3c;
        local_10 = local_130;
        local_18 = 0;
        do {
          pdVar13 = local_10;
          local_c = local_10;
          piVar11 = *(int **)(this_00 + 0x28);
          pdVar10 = (dsDYN_ARRAY *)
                    (piVar11[0x10] +
                    (uint)*(ushort *)
                           ((uint)*(byte *)(piVar11 + 1) * iVar17 + 2 + local_18 * 2 + *piVar11) *
                    0xc);
          local_8 = pdVar10;
          if (m3dSimdType == 0) {
            if (((uint)local_20 & 0xf) == 0) {
              fVar32 = *(float *)pdVar10;
              fVar5 = *(float *)(pdVar10 + 4);
              fVar6 = *(float *)(pdVar10 + 8);
              fVar30 = fVar32 * *(float *)local_20 + *(float *)(local_20 + 0x30) +
                       fVar5 * *(float *)(local_20 + 0x10) + fVar6 * *(float *)(local_20 + 0x20);
              fVar31 = fVar32 * *(float *)(local_20 + 4) + *(float *)(local_20 + 0x34) +
                       fVar5 * *(float *)(local_20 + 0x14) + fVar6 * *(float *)(local_20 + 0x24);
              fVar32 = fVar32 * *(float *)(local_20 + 8) + *(float *)(local_20 + 0x38) +
                       fVar5 * *(float *)(local_20 + 0x18) + fVar6 * *(float *)(local_20 + 0x28);
            }
            else {
              fVar32 = *(float *)pdVar10;
              fVar5 = *(float *)(pdVar10 + 4);
              fVar6 = *(float *)(pdVar10 + 8);
              fVar30 = fVar32 * (float)*(undefined8 *)local_20 +
                       fVar5 * (float)*(undefined8 *)(local_20 + 0x10) +
                       fVar6 * (float)*(undefined8 *)(local_20 + 0x20) +
                       (float)*(undefined8 *)(local_20 + 0x30);
              fVar31 = fVar32 * (float)((ulonglong)*(undefined8 *)local_20 >> 0x20) +
                       fVar5 * (float)((ulonglong)*(undefined8 *)(local_20 + 0x10) >> 0x20) +
                       fVar6 * (float)((ulonglong)*(undefined8 *)(local_20 + 0x20) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(local_20 + 0x30) >> 0x20);
              fVar32 = fVar32 * (float)*(undefined8 *)(local_20 + 8) +
                       fVar5 * (float)*(undefined8 *)(local_20 + 0x18) +
                       fVar6 * (float)*(undefined8 *)(local_20 + 0x28) +
                       (float)*(undefined8 *)(local_20 + 0x38);
            }
            *(ulonglong *)local_10 = CONCAT44(fVar31,fVar30);
            *(float *)(local_10 + 8) = fVar32;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar22 = (undefined4)*(undefined8 *)pdVar10;
            uVar25 = CONCAT44(uVar22,uVar22);
            uVar22 = (undefined4)((ulonglong)*(undefined8 *)pdVar10 >> 0x20);
            uVar28 = CONCAT44(uVar22,uVar22);
            uVar29 = CONCAT44(*(float *)(pdVar10 + 8),*(float *)(pdVar10 + 8));
            uVar23 = PackedFloatingMUL(uVar25,*(undefined8 *)local_20);
            uVar24 = PackedFloatingMUL(uVar28,*(undefined8 *)(local_20 + 0x10));
            uVar26 = PackedFloatingMUL(uVar29,*(undefined8 *)(local_20 + 0x20));
            uVar23 = PackedFloatingADD(uVar23,*(undefined8 *)(local_20 + 0x30));
            uVar27 = PackedFloatingMUL(uVar25,*(undefined8 *)(local_20 + 8));
            uVar25 = PackedFloatingADD(uVar24,uVar26);
            uVar24 = PackedFloatingMUL(uVar28,*(undefined8 *)(local_20 + 0x18));
            uVar29 = PackedFloatingMUL(uVar29,*(undefined8 *)(local_20 + 0x28));
            uVar28 = PackedFloatingADD(uVar27,*(undefined8 *)(local_20 + 0x38));
            uVar25 = PackedFloatingADD(uVar23,uVar25);
            uVar23 = PackedFloatingADD(uVar24,uVar29);
            *(undefined8 *)local_10 = uVar25;
            uVar25 = PackedFloatingADD(uVar28,uVar23);
            *(float *)(pdVar13 + 8) = (float)uVar25;
            FastExitMediaState();
          }
          else {
            local_c = (dsDYN_ARRAY *)0x0;
            do {
              iVar14 = 0;
              *(float *)pdVar13 = 0.0;
              pdVar15 = pdVar13 + ((int)local_20 - (int)local_10);
              do {
                iVar1 = iVar14 * 4;
                fVar32 = *(float *)pdVar15;
                iVar14 = iVar14 + 1;
                pdVar15 = pdVar15 + 0x10;
                *(float *)pdVar13 = *(float *)(pdVar10 + iVar1) * fVar32 + *(float *)pdVar13;
              } while (iVar14 < 3);
              pdVar15 = local_c + 1;
              *(float *)pdVar13 =
                   *(float *)(local_20 + (int)(local_c + iVar14 * 4) * 4) + *(float *)pdVar13;
              pdVar13 = pdVar13 + 4;
              local_40 = (int)local_20 - (int)local_10;
              local_c = pdVar15;
            } while ((int)pdVar15 < 3);
          }
          local_18 = local_18 + 1;
          local_10 = local_10 + 0xc;
          this = local_1c;
        } while (local_18 < 3);
      }
      else {
        local_8 = local_130;
        local_18 = 0;
        do {
          pfVar2 = (float *)(*(int *)(*(int *)(this_00 + 0x28) + 0x40) +
                            (uint)*(ushort *)
                                   ((uint)*(byte *)(*(int **)(this_00 + 0x28) + 1) * iVar17 + 2 +
                                    local_18 * 2 + **(int **)(this_00 + 0x28)) * 0xc);
          *(float *)local_8 = *pfVar2;
          *(float *)(local_8 + 4) = pfVar2[1];
          iVar14 = local_18 + 1;
          *(float *)(local_8 + 8) = pfVar2[2];
          local_8 = local_8 + 0xc;
          local_18 = iVar14;
        } while (iVar14 < 3);
      }
      iVar17 = m3dClipPolyPlane((m3dPOLY *)&local_134,(m3dV *)(this + 0x58f0),
                                (m3dV *)(this + 0x58fc),local_228);
      if (iVar17 != 1) {
        AddSplitFace(this,*(int *)psVar3,*(int *)(*(int *)(psVar3 + 0xc) + local_14 * 4),
                     (m3dPOLY *)&local_134,local_228);
      }
      if (iVar17 != -1) {
        if (iVar17 == 0) {
          m3dClipPolyPlane((m3dPOLY *)&local_134,(m3dV *)&local_3c,(m3dV *)&local_30,local_228);
        }
        else {
          puVar19 = &local_134;
          pmVar21 = local_228;
          for (iVar17 = 0x3d; this = local_1c, iVar17 != 0; iVar17 = iVar17 + -1) {
            *(undefined4 *)pmVar21 = *puVar19;
            puVar19 = puVar19 + 1;
            pmVar21 = pmVar21 + 4;
          }
        }
        AddSplitFace(this,*(int *)(psVar3 + 4),*(int *)(*(int *)(psVar3 + 0xc) + local_14 * 4),
                     (m3dPOLY *)&local_134,local_228);
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(psVar3 + 8));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:shatter.cpp
   addr: 0050D370 */

void __thiscall
shtSHATTER::AddSplitFace(shtSHATTER *this,int param_1,int param_2,m3dPOLY *param_3,m3dPOLY *param_4)

{
  int iVar1;
  m3dPOLY *pmVar2;
  m3dPOLY *pmVar3;
  m3dPOLY *pmVar4;
  int iVar5;
  int iVar6;
  int local_10 [4];
  
  pmVar3 = param_4;
  iVar5 = 0;
  iVar6 = *(int *)param_4;
  if (0 < iVar6) {
    pmVar4 = param_4 + 4;
    iVar1 = *(int *)param_3;
    do {
      iVar6 = 0;
      local_10[iVar5] = -1;
      pmVar2 = param_3;
      if (0 < iVar1) {
        do {
          param_4 = (m3dPOLY *)
                    (uint)(ABS(*(float *)pmVar4 - *(float *)(pmVar2 + 4)) < ___real_3a83126f);
          if ((((float)(int)param_4 != ___real_00000000) &&
              (param_4 = (m3dPOLY *)
                         (uint)(ABS(*(float *)(pmVar4 + 4) - *(float *)(pmVar2 + 8)) <
                               ___real_3a83126f), (float)(int)param_4 != ___real_00000000)) &&
             (param_4 = (m3dPOLY *)
                        (uint)(ABS(*(float *)(pmVar4 + 8) - *(float *)(pmVar2 + 0xc)) <
                              ___real_3a83126f), (float)(int)param_4 != ___real_00000000)) {
            local_10[iVar5] = iVar6;
            break;
          }
          iVar6 = iVar6 + 1;
          pmVar2 = pmVar2 + 0xc;
        } while (iVar6 < iVar1);
      }
      iVar6 = *(int *)pmVar3;
      iVar5 = iVar5 + 1;
      pmVar4 = pmVar4 + 0xc;
    } while (iVar5 < iVar6);
  }
  if (iVar6 == 3) {
    AddSplitFaceTri(this,param_1,param_2,param_3,pmVar3,local_10);
    return;
  }
  *(undefined4 *)pmVar3 = 3;
  AddSplitFaceTri(this,param_1,param_2,param_3,pmVar3,local_10);
  *(undefined4 *)(pmVar3 + 0x10) = *(undefined4 *)(pmVar3 + 0x1c);
  *(undefined4 *)(pmVar3 + 0x14) = *(undefined4 *)(pmVar3 + 0x20);
  *(undefined4 *)(pmVar3 + 0x18) = *(undefined4 *)(pmVar3 + 0x24);
  *(undefined4 *)(pmVar3 + 0x1c) = *(undefined4 *)(pmVar3 + 0x28);
  *(undefined4 *)(pmVar3 + 0x20) = *(undefined4 *)(pmVar3 + 0x2c);
  *(undefined4 *)(pmVar3 + 0x24) = *(undefined4 *)(pmVar3 + 0x30);
  local_10[1] = local_10[2];
  local_10[2] = local_10[3];
  AddSplitFaceTri(this,param_1,param_2,param_3,pmVar3,local_10);
  return;
}




/* from: gs:shatter.cpp
   addr: 0050D550 */

void __thiscall
shtSHATTER::AddSplitFaceTri
          (shtSHATTER *this,int param_1,int param_2,m3dPOLY *param_3,m3dPOLY *param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  m3dPOLY *pmVar6;
  int iVar7;
  objMTL *poVar8;
  uint uVar9;
  objSPLIT_ENTRY *this_00;
  uint uVar10;
  int iVar11;
  int *local_108;
  int local_100;
  float local_fc;
  float local_f8;
  objSPLIT_ENTRY *local_f4;
  float *local_f0;
  float *local_ec;
  float *local_e8;
  float *local_e4;
  float *local_e0;
  float **local_dc;
  float *local_d8;
  int local_d4 [3];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4 [6];
  float local_8c [3];
  float local_80 [3];
  float local_74 [3];
  float local_68 [3];
  m3dV local_5c [12];
  m3dVTX local_50 [4];
  float afStack_4c [18];
  
  iVar7 = _m3dGetPolyNormal(param_3,local_5c);
  if (iVar7 != 0) {
    local_108 = (int *)0x0;
    piVar3 = *(int **)(*(int *)(this + 0x5908) + 0x28);
    iVar11 = (uint)*(byte *)(piVar3 + 1) * param_2 + *piVar3;
    this_00 = (objSPLIT_ENTRY *)
              ((uint)*(ushort *)((uint)*(byte *)(piVar3 + 1) * param_2 + *piVar3) * 0x70 +
              *(int *)(piVar3[6] + 2));
    iVar7 = 0xc;
    local_dc = &local_e0;
    local_e0 = &local_b0;
    local_d4[0] = -1;
    local_e8 = local_a4 + 6;
    local_d4[1] = 0xffffffff;
    local_d8 = local_a4 + 0xc;
    local_d4[2] = 0xffffffff;
    local_f0 = local_a4 + 3;
    local_ec = local_a4 + 9;
    local_e4 = local_a4;
    local_100 = 6;
    local_f4 = this_00;
    do {
      if (*(short *)(local_100 + *(int *)(*(objOBJ **)(this + 0x5908) + 0x28)) != 0) {
        poVar8 = objSPLIT_ENTRY::FindMtlTCCoordID
                           (this_00,*(objOBJ **)(this + 0x5908),(int)local_108);
        if (poVar8 != (objMTL *)0x0) {
          iVar4 = *(int *)(this + 0x5908);
          uVar10 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x18) + 6 +
                                  (char)poVar8[0x18] * 4);
          *(uint *)((int)local_dc + iVar7) = uVar10;
          iVar5 = *(int *)(iVar7 + *(int *)(iVar4 + 0x28));
          uVar9 = (uint)*(ushort *)(iVar11 + 8 + uVar10 * 6);
          iVar4 = iVar11 + 8 + uVar10 * 6;
          fVar1 = *(float *)(iVar5 + uVar9 * 8);
          *(float *)((int)local_e0 + iVar7) = fVar1;
          fVar2 = *(float *)(iVar5 + uVar9 * 8 + 4);
          *(float *)((int)local_e8 + iVar7) = fVar2;
          uVar9 = (uint)*(ushort *)(iVar4 + 2);
          *(float *)((int)local_d8 + iVar7) = *(float *)(iVar5 + uVar9 * 8) - fVar1;
          uVar10 = (uint)*(ushort *)(iVar4 + 4);
          *(float *)((int)local_f0 + iVar7) = *(float *)(iVar5 + uVar10 * 8) - fVar1;
          *(float *)((int)local_ec + iVar7) = *(float *)(iVar5 + uVar9 * 8 + 4) - fVar2;
          *(float *)((int)local_e4 + iVar7) = *(float *)(iVar5 + uVar10 * 8 + 4) - fVar2;
          this_00 = local_f4;
        }
      }
      iVar7 = iVar7 + 4;
      local_108 = (int *)((int)local_108 + 1);
      local_100 = local_100 + 2;
    } while (local_100 < 0xc);
    iVar7 = 0;
    local_b0 = *(float *)(param_3 + 0x10) - *(float *)(param_3 + 4);
    local_108 = param_5;
    local_ac = *(float *)(param_3 + 0x14) - *(float *)(param_3 + 8);
    local_a8 = *(float *)(param_3 + 0x18) - *(float *)(param_3 + 0xc);
    local_c8 = *(float *)(param_3 + 0x1c) - *(float *)(param_3 + 4);
    local_c4 = *(float *)(param_3 + 0x20) - *(float *)(param_3 + 8);
    local_c0 = *(float *)(param_3 + 0x24) - *(float *)(param_3 + 0xc);
    pmVar6 = param_4;
    do {
      if (*local_108 == -1) {
        local_bc = *(float *)(pmVar6 + 4) - *(float *)(param_3 + 4);
        local_b8 = *(float *)(pmVar6 + 8) - *(float *)(param_3 + 8);
        local_b4 = *(float *)(pmVar6 + 0xc) - *(float *)(param_3 + 0xc);
        m3dBasisCoord((m3dV *)&local_b0,(m3dV *)&local_c8,(m3dV *)&local_bc,&local_fc,&local_f8);
        iVar11 = 0;
        do {
          if (-1 < local_d4[iVar11]) {
            *(float *)(local_50 + (iVar7 + iVar11) * 8) =
                 local_f8 * local_a4[iVar11 + 6] + local_fc * local_a4[iVar11 + 0xf] +
                 local_a4[iVar11];
            afStack_4c[(iVar7 + iVar11) * 2] =
                 local_f8 * local_a4[iVar11 + 3] + local_fc * local_a4[iVar11 + 0xc] +
                 local_a4[iVar11 + 9];
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 3);
      }
      iVar7 = iVar7 + 3;
      local_108 = local_108 + 1;
      pmVar6 = pmVar6 + 0xc;
    } while (iVar7 < 9);
    shtSPLIT::AddFace((shtSPLIT *)(this + param_1 * 0xc0 + 0x9a8),param_4,(m3dMATR *)(this + 0x58a0)
                      ,local_50,local_d4,*(objOBJ **)(this + 0x5908),param_2,param_5);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:shatter.cpp
   addr: 0050D880 */

int __thiscall shtSHATTER::FindBelt(shtSHATTER *this,cgmWED_NODE *param_1,cgmWED_NODE *param_2)

{
  float *pfVar1;
  float fVar2;
  shtSHATTER *psVar3;
  void *pvVar4;
  cgmWED_NODE *pcVar5;
  int iVar6;
  
  pfVar1 = (float *)(*(int *)(this + 0x40) + *(int *)(param_1 + 4) * 0xc);
  fVar2 = (*pfVar1 - *(float *)(this + 0x58f0)) * *(float *)(this + 0x58fc) +
          (pfVar1[1] - *(float *)(this + 0x58f4)) * *(float *)(this + 0x5900) +
          (pfVar1[2] - *(float *)(this + 0x58f8)) * *(float *)(this + 0x5904);
  if ((ABS(fVar2) <= ___real_3a83126f) || (pcVar5 = param_2, ___real_00000000 < fVar2)) {
    pcVar5 = param_1;
    param_1 = param_2;
  }
  iVar6 = 0;
  if (0 < *(int *)(this + 0x5894)) {
    psVar3 = this + 0x54b0;
    do {
      if ((*(int *)(psVar3 + -4) == *(int *)(pcVar5 + 0x20)) &&
         (*(int *)psVar3 == *(int *)(param_1 + 0x20))) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      psVar3 = psVar3 + 0x14;
    } while (iVar6 < *(int *)(this + 0x5894));
  }
  *(undefined4 *)(this + iVar6 * 0x14 + 0x54ac) = *(undefined4 *)(pcVar5 + 0x20);
  *(undefined4 *)(this + (iVar6 * 5 + 0x152c) * 4) = *(undefined4 *)(param_1 + 0x20);
  pvVar4 = apCalloc(*(uint *)(*(int *)(this + 0x5908) + 0x10),4);
  *(void **)(this + iVar6 * 0x14 + 0x54b8) = pvVar4;
  *(undefined4 *)(this + iVar6 * 0x14 + 0x54b4) = 0;
  *(undefined4 *)(this + iVar6 * 0x14 + 0x54bc) = 0xffffffff;
  *(int *)(this + 0x5894) = *(int *)(this + 0x5894) + 1;
  return iVar6;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:shatter.cpp
   addr: 0050D9B0 */

int __thiscall
shtQUALIFY_PLANE::ProcessEdge(shtQUALIFY_PLANE *this,cgmWED_NODE *param_1,cgmWED_EDGE *param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  cgmWED_NODE *pcVar4;
  int iVar5;
  
  pcVar4 = cgmWED_NODE::IncidentNode(param_1,param_2);
  iVar2 = *(int *)(this + 0x1c);
  pfVar1 = (float *)(*(int *)(iVar2 + 0x40) + *(int *)(param_1 + 4) * 0xc);
  fVar3 = (*pfVar1 - *(float *)(iVar2 + 0x58f0)) * *(float *)(iVar2 + 0x58fc) +
          (pfVar1[1] - *(float *)(iVar2 + 0x58f4)) * *(float *)(iVar2 + 0x5900) +
          (pfVar1[2] - *(float *)(iVar2 + 0x58f8)) * *(float *)(iVar2 + 0x5904);
  if ((ABS(fVar3) <= ___real_3a83126f) || (___real_00000000 < fVar3)) {
    iVar5 = 1;
  }
  else {
    iVar5 = -1;
  }
  pfVar1 = (float *)(*(int *)(iVar2 + 0x40) + *(int *)(pcVar4 + 4) * 0xc);
  fVar3 = (*pfVar1 - *(float *)(iVar2 + 0x58f0)) * *(float *)(iVar2 + 0x58fc) +
          (pfVar1[1] - *(float *)(iVar2 + 0x58f4)) * *(float *)(iVar2 + 0x5900) +
          (pfVar1[2] - *(float *)(iVar2 + 0x58f8)) * *(float *)(iVar2 + 0x5904);
  if ((___real_3a83126f < ABS(fVar3)) && (fVar3 <= ___real_00000000)) {
    return (uint)(iVar5 < 0);
  }
  return (uint)(0 < iVar5);
}




/* from: gs:shatter.cpp
   addr: 0050DB20 */

void __thiscall shtSPLIT::InitAllDynArr(shtSPLIT *this)

{
  ushort uVar1;
  ushort *puVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  shtSPLIT *this_00;
  int iVar6;
  
  puVar2 = *(ushort **)(*(int *)(*(int *)this + 0x28) + 0x18);
  uVar4 = (uint)*puVar2;
  dsDYN_ARRAY::Init((dsDYN_ARRAY *)(this + 0x90),0x70,0x1e,(void **)(puVar2 + 1),uVar4,uVar4);
  iVar5 = *(int *)(*(int *)this + 0x10);
  ppvVar3 = *(void ***)(*(int *)this + 0x28);
  dsDYN_ARRAY::Init((dsDYN_ARRAY *)(this + 4),(uint)*(byte *)(ppvVar3 + 1),0x1e,ppvVar3,iVar5,iVar5)
  ;
  iVar5 = *(int *)(*(int *)this + 0x14);
  dsDYN_ARRAY::Init((dsDYN_ARRAY *)(this + 0x20),0xc,0x5a,
                    (void **)(*(int *)(*(int *)this + 0x28) + 0x40),iVar5,iVar5);
  iVar5 = 0xc;
  iVar6 = 6;
  this_00 = this + 0x3c;
  do {
    uVar1 = *(ushort *)(iVar6 + *(int *)(*(int *)this + 0x28));
    if (uVar1 != 0) {
      dsDYN_ARRAY::Init((dsDYN_ARRAY *)this_00,8,0x5a,
                        (void **)(iVar5 + *(int *)(*(int *)this + 0x28)),(uint)uVar1,(uint)uVar1);
    }
    iVar6 = iVar6 + 2;
    iVar5 = iVar5 + 4;
    this_00 = (shtSPLIT *)((dsDYN_ARRAY *)this_00 + 0x1c);
  } while (iVar6 < 0xc);
  return;
}




/* from: gs:shatter.cpp
   addr: 0050DBD0 */

int __thiscall
shtSPLIT::AddFace(shtSPLIT *this,m3dPOLY *param_1,m3dMATR *param_2,m3dVTX *param_3,int *param_4,
                 objOBJ *param_5,int param_6,int *param_7)

{
  int iVar1;
  float *pfVar2;
  m3dVTX *pmVar3;
  short *psVar4;
  float fVar5;
  float fVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  shtSPLIT *this_00;
  float *pfVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_14;
  m3dPOLY *local_10;
  int *local_c;
  int local_8;
  
  iVar8 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(this + 4),1);
  if (iVar8 == 0) {
    return 0;
  }
  *(int *)(*(int *)this + 0x10) = *(int *)(*(int *)this + 0x10) + 1;
  piVar14 = *(int **)(*(int *)this + 0x28);
  piVar13 = (int *)((uint)*(byte *)(piVar14 + 1) * (*(int *)(*(int *)this + 0x10) + -1) + *piVar14);
  local_8 = 0;
  *(short *)piVar13 = *(short *)piVar14[6] + -1;
  local_14 = 0;
  local_10 = param_1 + 4;
  local_c = param_7;
  param_7 = piVar13;
  do {
    param_7 = (int *)((int)param_7 + 2);
    if (*local_c < 0) {
      iVar8 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)(this + 0x20),1);
      if (iVar8 == 0) {
        return 0;
      }
      *(undefined2 *)param_7 = *(undefined2 *)(*(int *)this + 0x14);
      pfVar2 = (float *)(*(int *)(*(int *)(*(int *)this + 0x28) + 0x40) +
                        *(int *)(*(int *)this + 0x14) * 0xc);
      if (m3dSimdType == 0) {
        if (((uint)param_2 & 0xf) == 0) {
          fVar25 = *(float *)local_10;
          fVar5 = *(float *)(local_10 + 4);
          fVar6 = *(float *)(local_10 + 8);
          fVar23 = fVar25 * *(float *)param_2 + *(float *)(param_2 + 0x30) +
                   fVar5 * *(float *)(param_2 + 0x10) + fVar6 * *(float *)(param_2 + 0x20);
          fVar24 = fVar25 * *(float *)(param_2 + 4) + *(float *)(param_2 + 0x34) +
                   fVar5 * *(float *)(param_2 + 0x14) + fVar6 * *(float *)(param_2 + 0x24);
          fVar25 = fVar25 * *(float *)(param_2 + 8) + *(float *)(param_2 + 0x38) +
                   fVar5 * *(float *)(param_2 + 0x18) + fVar6 * *(float *)(param_2 + 0x28);
        }
        else {
          fVar25 = *(float *)local_10;
          fVar5 = *(float *)(local_10 + 4);
          fVar6 = *(float *)(local_10 + 8);
          fVar23 = fVar25 * (float)*(undefined8 *)param_2 +
                   fVar5 * (float)*(undefined8 *)(param_2 + 0x10) +
                   fVar6 * (float)*(undefined8 *)(param_2 + 0x20) +
                   (float)*(undefined8 *)(param_2 + 0x30);
          fVar24 = fVar25 * (float)((ulonglong)*(undefined8 *)param_2 >> 0x20) +
                   fVar5 * (float)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                   fVar6 * (float)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
          fVar25 = fVar25 * (float)*(undefined8 *)(param_2 + 8) +
                   fVar5 * (float)*(undefined8 *)(param_2 + 0x18) +
                   fVar6 * (float)*(undefined8 *)(param_2 + 0x28) +
                   (float)*(undefined8 *)(param_2 + 0x38);
        }
        *(ulonglong *)pfVar2 = CONCAT44(fVar24,fVar23);
        pfVar2[2] = fVar25;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar15 = (undefined4)*(undefined8 *)local_10;
        uVar18 = CONCAT44(uVar15,uVar15);
        uVar15 = (undefined4)((ulonglong)*(undefined8 *)local_10 >> 0x20);
        uVar21 = CONCAT44(uVar15,uVar15);
        uVar22 = CONCAT44(*(float *)(local_10 + 8),*(float *)(local_10 + 8));
        uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)param_2);
        uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(param_2 + 0x10));
        uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_2 + 0x20));
        uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(param_2 + 0x30));
        uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_2 + 8));
        uVar18 = PackedFloatingADD(uVar17,uVar19);
        uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(param_2 + 0x18));
        uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_2 + 0x28));
        uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(param_2 + 0x38));
        uVar18 = PackedFloatingADD(uVar16,uVar18);
        uVar16 = PackedFloatingADD(uVar17,uVar22);
        *(undefined8 *)pfVar2 = uVar18;
        uVar18 = PackedFloatingADD(uVar21,uVar16);
        pfVar2[2] = (float)uVar18;
        FastExitMediaState();
      }
      else {
        iVar8 = 0;
        pfVar10 = pfVar2;
        do {
          iVar9 = 0;
          *pfVar10 = 0.0;
          pfVar11 = (float *)(((int)param_2 - (int)pfVar2) + (int)pfVar10);
          do {
            iVar1 = iVar9 * 4;
            fVar25 = *pfVar11;
            iVar9 = iVar9 + 1;
            pfVar11 = pfVar11 + 4;
            *pfVar10 = *(float *)(local_10 + iVar1) * fVar25 + *pfVar10;
          } while (iVar9 < 3);
          iVar9 = iVar8 + iVar9 * 4;
          iVar8 = iVar8 + 1;
          *pfVar10 = *(float *)(param_2 + iVar9 * 4) + *pfVar10;
          pfVar10 = pfVar10 + 1;
        } while (iVar8 < 3);
      }
      this_00 = this + 0x3c;
      param_1 = (m3dPOLY *)0x0;
      *(int *)(*(int *)this + 0x14) = *(int *)(*(int *)this + 0x14) + 1;
      iVar8 = 6;
      piVar14 = param_4;
      do {
        if (-1 < *piVar14) {
          iVar9 = dsDYN_ARRAY::AddEntry((dsDYN_ARRAY *)this_00,1);
          if (iVar9 == 0) {
            return 0;
          }
          *(undefined2 *)((int)piVar13 + (local_8 + *piVar14 * 3) * 2 + 8) =
               *(undefined2 *)(iVar8 + *(int *)(*(int *)this + 0x28));
          pmVar3 = param_3 + (int)(param_1 + local_14) * 8;
          uVar12 = (uint)*(ushort *)(iVar8 + *(int *)(*(int *)this + 0x28));
          iVar9 = *(int *)((int)piVar14 + *(int *)(*(int *)this + 0x28) + (0xc - (int)param_4));
          *(undefined4 *)(iVar9 + uVar12 * 8) = *(undefined4 *)pmVar3;
          *(undefined4 *)(iVar9 + 4 + uVar12 * 8) = *(undefined4 *)(pmVar3 + 4);
          _m3dCheckValid(pmVar3);
          psVar4 = (short *)(*(int *)(*(int *)this + 0x28) + iVar8);
          *psVar4 = *psVar4 + 1;
        }
        iVar8 = iVar8 + 2;
        param_1 = param_1 + 1;
        this_00 = (shtSPLIT *)((dsDYN_ARRAY *)this_00 + 0x1c);
        piVar14 = piVar14 + 1;
      } while (iVar8 < 0xc);
    }
    else {
      iVar8 = 0;
      *(undefined2 *)param_7 =
           *(undefined2 *)
            ((uint)*(byte *)(*(int **)(param_5 + 0x28) + 1) * param_6 + 2 + *local_c * 2 +
            **(int **)(param_5 + 0x28));
      do {
        if (-1 < param_4[iVar8]) {
          iVar9 = objFACE::GetTCInd((objFACE *)
                                    ((uint)*(byte *)(*(int **)(param_5 + 0x28) + 1) * param_6 +
                                    **(int **)(param_5 + 0x28)),*local_c,iVar8);
          *(short *)((int)piVar13 + (local_8 + param_4[iVar8] * 3) * 2 + 8) = (short)iVar9;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
    }
    local_c = local_c + 1;
    local_8 = local_8 + 1;
    local_14 = local_14 + 3;
    local_10 = local_10 + 0xc;
  } while (local_14 < 9);
  puVar7 = *(ushort **)(*(int *)(*(int *)this + 0x28) + 0x18);
  psVar4 = (short *)((uint)*puVar7 * 0x70 + -6 + *(int *)(puVar7 + 1));
  *psVar4 = *psVar4 + 1;
  return 1;
}




/* from: gs:shatter.cpp
   addr: 0050DF80 */

int __thiscall objFACE::GetTCInd(objFACE *this,int param_1,int param_2)

{
  return (uint)*(ushort *)(this + param_1 * 2 + param_2 * 6 + 8);
}




/* from: gs:shatter.cpp
   addr: 0050DFA0 */

entENTITY * __fastcall shtVIS::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x153);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}

