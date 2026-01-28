
/* from: engine:pte_spot_a.cpp
   addr: 004C8BF0 */

int __fastcall pteSpotAnimInit(void)

{
  int iVar1;
  
  iVar1 = pteMANAGER::RegisterClass(pteManager,s_spot,0x14,pteSPOT_ANIM::Create);
  return (uint)(iVar1 != 0);
}




/* from: engine:pte_spot_a.cpp
   addr: 004C8C10 */

pteSHADER * __fastcall pteSPOT_ANIM::Create(animINST *param_1,objOBJ *param_2)

{
  pteSPOT *this;
  
  this = (pteSPOT *)operator_new(0x108);
  if (this != (pteSPOT *)0x0) {
    pteSPOT::pteSPOT(this,1);
    *(undefined4 *)(this + 0xf8) = 0;
    *(undefined4 *)(this + 0xfc) = 0;
    *(undefined4 *)(this + 0x100) = 0;
    *(undefined4 *)(this + 0x104) = 0;
    *(undefined ***)this = &_vftable_;
    return (pteSHADER *)this;
  }
  return (pteSHADER *)0x0;
}




/* from: engine:pte_spot_a.cpp
   addr: 004C8C60 */

void __thiscall pteSPOT_ANIM::Update(pteSPOT_ANIM *this,float param_1)

