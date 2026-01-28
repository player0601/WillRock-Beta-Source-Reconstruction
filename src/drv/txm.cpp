
/* from: drv:txm.cpp
   addr: 004A3260 */

txmTEXTURE * __thiscall txmTEXTURE::txmTEXTURE(txmTEXTURE *this,char *param_1,int param_2)

{
  *(int *)(this + 4) = param_2;
  apNAME::SetName((apNAME *)(this + 8),param_1);
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x48) = 0x20544558;
  *(undefined4 *)(this + 0x54) = 0xffffffff;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  return this;
}




/* from: drv:txm.cpp
   addr: 004A32B0
   addr: 004A32B0 */

void * __thiscall txmTEXTURE::_vector_deleting_destructor_(txmTEXTURE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:txm.cpp
   addr: 004A32E0 */

int __thiscall txmTEXTURE::FindDisk(txmTEXTURE *this,char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = fnmFindDisc(param_1,(char *)(this + 8),param_2);
  if (pcVar2 == (char *)0x0) {
    apLog(s_Texture__s_not_found_,this + 8);
    return 0;
  }
  if (param_3 != (char *)0x0) {
    iVar3 = (int)param_3 - (int)pcVar2;
    do {
      cVar1 = *pcVar2;
      pcVar2[iVar3] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return 1;
}




/* from: drv:txm.cpp
   addr: 004A3330 */

int __thiscall txmTEXTURE::Create(txmTEXTURE *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  undefined4 uStack_4;
  
  if ((*(uint *)(this + 4) & 0x8000000) == 0) {
    piStack_1c = &param_2;
    iVar1 = (**(code **)(*(int *)this + 0x20))(&param_1);
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(this + 0x50) = unaff_retaddr;
    *(int *)(this + 0x54) = param_1;
    *(undefined4 *)(this + 0x4c) = uStack_4;
    *(int *)(this + 0x58) = param_2;
    piStack_1c = (int *)0x50494354;
    iVar1 = pctGetMemSize((pctHEADER *)&piStack_1c,-1);
    *(int *)(this + 100) = iVar1;
    iVar1 = (**(code **)(*(int *)this + 0x24))(&piStack_1c);
    if (iVar1 == 0) {
      return 0;
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  }
  else if ((((*(int *)(this + 0x4c) != param_1) || (*(int *)(this + 0x50) != param_2)) ||
           (*(int *)(this + 0x54) != param_3)) || (*(int *)(this + 0x58) != param_4)) {
    return 0;
  }
  return 1;
}




/* from: drv:txm.cpp
   addr: 004A3410 */

int __thiscall txmTEXTURE::Set(txmTEXTURE *this,pctPICTURE *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x10))
                    (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)this + 0x28))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1000000;
  return 1;
}




/* from: drv:txm.cpp
   addr: 004A3460 */

int __thiscall txmTEXTURE::Load(txmTEXTURE *this,char *param_1,char *param_2,int param_3)

{
  txmTEXTURE *ptVar1;
  pctPICTURE *ppVar2;
  int iVar3;
  
  if ((*(uint *)(this + 4) & 0x1000000) == 0) {
    ptVar1 = this + 8;
    ppVar2 = ReadResample(this,param_1,(char *)ptVar1,param_2,*(uint *)(this + 4) & 0x8000000);
    if (ppVar2 == (pctPICTURE *)0x0) {
      apMsg(s_Cannot_resample_picture__s_,ptVar1);
      return 0;
    }
    iVar3 = (**(code **)(*(int *)this + 0x18))(ppVar2,0xffffffff);
    if (iVar3 == 0) {
      apMsg(s_Cannot_set_picture__s_,ptVar1);
      return 0;
    }
    pctDestroy(ppVar2);
  }
  return 1;
}




/* from: drv:txm.cpp
   addr: 004A34E0 */

void __thiscall txmTEXTURE::Unload(txmTEXTURE *this,int param_1)

{
  if ((*(uint *)(this + 4) & 0x8000000) != 0) {
    (**(code **)(*(int *)this + 0x2c))();
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xf6ffffff;
  }
  return;
}




/* from: drv:txm.cpp
   addr: 004A3500 */

