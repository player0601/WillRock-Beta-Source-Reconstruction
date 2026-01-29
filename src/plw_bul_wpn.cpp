/* from: plw_bul_wpn.cpp
   addr: 004097D0 */

int __fastcall pwpBulWpnInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_mcg_hit,0x504d4347,0x2d,pwpMCG_HIT::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  pwpMCG_PARTS::pTexPart = txmMANAGER::Add(txmManager,s_sfx_mcg_part,0x40003,1);
  if (pwpMCG_PARTS::pTexPart == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpMCG_SMOKE::pTexSmoke = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (pwpMCG_SMOKE::pTexSmoke == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpMCG_MUZZLE_SMOKE::pTexSmoke = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (pwpMCG_MUZZLE_SMOKE::pTexSmoke == (txmTEXTURE *)0x0) {
    return 0;
  }
  _pwpBulTexScorchMark = txmMANAGER::Add(txmManager,s_sfx_mcg_scorch_mark,0x40003,1);
  if (_pwpBulTexScorchMark == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpMCG_SHELL::pTexShell = txmMANAGER::Add(txmManager,s_sfx_mcg_shell_2x2,0x40003,1);
  if (pwpMCG_SHELL::pTexShell == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(5,(sncSOUND_DESCR_3D *)&DAT_006021b0);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 004098B0 */

entENTITY * __fastcall pwpMCG_HIT::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x177);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = _m3dVZero;
    *(undefined4 *)(this + 0x167) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x16b) = uVar1;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: plw_bul_wpn.cpp
   addr: 00409930 */

void * __thiscall pwpMCG_HIT::_scalar_deleting_destructor_(pwpMCG_HIT *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_bul_wpn.cpp
   addr: 00409960 */

pwpBULLET_WPN * __thiscall pwpBULLET_WPN::pwpBULLET_WPN(pwpBULLET_WPN *this)

{
  wpnWEAPON::wpnWEAPON((wpnWEAPON *)this);
  *(undefined4 *)(this + 0x183) = 0;
  *(undefined4 *)(this + 0x187) = 0;
  *(undefined4 *)(this + 0x1a7) = 0x3f800000;
  *(undefined4 *)(this + 0x1af) = 0;
  *(undefined4 *)(this + 0x1b3) = 0;
  *(undefined4 *)(this + 0x1b7) = 0;
  *(undefined4 *)(this + 0x1bf) = 0x3f800000;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x1bb) = 0;
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
  return this;
}




/* from: plw_bul_wpn.cpp
   addr: 004099C0 */

int __thiscall pwpBULLET_WPN::ProcessINIT(pwpBULLET_WPN *this)

{
  int iVar1;
  
  iVar1 = pwpWEAPON::ProcessINIT((pwpWEAPON *)this);
  if (iVar1 == 0) {
    return 0;
  }
  objOBJ::AllocVertNormalList(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10));
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 004099F0 */

int __thiscall pwpBULLET_WPN::CreateFlare(pwpBULLET_WPN *this,float param_1)

{
  bool bVar1;
  entENTITY *peVar2;
  
  peVar2 = entCreate(gsScenePtr,s_dynamic,s_sfx_mcg_flare,(animCREATE_DATA *)0x0,(void *)0x0,0);
  *(entENTITY **)(this + 0x1af) = peVar2;
  if (peVar2 == (entENTITY *)0x0) {
    return 0;
  }
  objOBJ::SetStateRendYes(*(objOBJ **)(*(int *)(peVar2 + 0xbc) + 0x10),0x1000000);
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(*(int *)(this + 0x1af) + 0xbc) + 0x10),0x10);
  *(uint *)(*(int *)(*(int *)(this + 0x1af) + 0xbc) + 4) =
       *(uint *)(*(int *)(*(int *)(this + 0x1af) + 0xbc) + 4) | 0x10;
  dynDYNAMIC::StartAnim
            (*(dynDYNAMIC **)(this + 0x1af),0,
             *(float *)(*(int *)(*(int *)(*(int *)(*(dynDYNAMIC **)(this + 0x1af) + 0xbc) + 0x138) +
                                0x90) + 0x50) * ___real_3a83126f,0);
  bVar1 = param_1 != ___real_3f800000;
  *(uint *)(*(int *)(this + 0x1af) + 0xb4) = *(uint *)(*(int *)(this + 0x1af) + 0xb4) | 4;
  if (bVar1) {
    animINST::Scale(*(animINST **)(*(int *)(this + 0x1af) + 0xbc),param_1,param_1,param_1,0);
  }
  return 1;
}




/* from: plw_bul_wpn.cpp
   addr: 00409AE0 */

int __thiscall pwpBULLET_WPN::CreateSmoke(pwpBULLET_WPN *this,float param_1)

