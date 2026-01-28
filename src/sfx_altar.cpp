
/* from: sfx_altar.cpp
   addr: 0045BF10 */

int __fastcall wrsfxAltarInit(void)

{
  int iVar1;
  
  wrsfxALTAR_FIREBALL::pPartTex = txmMANAGER::Add(txmManager,s_sfx_altar_fireball,0x40003,1);
  if (wrsfxALTAR_FIREBALL::pPartTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_altar_fireball,0x24534658,0x50,wrsfxALTAR_FIREBALL::Create,
                           (char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxALTAR::pTexLgtn = txmMANAGER::Add(txmManager,s_sfx_altar_part,0x40003,1);
  if (wrsfxALTAR::pTexLgtn == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_altar,0x24534658,0x50,wrsfxALTAR::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(4,(sncSOUND_DESCR_3D *)&DAT_0060e3d8);
  if (iVar1 == 0) {
    apMsg(s_Cannot_link_sound_data);
    return 0;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_altar.cpp
   addr: 0045BFC0 */

entENTITY * __fastcall wrsfxALTAR::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x18b);
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
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_altar.cpp
   addr: 0045C050
   addr: 0045C050 */

void * __thiscall wrsfxALTAR::_scalar_deleting_destructor_(wrsfxALTAR *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_altar.cpp
   addr: 0045C080 */

wrsfxALTAR_LIGHTNING_2 * __thiscall
wrsfxALTAR_LIGHTNING_2::wrsfxALTAR_LIGHTNING_2(wrsfxALTAR_LIGHTNING_2 *this)

{
  uint uVar1;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,0.5);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.35,0.15);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(this_00,0,8,1);
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,1.0,1.5);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,1.5,0.0,(m3dSPL_LINEAR1D *)this_00,1.0);
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc0400000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0xbf4ccccd;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x40800000;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,480.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxALTAR::pTexLgtn);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,30.0,60.0,1.5,0.5);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}




/* from: sfx_altar.cpp
   addr: 0045C1D0 */

wrsfxALTAR_LIGHTNING_1 * __thiscall
wrsfxALTAR_LIGHTNING_1::wrsfxALTAR_LIGHTNING_1(wrsfxALTAR_LIGHTNING_1 *this)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,40.0,2.0);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.75,0.25);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,2.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,2.0,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.07,255.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc0400000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x41400000;
  *(undefined4 *)(this + 0xb8) = 0x40800000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x3e99999a;
  *(undefined4 *)(this + 0xc4) = 0x3dcccccd;
  *(undefined4 *)(this + 200) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,480.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxALTAR::pTexLgtn);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,20.0,50.0,1.5,0.5);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}




/* from: sfx_altar.cpp
   addr: 0045C380 */

void __thiscall wrsfxALTAR::ToggleEffect(wrsfxALTAR *this,int param_1)

{
  if (param_1 == 0) {
    if (*(int *)(this + 0x187) != 0) {
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x177));
      if (*(partEMITTER_PHYS **)(this + 0x17b) != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x17b));
      }
      dynDYNAMIC::StopAnim((dynDYNAMIC *)this);
      *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
      sncCHANNEL::Play(*(sncCHANNEL **)(this + 0x17f),-1,-1);
      *(undefined4 *)(this + 0x187) = 0;
    }
  }
  else if (*(int *)(this + 0x187) == 0) {
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x177));
    if (*(partEMITTER_PHYS **)(this + 0x17b) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x17b));
    }
    dynDYNAMIC::StartAnim((dynDYNAMIC *)this,0,0.0,1);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
    (**(code **)(**(int **)(this + 0x17f) + 4))(&DAT_0060e3d8,0);
    *(undefined4 *)(this + 0x187) = 1;
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_altar.cpp
   addr: 0045C440 */

int __thiscall wrsfxALTAR::ProcessINIT(wrsfxALTAR *this,void *param_1)