int __thiscall txmTEXTURE::Fill(txmTEXTURE *this,pctPIXEL *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(uint *)(this + 4) & 0x8000000) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(this + 0x4c)) {
      iVar1 = *(int *)(this + 0x50);
      do {
        iVar3 = 0;
        if (0 < iVar1) {
          do {
            (**(code **)(*(int *)this + 0x34))(iVar2,iVar3,param_1,param_2);
            iVar1 = *(int *)(this + 0x50);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0x4c));
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:txm.cpp
   addr: 004A3560 */

ulong __thiscall txmTEXTURE::GetColorUV(txmTEXTURE *this,float param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  double dVar14;
  float local_4c;
  float local_48;
  uint local_44;
  int local_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  byte local_14;
  byte bStack_13;
  undefined1 uStack_12;
  byte bStack_11;
  byte bStack_10;
  byte bStack_f;
  undefined1 uStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  undefined1 uStack_a;
  byte bStack_9;
  byte bStack_8;
  undefined1 uStack_7;
  byte bStack_6;
  byte bStack_5;
  
  if ((*(uint *)(this + 4) & 0x1000000) == 0) {
    return 0xffffffff;
  }
  if ((*(uint *)(this + 4) & 1) == 0) {
    fVar5 = _DAT_005db110 * ___real_42c80000 + ___real_3f800000;
    local_44 = (uint)(ABS(fVar5) < _DAT_005db110);
    fVar4 = param_1;
    if ((float)local_44 == ___real_00000000) {
      dVar14 = floor((double)(param_1 / fVar5));
      fVar4 = (float)dVar14 * fVar5;
    }
    param_1 = param_1 - fVar4;
  }
  else if (___real_00000000 <= param_1) {
    if (___real_3f800000 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  if (((byte)this[4] & 2) == 0) {
    fVar5 = _DAT_005db110 * ___real_42c80000 + ___real_3f800000;
    local_44 = (uint)(ABS(fVar5) < _DAT_005db110);
    fVar4 = param_2;
    if ((float)local_44 == ___real_00000000) {
      dVar14 = floor((double)(param_2 / fVar5));
      fVar4 = (float)dVar14 * fVar5;
    }
    param_2 = param_2 - fVar4;
  }
  else if (___real_00000000 <= param_2) {
    if (___real_3f800000 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  iVar2 = (int)ROUND(((float)*(int *)(this + 0x4c) * param_1 - ___real_3f000000) -
                     `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
  uVar3 = (uint)ROUND(((float)*(int *)(this + 0x50) * param_2 - ___real_3f000000) -
                      `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
  local_4c = ((float)iVar2 + ___real_3f000000) / (float)*(int *)(this + 0x4c);
  local_48 = ((float)(int)uVar3 + ___real_3f000000) / (float)*(int *)(this + 0x50);
  if (___real_00000000 <= local_4c) {
    if (___real_3f800000 < local_4c) {
      local_4c = 1.0;
    }
  }
  else {
    local_4c = 0.0;
  }
  if (___real_00000000 <= local_48) {
    if (___real_3f800000 < local_48) {
      local_48 = 1.0;
    }
  }
  else {
    local_48 = 0.0;
  }
  local_44 = 0;
  pbVar13 = &local_14;
  do {
    local_38 = 2;
    uVar1 = iVar2 + local_44;
    uVar12 = uVar3;
    do {
      uVar10 = *(int *)(this + 0x4c) - 1U;
      if ((int)uVar1 <= (int)(*(int *)(this + 0x4c) - 1U)) {
        uVar10 = uVar1;
      }
      uVar11 = *(int *)(this + 0x50) - 1U;
      if ((int)uVar12 <= (int)(*(int *)(this + 0x50) - 1U)) {
        uVar11 = uVar12;
      }
      (**(code **)(*(int *)this + 0x30))
                (((int)uVar10 < 0) - 1 & uVar10,uVar11 & ((int)uVar11 < 0) - 1,pbVar13);
      pbVar13 = pbVar13 + 4;
      uVar12 = uVar12 + 1;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
    local_44 = local_44 + 1;
  } while ((int)local_44 < 2);
  fStack_18 = local_48;
  fStack_2c = param_1;
  fStack_1c = local_4c;
  fStack_28 = param_2;
  fStack_24 = ___real_3f800000 / (float)*(int *)(this + 0x4c) + local_4c;
  fStack_20 = ___real_3f800000 / (float)*(int *)(this + 0x50) + local_48;
  m3dLerpRectCorners((m2dV *)&fStack_1c,(m2dV *)&fStack_24,(m2dV *)&fStack_2c,(float)bStack_13,
                     (float)bStack_f,(float)bStack_b,(float)(CONCAT11(bStack_6,uStack_7) & 0xff));
  uVar6 = ftol();
  m3dLerpRectCorners((m2dV *)&fStack_1c,(m2dV *)&fStack_24,(m2dV *)&fStack_2c,
                     (float)(CONCAT11(bStack_11,uStack_12) & 0xff),
                     (float)(CONCAT11(bStack_d,uStack_e) & 0xff),
                     (float)(CONCAT11(bStack_9,uStack_a) & 0xff),(float)bStack_6);
  uVar7 = ftol();
  m3dLerpRectCorners((m2dV *)&fStack_1c,(m2dV *)&fStack_24,(m2dV *)&fStack_2c,(float)bStack_11,
                     (float)bStack_d,(float)bStack_9,(float)bStack_5);
  bVar8 = ftol();
  if (((byte)this[4] & 4) == 0) {
    bVar9 = 0xff;
  }
  else {
    m3dLerpRectCorners((m2dV *)&fStack_1c,(m2dV *)&fStack_24,(m2dV *)&fStack_2c,(float)local_14,
                       (float)bStack_10,(float)bStack_c,(float)bStack_8);
    bVar9 = ftol();
  }
  return (((uint)bVar9 << 8 | CONCAT12(bVar8,CONCAT11(uVar7,uVar6)) & 0xff) << 8 |
         CONCAT11(bVar8,uVar7) & 0xff) << 8 | (uint)bVar8;
}




/* from: drv:txm.cpp
   addr: 004A3AA0 */

pctPICTURE * __thiscall
txmTEXTURE::ReadResample(txmTEXTURE *this,char *param_1,char *param_2,char *param_3,int param_4)

{
  bool bVar1;
  char *pcVar2;
  pctPICTURE *ppVar3;
  pctPICTURE *ppVar4;
  pctFORMAT *ppVar5;
  pctFORMAT *ppVar6;
  int iVar7;
  
  pcVar2 = fnmMakeFullName(param_1,param_2,param_3,0);
  ppVar3 = pctRead(pcVar2);
  if (ppVar3 == (pctPICTURE *)0x0) {
    return (pctPICTURE *)0x0;
  }
  if (param_4 == 0) {
    param_1 = *(char **)(ppVar3 + 4);
    param_3 = *(char **)(ppVar3 + 8);
    param_4 = *(int *)(ppVar3 + 0xc);
    iVar7 = *(int *)(ppVar3 + 0x10);
    (**(code **)(*(int *)this + 0x20))(&param_1,&param_3);
  }
  else {
    param_1 = *(char **)(this + 0x4c);
    param_3 = *(char **)(this + 0x50);
    param_4 = *(int *)(this + 0x54);
    iVar7 = *(int *)(this + 0x58);
  }
  SetTexParams(this,(pctHEADER *)ppVar3,(pctEXTRA_DATA *)(ppVar3 + 0x14));
  bVar1 = false;
  if ((param_1 != *(char **)(ppVar3 + 4)) || (ppVar4 = ppVar3, param_3 != *(char **)(ppVar3 + 8))) {
    apMsg(s_Texture__s_was_resampled_from__d,pcVar2,*(char **)(ppVar3 + 4),
          *(undefined4 *)(ppVar3 + 8),param_1,param_3);
    ppVar4 = pctResample(ppVar3,(int)param_1,(int)param_3,-1);
    if (ppVar4 == (pctPICTURE *)0x0) {
      return (pctPICTURE *)0x0;
    }
    pctDestroy(ppVar3);
    bVar1 = true;
  }
  ppVar3 = ppVar4;
  if (iVar7 != *(int *)(ppVar4 + 0x10)) {
    ppVar5 = pctGetFormat(iVar7);
    ppVar5 = ppVar5 + 0x30;
    ppVar6 = pctGetFormat(*(int *)(ppVar4 + 0x10));
    apMsg(s_Texture__s_was_converted_from__s,pcVar2,ppVar6 + 0x30,ppVar5);
    ppVar3 = pctConvert(ppVar4,iVar7);
    if (ppVar3 == (pctPICTURE *)0x0) {
      return (pctPICTURE *)0x0;
    }
    pctDestroy(ppVar4);
    bVar1 = true;
  }
  iVar7 = param_4;
  if (param_4 == *(int *)(ppVar3 + 0xc)) {
    if (!bVar1) {
      return ppVar3;
    }
  }
  else {
    apMsg(s_Mip_Maps_was_generated_for_textu,pcVar2);
    iVar7 = pctGenMipMaps(ppVar3,iVar7,2.2);
    if (iVar7 == 0) {
      return (pctPICTURE *)0x0;
    }
  }
  apMsg(s_Save_texture__s_as__s_,param_2,pcVar2);
  return ppVar3;
}




/* from: drv:txm.cpp
   addr: 004A3C40 */

void __thiscall txmTEXTURE::SetTexParams(txmTEXTURE *this,pctHEADER *param_1,pctEXTRA_DATA *param_2)

{
  int iVar1;
  
  if (((byte)*param_2 & 1) != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1000;
  }
  if (((byte)*param_2 & 2) != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
  }
  if (((byte)*param_2 & 0x40) != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x20;
  }
  if (((byte)*param_2 & 4) != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  }
  if (((byte)*param_2 & 8) != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  }
  if (((byte)*param_2 & 0x10) != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 2;
  }
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_2 + 4);
  if (((byte)*param_2 & 0x20) != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2000;
  }
  iVar1 = pctIsAlpha(*(int *)(param_1 + 0x10));
  if (iVar1 != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  }
  if ((0xb < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < 0x12)) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:txm.cpp
   addr: 004A3CD0 */

void __thiscall txmLAYER::SetWeight(txmLAYER *this,float param_1)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = param_1;
  param_1 = (float)(uint)(ABS(*(float *)(this + 0x48) - param_1) < _DAT_005db110);
  bVar1 = (float)(int)param_1 == ___real_00000000;
  *(float *)(this + 0x48) = fVar2;
  if (bVar1) {
    *(uint *)this = *(uint *)this | 0x10000000;
  }
  return;
}




/* from: drv:txm.cpp
   addr: 004A3D30 */

txmTEXTURE_LAY * __thiscall
txmTEXTURE_LAY::txmTEXTURE_LAY(txmTEXTURE_LAY *this,char *param_1,int param_2)

{
  txmTEXTURE_LAY *ptVar1;
  int iVar2;
  
  *(int *)(this + 4) = param_2;
  apNAME::SetName((apNAME *)(this + 8),param_1);
  *(undefined4 *)(this + 0x54) = 0xffffffff;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  *(undefined ***)this = &txmTEXTURE::_vftable_;
  *(undefined4 *)(this + 0x48) = 0x20544558;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  ptVar1 = this + 0x7c;
  iVar2 = 5;
  do {
    *(undefined4 *)ptVar1 = 0;
    ptVar1[4] = (txmTEXTURE_LAY)0x0;
    *(undefined4 *)(ptVar1 + 0x44) = 0;
    *(undefined4 *)(ptVar1 + 0x48) = 0;
    ptVar1 = ptVar1 + 0x4c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x48) = 0x4c544558;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  return this;
}




/* from: drv:txm.cpp
   addr: 004A3DC0
   addr: 004A3DC0 */

void * __thiscall txmTEXTURE_LAY::_vector_deleting_destructor_(txmTEXTURE_LAY *this,uint param_1)

{
  txmTEXTURE_LAY *ptVar1;
  txmTEXTURE_LAY *ptVar2;
  int iVar3;
  
  *(undefined ***)this = &_vftable_;
  ptVar2 = this + 0x23c;
  iVar3 = 5;
  do {
    ptVar1 = ptVar2 + -0x4c;
    ptVar2 = ptVar2 + -0x4c;
    apFree(*(void **)ptVar1);
    iVar3 = iVar3 + -1;
    *(undefined4 *)ptVar2 = 0;
  } while (iVar3 != 0);
  *(undefined ***)this = &txmTEXTURE::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:txm.cpp
   addr: 004A3E10 */

void __thiscall txmTEXTURE_LAY::~txmTEXTURE_LAY(txmTEXTURE_LAY *this)

{
  txmTEXTURE_LAY *ptVar1;
  txmTEXTURE_LAY *ptVar2;
  int iVar3;
  
  *(undefined ***)this = &_vftable_;
  ptVar2 = this + 0x23c;
  iVar3 = 5;
  do {
    ptVar1 = ptVar2 + -0x4c;
    ptVar2 = ptVar2 + -0x4c;
    apFree(*(void **)ptVar1);
    iVar3 = iVar3 + -1;
    *(undefined4 *)ptVar2 = 0;
  } while (iVar3 != 0);
  *(undefined ***)this = &txmTEXTURE::_vftable_;
  return;
}




/* from: drv:txm.cpp
   addr: 004A3E50 */

int __thiscall
txmTEXTURE_LAY::FindDisk(txmTEXTURE_LAY *this,char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  txmTEXTURE_LAY *ptVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 0x78)) {
    ptVar3 = this + 0x80;
    do {
      pcVar2 = fnmFindDisc(param_1,(char *)ptVar3,param_2);
      if (pcVar2 != (char *)0x0) {
        iVar4 = (int)param_3 - (int)pcVar2;
        do {
          cVar1 = *pcVar2;
          pcVar2[iVar4] = cVar1;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return 1;
      }
      iVar4 = iVar4 + 1;
      ptVar3 = ptVar3 + 0x4c;
    } while (iVar4 < *(int *)(this + 0x78));
  }
  return 0;
}




/* from: drv:txm.cpp
   addr: 004A3EC0 */

int __thiscall txmTEXTURE_LAY::Set(txmTEXTURE_LAY *this,pctPICTURE *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  undefined4 *puVar4;
  undefined4 *puVar5;
  txmTEXTURE_LAY *ptVar6;
  
  ptVar6 = *(txmTEXTURE_LAY **)(param_1 + 0xc);
  iVar1 = (**(code **)(*(int *)this + 0x10))
                    (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),ptVar6,
                     *(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    if (*(int *)(this + unaff_ESI * 0x4c + 0xc0) == 0) {
      *(undefined4 *)(this + unaff_ESI * 0x4c + 0xc0) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      ptVar6 = this;
    }
    else {
      uVar2 = pctGetMemSize((pctHEADER *)param_1,-1);
      puVar4 = *(undefined4 **)(param_1 + 0x1c);
      puVar5 = *(undefined4 **)(this + unaff_ESI * 0x4c + 0xc0);
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    *(uint *)(this + unaff_ESI * 0x4c + 0x7c) =
         *(uint *)(this + unaff_ESI * 0x4c + 0x7c) | 0x1000000;
    if ((unaff_ESI == -1) || (unaff_ESI == 0)) {
      *(uint *)(ptVar6 + 4) = *(uint *)(ptVar6 + 4) | 0x1000000;
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:txm.cpp
   addr: 004A3F70 */

int __thiscall txmTEXTURE_LAY::Load(txmTEXTURE_LAY *this,char *param_1,char *param_2,int param_3)

{
  uint uVar1;
  pctPICTURE *ppVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  txmTEXTURE_LAY *ptVar6;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_4;
  
  if (param_3 == -1) {
    local_24 = *(int *)(this + 0x78) + -1;
    iVar4 = 0;
  }
  else {
    local_24 = param_3;
    iVar4 = param_3;
  }
  if ((*(int *)(this + 0x78) != 1) || ((*(uint *)(this + 4) & 0x1000000) == 0)) {
    if (iVar4 <= local_24) {
      ptVar6 = this + iVar4 * 0x4c + 0x7c;
      do {
        if (((*(uint *)ptVar6 & 0x1000400) == 0) &&
           (ppVar2 = txmTEXTURE::ReadResample
                               ((txmTEXTURE *)this,param_1,(char *)(ptVar6 + 4),param_2,
                                *(uint *)(this + 4) & 0x8000000), ppVar2 != (pctPICTURE *)0x0)) {
          iVar3 = (**(code **)(*(int *)this + 0x18))(ppVar2,iVar4);
          if (iVar3 == 0) {
            return 0;
          }
          pctDestroy(ppVar2);
        }
        iVar4 = iVar4 + 1;
        ptVar6 = ptVar6 + 0x4c;
      } while (iVar4 <= local_24);
    }
    uVar1 = *(uint *)(this + 4);
    uVar5 = uVar1 & 0xffffcfcf;
    *(uint *)(this + 4) = uVar5;
    if ((uVar1 & 0xb) == 0) {
      *(uint *)(this + 4) = uVar5 | 0xb;
    }
    if (((param_3 == -1) && ((*(uint *)(this + 4) & 0x8000000) != 0)) &&
       (*(int *)(this + 0xc0) != 0)) {
      uStack_1c = *(undefined4 *)(this + 0x4c);
      uStack_18 = *(undefined4 *)(this + 0x50);
      uStack_10 = *(undefined4 *)(this + 0x58);
      uStack_14 = *(undefined4 *)(this + 0x54);
      uStack_20 = 0x50494354;
      iStack_4 = *(int *)(this + 0xc0);
      iVar4 = (**(code **)(*(int *)this + 0x28))(&uStack_20);
      if ((iVar4 != 0) && (iVar4 = 0, 0 < *(int *)(this + 0x78))) {
        do {
          if (iVar4 == 0) {
            param_3 = (int)(ABS(*(float *)(this + 0xc4) - ___real_3f800000) < _DAT_005db110);
            if ((float)param_3 == ___real_00000000) {
              *(uint *)(this + 0x7c) = *(uint *)(this + 0x7c) | 0x10000000;
            }
            *(undefined4 *)(this + 0xc4) = 0x3f800000;
          }
          else {
            ptVar6 = this + iVar4 * 0x4c + 0x7c;
            param_3 = (int)(ABS(*(float *)(this + iVar4 * 0x4c + 0xc4)) < _DAT_005db110);
            if ((float)param_3 == ___real_00000000) {
              *(uint *)ptVar6 = *(uint *)ptVar6 | 0x10000000;
            }
            *(uint *)(ptVar6 + 0x48) = 0;
          }
          iVar3 = iVar4 + 1;
          *(uint *)(this + iVar4 * 0x4c + 0x7c) = *(uint *)(this + iVar4 * 0x4c + 0x7c) & 0xefffffff
          ;
          iVar4 = iVar3;
        } while (iVar3 < *(int *)(this + 0x78));
      }
    }
    if (*(int *)(this + 0x78) == 1) {
      if (((byte)txmManager[4] & 1) == 0) {
        (**(code **)(*(int *)this + 0xc))(0);
      }
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1000000;
    }
  }
  return 1;
}




/* from: drv:txm.cpp
   addr: 004A41B0 */

int __thiscall txmTEXTURE_LAY::Save(txmTEXTURE_LAY *this,char *param_1,char *param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_4;
  
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 & 0x8000000) != 0) {
    local_4 = *(int *)(this + param_3 * 0x4c + 0xc0);
    if (local_4 != 0) {
      local_1c = *(undefined4 *)(this + 0x4c);
      local_18 = *(undefined4 *)(this + 0x50);
      local_10 = *(undefined4 *)(this + 0x58);
      local_14 = *(undefined4 *)(this + 0x54);
      local_20 = 0x50494354;
      local_c = 0;
      if ((uVar1 & 8) != 0) {
        local_c = 4;
      }
      if ((uVar1 & 1) != 0) {
        local_c = local_c | 8;
      }
      if ((uVar1 & 2) != 0) {
        local_c = local_c | 0x10;
      }
      pcVar2 = fnmMakeFullName(param_1,(char *)(this + param_3 * 0x4c + 0x80),param_2,0);
      iVar3 = pctWrite(pcVar2,(pctPICTURE *)&local_20);
      return (uint)(iVar3 != 0);
    }
  }
  return 0;
}




/* from: drv:txm.cpp
   addr: 004A4280 */

void __thiscall txmTEXTURE_LAY::Unload(txmTEXTURE_LAY *this,int param_1)

{
  if ((*(uint *)(this + param_1 * 0x4c + 0x7c) & 0x1000000) != 0) {
    apFree(*(void **)(this + param_1 * 0x4c + 0xc0));
    *(undefined4 *)(this + param_1 * 0x4c + 0xc0) = 0;
    *(uint *)(this + param_1 * 0x4c + 0x7c) = *(uint *)(this + param_1 * 0x4c + 0x7c) & 0xfeffffff;
  }
  return;
}




/* from: drv:txm.cpp
   addr: 004A42D0 */

int __thiscall
txmTEXTURE_LAY::GetColor(txmTEXTURE_LAY *this,int param_1,int param_2,pctPIXEL *param_3,int param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_4;
  
  if (((param_4 != -1) && ((*(uint *)(this + 4) & 0x8000000) != 0)) &&
     (local_4 = *(int *)(this + param_4 * 0x4c + 0xc0), local_4 != 0)) {
    local_1c = *(undefined4 *)(this + 0x4c);
    local_18 = *(undefined4 *)(this + 0x50);
    local_10 = *(undefined4 *)(this + 0x58);
    local_14 = *(undefined4 *)(this + 0x54);
    local_20 = 0x50494354;
    pctGetPixel((pctPICTURE *)&local_20,param_1,param_2,0,param_3);
  }
  return 1;
}




/* from: drv:txm.cpp
   addr: 004A4350 */

int __thiscall
txmTEXTURE_LAY::SetColor(txmTEXTURE_LAY *this,int param_1,int param_2,pctPIXEL *param_3,int param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_4;
  
  if (((param_4 != -1) && ((*(uint *)(this + 4) & 0x8000000) != 0)) &&
     (local_4 = *(int *)(this + param_4 * 0x4c + 0xc0), local_4 != 0)) {
    local_1c = *(undefined4 *)(this + 0x4c);
    local_18 = *(undefined4 *)(this + 0x50);
    local_10 = *(undefined4 *)(this + 0x58);
    local_14 = *(undefined4 *)(this + 0x54);
    local_20 = 0x50494354;
    pctSetPixel((pctPICTURE *)&local_20,param_1,param_2,0,param_3);
  }
  return 1;
}




/* from: drv:txm.cpp
   addr: 004A43D0 */

int __thiscall txmTEXTURE_LAY::Add(txmTEXTURE_LAY *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  txmTEXTURE_LAY *this_00;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 0x78)) {
    this_00 = this + 0x80;
    do {
      iVar1 = apNAME::IsName((apNAME *)this_00,param_1);
      if (iVar1 != 0) {
        if (iVar4 != -1) goto LAB_004a443b;
        break;
      }
      iVar4 = iVar4 + 1;
      this_00 = (txmTEXTURE_LAY *)((apNAME *)this_00 + 0x4c);
    } while (iVar4 < *(int *)(this + 0x78));
  }
  if (4 < *(int *)(this + 0x78)) {
    return -1;
  }
  apNAME::SetName((apNAME *)(this + *(int *)(this + 0x78) * 0x4c + 0x80),param_1);
  iVar4 = *(int *)(this + 0x78);
  *(int *)(this + 0x78) = iVar4 + 1;
LAB_004a443b:
  if (((*(uint *)(this + 4) & 0x8000000) != 0) && (*(int *)(this + iVar4 * 0x4c + 0xc0) == 0)) {
    local_10 = *(undefined4 *)(this + 0x4c);
    local_c = *(undefined4 *)(this + 0x50);
    local_4 = *(undefined4 *)(this + 0x58);
    local_8 = *(undefined4 *)(this + 0x54);
    local_14 = 0x50494354;
    uVar2 = pctGetMemSize((pctHEADER *)&local_14,-1);
    pvVar3 = apMalloc(uVar2);
    *(void **)(this + iVar4 * 0x4c + 0xc0) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return -1;
    }
  }
  if (iVar4 == *(int *)(this + 0x78)) {
    *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
  }
  return iVar4;
}




/* from: drv:txm.cpp
   addr: 004A44C0 */

int __thiscall txmTEXTURE_LAY::Update(txmTEXTURE_LAY *this,float param_1)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000000;
  return 1;
}




/* from: drv:txm.cpp
   addr: 004A44E0 */

txmMANAGER * __thiscall txmMANAGER::txmMANAGER(txmMANAGER *this)

{
  int iVar1;
  txmMANAGER *ptVar2;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = &_vftable_;
  this[8] = (txmMANAGER)0x0;
  this[0x10c] = (txmMANAGER)0x0;
  *(undefined4 *)(this + 0x14c) = 0;
  ptVar2 = this + 0x150;
  for (iVar1 = 1000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)ptVar2 = 0;
    ptVar2 = ptVar2 + 4;
  }
  *(undefined4 *)(this + 0x10f0) = 0;
  *(undefined4 *)(this + 0x10f4) = 0;
  *(undefined4 *)(this + 0x10f8) = 0;
  *(undefined4 *)(this + 0x10fc) = 0;
  return this;
}




/* from: drv:txm.cpp
   addr: 004A4530
   addr: 004A4530 */

void * __thiscall txmMANAGER::_scalar_deleting_destructor_(txmMANAGER *this,uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  txmMANAGER *ptVar3;
  
  iVar2 = 1000;
  *(undefined ***)this = &_vftable_;
  ptVar3 = this + 0x150;
  do {
    puVar1 = *(undefined4 **)ptVar3;
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(this + puVar1[0x1b] * 4 + 0x150) = 0;
      (**(code **)*puVar1)(1);
    }
    ptVar3 = ptVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:txm.cpp
   addr: 004A4580 */

void __thiscall txmMANAGER::~txmMANAGER(txmMANAGER *this)

{
  undefined4 *puVar1;
  int iVar2;
  txmMANAGER *ptVar3;
  
  iVar2 = 1000;
  *(undefined ***)this = &_vftable_;
  ptVar3 = this + 0x150;
  do {
    puVar1 = *(undefined4 **)ptVar3;
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(this + puVar1[0x1b] * 4 + 0x150) = 0;
      (**(code **)*puVar1)(1);
    }
    ptVar3 = ptVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}




/* from: drv:txm.cpp
   addr: 004A45C0 */

int __thiscall txmMANAGER::Init(txmMANAGER *this,char *param_1,char *param_2)

{
  char cVar1;
  txmTEXTURE *ptVar2;
  int iVar3;
  
  iVar3 = 8 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(this + iVar3)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  iVar3 = 0x10c - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)(this + iVar3)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  ptVar2 = Add(this,s_white,0xc00,0xffffffff);
  *(txmTEXTURE **)(this + 0x10f0) = ptVar2;
  if (ptVar2 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)ptVar2 + 0x10))();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = (**(code **)(**(int **)(this + 0x10f0) + 0x14))();
  if (iVar3 == 0) {
    return 0;
  }
  ptVar2 = Add(this,s_whiteLM,0xc00,0xffffffff);
  *(txmTEXTURE **)(this + 0x10f4) = ptVar2;
  if (ptVar2 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)ptVar2 + 0x10))();
  if (iVar3 == 0) {
    return 0;
  }
  *(uint *)(*(int *)(this + 0x10f4) + 4) = *(uint *)(*(int *)(this + 0x10f4) + 4) | 8;
  iVar3 = (**(code **)(**(int **)(this + 0x10f4) + 0x14))();
  if (iVar3 == 0) {
    return 0;
  }
  ptVar2 = Add(this,s_black,0xc00,0xffffffff);
  *(txmTEXTURE **)(this + 0x10f8) = ptVar2;
  if (ptVar2 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)ptVar2 + 0x10))();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = (**(code **)(**(int **)(this + 0x10f8) + 0x14))();
  if (iVar3 == 0) {
    return 0;
  }
  ptVar2 = Add(this,s_detailNeutral,0xc00,0xffffffff);
  *(txmTEXTURE **)(this + 0x10fc) = ptVar2;
  if (ptVar2 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)ptVar2 + 0x10))(1,1,1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = (**(code **)(**(int **)(this + 0x10fc) + 0x14))(&stack0xffffffac,0xffffffff);
  if (iVar3 == 0) {
    return 0;
  }
  *(uint *)(*(int *)(this + 0x10fc) + 4) = *(uint *)(*(int *)(this + 0x10fc) + 4) | 0x10;
  return 1;
}




