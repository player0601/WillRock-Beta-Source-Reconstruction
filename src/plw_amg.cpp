/* from: plw_amg.cpp
   addr: 004039F0 */

int __fastcall pwpAMGInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pwp_amg,0x414d47,0x50,pwpATOMICGUN::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pwp_amg_pjl,0x414d47,0x50,pwpAMG_PJL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pwp_amg_pjl_expl,0x24534658,0x50,pwpAMG_PJL_EXPL::Create,(char *)0x0,1)
  ;
  if (iVar1 == 0) {
    return 0;
  }
  pwpATOMICGUN::pTexFlame = txmMANAGER::Add(txmManager,s_pwp_crb_pjl_flame,0x40003,1);
  if (pwpATOMICGUN::pTexFlame == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpATOMICGUN::pTexFlameExpl = txmMANAGER::Add(txmManager,s_pwp_amg_pjl_expl_flame_b,0x40003,1);
  if (pwpATOMICGUN::pTexFlameExpl == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpATOMICGUN::pTexSmokeExpl = txmMANAGER::Add(txmManager,s_sfx_discus_land_cloud,0x40003,1);
  if (pwpATOMICGUN::pTexSmokeExpl == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpATOMICGUN::pTexScorchMark = txmMANAGER::Add(txmManager,s_sfx_bsk_scorch_mark,0x40003,1);
  if (pwpATOMICGUN::pTexScorchMark == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(5,(sncSOUND_DESCR_3D *)&DAT_00601c20);
  return (uint)(iVar1 != 0);
}




/* from: plw_amg.cpp
   addr: 00403AF0 */

entENTITY * __fastcall pwpAMG_PJL::Create(animINST *param_1)

{
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x180);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xffffffff;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x15b) = 0xbf800000;
    *(undefined4 *)(this + 0x16f) = 0xbf800000;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: plw_amg.cpp
   addr: 00403B70 */

entENTITY * __fastcall pwpAMG_PJL_EXPL::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x157);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: plw_amg.cpp
   addr: 00403BB0 */

void * __thiscall pwpAMG_PJL_EXPL::_vector_deleting_destructor_(pwpAMG_PJL_EXPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_amg.cpp
   addr: 00403BF0 */

int __thiscall pwpATOMICGUN::SetupAniSystem(pwpATOMICGUN *this)

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
    *(undefined4 *)(paVar1 + 0x8c) = 0xd;
    puVar2 = (undefined4 *)operator_new(0x6ec);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0xd;
      puVar2 = puVar2 + 1;
      iVar7 = 0xd;
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
    _entAnimSetSeqName(paVar1,10,s_AMG_SEQ_LOAD_ROCKET);
    _entAnimSetSeqName(paVar1,0xb,s_AMG_SEQ_PREPARE_TO_SHOOT);
    _entAnimSetSeqName(paVar1,0xc,s_AMG_SEQ_WAITING_TO_SHOOT);
    entAnimAssignTplSeq(paVar1,local_c,iVar6);
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x40) = 0;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x44) = 0x3f800000;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x50) = 0x43fa0000;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x80) = 0;
    pwpWEAPON::AdjustTiming((pwpWEAPON *)this);
    this_00 = (animSYSTEM *)operator_new(0x14);
    if ((this_00 == (animSYSTEM *)0x0) ||
       (piVar3 = (int *)animSYSTEM::animSYSTEM(this_00,0xd,0), piVar3 == (int *)0x0)) {
      return 0;
    }
    *(int **)(paVar1 + 0xa4) = piVar3;
    (**(code **)(*piVar3 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*piVar3 + 0xc))(1,0,0,0xffffffff);
    (**(code **)(*piVar3 + 4))(1,0xb,0,0xb,0);
    (**(code **)(*piVar3 + 0x14))(1);
    (**(code **)(*piVar3 + 0x14))(3);
    (**(code **)(*piVar3 + 4))(3,1,0,1,1);
    (**(code **)(*piVar3 + 4))(3,4,0,4,1);
    (**(code **)(*piVar3 + 4))(3,6,0,6,1);
    (**(code **)(*piVar3 + 4))(3,0xb,0,0xb,0);
    (**(code **)(*piVar3 + 4))(0xb,7,0,7,0);
    (**(code **)(*piVar3 + 4))(0xb,0xc,1,0xc,0);
    (**(code **)(*piVar3 + 4))(0xc,7,0,7,0);
    (**(code **)(*piVar3 + 0xc))(7,1,0,10);
    (**(code **)(*piVar3 + 4))(7,8,0,8,0);
    (**(code **)(*piVar3 + 4))(7,5,0,5,0);
    (**(code **)(*piVar3 + 0xc))(4,1,1,0xffffffff);
    (**(code **)(*piVar3 + 4))(4,6,0,6,0);
    (**(code **)(*piVar3 + 0xc))(10,1,0,0xffffffff);
    (**(code **)(*piVar3 + 4))(10,7,1,0xb,0);
    (**(code **)(*piVar3 + 4))(10,0xb,1,0xb,0);
    (**(code **)(*piVar3 + 4))(10,8,0,8,0);
    (**(code **)(*piVar3 + 4))(10,5,0,5,0);
    (**(code **)(*piVar3 + 4))(6,3,1,3,1);
    (**(code **)(*piVar3 + 4))(6,1,0,1,1);
    (**(code **)(*piVar3 + 4))(6,6,2,6,1);
    (**(code **)(*piVar3 + 4))(6,7,1,7,1);
    (**(code **)(*piVar3 + 0xc))(8,1,0,0xffffffff);
    (**(code **)(*piVar3 + 4))(8,0xb,1,0xb,0);
    (**(code **)(*piVar3 + 4))(4,1,0,1,0);
    (**(code **)(*piVar3 + 4))(4,6,0,6,0);
    (**(code **)(*piVar3 + 4))(1,6,0,6,0);
    (**(code **)(*piVar3 + 4))(3,6,0,6,0);
    (**(code **)(*piVar3 + 4))(7,6,0,6,0);
    (**(code **)(*piVar3 + 4))(8,6,0,6,0);
    (**(code **)(*piVar3 + 4))(10,6,0,6,0);
    (**(code **)(*piVar3 + 4))(0xb,6,0,6,0);
    (**(code **)(*piVar3 + 4))(0xc,6,0,6,0);
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
    (**(code **)(*piVar3 + 0x20))(1,2);
    (**(code **)(*piVar3 + 4))(2,1,1,1);
    operator_delete((void *)0xfffffffd);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_amg.cpp
   addr: 00404110 */

