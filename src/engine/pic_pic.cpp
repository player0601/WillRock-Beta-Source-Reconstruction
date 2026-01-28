
/* from: engine:pic_pic.cpp
   addr: 004F3130 */

int __fastcall pctReadPICHdr(char *param_1,pctHEADER *param_2,pctEXTRA_DATA *param_3)

{
  int iVar1;
  undefined **local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  picHEADER local_80 [92];
  short local_24;
  short local_22;
  undefined4 local_6;
  
  local_1a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_19c = 0;
  local_84 = 0;
  local_1a4 = &fioFILE_DISK::_vftable_;
  iVar1 = fioFILE_DISK::Init((fioFILE_DISK *)&local_1a4,param_1,9);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _picReadHeader((fioFILE *)&local_1a4,local_80);
  if (iVar1 == 0) {
    return 0;
  }
  fioFILE_DISK::Term((fioFILE_DISK *)&local_1a4);
  *(int *)(param_2 + 4) = (int)local_24;
  *(undefined4 *)param_2 = 0x50494354;
  *(undefined4 *)(param_2 + 0xc) = 1;
  *(int *)(param_2 + 8) = (int)local_22;
  *(undefined4 *)(param_2 + 0x10) = local_6;
  return 1;
}




/* from: engine:pic_pic.cpp
   addr: 004F31F0 */

pctPICTURE * __fastcall pctReadPIC(char *param_1)

