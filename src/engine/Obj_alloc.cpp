
/* from: engine:Obj_alloc.cpp
   addr: 004BD270 */

objOBJ * __fastcall objOBJ::Make(void)

{
  objOBJ *poVar1;
  
  poVar1 = (objOBJ *)operator_new(0xf8);
  if (poVar1 != (objOBJ *)0x0) {
    poVar1 = (objOBJ *)objOBJ(poVar1);
    return poVar1;
  }
  return (objOBJ *)0x0;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD290 */

int __thiscall objOBJ::AllocName(objOBJ *this,int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)apRealloc(*(void **)(this + 0x18),param_1 + 1);
  if (puVar1 == (undefined1 *)0x0) {
    if (0 < param_1) {
      return 0;
    }
  }
  else {
    *puVar1 = 0;
  }
  *(undefined1 **)(this + 0x18) = puVar1;
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD2D0 */

void __thiscall objOBJ::FreeName(objOBJ *this)

{
  if (-1 < (char)this[4]) {
    apFree(*(void **)(this + 0x18));
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffff7f;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Obj_alloc.cpp
   addr: 004BD300 */

int __thiscall objOBJ::AllocGeom(objOBJ *this)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this + 0x28) == 0) {
    pvVar1 = operator_new(0x82);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      *(undefined4 *)((int)pvVar1 + 0x2c) = 3;
      *(undefined ***)((int)pvVar1 + 0x28) = &m3dSPHERE::_vftable_;
      *(undefined2 *)((int)pvVar1 + 0x78) = 0;
      *(undefined4 *)((int)pvVar1 + 0x7a) = 0;
      *(undefined4 *)((int)pvVar1 + 0x7e) = 0xbf800000;
      *(undefined4 *)((int)pvVar1 + 0x66) = 0;
      *(undefined4 *)((int)pvVar1 + 0x6a) = 0;
      *(undefined2 *)((int)pvVar1 + 0x6e) = 0;
      *(undefined4 *)((int)pvVar1 + 0x70) = 0;
      *(undefined2 *)((int)pvVar1 + 0x74) = 0;
      *(undefined2 *)((int)pvVar1 + 0x76) = 0xffff;
    }
    *(void **)(this + 0x28) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    *(undefined4 *)((int)pvVar1 + 0x4c) = 0;
    **(undefined4 **)(this + 0x28) = 0;
    *(undefined1 *)(*(int *)(this + 0x28) + 4) = 0;
    *(undefined1 *)(*(int *)(this + 0x28) + 5) = 0;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x44) = 0;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x50) = 0;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x48) = 0;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x54) = 0;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x18) = 0;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x1c) = 0;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x24) = 0;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x20) = 0;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x40) = 0;
    *(undefined2 *)(*(int *)(this + 0x28) + 0x58) = 0;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x5a) = 0;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x5e) = 0xffffffff;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x62) = 0;
    iVar2 = *(int *)(this + 0x28);
    *(undefined4 *)(iVar2 + 0x30) = _m3dVZero;
    *(undefined4 *)(iVar2 + 0x34) = DAT_00963740;
    *(undefined4 *)(iVar2 + 0x38) = DAT_00963744;
    *(undefined4 *)(*(int *)(this + 0x28) + 0x3c) = 0;
    iVar2 = 6;
    iVar4 = 0xc;
    do {
      iVar3 = iVar2 + 2;
      *(undefined2 *)(iVar2 + *(int *)(this + 0x28)) = 0;
      *(undefined4 *)(iVar4 + *(int *)(this + 0x28)) = 0;
      iVar2 = iVar3;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0xc);
  }
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD420 */

void __thiscall objOBJ::FreeGeom(objOBJ *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(undefined ***)((int)pvVar1 + 0x28) = &m3dVOL::_vftable_;
    operator_delete(pvVar1);
  }
  *(undefined4 *)(this + 0x28) = 0;
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD450 */