int __thiscall pwpATOMICGUN::Shoot(pwpATOMICGUN *this,entENTITY *param_1,m3dV *param_2)

{
  float fVar1;
  int iVar2;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_30 = 0;
  local_2f = 0x40;
  local_2c = 10;
  local_2e = 0x30;
  iVar2 = wpnWEAPON::Shoot((wpnWEAPON *)this,*(entENTITY **)(this + 0x187),param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x1af) == 4) {
    *(undefined4 *)(this + 0x1af) = 5;
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x17b),(m3dV *)&local_48);
    local_3c = *(float *)param_2 - local_48;
    local_38 = *(float *)(param_2 + 4) - local_44;
    local_34 = *(float *)(param_2 + 8) - local_40;
    m3dNormalize((m3dV *)&local_3c);
    local_28 = *(undefined4 *)param_2;
    local_24 = *(undefined4 *)(param_2 + 4);
    local_1c = local_48;
    local_20 = *(undefined4 *)(param_2 + 8);
    local_10 = local_3c;
    fVar1 = *(float *)(this + 0x1b3);
    local_18 = local_44;
    local_14 = local_40;
    local_c = local_38;
    local_8 = local_34;
    local_4 = ___real_3f800000;
    if ((___real_00000000 <= fVar1) && (local_4 = ___real_00000000, fVar1 <= ___real_3f333333)) {
      local_4 = ___real_3f800000 - fVar1 * ___real_3fb6db6e;
    }
    local_4 = local_4 + ___real_3f800000;
    (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c6,&local_30,0x20000);
    return 1;
  }
  return 0;
}




/* from: plw_amg.cpp
   addr: 00404270 */

void __thiscall pwpATOMICGUN::Anim2Sound(pwpATOMICGUN *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,*(int *)(this + 0x19b));
  if (iVar1 == 0) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,0);
    if (iVar1 != 0) {
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 8;
      return;
    }
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,1);
    if (iVar1 != 0) {
      *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
    }
    return;
  }
  if (*(int *)(this + 399) == 1) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 2;
    return;
  }
  *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
  return;
}




/* from: plw_amg.cpp
   addr: 00404300 */

void __thiscall pwpATOMICGUN::UpdateSound(pwpATOMICGUN *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xf8);
  if ((uVar1 & 1) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00601c20,0);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if ((uVar1 & 2) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00601c88,0);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if ((uVar1 & 4) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00601cf0,0);
    pwpWEAPON::UpdateSound((pwpWEAPON *)this);
    return;
  }
  if ((uVar1 & 8) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00601d58,0);
  }
  pwpWEAPON::UpdateSound((pwpWEAPON *)this);
  return;
}




/* from: plw_amg.cpp
   addr: 00404390 */

int __thiscall pwpATOMICGUN::ProcessINIT(pwpATOMICGUN *this)

