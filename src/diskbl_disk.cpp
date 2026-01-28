
/* from: diskbl_disk.cpp
   addr: 0042FF10 */

int __fastcall diskblDiskInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_diskbl_disk,0x41544c42,0x37,diskblDISK::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  diskblDISK::pTexFlame = txmMANAGER::Add(txmManager,s_sfx_discus_fly_part,0x40003,1);
  if (diskblDISK::pTexFlame == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(2,(sncSOUND_DESCR_3D *)&DAT_00609c30);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: diskbl_disk.cpp
   addr: 0042FF70 */

int __thiscall diskblDISK::ProcessINIT(diskblDISK *this,physINIT *param_1)

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
    *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(this + 0x177) = *(undefined4 *)(param_1 + 0x4c);
    this[0x17b] = *(diskblDISK *)(param_1 + 0x50);
    if (((byte)this[0x88] & 4) != 0) {
      if (*(int *)(param_1 + 0x48) != -1) {
        peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
        if (peVar3 != (entIACTIVE_OBJ *)0x0) {
          physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar3);
        }
      }
      *(undefined4 *)(this + 0x173) = *(undefined4 *)(param_1 + 0x48);
    }
    if (*(int *)(gsSysMP + 0x28) != 4) {
      diskblDISK_SFX::StartSFX
                ((diskblDISK_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
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
    if (this_00 != (sncCHANNEL *)0x0) {
      gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
      (**(code **)(**(int **)(this + 0x1a4) + 4))(&DAT_00609c30,0);
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: diskbl_disk.cpp
   addr: 00430260 */

void __thiscall diskblDISK::ProcessFRAME(diskblDISK *this)

{
  int iVar1;
  float fVar2;
  gsEVENT local_50;
  undefined1 uStack_4f;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined4 local_48;
  undefined **local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  m3dV amStack_2c [12];
  uint local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = DAT_00963740;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = _m3dVZero;
  local_8 = DAT_00963744;
  local_4 = 0;
  local_3c = 0;
  local_44 = &cdtREFINE::_vftable_;
  local_40 = 2;
  gsEVENT::gsEVENT(&local_50);
  local_48 = 0;
  local_4c = 7;
  local_4e = 0xc;
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    diskblDISK_SFX::UpdateSFX((diskblDISK_SFX *)(this + 0x153),(physPHYS *)this);
  }
  iVar1 = (**(code **)(*(int *)this + 0x90))();
  if (*(int *)(this + 0x180) != iVar1) {
    local_50 = (gsEVENT)0x0;
    uStack_4f = 0x40;
    local_48 = 0;
    local_4c = 7;
    local_4e = 0xc;
    local_48 = (**(code **)(*(int *)this + 0x90))();
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)&local_50,0x10000,0xfffffffd,
               0xfffffffd);
    *(undefined4 *)(this + 0x180) = local_48;
  }
  if (((byte)this[0x88] & 4) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&uStack_38);
    fVar2 = entENTITY::GetDistToClosestPlayer((entENTITY *)this,1.5,amStack_2c,(plgsACTION **)0x0);
    if (fVar2 < ___real_3fc00000) {
      scnSCENE::FloorPlace
                (gsScenePtr,amStack_2c,DAT_005d198c,(m3dV *)0x0,0.0,0.0,0,(cdtREFINE *)&local_44,
                 (cdtINFO *)local_20);
      if ((local_20[0] & 2) != 0) {
        local_20[4] = uStack_38;
        local_c = uStack_34;
        local_8 = uStack_30;
        msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x3f9,local_20,(msgADDR *)this);
        return;
      }
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    }
  }
  return;
}




/* from: diskbl_disk.cpp
   addr: 00430400 */

void __thiscall diskblDISK::ShowCollisSFX(diskblDISK *this,pjlEV_CDT *param_1)

{
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
  local_9c = 0x3e051eb8;
  entCreate(gsScenePtr,s_sfx_discus_land,s_sfx_discus_land,local_98,&local_9c,0);
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_00609c98,(m3dV *)(param_1 + 0xc));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: diskbl_disk.cpp
   addr: 00430470 */

void __thiscall diskblDISK::ProcessEV_CDT(diskblDISK *this,pjlEV_CDT *param_1)