/* from: drv:txm.cpp
   addr: 004A47B0 */

txmTEXTURE * __thiscall
txmMANAGER::Add(txmMANAGER *this,char *param_1,int param_2,txmADD_MODE param_3)

{
  char cVar1;
  int iVar2;
  txmTEXTURE *ptVar3;
  char *pcVar4;
  int iVar5;
  txmMANAGER *ptVar6;
  pctEXTRA_DATA local_120 [8];
  pctHEADER local_118 [20];
  char local_104 [260];
  
  iVar5 = 0;
  ptVar6 = this + 0x150;
  do {
    if (*(int *)ptVar6 != 0) {
      iVar2 = stricmp((char *)(*(int *)ptVar6 + 8),param_1);
      if (iVar2 == 0) {
        ptVar3 = *(txmTEXTURE **)(this + iVar5 * 4 + 0x150);
        if (ptVar3 != (txmTEXTURE *)0x0) {
          if (param_3 == 0) {
            if (*(int *)(ptVar3 + 0x48) != 0x20544558) goto LAB_004a4838;
          }
          else if (*(int *)(ptVar3 + 0x48) != 0x4c544558) goto LAB_004a4838;
          return (txmTEXTURE *)0x0;
        }
        break;
      }
    }
    iVar5 = iVar5 + 1;
    ptVar6 = ptVar6 + 4;
  } while (iVar5 < 1000);
  if (param_3 == 0) {
    ptVar3 = Alloc(this,param_1,param_2,1);
    return ptVar3;
  }
  if ((param_3 == 1) || (param_3 == 2)) {
    pcVar4 = fnmFindDisc((char *)(this + 8),param_1,(char *)(this + 0x10c));
    if (pcVar4 == (char *)0x0) {
      apLog(s_Texture__s_not_found_,param_1);
      return (txmTEXTURE *)0x0;
    }
    iVar5 = -(int)pcVar4;
    do {
      cVar1 = *pcVar4;
      pcVar4[(int)(local_104 + iVar5)] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  if (param_3 == 1) {
    iVar5 = pctReadHdr(local_104,local_118,local_120);
    if (iVar5 == 0) {
      return (txmTEXTURE *)0x0;
    }
  }
  ptVar3 = Alloc(this,param_1,param_2,0);
  if (ptVar3 == (txmTEXTURE *)0x0) {
    return (txmTEXTURE *)0x0;
  }
  if (param_3 == 1) {
    txmTEXTURE::SetTexParams(ptVar3,local_118,local_120);
  }
  else if (param_3 == 2) {
    iVar5 = Load(this,ptVar3,1);
    if (iVar5 == 0) {
      *(undefined4 *)(this + *(int *)(ptVar3 + 0x6c) * 4 + 0x150) = 0;
      (*(code *)**(undefined4 **)ptVar3)(1);
      return (txmTEXTURE *)0x0;
    }
  }
LAB_004a4838:
  *(uint *)(ptVar3 + 4) = *(uint *)(ptVar3 + 4) | 0x200;
  return ptVar3;
}




/* from: drv:txm.cpp
   addr: 004A4960 */

void __thiscall txmMANAGER::Del(txmMANAGER *this,txmTEXTURE *param_1)

{
  if (param_1 != (txmTEXTURE *)0x0) {
    *(undefined4 *)(this + *(int *)(param_1 + 0x6c) * 4 + 0x150) = 0;
                    /* WARNING: Could not recover jumptable at 0x004a4982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1)();
    return;
  }
  return;
}




/* from: drv:txm.cpp
   addr: 004A4990 */

txmTEXTURE * __thiscall txmMANAGER::Find(txmMANAGER *this,char *param_1)

{
  int iVar1;
  int iVar2;
  txmMANAGER *ptVar3;
  
  iVar2 = 0;
  ptVar3 = this + 0x150;
  do {
    if (*(int *)ptVar3 != 0) {
      iVar1 = stricmp((char *)(*(int *)ptVar3 + 8),param_1);
      if (iVar1 == 0) {
        return *(txmTEXTURE **)(this + iVar2 * 4 + 0x150);
      }
    }
    iVar2 = iVar2 + 1;
    ptVar3 = ptVar3 + 4;
  } while (iVar2 < 1000);
  return (txmTEXTURE *)0x0;
}




/* from: drv:txm.cpp
   addr: 004A49E0 */

txmTEXTURE * __thiscall txmMANAGER::Alloc(txmMANAGER *this,char *param_1,int param_2,int param_3)

{
  txmMANAGER *ptVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar2 = *(int *)(this + 0x14c);
    iVar3 = iVar2;
    if (iVar2 < 1000) {
      ptVar1 = this + iVar2 * 4 + 0x150;
      do {
        if (*(int *)ptVar1 == 0) break;
        iVar3 = iVar3 + 1;
        ptVar1 = ptVar1 + 4;
      } while (iVar3 < 1000);
    }
    if (iVar3 != 1000) {
      if (param_3 == 0) {
        iVar2 = (**(code **)(*(int *)this + 0x1c))(param_1,param_2);
      }
      else {
        iVar2 = (**(code **)(*(int *)this + 0x20))();
      }
      *(int *)(this + iVar3 * 4 + 0x150) = iVar2;
      if (iVar2 == 0) {
        return (txmTEXTURE *)0x0;
      }
      *(int *)(iVar2 + 0x6c) = iVar3;
      *(int *)(this + 0x14c) = iVar3 + 1;
      return *(txmTEXTURE **)(this + iVar3 * 4 + 0x150);
    }
    if (iVar2 < 1) {
      return (txmTEXTURE *)0x0;
    }
    *(undefined4 *)(this + 0x14c) = 0;
  } while( true );
}




/* from: drv:txm.cpp
   addr: 004A4A70 */

int __thiscall txmMANAGER::Load(txmMANAGER *this,txmTEXTURE *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 **ppuVar5;
  undefined1 *puStack_110;
  undefined1 local_104 [260];
  
  uVar2 = *(uint *)(param_1 + 4);
  if (((uVar2 & 0x1000000) == 0) && ((uVar2 & 0x400) == 0)) {
    if ((param_2 == 0) && ((uVar2 & 0x20000000) != 0)) {
      return 0;
    }
    puStack_110 = local_104;
    iVar3 = (**(code **)(*(int *)param_1 + 4))(this + 8,this + 0x10c);
    if (iVar3 == 0) {
      apMsg(s_Cannot_locate_texture__s,param_1 + 8);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20000000;
      return 0;
    }
    pcVar4 = fnmGetPath((char *)&puStack_110);
    ppuVar5 = &puStack_110;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)ppuVar5 = cVar1;
      ppuVar5 = (undefined1 **)((int)ppuVar5 + 1);
    } while (cVar1 != '\0');
    iVar3 = (**(code **)(*(int *)param_1 + 8))(&puStack_110,this + 0x10c,0xffffffff);
    if (iVar3 == 0) {
      apMsg(s_Cannot_load_texture__s,param_1 + 8);
      return 0;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xdfffffff;
  }
  return 1;
}




/* from: drv:txm.cpp
   addr: 004A4B60 */

int __thiscall txmMANAGER::LoadAll(txmMANAGER *this,_func_int_txmTEXTURE_ptr *param_1)

{
  txmTEXTURE *ptVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  txmMANAGER *ptVar5;
  txmTEXTURE *unaff_EDI;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  iVar4 = 1000;
  ptVar5 = this + 0x150;
  do {
    ptVar1 = *(txmTEXTURE **)ptVar5;
    if ((ptVar1 != (txmTEXTURE *)0x0) && ((*(uint *)(ptVar1 + 4) & 0x40000) == 0)) {
      iVar2 = Load(this,ptVar1,1);
      if (iVar2 == 0) {
        if (param_1 != (_func_int_txmTEXTURE_ptr *)0x0) {
          (*param_1)(unaff_EDI);
        }
        local_4 = local_4 + 1;
      }
      else {
        iVar3 = iVar3 + *(int *)(*(int *)ptVar5 + 100);
      }
    }
    ptVar5 = ptVar5 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  apLog(s_Cur_Texure_Size__d,iVar3);
  return local_4;
}




/* from: drv:txm.cpp
   addr: 004A4BD0 */

int __thiscall txmMANAGER::PurgeAll(txmMANAGER *this)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  txmMANAGER *ptVar4;
  int iVar5;
  int local_4;
  
  iVar5 = 0;
  ptVar4 = this + 0x150;
  local_4 = 1000;
  do {
    iVar1 = *(int *)ptVar4;
    if ((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 4), (uVar2 & 0xe00) == 0)) {
      if ((uVar2 & 0x100) == 0) {
        if (((uVar2 & 0x40000) == 0) || ((uVar2 & 0x1000000) == 0)) goto LAB_004a4c51;
        apLog(s_Texture__s_unloaded_from_memory_,iVar1 + 8);
        (**(code **)(**(int **)ptVar4 + 0xc))(0xffffffff);
      }
      else {
        apLog(s_Texture__s_purged_from_texture_l,iVar1 + 8);
        puVar3 = *(undefined4 **)ptVar4;
        if (puVar3 != (undefined4 *)0x0) {
          *(undefined4 *)(this + puVar3[0x1b] * 4 + 0x150) = 0;
          (**(code **)*puVar3)(1);
        }
      }
      iVar5 = iVar5 + 1;
    }
LAB_004a4c51:
    ptVar4 = ptVar4 + 4;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      return iVar5;
    }
  } while( true );
}




