
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim_anim.cpp
   addr: 004C46C0 */

float __thiscall animSEQ::TimeToFrame(animSEQ *this,float param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(float *)(this + 0x50) < ___real_3a83126f) {
    *(undefined4 *)(this + 0x50) = 0x3f000000;
  }
  if (*(int *)(this + 0x80) == 0) {
    fVar2 = *(float *)(this + 0x50) * ___real_3a83126f;
    local_14 = 0.0;
    local_18 = 0.0;
    local_1c = fVar2;
    fVar1 = *(float *)(this + 0x4c);
    if (fVar2 < ___real_00000000) {
      local_1c = 0.0;
      local_18 = fVar2;
      local_14 = *(float *)(this + 0x4c);
      fVar1 = ___real_00000000;
    }
    fVar2 = local_14;
    if ((local_18 <= param_1) && (fVar2 = fVar1, param_1 <= local_1c)) {
      local_4 = local_1c;
      local_10 = local_18;
      local_c = local_14;
      local_8 = fVar1;
      if (local_1c < local_18) {
        local_10 = local_1c;
        local_4 = local_18;
        local_8 = local_14;
        local_c = fVar1;
      }
      fVar2 = ((param_1 - local_10) * (local_8 - local_c)) / (local_4 - local_10) + local_c;
    }
    local_4 = fVar2 + *(float *)(this + 0x48) + *(float *)(this + 0x40);
    local_c = (_DAT_005dba94 * ___real_42c80000 + *(float *)(this + 0x44)) - *(float *)(this + 0x40)
    ;
    fVar1 = local_4 - *(float *)(this + 0x40);
  }
  else {
    if (*(int *)(this + 0x80) != 1) {
      return ___real_00000000;
    }
    fVar2 = *(float *)(this + 0x50) * ___real_3a83126f;
    local_14 = 0.0;
    local_18 = 0.0;
    local_1c = fVar2;
    fVar1 = *(float *)(this + 0x4c);
    if (fVar2 < ___real_00000000) {
      local_1c = 0.0;
      local_18 = fVar2;
      local_14 = *(float *)(this + 0x4c);
      fVar1 = ___real_00000000;
    }
    fVar2 = fVar1;
    if ((local_18 <= param_1) && (fVar2 = local_14, param_1 <= local_1c)) {
      local_8 = local_1c;
      local_c = local_18;
      local_4 = local_14;
      local_10 = fVar1;
      if (local_1c < local_18) {
        local_c = local_1c;
        local_8 = local_18;
        local_10 = local_14;
        local_4 = fVar1;
      }
      fVar2 = ((param_1 - local_c) * (local_4 - local_10)) / (local_8 - local_c) + local_10;
    }
    local_4 = fVar2 + *(float *)(this + 0x48) + *(float *)(this + 0x44);
    local_c = (_DAT_005dba94 * ___real_42c80000 + *(float *)(this + 0x40)) - *(float *)(this + 0x44)
    ;
    fVar1 = local_4 - *(float *)(this + 0x44);
  }
  param_1 = (float)(uint)(ABS(local_c) < _DAT_005dba94);
  if ((float)(int)param_1 == ___real_00000000) {
    dVar3 = floor((double)(fVar1 / local_c));
    fVar1 = (float)dVar3 * local_c;
  }
  return local_4 - fVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim_anim.cpp
   addr: 004C49C0 */

float __thiscall animSEQ::FrameToTime(animSEQ *this,float param_1)

{
  float fVar1;
  float fVar2;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(this + 0x80) == 2) {
    return ___real_00000000;
  }
  local_18 = *(float *)(this + 0x40);
  local_14 = 0.0;
  fVar2 = *(float *)(this + 0x50) * ___real_3a83126f;
  fVar1 = *(float *)(this + 0x44);
  local_1c = fVar1;
  if (*(int *)(this + 0x80) == 0) {
    if (fVar1 < local_18) {
      local_1c = local_18;
      local_18 = fVar1;
      local_14 = fVar2;
      fVar2 = ___real_00000000;
    }
    if (param_1 < local_18) {
      return local_14;
    }
    if (param_1 <= local_1c) {
      local_c = local_14;
      local_4 = local_1c;
      local_10 = local_18;
      local_8 = fVar2;
      if (local_1c < local_18) {
        local_10 = local_1c;
        local_4 = local_18;
        local_8 = local_14;
        local_c = fVar2;
      }
      return ((param_1 - local_10) * (local_8 - local_c)) / (local_4 - local_10) + local_c;
    }
  }
  else {
    if (local_18 < fVar1) {
      local_1c = local_18;
      local_18 = fVar1;
      local_14 = fVar2;
      fVar2 = ___real_00000000;
    }
    if (param_1 < local_1c) {
      return local_14;
    }
    if (param_1 <= local_18) {
      local_c = local_1c;
      local_8 = local_18;
      local_10 = local_14;
      local_4 = fVar2;
      if (local_18 < local_1c) {
        local_c = local_18;
        local_8 = local_1c;
        local_4 = local_14;
        local_10 = fVar2;
      }
      fVar2 = ((param_1 - local_c) * (local_4 - local_10)) / (local_8 - local_c) + local_10;
    }
  }
  return fVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim_anim.cpp
   addr: 004C4B90 */