{
  float fVar1;
  m3dSPL *this_00;
  int iVar2;
  
  (**(code **)(*(int *)this + 0x84))(param_1);
  *(uint *)(this + 0x17c) = *(uint *)(this + 0x17c) | 1;
  if ((*(int *)(*(int *)(this + 0x14f) + 0xb0) < *(int *)(*(int *)(this + 0x14f) + 0x80)) &&
     (*(int *)(param_1 + 8) != 2)) {
    iVar2 = 0;
    do {
      if (*(int *)(this + iVar2 * 8 + 0x153) != 0) {
        fVar1 = *(float *)(*(int *)(this + iVar2 * 8 + 0x153) + 0x94);
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
          m3dSPL::AllocKpList(this_00,2);
        }
        m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,fVar1 + ___real_3daaaaab,100.0);
        m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,fVar1 + ___real_3e000000,0.0);
        partEMITTER_PHYS::SetIntensity
                  (*(partEMITTER_PHYS **)(this + iVar2 * 8 + 0x153),0.0,(m3dSPL_LINEAR1D *)this_00);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    return;
  }
  iVar2 = 0;
  do {
    if (*(partEMITTER_PHYS **)(this + iVar2 * 8 + 0x153) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + iVar2 * 8 + 0x153));
      *(undefined4 *)(this + iVar2 * 8 + 0x153) = 0;
      *(undefined4 *)(this + iVar2 * 8 + 0x157) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = *(int *)(this + 0x14f);
  *(undefined4 *)(iVar2 + 0x48) = _m3dVZero;
  *(undefined4 *)(iVar2 + 0x4c) = DAT_00963740;
  *(undefined4 *)(iVar2 + 0x50) = DAT_00963744;
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
  (**(code **)(*(int *)this + 0x88))();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: diskbl_disk.cpp
   addr: 004305E0 */

diskblDISK_SFX_FLAME * __thiscall
diskblDISK_SFX_FLAME::diskblDISK_SFX_FLAME(diskblDISK_SFX_FLAME *this,float param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,0.6);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,100.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.6,0.0);
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
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_40866666);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.24,param_1 * ___real_40c00000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 + param_1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
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
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.13,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,diskblDISK::pTexFlame);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,150.0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 5;
  *(uint *)(this + 4) = uVar1 | 0x15;
  *(uint *)(this + 4) = uVar1 | 0x215;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,15.0,30.0,2.0,0.5);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* from: diskbl_disk.cpp
   addr: 004307C0 */

int __thiscall diskblDISK_SFX::StartSFX(diskblDISK_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  char cVar1;
  animINST *paVar2;
  diskblDISK_SFX_FLAME *this_00;
  int iVar3;
  objOBJ *poVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  m3dV local_2c [12];
  char local_20 [32];
  
  paVar2 = *(animINST **)(param_1 + 0xbc);
  animINST::SetAnimSeq(paVar2,0,0.0);
  iVar6 = 0;
  do {
    this_00 = (diskblDISK_SFX_FLAME *)operator_new(0x2c0);
    if (this_00 == (diskblDISK_SFX_FLAME *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = diskblDISK_SFX_FLAME::diskblDISK_SFX_FLAME(this_00,0.13);
    }
    *(int *)(this + iVar6 * 8) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = iVar6 + 1;
    sprintf(local_20,s__emitter_d,iVar3);
    uVar5 = 0xffffffff;
    pcVar7 = local_20;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    poVar4 = objFindNameN(*(objOBJ **)(paVar2 + 0x10),local_20,~uVar5 - 1);
    *(objOBJ **)(this + iVar6 * 8 + 4) = poVar4;
    if (poVar4 == (objOBJ *)0x0) {
      return 0;
    }
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + iVar6 * 8));
    iVar6 = iVar3;
    if (1 < iVar3) {
      paVar2 = *(animINST **)(param_1 + 0xbc);
      animINST::AdvanceTime(paVar2,gsElapsedTime,0,(float *)0x0);
      animINST::Validate(paVar2,4);
      iVar6 = 0;
      do {
        if (*(int *)(this + iVar6 * 8) != 0) {
          objOBJ::GetOrigin(*(objOBJ **)(this + iVar6 * 8 + 4),local_2c);
          partEMITTER_PHYS::SetPosDirSpeed
                    (*(partEMITTER_PHYS **)(this + iVar6 * 8),local_2c,(m3dV *)0x0,(m3dV *)0x0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
      return 1;
    }
  } while( true );
}




/* from: diskbl_disk.cpp
   addr: 004308D0 */

void __thiscall diskblDISK_SFX::UpdateSFX(diskblDISK_SFX *this,physPHYS *param_1)

{
  animINST *this_00;
  int iVar1;
  m3dV local_c [12];
  
  this_00 = *(animINST **)(param_1 + 0xbc);
  animINST::AdvanceTime(this_00,gsElapsedTime,0,(float *)0x0);
  animINST::Validate(this_00,4);
  iVar1 = 0;
  do {
    if (*(int *)(this + iVar1 * 8) != 0) {
      objOBJ::GetOrigin(*(objOBJ **)(this + iVar1 * 8 + 4),local_c);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + iVar1 * 8),local_c,(m3dV *)0x0,(m3dV *)0x0);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: diskbl_disk.cpp
   addr: 00430960 */

void __thiscall cdtINFO::cdtINFO(cdtINFO *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = _m3dVZero;
  *(undefined4 *)(this + 0x14) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}




/* from: diskbl_disk.cpp
   addr: 004309A0 */

void __thiscall pjlCDT::pjlCDT(pjlCDT *this)

{
  *this = (pjlCDT)0x0;
  this[1] = (pjlCDT)0x40;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined2 *)(this + 2) = 0x24;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: diskbl_disk.cpp
   addr: 004309C0 */

entENTITY * __fastcall diskblDISK::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  physPHYS *ppVar2;
  int iVar3;
  
  this = (physPHYS *)operator_new(0x1a8);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    ppVar2 = this + 0x153;
    iVar3 = 2;
    do {
      *(undefined4 *)ppVar2 = 0;
      *(undefined4 *)(ppVar2 + 4) = 0;
      ppVar2 = ppVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)(this + 0x163) = 0xbf800000;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x16f) = 0xffffffff;
    *(undefined4 *)(this + 0x173) = 0xffffffff;
    *(undefined4 *)(this + 0x177) = 0xbf800000;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined ***)this = &pjlPJL<struct_diskblDISK_SFX>::_vftable_;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = 0;
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x194) = _m3dVZero;
    *(undefined4 *)(this + 0x198) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x19c) = uVar1;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: diskbl_disk.cpp
   addr: 00430A90 */

