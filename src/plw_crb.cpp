
/* from: plw_crb.cpp
   addr: 0040C2D0 */

int __fastcall pwpCRBInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pwp_crb,0x50435242,0x50,pwpCROSSBOW::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pwp_crb_pjl,0x50435242,0x2d,pwpCROSSBOW_PJL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pwp_crb_pjl_expl,0x50435242,0x2d,pwpCRB_EXPLOSION::Create,(char *)0x0,1
                          );
  if (iVar1 == 0) {
    return 0;
  }
  pwpCROSSBOW::pTexFlame = txmMANAGER::Add(txmManager,s_pwp_crb_pjl_flame,0x40003,1);
  if (pwpCROSSBOW::pTexFlame == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpCROSSBOW::pTexSparks = txmMANAGER::Add(txmManager,s_pwp_crb_pjl_sparks,0x40000,1);
  if (pwpCROSSBOW::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpCROSSBOW::pTexScorchMark = txmMANAGER::Add(txmManager,s_sfx_bsk_scorch_mark,0x40000,1);
  if (pwpCROSSBOW::pTexScorchMark == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(6,(sncSOUND_DESCR_3D *)&DAT_00602660);
  return (uint)(iVar1 != 0);
}




/* from: plw_crb.cpp
   addr: 0040C3B0 */

entENTITY * __fastcall pwpCROSSBOW_PJL::Create(animINST *param_1)

{
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x174);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x15f) = 0xffffffff;
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xffffffff;
    *(undefined4 *)(this + 0x157) = 0xbf800000;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x16b) = 0xbf800000;
    *(undefined4 *)(this + 0x170) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: plw_crb.cpp
   addr: 0040C420 */

entENTITY * __fastcall pwpCRB_EXPLOSION::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x15f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: plw_crb.cpp
   addr: 0040C470
   addr: 0040C470 */