{
  float local_20;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (((byte)this[4] & 1) != 0) {
    local_20 = *(float *)(this + 200);
    if (*(int **)(this + 0xf8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xf8) + 4))(param_1);
      if ((*(byte *)(*(int **)(this + 0xf8) + 1) & 1) == 0) {
        if (((byte)this[0xf4] & 4) != 0) {
          (**(code **)(*(int *)this + 4))(0);
        }
      }
      else {
        (**(code **)(**(int **)(this + 0xf8) + 0xc))(&local_20);
        pteSPOT::SetRadius((pteSPOT *)this,local_20);
      }
    }
    if (*(int **)(this + 0xfc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xfc) + 4))(param_1);
      if ((*(byte *)(*(int **)(this + 0xfc) + 1) & 1) == 0) {
        if (((byte)this[0xf4] & 4) != 0) {
          (**(code **)(*(int *)this + 4))(0);
        }
      }
      else {
        (**(code **)(**(int **)(this + 0xfc) + 0xc))(auStack_1c);
        (**(code **)(*(int *)this + 0x14))(&local_20);
      }
    }
    if (*(int **)(this + 0x100) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x100) + 4))(param_1);
      if ((*(byte *)(*(int **)(this + 0x100) + 1) & 1) == 0) {
        if (((byte)this[0xf4] & 4) != 0) {
          (**(code **)(*(int *)this + 4))(0);
        }
      }
      else {
        (**(code **)(**(int **)(this + 0x100) + 0xc))(&local_10);
        *(undefined4 *)(this + 0xa8) = local_10;
        *(undefined4 *)(this + 0xac) = local_c;
        *(undefined4 *)(this + 0xb0) = local_8;
        *(undefined4 *)(this + 0xb4) = local_4;
      }
    }
    if (*(int **)(this + 0x104) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x104) + 4))(param_1);
      if ((*(byte *)(*(int **)(this + 0x104) + 1) & 1) != 0) {
        (**(code **)(**(int **)(this + 0x104) + 0xc))(&uStack_14);
        *(undefined4 *)(this + 0xb8) = uStack_18;
        *(undefined4 *)(this + 0xbc) = uStack_14;
        *(undefined4 *)(this + 0xc0) = local_10;
        *(undefined4 *)(this + 0xc4) = local_c;
        return;
      }
      if (((byte)this[0xf4] & 4) != 0) {
        (**(code **)(*(int *)this + 4))(0);
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_spot_a.cpp
   addr: 004C8E00 */

void __thiscall pteSPOT_ANIM::Init(pteSPOT_ANIM *this)

{
  undefined4 uVar1;
  m3dNOISE *pmVar2;
  int iVar3;
  m3dCTRL_TIME *pmVar4;
  objOBJ *poVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined1 local_2c [12];
  char local_20 [32];
  
  pteSPOT::Init((pteSPOT *)this);
  iVar3 = pteSHADER::ReadStr((pteSHADER *)this,s_ctrl_pos,local_20,0x20);
  if (iVar3 == 0) {
    if (*(int *)(this + 100) == 0) {
      if (*(int *)(this + 0x60) == 0) goto LAB_004c8fcd;
      pmVar4 = (m3dCTRL_TIME *)operator_new(0x2c);
      if (pmVar4 == (m3dCTRL_TIME *)0x0) goto LAB_004c8f99;
      uVar1 = *(undefined4 *)(this + 0x60);
      m3dCTRL_TIME::m3dCTRL_TIME(pmVar4);
      *(undefined4 *)(pmVar4 + 0x18) = _m3dVZero;
      *(undefined4 *)(pmVar4 + 0x1c) = DAT_00963740;
      iVar3 = DAT_00963744;
      *(undefined4 *)(pmVar4 + 0x24) = uVar1;
      *(undefined4 *)(pmVar4 + 0x28) = 0;
LAB_004c8f87:
      *(int *)(pmVar4 + 0x20) = iVar3;
      *(undefined ***)pmVar4 = &animCTRL_3D_FOLLOW::_vftable_;
      *(int *)(pmVar4 + 0x14) = 2;
    }
    else {
      pmVar4 = (m3dCTRL_TIME *)operator_new(0x2c);
      if (pmVar4 != (m3dCTRL_TIME *)0x0) {
        uVar1 = *(undefined4 *)(this + 100);
        m3dCTRL_TIME::m3dCTRL_TIME(pmVar4);
        *(undefined4 *)(pmVar4 + 0x18) = _m3dVZero;
        *(undefined4 *)(pmVar4 + 0x1c) = DAT_00963740;
        iVar3 = DAT_00963744;
        *(undefined4 *)(pmVar4 + 0x24) = 0;
        *(undefined4 *)(pmVar4 + 0x28) = uVar1;
        goto LAB_004c8f87;
      }
LAB_004c8f99:
      pmVar4 = (m3dCTRL_TIME *)0x0;
      if (*(undefined4 **)(this + 0xfc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0xfc))(1);
      }
    }
    *(m3dCTRL_TIME **)(this + 0xfc) = pmVar4;
    if (pmVar4 == (m3dCTRL_TIME *)0x0) goto LAB_004c8fcd;
    (**(code **)(*(int *)pmVar4 + 0xc))(local_2c);
  }
  else {
    iVar3 = 7;
    bVar8 = true;
    pcVar6 = local_20;
    pcVar7 = s_follow;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar8 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if ((!bVar8) || (*(int *)(this + 0x60) == 0)) goto LAB_004c8fcd;
    poVar5 = (objOBJ *)0x0;
    iVar3 = pteSHADER::ReadStr((pteSHADER *)this,s_object,local_20,0x20);
    if (iVar3 != 0) {
      poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0x60) + 0x10),local_20);
    }
    pmVar4 = (m3dCTRL_TIME *)operator_new(0x2c);
    if (pmVar4 == (m3dCTRL_TIME *)0x0) {
      pmVar4 = (m3dCTRL_TIME *)0x0;
      if (*(undefined4 **)(this + 0xfc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0xfc))(1);
      }
    }
    else {
      uVar1 = *(undefined4 *)(this + 0x60);
      m3dCTRL_TIME::m3dCTRL_TIME(pmVar4);
      *(undefined4 *)(pmVar4 + 0x18) = _m3dVZero;
      *(undefined4 *)(pmVar4 + 0x1c) = DAT_00963740;
      iVar3 = DAT_00963744;
      *(undefined4 *)(pmVar4 + 0x24) = uVar1;
      *(objOBJ **)(pmVar4 + 0x28) = poVar5;
      *(int *)(pmVar4 + 0x20) = iVar3;
      *(undefined ***)pmVar4 = &animCTRL_3D_FOLLOW::_vftable_;
      *(undefined4 *)(pmVar4 + 0x14) = 2;
    }
    *(m3dCTRL_TIME **)(this + 0xfc) = pmVar4;
    if (pmVar4 == (m3dCTRL_TIME *)0x0) goto LAB_004c8fcd;
    (**(code **)(*(int *)pmVar4 + 0xc))(local_2c);
  }
  (**(code **)(*(int *)this + 0x14))(&fStack_30);