int __thiscall
pjlPJL<struct_diskblDISK_SFX>::ProcessINIT(pjlPJL<struct_diskblDISK_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x177) = *(undefined4 *)(param_1 + 0x4c);
  this[0x17b] = *(pjlPJL<struct_diskblDISK_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x173) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    diskblDISK_SFX::StartSFX
              ((diskblDISK_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: diskbl_disk.cpp
   addr: 00430B40 */

void __thiscall pjlPJL<struct_diskblDISK_SFX>::ProcessTERM(pjlPJL<struct_diskblDISK_SFX> *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(partEMITTER_PHYS **)(this + iVar1 * 8 + 0x153) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + iVar1 * 8 + 0x153));
      *(undefined4 *)(this + iVar1 * 8 + 0x153) = 0;
      *(undefined4 *)(this + iVar1 * 8 + 0x157) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* from: diskbl_disk.cpp
   addr: 00430B80 */

void __thiscall pjlPJL<struct_diskblDISK_SFX>::ProcessFRAME(pjlPJL<struct_diskblDISK_SFX> *this)

{
  animINST *this_00;
  int iVar1;
  m3dV local_c [12];
  
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    this_00 = *(animINST **)(this + 0xbc);
    animINST::AdvanceTime(this_00,gsElapsedTime,0,(float *)0x0);
    animINST::Validate(this_00,4);
    iVar1 = 0;
    do {
      if (*(int *)(this + iVar1 * 8 + 0x153) != 0) {
        objOBJ::GetOrigin(*(objOBJ **)(this + iVar1 * 8 + 0x157),local_c);
        partEMITTER_PHYS::SetPosDirSpeed
                  (*(partEMITTER_PHYS **)(this + iVar1 * 8 + 0x153),local_c,(m3dV *)0x0,(m3dV *)0x0)
        ;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
  }
  return;
}




/* from: diskbl_disk.cpp
   addr: 00430C00
   addr: 00430C00
   addr: 00430C00 */

void __thiscall pjlPJL<struct_diskblDISK_SFX>::Terminate(pjlPJL<struct_diskblDISK_SFX> *this)

{
  if (*(int *)(this + 0x177) == -0x40800000) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
    return;
  }
  msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,*(float *)(this + 0x177));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: diskbl_disk.cpp
   addr: 00430C40 */

void __thiscall
pjlPJL<struct_diskblDISK_SFX>::ProcessEV_CDT(pjlPJL<struct_diskblDISK_SFX> *this,pjlEV_CDT *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *(uint *)(this + 0x17c) = *(uint *)(this + 0x17c) | 1;
  do {
    if (*(partEMITTER_PHYS **)(this + iVar1 * 8 + 0x153) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + iVar1 * 8 + 0x153));
      *(undefined4 *)(this + iVar1 * 8 + 0x153) = 0;
      *(undefined4 *)(this + iVar1 * 8 + 0x157) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
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




/* from: diskbl_disk.cpp
   addr: 00430D00
   addr: 00430D00
   addr: 00430D00
   addr: 00430D00 */

void * __thiscall diskblDISK::_scalar_deleting_destructor_(diskblDISK *this,uint param_1)

{
  *(undefined ***)this = &pjlPJL<struct_diskblDISK_SFX>::_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