void * __thiscall
pwpCRB_EXPLOSION::_scalar_deleting_destructor_(pwpCRB_EXPLOSION *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Removing unreachable block (ram,0x0040c8cf) */
/* from: plw_crb.cpp
   addr: 0040C4A0 */

int __thiscall pwpCROSSBOW::SetupAniSystem(pwpCROSSBOW *this)

{
  animTPL *paVar1;
  undefined4 *puVar2;
  animSYSTEM *this_00;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  animSEQ *local_c;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  if ((((byte)this[0x88] & 1) == 0) || ((gsAppState & 0x800U) != 0)) {
    if (*(animSEQ **)(paVar1 + 0x90) == (animSEQ *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(paVar1 + 0x8c);
      local_c = *(animSEQ **)(paVar1 + 0x90);
    }
    *(undefined4 *)(paVar1 + 0x8c) = 0xb;
    puVar2 = (undefined4 *)operator_new(0x5dc);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0xb;
      puVar2 = puVar2 + 1;
      iVar7 = 0xb;
      puVar5 = puVar2;
      do {
        puVar8 = puVar5;
        for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        puVar5[0x20] = 2;
        iVar7 = iVar7 + -1;
        puVar5 = puVar5 + 0x22;
      } while (iVar7 != 0);
    }
    *(undefined4 **)(paVar1 + 0x90) = puVar2;
    _entAnimSetSeqName(paVar1,0,s_PWP_SEQ_UNUSED);
    _entAnimSetSeqName(paVar1,1,s_PWP_SEQ_IDLE);
    _entAnimSetSeqName(paVar1,2,s_PWP_SEQ_IDLE_1);
    _entAnimSetSeqName(paVar1,3,s_PWP_SEQ_RUN);
    _entAnimSetSeqName(paVar1,4,s_PWP_SEQ_TAKE_OFF);
    _entAnimSetSeqName(paVar1,5,s_PWP_SEQ_TAKE_OFF_EMPTY);
    _entAnimSetSeqName(paVar1,6,s_PWP_SEQ_PUT_ON);
    _entAnimSetSeqName(paVar1,7,s_PWP_SEQ_SHOOT);
    _entAnimSetSeqName(paVar1,8,s_PWP_SEQ_RECHARGE);
    _entAnimSetSeqName(paVar1,9,s_PWP_SEQ_FORCE_RECHARGE);
    _entAnimSetSeqName(paVar1,10,s_CRB_SEQ_PREPARE_TO_SHOOT);
    entAnimAssignTplSeq(paVar1,local_c,iVar6);
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x40) = 0;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x44) = 0x3f800000;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x50) = 0x43fa0000;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x80) = 0;
    pwpWEAPON::AdjustTiming((pwpWEAPON *)this);
    this_00 = (animSYSTEM *)operator_new(0x14);
    if ((this_00 == (animSYSTEM *)0x0) ||
       (piVar3 = (int *)animSYSTEM::animSYSTEM(this_00,0xb,0), piVar3 == (int *)0x0)) {
      return 0;
    }
    *(int **)(paVar1 + 0xa4) = piVar3;
    (**(code **)(*piVar3 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0xc))(1,0,0,0xffffffff);
    (**(code **)(*piVar3 + 0x14))(1);
    (**(code **)(*piVar3 + 0x14))(3);
    (**(code **)(*piVar3 + 4))(3,1,0,1,1);
    (**(code **)(*piVar3 + 4))(3,4,0,4,1);
    (**(code **)(*piVar3 + 4))(3,6,0,6,1);
    (**(code **)(*piVar3 + 4))(3,7,0,7,0);
    (**(code **)(*piVar3 + 0xc))(4,1,1,0xffffffff);
    (**(code **)(*piVar3 + 4))(4,6,0,6,0);
    (**(code **)(*piVar3 + 4))(6,3,1,3,1);
    (**(code **)(*piVar3 + 4))(6,1,0,1,1);
    (**(code **)(*piVar3 + 4))(6,6,2,6,1);
    (**(code **)(*piVar3 + 4))(6,7,1,7,1);
    (**(code **)(*piVar3 + 0xc))(7,1,0,10);
    (**(code **)(*piVar3 + 4))(7,8,0,8,0);
    (**(code **)(*piVar3 + 4))(7,5,0,5,0);
    (**(code **)(*piVar3 + 0xc))(8,1,0,0xffffffff);
    (**(code **)(*piVar3 + 4))(4,1,0,1,0);
    (**(code **)(*piVar3 + 4))(4,6,0,6,0);
    (**(code **)(*piVar3 + 4))(1,6,0,6,0);
    (**(code **)(*piVar3 + 4))(3,6,0,6,0);
    (**(code **)(*piVar3 + 4))(7,6,0,6,0);
    (**(code **)(*piVar3 + 4))(8,6,0,6,0);
    (**(code **)(*piVar3 + 4))(10,6,0,6,0);
    (**(code **)(*piVar3 + 0x20))(1,2);
    (**(code **)(*piVar3 + 4))(2,1,1,1,1);
    iVar6 = *(int *)(paVar1 + 0x90);
    if (*(int *)(iVar6 + 0x328) == 2) {
      puVar2 = (undefined4 *)(iVar6 + 0x220);
      puVar5 = (undefined4 *)(iVar6 + 0x2a8);
      for (iVar7 = 0x22; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    (**(code **)(*piVar3 + 0x20))(4,5);
    (**(code **)(*piVar3 + 0xc))(10,1,0,0xffffffff);
    (**(code **)(*piVar3 + 4))(10,8,0,8,0);
    (**(code **)(*piVar3 + 4))(10,5,0,5,0);
    iVar6 = *(int *)(paVar1 + 0x90);
    if (*(int *)(iVar6 + 0x548) == 2) {
      puVar2 = (undefined4 *)(iVar6 + 0x440);
      puVar5 = (undefined4 *)(iVar6 + 0x4c8);
      for (iVar7 = 0x22; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    (**(code **)(*piVar3 + 0x20))(8,9);
    (**(code **)(*piVar3 + 4))(3,9,0,9,0);
    (**(code **)(*piVar3 + 4))(10,9,1,9);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_crb.cpp
   addr: 0040C910 */

int __thiscall pwpCROSSBOW::Shoot(pwpCROSSBOW *this,entENTITY *param_1,m3dV *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint local_90 [5];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined2 local_56;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  gsEVENT local_28 [2];
  undefined2 local_26;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  ulong local_4;
  
  local_58 = 0;
  local_57 = 0x40;
  local_56 = 0x14;
  local_44 = 0;
  gsEVENT::gsEVENT(local_28);
  local_10 = _m3dVUnitY;
  local_c = DAT_005f9994;
  local_20 = 1;
  local_8 = DAT_005f9998;
  local_4 = 0;
  local_24 = 0;
  local_26 = 0x28;
  local_54 = 4;
  local_56 = 0x58;
  iVar1 = wpnWEAPON::Shoot((wpnWEAPON *)this,*(entENTITY **)(this + 0x187),param_2);
  if (iVar1 != 0) {
    iVar1 = 8;
    if (((byte)this[0x193] & 8) == 0) {
      objOBJ::GetOrigin(*(objOBJ **)(this + 0x17b),(m3dV *)&local_64);
      local_70 = *(float *)param_2 - local_64;
      local_6c = *(float *)(param_2 + 4) - local_60;
      local_68 = *(float *)(param_2 + 8) - local_5c;
      m3dNormalize((m3dV *)&local_70);
      local_50 = *(undefined4 *)param_2;
      local_4c = *(undefined4 *)(param_2 + 4);
      local_48 = *(undefined4 *)(param_2 + 8);
      local_40 = local_64;
      local_3c = local_60;
      local_38 = local_5c;
      local_34 = local_70;
      local_30 = local_6c;
      local_2c = local_68;
      local_44 = 0;
    }
    else {
      local_90[4] = _m3dVZero;
      local_90[0] = 0;
      local_90[1] = 0;
      local_90[2] = 0;
      local_90[3] = 0;
      local_7c = DAT_00963740;
      local_78 = DAT_00963744;
      local_74 = 0;
      puVar2 = DAT_009483ac;
      puVar3 = local_90;
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      if ((local_90[0] & 2) == 0) {
        local_90[4] = *(uint *)param_2;
        local_7c = *(undefined4 *)(param_2 + 4);
        local_78 = *(undefined4 *)(param_2 + 8);
        local_20 = 5;
        local_44 = 1;
      }
      else {
        if (local_90[1] == 0) {
          local_20 = 1;
        }
        else {
          local_20 = (int)(char)~*(byte *)(*(int *)(local_90[1] + 0x13c) + 0xb8) & 1;
        }
        local_1c = local_90[4];
        local_18 = local_7c;
        local_14 = local_78;
        scnSCENE::GetCDTFace(gsScenePtr,(cdtINFO *)local_90,(m3dPOLY *)0x0,(m3dV *)&local_10);
        local_4 = gsEffEnvirColor((cdtINFO *)local_90,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
        local_44 = 1;
      }
    }
    (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c6,&local_58,0x20000);
    return 1;
  }
  return 0;
}




/* from: plw_crb.cpp
   addr: 0040CB80 */

int __thiscall pwpCROSSBOW::ProcessINIT(pwpCROSSBOW *this)

{
  int iVar1;
  objOBJ *this_00;
  pwpCROSSBOW *ppVar2;
  char local_40 [64];
  
  iVar1 = pwpWEAPON::ProcessINIT((pwpWEAPON *)this);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  ppVar2 = this + 0x1b3;
  do {
    iVar1 = iVar1 + 1;
    sprintf(local_40,s_arrow_02d,iVar1);
    this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),local_40);
    *(objOBJ **)ppVar2 = this_00;
    if (this_00 == (objOBJ *)0x0) break;
    objOBJ::SetStateProcYes(this_00,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    ppVar2 = ppVar2 + 4;
  } while (iVar1 < 6);
  objOBJ::AllocVertNormalList(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10));
  *(uint *)(*(int *)(this + 0x183) + 4) = *(uint *)(*(int *)(this + 0x183) + 4) | 0x400;
  *(uint *)(this + 0x193) = *(uint *)(this + 0x193) | 2;
  *(undefined4 *)(this + 0x19b) = 0;
  *(undefined4 *)(this + 0x197) = 1;
  *(undefined4 *)(this + 0x18b) = 6;
  *(undefined4 *)(this + 399) = 0;
  (**(code **)(*(int *)this + 0xa0))(0x41c80000);
  *(undefined4 *)(this + 0x15b) = 0x42700000;
  *(undefined1 **)(this + 0x157) = &DAT_42480000;
  wpnWEAPON::SetAmmo((wpnWEAPON *)this,0.0);
  return 1;
}




/* from: plw_crb.cpp
   addr: 0040CC80 */

void __thiscall pwpCROSSBOW::Anim2Sound(pwpCROSSBOW *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,*(int *)(this + 0x19b));
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
    return;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,2);
  if ((iVar1 != 0) || (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,2), iVar1 != 0)
     ) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
    return;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,3);
  if ((iVar1 == 0) && (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,3), iVar1 == 0)
     ) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,2);
    if (iVar1 != 0) {
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
      return;
    }
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,1);
    if (iVar1 == 0) {
      return;
    }
  }
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
  return;
}