/* from: drv:txm.cpp
   addr: 004A4C70 */

void __thiscall txmMANAGER::MngTexState(txmMANAGER *this,int param_1,txmTEX_STATE_OPER param_2)

{
  int iVar1;
  uint uVar2;
  txmMANAGER *ptVar3;
  int iVar4;
  
  ptVar3 = this + 0x150;
  iVar4 = 1000;
  do {
    iVar1 = *(int *)ptVar3;
    if (iVar1 != 0) {
      if (param_2 == 0) {
        uVar2 = *(uint *)(iVar1 + 4) | param_1;
LAB_004a4cb4:
        *(uint *)(iVar1 + 4) = uVar2;
      }
      else if (param_2 == 1) {
        *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & ~param_1;
      }
      else if (param_2 == 2) {
        uVar2 = *(uint *)(iVar1 + 4) ^ param_1;
        goto LAB_004a4cb4;
      }
    }
    ptVar3 = ptVar3 + 4;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}




/* from: drv:txm.cpp
   addr: 004A4CD0 */

txmTEXTURE * __thiscall txmMANAGER::GetNext(txmMANAGER *this,txmTEXTURE *param_1)

{
  txmMANAGER *ptVar1;
  
  if (param_1 != (txmTEXTURE *)0x0) {
    param_1 = (txmTEXTURE *)(*(int *)(param_1 + 0x6c) + 1);
  }
  if ((int)param_1 < 1000) {
    ptVar1 = this + (int)param_1 * 4 + 0x150;
    do {
      if (*(int *)ptVar1 != 0) {
        return *(txmTEXTURE **)(this + (int)param_1 * 4 + 0x150);
      }
      param_1 = param_1 + 1;
      ptVar1 = ptVar1 + 4;
    } while ((int)param_1 < 1000);
  }
  return (txmTEXTURE *)0x0;
}




/* from: drv:txm.cpp
   addr: 004A4D20 */

void __thiscall txmMANAGER::NewFrame(txmMANAGER *this,float param_1)

{
  int iVar1;
  int iVar2;
  txmMANAGER *ptVar3;
  
  ptVar3 = this + 0x150;
  iVar2 = 1000;
  do {
    iVar1 = *(int *)ptVar3;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfdffffff;
      (**(code **)(**(int **)ptVar3 + 0x1c))(param_1);
    }
    ptVar3 = ptVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}




/* from: drv:txm.cpp
   addr: 004A4D70 */

txmTEXTURE * __thiscall txmMANAGER::MakeTex(txmMANAGER *this,char *param_1,int param_2)

{
  txmTEXTURE *ptVar1;
  
  ptVar1 = (txmTEXTURE *)operator_new(0x78);
  if (ptVar1 != (txmTEXTURE *)0x0) {
    *(int *)(ptVar1 + 4) = param_2;
    apNAME::SetName((apNAME *)(ptVar1 + 8),param_1);
    *(undefined4 *)(ptVar1 + 0x4c) = 0;
    *(undefined4 *)(ptVar1 + 0x50) = 0;
    *(undefined4 *)(ptVar1 + 0x54) = 0xffffffff;
    *(undefined4 *)(ptVar1 + 0x58) = 0xffffffff;
    *(undefined4 *)(ptVar1 + 0x5c) = 0;
    *(undefined4 *)(ptVar1 + 0x60) = 0;
    *(undefined4 *)(ptVar1 + 100) = 0;
    *(undefined4 *)(ptVar1 + 0x68) = 0xffffffff;
    *(undefined4 *)(ptVar1 + 0x6c) = 0xffffffff;
    *(undefined4 *)(ptVar1 + 0x70) = 0;
    *(undefined4 *)(ptVar1 + 0x74) = 0;
    *(undefined ***)ptVar1 = &txmTEXTURE::_vftable_;
    *(undefined4 *)(ptVar1 + 0x48) = 0x20544558;
    return ptVar1;
  }
  return (txmTEXTURE *)0x0;
}




/* from: drv:txm.cpp
   addr: 004A4DE0 */

txmTEXTURE * __thiscall txmMANAGER::MakeTexLayer(txmMANAGER *this,char *param_1,int param_2)

{
  txmTEXTURE *ptVar1;
  txmTEXTURE *ptVar2;
  int iVar3;
  
  ptVar1 = (txmTEXTURE *)operator_new(0x228);
  if (ptVar1 != (txmTEXTURE *)0x0) {
    *(int *)(ptVar1 + 4) = param_2;
    apNAME::SetName((apNAME *)(ptVar1 + 8),param_1);
    *(undefined ***)ptVar1 = &txmTEXTURE::_vftable_;
    *(undefined4 *)(ptVar1 + 0x54) = 0xffffffff;
    *(undefined4 *)(ptVar1 + 0x58) = 0xffffffff;
    *(undefined4 *)(ptVar1 + 0x68) = 0xffffffff;
    *(undefined4 *)(ptVar1 + 0x6c) = 0xffffffff;
    *(undefined4 *)(ptVar1 + 0x48) = 0x20544558;
    *(undefined4 *)(ptVar1 + 0x4c) = 0;
    *(undefined4 *)(ptVar1 + 0x50) = 0;
    *(undefined4 *)(ptVar1 + 0x5c) = 0;
    *(undefined4 *)(ptVar1 + 0x60) = 0;
    *(undefined4 *)(ptVar1 + 100) = 0;
    *(undefined4 *)(ptVar1 + 0x70) = 0;
    *(undefined4 *)(ptVar1 + 0x74) = 0;
    ptVar2 = ptVar1 + 0x7c;
    iVar3 = 5;
    do {
      *(undefined4 *)ptVar2 = 0;
      ptVar2[4] = (txmTEXTURE)0x0;
      *(undefined4 *)(ptVar2 + 0x44) = 0;
      *(undefined4 *)(ptVar2 + 0x48) = 0;
      ptVar2 = ptVar2 + 0x4c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined ***)ptVar1 = &txmTEXTURE_LAY::_vftable_;
    *(undefined4 *)(ptVar1 + 0x48) = 0x4c544558;
    *(undefined4 *)(ptVar1 + 0x78) = 0;
    *(undefined4 *)(ptVar1 + 0x1f8) = 0;
    *(undefined4 *)(ptVar1 + 0x224) = 0;
    return ptVar1;
  }
  return (txmTEXTURE *)0x0;
}