{
  wrsfxALTAR *pwVar1;
  undefined4 uVar2;
  int iVar3;
  objOBJ *poVar4;
  wrsfxALTAR_LIGHTNING_1 *this_00;
  partEMITTER_PHYS *ppVar5;
  wrsfxALTAR_LIGHTNING_2 *this_01;
  sncCHANNEL *this_02;
  wrsfxALTAR *local_4;
  
  local_4 = this;
  iVar3 = dynDYNAMIC::ProcessINIT((dynDYNAMIC *)this,param_1);
  if (iVar3 == 0) {
    return 0;
  }
  pwVar1 = this + 0x183;
  *(int *)pwVar1 = 0;
  animINST::GetBool(*(animINST **)(this + 0xbc),s_ALTAR,s_isNoTop,(int *)pwVar1);
  if (*(int *)pwVar1 == 0) {
    poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter_top);
    if (poVar4 == (objOBJ *)0x0) {
      return 0;
    }
    iVar3 = 0x1008;
    param_1 = poVar4;
  }
  else {
    param_1 = (void *)0x0;
    poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_top_dummy);
    if (poVar4 == (objOBJ *)0x0) goto LAB_0045c4d7;
    iVar3 = 8;
  }
  objOBJ::SetStateProcYes(poVar4,iVar3,(_func_int_objOBJ_ptr_void_ptr *)0x0);
LAB_0045c4d7:
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter_bottom);
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  objOBJ::SetStateProcYes(poVar4,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  this_00 = (wrsfxALTAR_LIGHTNING_1 *)operator_new(0x2c0);
  if (this_00 == (wrsfxALTAR_LIGHTNING_1 *)0x0) {
    ppVar5 = (partEMITTER_PHYS *)0x0;
  }
  else {
    ppVar5 = (partEMITTER_PHYS *)wrsfxALTAR_LIGHTNING_1::wrsfxALTAR_LIGHTNING_1(this_00);
  }
  *(partEMITTER_PHYS **)(this + 0x177) = ppVar5;
  if (ppVar5 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  iVar3 = partSetAreaEmissionObj(ppVar5,poVar4,-1,(m3dV *)0x0);
  if (iVar3 == 0) {
    return 0;
  }
  partAttachInst(*(partEMITTER_PHYS **)(this + 0x177),*(animINST **)(this + 0xbc));
  if (*(int *)pwVar1 == 0) {
    this_01 = (wrsfxALTAR_LIGHTNING_2 *)operator_new(0x2c0);
    if (this_01 == (wrsfxALTAR_LIGHTNING_2 *)0x0) {
      ppVar5 = (partEMITTER_PHYS *)0x0;
    }
    else {
      ppVar5 = (partEMITTER_PHYS *)wrsfxALTAR_LIGHTNING_2::wrsfxALTAR_LIGHTNING_2(this_01);
    }
    *(partEMITTER_PHYS **)(this + 0x17b) = ppVar5;
    if (ppVar5 == (partEMITTER_PHYS *)0x0) {
      return 0;
    }
    iVar3 = partSetAreaEmissionObj(ppVar5,(objOBJ *)param_1,-1,(m3dV *)0x0);
    if (iVar3 == 0) {
      return 0;
    }
    partAttachInst(*(partEMITTER_PHYS **)(this + 0x17b),*(animINST **)(this + 0xbc));
  }
  this_02 = (sncCHANNEL *)operator_new(0xbc);
  if (this_02 == (sncCHANNEL *)0x0) {
    this_02 = (sncCHANNEL *)0x0;
  }
  else {
    sncCHANNEL::sncCHANNEL(this_02);
    *(undefined4 *)(this_02 + 0x74) = _m3dVZero;
    *(undefined4 *)(this_02 + 0x78) = DAT_00963740;
    uVar2 = DAT_00963744;
    *(undefined4 *)(this_02 + 0x80) = 0;
    *(undefined ***)this_02 = &sncCHANNEL_3D::_vftable_;
    *(undefined4 *)(this_02 + 0x7c) = uVar2;
    *(undefined4 *)(this_02 + 0x84) = 0x41700000;
    *(undefined4 *)(this_02 + 0x88) = 0x42200000;
    *(undefined4 *)(this_02 + 0x8c) = 0x43b40000;
    *(undefined4 *)(this_02 + 0x90) = 0x43b40000;
    *(undefined4 *)(this_02 + 0x94) = 0;
    *(undefined4 *)(this_02 + 0x98) = _m3dVZero;
    *(undefined4 *)(this_02 + 0x9c) = DAT_00963740;
    *(undefined4 *)(this_02 + 0xa0) = DAT_00963744;
    *(undefined4 *)(this_02 + 0xa4) = _m3dVZero;
    *(undefined4 *)(this_02 + 0xa8) = DAT_00963740;
    *(undefined4 *)(this_02 + 0xac) = DAT_00963744;
    *(undefined4 *)(this_02 + 0xb0) = _m3dVUnitZ;
    *(undefined4 *)(this_02 + 0xb4) = DAT_005f99a0;
    uVar2 = DAT_005f99a4;
    *(undefined ***)this_02 = &sncCHANNEL_SPH::_vftable_;
    *(undefined4 *)(this_02 + 0xb8) = uVar2;
  }
  *(sncCHANNEL **)(this + 0x17f) = this_02;
  if (this_02 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_02,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  local_4 = (wrsfxALTAR *)0x1;
  animINST::GetBool(*(animINST **)(this + 0xbc),s_ALTAR,s_isStartSFX,(int *)&local_4);
  if (local_4 != (wrsfxALTAR *)0x0) {
    ToggleEffect(this,1);
  }
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
  return 1;
}




/* from: sfx_altar.cpp
   addr: 0045C740 */

void __thiscall wrsfxALTAR::ProcessTERM(wrsfxALTAR *this)

{
  if (*(undefined4 **)(this + 0x177) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x177))(1);
  }
  *(undefined4 *)(this + 0x177) = 0;
  if (*(undefined4 **)(this + 0x17b) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x17b))(1);
  }
  *(undefined4 *)(this + 0x17b) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_altar.cpp
   addr: 0045C790 */