/* from: plw_crb.cpp
   addr: 0040CD50 */

void __thiscall pwpCROSSBOW::UpdateSound(pwpCROSSBOW *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xf8);
  if ((uVar1 & 2) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_006026c8,0);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if ((uVar1 & 8) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602798,0);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if ((uVar1 & 4) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602730,0);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if ((uVar1 & 1) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602660,0);
  }
  pwpWEAPON::UpdateSound((pwpWEAPON *)this);
  return;
}




/* from: plw_crb.cpp
   addr: 0040CDE0 */

void __thiscall pwpCROSSBOW::ProcessFRAME(pwpCROSSBOW *this)

{
  int iVar1;
  uint uVar2;
  pwpCROSSBOW *ppVar3;
  
  pwpWEAPON::ProcessFRAME((pwpWEAPON *)this);
  if (((byte)(*(animINST **)(this + 0xbc))[4] & 1) != 0) {
    return;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,0);
  if ((iVar1 == 0) || (5 < *(int *)(this + 0x1af))) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,1);
    if ((iVar1 == 0) &&
       (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,1), iVar1 == 0)) {
      iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,1);
      if (iVar1 != 0) {
        uVar2 = 6U - *(int *)(this + 399) & ((int)(6U - *(int *)(this + 399)) < 1) - 1;
        *(uint *)(this + 0x1af) = uVar2;
        if ((int)uVar2 < 6) {
          ppVar3 = this + uVar2 * 4 + 0x1b3;
          iVar1 = 6 - uVar2;
          do {
            objOBJ::SetStateProcNo(*(objOBJ **)ppVar3,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
            ppVar3 = ppVar3 + 4;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x1c7),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      }
    }
    else {
      uVar2 = 6U - *(int *)(this + 399) & ((int)(6U - *(int *)(this + 399)) < 1) - 1;
      *(uint *)(this + 0x1af) = uVar2;
      if ((int)uVar2 < 6) {
        ppVar3 = this + uVar2 * 4 + 0x1b3;
        iVar1 = 6 - uVar2;
        do {
          objOBJ::SetStateProcNo(*(objOBJ **)ppVar3,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
          ppVar3 = ppVar3 + 4;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  else {
    objOBJ::SetStateProcYes
              (*(objOBJ **)(this + *(int *)(this + 0x1af) * 4 + 0x1b3),8,
               (_func_int_objOBJ_ptr_void_ptr *)0x0);
    *(int *)(this + 0x1af) = *(int *)(this + 0x1af) + 1;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,4);
  if (iVar1 == 0) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,3);
    if (iVar1 != 0) {
      ThrowClip(this,0);
    }
    return;
  }
  ThrowClip(this,1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_crb.cpp
   addr: 0040CF40 */

void __thiscall pwpCROSSBOW::ProcessSHOOT(pwpCROSSBOW *this,void *param_1)

{
  float10 fVar1;
  msgDATA *unaff_retaddr;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  m3dMATR amStack_8a [138];
  
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_98);
  if (((byte)this[0x88] & 4) == 0) {
    if (*(int *)((int)param_1 + 0x14) != 0) {
      ShowCollisSFX(this,(pjlEV_CDT *)((int)param_1 + 0x30));
      return;
    }
  }
  else {
    (**(code **)(*(int *)this + 0x68))(0x3f800000);
    if (*(int *)(unaff_retaddr + 0x14) != 0) {
      fStack_b0 = 0.0;
      uStack_a8 = 0xffffffff;
      uStack_a4 = 0;
      uStack_c0 = *(undefined4 *)(unaff_retaddr + 0x3c);
      uStack_a0 = 2;
      uStack_bc = *(undefined4 *)(unaff_retaddr + 0x40);
      uStack_b4 = 4;
      uStack_b8 = *(undefined4 *)(unaff_retaddr + 0x44);
      uStack_ac = 0x40000000;
      fVar1 = (float10)(**(code **)(*(int *)this + 0xa4))();
      fStack_b0 = (float)(fVar1 + fVar1);
      uStack_a8 = *(undefined4 *)(*(int *)(this + 0x187) + 0x8c);
      pwpOPP_SFX::Start((pwpOPP_SFX_START *)&uStack_c0);
      ShowCollisSFX(this,(pjlEV_CDT *)(unaff_retaddr + 0x30));
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,*(entIACTIVE_OBJ **)(this + 0x187),0x4c6,unaff_retaddr,0x90000,
                 0xffffffff,0xfffffffd);
      return;
    }
    (**(code **)(*(int *)this + 0xa4))();
    m3dMATR::MakeLCS2WCS_VZ
              (amStack_8a,(m3dV *)(unaff_retaddr + 0x18),(m3dV *)(unaff_retaddr + 0x24));
    uStack_9c = 0x3e4ccccd;
    local_98 = 0x3e4ccccd;
    uStack_94 = 0x3e4ccccd;
    entCreate(gsScenePtr,s_pwp_crb_pjl,s_pwp_crb_pjl,(animCREATE_DATA *)&uStack_9c,&stack0xfffffed4,
              0);
  }
  return;
}




/* from: plw_crb.cpp
   addr: 0040D1F0 */

void __thiscall pwpCROSSBOW::ShowCollisSFX(pwpCROSSBOW *this,pjlEV_CDT *param_1)

{
  pteSPOT *this_00;
  m3dSPL *this_01;
  m3dCTRL_TIME *this_02;
  m3dCOLOR amStack_d8 [4];
  undefined4 uStack_d4;
  sncSOUND_DESCR_3D *psVar1;
  m3dV *pmVar2;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined2 local_a6;
  undefined4 local_a4;
  m3dV *local_a0;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_a8 = 0;
  local_a7 = 0x40;
  local_a4 = 0x3f800000;
  local_a6 = 8;
  if (*(int *)(param_1 + 8) == 0) {
    m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),&m3dVUnitY);
    local_9c = 0x3e99999a;
    entCreate(gsScenePtr,s_sfx_water_expl,s_sfx_water_expl,local_98,&local_9c,0);
    psVar1 = (sncSOUND_DESCR_3D *)&DAT_00602800;
    pmVar2 = (m3dV *)(param_1 + 0xc);
  }
  else {
    pmVar2 = (m3dV *)(param_1 + 0xc);
    uStack_d4 = 0x40d29c;
    local_a0 = pmVar2;
    wrsfxSCORCHMARK::Add
              ((float)pTexScorchMark,(float)pmVar2,(txmTEXTURE *)0x3f000000,(m3dV *)0x41200000,
               *(ulong *)(param_1 + 0x24),0x5343524d,0.0,0.0);
    m3dMATR::MakeLCS2WCS_VY(local_86,pmVar2,(m3dV *)(param_1 + 0x18));
    local_a4 = 0x3ccccccd;
    entCreate(gsScenePtr,s_pwp_crb_pjl_expl,s_pwp_crb_pjl_expl,local_98,&local_a8,0);
    this_00 = (pteSPOT *)operator_new(0x108);
    if (this_00 == (pteSPOT *)0x0) {
      return;
    }
    pteSPOT::pteSPOT(this_00,1);
    *(undefined4 *)(this_00 + 0xf8) = 0;
    *(undefined4 *)(this_00 + 0xfc) = 0;
    *(undefined4 *)(this_00 + 0x100) = 0;
    *(undefined4 *)(this_00 + 0x104) = 0;
    *(undefined ***)this_00 = &pteSPOT_ANIM::_vftable_;
    (**(code **)(*(int *)this_00 + 0x14))();
    pteSPOT::SetRadius(this_00,2.0);
    m3dCOLOR::m3dCOLOR(amStack_d8,0xffffec1a);
    pteSPOT::SetColor(this_00);
    pteSHADER::Register((pteSHADER *)this_00);
    this_01 = (m3dSPL *)operator_new(0x34);
    if (this_01 == (m3dSPL *)0x0) {
      this_01 = (m3dSPL *)0x0;
    }
    else {
      *(undefined4 *)(this_01 + 4) = 0;
      *(undefined4 *)(this_01 + 8) = 0;
      *(undefined4 *)(this_01 + 0xc) = 0;
      *(undefined4 *)(this_01 + 0x14) = 8;
      *(undefined4 *)(this_01 + 0x18) = 8;
      *(undefined4 *)(this_01 + 0x1c) = 1;
      *(undefined4 *)(this_01 + 0x20) = 0;
      *(undefined4 *)(this_01 + 0x24) = 0;
      *(undefined4 *)(this_01 + 0x28) = 0;
      *(undefined4 *)(this_01 + 0x2c) = 0;
      *(undefined4 *)(this_01 + 0x30) = 0;
      *(undefined ***)this_01 = &m3dSPL_LINEAR1D::_vftable_;
      m3dSPL::AllocKpList(this_01,4);
    }
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_01,0,0.0,2.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_01,1,0.1,3.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_01,2,0.2,3.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_01,3,0.7,0.0);
    this_02 = (m3dCTRL_TIME *)operator_new(0x20);
    if (this_02 == (m3dCTRL_TIME *)0x0) {
      this_02 = (m3dCTRL_TIME *)0x0;
    }
    else {
      *(undefined4 *)(this_02 + 4) = 0;
      *(undefined4 *)(this_02 + 8) = 0;
      *(undefined4 *)(this_02 + 0xc) = 0x3fc00000;
      *(undefined4 *)(this_02 + 0x10) = 0x3f800000;
      *(undefined4 *)(this_02 + 0x14) = 0;
      *(undefined ***)this_02 = &m3dCTRL_TIME::_vftable_;
      m3dCTRL_TIME::Enable(this_02,1);
      *(undefined4 *)(this_02 + 0x18) = 0;
      *(m3dSPL **)(this_02 + 0x1c) = this_01;
      *(undefined ***)this_02 = &m3dCTRL_1D_SPL::_vftable_;
    }
    *(uint *)((m3dCTRL_1D *)this_02 + 4) = *(uint *)((m3dCTRL_1D *)this_02 + 4) | 6;
    pteSPOT_ANIM::SetCtrlRad((pteSPOT_ANIM *)this_00,(m3dCTRL_1D *)this_02);
    pteSPOT_ANIM::SetCurTime((pteSPOT_ANIM *)this_00,0.0);
    *(uint *)(this_00 + 0xf4) = *(uint *)(this_00 + 0xf4) | 4;
    psVar1 = (sncSOUND_DESCR_3D *)&DAT_00602868;
    *(uint *)(this_00 + 4) = *(uint *)(this_00 + 4) | 0x40;
    pmVar2 = local_a0;
  }
  gsSND_SYSTEM::Play(gsSysSound,psVar1,pmVar2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_crb.cpp
   addr: 0040D490 */

void __thiscall pwpCROSSBOW::ThrowClip(pwpCROSSBOW *this,int param_1)

{
  objOBJ *poVar1;
  entENTITY *peVar2;
  undefined1 local_150;
  undefined1 local_14f;
  undefined2 local_14e;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  m3dMATR local_86 [134];
  
  local_144 = DAT_00963740;
  local_138 = DAT_00963740;
  local_150 = 0;
  local_14f = 0x40;
  local_14c = 8;
  local_148 = _m3dVZero;
  local_140 = DAT_00963744;
  local_13c = _m3dVZero;
  local_134 = DAT_00963744;
  local_b8 = 0;
  local_b4 = 0x3f19999a;
  local_b0 = 0x3f4ccccd;
  local_ac = 0x41200000;
  local_a8 = 0x3e99999a;
  local_a4 = 0xbf800000;
  local_a0 = 0xbf800000;
  local_9c = 0xbf800000;
  local_14e = 0xb8;
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_98);
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_clip);
  if (poVar1 != (objOBJ *)0x0) {
    animINST::GetMatrL2W(*(animINST **)(*(int *)(this + 0x187) + 0xbc),local_86);
    m3dMATR::Translate(local_86,1.0,1.3,0.1,1);
    local_98 = 0x3e4ccccd;
    local_94 = 0x3e4ccccd;
    local_90 = 0x3e4ccccd;
    m3dMATR::GetAxisZ(local_86,(m3dV *)&local_148);
    local_144 = 0xbe99999a;
    local_b0 = 0x3f000000;
    local_b4 = 0x3ecccccd;
    peVar2 = entCreate(gsScenePtr,s_rigid,s_pwp_crb_clip,(animCREATE_DATA *)&local_98,&local_150,0);
    if (peVar2 != (entENTITY *)0x0) {
      objOBJ::SetConstColor
                (*(objOBJ **)(*(int *)(peVar2 + 0xbc) + 0x10),*(ulong *)(this + 0x9c),2,8);
      *(uint *)(*(int *)(peVar2 + 0xbc) + 4) = *(uint *)(*(int *)(peVar2 + 0xbc) + 4) | 0x10;
      msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)peVar2,2,(msgADDR *)0x0,5.0);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_crb.cpp
   addr: 0040D670 */

