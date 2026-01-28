
/* from: plw_clt.cpp
   addr: 0040B850 */

int __fastcall pwpCLTInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pwp_clt,0x50434c54,0x50,pwpCOLT::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: plw_clt.cpp
   addr: 0040B890 */

void __thiscall pwpCOLT::PlayShootSound(pwpCOLT *this)

{
  int iVar1;
  
  if (*(int *)(this + 399) == 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602518,0);
    return;
  }
  iVar1 = m3dRandIntRange(0,2);
  (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_006023e0 + iVar1 * 0x68,0);
  return;
}




/* from: plw_clt.cpp
   addr: 0040B8E0 */

void __thiscall pwpCOLT::Anim2Sound(pwpCOLT *this)

{
  int iVar1;
  
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,0);
  if (iVar1 != 0) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
  }
  return;
}




/* from: plw_clt.cpp
   addr: 0040B910 */

void __thiscall pwpCOLT::UpdateSound(pwpCOLT *this)

{
  if (((byte)this[0xf8] & 1) != 0) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602580,0);
  }
  pwpWEAPON::UpdateSound((pwpWEAPON *)this);
  return;
}




/* from: plw_clt.cpp
   addr: 0040B940 */

int __thiscall pwpCOLT::ProcessINIT(pwpCOLT *this)

{
  int iVar1;
  undefined4 uVar2;
  m3dSPL *this_00;
  
  iVar1 = pwpBULLET_WPN::ProcessINIT((pwpBULLET_WPN *)this);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x18b) = 0xe;
  *(undefined4 *)(this + 399) = 0xe;
  *(undefined4 *)(this + 0x197) = 0;
  *(undefined4 *)(this + 0x19b) = 1;
  iVar1 = *(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90);
  uVar2 = ftol();
  *(undefined4 *)(iVar1 + 0x414) = uVar2;
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
  *(uint *)(this + 0x193) = *(uint *)(this + 0x193) | 2;
  (**(code **)(*(int *)this + 0xa0))(0);
  *(undefined4 *)(this + 0x15b) = 0x41200000;
  (**(code **)(*(int *)this + 0xd4))(0x3f800000);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.0096);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.16666667,0.030000001);
  (**(code **)(*(int *)this + 0xd8))(0x3f800000,0x3ba3d70a,this_00);
  iVar1 = sncLinkSndListData(6,(sncSOUND_DESCR_3D *)&DAT_006023e0);
  return (uint)(iVar1 != 0);
}




/* from: plw_clt.cpp
   addr: 0040BA80 */

void __thiscall pwpCOLT::ProcessFRAME(pwpCOLT *this)

{
  int iVar1;
  
  pwpBULLET_WPN::ProcessFRAME((pwpBULLET_WPN *)this);
  iVar1 = *(int *)(this + 0xbc);
  if ((*(byte *)(iVar1 + 4) & 1) != 0) {
    return;
  }
  if ((*(int *)(iVar1 + 0xe0) == 7) && ((*(byte *)(iVar1 + 0x28) & 2) != 0)) {
    (**(code **)(*(int *)this + 0xe0))(1);
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),8,1);
  if ((iVar1 == 0) && (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),9,1), iVar1 == 0)
     ) {
    return;
  }
  ThrowClip(this);
  return;
}




/* WARNING: Removing unreachable block (ram,0x0040beed) */
/* from: plw_clt.cpp
   addr: 0040BAE0 */

int __thiscall pwpCOLT::SetupAniSystem(pwpCOLT *this)

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
    _entAnimSetSeqName(paVar1,10,s_CLT_SEQ_PREPARE_TO_SHOOT);
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
    (**(code **)(*piVar3 + 0x20))(1,2);
    (**(code **)(*piVar3 + 4))(2,1,1,1,1);
    (**(code **)(*piVar3 + 4))(4,1,0,1,0);
    (**(code **)(*piVar3 + 4))(4,6,0,6,0);
    (**(code **)(*piVar3 + 4))(1,6,0,6,0);
    (**(code **)(*piVar3 + 4))(3,6,0,6,0);
    (**(code **)(*piVar3 + 4))(7,6,0,6,0);
    (**(code **)(*piVar3 + 4))(8,6,0,6,0);
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
    (**(code **)(*piVar3 + 4))(10,7,0,7,0);
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
    (**(code **)(*piVar3 + 4))(3,9,0,9);
  }
  return 1;
}




/* from: plw_clt.cpp
   addr: 0040BF30
   addr: 0040BF30 */

int __thiscall pwpCOLT::GetCurAnimSeq(pwpCOLT *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if (iVar1 == 10) {
    iVar1 = 7;
  }
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_clt.cpp
   addr: 0040BF50 */

void __thiscall pwpCOLT::ThrowClip(pwpCOLT *this)

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
    m3dMATR::Translate(local_86,-0.5,1.3,0.1,1);
    local_98 = 0x3e4ccccd;
    local_94 = 0x3e4ccccd;
    local_90 = 0x3e4ccccd;
    m3dMATR::GetAxisZ(local_86,(m3dV *)&local_148);
    local_144 = 0xbe99999a;
    local_b0 = 0x3f000000;
    local_b4 = 0x3ecccccd;
    peVar2 = entCreate(gsScenePtr,s_rigid,s_pwp_clt_clip,(animCREATE_DATA *)&local_98,&local_150,0);
    if (peVar2 != (entENTITY *)0x0) {
      objOBJ::SetConstColor
                (*(objOBJ **)(*(int *)(peVar2 + 0xbc) + 0x10),*(ulong *)(this + 0x9c),2,8);
      *(uint *)(*(int *)(peVar2 + 0xbc) + 4) = *(uint *)(*(int *)(peVar2 + 0xbc) + 4) | 0x10;
      msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)peVar2,2,(msgADDR *)0x0,5.0);
    }
  }
  return;
}




/* from: plw_clt.cpp
   addr: 0040C110 */

entENTITY * __fastcall pwpCOLT::Create(animINST *param_1)

{
  pwpBULLET_WPN *this;
  
  this = (pwpBULLET_WPN *)operator_new(0x1c3);
  if (this != (pwpBULLET_WPN *)0x0) {
    pwpBULLET_WPN::pwpBULLET_WPN(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 1;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}