void __thiscall animSEQ::PrepareDir(animSEQ *this)

{
  bool bVar1;
  
  if (*(float *)(this + 0x44) <= *(float *)(this + 0x40)) {
    if (*(float *)(this + 0x40) <= *(float *)(this + 0x44)) {
      *(undefined4 *)(this + 0x80) = 2;
    }
    else {
      bVar1 = *(float *)(this + 0x4c) < ___real_3dcccccd;
      *(undefined4 *)(this + 0x80) = 1;
      if (bVar1) {
        *(float *)(this + 0x4c) = *(float *)(this + 0x40) - *(float *)(this + 0x44);
        return;
      }
    }
  }
  else {
    bVar1 = *(float *)(this + 0x4c) < ___real_3dcccccd;
    *(undefined4 *)(this + 0x80) = 0;
    if (bVar1) {
      *(float *)(this + 0x4c) = *(float *)(this + 0x44) - *(float *)(this + 0x40);
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim_anim.cpp
   addr: 004C4C00 */

int __thiscall animSEQ::IsActionFrame(animSEQ *this,int param_1,float param_2,float param_3)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  ushort uVar4;
  uint local_4;
  
  fVar1 = (float)*(int *)(this + param_1 * 4 + 0x58);
  if ((float)*(int *)(this + param_1 * 4 + 0x58) < ___real_3f800000) {
    return 0;
  }
  if (*(int *)(this + 0x80) == 0) {
    fVar3 = _DAT_005dba94 * ___real_41200000;
    local_4 = (uint)(ABS(param_2 - param_3) < fVar3);
    if ((float)local_4 != ___real_00000000) {
      bVar2 = fVar3 <= ABS(param_3 - fVar1);
LAB_004c4d7d:
      if ((float)!bVar2 != ___real_00000000) {
        return 1;
      }
      return 0;
    }
    if (param_3 <= param_2) {
      if (fVar1 <= param_3 + fVar3) {
        return 1;
      }
      uVar4 = (ushort)(fVar1 < param_2) << 8 | (ushort)(fVar1 == param_2) << 0xe;
      goto LAB_004c4ce9;
    }
    if (fVar1 <= param_2) {
      return 0;
    }
    bVar2 = param_3 + ___real_3a83126f < fVar1;
  }
  else {
    local_4 = (uint)(ABS(param_2 - param_3) < _DAT_005dba94 * ___real_42c80000);
    if ((float)local_4 != ___real_00000000) {
      bVar2 = _DAT_005dba94 * ___real_42c80000 <= ABS(param_3 - fVar1);
      goto LAB_004c4d7d;
    }
    if (param_2 <= param_3) {
      if (fVar1 <= param_3 + ___real_3a83126f) {
        return 1;
      }
      if (fVar1 <= param_2) {
        return 0;
      }
      return 1;
    }
    if (param_2 <= fVar1) {
      return 0;
    }
    bVar2 = fVar1 + ___real_3a83126f < param_3;
  }
  uVar4 = (ushort)bVar2 << 8;
LAB_004c4ce9:
  if (uVar4 == 0) {
    return 1;
  }
  return 0;
}




/* from: engine:anim_anim.cpp
   addr: 004C4E10 */

animCREATE_DATA * __thiscall animCREATE_DATA::animCREATE_DATA(animCREATE_DATA *this)

{
  int iVar1;
  animCREATE_DATA *paVar2;
  
  paVar2 = this;
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)paVar2 = 0;
    paVar2 = paVar2 + 4;
  }
  *(undefined2 *)paVar2 = 0;
  *(undefined2 *)(this + 0xc) = 0xffff;
  *(undefined4 *)(this + 0xe) = 0;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined4 *)(this + 4) = 0x3f800000;
  *(undefined4 *)this = 0x3f800000;
  m3dMATR::Identity((m3dMATR *)(this + 0x12));
  return this;
}




/* from: engine:anim_anim.cpp
   addr: 004C4E50 */

void __thiscall animINST::SetAnimSeq(animINST *this,int param_1,float param_2)

{
  int iVar1;
  
  if (param_1 < -1) {
LAB_004c4e75:
    param_1 = -1;
  }
  else {
    if (*(int *)(this + 0x138) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(this + 0x138) + 0x8c);
    }
    if (iVar1 <= param_1) goto LAB_004c4e75;
    if (param_1 != -1) {
      Invalidate(this,0x18);
      goto LAB_004c4e81;
    }
  }
  Validate(this,0xc);