int __thiscall pwpCRB_PJL_SFX::StartSFX(pwpCRB_PJL_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  animINST *this_00;
  undefined4 uVar1;
  int iVar2;
  objOBJ *this_01;
  pteSPOT *this_02;
  m3dCTRL_3D *pmVar3;
  m3dCOLOR amStack_44 [16];
  undefined4 local_34;
  char local_10 [16];
  
  this_00 = *(animINST **)(param_1 + 0xbc);
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    local_34 = 0x40d69c;
    sprintf(local_10,s_trail_plane_02d);
    this_01 = objFindName(*(objOBJ **)(this_00 + 0x10),local_10);
    if (this_01 == (objOBJ *)0x0) {
      return 0;
    }
    objOBJ::SetStateRendYes(this_01,0x60);
    *(uint *)this_01 = *(uint *)this_01 | 4;
  } while (iVar2 < 2);
  this_02 = (pteSPOT *)operator_new(0x108);
  if (this_02 == (pteSPOT *)0x0) {
    this_02 = (pteSPOT *)0x0;
  }
  else {
    pteSPOT::pteSPOT(this_02,1);
    *(undefined4 *)(this_02 + 0xf8) = 0;
    *(undefined4 *)(this_02 + 0xfc) = 0;
    *(undefined4 *)(this_02 + 0x100) = 0;
    *(undefined4 *)(this_02 + 0x104) = 0;
    *(undefined ***)this_02 = &pteSPOT_ANIM::_vftable_;
  }
  *(pteSPOT **)this = this_02;
  if (this_02 == (pteSPOT *)0x0) {
    return 0;
  }
  pmVar3 = (m3dCTRL_3D *)operator_new(0x2c);
  if (pmVar3 == (m3dCTRL_3D *)0x0) {
    pmVar3 = (m3dCTRL_3D *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0x3f800000;
    *(undefined4 *)(pmVar3 + 0x10) = 0x3f800000;
    *(undefined4 *)(pmVar3 + 0x14) = 0;
    *(undefined ***)pmVar3 = &m3dCTRL_TIME::_vftable_;
    *(uint *)(pmVar3 + 4) = *(uint *)(pmVar3 + 4) | 1;
    *(undefined4 *)(pmVar3 + 0x18) = _m3dVZero;
    *(undefined4 *)(pmVar3 + 0x1c) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(animINST **)(pmVar3 + 0x24) = this_00;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x20) = uVar1;
    *(undefined ***)pmVar3 = &animCTRL_3D_FOLLOW::_vftable_;
    *(undefined4 *)(pmVar3 + 0x14) = 2;
  }
  pteSPOT_ANIM::SetCtrlPos(*(pteSPOT_ANIM **)this,pmVar3);
  pteSPOT::SetRadius(*(pteSPOT **)this,2.0);
  local_34 = 0x42aa0000;
  m3dCOLOR::m3dCOLOR(amStack_44,0xffffec1a);
  pteSPOT::SetColor(*(pteSPOT **)this);
  pteSHADER::Register(*(pteSHADER **)this);
  animINST::SetAnimSeq(this_00,0,0.0);
  return 1;
}




