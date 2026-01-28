
/* from: sfx_destroy.cpp
   addr: 00466AB0 */

int __fastcall wrsfxDestrInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_vase_destroy,0x24445354,0x28,wrsfxDESTROY_VASE::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_tripod,0x24445354,0x28,wrsfxDESTROY_TRIPOD::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_mirror,0x24445354,0x28,wrsfxDESTROY_MIRROR::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_barrel,0x24445354,0x28,wrsfxDESTROY_BARREL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_0060e6dc = txmMANAGER::Add(txmManager,s_sfx_mcg_part,0x40003,1);
  if (DAT_0060e6dc == (txmTEXTURE *)0x0) {
    return 0;
  }
  DAT_0060e6e0 = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (DAT_0060e6e0 == (txmTEXTURE *)0x0) {
    return 0;
  }
  DAT_0060e6d4 = txmMANAGER::Add(txmManager,s_sfx_egg_glow,0x40003,1);
  return (uint)(DAT_0060e6d4 != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_destroy.cpp
   addr: 00466BA0 */

void __thiscall wrsfxDESTROY_VASE::ProcessCDT_FIREABLE(wrsfxDESTROY_VASE *this,dmgDAMAGE *param_1)

{
  int iVar1;
  wrsfxDESTROY_VASE_PARTS *this_00;
  partEMITTER_PHYS *ppVar2;
  objOBJ *this_01;
  wrsfxDESTROY_VASE_SMOKE *this_02;
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
  dstrDESTROY::ProcessCDT_FIREABLE((dstrDESTROY *)this,param_1);
  if (((byte)this[0x14f] & 4) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_44);
    local_2c = _m3dVUnitY;
    local_24 = DAT_005f9998;
    local_28 = DAT_005f9994;
    iVar1 = wrsfxFindFloor(local_44,(m3dBOX *)&local_20);
    if (iVar1 != 0) {
      local_38 = local_18;
      local_34 = local_14;
      local_30 = local_10;
    }
    this_00 = (wrsfxDESTROY_VASE_PARTS *)operator_new(0x2c0);
    if (this_00 != (wrsfxDESTROY_VASE_PARTS *)0x0) {
      ppVar2 = (partEMITTER_PHYS *)
               wrsfxDESTROY_VASE_PARTS::wrsfxDESTROY_VASE_PARTS(this_00,(m3dPLANE *)&local_38);
      if (ppVar2 != (partEMITTER_PHYS *)0x0) {
        this_01 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_geom_debris);
        if (this_01 == (objOBJ *)0x0) {
          animINST::GetPos(*(animINST **)(this + 0xbc),local_44);
        }
        else {
          objOBJ::GetOrigin(this_01,local_44);
        }
        partEMITTER_PHYS::SetPosDirSpeed(ppVar2,local_44,&m3dVUnitY,(m3dV *)0x0);
        partEMITTER_PHYS::StartEmission(ppVar2);
        this_02 = (wrsfxDESTROY_VASE_SMOKE *)operator_new(0x2c0);
        if (this_02 != (wrsfxDESTROY_VASE_SMOKE *)0x0) {
          ppVar2 = (partEMITTER_PHYS *)wrsfxDESTROY_VASE_SMOKE::wrsfxDESTROY_VASE_SMOKE(this_02);
          if (ppVar2 != (partEMITTER_PHYS *)0x0) {
            partEMITTER_PHYS::SetPosDirSpeed(ppVar2,local_44,&m3dVUnitY,(m3dV *)0x0);
            partEMITTER_PHYS::StartEmission(ppVar2);
          }
        }
      }
    }
  }
  return;
}




/* from: sfx_destroy.cpp
   addr: 00466CE0 */

int __thiscall wrsfxDESTROY_FLAME::ProcessINIT(wrsfxDESTROY_FLAME *this)

{
  int iVar1;
  objOBJ *poVar2;
  entENTITY *peVar3;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  iVar1 = dstrDESTROY::ProcessINIT((dstrDESTROY *)this);
  if (iVar1 == 0) {
    return 0;
  }
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_flame_source);
  if (poVar2 != (objOBJ *)0x0) {
    objOBJ::GetOrigin(poVar2,local_a4);
    m3dMATR::Transform(local_86,(m3dMATR *)(*(int *)(this + 0xbc) + 0x60),0);
    m3dMATR::Translate(local_86,local_a4,0);
    peVar3 = entCreate(gsScenePtr,s_sfx_flame,s_sfx_flame,local_98,(void *)0x0,0);
    *(entENTITY **)(this + 0x167) = peVar3;
    if (peVar3 == (entENTITY *)0x0) {
      return 0;
    }
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
    poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_flame_emitter);
    *(objOBJ **)(this + 0x16b) = poVar2;
    if (poVar2 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar2,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
  }
  return 1;
}