{
  pwpMCG_MUZZLE_SMOKE *this_00;
  int iVar1;
  
  this_00 = (pwpMCG_MUZZLE_SMOKE *)operator_new(0x2c0);
  if (this_00 != (pwpMCG_MUZZLE_SMOKE *)0x0) {
    iVar1 = pwpMCG_MUZZLE_SMOKE::pwpMCG_MUZZLE_SMOKE(this_00,param_1);
    *(int *)(this + 0x1b3) = iVar1;
    return (uint)(iVar1 != 0);
  }
  *(undefined4 *)(this + 0x1b3) = 0;
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 00409B40 */

int __thiscall
pwpBULLET_WPN::CreateShell(pwpBULLET_WPN *this,float param_1,float param_2,m3dSPL_LINEAR1D *param_3)

{
  undefined4 uVar1;
  sncCHANNEL *this_00;
  pwpMCG_SHELL *this_01;
  sncSOUND_DESCR_3D *psVar2;
  int iVar3;
  pwpBULLET_WPN *local_4;
  
  local_4 = this + 0x1bb;
  iVar3 = 0;
  while( true ) {
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
    if (this_00 == (sncCHANNEL *)0x0) break;
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
    iVar3 = iVar3 + 1;
    local_4 = local_4 + 4;
    if (0 < iVar3) {
      this_01 = (pwpMCG_SHELL *)operator_new(0x2c8);
      if (this_01 == (pwpMCG_SHELL *)0x0) {
        iVar3 = 0;
      }
      else {
        psVar2 = (sncSOUND_DESCR_3D *)(**(code **)(*(int *)this + 200))();
        iVar3 = pwpMCG_SHELL::pwpMCG_SHELL
                          (this_01,(sncCHANNEL **)(this + 0x1bb),psVar2,param_1,param_2,param_3);
      }
      *(int *)(this + 0x1b7) = iVar3;
      return (uint)(iVar3 != 0);
    }
  }
  return 0;
}




/* from: plw_bul_wpn.cpp
   addr: 00409CC0 */

void __thiscall pwpBULLET_WPN::ProcessFRAME(pwpBULLET_WPN *this)

{
  m3dV local_c [12];
  
  pwpWEAPON::ProcessFRAME((pwpWEAPON *)this);
  if (((byte)(*(animINST **)(this + 0xbc))[4] & 1) == 0) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    wpnWEAPON::GetOrgDirTip((wpnWEAPON *)this,local_c,(m3dV *)0x0);
    if (*(int *)(this + 0x1af) != 0) {
      animINST::SetPos(*(animINST **)(*(int *)(this + 0x1af) + 0xbc),local_c);
    }
    if (*(partEMITTER_PHYS **)(this + 0x1b3) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x1b3),local_c,&m3dVUnitY,(m3dV *)0x0);
    }
  }
  return;
}




/* from: plw_bul_wpn.cpp
   addr: 00409D30 */

void __thiscall pwpBULLET_WPN::ProcessTERM(pwpBULLET_WPN *this)

{
  int iVar1;
  
  m3dTerm2DMatr();
  if (*(undefined4 **)(this + 0x1b3) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x1b3))(1);
  }
  if (*(undefined4 **)(this + 0x1b7) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x1b7))(1);
  }
  iVar1 = *(int *)(this + 0x1af);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & 0xfffffffb;
    msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x1af),2,(msgADDR *)0x0);
  }
  return;
}




/* from: plw_bul_wpn.cpp
   addr: 00409D90 */

int __thiscall
pwpBULLET_WPN::PrepareShootMsg(pwpBULLET_WPN *this,pwpMCG_SHOOT *param_1,cdtINFO *param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 4) + 0x13c);
    if (iVar2 == 0) {
      return iVar2;
    }
    if (*(int *)(iVar2 + 0x20) != 0x454e5424) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x8c);
  }
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 8);
  if (((byte)*param_2 & 2) == 0) {
    *(undefined4 *)(param_1 + 0x3e) = 3;
    return 1;
  }
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x3e) = 1;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_2 + 4) + 0x13c);
    if ((*(byte *)(piVar1 + 0x2e) & 1) == 0) {
      if (piVar1[5] == 0x244e5043) {
        iVar2 = (**(code **)(*piVar1 + 0x1bc))();
        bVar4 = iVar2 == 0;
      }
      else {
        bVar4 = piVar1[5] == 0x504c5952;
      }
      if (bVar4) {
        *(undefined4 *)(param_1 + 0x3e) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x3e) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x3e) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_2 + 0x18);
  scnSCENE::GetCDTFace(gsScenePtr,param_2,(m3dPOLY *)0x0,(m3dV *)(param_1 + 0x4e));
  uVar3 = gsEffEnvirColor(param_2,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
  *(ulong *)(param_1 + 0x5a) = uVar3;
  return 1;
}




/* from: plw_bul_wpn.cpp
   addr: 00409EB0 */

int __thiscall pwpBULLET_WPN::Shoot(pwpBULLET_WPN *this,entENTITY *param_1,m3dV *param_2)