/* from: plw_crb.cpp
   addr: 0040D7F0 */

int __thiscall pwpCROSSBOW_PJL::ProcessINIT(pwpCROSSBOW_PJL *this,physINIT *param_1)

{
  physMATH *this_00;
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  objOBJ *this_01;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  m3dV local_8c [12];
  m3dMATR local_80 [64];
  m3dMATR local_40 [64];
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x157) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x4c);
    this[0x16f] = *(pwpCROSSBOW_PJL *)(param_1 + 0x50);
    if (((byte)this[0x88] & 4) != 0) {
      if (*(int *)(param_1 + 0x48) != -1) {
        peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
        if (peVar2 != (entIACTIVE_OBJ *)0x0) {
          physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
        }
      }
      *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x48);
    }
    if (*(int *)(gsSysMP + 0x28) != 4) {
      pwpCRB_PJL_SFX::StartSFX
                ((pwpCRB_PJL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
    }
    *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 2;
    this_01 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_bolt);
    this_00 = *(physMATH **)(this + 0x14f);
    local_98 = *(undefined4 *)(this_00 + 0x48);
    local_94 = *(undefined4 *)(this_00 + 0x4c);
    local_90 = *(undefined4 *)(this_00 + 0x50);
    physMATH::GetPos(this_00,local_8c);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    m3dMATR::GetScale((m3dMATR *)(this_01 + 0x3c),&local_9c,&local_a4,&local_a0);
    m3dMATR::Identity(local_80);
    m3dMATR::MakeLCS2WCS_VZ(local_80,local_8c,(m3dV *)&local_98);
    m3dMATR::Scale(local_80,local_9c,local_a4,local_a0,1);
    m3dMATR::Invert((m3dMATR *)(*(int *)(this_01 + 0x2c) + 0x3c),local_40);
    m3dMultiplyMatr(local_80,local_40,(m3dMATR *)(this_01 + 0x7c));
    objOBJ::DeclareProcAnim(this_01);
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    return 1;
  }
  return 0;
}




