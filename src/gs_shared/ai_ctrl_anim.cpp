
/* from: gs_shared:ai_ctrl_anim.cpp
   addr: 00535400 */

void __thiscall aiNPC::GetPosRooted(aiNPC *this,m3dV *param_1)

{
  if ((*(objOBJ **)(this + 0x163) != (objOBJ *)0x0) &&
     ((*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90) + 0x84 +
                *(int *)(*(int *)(this + 0xbc) + 0xe0) * 0x88) & 1) != 0)) {
    objValidateLTM(*(objOBJ **)(this + 0x163));
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x163),param_1);
    return;
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),param_1);
  return;
}




/* from: gs_shared:ai_ctrl_anim.cpp
   addr: 00535470 */

void __thiscall aiNPC::SetPosRooted(aiNPC *this,m3dV *param_1)

{
  animINST *this_00;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  if (*(objOBJ **)(this + 0x163) != (objOBJ *)0x0) {
    this_00 = *(animINST **)(this + 0xbc);
    if ((*(byte *)(*(int *)(*(int *)(this_00 + 0x138) + 0x90) + 0x84 +
                  *(int *)(this_00 + 0xe0) * 0x88) & 1) == 0) {
      animINST::GetPos(this_00,(m3dV *)&local_30);
    }
    else {
      objValidateLTM(*(objOBJ **)(this + 0x163));
      objOBJ::GetOrigin(*(objOBJ **)(this + 0x163),(m3dV *)&local_30);
    }
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
    local_4 = local_1c - local_28;
    local_18 = (local_24 - local_30) + *(float *)param_1;
    local_14 = (local_20 - local_2c) + *(float *)(param_1 + 4);
    local_10 = local_4 + *(float *)(param_1 + 8);
    param_1 = (m3dV *)&local_18;
  }
  animINST::Translate(*(animINST **)(this + 0xbc),param_1,0);
  return;
}




/* from: gs_shared:ai_ctrl_anim.cpp
   addr: 00535540 */

void __thiscall aiNPC::MoveRootedPivoted(aiNPC *this)

{
  animINST *this_00;
  uint uVar1;
  
  if (((byte)this[0x50f] & 1) != 0) {
    this_00 = *(animINST **)(this + 0xbc);
    if ((char)(*(uint *)(this_00 + 4) >> 8) < '\0') {
      uVar1 = *(uint *)(*(int *)(*(int *)(this_00 + 0x138) + 0x90) + *(int *)(this_00 + 0xe0) * 0x88
                       + 0x84);
      if ((((uVar1 & 1) == 0) || ((uVar1 & 4) == 0)) || ((*(uint *)(this_00 + 4) & 0x4000) == 0)) {
        animINST::Transform(this_00,(m3dMATR *)(this + 0x4cf),0);
        animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)(this + 0xd4));
        *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x10;
      }
    }
  }
  return;
}




/* from: gs_shared:ai_ctrl_anim.cpp
   addr: 005355C0 */

void __thiscall aiNPC::Animate(aiNPC *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  m3dMATR *pmVar4;
  m3dMATR *this_00;
  float10 fVar5;
  
  if (((byte)this[0x88] & 4) == 0) {
    iVar1 = *(int *)(this + 0x4c7);
  }
  else {
    iVar1 = (**(code **)(*(int *)this + 200))();
  }
  iVar2 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
  if (((byte)this[0xb4] & 0x10) == 0) {
    if (((byte)this[0x88] & 4) == 0) {
      fVar5 = (float10)gsElapsedTime * (float10)*(float *)(this + 0x4cb);
    }
    else {
      fVar5 = (float10)(**(code **)(*(int *)this + 0xcc))();
      fVar5 = fVar5 * (float10)*(float *)(this + 0x513) * (float10)gsElapsedTime;
    }
    animSYSTEM_INST::AdvanceAnimation
              (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc)
               ,iVar1,(float)fVar5);
  }
  if (*(int *)(*(int *)(this + 0xbc) + 0xe0) != iVar2) {
    *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x10;
  }
  (**(code **)(*(int *)this + 0xd4))();
  if (*(int *)(*(int *)(this + 0xbc) + 0x28) != 0) {
    (**(code **)(*(int *)this + 0x134))();
  }
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(*(int *)(this + 0xbc) + 0x28) != 0) {
      (**(code **)(*(int *)this + 0xd0))();
    }
    (**(code **)(*(int *)this + 0xd8))();
    iVar1 = *(int *)(this + 0xbc);
    if ((*(byte *)(*(int *)(*(int *)(iVar1 + 0x138) + 0x90) + 0x84 + *(int *)(iVar1 + 0xe0) * 0x88)
        & 1) != 0) {
      this_00 = (m3dMATR *)(this + 0x4cf);
      if (*(objOBJ **)(this + 0x163) != (objOBJ *)0x0) {
        objValidateLTM(*(objOBJ **)(this + 0x163));
        puVar3 = (undefined4 *)(*(int *)(this + 0x163) + 0x3c);
        pmVar4 = this_00;
        for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined4 *)pmVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          pmVar4 = pmVar4 + 4;
        }
        m3dMATR::RemoveScale(this_00);
        return;
      }
      puVar3 = (undefined4 *)(iVar1 + 0x60);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)this_00 = *puVar3;
        puVar3 = puVar3 + 1;
        this_00 = this_00 + 4;
      }
    }
  }
  return;
}

