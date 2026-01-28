
/* from: engine:pic_decompress.cpp
   addr: 004F37C0 */

void __fastcall
pctGetDXTPixel(pctPICTURE *param_1,int param_2,int param_3,int param_4,pctPIXEL *param_5)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uchar *puVar11;
  uint uVar12;
  int *piVar13;
  pctPICTURE *local_4;
  
  iVar2 = param_3;
  iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + -8 + (param_4 + 2) * 4) + *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 4) + 3 >> ((byte)(param_4 + 2) & 0x1f);
  if (*(int *)(param_1 + 0x10) - 0xcU < 6) {
    iVar7 = param_2 >> 2;
    iVar6 = param_3 >> 2;
    local_4 = param_1;
    switch(*(int *)(param_1 + 0x10)) {
    default:
      puVar1 = (ushort *)(iVar10 + (iVar6 * iVar4 + iVar7) * 8);
      if (DAT_00940c00 != puVar1) {
        DAT_00940c04 = *(undefined4 *)puVar1;
        DAT_00940c00 = puVar1;
        DAT_00940c08 = pctLineCombColor565(*puVar1,1,puVar1[1],1,2);
        DAT_00940c0a = pctLineCombColor565((ushort)DAT_00940c04,2,DAT_00940c04._2_2_,1,3);
        DAT_00940c0c = pctLineCombColor565((ushort)DAT_00940c04,1,DAT_00940c04._2_2_,2,3);
      }
      piVar13 = &param_3;
      bVar3 = *(byte *)((iVar2 & 3U) + 4 + (int)puVar1);
      break;
    case 0xe:
    case 0x10:
      return;
    case 0xf:
      uVar8 = param_3 & 3;
      iVar10 = (iVar6 * iVar4 + iVar7) * 0x10 + iVar10;
      param_3 = CONCAT31(param_3._1_3_,
                         (*(byte *)(iVar10 + (param_2 >> 1 & 1U) + uVar8 * 2) &
                         (&DAT_005f6968)[param_2 & 1U]) <<
                         ((byte)*(undefined4 *)(&DAT_005f696c + (param_2 & 1U) * 4) & 0x1f));
      UpdateCache1((uchar *)(iVar10 + 8));
      piVar13 = &param_4;
      bVar3 = *(byte *)(uVar8 + 0xc + iVar10);
      break;
    case 0x11:
      uVar12 = param_2 & 3;
      puVar11 = (uchar *)((iVar6 * iVar4 + iVar7) * 0x10 + iVar10);
      UpdateCache5(puVar11);
      uVar9 = iVar2 & 3;
      uVar8 = (uVar12 + uVar9 * 4) * 3;
      uVar5 = uVar8 / 3 & 7;
      param_3 = CONCAT31(param_3._1_3_,
                         *(undefined1 *)
                          ((int)&DAT_00940c14 +
                          (uint)(byte)(((&DAT_005f6974)[uVar5] & puVar11[((int)uVar8 >> 3) + 2]) >>
                                       ((&DAT_005f6984)[uVar5 * 4] & 0x1f) |
                                      ((&DAT_005f697c)[uVar5] & (puVar11 + ((int)uVar8 >> 3) + 2)[1]
                                      ) << ((byte)*(undefined4 *)(&DAT_005f69a4 + uVar5 * 4) & 0x1f)
                                      )));
      UpdateCache1(puVar11 + 8);
      pctGetPairByCode((puVar11[uVar9 + 0xc] & (&DAT_005f6954)[uVar12]) >>
                       ((&DAT_005f6958)[uVar12 * 4] & 0x1f),(ushort *)&local_4,(uchar *)&param_4);
      pctDecode((ushort)local_4,(uchar)param_3._0_1_,param_5);
      return;
    }
    pctGetPairByCode((bVar3 & (&DAT_005f6954)[param_2 & 3U]) >>
                     ((&DAT_005f6958)[(param_2 & 3U) * 4] & 0x1f),(ushort *)&local_4,
                     (uchar *)piVar13);
    *param_5 = param_3._0_1_;
    param_5[1] = SUB41((((uint)local_4 >> 0xb & 0x1f) * 0xff) / 0x1f,0);
    param_5[2] = SUB41((((uint)local_4 >> 5 & 0x3f) * 0xff) / 0x3f,0);
    param_5[3] = SUB41((((uint)local_4 & 0x1f) * 0xff) / 0x1f,0);
    return;
  }
  return;
}




/* from: engine:pic_decompress.cpp
   addr: 004F3A80 */

ushort __fastcall
pctLineCombColor565(ushort param_1,uint param_2,ushort param_3,uint param_4,uint param_5)

{
  return (ushort)((((param_3 >> 5 & 0x3f) * param_4 + (param_1 >> 5 & 0x3f) * param_2) / param_5 &
                   0x3f | (((param_3 >> 0xb) * param_4 + (param_1 >> 0xb) * param_2) / param_5 &
                          0x1f) << 6) << 5) |
         (ushort)(((param_3 & 0x1f) * param_4 + (param_1 & 0x1f) * param_2) / param_5) & 0x1f;
}