{
  short sVar1;
  int iVar2;
  pctPICTURE *ppVar3;
  picPACKETHEADER *ppVar4;
  int iVar5;
  pctHEADER local_1b8 [4];
  int local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  picHEADER local_1a4 [92];
  short local_148;
  short local_146;
  undefined4 local_144;
  short local_140;
  short local_13c;
  picPACKETHEADER local_13a [2];
  picPACKETHEADER local_138 [14];
  undefined4 local_12a;
  undefined **local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_120 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_11c = 0;
  local_4 = 0;
  local_124 = &fioFILE_DISK::_vftable_;
  iVar2 = fioFILE_DISK::Init((fioFILE_DISK *)&local_124,param_1,9);
  if (iVar2 == 0) {
    return (pctPICTURE *)0x0;
  }
  iVar2 = _picReadHeader((fioFILE *)&local_124,local_1a4);
  if (iVar2 == 0) {
    return (pctPICTURE *)0x0;
  }
  ppVar3 = (pctPICTURE *)0x0;
  local_144 = 0x3f800000;
  if (local_140 == 3) {
    if (0 < local_13c) {
      do {
        if (local_138[(int)ppVar3 * 4] == (picPACKETHEADER)0x0) {
          return (pctPICTURE *)0x0;
        }
        ppVar3 = ppVar3 + 1;
      } while ((int)ppVar3 < (int)local_13c);
    }
    local_1b0 = (int)local_146;
    local_1b4 = (int)local_148;
    local_1a8 = local_12a;
    local_1ac = 0;
    ppVar3 = pctCreate(local_1b8);
    if (ppVar3 == (pctPICTURE *)0x0) {
      return (pctPICTURE *)0x0;
    }
    iVar2 = 0;
    sVar1 = local_13c;
    if (0 < local_1b0) {
      do {
        iVar5 = 0;
        if (0 < sVar1) {
          ppVar4 = local_13a;
          do {
            if (ppVar4[2] == (picPACKETHEADER)0x2) {
              _picReadLineCompressed((fioFILE *)&local_124,ppVar3,ppVar4,iVar2);
              sVar1 = local_13c;
            }
            iVar5 = iVar5 + 1;
            ppVar4 = ppVar4 + 4;
          } while (iVar5 < sVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_1b0);
    }
    fioFILE_DISK::Term((fioFILE_DISK *)&local_124);
  }
  return ppVar3;
}




/* from: engine:pic_pic.cpp
   addr: 004F3360 */

int __fastcall _picReadHeader(fioFILE *param_1,picHEADER *param_2)

{
  picHEADER *ppVar1;
  picHEADER pVar2;
  short sVar3;
  int iVar4;
  byte bVar5;
  
  (**(code **)(*(int *)param_1 + 0x14))(param_2,4,4);
  if (*(int *)param_2 == 0x5380f634) {
    (**(code **)(*(int *)param_1 + 0x14))(param_2 + 4,4,4);
    (**(code **)(*(int *)param_1 + 0x14))(param_2 + 8,0x50,1);
    (**(code **)(*(int *)param_1 + 0x14))(param_2 + 0x58,4,1);
    iVar4 = strncmp((char *)(param_2 + 0x58),s_PICT,4);
    if (((iVar4 == 0) &&
        ((**(code **)(*(int *)param_1 + 0x14))(param_2 + 0x5c,2,2), 0 < *(short *)(param_2 + 0x5c)))
       && ((**(code **)(*(int *)param_1 + 0x14))(param_2 + 0x5e,2,2), 0 < *(short *)(param_2 + 0x5e)
          )) {
      (**(code **)(*(int *)param_1 + 0x14))(param_2 + 0x60,4,4);
      (**(code **)(*(int *)param_1 + 0x14))(param_2 + 100,2,2);
      sVar3 = *(short *)(param_2 + 100);
      if ((-1 < sVar3) && (sVar3 < 4)) {
        (**(code **)(*(int *)param_1 + 0x14))(param_2 + 0x66,2,2);
        *(undefined2 *)(param_2 + 0x68) = 0;
        bVar5 = 0;
        do {
          ppVar1 = param_2 + *(short *)(param_2 + 0x68) * 4 + 0x6a;
          (**(code **)(*(int *)param_1 + 0x14))(ppVar1,1,1);
          if ((*ppVar1 != (picHEADER)0x0) && (*ppVar1 != (picHEADER)0x1)) {
            return 0;
          }
          (**(code **)(*(int *)param_1 + 0x14))(ppVar1 + 1,1,1);
          if (ppVar1[1] != (picHEADER)0x8) {
            return 0;
          }
          (**(code **)(*(int *)param_1 + 0x14))(ppVar1 + 2,1,1);
          pVar2 = ppVar1[2];
          if ((pVar2 != (picHEADER)0x0) && (pVar2 != (picHEADER)0x2)) {
            return 0;
          }
          (**(code **)(*(int *)param_1 + 0x14))(ppVar1 + 3,1,1);
          if ((byte)ppVar1[3] < 0x10) {
            return 0;
          }
          bVar5 = bVar5 | (byte)param_2[*(short *)(param_2 + 0x68) * 4 + 0x6d];
          sVar3 = *(short *)(param_2 + 0x68) + 1;
          *(short *)(param_2 + 0x68) = sVar3;
        } while (param_2[sVar3 * 4 + 0x66] != (picHEADER)0x0);
        if (bVar5 == 0xe0) {
          *(undefined4 *)(param_2 + 0x7a) = 2;
          return 1;
        }
        if (bVar5 == 0xf0) {
          *(undefined4 *)(param_2 + 0x7a) = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}




/* from: engine:pic_pic.cpp
   addr: 004F3520 */

int __fastcall
_picReadLineCompressed(fioFILE *param_1,pctPICTURE *param_2,picPACKETHEADER *param_3,int param_4)

{
  picPACKETHEADER pVar1;
  int iVar2;
  int iVar3;
  pctPIXEL pStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  int local_18;
  pctPIXEL pStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  int iStack_10;
  uint local_c;
  uint uStack_8;
  uint uStack_4;
  
  local_18 = 0;
  if (0 < *(int *)(param_2 + 4)) {
    do {
      (**(code **)(*(int *)param_1 + 0x14))(&local_c,1,1);
      if ((byte)local_c < 0x80) {
        iStack_10 = 0;
        if ((local_c & 0xff) != 0xffffffff) {
          do {
            iVar2 = (int)(short)local_18;
            if (*(int *)(param_2 + 4) <= iVar2) {
              return 0;
            }
            pctGetPixel(param_2,iVar2,param_4,0,&pStack_1c);
            if ((char)param_3[3] < '\0') {
              (**(code **)(*(int *)param_1 + 0x14))(&uStack_1b,1,1);
            }
            if (((byte)param_3[3] & 0x40) != 0) {
              (**(code **)(*(int *)param_1 + 0x14))(&uStack_1a,1,1);
            }
            if (((byte)param_3[3] & 0x20) != 0) {
              (**(code **)(*(int *)param_1 + 0x14))(&uStack_19,1,1);
            }
            if (((byte)param_3[3] & 0x10) != 0) {
              (**(code **)(*(int *)param_1 + 0x14))(&pStack_1c,1,1);
            }
            pctSetPixel(param_2,iVar2,param_4,0,&pStack_1c);
            local_18 = local_18 + 1;
            iStack_10 = iStack_10 + 1;
          } while ((int)(short)iStack_10 < (int)((local_c & 0xff) + 1));
        }
      }
      else {
        if ((byte)local_c == 0x80) {
          (**(code **)(*(int *)param_1 + 0x14))(&uStack_8,1,1);
          (**(code **)(*(int *)param_1 + 0x14))(&iStack_10,1,1);
          iVar2 = (uStack_8 & 0xff) * 0x100 + (uStack_4 & 0xff);
        }
        else {
          iVar2 = (local_c & 0xff) - 0x7f;
        }
        if ((char)param_3[3] < '\0') {
          (**(code **)(*(int *)param_1 + 0x14))(&uStack_1b,1,1);
        }
        if (((byte)param_3[3] & 0x40) != 0) {
          (**(code **)(*(int *)param_1 + 0x14))(&uStack_1a,1,1);
        }
        if (((byte)param_3[3] & 0x20) != 0) {
          (**(code **)(*(int *)param_1 + 0x14))(&uStack_19,1,1);
        }
        if (((byte)param_3[3] & 0x10) != 0) {
          (**(code **)(*(int *)param_1 + 0x14))(&pStack_1c,1,1);
        }
        iStack_10 = 0;
        if (0 < iVar2) {
          do {
            iVar3 = (int)(short)local_18;
            if (*(int *)(param_2 + 4) <= iVar3) {
              return 0;
            }
            pctGetPixel(param_2,iVar3,param_4,0,&pStack_14);
            pVar1 = param_3[3];
            if ((char)pVar1 < '\0') {
              uStack_13 = (undefined1)((uint)_pStack_1c >> 8);
            }
            if (((byte)pVar1 & 0x40) != 0) {
              uStack_12 = (undefined1)((uint)_pStack_1c >> 0x10);
            }
            if (((byte)pVar1 & 0x20) != 0) {
              uStack_11 = (undefined1)((uint)_pStack_1c >> 0x18);
            }
            if (((byte)pVar1 & 0x10) != 0) {
              pStack_14 = SUB41(_pStack_1c,0);
            }
            pctSetPixel(param_2,iVar3,param_4,0,&pStack_14);
            local_18 = local_18 + 1;
            iStack_10 = iStack_10 + 1;
          } while ((short)iStack_10 < iVar2);
        }
      }
    } while ((int)(short)local_18 < *(int *)(param_2 + 4));
  }
  return 1;
}