/* from: plw_crb.cpp
   addr: 0040D9A0 */

void __thiscall pwpCROSSBOW_PJL::ShowCollisSFX(pwpCROSSBOW_PJL *this,pjlEV_CDT *param_1)

{
  m3dSPL *this_00;
  m3dCTRL_TIME *this_01;
  sncSOUND_DESCR_3D *psVar1;
  m3dV *pmVar2;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined2 local_a6;
  undefined4 local_a4;
  pjlEV_CDT *local_a0;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_a8 = 0;
  local_a7 = 0x40;
  local_a4 = 0x3f800000;
  local_a6 = 8;
  if (*(int *)(param_1 + 8) == 0) {
    pmVar2 = (m3dV *)(param_1 + 0xc);
    m3dMATR::MakeLCS2WCS_VY(local_86,pmVar2,&m3dVUnitY);
    local_9c = 0x3e99999a;
    entCreate(gsScenePtr,s_sfx_water_expl,s_sfx_water_expl,local_98,&local_9c,0);
    if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x153))(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
    psVar1 = (sncSOUND_DESCR_3D *)&DAT_00602800;
  }
  else {
    local_a0 = param_1 + 0xc;
    wrsfxSCORCHMARK::Add
              ((float)pwpCROSSBOW::pTexScorchMark,(float)local_a0,(txmTEXTURE *)0x3f000000,
               (m3dV *)0x41200000,*(ulong *)(param_1 + 0x24),0x5343524d,0.0,0.0);
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
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,2.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.1,3.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.2,3.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,3,0.7,0.0);
    this_01 = (m3dCTRL_TIME *)operator_new(0x20);
    if (this_01 == (m3dCTRL_TIME *)0x0) {
      this_01 = (m3dCTRL_TIME *)0x0;
    }
    else {
      *(undefined4 *)(this_01 + 4) = 0;
      *(undefined4 *)(this_01 + 8) = 0;
      *(undefined4 *)(this_01 + 0xc) = 0x3fc00000;
      *(undefined4 *)(this_01 + 0x10) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x14) = 0;
      *(undefined ***)this_01 = &m3dCTRL_TIME::_vftable_;
      m3dCTRL_TIME::Enable(this_01,1);
      *(undefined4 *)(this_01 + 0x18) = 0;
      *(m3dSPL **)(this_01 + 0x1c) = this_00;
      *(undefined ***)this_01 = &m3dCTRL_1D_SPL::_vftable_;
    }
    *(uint *)((m3dCTRL_1D *)this_01 + 4) = *(uint *)((m3dCTRL_1D *)this_01 + 4) | 6;
    pteSPOT_ANIM::SetCtrlRad(*(pteSPOT_ANIM **)(this + 0x153),(m3dCTRL_1D *)this_01);
    pteSPOT_ANIM::SetCurTime(*(pteSPOT_ANIM **)(this + 0x153),0.0);
    pmVar2 = (m3dV *)local_a0;
    *(uint *)(*(int *)(this + 0x153) + 0xf4) = *(uint *)(*(int *)(this + 0x153) + 0xf4) | 4;
    *(uint *)(*(int *)(this + 0x153) + 4) = *(uint *)(*(int *)(this + 0x153) + 4) | 0x40;
    m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)local_a0,(m3dV *)(param_1 + 0x18));
    local_a4 = 0x3ccccccd;
    entCreate(gsScenePtr,s_pwp_crb_pjl_expl,s_pwp_crb_pjl_expl,local_98,&local_a8,0);
    psVar1 = (sncSOUND_DESCR_3D *)&DAT_00602868;
  }
  gsSND_SYSTEM::Play(gsSysSound,psVar1,pmVar2);
  return;
}




