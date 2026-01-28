
/* from: engine:select.cpp
   addr: 004E0030 */

int __thiscall selSEL::Init(selSEL *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(int *)(this + 0x44) = param_1;
  puVar1 = (undefined4 *)operator_new(param_1 * 0x44);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1;
    if (-1 < param_1 + -1) {
      do {
        *puVar2 = 0;
        *(undefined1 *)(puVar2 + 1) = 0;
        param_1 = param_1 + -1;
        puVar2 = puVar2 + 0x11;
      } while (param_1 != 0);
      *(undefined4 **)(this + 0x48) = puVar1;
      return (uint)(puVar1 != (undefined4 *)0x0);
    }
  }
  *(undefined4 **)(this + 0x48) = puVar1;
  return (uint)(puVar1 != (undefined4 *)0x0);
}




/* from: engine:select.cpp
   addr: 004E0090 */

int __thiscall selSEL::Find(selSEL *this,char *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  if (((byte)*this & 1) == 0) {
    iVar4 = 0;
    if (0 < *(int *)(this + 0x44)) {
      iVar3 = 0;
      do {
        iVar1 = apNAME::IsName((apNAME *)(*(int *)(this + 0x48) + 4 + iVar3),param_1);
        if (iVar1 != 0) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x44;
      } while (iVar4 < *(int *)(this + 0x44));
      return -1;
    }
  }
  else {
    pvVar2 = bsearch(param_1,*(void **)(this + 0x48),*(size_t *)(this + 0x44),0x44,_selSearchSelObj)
    ;
    if (pvVar2 != (void *)0x0) {
      return ((int)pvVar2 - *(int *)(this + 0x48)) / 0x44;
    }
  }
  return -1;
}




/* from: engine:select.cpp
   addr: 004E0130 */

void __thiscall selSEL::Prepare(selSEL *this)

{
  *(uint *)this = *(uint *)this | 1;
  qsort(*(void **)(this + 0x48),*(size_t *)(this + 0x44),0x44,_selCompSelObj);
  return;
}




/* from: engine:select.cpp
   addr: 004E0150 */

int __cdecl _selCompSelObj(void *param_1,void *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = (byte *)((int)param_2 + 4);
  pbVar2 = (byte *)((int)param_1 + 4);
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar4) - (uint)(bVar4 != 0);
}




/* from: engine:select.cpp
   addr: 004E01A0 */

int __cdecl _selSearchSelObj(void *param_1,void *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  
  pbVar2 = (byte *)((int)param_2 + 4);
  while( true ) {
                    /* WARNING: Load size is inaccurate */
    bVar1 = *param_1;
    bVar3 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = *(byte *)((int)param_1 + 1);
    bVar3 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    param_1 = (void *)((int)param_1 + 2);
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar3) - (uint)(bVar3 != 0);
}