{
  int iVar1;
  objOBJ *poVar2;
  pwpATOMICGUN_FLAME *this_00;
  pwpATOMICGUN *ppVar3;
  char local_40 [64];
  
  iVar1 = pwpWEAPON::ProcessINIT((pwpWEAPON *)this);
  if (iVar1 == 0) {
    return 0;
  }
  objOBJ::AllocVertNormalList(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10));
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_flame_cs);
  *(objOBJ **)(this + 0x1d3) = poVar2;
  if (poVar2 != (objOBJ *)0x0) {
    poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_flame_source);
    *(objOBJ **)(this + 0x1cf) = poVar2;
    if (poVar2 == (objOBJ *)0x0) {
      return 0;
    }
    objOBJ::SetStateProcYes(poVar2,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    this_00 = (pwpATOMICGUN_FLAME *)operator_new(0x2c0);
    if (this_00 == (pwpATOMICGUN_FLAME *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pwpATOMICGUN_FLAME::pwpATOMICGUN_FLAME(this_00,0.1);
    }
    *(int *)(this + 0x1cb) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = 0;
  ppVar3 = this + 0x1bb;
  do {
    iVar1 = iVar1 + 1;
    sprintf(local_40,s_rocket_02d,iVar1);
    poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),local_40);
    *(objOBJ **)ppVar3 = poVar2;
    if (poVar2 == (objOBJ *)0x0) break;
    objOBJ::SetStateProcYes(poVar2,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    ppVar3 = ppVar3 + 4;
  } while (iVar1 < 4);
  *(uint *)(this + 0x193) = *(uint *)(this + 0x193) | 2;
  *(undefined4 *)(this + 0x19b) = 0;
  *(undefined4 *)(this + 0x197) = 1;
  *(undefined4 *)(this + 399) = 0;
  *(undefined4 *)(this + 0x18b) = 4;
  (**(code **)(*(int *)this + 0xa0))(0x41c80000);
  *(undefined4 *)(this + 0x15b) = 0x43480000;
  *(undefined4 *)(this + 0x157) = 0x41a00000;
  wpnWEAPON::SetAmmo((wpnWEAPON *)this,0.0);
  *(undefined4 *)(this + 0x1af) = 0;
  return 1;
}




/* from: plw_amg.cpp
   addr: 00404500 */

void __thiscall pwpATOMICGUN::ProcessTERM(pwpATOMICGUN *this)

{
  if (*(undefined4 **)(this + 0x1cb) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x1cb))(1);
    *(undefined4 *)(this + 0x1cb) = 0;
  }
  m3dTerm2DMatr();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_amg.cpp
   addr: 00404530 */

void __thiscall pwpATOMICGUN::ProcessFRAME(pwpATOMICGUN *this)

{
  float fVar1;
  float fVar2;
  partEMITTER_PHYS *this_00;
  int iVar3;
  uint uVar4;
  float extraout_EDX;
  float extraout_EDX_00;
  float fVar5;
  pwpATOMICGUN *ppVar6;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pwpWEAPON::ProcessFRAME((pwpWEAPON *)this);
  if (((byte)(*(animINST **)(this + 0xbc))[4] & 1) == 0) {
    iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,0);
    if ((iVar3 == 0) || (3 < *(int *)(this + 0x1b7))) {
      iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,0);
      if ((iVar3 == 0) &&
         ((iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,1), iVar3 == 0 &&
          (iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,0), iVar3 == 0)))) {
        iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),0xb,1);
        if ((iVar3 == 0) || (*(int *)(this + 0x1af) != 1)) {
          iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,0);
          if (iVar3 == 0) {
            iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,1);
            if (iVar3 != 0) {
              *(undefined4 *)(this + 0x1af) = 0;
            }
          }
          else {
            *(undefined4 *)(this + 0x1af) = 4;
          }
        }
        else {
          *(undefined4 *)(this + 0x1af) = 2;
          *(undefined4 *)(this + 0x1b3) = 0x3f333333;
        }
      }
      else {
        uVar4 = 4U - *(int *)(this + 399) & ((int)(4U - *(int *)(this + 399)) < 1) - 1;
        *(uint *)(this + 0x1b7) = uVar4;
        if ((int)uVar4 < 4) {
          ppVar6 = this + uVar4 * 4 + 0x1bb;
          iVar3 = 4 - uVar4;
          do {
            objOBJ::SetStateProcNo(*(objOBJ **)ppVar6,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
            ppVar6 = ppVar6 + 4;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
    else {
      objOBJ::SetStateProcYes
                (*(objOBJ **)(this + *(int *)(this + 0x1b7) * 4 + 0x1bb),8,
                 (_func_int_objOBJ_ptr_void_ptr *)0x0);
      *(int *)(this + 0x1b7) = *(int *)(this + 0x1b7) + 1;
    }
    iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,1);
    if ((iVar3 != 0) ||
       (iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,1), iVar3 != 0)) {
      ThrowClip(this);
    }
    if ((*(int *)(this + 0x1af) == 2) &&
       (iVar3 = m3dUpdateTimeField((float *)(this + 0x1b3),gsElapsedTime), iVar3 != 0)) {
      *(undefined4 *)(this + 0x1af) = 3;
    }
    iVar3 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,2);
    fVar5 = extraout_EDX;
    if (iVar3 != 0) {
      this_00 = *(partEMITTER_PHYS **)(this + 0x1cb);
      partEMITTER_PHYS::StopEmission(this_00);
      partEMITTER_PHYS::StartEmission(this_00);
      *(undefined4 *)(this + 0x1d7) = 1;
      *(undefined4 *)(this + 0x1db) = 0x3f000000;
      m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x1cf) + 0x7c),(m3dV *)(this + 0x1df));
      fVar5 = extraout_EDX_00;
    }
    if ((*(int *)(this + 0x1d7) != 0) && (*(int *)(this + 0x1d3) != 0)) {
      iVar3 = m3dUpdateTimeField((float *)(this + 0x1db),fVar5);
      if (iVar3 == 0) {
        m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x1cf) + 0x7c),(m3dV *)&local_18);
        fVar5 = *(float *)(this + 0x1df);
        fVar1 = *(float *)(this + 0x1e3);
        fVar2 = *(float *)(this + 0x1e7);
        local_4 = ___real_3f800000 / gsElapsedTime;
        *(float *)(this + 0x1df) = local_18;
        *(float *)(this + 0x1e3) = local_14;
        *(float *)(this + 0x1e7) = local_10;
        local_c = (local_18 - fVar5) * local_4;
        local_8 = (local_14 - fVar1) * local_4;
        local_4 = (local_10 - fVar2) * local_4;
        partEMITTER_PHYS::SetPosDirSpeed
                  (*(partEMITTER_PHYS **)(this + 0x1cb),(m3dV *)&local_18,(m3dV *)0x0,
                   (m3dV *)&local_c);
        animINST::Validate(*(animINST **)(this + 0xbc),4);
        partEMITTER_PHYS::SetCS
                  (*(partEMITTER_PHYS **)(this + 0x1cb),(m3dMATR *)(*(int *)(this + 0x1d3) + 0x3c));
        return;
      }
      *(undefined4 *)(this + 0x1d7) = 0;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_amg.cpp
   addr: 00404820 */