{
  pwpMCG_SHOOT *ppVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float unaff_EBP;
  cdtINFO *pcVar8;
  float unaff_ESI;
  undefined4 *puVar9;
  uint *puVar10;
  float unaff_EDI;
  float *pfVar11;
  float10 fVar12;
  float fStack_5b0;
  float fStack_5ac;
  cdtINFO acStack_5a8 [16];
  byte abStack_598 [8];
  float local_590 [4];
  pwpBULLET_WPN *local_580;
  float local_57c;
  float local_578;
  float local_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  pwpBULLET_WPN *local_568;
  undefined **ppuStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  cdtINFO acStack_554 [16];
  undefined1 auStack_544 [8];
  float local_53c [76];
  undefined4 auStack_40c [3];
  uint auStack_400 [13];
  undefined4 local_3cc [239];
  undefined4 *puStack_10;
  
  local_580 = _m3dVZero;
  local_57c = DAT_00963740;
  local_578 = DAT_00963744;
  local_590[0] = 0.0;
  local_590[1] = 0.0;
  local_590[2] = 0.0;
  local_590[3] = 0.0;
  local_574 = 0.0;
  iVar6 = 10;
  pfVar3 = local_53c + 2;
  do {
    pfVar3[-2] = 0.0;
    pfVar3[-1] = 0.0;
    *pfVar3 = 0.0;
    pfVar3[1] = 0.0;
    iVar6 = iVar6 + -1;
    pfVar3[2] = (float)_m3dVZero;
    pfVar3[3] = DAT_00963740;
    pfVar3[5] = 0.0;
    pfVar3[4] = DAT_00963744;
    pfVar3 = pfVar3 + 8;
  } while (iVar6 != 0);
  puVar9 = local_3cc;
  iVar6 = 10;
  local_568 = this;
  do {
    msgDATA::msgDATA((msgDATA *)(puVar9 + -0xc));
    *(undefined2 *)((int)puVar9 + -0x2e) = 0x14;
    puVar9[-7] = 3;
    *puVar9 = 0xffffffff;
    *(undefined2 *)(puVar9 + 1) = 0xffff;
    pwpEV_CDT_MCG::pwpEV_CDT_MCG((pwpEV_CDT_MCG *)((int)puVar9 + 6));
    puVar9[-0xb] = 0xffffffff;
    *(undefined2 *)((int)puVar9 + -0x2e) = 0x66;
    puVar9 = (undefined4 *)((int)puVar9 + 0x66);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = *(int *)this;
  pfVar3 = DAT_009483ac;
  pfVar11 = local_590;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar11 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar11 = pfVar11 + 1;
  }
  (**(code **)(iVar6 + 0xe8))(local_590,param_2);
  iVar6 = wpnWEAPON::Shoot((wpnWEAPON *)this,*(entENTITY **)(this + 0x187),param_2);
  if (iVar6 != 0) {
    wpnWEAPON::GetOrgDirTip((wpnWEAPON *)this,(m3dV *)&fStack_5b0,(m3dV *)&uStack_560);
    if ((abStack_598[0] & 2) == 0) {
      local_590[2] = *(float *)param_2;
      local_590[3] = *(float *)(param_2 + 4);
      local_580 = *(pwpBULLET_WPN **)(param_2 + 8);
    }
    uVar4 = (**(code **)(*(int *)this + 0xec))(&fStack_5b0,abStack_598,auStack_544,10);
    if (10 < uVar4) {
      uVar4 = 10;
    }
    iVar6 = 0;
    if (0 < (int)uVar4) {
      pcVar8 = acStack_554;
      puVar9 = auStack_40c;
      do {
        puVar2 = puStack_10;
        puVar9[-1] = *(undefined4 *)(this + 0x94);
        *puVar9 = *puVar2;
        puVar9[1] = puVar2[1];
        puVar9[2] = puVar2[2];
        puVar9[4] = unaff_EDI;
        puVar9[5] = unaff_ESI;
        puVar9[6] = unaff_EBP;
        puVar9[7] = uStack_570;
        puVar9[8] = uStack_56c;
        *(undefined4 *)((int)puVar9 + 0x5a) = *(undefined4 *)(this + 0x1bf);
        puVar9[9] = local_568;
        fVar12 = (float10)(**(code **)(*(int *)this + 0xf4))();
        *(float *)((int)puVar9 + 0x56) = (float)fVar12;
        iVar7 = PrepareShootMsg(this,(pwpMCG_SHOOT *)(puVar9 + -2),pcVar8);
        if (iVar7 != 0) {
          if (0 < iVar6) {
            puVar9[3] = puVar9[3] & 0xfffffffc;
          }
          puVar9[3] = puVar9[3] & 0xfffffffb;
        }
        iVar6 = iVar6 + 1;
        pcVar8 = pcVar8 + 0x20;
        puVar9 = (undefined4 *)((int)puVar9 + 0x66);
      } while (iVar6 < (int)uVar4);
    }
    iVar6 = 0;
    uStack_55c = *(undefined4 *)(plrPlayer + 0xbc);
    uStack_560 = 0;
    uStack_558 = 1;
    ppuStack_564 = &entCDT_REFINE_EXCL::_vftable_;
    if (0 < (int)uVar4) {
      pfVar3 = local_53c;
      puVar10 = auStack_400;
      do {
        ppVar1 = (pwpMCG_SHOOT *)(puVar10 + -5);
        iVar7 = (-(uint)(*(int *)((int)puVar10 + 0x2a) == 2) & 0x10000) + 0x10000;
        (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c6,ppVar1,iVar7);
        if (*(int *)((int)puVar10 + 0x2a) == 0) {
          if (iVar6 < 1) {
            local_590[2] = DAT_00948384;
            local_590[3] = DAT_00948388;
            camCAMERA::GetViewWindowRayDir
                      (gsCameraPtr,DAT_00948384,DAT_00948388,(m3dV *)&stack0xfffffa4c);
            camCAMERA::TransformPointC2W(gsCameraPtr,&m3dVZero,(m3dV *)&local_57c);
          }
          else {
            fStack_5b0 = pfVar3[-1] - unaff_ESI;
            fStack_5ac = *pfVar3 - unaff_EBP;
            local_57c = unaff_EDI;
            local_578 = unaff_ESI;
            local_574 = unaff_EBP;
          }
          m3dNormalize((m3dV *)&stack0xfffffa4c);
          iVar5 = scnSCENE::ShootRay(gsScenePtr,(m3dV *)&local_57c,(m3dV *)&stack0xfffffa4c,200.0,0,
                                     (cdtREFINE *)&ppuStack_564,acStack_5a8);
          if ((iVar5 != 0) && (iVar5 = PrepareShootMsg(local_580,ppVar1,acStack_5a8), iVar5 != 0)) {
            *puVar10 = *puVar10 & 0xfffffffc | 4;
            (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c6,ppVar1,iVar7);
          }
        }
        iVar6 = iVar6 + 1;
        pfVar3 = pfVar3 + 8;
        puVar10 = (uint *)((int)puVar10 + 0x66);
      } while (iVar6 < (int)uVar4);
    }
    return 1;
  }
  return 0;
}