/* from: sfx_destroy.cpp
   addr: 00466DD0 */

void __thiscall wrsfxDESTROY_FLAME::ProcessINIT_LEVEL(wrsfxDESTROY_FLAME *this)

{
  objOBJ *this_00;
  m3dV local_c [12];
  
  dstrDESTROY::ProcessINIT_LEVEL((dstrDESTROY *)this);
  this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_flame_source);
  if (this_00 != (objOBJ *)0x0) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    objOBJ::GetOrigin(this_00,local_c);
    animINST::Translate(*(animINST **)(*(int *)(this + 0x167) + 0xbc),local_c,0);
  }
  return;
}




/* from: sfx_destroy.cpp
   addr: 00466E30 */

void __thiscall wrsfxDESTROY_FLAME::ProcessTERM(wrsfxDESTROY_FLAME *this)

{
  if (*(msgADDR **)(this + 0x167) != (msgADDR *)0x0) {
    msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x167),2,(msgADDR *)0x0);
    *(undefined4 *)(this + 0x167) = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_destroy.cpp
   addr: 00466E60 */

void __thiscall wrsfxDESTROY_FLAME::StartExplos(wrsfxDESTROY_FLAME *this,int param_1)

{
  int iVar1;
  wrsfxDESTROY_FLAME_PART *this_00;
  partEMITTER_PHYS *this_01;
  wrsfxDESTROY_FLAME_PART_TRAIL *this_02;
  partEMITTER_PHYS *ppVar2;
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
  dstrDESTROY::StartExplos((dstrDESTROY *)this,param_1);
  if (((byte)this[0x14f] & 4) == 0) {
    return;
  }
  msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x167),2,(msgADDR *)0x0);
  *(undefined4 *)(this + 0x167) = 0;
  if ((param_1 == 0) && (*(int *)(this + 0x16b) != 0)) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_38);
    iVar1 = wrsfxFindFloor((m3dV *)&local_38,(m3dBOX *)&local_20);
    if (iVar1 != 0) {
      local_38 = local_18;
      local_34 = local_14;
      local_30 = local_10;
    }
    local_2c = _m3dVUnitY;
    local_28 = DAT_005f9994;
    local_24 = DAT_005f9998;
    this_00 = (wrsfxDESTROY_FLAME_PART *)operator_new(0x2c0);
    if (this_00 == (wrsfxDESTROY_FLAME_PART *)0x0) {
      return;
    }
    this_01 = (partEMITTER_PHYS *)wrsfxDESTROY_FLAME_PART::wrsfxDESTROY_FLAME_PART(this_00);
    if (this_01 == (partEMITTER_PHYS *)0x0) {
      return;
    }
    this_02 = (wrsfxDESTROY_FLAME_PART_TRAIL *)operator_new(0x2c0);
    if (this_02 == (wrsfxDESTROY_FLAME_PART_TRAIL *)0x0) {
      return;
    }
    ppVar2 = (partEMITTER_PHYS *)
             wrsfxDESTROY_FLAME_PART_TRAIL::wrsfxDESTROY_FLAME_PART_TRAIL(this_02);
    if (ppVar2 == (partEMITTER_PHYS *)0x0) {
      return;
    }
    partEMITTER_PHYS::AttachEmitter(this_01,ppVar2,0,0);
    *(uint *)(this_01 + 4) = *(uint *)(this_01 + 4) | 0x40000;
    partEMITTER_PHYS::SetCDTPlane(this_01,1,0,(m3dPLANE *)&local_38);
    iVar1 = partSetAreaEmissionObj(this_01,*(objOBJ **)(this + 0x16b),-1,(m3dV *)0x0);
    if (iVar1 == 0) {
      return;
    }
    partEMITTER_PHYS::StartEmission(this_01);
  }
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  return;
}




/* from: sfx_destroy.cpp
   addr: 00466FB0 */