void __thiscall pwpATOMICGUN::ProcessSHOOT(pwpATOMICGUN *this,void *param_1)

{
  m3dV *pmVar1;
  undefined4 uVar2;
  float10 fVar3;
  int unaff_retaddr;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 uStack_b3;
  undefined4 uStack_af;
  undefined4 uStack_ab;
  undefined4 uStack_a7;
  undefined4 uStack_a3;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  m3dMATR amStack_8a [138];
  
  msgDATA::msgDATA((msgDATA *)&local_104);
  local_100 = (float)_m3dVZero;
  local_f4 = (float)_m3dVZero;
  local_fc = (float)DAT_00963740;
  local_f0 = (float)DAT_00963740;
  local_e4 = DAT_005ce8ec;
  local_e0 = 1;
  local_b4 = 1;
  local_f8 = (float)DAT_00963744;
  local_ec = DAT_00963744;
  local_e8 = 0x3dcccccd;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0.0;
  local_cc = 0xbf800000;
  local_c8 = 0;
  local_c4 = 0xffffffff;
  local_c0 = 0xffffffff;
  local_bc = 0xffffffff;
  local_b8 = 0xbf800000;
  local_104 = (float)CONCAT22(0x69,(undefined2)local_104);
  animCREATE_DATA::animCREATE_DATA((animCREATE_DATA *)&local_98);
  if (((byte)this[0x88] & 4) != 0) {
    (**(code **)(*(int *)this + 0x68))(0x3f800000);
    local_e8 = 0x42c80000;
    local_fc = *(float *)(unaff_retaddr + 0x2c) * ___real_41e00000;
    pmVar1 = (m3dV *)(unaff_retaddr + 0x20);
    local_dc = 0;
    local_e0 = 0;
    local_e4 = 1000;
    local_104 = local_fc * *(float *)pmVar1;
    local_ec = 0x3e99999a;
    local_100 = local_fc * *(float *)(unaff_retaddr + 0x24);
    local_fc = local_fc * *(float *)(unaff_retaddr + 0x28);
    local_f8 = _m3dVUnitY * ___real_c11ccccd;
    local_f4 = DAT_005f9994 * ___real_c11ccccd;
    local_f0 = DAT_005f9998 * ___real_c11ccccd;
    fVar3 = (float10)(**(code **)(*(int *)this + 0xa4))();
    local_d0 = (float)fVar3;
    local_c0 = *(undefined4 *)(*(int *)(this + 0x187) + 0x8c);
    uVar2 = *(undefined4 *)(unaff_retaddr + 0x14);
    local_b8._1_3_ = (undefined3)uVar2;
    local_b4 = (undefined1)((uint)uVar2 >> 0x18);
    uStack_b3 = *(undefined4 *)(unaff_retaddr + 0x18);
    uStack_af = *(undefined4 *)(unaff_retaddr + 0x1c);
    uStack_ab = *(undefined4 *)pmVar1;
    uStack_a7 = *(undefined4 *)(unaff_retaddr + 0x24);
    uStack_a3 = *(undefined4 *)(unaff_retaddr + 0x28);
    m3dMATR::MakeLCS2WCS_VZ(amStack_8a,(m3dV *)(unaff_retaddr + 0x14),pmVar1);
    uStack_9c = 0x3e4ccccd;
    local_98 = 0x3e4ccccd;
    uStack_94 = 0x3e4ccccd;
    entCreate(gsScenePtr,s_pwp_amg_pjl,s_pwp_amg_pjl,(animCREATE_DATA *)&uStack_9c,&stack0xfffffef8,
              0);
  }
  return;
}




