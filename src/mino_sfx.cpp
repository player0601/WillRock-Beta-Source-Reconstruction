
/* from: mino_sfx.cpp
   addr: 0045B6C0 */

int __fastcall minoSFXInit(void)

{
  undefined **ppuVar1;
  char local_40 [64];
  
  ppuVar1 = &_aiMinoTexBaseList;
  do {
    sprintf(local_40,s__s_s,*ppuVar1,s__red);
    txmMANAGER::Add(txmManager,local_40,0x40000,1);
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x5f1a68);
  ppuVar1 = &_aiMinoTexBaseList;
  do {
    sprintf(local_40,s__s_s,*ppuVar1,s__chunk);
    txmMANAGER::Add(txmManager,local_40,0x40000,1);
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x5f1a68);
  ppuVar1 = &_aiMinoTexBaseList;
  do {
    sprintf(local_40,s__s_s,*ppuVar1,s_Ston);
    txmMANAGER::Add(txmManager,local_40,0x40000,1);
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x5f1a68);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: mino_sfx.cpp
   addr: 0045B7A0 */

int __thiscall aiMINO::InitSFX(aiMINO *this)

{
  float fVar1;
  pteTEX2 *ppVar2;
  pteSHADER *ppVar3;
  m3dSPL *this_00;
  undefined4 *puVar4;
  entENTITY *peVar5;
  objOBJ *poVar6;
  objMOD_TEX_FRAME_ANIM *poVar7;
  uint uVar8;
  char local_80 [64];
  char local_40 [64];
  
  aiNPC_WR::InitSFX((aiNPC_WR *)this);
  if ((((byte)this[0xb4] & 1) != 0) && ((char)this[0x53f] < '\0')) {
    objOBJ::ReplaceTexList(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),&_aiMinoTexBaseList,4,s__red);
    ppVar2 = (pteTEX2 *)operator_new(0x1e4);
    if (ppVar2 == (pteTEX2 *)0x0) {
      ppVar3 = (pteSHADER *)0x0;
    }
    else {
      ppVar3 = (pteSHADER *)pteTEX2::pteTEX2(ppVar2);
    }
    *(pteSHADER **)(this + 0x563) = ppVar3;
    pteSHADER::SetInstCreate(ppVar3,*(animINST **)(this + 0xbc));
    pteSHADER::Register(*(pteSHADER **)(this + 0x563));
    uVar8 = 0;
    do {
      sprintf(local_80,s__s_chunk,*(undefined4 *)((int)&_aiMinoTexBaseList + uVar8));
      sprintf(local_40,s__s_red,*(undefined4 *)((int)&_aiMinoTexBaseList + uVar8));
      pteTEX2::AddTexReplace(*(pteTEX2 **)(this + 0x563),local_40,local_80);
      uVar8 = uVar8 + 4;
    } while (uVar8 < 0x10);
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
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,1.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.65,1.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.85,0.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,3,1.0,0.0);
    fVar1 = *(float *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90) + 0x628) *
            *(float *)(this + 0x547) * ___real_3a83126f;
    puVar4 = (undefined4 *)operator_new(0x20);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      fVar1 = fVar1 + ___real_3f800000;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[4] = 0x3f800000;
      puVar4[5] = 0;
      *puVar4 = &m3dCTRL_TIME::_vftable_;
      puVar4[3] = fVar1;
      puVar4[1] = puVar4[1] | 1;
      puVar4[6] = 0;
      puVar4[7] = this_00;
      *puVar4 = &m3dCTRL_1D_SPL::_vftable_;
    }
    puVar4[1] = puVar4[1] | 6;
    *(undefined4 **)(*(int *)(this + 0x563) + 0x9c) = puVar4;
  }
  if ((char)((uint)*(undefined4 *)(this + 0x53f) >> 8) < '\0') {
    objOBJ::ReplaceTexList(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),&_aiMinoTexBaseList,4,s__red);
  }
  peVar5 = entCreate(gsScenePtr,s_dynamic,s_sfx_ax_appear,(animCREATE_DATA *)0x0,(void *)0x0,0);
  *(entENTITY **)(this + 0x54f) = peVar5;
  if (peVar5 == (entENTITY *)0x0) {
    return 0;
  }
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(peVar5 + 0xbc) + 0x10),0x10);
  *(uint *)(*(int *)(*(int *)(this + 0x54f) + 0xbc) + 4) =
       *(uint *)(*(int *)(*(int *)(this + 0x54f) + 0xbc) + 4) | 0x11;
  animINST::Scale(*(animINST **)(*(int *)(this + 0x54f) + 0xbc),10.0,10.0,10.0,2);
  poVar6 = objFindName(*(objOBJ **)(*(int *)(*(int *)(this + 0x54f) + 0xbc) + 0x10),
                       s__ds_pPlane1__nf);
  poVar7 = (objMOD_TEX_FRAME_ANIM *)operator_new(0x4c);
  if (poVar7 == (objMOD_TEX_FRAME_ANIM *)0x0) {
    poVar7 = (objMOD_TEX_FRAME_ANIM *)0x0;
  }
  else {
    poVar7 = (objMOD_TEX_FRAME_ANIM *)objMOD_TEX_FRAME_ANIM::objMOD_TEX_FRAME_ANIM(poVar7,0);
  }
  *(objMOD_TEX_FRAME_ANIM **)(this + 0x553) = poVar7;
  objMOD_TEX_FRAME_ANIM::SetParams(poVar7,4,8,0.8,0.0,0x1c,-1.0,-1.0,0);
  (**(code **)(**(int **)(this + 0x553) + 4))(poVar6);
  poVar6 = objFindName(*(objOBJ **)(*(int *)(*(int *)(this + 0x54f) + 0xbc) + 0x10),
                       s__ds_pPlane2__nf);
  poVar7 = (objMOD_TEX_FRAME_ANIM *)operator_new(0x4c);
  if (poVar7 == (objMOD_TEX_FRAME_ANIM *)0x0) {
    poVar7 = (objMOD_TEX_FRAME_ANIM *)0x0;
  }
  else {
    poVar7 = (objMOD_TEX_FRAME_ANIM *)objMOD_TEX_FRAME_ANIM::objMOD_TEX_FRAME_ANIM(poVar7,0);
  }
  *(objMOD_TEX_FRAME_ANIM **)(this + 0x557) = poVar7;
  objMOD_TEX_FRAME_ANIM::SetParams(poVar7,4,8,0.8,0.0,0x1c,-1.0,-1.0,0);
  (**(code **)(**(int **)(this + 0x557) + 4))(poVar6);
  *(undefined4 *)(this + 0x55b) = 0;
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
  if (((byte)this[0x53f] & 0x20) != 0) {
    ppVar2 = (pteTEX2 *)operator_new(0x1e4);
    if (ppVar2 == (pteTEX2 *)0x0) {
      ppVar3 = (pteSHADER *)0x0;
    }
    else {
      ppVar3 = (pteSHADER *)pteTEX2::pteTEX2(ppVar2);
    }
    *(pteSHADER **)(this + 0x55f) = ppVar3;
    pteSHADER::SetInstCreate(ppVar3,*(animINST **)(this + 0xbc));
    pteSHADER::Register(*(pteSHADER **)(this + 0x55f));
    pteTEX2::SetupTexList(*(pteTEX2 **)(this + 0x55f),&_aiMinoTexBaseList,4,s_Ston);
    pteTEX2::SetBlendCoeff(*(pteTEX2 **)(this + 0x55f),1.0);
  }
  return 1;
}