/* from: plw_crb.cpp
   addr: 0040DBE0 */

void __thiscall pwpCROSSBOW_PJL::DispatchDamage(pwpCROSSBOW_PJL *this,cdtINFO *param_1)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 2;
  local_18 = 4;
  local_10 = 0x40000000;
  local_24 = *(undefined4 *)(param_1 + 0x10);
  local_20 = *(undefined4 *)(param_1 + 0x14);
  local_1c = *(undefined4 *)(param_1 + 0x18);
  local_14 = *(undefined4 *)(this + 0x157);
  local_c = *(undefined4 *)(this + 0x167);
  local_8 = *(undefined4 *)(param_1 + 4);
  pwpOPP_SFX::Start((pwpOPP_SFX_START *)&local_24);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_crb.cpp
   addr: 0040DC50 */

pwpCRB_EXPL_SPARKS * __thiscall
pwpCRB_EXPL_SPARKS::pwpCRB_EXPL_SPARKS(pwpCRB_EXPL_SPARKS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xb9,600.0,1.0);
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
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.16666667,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.3,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.65,0.35);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_40c00000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.5,param_1 * ___real_40400000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,6.0,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,1.0,0.0,5.0,0.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpCROSSBOW::pTexSparks);
  fVar2 = param_1 * ___real_43160000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_42960000;
  *(float *)(this + 0xc0) = param_1 * ___real_41700000;
  *(float *)(this + 0xc4) = param_1 * ___real_40f00000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.2);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_crb.cpp
   addr: 0040DEB0 */

pwpCRB_EXPL_FLAME * __thiscall
pwpCRB_EXPL_FLAME::pwpCRB_EXPL_FLAME(pwpCRB_EXPL_FLAME *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x1e,133.33333,0.8);
  *(undefined ***)this = &_vftable_;
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
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,133.33333);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.13333334,133.33333);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.16666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.6,0.2);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_42820000,param_1 * ___real_40a00000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.5,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpCROSSBOW::pTexFlame);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.0,179.0,0.0,150.0);
  fVar1 = param_1 * ___real_3f000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  fVar1 = param_1 * ___real_41f00000;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar1;
  *(float *)(this + 0xb8) = param_1 * ___real_41700000;
  *(float *)(this + 0xb0) = param_1 + param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_crb.cpp
   addr: 0040E0C0 */

int __thiscall
pwpCRB_EXPLOSION::ProcessMsg
          (pwpCRB_EXPLOSION *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  pwpCRB_EXPL_SPARKS *this_00;
  objOBJ *poVar3;
  pwpCRB_EXPL_FLAME *this_01;
  float in_EDX;
  m3dV local_c [12];
  
  if (param_1 == 1) {
    fVar1 = *(float *)((int)param_2 + 4) * ___real_40800000;
    animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,1);
    this_00 = (pwpCRB_EXPL_SPARKS *)operator_new(0x2c0);
    if (this_00 == (pwpCRB_EXPL_SPARKS *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = pwpCRB_EXPL_SPARKS::pwpCRB_EXPL_SPARKS(this_00,*(float *)((int)param_2 + 4));
    }
    *(int *)(this + 0x14f) = iVar2;
    if (iVar2 != 0) {
      poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_sparks_sphere);
      *(objOBJ **)(this + 0x153) = poVar3;
      if (poVar3 != (objOBJ *)0x0) {
        *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
        objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
        objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x153),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
        iVar2 = partSetAreaEmissionObj
                          (*(partEMITTER_PHYS **)(this + 0x14f),*(objOBJ **)(this + 0x153),-1,
                           (m3dV *)0x0);
        if (iVar2 != 0) {
          this_01 = (pwpCRB_EXPL_FLAME *)operator_new(0x2c0);
          if (this_01 == (pwpCRB_EXPL_FLAME *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = pwpCRB_EXPL_FLAME::pwpCRB_EXPL_FLAME(this_01,*(float *)((int)param_2 + 4));
          }
          *(int *)(this + 0x157) = iVar2;
          if (iVar2 != 0) {
            animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
            partEMITTER_PHYS::SetPosDirSpeed
                      (*(partEMITTER_PHYS **)(this + 0x157),local_c,(m3dV *)0x0,(m3dV *)0x0);
            partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
            partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
            *(undefined4 *)(this + 0x15b) = 0x3f99999a;
          }
        }
      }
    }
  }
  else if (param_1 == 2) {
    if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x157))(1);
      *(undefined4 *)(this + 0x157) = 0;
    }
    if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x14f))(1);
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
  }
  else if (param_1 == 1000) {
    iVar2 = m3dUpdateTimeField((float *)(this + 0x15b),in_EDX);
    if (iVar2 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
      return 0;
    }
  }
  return 0;
}