/* from: plw_amg.cpp
   addr: 00404A20 */

int __thiscall pwpMINIGUN::GetCurAnimSeq(pwpMINIGUN *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if (((iVar1 == 10) || (iVar1 == 0xb)) || (iVar1 == 0xc)) {
    iVar1 = 7;
  }
  return iVar1;
}




/* from: plw_amg.cpp
   addr: 00404A50 */

void __thiscall pwpATOMICGUN::AdvanceAnimation(pwpATOMICGUN *this,int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1af);
  if ((iVar1 == 0) && ((param_1 == 7 || (param_1 == 0xb)))) {
    if (*(int *)(*(int *)(this + 0xbc) + 0xe0) != 10) {
      *(undefined4 *)(this + 0x1af) = 1;
      param_1 = 0xb;
      goto LAB_00404aba;
    }
  }
  if (iVar1 == 2) {
    param_1 = 0xc;
  }
  else if (iVar1 == 1) {
    param_1 = 0xb;
  }
  else if (((iVar1 == 5) || (iVar1 == 4)) || (iVar1 == 3)) {
    param_1 = 7;
  }
LAB_00404aba:
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),
             param_1,param_2 * *(float *)(this + 0x1a7));
  return;
}




/* from: plw_amg.cpp
   addr: 00404AE0 */

void __thiscall pwpATOMICGUN::NotifyStopShoot(pwpATOMICGUN *this)

{
  if (*(int *)(this + 0x1af) != 2) {
    if (*(int *)(this + 0x1af) != 1) {
      return;
    }
    *(undefined4 *)(this + 0x1b3) = 0x3f333333;
  }
  *(undefined4 *)(this + 0x1af) = 3;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_amg.cpp
   addr: 00404B10 */

void __thiscall pwpATOMICGUN::ThrowClip(pwpATOMICGUN *this)

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
    m3dMATR::Translate(local_86,1.5,1.3,0.1,1);
    local_98 = 0x3e99999a;
    local_94 = 0x3e99999a;
    local_90 = 0x3e99999a;
    m3dMATR::GetAxisZ(local_86,(m3dV *)&local_148);
    local_144 = 0xbe99999a;
    local_b0 = 0x3f000000;
    local_b4 = 0x3ecccccd;
    peVar2 = entCreate(gsScenePtr,s_rigid,s_pwp_amg_clip,(animCREATE_DATA *)&local_98,&local_150,0);
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
/* from: plw_amg.cpp
   addr: 00404CD0 */

int __thiscall pwpAMG_PJL_SFX::StartSFX(pwpAMG_PJL_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  animINST *this_00;
  undefined4 uVar1;
  int iVar2;
  objOBJ *this_01;
  pwpAMG_PJL_FLAME *this_02;
  partEMITTER_PHYS *this_03;
  pteSPOT *this_04;
  m3dCTRL_3D *pmVar3;
  m3dCOLOR amStack_44 [16];
  undefined4 local_34;
  char local_10 [16];
  
  this_00 = *(animINST **)(param_1 + 0xbc);
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    local_34 = 0x404cfc;
    sprintf(local_10,s_trail_02d);
    this_01 = objFindName(*(objOBJ **)(this_00 + 0x10),local_10);
    if (this_01 == (objOBJ *)0x0) {
      return 0;
    }
    objOBJ::SetStateRendYes(this_01,0x60);
    *(uint *)this_01 = *(uint *)this_01 | 4;
  } while (iVar2 < 2);
  this_02 = (pwpAMG_PJL_FLAME *)operator_new(0x2c0);
  if (this_02 == (pwpAMG_PJL_FLAME *)0x0) {
    this_03 = (partEMITTER_PHYS *)0x0;
  }
  else {
    this_03 = (partEMITTER_PHYS *)pwpAMG_PJL_FLAME::pwpAMG_PJL_FLAME(this_02,0.1);
  }
  *(partEMITTER_PHYS **)(this + 4) = this_03;
  if (this_03 != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StartEmission(this_03);
    animINST::SetAnimSeq(this_00,0,0.0);
    this_04 = (pteSPOT *)operator_new(0x108);
    if (this_04 == (pteSPOT *)0x0) {
      this_04 = (pteSPOT *)0x0;
    }
    else {
      pteSPOT::pteSPOT(this_04,1);
      *(undefined4 *)(this_04 + 0xf8) = 0;
      *(undefined4 *)(this_04 + 0xfc) = 0;
      *(undefined4 *)(this_04 + 0x100) = 0;
      *(undefined4 *)(this_04 + 0x104) = 0;
      *(undefined ***)this_04 = &pteSPOT_ANIM::_vftable_;
    }
    *(pteSPOT **)this = this_04;
    if (this_04 == (pteSPOT *)0x0) {
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
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_amg.cpp
   addr: 00404E90 */

int __thiscall pwpAMG_PJL::ProcessINIT(pwpAMG_PJL *this,physINIT *param_1)

{
  undefined4 uVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  objOBJ *poVar4;
  sncCHANNEL *this_00;
  
  iVar2 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
  this[0x173] = *(pwpAMG_PJL *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if ((*(int *)(param_1 + 0x48) != -1) &&
       (peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4),
       peVar3 != (entIACTIVE_OBJ *)0x0)) {
      physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar3);
    }
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pwpAMG_PJL_SFX::StartSFX
              ((pwpAMG_PJL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 2;
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_head);
  *(objOBJ **)(this + 0x178) = poVar4;
  if (*(int *)(gsSysMP + 0x28) != 4) {
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
      *(undefined1 **)(this_00 + 0x88) = &DAT_42480000;
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
    *(sncCHANNEL **)(this + 0x17c) = this_00;
    if (this_00 == (sncCHANNEL *)0x0) {
      return 0;
    }
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  }
  return 1;
}




/* from: plw_amg.cpp
   addr: 00405090 */

void __thiscall pwpAMG_PJL::ProcessFRAME(pwpAMG_PJL *this)

{
  animINST *this_00;
  physMATH *this_01;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  m3dV local_98 [12];
  m3dV local_8c [12];
  m3dMATR local_80 [64];
  m3dMATR local_40 [64];
  
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    if (*(int *)(this + 0x157) != 0) {
      this_00 = *(animINST **)(this + 0xbc);
      physMATH::GetPos(*(physMATH **)(this + 0x14f),local_8c);
      animINST::AdvanceTime(this_00,gsElapsedTime,0,(float *)0x0);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x157),local_8c,(m3dV *)0x0,(m3dV *)0x0);
    }
  }
  if (((byte)this[0x174] & 1) == 0) {
    this_01 = *(physMATH **)(this + 0x14f);
    local_a4 = *(undefined4 *)(this_01 + 0x48);
    local_a0 = *(undefined4 *)(this_01 + 0x4c);
    local_9c = *(undefined4 *)(this_01 + 0x50);
    physMATH::GetPos(this_01,local_98);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    m3dMATR::GetScale((m3dMATR *)(*(int *)(this + 0x178) + 0x3c),&local_a8,&local_b0,&local_ac);
    m3dMATR::Identity(local_80);
    m3dMATR::MakeLCS2WCS_VZ(local_80,local_98,(m3dV *)&local_a4);
    m3dMATR::Scale(local_80,local_a8,local_b0,local_ac,1);
    m3dMATR::Invert((m3dMATR *)(*(int *)(*(int *)(this + 0x178) + 0x2c) + 0x3c),local_40);
    m3dMultiplyMatr(local_80,local_40,(m3dMATR *)(*(int *)(this + 0x178) + 0x7c));
    objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x178));
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
  }
  return;
}