LAB_004c8fcd:
  iVar3 = pteSHADER::ReadStr((pteSHADER *)this,s_ctrl_rad,local_20,0x20);
  if (iVar3 != 0) {
    iVar3 = 6;
    bVar8 = true;
    pcVar6 = local_20;
    pcVar7 = s_noise;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar8 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (bVar8) {
      fStack_44 = 1.0;
      pteSHADER::ReadFloat((pteSHADER *)this,s_radFreq,&fStack_44);
      fStack_3c = 0.5;
      pteSHADER::ReadFloat((pteSHADER *)this,s_radMin,&fStack_3c);
      fStack_40 = 2.0;
      pteSHADER::ReadFloat((pteSHADER *)this,s_radMax,&fStack_40);
      pmVar4 = (m3dCTRL_TIME *)operator_new(0x2c);
      pmVar2 = m3dNoise;
      if (pmVar4 == (m3dCTRL_TIME *)0x0) {
        pmVar4 = (m3dCTRL_TIME *)0x0;
      }
      else {
        fStack_34 = fStack_40;
        fStack_30 = fStack_44;
        fStack_38 = fStack_3c;
        m3dCTRL_TIME::m3dCTRL_TIME(pmVar4);
        *(undefined4 *)(pmVar4 + 0x18) = 0;
        *(m3dNOISE **)(pmVar4 + 0x1c) = pmVar2;
        *(float *)(pmVar4 + 0x20) = fStack_38;
        *(float *)(pmVar4 + 0x24) = fStack_34;
        *(float *)(pmVar4 + 0x28) = fStack_30;
        *(undefined ***)pmVar4 = &m3dCTRL_1D_NOISE::_vftable_;
        *(uint *)(pmVar4 + 4) = *(uint *)(pmVar4 + 4) | 4;
      }
      if ((this != (pteSPOT_ANIM *)0x0) &&
         (*(m3dCTRL_TIME **)(this + 0xf8) = pmVar4, pmVar4 != (m3dCTRL_TIME *)0x0)) {
        (**(code **)(*(int *)pmVar4 + 0xc))(&fStack_30);
        pteSPOT::SetRadius((pteSPOT *)this,fStack_34);
      }
    }
  }
  return;
}




/* from: engine:pte_spot_a.cpp
   addr: 004C90E0 */

void __thiscall pteSPOT_ANIM::SetCtrlRad(pteSPOT_ANIM *this,m3dCTRL_1D *param_1)

{
  float unaff_retaddr;
  
  if (this != (pteSPOT_ANIM *)0x0) {
    *(m3dCTRL_1D **)(this + 0xf8) = param_1;
    if (param_1 != (m3dCTRL_1D *)0x0) {
      (**(code **)(*(int *)param_1 + 0xc))(&param_1);
      pteSPOT::SetRadius((pteSPOT *)this,unaff_retaddr);
    }
  }
  return;
}




/* from: engine:pte_spot_a.cpp
   addr: 004C9110 */

void __thiscall pteSPOT_ANIM::SetCtrlPos(pteSPOT_ANIM *this,m3dCTRL_3D *param_1)

{
  undefined1 local_c [12];
  
  if ((param_1 == (m3dCTRL_3D *)0x0) && (*(undefined4 **)(this + 0xfc) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(this + 0xfc))(1);
  }
  *(m3dCTRL_3D **)(this + 0xfc) = param_1;
  if (param_1 != (m3dCTRL_3D *)0x0) {
    (**(code **)(*(int *)param_1 + 0xc))(local_c);
    (**(code **)(*(int *)this + 0x14))(&stack0xfffffff0);
  }
  return;
}