int __thiscall
wrsfxDESTROY_FLAME::ProcessMsg
          (wrsfxDESTROY_FLAME *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if ((param_1 == 3) && (*(void **)(this + 0x167) == param_2)) {
    *(undefined4 *)(this + 0x167) = 0;
  }
  iVar1 = dstrDESTROY::ProcessMsg((dstrDESTROY *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: sfx_destroy.cpp
   addr: 00466FF0 */

int __thiscall wrsfxDESTROY_MIRROR::ProcessINIT(wrsfxDESTROY_MIRROR *this)

{
  int iVar1;
  
  iVar1 = dstrDESTROY::ProcessINIT((dstrDESTROY *)this);
  if (iVar1 == 0) {
    return 0;
  }
  animINST::Translate(*(animINST **)(this + 0xbc),0.0,1.7,0.0,2);
  m3dMATR::Translate((m3dMATR *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x10) + 0x38) + 0x7c),0.0
                     ,-1.7,0.0,2);
  objOBJ::DeclareProcAnim(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10));
  animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  animINST::AbvTerm(*(animINST **)(this + 0xbc));
  animINST::AbvInit(*(animINST **)(this + 0xbc));
  *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) | 0x800;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_destroy.cpp
   addr: 00467080 */

void __thiscall
wrsfxDESTROY_BARREL_DMG_DISPATCHER::Dispatch
          (wrsfxDESTROY_BARREL_DMG_DISPATCHER *this,entENTITY *param_1,dmgDAMAGE *param_2,
          entENTITY *param_3)

{
  byte bVar1;
  entENTITY *peVar2;
  char *pcVar3;
  int iVar4;
  float extraout_ECX;
  char *pcVar5;
  float extraout_EDX;
  bool bVar6;
  float fVar7;
  m3dV local_18 [4];
  float local_14;
  m3dV local_c [4];
  float local_8;
  
  peVar2 = param_3;
  pcVar3 = *(char **)(*(int *)(param_3 + 0xbc) + 0x1c);
  if ((byte *)pcVar3 == (byte *)0x0) {
    pcVar3 = s_;
  }
  pcVar5 = *(char **)(*(animINST **)(param_1 + 0xbc) + 0x1c);
  if ((byte *)pcVar5 == (byte *)0x0) {
    pcVar5 = s_;
  }
  do {
    bVar1 = *pcVar5;
    bVar6 = bVar1 < (byte)*pcVar3;
    if (bVar1 != *pcVar3) {
LAB_004670df:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_004670e4;
    }
    if (bVar1 == 0) break;
    bVar1 = ((byte *)pcVar5)[1];
    bVar6 = bVar1 < ((byte *)pcVar3)[1];
    if (bVar1 != ((byte *)pcVar3)[1]) goto LAB_004670df;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
    pcVar3 = (char *)((byte *)pcVar3 + 2);
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_004670e4:
  if (iVar4 == 0) {
    animINST::GetCenter(*(animINST **)(param_1 + 0xbc),local_18);
    animINST::GetCenter(*(animINST **)(param_3 + 0xbc),local_c);
    local_14 = local_14 - local_8;
    if (___real_00000000 <= local_14) {
      if (local_14 <= ___real_3f800000) {
        param_3 = (entENTITY *)(___real_3f800000 - local_14 * ___real_3f4ccccd);
      }
      else {
        param_3 = (entENTITY *)0x3e4ccccd;
      }
    }
    else {
      param_3 = (entENTITY *)0x3f800000;
    }
    fVar7 = m3dRandRange(extraout_ECX,extraout_EDX);
    msgSYSTEM::PostTimeMsgData
              (&msgSystem,(msgADDR *)param_1,0x4c5,(msgDATA *)param_2,(msgADDR *)peVar2,
               fVar7 * (float)param_3);
    return;
  }
  dmgDISPATCHER::Dispatch((dmgDISPATCHER *)this,param_1,param_2,param_3);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_destroy.cpp
   addr: 004671B0 */

void __thiscall
wrsfxDESTROY_BARREL::ProcessCDT_FIREABLE(wrsfxDESTROY_BARREL *this,dmgDAMAGE *param_1)

{
  objOBJ *this_00;
  float local_ac;
  undefined **local_a8;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  dstrDESTROY::ProcessCDT_FIREABLE((dstrDESTROY *)this,param_1);
  if (((byte)this[0x14f] & 4) != 0) {
    this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_geom_debris);
    if (this_00 == (objOBJ *)0x0) {
      animINST::GetPos(*(animINST **)(this + 0xbc),local_a4);
    }
    else {
      objOBJ::GetOrigin(this_00,local_a4);
    }
    local_ac = animINST::GetScale(*(animINST **)(this + 0xbc));
    local_ac = local_ac * ___real_3fc00000;
    m3dMATR::MakeLCS2WCS_VY(local_86,local_a4,&m3dVUnitY);
    entCreate(gsScenePtr,s_sfx_barrel_expl,s_sfx_barrel_expl,local_98,&local_ac,0);
    local_a8 = &wrsfxDESTROY_BARREL_DMG_DISPATCHER::_vftable_;
    dmgDispatchExplosDamage
              ((entENTITY *)this,local_a4,20.0,local_ac * ___real_40a00000,2,-1,(cdtINFO *)0x0,
               0xffffffff,(dmgDISPATCHER *)&local_a8);
  }
  return;
}




/* from: sfx_destroy.cpp
   addr: 004672C0 */

wrsfxDESTROY_FLAME_PART * __thiscall
wrsfxDESTROY_FLAME_PART::wrsfxDESTROY_FLAME_PART(wrsfxDESTROY_FLAME_PART *this)

{
  uint uVar1;
  m3dSPL *this_00;
  uint uVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x21,150.0,8.0);
  *(undefined ***)this = &_vftable_;
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(this_00,0,8,1);
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.41666666,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,5.0,3.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.1,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc11ccccd;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x40400000;
  *(undefined4 *)(this + 0xb8) = 0x40a00000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x3f666667;
  *(undefined4 *)(this + 0xc4) = 0x3fc00000;
  *(undefined4 *)(this + 200) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,DAT_0060e6d4);
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.1,0.0,0.0,-1);
  uVar1 = *(uint *)(this + 4);
  uVar2 = uVar1 | 0x30000;
  *(uint *)(this + 4) = uVar2;
  *(uint *)(this + 4) = CONCAT22((short)(uVar2 >> 0x10),(short)uVar1) | 0x2000;
  return this;
}