void __thiscall wrsfxALTAR::ProcessMP_GET_SYNC_DATA(wrsfxALTAR *this,void *param_1)

{
  undefined4 *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_0060e578 & 1) == 0) {
      DAT_0060e578 = DAT_0060e578 | 1;
      DAT_0060e3b8._0_1_ = 0;
      DAT_0060e3b8._1_1_ = 0x40;
      DAT_0060e3bc = 0;
      _DAT_0060e3c0 = 0xffffffff;
      DAT_0060e3cc = 0;
      DAT_0060e3b8._2_2_ = 0x18;
      atexit((_func_4879 *)&__E29);
    }
    puVar1 = &DAT_0060e3b8;
    *(undefined4 **)param_1 = &DAT_0060e3b8;
  }
  puVar1[5] = *(undefined4 *)(this + 0x187);
  dynDYNAMIC::ProcessMP_GET_SYNC_DATA((dynDYNAMIC *)this,param_1);
  return;
}




/* from: sfx_altar.cpp
   addr: 0045C810 */

void __thiscall wrsfxALTAR::ProcessMP_WRITE_SYNC_DATA(wrsfxALTAR *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  gsMSG_MP_SAVELOAD *pgVar2;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  pgVar2 = param_1;
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  iVar1 = *(int *)param_1;
  local_6 = 0xffffffff;
  local_10 = 0;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
  param_1 = *(gsMSG_MP_SAVELOAD **)(iVar1 + 0x14);
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(&param_1,4,4);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffffe4);
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar2 + 4));
  dynDYNAMIC::ProcessMP_WRITE_SYNC_DATA((dynDYNAMIC *)this,pgVar2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_altar.cpp
   addr: 0045C890 */

void __thiscall wrsfxALTAR::ProcessMP_READ_SYNC_DATA(wrsfxALTAR *this,gsMSG_MP_SAVELOAD *param_1)

{
  gsMSG_MP_SAVELOAD *pgVar1;
  gsMSG_MP_SAVELOAD *pgVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  short local_28;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  pgVar1 = param_1;
  local_28 = 0;
  local_26 = 0xffffffff;
  local_22 = 0xffffffff;
  local_1e = 0xffffffff;
  pgVar2 = *(gsMSG_MP_SAVELOAD **)param_1;
  if (*(gsMSG_MP_SAVELOAD **)param_1 == (gsMSG_MP_SAVELOAD *)0x0) {
    if ((DAT_0060e578 & 1) == 0) {
      DAT_0060e578 = DAT_0060e578 | 1;
      DAT_0060e3b8._0_1_ = 0;
      DAT_0060e3b8._1_1_ = 0x40;
      DAT_0060e3bc = 0;
      _DAT_0060e3c0 = 0xffffffff;
      DAT_0060e3cc = 0;
      DAT_0060e3b8._2_2_ = 0x18;
      atexit((_func_4879 *)&__E29);
    }
    local_10 = 0xffffffff;
    local_18._2_2_ = 0x18;
    *(undefined4 **)param_1 = &DAT_0060e3b8;
    local_18._0_1_ = 0;
    local_18._1_1_ = 0x40;
    local_14 = 0;
    local_4 = 0;
    puVar4 = &local_18;
    puVar5 = &DAT_0060e3b8;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    param_1 = (gsMSG_MP_SAVELOAD *)&DAT_0060e3b8;
    pgVar2 = param_1;
  }
  param_1 = pgVar2;
  iVar3 = fioFILE::ReadChunk(*(fioFILE **)(pgVar1 + 4),(fioCHUNK *)&local_28);
  while ((iVar3 != 0 && (local_28 != 1))) {
    if (local_28 == 0xf0) {
      (**(code **)(**(int **)(pgVar1 + 4) + 0x14))(param_1 + 0x14,4,4);
    }
    iVar3 = fioFILE::ReadChunk(*(fioFILE **)(pgVar1 + 4),(fioCHUNK *)&local_28);
  }
  dynDYNAMIC::ProcessMP_READ_SYNC_DATA((dynDYNAMIC *)this,pgVar1);
  return;
}




/* from: sfx_altar.cpp
   addr: 0045C9B0 */

int __thiscall
wrsfxALTAR::ProcessMsg(wrsfxALTAR *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 == 0x3f8) {
    iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_START);
    if (iVar1 != 0) {
      ToggleEffect(this,1);
      return 0;
    }
    iVar1 = apNAME::IsName((apNAME *)((int)param_2 + 8),&s_STOP);
    if (iVar1 != 0) {
      ToggleEffect(this,0);
    }
  }
  else {
    dynDYNAMIC::ProcessMsg((dynDYNAMIC *)this,param_1,param_2,param_3,param_4);
    if ((param_1 == 0x40c) && (*(int *)((int)param_2 + 4) == -100)) {
      ToggleEffect(this,*(int *)(*(int *)((int)param_2 + 8) + 0x14));
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_altar.cpp
   addr: 0045CA50 */

wrsfxALTAR_FIREBALL_EMITTER * __thiscall
wrsfxALTAR_FIREBALL_EMITTER::wrsfxALTAR_FIREBALL_EMITTER
          (wrsfxALTAR_FIREBALL_EMITTER *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,0.6);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_40200000);
  fVar2 = param_1 * ___real_40a00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.15,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxALTAR_FIREBALL::pPartTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,450.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 8;
  *(uint *)(this + 4) = uVar1 | 0x2008;
  *(uint *)(this + 4) = uVar1 | 0x2009;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_altar.cpp
   addr: 0045CC10 */

wrsfxALTAR_EXPLOSION_EMITTER * __thiscall
wrsfxALTAR_EXPLOSION_EMITTER::wrsfxALTAR_EXPLOSION_EMITTER
          (wrsfxALTAR_EXPLOSION_EMITTER *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x32,200.0,0.25);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.36666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.225,0.025);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_40f00000,param_1 * ___real_40200000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  fVar2 = param_1 * ___real_43160000;
  *(m3dSPL **)(this + 0x2c0) = pmVar3;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp(*(m3dSPL_LINEAR1D **)(this + 0x2c0),1,0.5,param_1 * ___real_42960000);
  m3dSPL_LINEAR1D::SetKp(*(m3dSPL_LINEAR1D **)(this + 0x2c0),2,1.0,param_1 * ___real_00000000);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.25,198.13501);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxALTAR_FIREBALL::pPartTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,300.0);
  fVar2 = param_1 * ___real_42700000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_41f00000;
  *(float *)(this + 0xc0) = param_1 * ___real_41a00000;
  *(float *)(this + 0xc4) = param_1 * ___real_41200000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  *(uint *)(this + 4) = uVar1 | 0xa408;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  *(uint *)(this + 4) = uVar1 | 0x100a409;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,0.5,1.0,0.5);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* from: sfx_altar.cpp
   addr: 0045CEC0
   addr: 0045CEC0 */