/* from: plw_crb.cpp
   addr: 0040E290
   addr: 0040E290
   addr: 0040E290
   addr: 0040E290 */

void * __thiscall
pjlPJL<struct_pwpCRB_PJL_SFX>::_scalar_deleting_destructor_
          (pjlPJL<struct_pwpCRB_PJL_SFX> *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_crb.cpp
   addr: 0040E2C0 */

int __thiscall
pjlPJL<struct_pwpCRB_PJL_SFX>::ProcessINIT(pjlPJL<struct_pwpCRB_PJL_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x157) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x4c);
  this[0x16f] = *(pjlPJL<struct_pwpCRB_PJL_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pwpCRB_PJL_SFX::StartSFX
              ((pwpCRB_PJL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: plw_crb.cpp
   addr: 0040E370 */

void __thiscall pjlPJL<struct_pwpCRB_PJL_SFX>::ProcessTERM(pjlPJL<struct_pwpCRB_PJL_SFX> *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 0x153);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(*(int *)(this + 0x14f) + 0xb0) == 0)) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
  }
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* from: plw_crb.cpp
   addr: 0040E3B0 */

void __thiscall pjlPJL<struct_pwpCRB_PJL_SFX>::ProcessFRAME(pjlPJL<struct_pwpCRB_PJL_SFX> *this)

{
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
  }
  return;
}




/* from: plw_crb.cpp
   addr: 0040E3E0 */

void __thiscall
pjlPJL<struct_pwpCRB_PJL_SFX>::DispatchDamage(pjlPJL<struct_pwpCRB_PJL_SFX> *this,cdtINFO *param_1)

{
  if (this[0x16f] != (pjlPJL<struct_pwpCRB_PJL_SFX>)0x0) {
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)(param_1 + 0x10),*(float *)(this + 0x157),
               *(float *)(this + 0x15b),*(int *)(this + 0x163),*(int *)(this + 0x15f),param_1,
               *(ulong *)(this + 0x167),(dmgDISPATCHER *)0x0);
    return;
  }
  if (*(animINST **)(param_1 + 4) != (animINST *)0x0) {
    dmgDispatchExplosDamageInst
              (*(animINST **)(param_1 + 4),(entENTITY *)this,(m3dV *)(param_1 + 0x10),
               *(float *)(this + 0x157),*(float *)(this + 0x15b),*(int *)(this + 0x163),
               *(int *)(this + 0x15f),param_1,*(ulong *)(this + 0x167),(dmgDISPATCHER *)0x0);
  }
  return;
}




/* from: plw_crb.cpp
   addr: 0040E470 */

void __thiscall pjlPJL<struct_pwpCRB_PJL_SFX>::Terminate(pjlPJL<struct_pwpCRB_PJL_SFX> *this)

{
  if (*(int *)(this + 0x16b) == -0x40800000) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
    return;
  }
  msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,*(float *)(this + 0x16b));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_crb.cpp
   addr: 0040E4B0 */

void __thiscall
pjlPJL<struct_pwpCRB_PJL_SFX>::ProcessEV_CDT(pjlPJL<struct_pwpCRB_PJL_SFX> *this,pjlEV_CDT *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(uint *)(this + 0x170) = *(uint *)(this + 0x170) | 1;
  puVar1 = *(undefined4 **)(this + 0x153);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(*(int *)(this + 0x14f) + 0xb0) == 0)) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    (**(code **)(*(int *)this + 0x84))(param_1);
  }
  iVar2 = *(int *)(this + 0x14f);
  *(undefined4 *)(iVar2 + 0x48) = _m3dVZero;
  *(undefined4 *)(iVar2 + 0x4c) = DAT_00963740;
  *(undefined4 *)(iVar2 + 0x50) = DAT_00963744;
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
  (**(code **)(*(int *)this + 0x88))();
  return;
}




/* from: plw_crb.cpp
   addr: 0040E550 */

void __thiscall gsEVENT::gsEVENT(gsEVENT *this)

{
  *this = (gsEVENT)0x0;
  this[1] = (gsEVENT)0x40;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined2 *)(this + 2) = 8;
  return;
}




/* from: plw_crb.cpp
   addr: 004129D0 */

void * __thiscall pwpCROSSBOW::_scalar_deleting_destructor_(pwpCROSSBOW *this,uint param_1)

{
  *(undefined ***)this = &pwpWEAPON::_vftable_;
  wpnWEAPON::~wpnWEAPON((wpnWEAPON *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}





/* from: plw_crb.cpp
   addr: 0040E570 */

entENTITY * __fastcall pwpCROSSBOW::Create(animINST *param_1)

{
  wpnWEAPON *this;
  
  this = (wpnWEAPON *)operator_new(0x1cb);
  if (this != (wpnWEAPON *)0x0) {
    wpnWEAPON::wpnWEAPON(this);
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x1a7) = 0x3f800000;
    *(undefined4 *)(this + 0x1af) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 4;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}