/* from: engine:pic_decompress.cpp
   addr: 004F3B10 */

void __fastcall UpdateCache1(uchar *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (DAT_00940c00 != param_1) {
    uVar1 = *(ushort *)(param_1 + 2);
    DAT_00940c04 = *(uint *)param_1;
    uVar3 = uVar1 >> 5 & 0x3f;
    uVar6 = (DAT_00940c04 & 0xffff) >> 5 & 0x3f;
    uVar4 = DAT_00940c04 & 0x1f;
    uVar7 = (uint)(uVar1 >> 0xb);
    uVar5 = (DAT_00940c04 & 0xffff) >> 0xb;
    uVar2 = uVar1 & 0x1f;
    DAT_00940c08 = (ushort)(((uVar5 + uVar7 >> 1) << 6 | uVar6 + uVar3 >> 1) << 5) |
                   (ushort)(uVar4 + uVar2 >> 1);
    DAT_00940c0a = (ushort)(((uVar7 + uVar5 * 2) / 3 << 6 | (uVar3 + uVar6 * 2) / 3 & 0x3f) << 5) |
                   (ushort)((uVar2 + uVar4 * 2) / 3) & 0x1f;
    DAT_00940c0c = (ushort)(((uVar5 + uVar7 * 2) / 3 << 6 | (uVar6 + uVar3 * 2) / 3 & 0x3f) << 5) |
                   (ushort)((uVar4 + uVar2 * 2) / 3) & 0x1f;
    DAT_00940c00 = param_1;
  }
  return;
}




/* from: engine:pic_decompress.cpp
   addr: 004F3C40 */

void __fastcall pctGetPairByCode(uchar param_1,ushort *param_2,uchar *param_3)

{
  *param_3 = 0xff;
  if (DAT_00940c04._2_2_ < (ushort)DAT_00940c04) {
    switch(param_1) {
    case '\0':
      goto switchD_004f3c67_caseD_0;
    case '\x01':
switchD_004f3c67_caseD_1:
      *param_2 = DAT_00940c04._2_2_;
      return;
    case '\x02':
      *param_2 = DAT_00940c0a;
      return;
    case '\x03':
      *param_2 = DAT_00940c0c;
      return;
    default:
      goto switchD_004f3c67_default;
    }
  }
  switch(param_1) {
  case '\0':
switchD_004f3c67_caseD_0:
    *param_2 = (ushort)DAT_00940c04;
    return;
  case '\x01':
    goto switchD_004f3c67_caseD_1;
  case '\x02':
    *param_2 = DAT_00940c08;
    return;
  case '\x03':
    *param_3 = '\0';
    *param_2 = 0;
  default:
switchD_004f3c67_default:
    return;
  }
}




/* from: engine:pic_decompress.cpp
   addr: 004F3CF0 */

void __fastcall UpdateCache5(uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_00940c10 != param_1) {
    DAT_00940c10 = param_1;
    uVar1 = (uint)param_1[1];
    uVar2 = (uint)*param_1;
    if (uVar1 < uVar2) {
      DAT_00940c14._0_3_ = CONCAT12((char)((uVar1 + uVar2 * 6) / 7),*(undefined2 *)param_1);
      DAT_00940c14 = CONCAT13((char)((uVar2 * 5 + uVar1 * 2) / 7),(undefined3)DAT_00940c14);
      DAT_00940c18 = (char)((uVar1 * 3 + uVar2 * 4) / 7);
      DAT_00940c19 = (char)((uVar2 * 3 + uVar1 * 4) / 7);
      DAT_00940c1a = (char)((uVar1 * 5 + uVar2 * 2) / 7);
      DAT_00940c1b = (char)((uVar2 + uVar1 * 6) / 7);
      return;
    }
    DAT_00940c14._0_3_ = CONCAT12((char)((uVar1 + uVar2 * 4) / 5),*(undefined2 *)param_1);
    DAT_00940c1a = 0;
    DAT_00940c1b = 0xff;
    DAT_00940c14 = CONCAT13((char)((uVar2 * 3 + uVar1 * 2) / 5),(undefined3)DAT_00940c14);
    DAT_00940c18 = (undefined1)((uVar1 * 3 + uVar2 * 2) / 5);
    DAT_00940c19 = (undefined1)((uVar2 + uVar1 * 4) / 5);
  }
  return;
}




/* from: engine:pic_decompress.cpp
   addr: 004F3E50 */

void __fastcall pctDecode(ushort param_1,uchar param_2,pctPIXEL *param_3)

{
  *param_3 = (pctPIXEL)param_2;
  param_3[1] = SUB41(((uint)(param_1 >> 0xb) * 0xff) / 0x1f,0);
  param_3[2] = SUB41((((param_1 & 0x7e0) >> 5) * 0xff) / 0x3f,0);
  param_3[3] = SUB41(((param_1 & 0x1f) * 0xff) / 0x1f,0);
  return;
}