void * __thiscall
wrsfxALTAR_EXPLOSION_EMITTER::_vector_deleting_destructor_
          (wrsfxALTAR_EXPLOSION_EMITTER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(int **)(this + 0x2c0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c0) + 4))(1);
  }
  *(undefined4 *)(this + 0x2c0) = 0;
  partEMITTER_PHYS::~partEMITTER_PHYS((partEMITTER_PHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_altar.cpp
   addr: 0045CF10 */

void __thiscall
wrsfxALTAR_EXPLOSION_EMITTER::PartUpdate
          (wrsfxALTAR_EXPLOSION_EMITTER *this,int param_1,partPART **param_2,float param_3)

{
  partPART *ppVar1;
  partPART **pppVar2;
  int iVar3;
  
  pppVar2 = param_2;
  partEMITTER_PHYS::PartUpdate((partEMITTER_PHYS *)this,param_1,param_2,param_3);
  iVar3 = 0;
  if (0 < param_1) {
    do {
      (**(code **)(**(int **)(this + 0x2c0) + 0x10))(*(undefined4 *)pppVar2[iVar3],&param_2,0);
      ppVar1 = pppVar2[iVar3];
      iVar3 = iVar3 + 1;
      *(float *)(ppVar1 + 8) = (float)param_2 * param_3 + *(float *)(ppVar1 + 8);
    } while (iVar3 < param_1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_altar.cpp
   addr: 0045CF70 */

wrsfxALTAR_NPC_EMITTER * __thiscall
wrsfxALTAR_NPC_EMITTER::wrsfxALTAR_NPC_EMITTER(wrsfxALTAR_NPC_EMITTER *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,150.0,0.6);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.45,0.15);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,param_1);
  fVar2 = param_1 + param_1;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.5,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar4,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.295,178.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxALTAR_FIREBALL::pPartTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,450.0);
  fVar3 = param_1 * ___real_42200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xcc) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xe0) = fVar3;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 8;
  *(uint *)(this + 4) = uVar1 | 9;
  *(uint *)(this + 4) = uVar1 | 0x2009;
  *(uint *)(this + 4) = uVar1 | 0xa009;
  *(uint *)(this + 4) = uVar1 | 0x400a009;
  *(uint *)(this + 4) = uVar1 | 0x420a009;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_altar.cpp
   addr: 0045D170 */