/* from: plw_bul_wpn.cpp
   addr: 0040A280 */

void __thiscall pwpBULLET_WPN::ProcessSHOOT(pwpBULLET_WPN *this,void *param_1)

{
  entIACTIVE_OBJ *peVar1;
  dmgWEAPON local_cc [12];
  undefined4 uStack_c0;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  animCREATE_DATA local_98 [152];
  
  dmgWEAPON::dmgWEAPON(local_cc);
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (((byte)this[0x88] & 4) != 0) {
    if ((*(byte *)((int)param_1 + 0x14) & 1) != 0) {
      (**(code **)(*(int *)this + 0x68))(0x3f800000);
    }
    if (*(int *)((int)param_1 + 0x30) != -1) {
      peVar1 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)((int)param_1 + 0x30),0);
      if (peVar1 != (entIACTIVE_OBJ *)0x0) {
        (**(code **)(*(int *)this + 0x78))(local_cc,(int)param_1 + 0x42);
        uStack_c0 = *(undefined4 *)(*(int *)(this + 0x187) + 0x8c);
        uStack_9c = *(undefined2 *)((int)param_1 + 0x34);
        uStack_a0 = *(undefined4 *)(peVar1 + 0xbc);
        msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)peVar1,0x4c5,local_cc,(msgADDR *)this);
      }
    }
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,*(entIACTIVE_OBJ **)(this + 0x187),0x4c6,(msgDATA *)param_1,0x90000,
               0xffffffff,0xfffffffd);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    (**(code **)(*(int *)this + 0xd0))(param_1);
  }
  if ((*(byte *)((int)param_1 + 0x14) & 2) != 0) {
    (**(code **)(*(int *)this + 0xe4))();
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 0040A380 */

void __thiscall pwpBULLET_WPN::ShowSFX(pwpBULLET_WPN *this,pwpMCG_SHOOT *param_1)

{
  partEMITTER_PHYS *this_00;
  entENTITY *peVar1;
  float extraout_ECX;
  float extraout_ECX_00;
  float10 fVar2;
  float fVar3;
  float fVar4;
  m3dV *pmVar5;
  ulong uVar6;
  int iVar7;
  sncSOUND_DESCR_3D *psVar8;
  float fVar9;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  animCREATE_DATA local_d8 [18];
  m3dMATR local_c6 [134];
  m3dMATR amStack_40 [64];
  
  animCREATE_DATA::animCREATE_DATA(local_d8);
  local_e4 = *(undefined4 *)(param_1 + 0x18);
  local_e0 = *(undefined4 *)(param_1 + 0x1c);
  local_dc = *(undefined4 *)(param_1 + 0x20);
  iVar7 = *(int *)(param_1 + 0x3e);
  if ((iVar7 == 2) || (iVar7 == 0)) {
    m3dMATR::MakeLCS2WCS_VY(local_c6,(m3dV *)(param_1 + 0x42),&m3dVUnitY);
    if (*(int *)(param_1 + 0x3e) == 0) {
      gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_00602350,(m3dV *)(param_1 + 0x42));
      entCreate(gsScenePtr,s_sfx_water_splash,s_sfx_water_splash,local_d8,(void *)0x0,0);
      goto LAB_0040a505;
    }
    if (((byte)param_1[0x14] & 2) == 0) goto LAB_0040a505;
    psVar8 = (sncSOUND_DESCR_3D *)&DAT_006022e8;
  }
  else {
    if (iVar7 != 1) goto LAB_0040a505;
    fVar3 = m3dRandMax(DAT_005cf1f4);
    fVar4 = *(float *)(param_1 + 0x5e);
    uVar6 = *(ulong *)(param_1 + 0x5a);
    fVar3 = _DAT_005cf1f0 - fVar3;
    fVar9 = 0.0;
    iVar7 = 0x50575042;
    pmVar5 = (m3dV *)0x41200000;
    fVar2 = (float10)(**(code **)(*(int *)this + 0xcc))();
    wrsfxSCORCHMARK::Add
              ((float)_pwpBulTexScorchMark,(float)(param_1 + 0x42),
               (txmTEXTURE *)(float)(fVar2 * (float10)fVar3),pmVar5,uVar6,iVar7,fVar4,fVar9);
    if (((byte)param_1[0x14] & 4) != 0) goto LAB_0040a505;
    m3dMATR::MakeLCS2WCS_VY(local_c6,(m3dV *)(param_1 + 0x42),(m3dV *)(param_1 + 0x4e));
    fVar4 = m3dRandMax(extraout_ECX);
    m3dMATR::MakeRotY(amStack_40,fVar4);
    m3dMATR::Transform(local_c6,amStack_40,1);
    fVar2 = (float10)(**(code **)(*(int *)this + 0xf4))();
    *(float *)(param_1 + 0x5e) = (float)fVar2;
    peVar1 = entCreate(gsScenePtr,s_sfx_mcg_hit,s_sfx_mcg_hit,local_d8,param_1 + 0x36,0);
    if (peVar1 == (entENTITY *)0x0) {
      return;
    }
    if (((byte)param_1[0x14] & 2) == 0) goto LAB_0040a505;
    psVar8 = (sncSOUND_DESCR_3D *)&DAT_00602280;
  }
  gsSND_SYSTEM::Play(gsSysSound,psVar8,(m3dV *)(param_1 + 0x42));
LAB_0040a505:
  if (*(int *)(this + 0x1af) != 0) {
    animINST::SetPos(*(animINST **)(*(int *)(this + 0x1af) + 0xbc),(m3dV *)&local_e4);
    iVar7 = 1;
    fVar4 = m3dRandMax(extraout_ECX_00);
    animINST::RotateY(*(animINST **)(*(int *)(this + 0x1af) + 0xbc),fVar4,iVar7);
    dynDYNAMIC::StartAnim(*(dynDYNAMIC **)(this + 0x1af),0,0.0,0);
  }
  this_00 = *(partEMITTER_PHYS **)(this + 0x1b3);
  if (this_00 != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(this_00);
    partEMITTER_PHYS::StartEmission(this_00);
  }
  return;
}




