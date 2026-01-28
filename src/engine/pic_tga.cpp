
/* from: engine:pic_tga.cpp
   addr: 004F2C90 */

int __fastcall pctReadTGAHdr(char *param_1,pctHEADER *param_2,pctEXTRA_DATA *param_3)

{
  FILE *_File;
  undefined1 local_14 [12];
  ushort local_8;
  undefined2 uStack_6;
  char local_4;
  
  _File = fopen(param_1,&s_rb);
  if (_File == (FILE *)0x0) {
    return 0;
  }
  fread(local_14,0x12,1,_File);
  fclose(_File);
  *(undefined4 *)param_2 = 0x50494354;
  *(undefined4 *)(param_2 + 0xc) = 1;
  *(uint *)(param_2 + 4) = (uint)local_8;
  *(uint *)(param_2 + 8) = CONCAT12(local_4,uStack_6) & 0xffff;
  if (local_4 == '\x18') {
    *(undefined4 *)(param_2 + 0x10) = 2;
    return 1;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  return 1;
}




/* from: engine:pic_tga.cpp
   addr: 004F2D30 */

pctPICTURE * __fastcall pctReadTGA(char *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FILE *_File;
  pctPICTURE *ppVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  pctPICTURE *ppVar11;
  uint uVar12;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  int *piVar16;
  int local_80;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  pctPIXEL local_30 [4];
  pctPIXEL local_2c [4];
  undefined4 local_28;
  ushort local_1c;
  undefined2 uStack_1a;
  char local_18;
  byte local_17;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  _File = fopen(param_1,&s_rb);
  if (_File != (FILE *)0x0) {
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    fread(&local_28,0x12,1,_File);
    if (((char)(local_28 >> 8) == '\0') && ((local_28._2_1_ == '\n' || (local_28._2_1_ == '\x02'))))
    {
      if ((char)local_28 != '\0') {
        fseek(_File,local_28 & 0xff,1);
      }
      local_10 = (uint)local_1c;
      local_c = CONCAT12(local_18,uStack_1a) & 0xffff;
      local_4 = 0;
      ppVar4 = pctCreate((pctHEADER *)&local_14);
      uVar3 = local_c;
      uVar2 = local_10;
      if (ppVar4 != (pctPICTURE *)0x0) {
        iVar13 = *(int *)(ppVar4 + 0x1c);
        local_60 = 0;
        if (local_c != 0) {
          local_70 = 0;
          do {
            local_80 = local_70;
            if ((local_17 & 0x10) == 0) {
              local_80 = ((uVar3 - local_60) + -1) * uVar2;
            }
            uVar12 = 0;
            if (uVar2 != 0) {
              do {
                if (local_28._2_1_ == '\n') {
                  iVar5 = getc(_File);
                  uVar14 = ((byte)iVar5 & 0x7f) + 1;
                  if ((char)(byte)iVar5 < '\0') {
                    iVar5 = getc(_File);
                    iVar6 = getc(_File);
                    iVar7 = getc(_File);
                    local_6c = 0xff;
                    if (local_18 == ' ') {
                      local_6c = getc(_File);
                    }
                    if (uVar14 != 0) {
                      uVar15 = (uint)uVar14;
                      iVar1 = uVar12 + local_80;
                      uVar12 = uVar12 + uVar15;
                      piVar16 = (int *)(iVar13 + iVar1 * 4);
                      for (; uVar15 != 0; uVar15 = uVar15 - 1) {
                        *piVar16 = ((iVar5 * 0x100 + iVar6) * 0x100 + iVar7) * 0x100 + local_6c;
                        piVar16 = piVar16 + 1;
                      }
                    }
                  }
                  else if (uVar14 != 0) {
                    uVar15 = (uint)uVar14;
                    iVar5 = uVar12 + local_80;
                    uVar12 = uVar12 + uVar15;
                    piVar16 = (int *)(iVar13 + iVar5 * 4);
                    do {
                      uVar8 = getc(_File);
                      uVar9 = getc(_File);
                      uVar10 = getc(_File);
                      local_68 = 0xff;
                      if (local_18 == ' ') {
                        local_68 = getc(_File);
                        local_68 = local_68 & 0xff;
                      }
                      *piVar16 = (((uVar8 & 0xff) * 0x100 + (uVar9 & 0xff)) * 0x100 +
                                 (uVar10 & 0xff)) * 0x100 + local_68;
                      piVar16 = piVar16 + 1;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                }
                else {
                  uVar15 = getc(_File);
                  uVar8 = getc(_File);
                  uVar9 = getc(_File);
                  local_64 = 0xff;
                  if (local_18 == ' ') {
                    local_64 = getc(_File);
                    local_64 = local_64 & 0xff;
                  }
                  iVar5 = uVar12 + local_80;
                  uVar12 = uVar12 + 1;
                  *(uint *)(iVar13 + iVar5 * 4) =
                       (((uVar15 & 0xff) * 0x100 + (uVar8 & 0xff)) * 0x100 + (uVar9 & 0xff)) * 0x100
                       + local_64;
                }
              } while (uVar12 < uVar2);
            }
            local_60 = local_60 + 1;
            local_70 = local_70 + uVar2;
          } while (local_60 < uVar3);
        }
        fclose(_File);
        ppVar11 = ppVar4;
        if (local_18 == '\x18') {
          ppVar11 = pctConvert(ppVar4,2);
          pctDestroy(ppVar4);
        }
        if (((local_17 & 0x20) != 0) && (iVar13 = 0, 0 < *(int *)(ppVar11 + 4))) {
          iVar5 = *(int *)(ppVar11 + 8) / 2;
          do {
            iVar6 = 0;
            if (0 < iVar5) {
              do {
                pctGetPixel(ppVar11,iVar13,iVar6,0,local_2c);
                pctGetPixel(ppVar11,iVar13,(*(int *)(ppVar11 + 8) - iVar6) + -1,0,local_30);
                pctSetPixel(ppVar11,iVar13,iVar6,0,local_30);
                pctSetPixel(ppVar11,iVar13,(*(int *)(ppVar11 + 8) - iVar6) + -1,0,local_2c);
                iVar6 = iVar6 + 1;
                iVar5 = *(int *)(ppVar11 + 8) / 2;
              } while (iVar6 < iVar5);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(ppVar11 + 4));
        }
        return ppVar11;
      }
    }
    else {
      fclose(_File);
    }
  }
  return (pctPICTURE *)0x0;
}