int __thiscall wrsfxALTAR_FIREBALL::ProcessINIT(wrsfxALTAR_FIREBALL *this,physINIT *param_1)

{
  undefined4 uVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  wrsfxALTAR_FIREBALL_EMITTER *this_00;
  objOBJ *poVar4;
  sncCHANNEL *this_01;
  
  iVar2 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) == -1) {
    return 0;
  }
  peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x38),0);
  *(entIACTIVE_OBJ **)(this + 0x157) = peVar3;
  if (peVar3 == (entIACTIVE_OBJ *)0x0) {
    return 0;
  }
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
  *(uint *)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 4) =
       *(uint *)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 4) | 1;
  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
  *(float *)(this + 0x163) =
       (___real_3a83126f / *(float *)(param_1 + 0x3c)) *
       *(float *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90) + 0x50);
  this_00 = (wrsfxALTAR_FIREBALL_EMITTER *)operator_new(0x2c0);
  if (this_00 == (wrsfxALTAR_FIREBALL_EMITTER *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = wrsfxALTAR_FIREBALL_EMITTER::wrsfxALTAR_FIREBALL_EMITTER(this_00,0.1);
  }
  *(int *)(this + 0x15b) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  animINST::Scale(*(animINST **)(this + 0xbc),0.05,0.05,0.05,0);
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_area);
  *(objOBJ **)(this + 0x15f) = poVar4;
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  iVar2 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x15b),poVar4,-1,(m3dV *)0x0);
  if (iVar2 == 0) {
    return 0;
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x15b));
  this_01 = (sncCHANNEL *)operator_new(0xbc);
  if (this_01 == (sncCHANNEL *)0x0) {
    this_01 = (sncCHANNEL *)0x0;
  }
  else {
    sncCHANNEL::sncCHANNEL(this_01);
    *(undefined4 *)(this_01 + 0x74) = _m3dVZero;
    *(undefined4 *)(this_01 + 0x78) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this_01 + 0x80) = 0;
    *(undefined ***)this_01 = &sncCHANNEL_3D::_vftable_;
    *(undefined4 *)(this_01 + 0x7c) = uVar1;
    *(undefined4 *)(this_01 + 0x84) = 0x41a00000;
    *(undefined4 *)(this_01 + 0x88) = 0x42c80000;
    *(undefined4 *)(this_01 + 0x8c) = 0x43b40000;
    *(undefined4 *)(this_01 + 0x90) = 0x43b40000;
    *(undefined4 *)(this_01 + 0x94) = 0;
    *(undefined4 *)(this_01 + 0x98) = _m3dVZero;
    *(undefined4 *)(this_01 + 0x9c) = DAT_00963740;
    *(undefined4 *)(this_01 + 0xa0) = DAT_00963744;
    *(undefined4 *)(this_01 + 0xa4) = _m3dVZero;
    *(undefined4 *)(this_01 + 0xa8) = DAT_00963740;
    *(undefined4 *)(this_01 + 0xac) = DAT_00963744;
    *(undefined4 *)(this_01 + 0xb0) = _m3dVUnitZ;
    *(undefined4 *)(this_01 + 0xb4) = DAT_005f99a0;
    uVar1 = DAT_005f99a4;
    *(undefined ***)this_01 = &sncCHANNEL_SPH::_vftable_;
    *(undefined4 *)(this_01 + 0xb8) = uVar1;
  }
  *(sncCHANNEL **)(this + 0x177) = this_01;
  if (this_01 == (sncCHANNEL *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::AddChannel(gsSysSound,this_01,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  (**(code **)(**(int **)(this + 0x177) + 4))(&DAT_0060e4a8,0);
  return 1;
}




/* from: sfx_altar.cpp
   addr: 0045D3C0 */

void __thiscall wrsfxALTAR_FIREBALL::ProcessFRAME(wrsfxALTAR_FIREBALL *this)

{
  objOBJ *poVar1;
  int iVar2;
  partEMITTER_PHYS *this_00;
  objOBJ *poVar3;
  m3dV local_30 [12];
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  objFILTER_PART_SOURCE local_14 [12];
  objOBJ *poStack_8;
  
  objFILTER_PART_SOURCE::objFILTER_PART_SOURCE(local_14,1);
  local_24 = 0;
  local_20 = (undefined1 *)0x0;
  local_1c = 0;
  local_18 = 0;
  physPHYS::ProcessFRAME((physPHYS *)this);
  if (*(int *)(this + 0x15b) != 0) {
    animINST::AdvanceTime
              (*(animINST **)(this + 0xbc),gsElapsedTime * *(float *)(this + 0x163),1,(float *)0x0);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    m3dMATR::GetAxisX((m3dMATR *)(*(int *)(this + 0x15f) + 0x3c),local_30);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 0x15b),(m3dV *)0x0,local_30,(m3dV *)0x0);
    partSetAreaEmissionObj
              (*(partEMITTER_PHYS **)(this + 0x15b),*(objOBJ **)(this + 0x15f),-1,(m3dV *)0x0);
  }
  if ((*(int *)(this + 0x167) != 0) &&
     (iVar2 = m3dUpdateTimeField((float *)(this + 0x16b),gsElapsedTime), iVar2 != 0)) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x167));
    if (*(undefined4 **)(this + 0x167) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x167))(1);
    }
    *(undefined4 *)(this + 0x167) = 0;
  }
  this_00 = *(partEMITTER_PHYS **)(this + 0x16f);
  if (this_00 != (partEMITTER_PHYS *)0x0) {
    if ((*(uint *)(*(int *)(this + 0x157) + 1099) & 0x200000) == 0) {
      poVar1 = *(objOBJ **)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10);
      if (poVar1 == (objOBJ *)0x0) {
        return;
      }
      poVar3 = *(objOBJ **)(this + 0x173);
      if (((byte)(*(objOBJ **)(this + 0x173))[8] & 3) != 0) {
        objFind(poVar1,(objFILTER *)local_14);
        this_00 = *(partEMITTER_PHYS **)(this + 0x16f);
        *(objOBJ **)(this + 0x173) = poStack_8;
        poVar3 = poStack_8;
      }
      partSetAreaEmissionObj(this_00,poVar3,100,(m3dV *)0x0);
      local_24 = 0x41e80000;
      local_1c = 0x43260000;
      local_20 = &DAT_42480000;
    }
    else {
      partEMITTER_PHYS::StopEmission(this_00);
      local_24 = 0;
      local_1c = 0;
      local_20 = (undefined1 *)0x0;
    }
    local_18 = 0x437f0000;
    entENTITY::ApplyColor
              (*(entENTITY **)(this + 0x157),(m3dCOLOR *)0x0,(m3dCOLOR *)0x0,(m3dCOLOR *)&local_24,0
              );
  }
  return;
}




