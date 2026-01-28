
/* from: libgscrypto:Misc.cpp
   addr: 005BD5B0 */

uint Parity(__uint64 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x20;
  do {
    uVar1 = aullshr();
    param_1._0_4_ = (uint)param_1 ^ uVar1;
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  return (uint)param_1 & 1;
}




/* from: libgscrypto:Misc.cpp
   addr: 005BD5E0 */

uint BytePrecision(__uint64 param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 8;
  iVar1 = 0x38;
  do {
    lVar3 = aullshr();
    if (lVar3 != 0) {
      return uVar2;
    }
    iVar1 = iVar1 + -8;
    uVar2 = uVar2 - 1;
  } while (iVar1 != -8);
  return uVar2;
}




/* from: libgscrypto:Misc.cpp
   addr: 005BD620 */

uint BitPrecision(__uint64 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    uVar1 = 0;
    uVar3 = 0x40;
    do {
      uVar2 = uVar3 + uVar1 >> 1;
      lVar4 = aullshr();
      if (lVar4 != 0) {
        uVar1 = uVar2;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (1 < uVar2 - uVar1);
    return uVar2;
  }
  return 0;
}




/* from: libgscrypto:Misc.cpp
   addr: 005BD670 */

__uint64 Crop(__uint64 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < 0x40) {
    uVar1 = (1 << ((byte)param_2 & 0x1f)) - 1;
    return CONCAT44((int)uVar1 >> 0x1f & param_1._4_4_,uVar1 & (uint)param_1);
  }
  return param_1;
}




/* from: libgscrypto:Misc.cpp
   addr: 005BD6A0 */

void NumberToByteString(__uint64 param_1,uchar *param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uchar *puVar5;
  
  puVar5 = param_2;
  for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar5[0] = '\0';
    puVar5[1] = '\0';
    puVar5[2] = '\0';
    puVar5[3] = '\0';
    puVar5 = puVar5 + 4;
  }
  for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = '\0';
    puVar5 = puVar5 + 1;
  }
  if (param_1 != 0) {
    do {
      uVar4 = (uint)param_1;
      if (param_3 == 0) {
        return;
      }
      param_3 = param_3 - 1;
      param_2[param_3] = (uchar)param_1;
      uVar3 = param_1 & 0xff00000000;
      uVar2 = param_1 >> 8;
      uVar1 = param_1 >> 8;
      param_1 = param_1 >> 8;
    } while (((int)(uVar2 >> 0x20) != 0) || (param_1 = uVar1, uVar4 >> 8 != 0 || uVar3 != 0));
  }
  return;
}