/* from: plw_amg.cpp
   addr: 004051F0 */

void __thiscall pwpAMG_PJL::ShowCollisSFX(pwpAMG_PJL *this,pjlEV_CDT *param_1)

{
  m3dSPL *this_00;
  m3dCTRL_TIME *this_01;
  undefined4 uStack_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (*(int *)(param_1 + 8) == 0) {
    if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x153))(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
  }
  else {
    wrsfxSCORCHMARK::Add
              ((float)pwpATOMICGUN::pTexScorchMark,(float)(param_1 + 0xc),(txmTEXTURE *)0x41100000,
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
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,3.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.05,13.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.2,15.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,3,1.0,0.0);
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
    *(uint *)(*(int *)(this + 0x153) + 0xf4) = *(uint *)(*(int *)(this + 0x153) + 0xf4) | 4;
    *(uint *)(*(int *)(this + 0x153) + 4) = *(uint *)(*(int *)(this + 0x153) + 4) | 0x40;
  }
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
  uStack_9c = 0x3f4ccccd;
  entCreate(gsScenePtr,s_pwp_amg_pjl_expl,s_pwp_amg_pjl_expl,local_98,&uStack_9c,0);
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_00601dc0,(m3dV *)(param_1 + 0xc));
  return;
}




/* from: plw_amg.cpp
   addr: 004053D0 */

void __thiscall pwpAMG_PJL::DispatchDamage(pwpAMG_PJL *this,cdtINFO *param_1)

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
  local_18 = 10;
  local_10 = 0x41100000;
  local_24 = *(undefined4 *)(param_1 + 0x10);
  local_20 = *(undefined4 *)(param_1 + 0x14);
  local_1c = *(undefined4 *)(param_1 + 0x18);
  local_14 = *(undefined4 *)(this + 0x15b);
  local_c = *(undefined4 *)(this + 0x16b);
  local_8 = *(undefined4 *)(param_1 + 4);
  pwpOPP_SFX::Start((pwpOPP_SFX_START *)&local_24);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_amg.cpp
   addr: 00405440 */