/* from: plw_bul_wpn.cpp
   addr: 0040A580 */

void __thiscall pwpBULLET_WPN::PlayShootSound(pwpBULLET_WPN *this)

{
  (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_006021b0,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 0040A5A0 */

void __thiscall pwpBULLET_WPN::StartShells(pwpBULLET_WPN *this,int param_1)

{
  objOBJ *this_00;
  int iVar1;
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
  undefined4 uStack_c;
  
  local_30 = _m3dVZero;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = DAT_00963740;
  local_28 = DAT_00963744;
  local_24 = 0;
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  if (*(int *)(this + 0x1b7) != 0) {
    this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_shell_source);
    if (this_00 != (objOBJ *)0x0) {
      objOBJ::GetOrigin(this_00,local_70);
      objOBJ::GetAxisZ(this_00,local_64);
      iVar1 = (**(code **)(**(int **)(this + 0x187) + 0x40))();
      if ((iVar1 == 0) || ((bStack_44 & 2) == 0)) {
        iVar1 = wrsfxFindFloor((m3dV *)&stack0xffffff8c,(m3dBOX *)&local_24);
        if (iVar1 == 0) {
          uStack_58 = 0xc47a0000;
          uStack_5c = _m3dVZero;
          uStack_54 = DAT_00963744;
        }
        else {
          uStack_58 = uStack_18;
          uStack_5c = local_1c;
          uStack_54 = uStack_14;
        }
      }
      else {
        uStack_58 = local_30;
        uStack_5c = local_34;
        uStack_54 = local_2c;
      }
      uStack_4c = DAT_005f9994;
      uStack_48 = DAT_005f9998;
      uStack_50 = _m3dVUnitY;
      (**(code **)(**(int **)(this + 0x1b7) + 4))(*(undefined4 *)(this + 0x9c),0,0);
      partEMITTER_PHYS::SetCDTPlane(*(partEMITTER_PHYS **)(this + 0x1b7),1,0,amStack_68);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x1b7),(m3dV *)&stack0xffffff80,
                 (m3dV *)&stack0xffffff8c,(m3dV *)(this + 0xe0));
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x1b7));
      (**(code **)(**(int **)(this + 0x1b7) + 0x10))(uStack_c,0);
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x1b7));
    }
  }
  return;
}




/* from: plw_bul_wpn.cpp
   addr: 0040A740 */