LAB_004c4e81:
  *(int *)(this + 0xe0) = param_1;
  if (param_1 != -1) {
    *(float *)(this + 0x24) = param_2;
  }
  iVar1 = *(int *)(this + 0xfc);
  if (iVar1 != 0) {
    if (param_1 == -1) {
      if ((*(int *)(this + 0x138) != 0) && (0 < *(int *)(*(int *)(this + 0x138) + 0x8c))) {
        *(int *)(this + 0x100) = iVar1;
      }
    }
    else {
      *(int *)(this + 0x100) = iVar1 + param_1 * 0x24;
    }
    Invalidate(this,0x100);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0xe000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim_anim.cpp
   addr: 004C4F00 */

int __thiscall animINST::AdvanceTime(animINST *this,float param_1,int param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char *_Str1;
  int iVar5;
  int iVar6;
  animSEQ *this_00;
  int iVar7;
  float fVar8;
  float fVar9;
  uint local_10;
  int local_c;
  
  iVar7 = 0;
  bVar4 = false;
  local_c = 0;
  iVar1 = *(int *)(*(int *)(this + 0x138) + 0x90);
  _Str1 = *(char **)(this + 0x20);
  if (_Str1 == (char *)0x0) {
    _Str1 = s_;
  }
  iVar5 = stricmp(_Str1,s_Actor_cap_1);
  if (((iVar5 != 0) && ((*(uint *)(this + 4) & 3) != 0)) && ((*(uint *)(this + 4) & 4) == 0)) {
    return 0;
  }
  iVar5 = *(int *)(this + 0xe0);
  if (iVar5 == -1) {
    return 1;
  }
  local_10 = (uint)(ABS(*(float *)(iVar1 + 0x50 + iVar5 * 0x88)) < _DAT_005dba94);
  if ((float)local_10 != ___real_00000000) {
    return 1;
  }
  fVar8 = animSEQ::TimeToFrame((animSEQ *)(iVar1 + iVar5 * 0x88),*(float *)(this + 0x24));
  fVar2 = *(float *)(this + 0x24);
  fVar9 = param_1 + *(float *)(this + 0x24);
  this_00 = (animSEQ *)(iVar1 + *(int *)(this + 0xe0) * 0x88);
  *(float *)(this + 0x24) = fVar9;
  fVar3 = *(float *)(this_00 + 0x50) * ___real_3a83126f;
  if (fVar9 <= fVar3) goto LAB_004c5083;
  if (param_2 == 0) {
    fVar9 = fVar9 - fVar3;
LAB_004c5078:
    *(float *)(this + 0x24) = fVar9;
  }
  else if (param_2 == 1) {
    if (param_3 != (float *)0x0) {
      *param_3 = fVar9 - fVar3;
    }
    fVar9 = *(float *)(iVar1 + 0x50 + *(int *)(this + 0xe0) * 0x88) * ___real_3a83126f;
    this_00 = (animSEQ *)(iVar1 + *(int *)(this + 0xe0) * 0x88);
    if (fVar9 - _DAT_005dba94 < *(float *)(this + 0x24) - param_1) {
      bVar4 = true;
    }
    goto LAB_004c5078;
  }
  local_c = 1;
LAB_004c5083:
  fVar9 = animSEQ::TimeToFrame(this_00,*(float *)(this + 0x24));
  *(float *)(this + 0xe4) = fVar9;
  *(undefined4 *)(this + 0x28) = 0;
  if (!bVar4) {
    iVar5 = *(int *)(this + 0xe0);
    do {
      iVar6 = animSEQ::IsActionFrame((animSEQ *)(iVar1 + iVar5 * 0x88),iVar7,fVar8,fVar9);
      if (iVar6 != 0) {
        *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1 << ((byte)iVar7 & 0x1f);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 10);
  }
  param_1 = (float)(uint)(ABS(fVar2 - *(float *)(this + 0x24)) < _DAT_005dba94);
  if ((float)(int)param_1 == ___real_00000000) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2000;
    Invalidate(this,8);
  }
  return local_c;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim_anim.cpp
   addr: 004C5140 */

void __thiscall
animINST::SetSeqBlendParam
          (animINST *this,int param_1,float param_2,int param_3,float param_4,float param_5)

{
  bool bVar1;
  
  if (param_1 == -1) {
    param_1 = *(int *)(this + 0xe0);
  }
  bVar1 = param_2 < ___real_00000000;
  *(int *)(this + 0x30) = param_1;
  *(int *)(this + 0x34) = param_3;
  if (bVar1) {
    param_2 = *(float *)(this + 0x24);
  }
  *(float *)(this + 0x38) = param_2;
  *(float *)(this + 0x48) = param_5;
  *(float *)(this + 0x3c) = param_4;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  return;
}




/* from: engine:anim_anim.cpp
   addr: 004C51A0 */

void __thiscall
animINST::GetBlendParams(animINST *this,float *param_1,float *param_2,float *param_3)

{
  *param_1 = *(float *)(this + 0x40);
  *param_2 = *(float *)(this + 0x44);
  *param_3 = *(float *)(this + 0x48);
  return;
}

