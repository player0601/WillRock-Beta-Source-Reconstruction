
/* from: libgscrypto:Blowfish.cpp
   addr: 005BD6F0 */

void __thiscall CBlowFish::CBlowFish(CBlowFish *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  CBlowFish *pCVar3;
  int iVar4;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined8 **)(this + 4) = &_vbtable_;
  }
  *(undefined ***)this = &_vftable_;
  puVar2 = &DAT_00600650;
  pCVar3 = this + 0x1050;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *(undefined4 *)pCVar3 = uVar1;
    pCVar3 = pCVar3 + 4;
  } while ((int)puVar2 < 0x600698);
  puVar2 = &DAT_00600698;
  pCVar3 = this + 0x1098;
  do {
    iVar4 = 0x100;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      *(undefined4 *)pCVar3 = uVar1;
      pCVar3 = pCVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  } while ((int)puVar2 < 0x601698);
  return;
}




/* from: libgscrypto:Blowfish.cpp
   addr: 005BD760
   addr: 005BD760 */

void * __thiscall CBlowFish::_scalar_deleting_destructor_(CBlowFish *this,uint param_1)

{
  ~CBlowFish(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:Blowfish.cpp
   addr: 005BD780 */

void __thiscall CBlowFish::~CBlowFish(CBlowFish *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  Blowfish_Reset(this);
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  ExceptionList = local_c;
  return;
}




/* from: libgscrypto:Blowfish.cpp
   addr: 005BD7D0 */

void __thiscall CBlowFish::Blowfish_Reset(CBlowFish *this)

{
  int iVar1;
  CBlowFish *pCVar2;
  
  pCVar2 = this + 8;
  for (iVar1 = 0x412; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + 4;
  }
  return;
}




/* from: libgscrypto:Blowfish.cpp
   addr: 005BD7F0 */

uint __thiscall CBlowFish::F(CBlowFish *this,uint param_1)

{
  return (*(int *)(this + (param_1 >> 0x18) * 4 + 0x50) +
          *(int *)(this + (param_1 >> 0x10 & 0xff) * 4 + 0x450) ^
         *(uint *)(this + (param_1 >> 8 & 0xff) * 4 + 0x850)) +
         *(int *)(this + (param_1 & 0xff) * 4 + 0xc50);
}




/* from: libgscrypto:Blowfish.cpp
   addr: 005BD850 */

void __thiscall CBlowFish::Blowfish_Encrypt(CBlowFish *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  CBlowFish *extraout_ECX;
  int iVar3;
  uint uVar4;
  CBlowFish *pCVar5;
  
  uVar2 = *param_1;
  pCVar5 = this + 8;
  iVar3 = 0x10;
  uVar4 = *param_2;
  do {
    uVar1 = uVar2 ^ *(uint *)pCVar5;
    uVar2 = F(this,uVar1);
    uVar2 = uVar2 ^ uVar4;
    pCVar5 = pCVar5 + 4;
    iVar3 = iVar3 + -1;
    this = extraout_ECX;
    uVar4 = uVar1;
  } while (iVar3 != 0);
  uVar4 = *(uint *)(extraout_ECX + 0x48);
  *param_1 = *(uint *)(extraout_ECX + 0x4c) ^ uVar1;
  *param_2 = uVar4 ^ uVar2;
  return;
}




/* from: libgscrypto:Blowfish.cpp
   addr: 005BD8A0 */

void __thiscall CBlowFish::Blowfish_Decrypt(CBlowFish *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  CBlowFish *extraout_ECX;
  int iVar3;
  uint uVar4;
  CBlowFish *pCVar5;
  
  uVar2 = *param_1;
  pCVar5 = this + 0x4c;
  iVar3 = 0x10;
  uVar4 = *param_2;
  do {
    uVar1 = uVar2 ^ *(uint *)pCVar5;
    uVar2 = F(this,uVar1);
    uVar2 = uVar2 ^ uVar4;
    pCVar5 = pCVar5 + -4;
    iVar3 = iVar3 + -1;
    this = extraout_ECX;
    uVar4 = uVar1;
  } while (iVar3 != 0);
  uVar4 = *(uint *)(extraout_ECX + 0xc);
  *param_1 = *(uint *)(extraout_ECX + 8) ^ uVar1;
  *param_2 = uVar4 ^ uVar2;
  return;
}




/* from: libgscrypto:Blowfish.cpp
   addr: 005BD8F0 */

void __thiscall CBlowFish::Blowfish_Init(CBlowFish *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  CBlowFish *pCVar6;
  CBlowFish *pCVar7;
  CBlowFish *pCVar8;
  int local_4;
  
  uVar1 = param_2;
  iVar5 = 4;
  pCVar7 = this + 0x1098;
  do {
    iVar5 = iVar5 + -1;
    pCVar6 = pCVar7;
    pCVar8 = pCVar7 + -0x1048;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pCVar8 = *(undefined4 *)pCVar6;
      pCVar6 = pCVar6 + 4;
      pCVar8 = pCVar8 + 4;
    }
    pCVar7 = pCVar7 + 0x400;
  } while (iVar5 != 0);
  uVar2 = 0;
  local_4 = 0x12;
  pCVar7 = this + 8;
  do {
    uVar4 = 0;
    param_2 = 4;
    do {
      uVar4 = uVar4 << 8 | (uint)param_1[uVar2];
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) {
        uVar2 = 0;
      }
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    *(uint *)pCVar7 = *(uint *)(pCVar7 + 0x1048) ^ uVar4;
    local_4 = local_4 + -1;
    pCVar7 = pCVar7 + 4;
  } while (local_4 != 0);
  pCVar7 = this + 0xc;
  param_2 = 0;
  param_1 = (uchar *)0x0;
  iVar5 = 9;
  do {
    Blowfish_Encrypt(this,&param_2,(uint *)&param_1);
    *(uint *)(pCVar7 + -4) = param_2;
    *(uchar **)pCVar7 = param_1;
    pCVar7 = pCVar7 + 8;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  pCVar7 = this + 0x54;
  iVar5 = 4;
  do {
    iVar3 = 0x80;
    do {
      Blowfish_Encrypt(this,&param_2,(uint *)&param_1);
      *(uint *)(pCVar7 + -4) = param_2;
      *(uchar **)pCVar7 = param_1;
      pCVar7 = pCVar7 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