int __thiscall
pwpBULLET_WPN::FillCDTShootList
          (pwpBULLET_WPN *this,m3dV *param_1,cdtINFO *param_2,cdtINFO *param_3,int param_4)

{
  int iVar1;
  
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_3 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    param_3 = param_3 + 4;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 0040A760 */

int __thiscall
pwpBULLET_WPN::FillCDTShootListSpread
          (pwpBULLET_WPN *this,m3dV *param_1,m3dV *param_2,float param_3,float param_4,
          cdtINFO *param_5,int param_6)

{
  animINST *this_00;
  uint uVar1;
  int iVar2;
  objOBJ *this_01;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  int local_e0;
  int local_dc;
  undefined **local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  int local_b4;
  undefined **local_b0 [3];
  undefined4 local_a4;
  scnAOBJ local_a0 [160];
  
  cdtREFINE::cdtREFINE((cdtREFINE *)local_b0,0,*(animINST **)(plrPlayer + 0xbc));
  local_cc = param_3 * *(float *)param_2 + *(float *)param_1;
  local_a4 = 4;
  local_b0[0] = &plrCDT_REFINE_NPC::_vftable_;
  local_d0 = 0;
  local_d8 = &cdtREFINE::_vftable_;
  local_d4 = 2;
  local_c8 = param_3 * *(float *)(param_2 + 4) + *(float *)(param_1 + 4);
  local_c4 = param_3 * *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
  local_b4 = scnSCENE::MakeAnimList
                       (gsScenePtr,param_1,(m3dV *)&local_cc,3.0,(cdtREFINE *)local_b0,local_a0,0x14
                       );
  iVar2 = 0;
  local_e0 = 0;
  local_dc = 0;
  if (0 < local_b4) {
    do {
      if (param_6 <= iVar2) {
        return iVar2;
      }
      this_00 = *(animINST **)(local_a0 + local_dc * 8);
      if (*(int *)(*(int *)(this_00 + 0x13c) + 0x14) == 0x244e5043) {
        this_01 = objFindName(*(objOBJ **)(this_00 + 0x10),s_target);
        if (this_01 == (objOBJ *)0x0) {
          animINST::GetPos(this_00,(m3dV *)&local_ec);
          local_e8 = local_e8 + ___real_3f800000;
        }
        else {
          objValidateLTM(this_01);
          objOBJ::GetOrigin(this_01,(m3dV *)&local_ec);
        }
        local_c0 = local_ec - *(float *)param_1;
        local_bc = local_e8 - *(float *)(param_1 + 4);
        local_b8 = local_e4 - *(float *)(param_1 + 8);
        fVar8 = m3dAngleVector((m3dV *)&local_c0,param_2);
        iVar2 = local_e0;
        if ((fVar8 < param_4 + param_4) &&
           (iVar3 = scnSCENE::IsVisiblePoint
                              (gsScenePtr,param_1,(m3dV *)&local_ec,0,(cdtREFINE *)&local_d8,
                               (cdtINFO *)0x0), iVar2 = local_e0, iVar3 != 0)) {
          *(animINST **)(param_5 + 4) = this_00;
          *(uint *)(param_5 + 8) = 0;
          *(uint *)(param_5 + 0xc) = 0;
          local_f0 = (local_ec - *(float *)param_1) * (local_ec - *(float *)param_1) +
                     (local_e8 - *(float *)(param_1 + 4)) * (local_e8 - *(float *)(param_1 + 4)) +
                     (local_e4 - *(float *)(param_1 + 8)) * (local_e4 - *(float *)(param_1 + 8));
          if (m3dSimdType == 0) {
            local_f0 = local_f0 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar7 = rsqrtss(ZEXT416((uint)local_f0),ZEXT416((uint)local_f0));
            fVar8 = auVar7._0_4_;
            local_f0 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - local_f0 * fVar8 * fVar8) *
                       local_f0;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar4 = (ulonglong)(uint)local_f0;
            uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
            uVar6 = PackedFloatingMUL(uVar5,uVar5);
            uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
            uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
            uVar5 = PackedFloatingMUL(uVar5,uVar4);
            local_f0 = (float)uVar5;
            FastExitMediaState();
          }
          else {
            local_f0 = SQRT(local_f0);
          }
          *(float *)(param_5 + 0x1c) = local_f0;
          uVar1 = *(uint *)param_5;
          *(uint *)param_5 = uVar1 & 0xfffffeff;
          iVar2 = local_e0 + 1;
          *(uint *)param_5 = uVar1 & 0xfffffeff | 2;
          param_5 = param_5 + 0x20;
          local_e0 = iVar2;
        }
      }
      local_dc = local_dc + 1;
    } while (local_dc < local_b4);
  }
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 0040AA10 */

int __thiscall pwpMCG_HIT::ProcessINIT(pwpMCG_HIT *this,void *param_1)

{
  int iVar1;
  objOBJ *this_00;
  pwpMCG_PARTS *this_01;
  partEMITTER_PHYS *ppVar2;
  pwpMCG_SMOKE *this_02;
  m3dV local_50 [12];
  m3dV local_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  iVar1 = dynDYNAMIC::ProcessINIT((dynDYNAMIC *)this,(void *)0x0);
  if (iVar1 == 0) {
    return 0;
  }
  dynDYNAMIC::StartAnim((dynDYNAMIC *)this,0,0.0,0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  animINST::GetPos(*(animINST **)(this + 0xbc),local_50);
  animINST::GetDirUp(*(animINST **)(this + 0xbc),local_44);
  objOBJ::SetConstColor(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0xfffffac8,2,0);
  this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
  if (this_00 != (objOBJ *)0x0) {
    objOBJ::SetStateProcYes(this_00,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    iVar1 = wrsfxFindFloor(local_50,(m3dBOX *)&local_20);
    local_30 = DAT_00963744;
    local_38 = _m3dVZero;
    local_34 = DAT_00963740;
    if (iVar1 != 0) {
      local_30 = local_10;
      local_38 = local_18;
      local_34 = local_14;
    }
    local_2c = _m3dVUnitY;
    local_28 = DAT_005f9994;
    local_24 = DAT_005f9998;
    this_01 = (pwpMCG_PARTS *)operator_new(0x2c0);
    if ((this_01 != (pwpMCG_PARTS *)0x0) &&
       (ppVar2 = (partEMITTER_PHYS *)
                 pwpMCG_PARTS::pwpMCG_PARTS
                           (this_01,*(animINST **)(this + 0xbc),this_00,(m3dPLANE *)&local_38,
                            *(float *)((int)param_1 + 0x2c)), ppVar2 != (partEMITTER_PHYS *)0x0)) {
      partEMITTER_PHYS::StartEmission(ppVar2);
      this_02 = (pwpMCG_SMOKE *)operator_new(0x2c0);
      if ((this_02 != (pwpMCG_SMOKE *)0x0) &&
         (ppVar2 = (partEMITTER_PHYS *)
                   pwpMCG_SMOKE::pwpMCG_SMOKE(this_02,*(float *)((int)param_1 + 0x2c)),
         ppVar2 != (partEMITTER_PHYS *)0x0)) {
        partEMITTER_PHYS::SetPosDirSpeed(ppVar2,local_50,local_44,(m3dV *)0x0);
        partEMITTER_PHYS::StartEmission(ppVar2);
        return 1;
      }
      return 0;
    }
    return 0;
  }
  return 0;
}




/* from: plw_bul_wpn.cpp
   addr: 0040ABB0 */

void __thiscall pwpMCG_HIT::ProcessFRAME(pwpMCG_HIT *this)

{
  dynDYNAMIC::ProcessFRAME((dynDYNAMIC *)this);
  if ((*(byte *)(*(int *)(this + 0xbc) + 0x28) & 1) != 0) {
    objOBJ::SetStateProcYes
              (*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 0040ABF0 */

pwpMCG_PARTS * __thiscall
pwpMCG_PARTS::pwpMCG_PARTS
          (pwpMCG_PARTS *this,animINST *param_1,objOBJ *param_2,m3dPLANE *param_3,float param_4)

{
  uint uVar1;
  m3dSPL *pmVar2;
  int iVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x23,150.0,3.0);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.041666668,param_4 * ___real_43160000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.41666666,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,2.0,1.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.045,0.02,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.495,229.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,180.0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc1200000;
  *(undefined4 *)(this + 0xe4) = 0;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,5.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.083333336,1.0);
  *(undefined4 *)(this + 0xb4) = 0x41000000;
  *(undefined4 *)(this + 0xb8) = 0x40400000;
  *(m3dSPL **)(this + 0xbc) = pmVar2;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,2.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.083333336,0.5);
  *(undefined4 *)(this + 0xc0) = 0x40800000;
  *(undefined4 *)(this + 0xc4) = 0x3fc00000;
  *(m3dSPL **)(this + 200) = pmVar2;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,1.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.125,0.0);
  *(undefined4 *)(this + 0xe8) = 0x3f800000;
  *(m3dSPL **)(this + 0xf0) = pmVar2;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pTexPart);
  iVar3 = partSetAreaEmissionObj((partEMITTER_PHYS *)this,param_2,-1,(m3dV *)0x0);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(this + 4);
    *(uint *)(this + 4) = uVar1 | 0x2000;
    *(uint *)(this + 4) = uVar1 | 0xa000;
    partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0225,0.2,0.3,4);
    partEMITTER_PHYS::SetCDTPlane((partEMITTER_PHYS *)this,1,0,param_3);
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000;
    partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 0040AF90 */

pwpMCG_SMOKE * __thiscall pwpMCG_SMOKE::pwpMCG_SMOKE(pwpMCG_SMOKE *this,float param_1)

{
  m3dSPL *pmVar1;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xf,35.0,1.5);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.041666668,param_1 * ___real_420c0000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,0.8333333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar1);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.0,0.5);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.2,0.05,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.075,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar1);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,90.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0x3f000000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x3ecccccd;
  *(undefined4 *)(this + 0xb8) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xbc) = 0;
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,36.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.41666666,180.0);
  *(undefined4 *)(this + 0xf8) = 0x3f800000;
  *(m3dSPL **)(this + 0xfc) = pmVar1;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pTexSmoke);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 0040B1E0 */

