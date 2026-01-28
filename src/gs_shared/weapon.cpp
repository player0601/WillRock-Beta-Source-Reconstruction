
/* from: gs_shared:weapon.cpp
   addr: 0052E210 */

wpnWEAPON * __thiscall wpnWEAPON::wpnWEAPON(wpnWEAPON *this)

{
  entENTITY::entENTITY((entENTITY *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x15b) = 0x41200000;
  *(undefined4 *)(this + 0x17f) = 0x41200000;
  *(undefined4 *)(this + 0x1c) = 0x4b;
  *(undefined4 *)(this + 0x157) = 0x42c80000;
  *(undefined4 *)(this + 0x153) = 0x3f800000;
  *(undefined4 *)(this + 0x15f) = 0;
  *(undefined4 *)(this + 0x14f) = 1;
  return this;
}




/* from: gs_shared:weapon.cpp
   addr: 0052E270
   addr: 0052E270 */

void * __thiscall wpnWEAPON::_vector_deleting_destructor_(wpnWEAPON *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs_shared:weapon.cpp
   addr: 0052E2C0 */

int __thiscall wpnWEAPON::AddAmmo(wpnWEAPON *this,float param_1)

{
  float fVar1;
  
  if (((byte)this[0x14f] & 4) == 0) {
    if (*(float *)(this + 0x157) <= *(float *)(this + 0x17f)) {
      return 0;
    }
    fVar1 = *(float *)(this + 0x157) - *(float *)(this + 0x17f);
    if (param_1 <= *(float *)(this + 0x157) - *(float *)(this + 0x17f)) {
      fVar1 = param_1;
    }
    *(float *)(this + 0x17f) = fVar1 + *(float *)(this + 0x17f);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:weapon.cpp
   addr: 0052E320 */

int __thiscall wpnWEAPON::SubtractAmmo(wpnWEAPON *this,float param_1)

{
  float fVar1;
  
  if (((byte)this[0x14f] & 4) == 0) {
    if (*(float *)(this + 0x17f) < ___real_00000000) {
      return 0;
    }
    fVar1 = *(float *)(this + 0x17f);
    *(float *)(this + 0x17f) = fVar1 - param_1;
    if (fVar1 - param_1 < ___real_00000000) {
      *(undefined4 *)(this + 0x17f) = 0;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:weapon.cpp
   addr: 0052E370 */

int __thiscall wpnWEAPON::Shoot(wpnWEAPON *this,entENTITY *param_1,m3dV *param_2)

{
  int iVar1;
  
  if (param_2 != (m3dV *)0x0) {
    *(float *)(this + 0x16f) = *(float *)param_2 - *(float *)(this + 0x163);
    *(float *)(this + 0x173) = *(float *)(param_2 + 4) - *(float *)(this + 0x167);
    *(float *)(this + 0x177) = *(float *)(param_2 + 8) - *(float *)(this + 0x16b);
    m3dNormalize((m3dV *)(this + 0x16f));
  }
  iVar1 = (**(code **)(*(int *)this + 0x7c))();
  if ((iVar1 != 0) &&
     ((___real_00000000 < *(float *)(this + 0x17f) || (((byte)this[0x14f] & 4) != 0)))) {
    if (*(float *)(this + 0x153) < _DAT_005dd140) {
      *(undefined4 *)(this + 0x15f) = 0;
      return 1;
    }
    *(float *)(this + 0x15f) = ___real_3f800000 / *(float *)(this + 0x153);
    return 1;
  }
  return 0;
}




/* from: gs_shared:weapon.cpp
   addr: 0052E420 */

void __thiscall wpnWEAPON::MakeDamage(wpnWEAPON *this,dmgWEAPON *param_1,m3dV *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*(int *)this + 0xa4))();
  *(float *)(param_1 + 8) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + 0x94);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 8);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  if ((m3dV *)(param_1 + 0x20) != (m3dV *)0x0) {
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x17b),(m3dV *)(param_1 + 0x20));
  }
  return;
}




/* from: gs_shared:weapon.cpp
   addr: 0052E480 */

int __thiscall wpnWEAPON::ProcessINIT(wpnWEAPON *this)

{
  objOBJ *poVar1;
  
  *(undefined4 *)(this + 0x15f) = 0;
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_tip);
  *(objOBJ **)(this + 0x17b) = poVar1;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:weapon.cpp
   addr: 0052E4B0 */

void __thiscall wpnWEAPON::ProcessFRAME(wpnWEAPON *this)

{
  float fVar1;
  uint uVar2;
  
  fVar1 = *(float *)(this + 0x15f) - gsElapsedTime;
  *(float *)(this + 0x15f) = fVar1;
  if (___real_00000000 <= fVar1) {
    uVar2 = *(uint *)(this + 0x14f) & 0xfffffffd;
  }
  else {
    *(undefined4 *)(this + 0x15f) = 0;
    uVar2 = *(uint *)(this + 0x14f) | 2;
  }
  *(uint *)(this + 0x14f) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0052e4ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x80))();
  return;
}




/* from: gs_shared:weapon.cpp
   addr: 0052E500 */

int __thiscall
wpnWEAPON::ProcessMsg(wpnWEAPON *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      (**(code **)(*(int *)this + 0x8c))();
      return 0;
    }
    if (param_1 == 1) {
      (**(code **)(*(int *)this + 0x84))();
      return 0;
    }
    if (param_1 == 2) {
      (**(code **)(*(int *)this + 0x88))();
      return 0;
    }
    if (param_1 == 3) {
      (**(code **)(*(int *)this + 0x94))(param_2);
      return 0;
    }
  }
  else if (param_1 == 0x3f4) {
    (**(code **)(*(int *)this + 0x90))();
  }
  else {
    if (param_1 == 0x40c) {
      (**(code **)(*(int *)this + 0x9c))(param_2);
      return 0;
    }
    if (param_1 == 0x4c6) {
      (**(code **)(*(int *)this + 0x98))(param_2);
      return 0;
    }
  }
  return 0;
}




/* from: gs_shared:weapon.cpp
   addr: 0052E5A0 */

void __thiscall wpnWEAPON::GetOrgDirTip(wpnWEAPON *this,m3dV *param_1,m3dV *param_2)

{
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  if (param_1 != (m3dV *)0x0) {
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x17b),param_1);
  }
  if (param_2 != (m3dV *)0x0) {
    objOBJ::GetAxisZ(*(objOBJ **)(this + 0x17b),param_2);
  }
  return;
}




/* from: gs_shared:weapon.cpp
   addr: 0052E5E0 */

void __thiscall wpnWEAPON::UpdateShootPosDir(wpnWEAPON *this)

{
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x17b),(m3dV *)(this + 0x163));
  objOBJ::GetAxisZ(*(objOBJ **)(this + 0x17b),(m3dV *)(this + 0x16f));
  return;
}

