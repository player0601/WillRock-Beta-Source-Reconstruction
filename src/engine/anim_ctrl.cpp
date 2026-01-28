
/* from: engine:anim_ctrl.cpp
   addr: 004B9EE0 */

animSYSTEM * __thiscall animSYSTEM::animSYSTEM(animSYSTEM *this,int param_1,int param_2)

{
  void *pvVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  *(int *)(this + 0x10) = param_1;
  iVar6 = param_1 * param_1;
  *(undefined ***)this = &_vftable_;
  pvVar1 = operator_new(iVar6 * 4);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else if (-1 < iVar6 + -1) {
    puVar2 = (undefined1 *)((int)pvVar1 + 3);
    do {
      puVar2[-3] = 3;
      *(undefined2 *)(puVar2 + -2) = 0xffff;
      *puVar2 = 1;
      puVar2 = puVar2 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(void **)(this + 4) = pvVar1;
  iVar6 = *(int *)(this + 0x10);
  iVar5 = 0;
  if (0 < iVar6) {
    do {
      iVar3 = 0;
      if (0 < iVar6) {
        do {
          iVar6 = iVar6 * iVar3 + iVar5;
          *(undefined1 *)(*(int *)(this + 4) + iVar6 * 4) = 1;
          *(short *)(*(int *)(this + 4) + 1 + iVar6 * 4) = (short)iVar3;
          if (iVar5 == iVar3) {
            *(undefined1 *)(*(int *)(this + 4) + 3 + iVar6 * 4) = 0;
          }
          else {
            *(undefined1 *)(*(int *)(this + 4) + 3 + iVar6 * 4) = 1;
          }
          iVar6 = *(int *)(this + 0x10);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar6);
      }
      iVar6 = *(int *)(this + 0x10);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  *(int *)(this + 0xc) = param_2;
  pvVar1 = operator_new(param_2 * 0x14);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else if (-1 < param_2 + -1) {
    puVar4 = (undefined4 *)((int)pvVar1 + 8);
    do {
      puVar4[-2] = 0xffffffff;
      puVar4[-1] = 0;
      *puVar4 = 0x3dcccccd;
      puVar4[2] = 0;
      puVar4 = puVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    *(void **)(this + 8) = pvVar1;
    return this;
  }
  *(void **)(this + 8) = pvVar1;
  return this;
}




/* from: engine:anim_ctrl.cpp
   addr: 004B9FD0
   addr: 004B9FD0 */

void * __thiscall animSYSTEM::_vector_deleting_destructor_(animSYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  operator_delete(*(void **)(this + 8));
  operator_delete(*(void **)(this + 4));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA010 */

void __thiscall
animSYSTEM::SetTranParam
          (animSYSTEM *this,int param_1,int param_2,uchar param_3,ushort param_4,uchar param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10) * param_2 + param_1;
  *(uchar *)(*(int *)(this + 4) + iVar1 * 4) = param_3;
  *(ushort *)(*(int *)(this + 4) + 1 + iVar1 * 4) = param_4;
  *(uchar *)(*(int *)(this + 4) + 3 + iVar1 * 4) = param_5;
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA050 */

void __thiscall animSYSTEM::SetTranParamSymm(animSYSTEM *this,int param_1,int param_2,uchar param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10) * param_2 + param_1;
  *(uchar *)(*(int *)(this + 4) + iVar1 * 4) = param_3;
  *(short *)(*(int *)(this + 4) + 1 + iVar1 * 4) = (short)param_2;
  *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 1;
  iVar1 = *(int *)(this + 0x10) * param_1 + param_2;
  *(uchar *)(*(int *)(this + 4) + iVar1 * 4) = param_3;
  *(short *)(*(int *)(this + 4) + 1 + iVar1 * 4) = (short)param_1;
  *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 1;
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA0B0 */

void __thiscall
animSYSTEM::SetTranTypeToAny(animSYSTEM *this,int param_1,int param_2,uchar param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x10);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      *(undefined1 *)(*(int *)(this + 4) + (iVar1 * iVar2 + param_1) * 4) = (undefined1)param_2;
      *(uchar *)(*(int *)(this + 4) + 3 + (*(int *)(this + 0x10) * iVar2 + param_1) * 4) = param_3;
      if (-1 < param_4) {
        *(short *)(*(int *)(this + 4) + 1 + (*(int *)(this + 0x10) * iVar2 + param_1) * 4) =
             (short)param_4;
      }
      iVar1 = *(int *)(this + 0x10);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA110 */

void __thiscall
animSYSTEM::SetTranParamFromAny(animSYSTEM *this,int param_1,int param_2,uchar param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x10);
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      *(undefined1 *)(*(int *)(this + 4) + (iVar2 * param_1 + iVar1) * 4) = (undefined1)param_2;
      *(uchar *)(*(int *)(this + 4) + 3 + (*(int *)(this + 0x10) * param_1 + iVar1) * 4) = param_3;
      iVar2 = *(int *)(this + 0x10) * param_1 + iVar1;
      iVar1 = iVar1 + 1;
      *(short *)(*(int *)(this + 4) + 1 + iVar2 * 4) = (short)param_4;
      iVar2 = *(int *)(this + 0x10);
    } while (iVar1 < iVar2);
  }
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA180 */

void __thiscall animSYSTEM::SetTranCycleAnim(animSYSTEM *this,int param_1)

{
  int iVar1;
  
  iVar1 = (*(int *)(this + 0x10) + 1) * param_1;
  *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 1;
  *(short *)(*(int *)(this + 4) + 1 + iVar1 * 4) = (short)param_1;
  *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 0;
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA1B0 */

void __thiscall animSYSTEM::SetTranCycle2Anim(animSYSTEM *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(int *)(this + 0x10) + 1) * param_1;
  *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 1;
  *(short *)(*(int *)(this + 4) + 1 + iVar1 * 4) = (short)param_2;
  *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 0;
  iVar1 = *(int *)(this + 0x10) * param_2 + param_1;
  *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 3;
  *(undefined2 *)(*(int *)(this + 4) + 1 + iVar1 * 4) = 0xffff;
  *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 0;
  iVar1 = *(int *)(this + 0x10) * param_1 + param_2;
  *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 1;
  *(short *)(*(int *)(this + 4) + 1 + iVar1 * 4) = (short)param_1;
  *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 0;
  iVar1 = (*(int *)(this + 0x10) + 1) * param_2;
  *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 3;
  *(undefined2 *)(*(int *)(this + 4) + 1 + iVar1 * 4) = 0xffff;
  *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 0;
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA250 */

void __thiscall
animSYSTEM::SetTranMergeCycles
          (animSYSTEM *this,int param_1,int param_2,int param_3,int param_4,uchar param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10) * param_3 + param_1;
  *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 1;
  *(short *)(*(int *)(this + 4) + 1 + iVar1 * 4) = (short)param_4;
  *(uchar *)(*(int *)(this + 4) + 3 + iVar1 * 4) = param_5;
  iVar1 = *(int *)(this + 0x10) * param_4 + param_2;
  *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 3;
  *(undefined2 *)(*(int *)(this + 4) + 1 + iVar1 * 4) = 0xffff;
  *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 1;
  iVar1 = *(int *)(this + 0x10) * param_1 + param_3;
  *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 1;
  *(short *)(*(int *)(this + 4) + 1 + iVar1 * 4) = (short)param_2;
  *(uchar *)(*(int *)(this + 4) + 3 + iVar1 * 4) = param_5;
  iVar1 = *(int *)(this + 0x10) * param_2 + param_4;
  *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 3;
  *(undefined2 *)(*(int *)(this + 4) + 1 + iVar1 * 4) = 0xffff;
  *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 1;
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA300 */

void __thiscall animSYSTEM::DuplicateTranParam(animSYSTEM *this,int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(this + 0x10);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 * iVar4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(this + 4) + (iVar2 + param_2) * 4) =
           *(undefined4 *)(*(int *)(this + 4) + (iVar2 + param_1) * 4);
      iVar2 = *(int *)(this + 0x10);
    } while (iVar4 < iVar2);
  }
  iVar2 = *(int *)(this + 0x10);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = iVar2 * param_2 + iVar4;
      *(undefined4 *)(*(int *)(this + 4) + iVar3 * 4) =
           *(undefined4 *)(*(int *)(this + 4) + (iVar2 * param_1 + iVar4) * 4);
      puVar1 = (ushort *)(*(int *)(this + 4) + 1 + iVar3 * 4);
      if ((uint)*puVar1 == param_1) {
        *puVar1 = (ushort)param_2;
      }
      iVar2 = *(int *)(this + 0x10);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  iVar2 = *(int *)(this + 0x10) * param_2 + param_1;
  *(undefined1 *)(*(int *)(this + 4) + iVar2 * 4) = 1;
  *(ushort *)(*(int *)(this + 4) + 1 + iVar2 * 4) = (ushort)param_2;
  *(undefined1 *)(*(int *)(this + 4) + 3 + iVar2 * 4) = 1;
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA390 */

int __thiscall animSYSTEM::GetTranType(animSYSTEM *this,int param_1,int param_2,int param_3)

{
  if (param_1 == -1) {
    return 0;
  }
  return (uint)*(byte *)(*(int *)(this + 4) + (*(int *)(this + 0x10) * param_2 + param_1) * 4);
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA3C0 */

int __thiscall animSYSTEM::GetTranTypeBlend(animSYSTEM *this,int param_1,int param_2,int param_3)

{
  if (param_1 == -1) {
    return 0;
  }
  return (uint)*(byte *)(*(int *)(this + 4) + 3 + (*(int *)(this + 0x10) * param_2 + param_1) * 4);
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA3F0 */

int __thiscall animSYSTEM::GetNextAnimSeq(animSYSTEM *this,int param_1,int param_2,int param_3)

{
  if (param_1 == -1) {
    return param_2;
  }
  return (uint)*(ushort *)(*(int *)(this + 4) + 1 + (*(int *)(this + 0x10) * param_2 + param_1) * 4)
  ;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA420 */

animSYSTEM_GROUP * __thiscall
animSYSTEM_GROUP::animSYSTEM_GROUP(animSYSTEM_GROUP *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  animSYSTEM::animSYSTEM((animSYSTEM *)this,param_1,param_3);
  *(undefined ***)this = &_vftable_;
  *(int *)(this + 0x14) = param_2;
  pvVar1 = apCalloc(param_1,1);
  iVar4 = *(int *)(this + 0x14);
  *(void **)(this + 0x18) = pvVar1;
  puVar2 = (undefined1 *)operator_new(iVar4 << 6);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar3 = puVar2;
    if (-1 < iVar4 + -1) {
      do {
        *puVar3 = 0;
        iVar4 = iVar4 + -1;
        puVar3 = puVar3 + 0x40;
      } while (iVar4 != 0);
      *(undefined1 **)(this + 0x1c) = puVar2;
      return this;
    }
  }
  *(undefined1 **)(this + 0x1c) = puVar2;
  return this;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA490
   addr: 004BA490 */

void * __thiscall
animSYSTEM_GROUP::_scalar_deleting_destructor_(animSYSTEM_GROUP *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x18));
  operator_delete(*(void **)(this + 0x1c));
  *(undefined ***)this = &animSYSTEM::_vftable_;
  operator_delete(*(void **)(this + 8));
  operator_delete(*(void **)(this + 4));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA4E0 */

void __thiscall animSYSTEM_GROUP::DeclareGroupSeq(animSYSTEM_GROUP *this,int param_1,int param_2)

{
  *(undefined1 *)(param_1 + *(int *)(this + 0x18)) = (undefined1)param_2;
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA500 */

void __thiscall animSYSTEM_GROUP::SetGroupSuffix(animSYSTEM_GROUP *this,int param_1,char *param_2)

{
  apNAME::SetName((apNAME *)(param_1 * 0x40 + *(int *)(this + 0x1c)),param_2);
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA520 */

char * __thiscall animSYSTEM_GROUP::GetGroupSuffix(animSYSTEM_GROUP *this,int param_1)

{
  if (*(int *)(this + 0x1c) == 0) {
    return s_;
  }
  return (char *)(param_1 * 0x40 + *(int *)(this + 0x1c));
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA540 */

void __thiscall
animSYSTEM_GROUP::SetTranParam
          (animSYSTEM_GROUP *this,int param_1,int param_2,uchar param_3,ushort param_4,uchar param_5
          )

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_10;
  int local_c;
  int local_4;
  
  local_c = *(int *)(this + 0x14);
  iVar6 = *(int *)(this + 0x18);
  bVar1 = *(byte *)(iVar6 + param_1);
  iVar3 = local_c;
  if (bVar1 != 0) {
    iVar3 = (uint)bVar1 * local_c;
  }
  local_10 = (uint)(bVar1 != 0);
  iVar4 = (uint)*(byte *)(iVar6 + param_2) * local_c;
  bVar1 = *(byte *)((uint)param_4 + iVar6);
  if (bVar1 != 0) {
    local_c = (uint)bVar1 * local_c;
  }
  local_4 = 0;
  if (0 < iVar3) {
    do {
      iVar6 = 0;
      if (0 < iVar4) {
        do {
          iVar5 = (iVar6 % iVar4 + 1 + param_2) * *(int *)(this + 0x10) + local_4 % iVar3 + local_10
                  + param_1;
          *(uchar *)(*(int *)(this + 4) + iVar5 * 4) = param_3;
          iVar2 = iVar6 % local_c;
          iVar6 = iVar6 + 1;
          *(ushort *)(*(int *)(this + 4) + 1 + iVar5 * 4) =
               (short)iVar2 + (ushort)(bVar1 != 0) + param_4;
          *(uchar *)(*(int *)(this + 4) + 3 + iVar5 * 4) = param_5;
        } while (iVar6 < iVar4);
      }
      local_4 = local_4 + 1;
    } while (local_4 < iVar3);
  }
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA660 */

void __thiscall
animSYSTEM_GROUP::SetTranParamSymm(animSYSTEM_GROUP *this,int param_1,int param_2,uchar param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)(*(int *)(this + 0x18) + param_1);
  iVar5 = 0;
  if (0 < (int)(*(int *)(this + 0x14) * (uint)bVar1)) {
    iVar6 = param_1 + 1;
    iVar2 = param_2 - iVar6;
    do {
      iVar4 = iVar2 + 1 + iVar6;
      iVar3 = *(int *)(this + 0x10) * iVar4 + iVar6;
      *(uchar *)(*(int *)(this + 4) + iVar3 * 4) = param_3;
      *(short *)(*(int *)(this + 4) + 1 + iVar3 * 4) = (short)iVar4;
      *(undefined1 *)(*(int *)(this + 4) + 3 + iVar3 * 4) = 1;
      iVar4 = *(int *)(this + 0x10) * iVar6 + iVar4;
      iVar5 = iVar5 + 1;
      *(uchar *)(*(int *)(this + 4) + iVar4 * 4) = param_3;
      *(short *)(*(int *)(this + 4) + 1 + iVar4 * 4) = (short)iVar6;
      iVar6 = iVar6 + 1;
      *(undefined1 *)(*(int *)(this + 4) + 3 + iVar4 * 4) = 1;
    } while (iVar5 < (int)(*(int *)(this + 0x14) * (uint)bVar1));
  }
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA6F0 */

void __thiscall
animSYSTEM_GROUP::SetTranTypeToAny
          (animSYSTEM_GROUP *this,int param_1,int param_2,uchar param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1;
  bVar1 = *(byte *)(param_1 + *(int *)(this + 0x18));
  if (bVar1 == 0) {
    iVar5 = *(int *)(this + 0x10);
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        *(undefined1 *)(*(int *)(this + 4) + (iVar5 * iVar3 + param_1) * 4) = (undefined1)param_2;
        iVar5 = *(int *)(this + 0x10) * iVar3;
        iVar3 = iVar3 + 1;
        *(char *)(*(int *)(this + 4) + 3 + (iVar5 + param_1) * 4) = (char)param_4;
        iVar5 = *(int *)(this + 0x10);
      } while (iVar3 < iVar5);
    }
  }
  else {
    param_1 = 0;
    if (0 < (int)(*(int *)(this + 0x14) * (uint)bVar1)) {
      do {
        iVar5 = iVar5 + 1;
        if (param_4 < 1) {
          iVar3 = *(int *)(this + 0x10);
          iVar2 = 0;
          if (0 < iVar3) {
            do {
              *(undefined1 *)(*(int *)(this + 4) + (iVar3 * iVar2 + iVar5) * 4) =
                   (undefined1)param_2;
              iVar3 = *(int *)(this + 0x10) * iVar2;
              iVar2 = iVar2 + 1;
              *(uchar *)(*(int *)(this + 4) + 3 + (iVar3 + iVar5) * 4) = param_3;
              iVar3 = *(int *)(this + 0x10);
            } while (iVar2 < iVar3);
          }
        }
        else {
          iVar3 = param_4 + 1 + param_1;
          iVar2 = *(int *)(this + 0x10);
          iVar4 = 0;
          if (0 < iVar2) {
            do {
              *(undefined1 *)(*(int *)(this + 4) + (iVar2 * iVar4 + iVar5) * 4) =
                   (undefined1)param_2;
              *(uchar *)(*(int *)(this + 4) + 3 + (*(int *)(this + 0x10) * iVar4 + iVar5) * 4) =
                   param_3;
              if (-1 < iVar3) {
                *(short *)(*(int *)(this + 4) + 1 + (*(int *)(this + 0x10) * iVar4 + iVar5) * 4) =
                     (short)iVar3;
              }
              iVar2 = *(int *)(this + 0x10);
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar2);
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 < (int)(*(int *)(this + 0x14) * (uint)bVar1));
      return;
    }
  }
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA820 */

void __thiscall animSYSTEM_GROUP::SetTranCycleAnim(animSYSTEM_GROUP *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x14)) {
    do {
      iVar1 = (*(int *)(this + 0x10) + 1) * param_1;
      iVar2 = iVar2 + 1;
      *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 1;
      *(short *)(*(int *)(this + 4) + 1 + iVar1 * 4) = (short)param_1;
      param_1 = param_1 + 1;
      *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 0;
    } while (iVar2 < *(int *)(this + 0x14));
  }
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA860 */

void __thiscall animSYSTEM_GROUP::SetTranCycle2Anim(animSYSTEM_GROUP *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(this + 0x14);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      iVar4 = 0;
      if (0 < iVar2) {
        iVar2 = param_2;
        do {
          iVar1 = *(int *)(this + 0x10) * ((param_1 - param_2) + iVar2) + iVar3 + param_1;
          *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 1;
          *(short *)(*(int *)(this + 4) + 1 + iVar1 * 4) = (short)param_2 + (short)iVar4;
          *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 0;
          iVar1 = *(int *)(this + 0x10) * iVar2 + iVar3 + param_1;
          *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 3;
          *(undefined2 *)(*(int *)(this + 4) + 1 + iVar1 * 4) = 0xffff;
          *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 1;
          iVar1 = *(int *)(this + 0x10) * ((param_1 - param_2) + iVar2) + iVar3 + param_2;
          *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 1;
          *(short *)(*(int *)(this + 4) + 1 + iVar1 * 4) = (short)iVar4 + (short)param_1;
          *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 0;
          iVar1 = *(int *)(this + 0x10) * iVar2 + iVar3 + param_2;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 1;
          *(undefined1 *)(*(int *)(this + 4) + iVar1 * 4) = 3;
          *(undefined2 *)(*(int *)(this + 4) + 1 + iVar1 * 4) = 0xffff;
          *(undefined1 *)(*(int *)(this + 4) + 3 + iVar1 * 4) = 1;
        } while (iVar4 < *(int *)(this + 0x14));
      }
      iVar2 = *(int *)(this + 0x14);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BA960 */

void __thiscall
animSYSTEM_GROUP::SetTranMergeCycles
          (animSYSTEM_GROUP *this,int param_1,int param_2,int param_3,int param_4,uchar param_5)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  uVar1 = param_5;
  iVar4 = *(int *)(this + 0x14);
  local_8 = 0;
  if (0 < iVar4) {
    iVar5 = param_2 - param_1;
    do {
      _param_5 = 0;
      if (0 < iVar4) {
        iVar6 = iVar5 + param_1;
        iVar4 = param_4;
        do {
          iVar3 = (param_3 - param_4) + iVar4;
          iVar2 = *(int *)(this + 0x10) * iVar3 + param_1;
          *(undefined1 *)(*(int *)(this + 4) + iVar2 * 4) = 1;
          *(short *)(*(int *)(this + 4) + 1 + iVar2 * 4) = (short)iVar4;
          *(uchar *)(*(int *)(this + 4) + 3 + iVar2 * 4) = uVar1;
          iVar2 = *(int *)(this + 0x10) * iVar4 + iVar6;
          *(undefined1 *)(*(int *)(this + 4) + iVar2 * 4) = 3;
          *(undefined2 *)(*(int *)(this + 4) + 1 + iVar2 * 4) = 0xffff;
          *(undefined1 *)(*(int *)(this + 4) + 3 + iVar2 * 4) = 1;
          iVar3 = *(int *)(this + 0x10) * param_1 + iVar3;
          *(undefined1 *)(*(int *)(this + 4) + iVar3 * 4) = 1;
          *(short *)(*(int *)(this + 4) + 1 + iVar3 * 4) = (short)iVar6;
          *(uchar *)(*(int *)(this + 4) + 3 + iVar3 * 4) = uVar1;
          iVar2 = *(int *)(this + 0x10) * iVar6 + iVar4;
          *(undefined1 *)(*(int *)(this + 4) + iVar2 * 4) = 3;
          *(undefined2 *)(*(int *)(this + 4) + 1 + iVar2 * 4) = 0xffff;
          *(undefined1 *)(*(int *)(this + 4) + 3 + iVar2 * 4) = 1;
          _param_5 = _param_5 + 1;
          iVar4 = iVar4 + 1;
        } while (_param_5 < *(int *)(this + 0x14));
      }
      iVar4 = *(int *)(this + 0x14);
      local_8 = local_8 + 1;
      param_1 = param_1 + 1;
    } while (local_8 < iVar4);
  }
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BAA80 */

void __thiscall animSYSTEM_GROUP::DuplicateTranParam(animSYSTEM_GROUP *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(*(int *)(this + 0x18) + param_1);
  if (0 < (int)(*(int *)(this + 0x14) * (uint)bVar1)) {
    iVar2 = param_1 + 1;
    do {
      animSYSTEM::DuplicateTranParam((animSYSTEM *)this,iVar2,(param_2 - param_1) + iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 + (-1 - param_1) < (int)(*(int *)(this + 0x14) * (uint)bVar1));
  }
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BAAE0 */

int __thiscall
animSYSTEM_GROUP::GetTranType(animSYSTEM_GROUP *this,int param_1,int param_2,int param_3)

{
  if (param_1 == -1) {
    return 0;
  }
  return (uint)*(byte *)(*(int *)(this + 4) +
                        ((param_2 + 1 + param_3) * *(int *)(this + 0x10) + param_1) * 4);
}




/* from: engine:anim_ctrl.cpp
   addr: 004BAB10 */

int __thiscall
animSYSTEM_GROUP::GetTranTypeBlend(animSYSTEM_GROUP *this,int param_1,int param_2,int param_3)

{
  if (param_1 == -1) {
    return 0;
  }
  return (uint)*(byte *)(*(int *)(this + 4) + 3 +
                        ((param_2 + 1 + param_3) * *(int *)(this + 0x10) + param_1) * 4);
}




/* from: engine:anim_ctrl.cpp
   addr: 004BAB40 */

int __thiscall animSYSTEM_GROUP::GetBaseSeqNmb(animSYSTEM_GROUP *this,int param_1)

{
  int iVar1;
  
  if (*(char *)(*(int *)(this + 0x18) + param_1) != '\0') {
    return param_1 + 1;
  }
  iVar1 = param_1;
  if (-1 < param_1) {
    do {
      if (*(char *)(*(int *)(this + 0x18) + iVar1) != '\0') {
        return (((param_1 - iVar1) + -1) / *(int *)(this + 0x14)) * *(int *)(this + 0x14) + 1 +
               iVar1;
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return -1;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BAB80 */

int __thiscall animSYSTEM_GROUP::GetNSubSeq(animSYSTEM_GROUP *this,int param_1)

{
  return (uint)*(byte *)(*(int *)(this + 0x18) + param_1);
}




/* from: engine:anim_ctrl.cpp
   addr: 004BABA0 */

int __thiscall
animSYSTEM_GROUP::GetNextAnimSeq(animSYSTEM_GROUP *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 + 1 + param_3;
  if (param_1 != -1) {
    uVar1 = (uint)*(ushort *)
                   (*(int *)(this + 4) + 1 + (*(int *)(this + 0x10) * uVar1 + param_1) * 4);
  }
  return uVar1;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BABD0 */

animSYSTEM_INST * __thiscall
animSYSTEM_INST::animSYSTEM_INST(animSYSTEM_INST *this,animINST *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  *(undefined4 *)this = *(undefined4 *)(*(int *)(param_1 + 0x138) + 0xa4);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  if (*(int *)(param_1 + 0x138) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x138) + 0x8c);
  }
  pvVar2 = apCalloc(4,uVar1);
  *(void **)(param_1 + 0x2c) = pvVar2;
  iVar5 = *(int *)(*(int *)this + 0xc);
  pvVar2 = operator_new(iVar5 * 0x18);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else if (-1 < iVar5 + -1) {
    puVar3 = (undefined4 *)((int)pvVar2 + 0x10);
    do {
      puVar3[-4] = 0;
      puVar3[-2] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(void **)(this + 4) = pvVar2;
  iVar5 = *(int *)this;
  iVar4 = 0;
  if (0 < *(int *)(iVar5 + 0xc)) {
    iVar6 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(int *)(iVar7 + 0x14 + *(int *)(this + 4)) = *(int *)(iVar5 + 8) + iVar6;
      iVar5 = *(int *)this;
      iVar6 = iVar6 + 0x14;
      iVar7 = iVar7 + 0x18;
    } while (iVar4 < *(int *)(iVar5 + 0xc));
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim_ctrl.cpp
   addr: 004BACA0 */

int __thiscall
animSYSTEM_INST::AdvanceAnimation(animSYSTEM_INST *this,animINST *param_1,int param_2,float param_3)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  float local_18;
  int local_14;
  uint local_10;
  float local_c;
  uint local_8;
  undefined4 local_4;
  
  local_8 = 0;
  iVar8 = *(int *)(*(int *)(param_1 + 0x138) + 0x90);
  if (*(int *)this == 0) {
    return 0;
  }
  iVar9 = *(int *)(param_1 + 0xe0);
  if (iVar9 == -1) {
    local_18 = 0.0;
  }
  else {
    local_18 = animSEQ::TimeToFrame((animSEQ *)(iVar8 + iVar9 * 0x88),*(float *)(param_1 + 0x24));
  }
  if ((param_2 < -1) || (*(int *)(*(int *)this + 0x10) <= param_2)) {
    param_2 = 0;
LAB_004bad1a:
    iVar4 = (**(code **)(**(int **)this + 0x28))
                      (*(undefined4 *)(this + 8),param_2,*(undefined4 *)(this + 0x24));
    local_14 = (**(code **)(**(int **)this + 0x24))
                         (*(undefined4 *)(this + 8),local_4,*(undefined4 *)(this + 0x24));
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    if (local_14 == 3) goto LAB_004bad56;
  }
  else {
    if (param_2 != -1) goto LAB_004bad1a;
    iVar4 = -1;
LAB_004bad56:
    local_14 = 1;
  }
  iVar7 = *(int *)(this + 8);
  if ((iVar7 == -1) || (bVar3 = false, *(int *)(iVar8 + 0x80 + iVar7 * 0x88) == 2)) {
    bVar3 = true;
  }
  local_c = 0.0;
  local_10 = 0;
  if ((iVar7 == iVar4) || (local_14 != 0)) {
    if (bVar3) goto LAB_004baed7;
    local_c = param_3 + *(float *)(param_1 + 0x24);
    fVar12 = *(float *)(iVar8 + 0x50 + iVar7 * 0x88) * ___real_3a83126f;
    if (local_c <= fVar12) {
      *(float *)(param_1 + 0x24) = local_c;
      goto LAB_004baed7;
    }
    if (local_14 != 1) {
      *(float *)(param_1 + 0x24) = fVar12;
      local_8 = 1;
      goto LAB_004baed7;
    }
    local_c = local_c - fVar12;
    *(float *)(this + 0x1c) = fVar12;
  }
  else {
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x24);
  }
  local_10 = 1;
  iVar2 = iVar8 + iVar4 * 0x88;
  if (*(int *)(iVar2 + 0x80) == 2) {
    if (iVar4 != -1) goto LAB_004baed7;
    *(undefined4 *)(this + 0x10) = 0;
  }
  else if (iVar4 == -1) {
    *(undefined4 *)(this + 0x10) = 0;
  }
  else {
    uVar5 = (**(code **)(**(int **)this + 0x2c))(iVar7,param_2,*(undefined4 *)(this + 0x24));
    *(undefined4 *)(this + 0x10) = uVar5;
  }
  iVar7 = *(int *)(this + 0x10);
  if (iVar7 == 0) {
LAB_004baea8:
    animINST::StopSeqBlend(param_1);
  }
  else if (iVar7 == 1) {
    fVar12 = *(float *)(iVar2 + 0x50) * ___real_3a83126f * ___real_3e124925;
    *(float *)(this + 0x18) = fVar12;
    if (___real_3e99999a < fVar12) {
      *(undefined4 *)(this + 0x18) = 0x3e99999a;
    }
  }
  else if (iVar7 == 2) {
    local_c = (*(float *)(this + 0x1c) / *(float *)(iVar8 + 0x50 + *(int *)(this + 8) * 0x88)) *
              *(float *)(iVar2 + 0x50);
    goto LAB_004baea8;
  }
  *(undefined4 *)(this + 0x14) = 0;
  animINST::SetAnimSeq(param_1,iVar4,local_c);
  uVar5 = (**(code **)(**(int **)this + 0x30))(iVar4);
  *(undefined4 *)(this + 0x20) = uVar5;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 8);
  *(int *)(this + 8) = iVar4;
LAB_004baed7:
  if ((*(int *)(this + 8) != -1) && (*(int *)(iVar8 + 0x80 + *(int *)(this + 8) * 0x88) != 2)) {
    if (local_10 != 0) {
      uVar10 = *(uint *)(param_1 + 4);
      *(uint *)(param_1 + 4) = uVar10 | 0xa000;
      if (iVar9 != *(int *)(param_1 + 0xe0)) {
        *(uint *)(param_1 + 4) = uVar10 | 0xe000;
      }
    }
    if ((_DAT_005db840 * ___real_41200000 < param_3) && (local_8 == 0)) {
      animINST::Invalidate(param_1,8);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x2000;
    }
  }
  if (___real_3dcccccd < *(float *)(this + 0x30)) {
    if (*(float *)(this + 0x2c) <= *(float *)(this + 0x30)) {
      animINST::SetSeqBlendParam
                (param_1,*(int *)(this + 0x28) + *(int *)(this + 0x20),*(float *)(param_1 + 0x24),
                 *(int *)(this + 8),*(float *)(param_1 + 0x24),
                 ___real_3f800000 - *(float *)(this + 0x2c) / *(float *)(this + 0x30));
      *(float *)(this + 0x2c) = param_3 + *(float *)(this + 0x2c);
    }
    else {
      *(undefined4 *)(this + 0x30) = 0;
      animINST::StopSeqBlend(param_1);
      *(int *)(this + 8) = *(int *)(this + 0x20) + *(int *)(this + 0x28);
      animINST::SetAnimSeq
                (param_1,*(int *)(this + 0x20) + *(int *)(this + 0x28),*(float *)(param_1 + 0x24));
      *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x28);
    }
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    if (*(float *)(this + 0x14) <= *(float *)(this + 0x18)) {
      fVar12 = *(float *)(this + 0x14);
      *(float *)(this + 0x14) = param_3 + fVar12;
      if (*(int *)(this + 0x10) == 1) {
        animINST::SetSeqBlendParam
                  (param_1,*(int *)(this + 0xc),*(float *)(this + 0x1c),*(int *)(this + 8),
                   *(float *)(param_1 + 0x24),(param_3 + fVar12) / *(float *)(this + 0x18));
      }
    }
    else {
      *(undefined4 *)(this + 0x18) = 0;
      animINST::StopSeqBlend(param_1);
      *(undefined4 *)(this + 0x10) = 0;
    }
  }
  if (*(int *)(param_1 + 0xe0) != -1) {
    animSEQ::TimeToFrame
              ((animSEQ *)(iVar8 + *(int *)(param_1 + 0xe0) * 0x88),*(float *)(param_1 + 0x24));
  }
  iVar4 = 0;
  if (0 < *(int *)(*(int *)this + 0xc)) {
    param_2 = 0;
    do {
      animCHN::AdvanceAnimation((animCHN *)(*(int *)(this + 4) + param_2),param_3);
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 0x18;
    } while (iVar4 < *(int *)(*(int *)this + 0xc));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_3 = 0.0;
  do {
    iVar4 = *(int *)(param_1 + 0xe0);
    uVar10 = 0;
    if (iVar4 == iVar9) {
      if (iVar4 != -1) {
        fVar12 = animSEQ::TimeToFrame((animSEQ *)(iVar8 + iVar4 * 0x88),*(float *)(param_1 + 0x24));
        uVar10 = animSEQ::IsActionFrame
                           ((animSEQ *)(iVar8 + *(int *)(param_1 + 0xe0) * 0x88),(int)param_3,
                            local_18,fVar12);
        goto LAB_004bb1e9;
      }
    }
    else {
      if (iVar4 != -1) {
        fVar12 = animSEQ::TimeToFrame((animSEQ *)(iVar8 + iVar4 * 0x88),0.0);
        fVar13 = animSEQ::TimeToFrame
                           ((animSEQ *)(iVar8 + *(int *)(param_1 + 0xe0) * 0x88),
                            *(float *)(param_1 + 0x24));
        uVar10 = animSEQ::IsActionFrame
                           ((animSEQ *)(iVar8 + *(int *)(param_1 + 0xe0) * 0x88),(int)param_3,fVar12
                            ,fVar13);
      }
      if (iVar9 != -1) {
        if (local_14 == 1) {
          fVar12 = animSEQ::TimeToFrame
                             ((animSEQ *)(iVar8 + iVar9 * 0x88),
                              *(float *)(iVar8 + 0x50 + iVar9 * 0x88) * ___real_3a83126f);
        }
        else {
          fVar12 = _DAT_005db840 + local_18;
        }
        uVar6 = animSEQ::IsActionFrame
                          ((animSEQ *)(iVar8 + iVar9 * 0x88),(int)param_3,local_18,fVar12);
        uVar10 = uVar10 | uVar6;
      }
LAB_004bb1e9:
      if (uVar10 != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1 << (SUB41(param_3,0) & 0x1f);
      }
    }
    param_3 = (float)((int)param_3 + 1);
  } while ((int)param_3 < 10);
  puVar11 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar11 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x138) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x138) + 0x8c);
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    iVar4 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0xe0);
      if (iVar7 == iVar9) {
        if (iVar7 != -1) {
          fVar12 = animSEQ::TimeToFrame
                             ((animSEQ *)(iVar8 + iVar7 * 0x88),*(float *)(param_1 + 0x24));
          fVar13 = local_18;
          goto LAB_004bb2a1;
        }
      }
      else if (iVar7 != -1) {
        fVar13 = animSEQ::TimeToFrame((animSEQ *)(iVar8 + iVar7 * 0x88),0.0);
        fVar12 = animSEQ::TimeToFrame
                           ((animSEQ *)(iVar8 + *(int *)(param_1 + 0xe0) * 0x88),
                            *(float *)(param_1 + 0x24));
LAB_004bb2a1:
        iVar7 = animSEQ::IsActionFrame
                          ((animSEQ *)(iVar8 + *(int *)(param_1 + 0xe0) * 0x88),iVar4,fVar13,fVar12)
        ;
        if (iVar7 != 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0xe0) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
    param_3 = 0.0;
    do {
      if ((*(int *)(param_1 + 0xe0) != iVar9) && (iVar9 != -1)) {
        if (local_14 == 1) {
          fVar12 = animSEQ::TimeToFrame
                             ((animSEQ *)(iVar8 + iVar9 * 0x88),
                              *(float *)(iVar8 + 0x50 + iVar9 * 0x88) * ___real_3a83126f);
        }
        else {
          fVar12 = _DAT_005db840 + local_18;
        }
        iVar4 = animSEQ::IsActionFrame
                          ((animSEQ *)(iVar8 + iVar9 * 0x88),(int)param_3,local_18,fVar12);
        if (iVar4 != 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 0x2c) + iVar9 * 4);
          *puVar1 = *puVar1 | 1 << (SUB41(param_3,0) & 0x1f);
        }
      }
      param_3 = (float)((int)param_3 + 1);
    } while ((int)param_3 < 10);
    param_2 = 10;
    iVar8 = *(int *)(*(int *)this + 0xc);
    do {
      iVar9 = 0;
      if (0 < iVar8) {
        iVar4 = 0;
        do {
          iVar8 = *(int *)(this + 4) + iVar4;
          iVar9 = iVar9 + 1;
          iVar4 = iVar4 + 0x18;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + **(int **)(iVar8 + 0x14) * 4) =
               *(undefined4 *)(iVar8 + 0x10);
          iVar8 = *(int *)(*(int *)this + 0xc);
        } while (iVar9 < iVar8);
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return local_10 | local_8;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BB3E0 */

void __thiscall animSYSTEM_INST::SetGroupCur(animSYSTEM_INST *this,int param_1,float param_2)

{
  if (*(int *)(this + 0x28) == -1) {
    *(int *)(this + 0x24) = param_1;
    *(int *)(this + 0x28) = param_1;
    return;
  }
  if (param_1 != *(int *)(this + 0x28)) {
    *(undefined4 *)(this + 0x2c) = 0;
    *(float *)(this + 0x30) = param_2;
    *(int *)(this + 0x28) = param_1;
  }
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BB420 */

void __thiscall animINST::CreateAnimSys(animINST *this)

{
  animSYSTEM_INST *this_00;
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(this + 0x138) + 0xa4) != 0) {
    this_00 = (animSYSTEM_INST *)operator_new(0x34);
    if (this_00 != (animSYSTEM_INST *)0x0) {
      uVar1 = animSYSTEM_INST::animSYSTEM_INST(this_00,this);
      *(undefined4 *)(this + 0xe8) = uVar1;
      return;
    }
    *(undefined4 *)(this + 0xe8) = 0;
  }
  return;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BB460 */

int __thiscall animINST::IsActionFrame(animINST *this,int param_1,int param_2)

{
  int iVar1;
  
  if (((*(int *)(this + 0x2c) != 0) && (-1 < param_2)) && (-1 < param_1)) {
    if (*(int *)(this + 0x138) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(this + 0x138) + 0x8c);
    }
    if (param_1 < iVar1) {
      return *(uint *)(*(int *)(this + 0x2c) + param_1 * 4) & 1 << ((byte)param_2 & 0x1f);
    }
  }
  return 0;
}




/* from: engine:anim_ctrl.cpp
   addr: 004BB4B0 */

void __thiscall animINST::ClearActionFrame(animINST *this)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(this + 0x28) = 0;
  if (*(int *)(this + 0x2c) != 0) {
    iVar2 = 0;
    while( true ) {
      if (*(int *)(this + 0x138) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(this + 0x138) + 0x8c);
      }
      if (iVar1 <= iVar2) break;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)(this + 0x2c) + -4 + iVar2 * 4) = 0;
    }
  }
  return;
}

