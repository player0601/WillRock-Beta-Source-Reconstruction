
/* from: engine:anim_chn.cpp
   addr: 004DB0E0 */

void __thiscall animCHN::Start(animCHN *this)

{
  if (*(int *)this == 0) {
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)this = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim_chn.cpp
   addr: 004DB100 */

void __thiscall animCHN::AdvanceAnimation(animCHN *this,float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float local_c;
  float local_8;
  
  iVar4 = 0;
  iVar3 = *(int *)(this + 0x14);
  fVar6 = *(float *)(*(int *)(iVar3 + 0xc) + 0x50) * ___real_3a83126f;
  *(undefined4 *)(this + 0x10) = 0;
  if (*(int *)this != 0) {
    fVar2 = param_1 + *(float *)(this + 8);
    *(float *)(this + 8) = fVar2;
    if (fVar2 <= fVar6) {
      if (*(float *)(iVar3 + 8) <= fVar2) {
        fVar1 = fVar6 - *(float *)(iVar3 + 8);
        if (fVar2 <= fVar1) {
          *(undefined4 *)(this + 0xc) = 0x3f800000;
        }
        else {
          local_8 = 0.0;
          local_c = fVar6;
          fVar5 = ___real_3f800000;
          if (fVar6 < fVar1) {
            local_8 = 1.0;
            local_c = fVar1;
            fVar5 = ___real_00000000;
            fVar1 = fVar6;
          }
          *(float *)(this + 0xc) = ((fVar2 - fVar1) * (local_8 - fVar5)) / (local_c - fVar1) + fVar5
          ;
        }
      }
      else {
        fVar1 = *(float *)(iVar3 + 8);
        local_c = 0.0;
        local_8 = 1.0;
        fVar5 = ___real_00000000;
        if (fVar1 < ___real_00000000) {
          local_8 = 0.0;
          local_c = fVar1;
          fVar5 = ___real_3f800000;
          fVar1 = ___real_00000000;
        }
        *(float *)(this + 0xc) = ((fVar2 - local_c) * (local_8 - fVar5)) / (fVar1 - local_c) + fVar5
        ;
      }
    }
    else {
      *(undefined4 *)this = 0;
    }
    fVar5 = animSEQ::TimeToFrame(*(animSEQ **)(iVar3 + 0xc),fVar2 - param_1);
    fVar2 = *(float *)(this + 8);
    param_1 = fVar6;
    fVar1 = ___real_00000000;
    if (fVar6 < ___real_00000000) {
      param_1 = 0.0;
      fVar1 = fVar6;
    }
    if ((fVar1 <= fVar2) && (fVar1 = fVar2, param_1 < fVar2)) {
      fVar1 = param_1;
    }
    param_1 = fVar1;
    fVar6 = animSEQ::TimeToFrame(*(animSEQ **)(*(int *)(this + 0x14) + 0xc),param_1);
    do {
      iVar3 = animSEQ::IsActionFrame(*(animSEQ **)(*(int *)(this + 0x14) + 0xc),iVar4,fVar5,fVar6);
      if (iVar3 != 0) {
        *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1 << ((byte)iVar4 & 0x1f);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
  }
  return;
}




/* from: engine:anim_chn.cpp
   addr: 004DB320 */

void __thiscall animCHN::BegObjHier(animCHN *this,objOBJ *param_1)

{
  if (*(int *)(*(int *)(this + 0x14) + 4) == (int)*(short *)(param_1 + 0x1c)) {
    *(undefined4 *)(this + 4) = 1;
  }
  return;
}




/* from: engine:anim_chn.cpp
   addr: 004DB340 */

void __thiscall animCHN::EndObjHier(animCHN *this,objOBJ *param_1)

{
  if (*(int *)(*(int *)(this + 0x14) + 4) == (int)*(short *)(param_1 + 0x1c)) {
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}




/* from: engine:anim_chn.cpp
   addr: 004DB360 */

int __thiscall animCHN::IsActive(animCHN *this,objOBJ *param_1,int param_2)

{
  if (*(int *)this == 0) {
    return 0;
  }
  if (*(int *)(this + 4) == 0) {
    return 0;
  }
  return (uint)((*(uint *)(*(int *)(this + 0x14) + 0x10) & param_2) != 0);
}




/* from: engine:anim_chn.cpp
   addr: 004DB390 */

float __thiscall animCHN::GetFrameCur(animCHN *this)

{
  float fVar1;
  
  fVar1 = animSEQ::TimeToFrame(*(animSEQ **)(*(int *)(this + 0x14) + 0xc),*(float *)(this + 8));
  return fVar1;
}

