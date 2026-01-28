
/* from: engine:pic_bmp.cpp
   addr: 004F2910 */

int __fastcall pctReadBMPHdr(char *param_1,pctHEADER *param_2,pctEXTRA_DATA *param_3)

{
  HANDLE h;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  short sStack_6;
  
  h = LoadImageA((HINSTANCE)0x0,param_1,0,0,0,0x2010);
  if (h == (HANDLE)0x0) {
    return 0;
  }
  GetObjectA(h,0x18,auStack_18);
  DeleteObject(h);
  *(undefined4 *)param_2 = 0x50494354;
  *(undefined4 *)(param_2 + 0xc) = 1;
  *(undefined4 *)(param_2 + 4) = uStack_14;
  *(undefined4 *)(param_2 + 8) = uStack_10;
  if (sStack_6 == 0x10) {
    *(undefined4 *)(param_2 + 0x10) = 5;
    return 1;
  }
  *(undefined4 *)(param_2 + 0x10) = 2;
  return 1;
}




/* from: engine:pic_bmp.cpp
   addr: 004F2990 */

pctPICTURE * __fastcall pctReadBMP(char *param_1)

{
  HANDLE h;
  pctPICTURE *ppVar1;
  HDC hdc;
  COLORREF CVar2;
  int iVar3;
  int y;
  int x;
  pctPIXEL pStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  int iStack_14;
  int iStack_10;
  uint uStack_6;
  
  h = LoadImageA((HINSTANCE)0x0,param_1,0,0,0,0x2010);
  ppVar1 = (pctPICTURE *)0x0;
  if (h != (HANDLE)0x0) {
    uStack_2c = 0;
    iStack_28 = 0;
    iStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    GetObjectA(h,0x18,auStack_18);
    iStack_24 = iStack_10;
    iStack_28 = iStack_14;
    if ((uStack_6 & 0xffff) == 0x10) {
      uStack_1c = 5;
    }
    else if ((uStack_6 & 0xffff) == 0x18) {
      uStack_1c = 2;
    }
    ppVar1 = pctCreate((pctHEADER *)&uStack_2c);
    if (ppVar1 == (pctPICTURE *)0x0) {
      return (pctPICTURE *)0x0;
    }
    hdc = CreateCompatibleDC((HDC)0x0);
    if (hdc == (HDC)0x0) {
      return (pctPICTURE *)0x0;
    }
    SelectObject(hdc,h);
    x = 0;
    iVar3 = iStack_24;
    if (0 < iStack_28) {
      do {
        y = 0;
        if (0 < iVar3) {
          do {
            CVar2 = GetPixel(hdc,x,y);
            uStack_2e = (undefined1)(CVar2 >> 8);
            uStack_2f = (undefined1)CVar2;
            uStack_2d = (undefined1)(CVar2 >> 0x10);
            pctSetPixel(ppVar1,x,y,0,&pStack_30);
            y = y + 1;
            iVar3 = iStack_24;
          } while (y < iStack_24);
        }
        x = x + 1;
      } while (x < iStack_28);
    }
    DeleteDC(hdc);
  }
  return ppVar1;
}




/* from: engine:pic_bmp.cpp
   addr: 004F2AB0 */

int __fastcall pctSaveBMP(char *param_1,pctPICTURE *param_2)

{
  int iVar1;
  void *_Str;
  int iVar2;
  size_t _Size;
  pctPIXEL local_48;
  undefined1 local_47;
  byte local_46;
  char local_45;
  FILE *local_44;
  int local_40;
  pctPICTURE *local_3c;
  undefined1 local_38;
  undefined1 local_37;
  int local_36;
  undefined2 local_32;
  undefined2 local_30;
  undefined4 local_2e;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_3c = param_2;
  local_44 = fopen(param_1,&s_wb);
  if (local_44 == (FILE *)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 4);
  local_40 = *(int *)(param_2 + 8);
  iVar2 = local_40 * iVar1;
  _Size = 0;
  _Str = operator_new(iVar2 * 3);
  local_36 = iVar2 * 3 + 0x36;
  local_10 = 10000;
  local_c = 10000;
  local_38 = 0x42;
  local_37 = 0x4d;
  local_32 = 0;
  local_30 = 0;
  local_2e = 0x36;
  local_28 = 0x28;
  local_20 = local_40;
  local_1c = 1;
  local_1a = 0x18;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  local_4 = 0;
  local_24 = iVar1;
  fwrite(&local_38,0xe,1,local_44);
  fwrite(&local_28,0x28,1,local_44);
  iVar2 = pctGetBPP((pctHEADER *)local_3c);
  iVar2 = iVar2 * 8;
  if (((iVar2 == 0x20) || (iVar2 == 0)) || (iVar2 == 0x18)) {
    while (local_40 = local_40 + -1, -1 < local_40) {
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          pctGetPixel(local_3c,iVar2,local_40,0,&local_48);
          *(char *)((int)_Str + _Size) = local_45;
          *(byte *)((int)_Str + _Size + 1) = local_46;
          *(undefined1 *)((int)_Str + _Size + 2) = local_47;
          _Size = _Size + 3;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
    }
  }
  else {
    if (iVar2 != 0x10) goto LAB_004f2c6e;
    while (local_40 = local_40 + -1, -1 < local_40) {
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          pctGetPixel(local_3c,iVar2,local_40,0,&local_48);
          *(char *)((int)_Str + _Size) = local_45 << 3;
          *(byte *)((int)_Str + _Size + 1) = (local_46 >> 5) << 2;
          *(undefined1 *)((int)_Str + _Size + 2) = 0;
          _Size = _Size + 3;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
    }
  }
  fwrite(_Str,_Size,1,local_44);
LAB_004f2c6e:
  fclose(local_44);
  operator_delete(_Str);
  return 1;
}