/* from: sfx_altar.cpp
   addr: 0045D570 */

void __thiscall wrsfxALTAR_FIREBALL::ProcessTERM(wrsfxALTAR_FIREBALL *this)

{
  physPHYS::ProcessTERM((physPHYS *)this);
  *(undefined4 *)(this + 0x157) = 0;
  if (*(undefined4 **)(this + 0x15b) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x15b))(1);
  }
  *(undefined4 *)(this + 0x15b) = 0;
  *(undefined4 *)(this + 0x15f) = 0;
  if (*(undefined4 **)(this + 0x167) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x167))(1);
  }
  *(undefined4 *)(this + 0x167) = 0;
  if (*(undefined4 **)(this + 0x16f) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x16f))(1);
  }
  *(undefined4 *)(this + 0x16f) = 0;
  *(undefined4 *)(this + 0x173) = 0;
  return;
}




/* from: sfx_altar.cpp
   addr: 0045D5E0 */

void __thiscall
wrsfxALTAR_FIREBALL::ProcessDESTROY_ENT(wrsfxALTAR_FIREBALL *this,entENTITY *param_1)

{
  physPHYS::ProcessDESTROY_ENT((physPHYS *)this,param_1);
  if (param_1 == *(entENTITY **)(this + 0x157)) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  }
  return;
}