int __thiscall objOBJ::AllocVertList(objOBJ *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)(this + 0x28);
  if (iVar3 == 0) {
    return iVar3;
  }
  pvVar1 = apRealloc(*(void **)(iVar3 + 0x40),param_1 * 0xc);
  if ((pvVar1 == (void *)0x0) && (0 < param_1)) {
    return 0;
  }
  iVar3 = *(int *)(this + 0x14);
  if (iVar3 < param_1) {
    puVar4 = (undefined4 *)((int)pvVar1 + iVar3 * 0xc);
    for (uVar2 = (param_1 - iVar3) * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  *(void **)(*(int *)(this + 0x28) + 0x40) = pvVar1;
  *(int *)(this + 0x14) = param_1;
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD4D0 */

void __thiscall objOBJ::FreeVertList(objOBJ *this)

{
  if (*(int *)(this + 0x28) != 0) {
    if (((byte)this[4] & 2) == 0) {
      apFree(*(void **)(*(int *)(this + 0x28) + 0x40));
    }
    *(undefined4 *)(*(int *)(this + 0x28) + 0x40) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffd;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD510 */

int __thiscall objOBJ::UnshareVertList(objOBJ *this)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(this + 0x28) == 0) {
    return 0;
  }
  if (((byte)this[4] & 2) != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffd;
    puVar5 = *(undefined4 **)(*(int *)(this + 0x28) + 0x40);
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined4 *)(*(int *)(this + 0x28) + 0x40) = 0;
      iVar4 = *(int *)(this + 0x14);
      if (*(int *)(this + 0x28) != 0) {
        pvVar1 = apRealloc(*(void **)(*(int *)(this + 0x28) + 0x40),iVar4 * 0xc);
        if ((pvVar1 != (void *)0x0) || (iVar4 < 1)) {
          iVar3 = *(int *)(this + 0x14);
          if (iVar3 < iVar4) {
            puVar6 = (undefined4 *)((int)pvVar1 + iVar3 * 0xc);
            for (uVar2 = (iVar4 - iVar3) * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined1 *)puVar6 = 0;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
          }
          *(void **)(*(int *)(this + 0x28) + 0x40) = pvVar1;
          *(int *)(this + 0x14) = iVar4;
          puVar6 = *(undefined4 **)(*(int *)(this + 0x28) + 0x40);
          for (uVar2 = iVar4 * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD5E0 */

int __thiscall objOBJ::AllocFaceList(objOBJ *this,int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (*(int *)(this + 0x28) == 0) {
    return 0;
  }
  iVar1 = CalcFaceSize(this,param_2);
  *(char *)(*(int *)(this + 0x28) + 4) = (char)iVar1;
  *(char *)(*(int *)(this + 0x28) + 5) = (char)param_2;
  pvVar2 = apRealloc((void *)**(undefined4 **)(this + 0x28),
                     (uint)*(byte *)(*(undefined4 **)(this + 0x28) + 1) * param_1);
  if ((pvVar2 == (void *)0x0) && (0 < param_1)) {
    return 0;
  }
  **(undefined4 **)(this + 0x28) = pvVar2;
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 < param_1) {
    uVar3 = (uint)*(byte *)(*(int **)(this + 0x28) + 1);
    uVar4 = (param_1 - iVar1) * uVar3;
    puVar6 = (undefined4 *)(iVar1 * uVar3 + **(int **)(this + 0x28));
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  *(int *)(this + 0x10) = param_1;
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD680 */

void __thiscall objOBJ::FreeFaceList(objOBJ *this)

{
  if (*(undefined4 **)(this + 0x28) != (undefined4 *)0x0) {
    if (((byte)this[4] & 1) == 0) {
      apFree((void *)**(undefined4 **)(this + 0x28));
    }
    **(undefined4 **)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined1 *)(*(int *)(this + 0x28) + 4) = 0;
    *(undefined1 *)(*(int *)(this + 0x28) + 5) = 0;
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffe;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD6D0 */

int __thiscall objOBJ::AllocTexCoord(objOBJ *this,int param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar3 = *(int *)(this + 0x28);
  if (((iVar3 != 0) && (-1 < param_1)) && (param_1 < 3)) {
    if (param_2 == 0) {
      uVar4 = 0x400 << ((byte)param_1 & 0x1f);
      if ((*(uint *)(this + 4) & uVar4) == 0) {
        apFree(*(void **)(iVar3 + 0xc + param_1 * 4));
      }
      *(undefined4 *)(*(int *)(this + 0x28) + 0xc + param_1 * 4) = 0;
      *(undefined2 *)(*(int *)(this + 0x28) + 6 + param_1 * 2) = 0;
      *(uint *)(this + 4) = *(uint *)(this + 4) & ~uVar4;
      return 1;
    }
    pvVar1 = apRealloc(*(void **)(iVar3 + 0xc + param_1 * 4),param_2 * 8);
    if ((pvVar1 != (void *)0x0) || (param_2 < 1)) {
      uVar4 = (uint)*(ushort *)(*(int *)(this + 0x28) + 6 + param_1 * 2);
      if ((int)uVar4 < param_2) {
        puVar5 = (undefined4 *)((int)pvVar1 + uVar4 * 8);
        for (uVar2 = (param_2 - uVar4) * 8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
      *(void **)(*(int *)(this + 0x28) + 0xc + param_1 * 4) = pvVar1;
      *(short *)(*(int *)(this + 0x28) + 6 + param_1 * 2) = (short)param_2;
      return 1;
    }
  }
  return 0;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD7C0 */

void __thiscall objOBJ::FreeTexCoord(objOBJ *this,int param_1)

{
  uint uVar1;
  
  if (((*(int *)(this + 0x28) != 0) && (-1 < param_1)) && (param_1 < 3)) {
    uVar1 = 0x400 << ((byte)param_1 & 0x1f);
    if ((*(uint *)(this + 4) & uVar1) == 0) {
      apFree(*(void **)(*(int *)(this + 0x28) + 0xc + param_1 * 4));
    }
    *(undefined4 *)(*(int *)(this + 0x28) + 0xc + param_1 * 4) = 0;
    *(undefined2 *)(*(int *)(this + 0x28) + 6 + param_1 * 2) = 0;
    *(uint *)(this + 4) = *(uint *)(this + 4) & ~uVar1;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD840 */

int __thiscall objOBJ::UnshareTexCoord(objOBJ *this,int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (((*(int *)(this + 0x28) != 0) && (-1 < param_1)) && (param_1 < 3)) {
    uVar1 = 0x400 << ((byte)param_1 & 0x1f);
    if ((*(uint *)(this + 4) & uVar1) == 0) {
      return 1;
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) & ~uVar1;
    puVar3 = *(undefined4 **)(*(int *)(this + 0x28) + 0xc + param_1 * 4);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(*(int *)(this + 0x28) + 0xc + param_1 * 4) = 0;
      iVar2 = AllocTexCoord(this,param_1,(uint)*(ushort *)(*(int *)(this + 0x28) + 6 + param_1 * 2))
      ;
      if (iVar2 == 0) {
        return 0;
      }
      puVar4 = *(undefined4 **)(*(int *)(this + 0x28) + 0xc + param_1 * 4);
      for (uVar1 = ((uint)*(ushort *)(*(int *)(this + 0x28) + 6 + param_1 * 2) << 3) >> 2;
          uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    return 1;
  }
  return 0;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD8E0 */

int __thiscall objOBJ::AllocColorList(objOBJ *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)(this + 0x28);
  if (iVar3 == 0) {
    return iVar3;
  }
  puVar1 = (undefined4 *)apRealloc(*(void **)(iVar3 + 0x4c),param_1 * 4);
  if ((puVar1 == (undefined4 *)0x0) && (0 < param_1)) {
    return 0;
  }
  puVar4 = puVar1;
  for (uVar2 = param_1 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0xff;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(undefined4 **)(*(int *)(this + 0x28) + 0x4c) = puVar1;
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD940 */

void __thiscall objOBJ::FreeColorList(objOBJ *this)

{
  if (*(int *)(this + 0x28) != 0) {
    if (((byte)this[4] & 4) == 0) {
      apFree(*(void **)(*(int *)(this + 0x28) + 0x4c));
    }
    *(undefined4 *)(*(int *)(this + 0x28) + 0x4c) = 0;
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffb;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD970 */

int __thiscall objOBJ::UnshareFaceSplit(objOBJ *this)

{
  objSPLIT *poVar1;
  
  if (*(int *)(this + 0x28) == 0) {
    return 0;
  }
  if (((byte)this[4] & 8) != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff7;
    if (*(objSPLIT **)(*(int *)(this + 0x28) + 0x18) != (objSPLIT *)0x0) {
      poVar1 = objSPLIT::Duplicate(*(objSPLIT **)(*(int *)(this + 0x28) + 0x18));
      if (poVar1 == (objSPLIT *)0x0) {
        return 0;
      }
      *(objSPLIT **)(*(int *)(this + 0x28) + 0x18) = poVar1;
    }
  }
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BD9B0 */

int __thiscall objOBJ::UnshareFaceSplit(objOBJ *this)

{
  objSPLIT *poVar1;
  int iVar2;
  objOBJ *poVar3;
  objOBJ *local_8;
  int local_4;
  
  poVar3 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    poVar3 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    local_8 = poVar3;
  }
  if ((*(int *)(this + 0x28) != 0) && (((byte)this[4] & 8) != 0)) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff7;
    if ((*(objSPLIT **)(*(int *)(this + 0x28) + 0x18) != (objSPLIT *)0x0) &&
       (poVar1 = objSPLIT::Duplicate(*(objSPLIT **)(*(int *)(this + 0x28) + 0x18)),
       poVar1 != (objSPLIT *)0x0)) {
      *(objSPLIT **)(*(int *)(this + 0x28) + 0x18) = poVar1;
    }
  }
  for (; (poVar3 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar3))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    iVar2 = UnshareFaceSplit(local_8);
    if (iVar2 == 0) {
      return 0;
    }
    local_4 = 1;
  }
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDA40 */

void __thiscall objOBJ::FreeFaceSplit(objOBJ *this)

{
  void *pvVar1;
  
  if ((*(int *)(this + 0x28) != 0) && (((byte)this[4] & 8) == 0)) {
    pvVar1 = *(void **)(*(int *)(this + 0x28) + 0x18);
    if (pvVar1 != (void *)0x0) {
      apFree(*(void **)((int)pvVar1 + 2));
      operator_delete(pvVar1);
    }
    *(undefined4 *)(*(int *)(this + 0x28) + 0x18) = 0;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDA80 */

void __thiscall objOBJ::FreeSplitUnshared(objOBJ *this)

{
  undefined4 *puVar1;
  
  if (*(int *)(this + 0x28) != 0) {
    puVar1 = *(undefined4 **)(*(int *)(this + 0x28) + 0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      operator_delete((void *)*puVar1);
      operator_delete(puVar1);
    }
    *(undefined4 *)(*(int *)(this + 0x28) + 0x1c) = 0;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDAB0 */

int __thiscall objOBJ::AllocModifierList(objOBJ *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar3 = *(int *)(this + 0x28);
  if (iVar3 == 0) {
    return iVar3;
  }
  pvVar1 = apRealloc(*(void **)(iVar3 + 0x5a),param_1 * 4);
  if ((pvVar1 == (void *)0x0) && (0 < param_1)) {
    return 0;
  }
  uVar4 = (uint)*(ushort *)(*(int *)(this + 0x28) + 0x58);
  if ((int)uVar4 < param_1) {
    puVar5 = (undefined4 *)((int)pvVar1 + uVar4 * 4);
    for (uVar2 = param_1 - uVar4 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  *(void **)(*(int *)(this + 0x28) + 0x5a) = pvVar1;
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDB30 */

void __thiscall objOBJ::FreeModifierList(objOBJ *this)

{
  if (*(int *)(this + 0x28) != 0) {
    apFree(*(void **)(*(int *)(this + 0x28) + 0x5a));
    *(undefined4 *)(*(int *)(this + 0x28) + 0x5a) = 0;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDB60 */

int __thiscall objOBJ::UnshareAll(objOBJ *this)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  objSPLIT *poVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  
  *(undefined4 *)(this + 0xf0) = 0;
  uVar6 = *(uint *)(this + 4);
  uVar5 = uVar6 & 0xffffffbf;
  *(uint *)(this + 4) = uVar5;
  if ((char)uVar5 < '\0') {
    *(uint *)(this + 4) = uVar6 & 0xffffff3f;
    pcVar7 = *(char **)(this + 0x18);
    if (pcVar7 != (char *)0x0) {
      uVar6 = 0xffffffff;
      *(undefined4 *)(this + 0x18) = 0;
      pcVar10 = pcVar7;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      puVar2 = (undefined1 *)apRealloc((void *)0x0,~uVar6);
      if (puVar2 == (undefined1 *)0x0) {
        if (0 < (int)(~uVar6 - 1)) {
          return 0;
        }
      }
      else {
        *puVar2 = 0;
      }
      *(undefined1 **)(this + 0x18) = puVar2;
      iVar8 = (int)puVar2 - (int)pcVar7;
      do {
        cVar1 = *pcVar7;
        pcVar7[iVar8] = cVar1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
    }
  }
  if (*(int *)(this + 0x28) == 0) {
    return 1;
  }
  if (((byte)this[4] & 2) != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffd;
    puVar9 = *(undefined4 **)(*(int *)(this + 0x28) + 0x40);
    if (puVar9 != (undefined4 *)0x0) {
      *(undefined4 *)(*(int *)(this + 0x28) + 0x40) = 0;
      iVar8 = AllocVertList(this,*(int *)(this + 0x14));
      if (iVar8 == 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(*(int *)(this + 0x28) + 0x40);
      for (uVar6 = *(int *)(this + 0x14) * 3 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
    }
  }
  if (*(int *)(this + 0x28) != 0) {
    if (((byte)this[4] & 1) != 0) {
      *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffe;
      puVar9 = (undefined4 *)**(undefined4 **)(this + 0x28);
      if (puVar9 != (undefined4 *)0x0) {
        **(undefined4 **)(this + 0x28) = 0;
        iVar8 = AllocFaceList(this,*(int *)(this + 0x10),(uint)*(byte *)(*(int *)(this + 0x28) + 5))
        ;
        if (iVar8 == 0) {
          return 0;
        }
        uVar5 = (uint)*(byte *)(*(undefined4 **)(this + 0x28) + 1) * *(int *)(this + 0x10);
        puVar11 = (undefined4 *)**(undefined4 **)(this + 0x28);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
      }
    }
    iVar8 = 0;
    do {
      iVar3 = UnshareTexCoord(this,iVar8);
      if (iVar3 == 0) {
        return 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
    if (*(int *)(this + 0x28) != 0) {
      if (((byte)this[4] & 4) != 0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffb;
        puVar9 = *(undefined4 **)(*(int *)(this + 0x28) + 0x4c);
        if (puVar9 != (undefined4 *)0x0) {
          *(undefined4 *)(*(int *)(this + 0x28) + 0x4c) = 0;
          iVar8 = AllocColorList(this,*(int *)(this + 0x14));
          if (iVar8 == 0) {
            return 0;
          }
          puVar11 = *(undefined4 **)(*(int *)(this + 0x28) + 0x4c);
          for (uVar6 = *(uint *)(this + 0x14) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
        }
      }
      if (*(int *)(this + 0x28) != 0) {
        if (((byte)this[4] & 8) != 0) {
          *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff7;
          if (*(objSPLIT **)(*(int *)(this + 0x28) + 0x18) != (objSPLIT *)0x0) {
            poVar4 = objSPLIT::Duplicate(*(objSPLIT **)(*(int *)(this + 0x28) + 0x18));
            if (poVar4 == (objSPLIT *)0x0) {
              return 0;
            }
            *(objSPLIT **)(*(int *)(this + 0x28) + 0x18) = poVar4;
          }
        }
        *(undefined4 *)(*(int *)(this + 0x28) + 0x50) = 0;
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffef;
        *(undefined4 *)(*(int *)(this + 0x28) + 0x54) = 0;
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffdf;
        return 1;
      }
    }
  }
  return 0;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDD40 */

int __thiscall objOBJ::AllocNormalList(objOBJ *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 0) {
    return iVar1;
  }
  pvVar2 = apRealloc(*(void **)(iVar1 + 0x44),param_1 * 0xc);
  if ((pvVar2 == (void *)0x0) && (0 < param_1)) {
    return 0;
  }
  *(void **)(*(int *)(this + 0x28) + 0x44) = pvVar2;
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDD90 */

void __thiscall objOBJ::FreeNormalList(objOBJ *this)

{
  if (*(int *)(this + 0x28) != 0) {
    apFree(*(void **)(*(int *)(this + 0x28) + 0x44));
    *(undefined4 *)(*(int *)(this + 0x28) + 0x44) = 0;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDDC0 */

int __thiscall objOBJ::AllocVertNormalList(objOBJ *this)

{
  void *pvVar1;
  int iVar2;
  objOBJ *poVar3;
  objOBJ *local_8;
  int local_4;
  
  poVar3 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_4 = 0;
    local_8 = *(objOBJ **)(this + 0x38);
    poVar3 = local_8;
  }
  if (*(int *)(this + 0x28) != 0) {
    iVar2 = *(int *)(this + 0x14);
    pvVar1 = apRealloc(*(void **)(*(int *)(this + 0x28) + 0x48),iVar2 * 0xc);
    if ((pvVar1 == (void *)0x0) && (0 < iVar2)) {
      return 0;
    }
    *(void **)(*(int *)(this + 0x28) + 0x48) = pvVar1;
  }
  while ((poVar3 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar3))))) {
    iVar2 = AllocVertNormalList(local_8);
    if (iVar2 == 0) {
      return 0;
    }
    local_8 = *(objOBJ **)(local_8 + 0x30);
    local_4 = 1;
  }
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDE50 */

int __thiscall objOBJ::AllocVertNormalList(objOBJ *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 0) {
    return iVar1;
  }
  pvVar2 = apRealloc(*(void **)(iVar1 + 0x48),param_1 * 0xc);
  if ((pvVar2 == (void *)0x0) && (0 < param_1)) {
    return 0;
  }
  *(void **)(*(int *)(this + 0x28) + 0x48) = pvVar2;
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDEA0 */

void __thiscall objOBJ::FreeVertNormalList(objOBJ *this)

{
  if (*(int *)(this + 0x28) != 0) {
    apFree(*(void **)(*(int *)(this + 0x28) + 0x48));
    *(undefined4 *)(*(int *)(this + 0x28) + 0x48) = 0;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDED0 */

int __thiscall objOBJ::AllocNormalListLCS(objOBJ *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 0) {
    return iVar1;
  }
  pvVar2 = apRealloc(*(void **)(iVar1 + 0x50),param_1 * 0xc);
  if ((pvVar2 == (void *)0x0) && (0 < param_1)) {
    return 0;
  }
  *(void **)(*(int *)(this + 0x28) + 0x50) = pvVar2;
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDF20 */

void __thiscall objOBJ::FreeNormalListLCS(objOBJ *this)

{
  if (*(int *)(this + 0x28) != 0) {
    if (((byte)this[4] & 0x10) == 0) {
      apFree(*(void **)(*(int *)(this + 0x28) + 0x50));
    }
    *(undefined4 *)(*(int *)(this + 0x28) + 0x50) = 0;
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffef;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDF50 */

int __thiscall objOBJ::AllocVertNormalListLCS(objOBJ *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 0) {
    return iVar1;
  }
  pvVar2 = apRealloc(*(void **)(iVar1 + 0x54),param_1 * 0xc);
  if ((pvVar2 == (void *)0x0) && (0 < param_1)) {
    return 0;
  }
  *(void **)(*(int *)(this + 0x28) + 0x54) = pvVar2;
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDFA0 */

void __thiscall objOBJ::FreeVertNormalListLCS(objOBJ *this)

{
  if (*(int *)(this + 0x28) != 0) {
    if (((byte)this[4] & 0x20) == 0) {
      apFree(*(void **)(*(int *)(this + 0x28) + 0x54));
    }
    *(undefined4 *)(*(int *)(this + 0x28) + 0x54) = 0;
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffdf;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BDFD0 */

int __thiscall objOBJ::AllocStateFaceList(objOBJ *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 0) {
    return iVar1;
  }
  puVar2 = (undefined4 *)apRealloc(*(void **)(iVar1 + 0x24),param_1);
  if ((puVar2 == (undefined4 *)0x0) && (0 < param_1)) {
    return 0;
  }
  puVar4 = puVar2;
  for (uVar3 = (uint)param_1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = param_1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(undefined4 **)(*(int *)(this + 0x28) + 0x24) = puVar2;
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BE030 */

void __thiscall objOBJ::FreeStateFaceList(objOBJ *this)

{
  if (*(int *)(this + 0x28) != 0) {
    apFree(*(void **)(*(int *)(this + 0x28) + 0x24));
    *(undefined4 *)(*(int *)(this + 0x28) + 0x24) = 0;
  }
  return;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BE060 */

int __thiscall objOBJ::AllocStateVertList(objOBJ *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 0) {
    return iVar1;
  }
  puVar2 = (undefined4 *)apRealloc(*(void **)(iVar1 + 0x20),param_1);
  if ((puVar2 == (undefined4 *)0x0) && (0 < param_1)) {
    return 0;
  }
  puVar4 = puVar2;
  for (uVar3 = (uint)param_1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = param_1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(undefined4 **)(*(int *)(this + 0x28) + 0x20) = puVar2;
  return 1;
}




/* from: engine:Obj_alloc.cpp
   addr: 004BE0C0 */

void __thiscall objOBJ::FreeStateVertList(objOBJ *this)

{
  if (*(int *)(this + 0x28) != 0) {
    apFree(*(void **)(*(int *)(this + 0x28) + 0x20));
    *(undefined4 *)(*(int *)(this + 0x28) + 0x20) = 0;
  }
  return;
}