/* from: engine:pte_spot_a.cpp
   addr: 004C9160 */

void __thiscall pteSPOT_ANIM::SetCtrlColorLM(pteSPOT_ANIM *this,m3dCTRL_COLOR *param_1)

{
  undefined4 unaff_ESI;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  *(m3dCTRL_COLOR **)(this + 0x100) = param_1;
  (**(code **)(*(int *)param_1 + 0xc))(&local_10);
  *(undefined4 *)(this + 0xa8) = unaff_ESI;
  *(undefined4 *)(this + 0xac) = local_10;
  *(undefined4 *)(this + 0xb0) = local_c;
  *(undefined4 *)(this + 0xb4) = local_8;
  return;
}




/* from: engine:pte_spot_a.cpp
   addr: 004C91D0 */

void __thiscall pteSPOT_ANIM::SetCtrlColorBase(pteSPOT_ANIM *this,m3dCTRL_COLOR *param_1)

{
  undefined4 unaff_ESI;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  *(m3dCTRL_COLOR **)(this + 0x104) = param_1;
  (**(code **)(*(int *)param_1 + 0xc))(&local_10);
  *(undefined4 *)(this + 0xb8) = unaff_ESI;
  *(undefined4 *)(this + 0xbc) = local_10;
  *(undefined4 *)(this + 0xc0) = local_c;
  *(undefined4 *)(this + 0xc4) = local_8;
  return;
}




/* from: engine:pte_spot_a.cpp
   addr: 004C9240 */

void __thiscall pteSPOT_ANIM::SetCurTime(pteSPOT_ANIM *this,float param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xf8);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) & 1) != 0)) {
    *(float *)(iVar1 + 8) = param_1;
  }
  iVar1 = *(int *)(this + 0xfc);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) & 1) != 0)) {
    *(float *)(iVar1 + 8) = param_1;
  }
  iVar1 = *(int *)(this + 0x100);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) & 1) != 0)) {
    *(float *)(iVar1 + 8) = param_1;
  }
  iVar1 = *(int *)(this + 0x104);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) & 1) != 0)) {
    *(float *)(iVar1 + 8) = param_1;
  }
  return;
}




/* from: engine:pte_spot_a.cpp
   addr: 004C92B0 */

int __thiscall pteSPOT_ANIM::DeleteInstNotify(pteSPOT_ANIM *this,animINST *param_1)

{
  animCTRL_3D_FOLLOW *this_00;
  int iVar1;
  
  iVar1 = pteSHADER::DeleteInstNotify((pteSHADER *)this,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  this_00 = *(animCTRL_3D_FOLLOW **)(this + 0xfc);
  if ((this_00 != (animCTRL_3D_FOLLOW *)0x0) && (*(int *)(this_00 + 0x14) == 2)) {
    iVar1 = animCTRL_3D_FOLLOW::IsFollow(this_00,param_1);
    if (iVar1 != 0) {
      if (*(undefined4 **)(this + 0xfc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0xfc))(1);
      }
      *(undefined4 *)(this + 0xfc) = 0;
    }
  }
  return 0;
}




/* from: engine:pte_spot_a.cpp
   addr: 004C9310 */

int __thiscall pteSPOT_ANIM::DeleteObjNotify(pteSPOT_ANIM *this,objOBJ *param_1)

{
  animCTRL_3D_FOLLOW *this_00;
  int iVar1;
  
  iVar1 = pteSHADER::DeleteObjNotify((pteSHADER *)this,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  this_00 = *(animCTRL_3D_FOLLOW **)(this + 0xfc);
  if ((this_00 != (animCTRL_3D_FOLLOW *)0x0) && (*(int *)(this_00 + 0x14) == 2)) {
    iVar1 = animCTRL_3D_FOLLOW::IsFollow(this_00,param_1);
    if (iVar1 != 0) {
      if (*(undefined4 **)(this + 0xfc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0xfc))(1);
      }
      *(undefined4 *)(this + 0xfc) = 0;
    }
  }
  return 0;
}