pwpATOMICGUN_FLAME * __thiscall
pwpATOMICGUN_FLAME::pwpATOMICGUN_FLAME(pwpATOMICGUN_FLAME *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xf,100.0,0.4);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.1,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.4,0.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 + param_1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 + param_1,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.5,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpATOMICGUN::pTexFlame);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,300.0);
  fVar2 = param_1 * ___real_3dcccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_3f000000;
  *(undefined4 *)(this + 0xcc) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xe0) = param_1 * ___real_40a00000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x800409;
  *(uint *)(this + 4) = uVar1 | 0x10800409;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_amg.cpp
   addr: 00405680 */

pwpAMG_PJL_FLAME * __thiscall
pwpAMG_PJL_FLAME::pwpAMG_PJL_FLAME(pwpAMG_PJL_FLAME *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,500.0,0.1);
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
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,500.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.1,0.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,param_1,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpATOMICGUN::pTexFlame);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_3f000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x419;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_amg.cpp
   addr: 00405820 */

pwpAMG_PJL_EXPL_FLAME * __thiscall
pwpAMG_PJL_EXPL_FLAME::pwpAMG_PJL_EXPL_FLAME(pwpAMG_PJL_EXPL_FLAME *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x50,800.0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,800.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,800.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.65,0.35);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 + param_1);
  fVar1 = param_1 * ___real_40800000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,fVar1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpATOMICGUN::pTexFlameExpl);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  fVar1 = param_1 * ___real_40a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_amg.cpp
   addr: 00405A50 */

pwpAMG_PJL_EXPL_SMOKE * __thiscall
pwpAMG_PJL_EXPL_SMOKE::pwpAMG_PJL_EXPL_SMOKE(pwpAMG_PJL_EXPL_SMOKE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x3d,266.66666,1.2);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,266.66666);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.13333334,266.66666);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.9,0.3);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_40200000,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.115,88.485);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpATOMICGUN::pTexSmokeExpl);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,150.0);
  fVar2 = param_1 * ___real_00000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xc4) = param_1;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = param_1 * ___real_40a00000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0xa408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_amg.cpp
   addr: 00405C50 */

int __thiscall
pwpAMG_PJL_EXPL::ProcessMsg
          (pwpAMG_PJL_EXPL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  objOBJ *poVar5;
  pwpAMG_PJL_EXPL_FLAME *this_00;
  pwpAMG_PJL_EXPL_SMOKE *this_01;
  uint uVar6;
  char *pcVar7;
  float local_38;
  float local_34;
  float local_30;
  m3dV local_2c [12];
  char local_20 [32];
  
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar2 = *param_2;
    animINST::Scale(*(animINST **)(this + 0xbc),fVar2,fVar2,fVar2,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    animINST::GetDirUp(*(animINST **)(this + 0xbc),(m3dV *)&local_38);
    m3dNormalize((m3dV *)&local_38);
    fVar3 = _m3dVUnitY * local_38 + DAT_005f9994 * local_34 + DAT_005f9998 * local_30;
    param_1 = (int)fVar2;
    if ((___real_3f333333 < fVar3) && (fVar3 < ___real_3f800000 != (fVar3 == ___real_3f800000))) {
      param_1 = 1;
    }
    poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane7);
    if (poVar5 != (objOBJ *)0x0) {
      objOBJ::SetStateRendYes(poVar5,0x60);
      poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane9);
      if (poVar5 != (objOBJ *)0x0) {
        objOBJ::SetStateRendYes(poVar5,0x60);
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          sprintf(local_20,s_pSphere_d,iVar4);
          poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),local_20);
          if (poVar5 == (objOBJ *)0x0) break;
          if (param_1 == 0) {
            objOBJ::SetStateProcYes(poVar5,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
          }
          else {
            objOBJ::SetStateRendYes(poVar5,0x60);
          }
        } while (iVar4 < 0xc);
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          sprintf(local_20,s_pCylinder_d,iVar4);
          uVar6 = 0xffffffff;
          pcVar7 = local_20;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          poVar5 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),local_20,~uVar6 - 1);
          if (poVar5 == (objOBJ *)0x0) break;
          if (param_1 == 0) {
            objOBJ::SetStateProcYes(poVar5,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
          }
          else {
            objOBJ::SetStateRendYes(poVar5,0x60);
          }
        } while (iVar4 < 2);
        this_00 = (pwpAMG_PJL_EXPL_FLAME *)operator_new(0x2c0);
        if (this_00 == (pwpAMG_PJL_EXPL_FLAME *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = pwpAMG_PJL_EXPL_FLAME::pwpAMG_PJL_EXPL_FLAME(this_00,fVar2);
        }
        *(int *)(this + 0x14f) = iVar4;
        if (iVar4 != 0) {
          animINST::GetPos(*(animINST **)(this + 0xbc),local_2c);
          partEMITTER_PHYS::SetPosDirSpeed
                    (*(partEMITTER_PHYS **)(this + 0x14f),local_2c,(m3dV *)0x0,(m3dV *)0x0);
          this_01 = (pwpAMG_PJL_EXPL_SMOKE *)operator_new(0x2c0);
          if (this_01 == (pwpAMG_PJL_EXPL_SMOKE *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = pwpAMG_PJL_EXPL_SMOKE::pwpAMG_PJL_EXPL_SMOKE(this_01,fVar2);
          }
          *(int *)(this + 0x153) = iVar4;
          if ((iVar4 != 0) &&
             (poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_smoke_source),
             poVar5 != (objOBJ *)0x0)) {
            objOBJ::SetStateProcYes(poVar5,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
            iVar4 = partSetAreaEmissionObj
                              (*(partEMITTER_PHYS **)(this + 0x153),poVar5,-1,(m3dV *)0x0);
            if (iVar4 != 0) {
              animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
            }
          }
        }
      }
    }
  }
  else if (param_1 == 2) {
    if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x153))(1);
      *(undefined4 *)(this + 0x153) = 0;
    }
    if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x14f))(1);
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
  }
  else if ((param_1 == 1000) &&
          (iVar4 = animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0),
          iVar4 != 0)) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    return 0;
  }
  return 0;
}