/* from: sfx_altar.cpp
   addr: 0045D610 */

int __thiscall wrsfxALTAR_FIREBALL::ProcessCDT(wrsfxALTAR_FIREBALL *this,cdtINFO *param_1)

{
  msgDATA local_8;
  undefined1 local_7;
  undefined2 local_6;
  undefined4 local_4;
  
  local_8 = (msgDATA)0x0;
  local_7 = 0x40;
  local_4 = 8;
  local_6 = 8;
  physPHYS::ProcessCDT((physPHYS *)this,param_1);
  if ((*(byte *)(*(int *)(this + 0x14f) + 4) & 8) == 0) {
    if (*(sncCHANNEL **)(this + 0x177) != (sncCHANNEL *)0x0) {
      sncCHANNEL::Play(*(sncCHANNEL **)(this + 0x177),-1,-1);
    }
    if (*(undefined4 **)(this + 0x15b) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x15b))(1);
    }
    *(undefined4 *)(this + 0x15b) = 0;
    gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060e510,(m3dV *)(param_1 + 0x10));
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_8,0x20000,0xffffffff,0xfffffffd);
    msgSYSTEM::PostMsgData(&msgSystem,(msgADDR *)this,0x40c,&local_8,(msgADDR *)this);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_altar.cpp
   addr: 0045D6D0 */

int __fastcall wrsfxALTAR_FIREBALL::StartFireBall(entENTITY *param_1,psSHEET *param_2)

{
  int iVar1;
  animINST *this;
  entENTITY *peVar2;
  undefined4 local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  undefined1 local_124;
  undefined1 local_123;
  undefined2 local_122;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  m3dV local_e4 [12];
  char local_d8 [64];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  local_120 = _m3dVZero;
  local_114 = (float)_m3dVZero;
  local_11c = DAT_00963740;
  local_110 = (float)DAT_00963740;
  local_124 = 0;
  local_123 = 0x40;
  local_118 = DAT_00963744;
  local_10c = (float)DAT_00963744;
  local_108 = 0x3dcccccd;
  local_104 = DAT_005d53dc;
  local_100 = 1;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0xffffffff;
  local_122 = 0x40;
  animCREATE_DATA::animCREATE_DATA(local_98);
  iVar1 = psSHEET::GetStr(param_2,s_ALTAR,s_sourceName,local_d8,0x40);
  if (iVar1 != 0) {
    this = scnSCENE::FindInstName(gsScenePtr,local_d8);
    if (this != (animINST *)0x0) {
      animINST::GetPos(this,(m3dV *)&local_134);
      local_128 = 0.0;
      psSHEET::GetFloat(param_2,s_ALTAR,s_sourceHeight,&local_128);
      local_130 = local_130 + local_128;
      goto LAB_0045d7f0;
    }
  }
  local_134 = _m3dVZero;
  local_12c = DAT_00963744;
  local_130 = 5.0;
LAB_0045d7f0:
  animINST::GetPos(*(animINST **)(param_1 + 0xbc),local_e4);
  local_114 = _m3dVUnitY * ___real_c0a00000;
  local_110 = DAT_005f9994 * ___real_c0a00000;
  local_10c = DAT_005f9998 * ___real_c0a00000;
  local_e8 = cgmGetThrowSpeed_XZ((m3dV *)&local_134,local_e4,10.0,local_110,(m3dV *)&local_120);
  local_ec = *(undefined4 *)(param_1 + 0x8c);
  local_108 = 0x3e99999a;
  local_104 = 0x442f0000;
  local_100 = 0xffffffff;
  local_f8 = 0;
  local_fc = 0;
  local_f4 = 2;
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)&local_134,&m3dVUnitY);
  peVar2 = entCreate(gsScenePtr,s_sfx_altar_fireball,s_sfx_altar_fireball,local_98,&local_124,0);
  if (peVar2 == (entENTITY *)0x0) {
    return 0;
  }
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060e440,(m3dV *)&local_134);
  return 1;
}