/* from: sfx_destroy.cpp
   addr: 00467420 */

wrsfxDESTROY_FLAME_PART_TRAIL * __thiscall
wrsfxDESTROY_FLAME_PART_TRAIL::wrsfxDESTROY_FLAME_PART_TRAIL(wrsfxDESTROY_FLAME_PART_TRAIL *this)

{
  m3dSPL *pmVar1;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,660.0,0.9);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.6,0.3);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,20.0,(m3dSPL_LINEAR1D *)0x0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,0.3);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,1.0,0.001);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.0,0.0,(m3dSPL_LINEAR1D *)pmVar1,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar1);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc0a00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x3dcccccd;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f19999a;
  *(undefined4 *)(this + 0xd0) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,DAT_0060e6d4);
  return this;
}




/* from: sfx_destroy.cpp
   addr: 004675B0 */

wrsfxDESTROY_VASE_PARTS * __thiscall
wrsfxDESTROY_VASE_PARTS::wrsfxDESTROY_VASE_PARTS(wrsfxDESTROY_VASE_PARTS *this,m3dPLANE *param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xbe,1500.0,6.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.041666668,1500.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.25,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,4.5,1.5);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.1,0.05,(m3dSPL_LINEAR1D *)0x0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.495,178.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,180.0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc11ccccd;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x40400000;
  *(undefined4 *)(this + 0xb8) = 0x3fc00000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xe8) = 0x3f000000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,DAT_0060e6dc);
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.4,0.3,4);
  partEMITTER_PHYS::SetCDTPlane((partEMITTER_PHYS *)this,1,0,param_1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000;
  return this;
}




/* from: sfx_destroy.cpp
   addr: 004677B0 */

wrsfxDESTROY_VASE_SMOKE * __thiscall
wrsfxDESTROY_VASE_SMOKE::wrsfxDESTROY_VASE_SMOKE(wrsfxDESTROY_VASE_SMOKE *this)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x1e,200.0,2.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.041666668,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.25,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,100.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.5,0.5);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,1.5,0.5,(m3dSPL_LINEAR1D *)0x0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.08,130.05);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0x3fe66666;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x3f800000;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xe8) = 0x3f000000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,DAT_0060e6e0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,4.0,0.1);
  return this;
}




/* from: sfx_destroy.cpp
   addr: 00467980 */

entENTITY * __fastcall wrsfxDESTROY_VASE::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x167);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_destroy.cpp
   addr: 004679C0 */

entENTITY * __fastcall wrsfxDESTROY_TRIPOD::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x16f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined4 *)(this + 0x16b) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_destroy.cpp
   addr: 00467A10 */

entENTITY * __fastcall wrsfxDESTROY_MIRROR::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x167);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_destroy.cpp
   addr: 00467A50 */

entENTITY * __fastcall wrsfxDESTROY_BARREL::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x167);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}