/* from: plw_amg.cpp
   addr: 00405F70 */

void __thiscall pwpATOMICGUN::Enable(pwpATOMICGUN *this,int param_1)

{
  *(undefined4 *)(this + 0x1af) = 0;
  if (param_1 != 0) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
    return;
  }
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffe;
  return;
}




/* from: plw_amg.cpp
   addr: 00405FA0 */

void * __thiscall pwpAMG_PJL::_scalar_deleting_destructor_(pwpAMG_PJL *this,uint param_1)

{
  *(undefined ***)this = &pjlPJL<struct_pwpAMG_PJL_SFX>::_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_amg.cpp
   addr: 00405FD0 */

int __thiscall
pjlPJL<struct_pwpAMG_PJL_SFX>::ProcessINIT(pjlPJL<struct_pwpAMG_PJL_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
  this[0x173] = *(pjlPJL<struct_pwpAMG_PJL_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pwpAMG_PJL_SFX::StartSFX
              ((pwpAMG_PJL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: plw_amg.cpp
   addr: 00406080 */

void __thiscall pjlPJL<struct_pwpAMG_PJL_SFX>::ProcessFRAME(pjlPJL<struct_pwpAMG_PJL_SFX> *this)

{
  animINST *this_00;
  m3dV local_c [12];
  
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    if (*(int *)(this + 0x157) != 0) {
      this_00 = *(animINST **)(this + 0xbc);
      physMATH::GetPos(*(physMATH **)(this + 0x14f),local_c);
      animINST::AdvanceTime(this_00,gsElapsedTime,0,(float *)0x0);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x157),local_c,(m3dV *)0x0,(m3dV *)0x0);
    }
  }
  return;
}




/* from: plw_amg.cpp
   addr: 004060F0 */

void __thiscall
pjlPJL<struct_pjlARROW_GENERIC_SFX>::Terminate(pjlPJL<struct_pjlARROW_GENERIC_SFX> *this)

{
  if (*(int *)(this + 0x16f) == -0x40800000) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
    return;
  }
  msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,*(float *)(this + 0x16f));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_amg.cpp
   addr: 00406130 */

void __thiscall
pjlPJL<struct_pwpAMG_PJL_SFX>::ProcessEV_CDT(pjlPJL<struct_pwpAMG_PJL_SFX> *this,pjlEV_CDT *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(uint *)(this + 0x174) = *(uint *)(this + 0x174) | 1;
  puVar1 = *(undefined4 **)(this + 0x153);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(*(int *)(this + 0x14f) + 0xb0) == 0)) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
  }
  if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x157))(1);
    *(undefined4 *)(this + 0x157) = 0;
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




/* from: plw_amg.cpp
   addr: 004061F0 */

void __thiscall msgDATA::msgDATA(msgDATA *this)

{
  *this = (msgDATA)0x0;
  this[1] = (msgDATA)0x40;
  *(undefined2 *)(this + 2) = 0xffff;
  return;
}




/* from: plw_amg.cpp
   addr: 00406210 */

void * __thiscall sncCHANNEL::_vector_deleting_destructor_(sncCHANNEL *this,uint param_1)

{
  ~sncCHANNEL(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_amg.cpp
   addr: 00406230 */

entENTITY * __fastcall pwpATOMICGUN::Create(animINST *param_1)

{
  wpnWEAPON *this;
  
  this = (wpnWEAPON *)operator_new(0x1eb);
  if (this != (wpnWEAPON *)0x0) {
    wpnWEAPON::wpnWEAPON(this);
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x1b3) = 0;
    *(undefined4 *)(this + 0x1b7) = 0;
    *(undefined4 *)(this + 0x1cb) = 0;
    *(undefined4 *)(this + 0x1cf) = 0;
    *(undefined4 *)(this + 0x1d3) = 0;
    *(undefined4 *)(this + 0x1d7) = 0;
    *(undefined4 *)(this + 0x1db) = 0;
    *(undefined4 *)(this + 0x1a7) = 0x3f800000;
    *(undefined4 *)(this + 0x1af) = 0xffffffff;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 10;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}