/* from: mino_sfx.cpp
   addr: 0045BB80 */

void __thiscall aiMINO::TermSFX(aiMINO *this)

{
  if (*(undefined4 **)(this + 0x563) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x563))(1);
  }
  *(undefined4 *)(this + 0x563) = 0;
  m3dTerm2DMatr();
  if (*(msgADDR **)(this + 0x54f) != (msgADDR *)0x0) {
    msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x54f),2,(msgADDR *)this);
    *(undefined4 *)(this + 0x54f) = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: mino_sfx.cpp
   addr: 0045BBD0 */

void __thiscall aiMINO::UpdateSFX(aiMINO *this)

{
  uint *puVar1;
  objMOD_TEX_FRAME_ANIM *poVar2;
  pteTEX2 *this_00;
  undefined4 *puVar3;
  int iVar4;
  objOBJ *poVar5;
  float extraout_EDX;
  
  iVar4 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),3,1);
  if ((iVar4 != 0) && ((*(uint *)(this + 1099) & 0x200000) == 0)) {
    if (*(int *)(this + 0x54f) != 0) {
      iVar4 = *(int *)(*(int *)(this + 0x54f) + 0xbc);
      *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) & 0xfffffffe;
      poVar2 = *(objMOD_TEX_FRAME_ANIM **)(this + 0x553);
      *(undefined4 *)(poVar2 + 0x3c) = 0;
      *(undefined4 *)(poVar2 + 0x48) = 0;
      objMOD_TEX_FRAME_ANIM::ApplyFrameNmb(poVar2,0);
      poVar2 = *(objMOD_TEX_FRAME_ANIM **)(this + 0x557);
      *(undefined4 *)(poVar2 + 0x3c) = 0;
      *(undefined4 *)(poVar2 + 0x48) = 0;
      objMOD_TEX_FRAME_ANIM::ApplyFrameNmb(poVar2,0);
    }
    *(undefined4 *)(this + 0x55b) = 0x3f4ccccd;
    (**(code **)(**(int **)(this + 0x54b) + 4))(&DAT_0060c538,0);
  }
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_SEKIRA);
  animINST::Transform(*(animINST **)(*(int *)(this + 0x54f) + 0xbc),(m3dMATR *)(poVar5 + 0x3c),0);
  iVar4 = m3dUpdateTimeField((float *)(this + 0x55b),extraout_EDX);
  if (iVar4 != 0) {
    puVar1 = (uint *)(*(int *)(*(int *)(this + 0x54f) + 0xbc) + 4);
    *puVar1 = *puVar1 | 1;
  }
  if ((*(uint *)(this + 1099) & 0x800000) != 0) {
    *(uint *)(*(int *)(*(int *)(this + 0x54f) + 0xbc) + 4) =
         *(uint *)(*(int *)(*(int *)(this + 0x54f) + 0xbc) + 4) | 1;
    *(float *)(this + 0x55b) = 0.0;
  }
  this_00 = *(pteTEX2 **)(this + 0x55f);
  if (this_00 != (pteTEX2 *)0x0) {
    iVar4 = *(int *)(this + 0xbc);
    if (*(int *)(*(int *)(iVar4 + 0xe8) + 0x20) == 10) {
      pteTEX2::SetBlendCoeff
                (this_00,___real_3f800000 -
                         *(float *)(iVar4 + 0x24) /
                         (*(float *)(*(int *)(*(int *)(iVar4 + 0x138) + 0x90) + 0x5a0) *
                         ___real_3a83126f));
    }
    else {
      (**(code **)(*(int *)this_00 + 4))(0);
    }
  }
  if ((*(int *)(*(int *)(this + 0xbc) + 0xe0) != 0xb) &&
     (puVar3 = *(undefined4 **)(this + 0x563), puVar3 != (undefined4 *)0x0)) {
    if ((*(byte *)(puVar3 + 1) & 1) != 0) {
      *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x1000;
    }
    if (((puVar3 != (undefined4 *)0x0) && ((*(byte *)(puVar3 + 1) & 1) == 0)) &&
       ((*(uint *)(this + 0x53f) & 0x1000) != 0)) {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(this + 0x563) = 0;
    }
  }
  return;
}




/* from: mino_sfx.cpp
   addr: 0045BD70 */

void __fastcall aiMINO::ChunkCreateNotify(wrsfxCHUNK *param_1)

{
  objOBJ::ReplaceTexList
            (*(objOBJ **)(*(int *)(param_1 + 0xbc) + 0x10),&_aiMinoTexBaseList,4,s__chunk);
  return;
}