/* from: sfx_altar.cpp
   addr: 0045D900 */

void __thiscall wrsfxALTAR_FIREBALL::ProcessMP_NOTIFY(wrsfxALTAR_FIREBALL *this,gsEVENT *param_1)

{
  physPHYS::ProcessMP_NOTIFY((physPHYS *)this,param_1);
  if (*(int *)(param_1 + 4) == 8) {
    ProcessAltarOppUnhide(this);
    (**(code **)(**(int **)(this + 0x157) + 0x1c0))();
    if (*(int *)(gsSysMP + 0x28) != 1) {
      this[0xfc] = (wrsfxALTAR_FIREBALL)0x0;
    }
  }
  return;
}




/* from: sfx_altar.cpp
   addr: 0045D950 */

void __thiscall wrsfxALTAR_FIREBALL::ProcessAltarOppUnhide(wrsfxALTAR_FIREBALL *this)

{
  wrsfxALTAR_EXPLOSION_EMITTER *this_00;
  int iVar1;
  objOBJ *poVar2;
  wrsfxALTAR_NPC_EMITTER *this_01;
  objFILTER_PART_SOURCE local_14 [12];
  objOBJ *local_8;
  
  this_00 = (wrsfxALTAR_EXPLOSION_EMITTER *)operator_new(0x2c4);
  if (this_00 == (wrsfxALTAR_EXPLOSION_EMITTER *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = wrsfxALTAR_EXPLOSION_EMITTER::wrsfxALTAR_EXPLOSION_EMITTER(this_00,0.15);
  }
  *(int *)(this + 0x167) = iVar1;
  if (iVar1 != 0) {
    poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_area_explos);
    if (poVar2 != (objOBJ *)0x0) {
      iVar1 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x167),poVar2,-1,(m3dV *)0x0);
      if (iVar1 != 0) {
        *(undefined4 *)(this + 0x16b) = 0x3f800000;
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x167));
        if (*(int *)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10) != 0) {
          objFILTER_PART_SOURCE::objFILTER_PART_SOURCE(local_14,1);
          this_01 = (wrsfxALTAR_NPC_EMITTER *)operator_new(0x2c0);
          if (this_01 == (wrsfxALTAR_NPC_EMITTER *)0x0) {
            iVar1 = 0;
          }
          else {
            iVar1 = wrsfxALTAR_NPC_EMITTER::wrsfxALTAR_NPC_EMITTER(this_01,0.25);
          }
          *(int *)(this + 0x16f) = iVar1;
          if (iVar1 != 0) {
            objFind(*(objOBJ **)(*(int *)(*(int *)(this + 0x157) + 0xbc) + 0x10),
                    (objFILTER *)local_14);
            *(objOBJ **)(this + 0x173) = local_8;
            iVar1 = partSetAreaEmissionObj
                              (*(partEMITTER_PHYS **)(this + 0x16f),local_8,100,(m3dV *)0x0);
            if (iVar1 != 0) {
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x16f));
            }
          }
        }
      }
    }
  }
  return;
}




/* from: sfx_altar.cpp
   addr: 0045DA60 */

entENTITY * __fastcall wrsfxALTAR_FIREBALL::Create(animINST *param_1)

{
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x17b);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined4 *)(this + 0x16b) = 0;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x173) = 0;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_altar.cpp
   addr: 0045DAD0
   addr: 0045DAD0 */

void * __thiscall
wrsfxALTAR_FIREBALL::_vector_deleting_destructor_(wrsfxALTAR_FIREBALL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