pwpMCG_SHELL * __thiscall
pwpMCG_SHELL::pwpMCG_SHELL
          (pwpMCG_SHELL *this,sncCHANNEL **param_1,sncSOUND_DESCR_3D *param_2,float param_3,
          float param_4,m3dSPL_LINEAR1D *param_5)

{
  uint uVar1;
  float fVar2;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,50.0,6.0);
  *(undefined ***)this = &_vftable_;
  *(sncCHANNEL ***)(this + 0x2c0) = param_1;
  *(sncSOUND_DESCR_3D **)(this + 0x2c4) = param_2;
  *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) | 0x400;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,4.5,1.5);
  if (param_5 == (m3dSPL_LINEAR1D *)0x0) {
    param_5 = (m3dSPL_LINEAR1D *)operator_new(0x34);
    if (param_5 == (m3dSPL_LINEAR1D *)0x0) {
      param_5 = (m3dSPL_LINEAR1D *)0x0;
    }
    else {
      m3dSPL::m3dSPL((m3dSPL *)param_5,0,8,1);
      *(undefined ***)param_5 = &m3dSPL_LINEAR1D::_vftable_;
      m3dSPL::AllocKpList((m3dSPL *)param_5,2);
    }
    m3dSPL_LINEAR1D::SetKp(param_5,0,0.0,0.008);
    m3dSPL_LINEAR1D::SetKp(param_5,1,0.16666667,0.025);
  }
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.011,0.0,param_5,1.0);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(this_00,0,8,1);
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.9,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,4.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,60.0,0.0,576.0);
  uVar1 = *(uint *)(this + 4);
  fVar2 = param_3 * ___real_3e4ccccd;
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(float *)(this + 0xb8) = fVar2;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc0a00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb4) = param_3;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(float *)(this + 0xe8) = param_4;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pTexShell);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.015,0.4,0.3,4);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10010000;
  return this;
}




/* from: plw_bul_wpn.cpp
   addr: 0040B3F0 */

int __thiscall
pwpMCG_SHELL::PartApplyCDT(pwpMCG_SHELL *this,partPART *param_1,m3dV *param_2,float param_3)

{
  int iVar1;
  
  iVar1 = partEMITTER_PHYS::PartApplyCDT((partEMITTER_PHYS *)this,param_1,param_2,param_3);
  if ((iVar1 != 0) && (param_1[0x39] == (partPART)0x1)) {
    iVar1 = sncCHANNEL::IsPlay((sncCHANNEL *)**(undefined4 **)(this + 0x2c0),-1);
    if (iVar1 == 0) {
      (**(code **)(*(int *)**(undefined4 **)(this + 0x2c0) + 4))(*(undefined4 *)(this + 0x2c4),0);
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 0040B450 */

pwpMCG_MUZZLE_SMOKE * __thiscall
pwpMCG_MUZZLE_SMOKE::pwpMCG_MUZZLE_SMOKE(pwpMCG_MUZZLE_SMOKE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xf,30.0,1.5);
  *(undefined ***)this = &_vftable_;
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.125,30.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,0.8333333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.0,0.5);
  fVar2 = param_1 * ___real_3ccccccd;
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3d99999a,fVar2,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.21,76.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,90.0);
  fVar3 = param_1 * ___real_3dcccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xf8) = 0x42100000;
  *(float *)(this + 0xb4) = fVar3;
  *(float *)(this + 0xb8) = fVar3;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xe8) = fVar2;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pTexSmoke);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x10000408;
  *(uint *)(this + 4) = uVar1 | 0x10000408;
  return this;
}




/* from: plw_bul_wpn.cpp
   addr: 0040B620 */

void __thiscall cdtREFINE::cdtREFINE(cdtREFINE *this,int param_1,animINST *param_2)

{
  *(undefined4 *)(this + 4) = 0;
  *(animINST **)(this + 8) = param_2;
  *(undefined ***)this = &_vftable_;
  *(uint *)(this + 4) = *(uint *)(this + 4) | param_1;
  return;
}




/* from: plw_bul_wpn.cpp
   addr: 0040B650 */

int __thiscall cdtREFINE::IsInclObj(cdtREFINE *this,objOBJ *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((((uVar1 & 0x1f) == 0) || ((uVar1 & 0x10000) != 0)) && ((uVar1 & 0x40000) == 0)) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bul_wpn.cpp
   addr: 0040B690 */

void __thiscall pwpEV_CDT_MCG::pwpEV_CDT_MCG(pwpEV_CDT_MCG *this)

{
  undefined4 uVar1;
  
  *this = (pwpEV_CDT_MCG)0x0;
  this[1] = (pwpEV_CDT_MCG)0x40;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined2 *)(this + 2) = 8;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0x18) = _m3dVUnitY;
  *(undefined4 *)(this + 0x1c) = DAT_005f9994;
  uVar1 = DAT_005f9998;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0xbf800000;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(undefined4 *)(this + 4) = 0;
  *(undefined2 *)(this + 2) = 0x30;
  return;
}
