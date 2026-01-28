/* from unknown.cpp */
// func: FUN_004b0ff6
// addr: 004b0ff6

undefined4 FUN_004b0ff6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int in_stack_0000001c;
  uint in_stack_00000060;
  uint in_stack_00000064;
  uint in_stack_00000068;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  int in_stack_0000008c;
  int in_stack_00000090;
  
  if (in_stack_00000064 == 0) {
LAB_004b1104:
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      if ((in_stack_00000064 & 1 << ((byte)iVar6 & 0x1f)) != 0) break;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x20);
    iVar1 = iVar6;
    if (iVar6 == 0x20) goto LAB_004b1104;
    for (; iVar1 < 0x20; iVar1 = iVar1 + 1) {
      if ((in_stack_00000064 & 1 << ((byte)iVar1 & 0x1f)) == 0) {
        iVar1 = iVar1 + -1;
        break;
      }
    }
    if (((iVar1 != 0x20) && (iVar1 < 0x1f)) &&
       (in_stack_00000064 !=
        (1 << (((char)iVar1 - (byte)iVar6) + 1 & 0x1f)) + -1 << ((byte)iVar6 & 0x1f)))
    goto LAB_004b1104;
  }
  iVar1 = ftol();
  if (in_stack_00000068 == 0) {
LAB_004b11ba:
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    do {
      if ((in_stack_00000068 & 1 << ((byte)iVar7 & 0x1f)) != 0) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x20);
    iVar2 = iVar7;
    if (iVar7 == 0x20) goto LAB_004b11ba;
    for (; iVar2 < 0x20; iVar2 = iVar2 + 1) {
      if ((in_stack_00000068 & 1 << ((byte)iVar2 & 0x1f)) == 0) {
        iVar2 = iVar2 + -1;
        break;
      }
    }
    if (((iVar2 != 0x20) && (iVar2 < 0x1f)) &&
       (in_stack_00000068 !=
        (1 << (((char)iVar2 - (byte)iVar7) + 1 & 0x1f)) + -1 << ((byte)iVar7 & 0x1f)))
    goto LAB_004b11ba;
  }
  iVar2 = ftol();
  if (in_stack_0000006c == 0) {
LAB_004b1273:
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    do {
      if ((in_stack_0000006c & 1 << ((byte)iVar8 & 0x1f)) != 0) break;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x20);
    iVar3 = iVar8;
    if (iVar8 == 0x20) goto LAB_004b1273;
    for (; iVar3 < 0x20; iVar3 = iVar3 + 1) {
      if ((in_stack_0000006c & 1 << ((byte)iVar3 & 0x1f)) == 0) {
        iVar3 = iVar3 + -1;
        break;
      }
    }
    if (((iVar3 != 0x20) && (iVar3 < 0x1f)) &&
       (in_stack_0000006c !=
        (1 << (((char)iVar3 - (byte)iVar8) + 1 & 0x1f)) + -1 << ((byte)iVar8 & 0x1f)))
    goto LAB_004b1273;
  }
  iVar3 = ftol();
  if (in_stack_00000070 != 0) {
    iVar9 = 0;
    do {
      if ((in_stack_00000070 & 1 << ((byte)iVar9 & 0x1f)) != 0) break;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x20);
    iVar4 = iVar9;
    if (iVar9 != 0x20) {
      for (; iVar4 < 0x20; iVar4 = iVar4 + 1) {
        if ((in_stack_00000070 & 1 << ((byte)iVar4 & 0x1f)) == 0) {
          iVar4 = iVar4 + -1;
          break;
        }
      }
      if (((iVar4 == 0x20) || (0x1e < iVar4)) ||
         (in_stack_00000070 ==
          (1 << (((char)iVar4 - (byte)iVar9) + 1 & 0x1f)) + -1 << ((byte)iVar9 & 0x1f)))
      goto LAB_004b128c;
    }
  }
  iVar9 = 0;
LAB_004b128c:
  iVar4 = ftol();
  uVar10 = iVar1 << ((byte)iVar6 & 0x1f) | iVar2 << ((byte)iVar7 & 0x1f) |
           iVar3 << ((byte)iVar8 & 0x1f) | iVar4 << ((byte)iVar9 & 0x1f);
  puVar5 = (uint *)((in_stack_00000060 >> 3) * in_stack_0000008c +
                   param_1 + in_stack_0000001c * in_stack_00000090);
  switch(in_stack_00000060 >> 3) {
  case 1:
    *(char *)puVar5 = (char)uVar10;
    break;
  case 2:
    *(short *)puVar5 = (short)uVar10;
    break;
  case 3:
    *(char *)puVar5 = (char)uVar10;
    *(char *)((int)puVar5 + 1) = (char)(uVar10 >> 8);
    *(char *)((int)puVar5 + 2) = (char)(uVar10 >> 0x10);
    break;
  case 4:
    *puVar5 = uVar10;
  }
  d3dUnlock(*(IDirectDrawSurface7 **)(param_2 + 0x20));
  return 1;
}



/* from unknown.cpp */
// func: FUN_004cfa25
// addr: 004cfa25

cdtINFO * __thiscall FUN_004cfa25(scnSCENE *param_1)

{
  abvBVOL *this;
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  cdtINFO *unaff_EDI;
  cdtINFO *pcVar6;
  float fStack00000008;
  scnSCENE *in_stack_00000010;
  float fStack00000014;
  float fStack00000018;
  float fStack0000001c;
  m3dV *in_stack_000004f4;
  m3dV *in_stack_000004f8;
  float in_stack_000004fc;
  byte in_stack_00000500;
  cdtREFINE *in_stack_00000504;
  cdtINFO *in_stack_00000508;
  
  if (in_stack_00000508 == unaff_EDI) {
    in_stack_00000508 = (cdtINFO *)&stack0x00000020;
  }
  fStack00000014 = in_stack_000004fc * *(float *)in_stack_000004f8 + *(float *)in_stack_000004f4;
  fStack00000018 =
       in_stack_000004fc * *(float *)(in_stack_000004f8 + 4) + *(float *)(in_stack_000004f4 + 4);
  fStack0000001c =
       in_stack_000004fc * *(float *)(in_stack_000004f8 + 8) + *(float *)(in_stack_000004f4 + 8);
  iVar3 = scnSCENE::MakeAnimList
                    (param_1,in_stack_000004f4,(m3dV *)&stack0x00000014,(float)unaff_EDI,
                     in_stack_00000504,(scnAOBJ *)&stack0x00000040,0x96);
  pcVar6 = unaff_EDI;
  fStack00000008 = in_stack_000004fc;
  if (0 < iVar3) {
    do {
      if (DAT_0093445c == 0) {
LAB_004cfadf:
        if (((in_stack_00000500 & 0x20) == 0) ||
           (*(int *)(&stack0x00000044 + (int)unaff_EDI * 8) < 0)) {
LAB_004cfb54:
          iVar5 = scnSCENE::IsectRayInst
                            (in_stack_00000010,*(animINST **)(&stack0x00000040 + (int)unaff_EDI * 8)
                             ,in_stack_000004f4,in_stack_000004f8,fStack00000008,in_stack_00000504,
                             in_stack_00000508);
          if (iVar5 == 0) {
            if (pcVar6 == (cdtINFO *)0x0) goto LAB_004cfb99;
          }
          else {
            fStack00000008 = *(float *)(in_stack_00000508 + 0x1c);
            pcVar6 = (cdtINFO *)0x1;
          }
        }
        else {
          bVar1 = *(byte *)(*(int *)(&stack0x00000040 + (int)unaff_EDI * 8) + 4);
          if ((char)in_stack_00000500 < '\0') {
            bVar1 = bVar1 & 0x40;
          }
          else {
            bVar1 = bVar1 & 0x48;
          }
          if ((bVar1 != 0) ||
             (this = (abvBVOL *)
                     (*(int *)(*(int *)(&stack0x00000040 + (int)unaff_EDI * 8) + 0xf8) +
                     *(int *)(&stack0x00000044 + (int)unaff_EDI * 8) * 0x24), this == (abvBVOL *)0x0
             )) goto LAB_004cfb54;
          iVar5 = abvBVOL::IsectRay(this,in_stack_000004f4,in_stack_000004f8,fStack00000008,
                                    in_stack_00000508);
          if ((iVar5 == 0) || (iVar5 == 2)) goto LAB_004cfb99;
          uVar2 = *(undefined4 *)(&stack0x00000044 + (int)unaff_EDI * 8);
          fStack00000008 = *(float *)(in_stack_00000508 + 0x1c);
          *(undefined4 *)(in_stack_00000508 + 4) =
               *(undefined4 *)(&stack0x00000040 + (int)unaff_EDI * 8);
          *(undefined4 *)(in_stack_00000508 + 8) = uVar2;
          pcVar6 = (cdtINFO *)0x1;
          *(uint *)in_stack_00000508 = *(uint *)in_stack_00000508 & 0xfffffeff;
        }
        if ((in_stack_00000500 & 4) != 0) break;
      }
      else {
        pcVar4 = *(char **)(*(int *)(&stack0x00000040 + (int)unaff_EDI * 8) + 0x20);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = s_;
        }
        pcVar4 = strstr(pcVar4,s_lustra);
        if (pcVar4 == (char *)0x0) goto LAB_004cfadf;
      }
LAB_004cfb99:
      unaff_EDI = unaff_EDI + 1;
    } while ((int)unaff_EDI < iVar3);
    if (pcVar6 != (cdtINFO *)0x0) {
      *(uint *)in_stack_00000508 = *(uint *)in_stack_00000508 | 2;
    }
  }
  return pcVar6;
}



/* from unknown.cpp */
// func: FUN_0054b870
// addr: 0054b870

void __thiscall
FUN_0054b870(m3dMATR *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10)

{
  float *pfVar1;
  undefined4 *in_EAX;
  m3dMATR *pmVar2;
  int iVar3;
  float *unaff_EBX;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  float fStack00000038;
  float fStack0000003c;
  float fStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000048;
  undefined4 uStack0000004c;
  float *in_stack_00000124;
  undefined4 *in_stack_00000128;
  
  pfVar1 = in_stack_00000124;
  uStack0000002c = *in_EAX;
  uStack00000030 = in_EAX[1];
  uStack00000028 = 3;
  fStack00000038 = *in_stack_00000124;
  uStack00000034 = in_EAX[2];
  fStack0000003c = in_stack_00000124[1];
  uStack00000044 = *in_stack_00000128;
  fStack00000040 = in_stack_00000124[2];
  uStack00000048 = in_stack_00000128[1];
  uStack0000004c = in_stack_00000128[2];
  m3dGetPolyNormal((m3dPOLY *)&stack0x00000028,(m3dV *)&param_5);
  param_2 = *pfVar1 - *unaff_EBX;
  param_3 = pfVar1[1] - unaff_EBX[1];
  param_4 = pfVar1[2] - unaff_EBX[2];
  m3dNormalize((m3dV *)&param_2);
  param_8 = param_7 * param_3 - param_4 * param_6;
  param_9 = param_4 * param_5 - param_7 * param_2;
  param_10 = param_6 * param_2 - param_3 * param_5;
  m3dNormalize((m3dV *)&param_8);
  pmVar2 = param_1;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pmVar2 = 0;
    pmVar2 = pmVar2 + 4;
  }
  iVar3 = 4;
  pmVar2 = param_1;
  do {
    *(undefined4 *)pmVar2 = 0x3f800000;
    pmVar2 = pmVar2 + 0x14;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(float *)param_1 = param_2;
  *(float *)(param_1 + 4) = param_5;
  *(float *)(param_1 + 8) = param_8;
  *(float *)(param_1 + 0x10) = param_3;
  *(float *)(param_1 + 0x14) = param_6;
  *(float *)(param_1 + 0x18) = param_9;
  *(float *)(param_1 + 0x20) = param_4;
  *(float *)(param_1 + 0x24) = param_7;
  *(float *)(param_1 + 0x28) = param_10;
  m3dMATR::Translate(param_1,-*unaff_EBX,-unaff_EBX[1],-unaff_EBX[2],1);
  return;
}



/* from unknown.cpp */
// func: FUN_00567c62
// addr: 00567c62

void FUN_00567c62(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint in_EAX;
  uint extraout_ECX;
  uint uVar1;
  short in_FPUControlWord;
  
  uVar1 = in_EAX;
  if (in_FPUControlWord != 0x27f) {
    in_EAX = load_CW();
    uVar1 = extraout_ECX;
  }
  if ((uVar1 & 0x7ff00000) != 0x7ff00000) {
                    /* WARNING: Subroutine does not return */
    fload_withFB();
  }
  if ((in_EAX & 0xfffff) == 0 && param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    fload_withFB();
  }
                    /* WARNING: Subroutine does not return */
  fload_withFB();
}



/* from unknown.cpp */
// func: FUN_0056a07d
// addr: 0056a07d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0056a07d(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = ___indefinite, param_1 != 0)) {
      fVar1 = (float10)convertTOStoQNaN();
    }
LAB_0056a10c:
    if (___fastflag == 0) {
      fVar1 = (float10)startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = load_CW();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else {
      fVar1 = ___indefinite;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_0056a10c;
      fVar1 = ___piby2;
      if ((param_2 & 0x80000000) != 0) {
        fVar1 = -___piby2;
      }
    }
    if (___fastflag == 0) {
      fVar1 = (float10)math_exit();
      return fVar1;
    }
  }
  return fVar1;
}



/* from unknown.cpp */
// func: FUN_0056a14d
// addr: 0056a14d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0056a14d(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = ___indefinite, param_1 != 0)) {
      fVar1 = (float10)convertTOStoQNaN();
    }
LAB_0056a1dc:
    if (___fastflag == 0) {
      fVar1 = (float10)startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = load_CW();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else {
      fVar1 = ___indefinite;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_0056a1dc;
      if ((param_2 & 0x80000000) == 0) {
        fVar1 = (float10)0;
      }
      else {
        fVar1 = (float10)3.141592653589793;
      }
    }
    if (___fastflag == 0) {
      fVar1 = (float10)math_exit();
      return fVar1;
    }
  }
  return fVar1;
}



/* from unknown.cpp */
// func: FUN_00587650
// addr: 00587650

uchar FUN_00587650(undefined4 param_1,clDataList *param_2,int param_3)

{
  uchar uVar1;
  clDataList *pcVar2;
  clDataList *pcVar3;
  clDataList *unaff_EBP;
  undefined **ppuStack00000010;
  undefined4 *puStack00000014;
  undefined4 uStack00000018;
  undefined **in_stack_0000001c;
  undefined8 *puStack00000024;
  undefined **in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined8 *in_stack_00000040;
  void *in_stack_00000044;
  char cStack00000058;
  char in_stack_0000005c;
  char in_stack_00000060;
  int in_stack_00000064;
  int in_stack_00000068;
  clDataList *in_stack_0000006c;
  clDataList *in_stack_00000070;
  uint in_stack_00000074;
  clDataList *in_stack_00000078;
  uint in_stack_0000007c;
  clDataList *in_stack_00000080;
  uint in_stack_00000084;
  short sStack00000088;
  
  puStack00000014 = &clDataList::_vbtable__for__clData__;
  puStack00000024 = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
  uStack00000018 = 3;
  ppuStack00000010 = &clData::_vftable_;
  clPointerList<class_clData*>::clPointerList<class_clData*>
            ((clPointerList<class_clData*> *)&stack0x0000001c);
  ppuStack00000010 = &clDataList::_vftable__for__clData__;
  in_stack_0000001c = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  pcVar3 = unaff_EBP;
  param_2 = unaff_EBP;
  if ((-1 < cStack00000058) &&
     (pcVar3 = (clDataList *)((uint)unaff_EBP | 2), cStack00000058 != '\0')) {
    param_2 = (clDataList *)0x10;
  }
  if ((-1 < in_stack_0000005c) &&
     (pcVar3 = (clDataList *)((uint)pcVar3 | 4), in_stack_0000005c != '\0')) {
    param_2 = (clDataList *)((uint)param_2 | 0x800);
  }
  if ((-1 < in_stack_00000060) &&
     (pcVar3 = (clDataList *)((uint)pcVar3 | 0x200), in_stack_00000060 != '\0')) {
    param_2 = (clDataList *)((uint)param_2 | 0x4000);
  }
  if (in_stack_00000064 != -1) {
    pcVar3 = (clDataList *)((uint)pcVar3 | 8);
  }
  if (in_stack_00000068 != -1) {
    pcVar3 = (clDataList *)((uint)pcVar3 | 0x10);
  }
  if (in_stack_0000006c != unaff_EBP) {
    pcVar3 = (clDataList *)((uint)pcVar3 | 0x20);
  }
  if ((in_stack_00000070 != unaff_EBP) && ((int)unaff_EBP <= (int)in_stack_00000074)) {
    pcVar3 = (clDataList *)((uint)pcVar3 | 0x40);
  }
  if ((in_stack_00000078 != unaff_EBP) && ((int)unaff_EBP <= (int)in_stack_0000007c)) {
    pcVar3 = (clDataList *)((uint)pcVar3 | 0x400);
  }
  if ((in_stack_00000080 != unaff_EBP) && ((int)unaff_EBP <= (int)in_stack_00000084)) {
    pcVar3 = (clDataList *)((uint)pcVar3 | 0x80);
  }
  if (sStack00000088 != (short)unaff_EBP) {
    pcVar3 = (clDataList *)((uint)pcVar3 | 0x100);
  }
  pcVar2 = (clDataList *)ExtAlloc_Malloc_4(0x18);
  _cStack00000058 = pcVar2;
  if (pcVar2 == unaff_EBP) {
    pcVar2 = (clDataList *)0x0;
  }
  else {
    *(undefined4 **)(pcVar2 + 4) = &clDataList::_vbtable__for__clData__;
    *(undefined8 **)(pcVar2 + 0x14) = &clDataList::_vbtable__for__clPointerList<class_clData*>__;
    *(undefined4 *)(pcVar2 + 8) = 3;
    *(undefined ***)pcVar2 = &clData::_vftable_;
    clPointerList<class_clData*>::clPointerList<class_clData*>
              ((clPointerList<class_clData*> *)(pcVar2 + 0xc));
    *(undefined ***)pcVar2 = &clDataList::_vftable__for__clData__;
    *(undefined ***)(pcVar2 + 0xc) = &clDataList::_vftable__for__clPointerList<class_clData*>__;
  }
  clDataList::Add(pcVar2,(int *)&stack0x00000054);
  clDataList::Add(pcVar2,(int *)&stack0x00000004);
  if (((uint)pcVar3 & 0x206) != 0) {
    clDataList::Add(pcVar2,(int *)&stack0x00000008);
  }
  if (((uint)pcVar3 & 8) != 0) {
    clDataList::Add(pcVar2,&stack0x00000064);
  }
  if (((uint)pcVar3 & 0x10) != 0) {
    clDataList::Add(pcVar2,&stack0x00000068);
  }
  if (((uint)pcVar3 & 0x20) != 0) {
    clDataList::Add(pcVar2,(char *)in_stack_0000006c);
  }
  if (((uint)pcVar3 & 0x40) != 0) {
    in_stack_0000002c = &clDataBin::_vbtable__for__clData__;
    in_stack_00000040 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
    in_stack_00000030 = 2;
    in_stack_00000028 = &clData::_vftable_;
    ExtAlloc::vector<char>::vector<char>((vector<char> *)&stack0x00000034);
    in_stack_00000028 = &clDataBin::_vftable_;
    clDataBin::Copy((clDataBin *)&stack0x00000028,(char *)in_stack_00000070,in_stack_00000074);
    clDataList::Add(pcVar2,(clDataBin *)&stack0x00000028);
    in_stack_00000028 = &clDataBin::_vftable_;
    _STL::
    _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::
    ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *)&stack0x00000034);
  }
  if (((uint)pcVar3 & 0x400) != 0) {
    in_stack_0000002c = &clDataBin::_vbtable__for__clData__;
    in_stack_00000040 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
    in_stack_00000030 = 2;
    in_stack_00000028 = &clData::_vftable_;
    ExtAlloc::vector<char>::vector<char>((vector<char> *)&stack0x00000034);
    in_stack_00000028 = &clDataBin::_vftable_;
    clDataBin::Copy((clDataBin *)&stack0x00000028,(char *)in_stack_00000078,in_stack_0000007c);
    clDataList::Add(pcVar2,(clDataBin *)&stack0x00000028);
    in_stack_00000028 = &clDataBin::_vftable_;
    _STL::
    _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::
    ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *)&stack0x00000034);
  }
  if ((char)pcVar3 < '\0') {
    in_stack_0000002c = &clDataBin::_vbtable__for__clData__;
    in_stack_00000040 = &clDataBin::_vbtable__for__ExtAlloc__vector<char>__;
    clData::clData((clData *)&stack0x00000028,2);
    ExtAlloc::vector<char>::vector<char>((vector<char> *)&stack0x00000034);
    in_stack_00000028 = &clDataBin::_vftable_;
    clDataBin::Copy((clDataBin *)&stack0x00000028,(char *)in_stack_00000080,in_stack_00000084);
    clDataList::Add(pcVar2,(clDataBin *)&stack0x00000028);
    in_stack_00000028 = &clDataBin::_vftable_;
    _STL::
    _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::
    ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *)&stack0x00000034);
  }
  if (((uint)pcVar3 & 0x100) != 0) {
    _cStack00000058 = (clDataList *)(_sStack00000088 & 0xffff);
    clDataList::Add(pcVar2,(int *)&stack0x00000058);
  }
  _cStack00000058 = (clDataList *)0x1f;
  clDataList::Add((clDataList *)&stack0x00000010,(int *)&stack0x00000058);
  clDataList::Add((clDataList *)&stack0x00000010,pcVar2);
  uVar1 = clConnectElem::SendMessageA
                    (*(clConnectElem **)(param_3 + 0x124),0xd1,(clDataList *)&stack0x00000010);
  clDataList::~clDataList((clDataList *)&stack0x00000010);
  ExceptionList = in_stack_00000044;
  return uVar1;
}



/* from unknown.cpp */
// func: Catch@0058c17c
// addr: 0058c17c

void Catch_0058c17c(void)

{
  _String_base<char,class_ExtAlloc::Allocator<char>_> *p_Var1;
  int unaff_EBP;
  _String_base<char,class_ExtAlloc::Allocator<char>_> *this;
  
  this = *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(unaff_EBP + -0x1c);
  p_Var1 = *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(unaff_EBP + -0x18);
  *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(unaff_EBP + 0x14) = this;
  if (this != p_Var1) {
    do {
      *(undefined1 *)(unaff_EBP + -4) = 4;
      _STL::_String_base<char,class_ExtAlloc::Allocator<char>_>::
      ~_String_base<char,class_ExtAlloc::Allocator<char>_>(this);
      this = this + 0xc;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(unaff_EBP + 0x14) = this;
    } while (this != p_Var1);
    this = *(_String_base<char,class_ExtAlloc::Allocator<char>_> **)(unaff_EBP + -0x1c);
  }
  ExtAlloc_Free_4(this);
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Catch@0058cafc
// addr: 0058cafc

void Catch_0058cafc(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  for (puVar2 = *(undefined4 **)(unaff_EBP + 0x10); puVar2 != puVar1; puVar2 = puVar2 + 3) {
    _STL::
    _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                  *)(puVar2 + 2),
                 (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                  *)*puVar2,puVar2[2] - (int)*puVar2);
  }
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Catch@0058cbda
// addr: 0058cbda

void Catch_0058cbda(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  for (puVar2 = *(undefined4 **)(unaff_EBP + 8); puVar2 != puVar1; puVar2 = puVar2 + 3) {
    _STL::
    _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
    ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                  *)(puVar2 + 2),
                 (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                  *)*puVar2,puVar2[2] - (int)*puVar2);
  }
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: FUN_00592e61
// addr: 00592e61

void FUN_00592e61(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  EHExceptionRecord *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  p_Var1 = getptd();
  p_Var1->ptlocinfo = *(pthreadlocinfo *)(unaff_EBP + -0x1c);
  p_Var1 = getptd();
  p_Var1->_ownlocale = *(int *)(unaff_EBP + -0x20);
  if ((((*(int *)unaff_EDI == -0x1f928c9d) && (*(int *)(unaff_EDI + 0x10) == 3)) &&
      (*(int *)(unaff_EDI + 0x14) == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    iVar2 = abnormal_termination();
    DestructExceptionObject(unaff_EDI,(uchar)iVar2);
  }
  return;
}



/* from unknown.cpp */
// func: Catch@005a9e17
// addr: 005a9e17

void Catch_005a9e17(void)

{
  int unaff_EBP;
  
  ExtAlloc_Free_4(*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Catch@005b0794
// addr: 005b0794

void Catch_005b0794(void)

{
  _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
  *this;
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  if (*(int *)(unaff_EBP + 8) != 0) {
    this = *(_Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
             **)(unaff_EBP + -0x14);
    iVar2 = *(int *)(unaff_EBP + 8);
    do {
      _STL::
      _Rb_tree<unsigned_short,struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>,struct__STL::less<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>_>
      ::M_erase(this,*(_Rb_tree_node<struct__STL::pair<unsigned_short_const_,struct_stModuleInfo>_>
                       **)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar1;
    } while (iVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Catch@005b1a61
// addr: 005b1a61

void Catch_005b1a61(void)

{
  int unaff_EBP;
  
  ExtAlloc_Free_4(*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Catch@005b50f0
// addr: 005b50f0

void Catch_005b50f0(void)

{
  int unaff_EBP;
  
  ExtAlloc_Free_4(*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Catch@005b6c94
// addr: 005b6c94

void Catch_005b6c94(void)

{
  _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
  *this;
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  if (*(int *)(unaff_EBP + 8) != 0) {
    this = *(_Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
             **)(unaff_EBP + -0x14);
    iVar2 = *(int *)(unaff_EBP + 8);
    do {
      _STL::
      _Rb_tree<int,int,struct__STL::_Identity<int>,struct__STL::less<int>,class_ExtAlloc::Allocator<int>_>
      ::M_erase(this,*(_Rb_tree_node<int> **)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar1;
    } while (iVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Catch@005b7f6c
// addr: 005b7f6c

void Catch_005b7f6c(void)

{
  int unaff_EBP;
  
  ExtAlloc_Free_4(*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: FUN_005bd635
// addr: 005bd635

uint FUN_005bd635(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
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



/* from unknown.cpp */
// func: Catch@005c23ee
// addr: 005c23ee

void Catch_005c23ee(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  ExtAlloc_Free_4(*(undefined4 *)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Catch@005c25a7
// addr: 005c25a7

void Catch_005c25a7(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EBP;
  int *piVar3;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  piVar1 = *(int **)(unaff_EBP + -0x18);
  for (piVar3 = piVar1; piVar3 != piVar2; piVar3 = piVar3 + 3) {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
  }
  ExtAlloc_Free_4(piVar1);
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Catch@005c451e
// addr: 005c451e

void Catch_005c451e(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  ExtAlloc_Free_4(*(undefined4 *)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Catch@005c66c4
// addr: 005c66c4

void Catch_005c66c4(void)

{
  _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
  *this;
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  if (*(int *)(unaff_EBP + 8) != 0) {
    this = *(_Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
             **)(unaff_EBP + -0x14);
    iVar2 = *(int *)(unaff_EBP + 8);
    do {
      _STL::
      _Rb_tree<unsigned_int,struct__STL::pair<unsigned_int_const_,int>,struct__STL::_Select1st<struct__STL::pair<unsigned_int_const_,int>_>,struct__STL::less<unsigned_int>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_int_const_,int>_>_>
      ::M_erase(this,*(_Rb_tree_node<struct__STL::pair<unsigned_int_const_,int>_> **)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      ExtAlloc_Free_4(iVar2);
      iVar2 = iVar1;
    } while (iVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Catch@005c68a4
// addr: 005c68a4

void Catch_005c68a4(void)

{
  int unaff_EBP;
  
  ExtAlloc_Free_4(*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  CxxThrowException_8(0,0);
}



/* from unknown.cpp */
// func: Unwind@005c7300
// addr: 005c7300

void Unwind_005c7300(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7337
// addr: 005c7337

void Unwind_005c7337(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x40));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7366
// addr: 005c7366

void Unwind_005c7366(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x48));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c73a0
// addr: 005c73a0

void Unwind_005c73a0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c73d7
// addr: 005c73d7

void Unwind_005c73d7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x2c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7410
// addr: 005c7410

void Unwind_005c7410(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe8) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -200));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7443
// addr: 005c7443

void Unwind_005c7443(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe8) & 2) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0xac));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7476
// addr: 005c7476

void Unwind_005c7476(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe8) & 4) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x8c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c74a9
// addr: 005c74a9

void Unwind_005c74a9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe8) & 8) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x4c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c74d3
// addr: 005c74d3

void Unwind_005c74d3(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xe8) & 0x10) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x6c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7590
// addr: 005c7590

void Unwind_005c7590(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x44));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c767a
// addr: 005c767a

void Unwind_005c767a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x54));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c76da
// addr: 005c76da

void Unwind_005c76da(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x54));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c773a
// addr: 005c773a

void Unwind_005c773a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x54));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7778
// addr: 005c7778

void Unwind_005c7778(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c77b0
// addr: 005c77b0

void Unwind_005c77b0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c77f0
// addr: 005c77f0

void Unwind_005c77f0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7830
// addr: 005c7830

void Unwind_005c7830(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7870
// addr: 005c7870

void Unwind_005c7870(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c78f4
// addr: 005c78f4

void Unwind_005c78f4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x14));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7920
// addr: 005c7920

void Unwind_005c7920(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::map<void*,class_CHttpDownload*,struct__STL::less<void*>_>::
  ~map<void*,class_CHttpDownload*,struct__STL::less<void*>_>
            (*(map<void*,class_CHttpDownload*,struct__STL::less<void*>_> **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7980
// addr: 005c7980

void Unwind_005c7980(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0xa84));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c79a5
// addr: 005c79a5

void Unwind_005c79a5(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 4) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c79df
// addr: 005c79df

void Unwind_005c79df(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 8) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x54));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7a81
// addr: 005c7a81

void Unwind_005c7a81(void)

{
  int unaff_EBP;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (*(_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               **)(unaff_EBP + -0x44c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7ac4
// addr: 005c7ac4

void Unwind_005c7ac4(void)

{
  int unaff_EBP;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (*(_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               **)(unaff_EBP + -0x460));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7ca0
// addr: 005c7ca0

void Unwind_005c7ca0(void)

{
  int unaff_EBP;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (*(_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               **)(unaff_EBP + -0x20));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7d00
// addr: 005c7d00

void Unwind_005c7d00(void)

{
  int unaff_EBP;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (*(_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               **)(unaff_EBP + -0x1c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7d30
// addr: 005c7d30

void Unwind_005c7d30(void)

{
  int unaff_EBP;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (*(_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               **)(unaff_EBP + -0x1c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7de2
// addr: 005c7de2

void Unwind_005c7de2(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x50) & 2) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + 8) + 8));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7e30
// addr: 005c7e30

void Unwind_005c7e30(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x54));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7ea0
// addr: 005c7ea0

void Unwind_005c7ea0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7ee0
// addr: 005c7ee0

void Unwind_005c7ee0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7f20
// addr: 005c7f20

void Unwind_005c7f20(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x18) + 0x18));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7f57
// addr: 005c7f57

void Unwind_005c7f57(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 8) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x18));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7f8e
// addr: 005c7f8e

void Unwind_005c7f8e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 0x10) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x1c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7fcf
// addr: 005c7fcf

void Unwind_005c7fcf(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 0x20) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x14));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c7ff3
// addr: 005c7ff3

void Unwind_005c7ff3(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 0x40) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c802a
// addr: 005c802a

void Unwind_005c802a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x18));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8061
// addr: 005c8061

void Unwind_005c8061(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 2) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x1c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c80a2
// addr: 005c80a2

void Unwind_005c80a2(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 4) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x14));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c80c6
// addr: 005c80c6

void Unwind_005c80c6(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 8) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c84fa
// addr: 005c84fa

void Unwind_005c84fa(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x18));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c853a
// addr: 005c853a

void Unwind_005c853a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x18));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c857a
// addr: 005c857a

void Unwind_005c857a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + 4) + 0x1c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c85b0
// addr: 005c85b0

void Unwind_005c85b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x6c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8670
// addr: 005c8670

void Unwind_005c8670(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x18) + 0x68));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c868a
// addr: 005c868a

void Unwind_005c868a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 2) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0xc));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c86e1
// addr: 005c86e1

void Unwind_005c86e1(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 8) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + 0xc) + 0x54));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8710
// addr: 005c8710

void Unwind_005c8710(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8750
// addr: 005c8750

void Unwind_005c8750(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c87f1
// addr: 005c87f1

void Unwind_005c87f1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8820
// addr: 005c8820

void Unwind_005c8820(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8847
// addr: 005c8847

void Unwind_005c8847(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x18));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c88a0
// addr: 005c88a0

void Unwind_005c88a0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x2c) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x28));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8a10
// addr: 005c8a10

void Unwind_005c8a10(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x28));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8a70
// addr: 005c8a70

void Unwind_005c8a70(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x30));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8ae0
// addr: 005c8ae0

void Unwind_005c8ae0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x5c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8b50
// addr: 005c8b50

void Unwind_005c8b50(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x5c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8b90
// addr: 005c8b90

void Unwind_005c8b90(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8bd0
// addr: 005c8bd0

void Unwind_005c8bd0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8c10
// addr: 005c8c10

void Unwind_005c8c10(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8c50
// addr: 005c8c50

void Unwind_005c8c50(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x18));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8cb0
// addr: 005c8cb0

void Unwind_005c8cb0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8d00
// addr: 005c8d00

void Unwind_005c8d00(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x58) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8d2f
// addr: 005c8d2f

void Unwind_005c8d2f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x58) & 2) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x30));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8d60
// addr: 005c8d60

void Unwind_005c8d60(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x58) & 4) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x54) + 0x18));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8e20
// addr: 005c8e20

void Unwind_005c8e20(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x30) + 0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8e70
// addr: 005c8e70

void Unwind_005c8e70(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x1c8));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8ed9
// addr: 005c8ed9

void Unwind_005c8ed9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 2) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + 4) + 0x18));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8f07
// addr: 005c8f07

void Unwind_005c8f07(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 4) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + 4) + 0x18));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8f35
// addr: 005c8f35

void Unwind_005c8f35(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 8) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + 4) + 0x30));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c8f4f
// addr: 005c8f4f

void Unwind_005c8f4f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 0x10) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x14));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9190
// addr: 005c9190

void Unwind_005c9190(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x28));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c921b
// addr: 005c921b

void Unwind_005c921b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::map<int,class_clGameResult*,struct__STL::less<int>_>::
  ~map<int,class_clGameResult*,struct__STL::less<int>_>
            (*(map<int,class_clGameResult*,struct__STL::less<int>_> **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9280
// addr: 005c9280

void Unwind_005c9280(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::map<int,class_clGameResult*,struct__STL::less<int>_>::
  ~map<int,class_clGameResult*,struct__STL::less<int>_>
            (*(map<int,class_clGameResult*,struct__STL::less<int>_> **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c92cb
// addr: 005c92cb

void Unwind_005c92cb(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::
  map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::
  ~map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
            (*(map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
               **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9330
// addr: 005c9330

void Unwind_005c9330(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::
  map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::
  ~map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
            (*(map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clPlayerResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
               **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c93d0
// addr: 005c93d0

void Unwind_005c93d0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x20));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9500
// addr: 005c9500

void Unwind_005c9500(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x34));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c951a
// addr: 005c951a

void Unwind_005c951a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 2) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9658
// addr: 005c9658

void Unwind_005c9658(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x3c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9687
// addr: 005c9687

void Unwind_005c9687(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x44));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c96b6
// addr: 005c96b6

void Unwind_005c96b6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x4c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9868
// addr: 005c9868

void Unwind_005c9868(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + 0x10) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x3c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9897
// addr: 005c9897

void Unwind_005c9897(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + 0x10) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x44));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c98f0
// addr: 005c98f0

void Unwind_005c98f0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x28));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9950
// addr: 005c9950

void Unwind_005c9950(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x28));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c99a8
// addr: 005c99a8

void Unwind_005c99a8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c99d7
// addr: 005c99d7

void Unwind_005c99d7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x40));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9a30
// addr: 005c9a30

void Unwind_005c9a30(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x28));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9b78
// addr: 005c9b78

void Unwind_005c9b78(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x34));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9ba7
// addr: 005c9ba7

void Unwind_005c9ba7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x3c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9bde
// addr: 005c9bde

void Unwind_005c9bde(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x44));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9c68
// addr: 005c9c68

void Unwind_005c9c68(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x2c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9c97
// addr: 005c9c97

void Unwind_005c9c97(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x34));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9cc6
// addr: 005c9cc6

void Unwind_005c9cc6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x3c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9cf5
// addr: 005c9cf5

void Unwind_005c9cf5(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x44));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9de0
// addr: 005c9de0

void Unwind_005c9de0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x30));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9e0f
// addr: 005c9e0f

void Unwind_005c9e0f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9ef0
// addr: 005c9ef0

void Unwind_005c9ef0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x30));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9f1f
// addr: 005c9f1f

void Unwind_005c9f1f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9f80
// addr: 005c9f80

void Unwind_005c9f80(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x30));
  return;
}



/* from unknown.cpp */
// func: Unwind@005c9faf
// addr: 005c9faf

void Unwind_005c9faf(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca090
// addr: 005ca090

void Unwind_005ca090(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x30));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca0bf
// addr: 005ca0bf

void Unwind_005ca0bf(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca398
// addr: 005ca398

void Unwind_005ca398(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x30));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca3c7
// addr: 005ca3c7

void Unwind_005ca3c7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca410
// addr: 005ca410

void Unwind_005ca410(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x2c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca43f
// addr: 005ca43f

void Unwind_005ca43f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x34));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca46e
// addr: 005ca46e

void Unwind_005ca46e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x3c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca49d
// addr: 005ca49d

void Unwind_005ca49d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x44));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca4f1
// addr: 005ca4f1

void Unwind_005ca4f1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x290) == 0) {
    *(undefined4 *)(unaff_EBP + -0x2f4) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x2f4) = *(int *)(unaff_EBP + -0x290) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x2f4));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca532
// addr: 005ca532

void Unwind_005ca532(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x290) == 0) {
    *(undefined4 *)(unaff_EBP + -0x2fc) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x2fc) = *(int *)(unaff_EBP + -0x290) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x2fc));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca573
// addr: 005ca573

void Unwind_005ca573(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x290) == 0) {
    *(undefined4 *)(unaff_EBP + -0x304) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x304) = *(int *)(unaff_EBP + -0x290) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x304));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca700
// addr: 005ca700

void Unwind_005ca700(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) == 0) {
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x38) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x50));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca72f
// addr: 005ca72f

void Unwind_005ca72f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) == 0) {
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x58) = *(int *)(unaff_EBP + -0x38) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x58));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca75e
// addr: 005ca75e

void Unwind_005ca75e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) == 0) {
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + -0x38) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x60));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca78d
// addr: 005ca78d

void Unwind_005ca78d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x38) == 0) {
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x38) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x68));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca890
// addr: 005ca890

void Unwind_005ca890(void)

{
  int unaff_EBP;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (*(_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               **)(unaff_EBP + -0x1c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca8e0
// addr: 005ca8e0

void Unwind_005ca8e0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca950
// addr: 005ca950

void Unwind_005ca950(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x60));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca990
// addr: 005ca990

void Unwind_005ca990(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005ca9c0
// addr: 005ca9c0

void Unwind_005ca9c0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005caa43
// addr: 005caa43

void Unwind_005caa43(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x18) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005caa72
// addr: 005caa72

void Unwind_005caa72(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x1c) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x54));
  return;
}



/* from unknown.cpp */
// func: Unwind@005caaf0
// addr: 005caaf0

void Unwind_005caaf0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cab30
// addr: 005cab30

void Unwind_005cab30(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cab70
// addr: 005cab70

void Unwind_005cab70(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cab9f
// addr: 005cab9f

void Unwind_005cab9f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cabce
// addr: 005cabce

void Unwind_005cabce(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x40));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cabfd
// addr: 005cabfd

void Unwind_005cabfd(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x48));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cacb0
// addr: 005cacb0

void Unwind_005cacb0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cad08
// addr: 005cad08

void Unwind_005cad08(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x3c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cad37
// addr: 005cad37

void Unwind_005cad37(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x44));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cad66
// addr: 005cad66

void Unwind_005cad66(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x34));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cad95
// addr: 005cad95

void Unwind_005cad95(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x4c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cade8
// addr: 005cade8

void Unwind_005cade8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cae17
// addr: 005cae17

void Unwind_005cae17(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x40));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cae50
// addr: 005cae50

void Unwind_005cae50(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cae7f
// addr: 005cae7f

void Unwind_005cae7f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005caeae
// addr: 005caeae

void Unwind_005caeae(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x40));
  return;
}



/* from unknown.cpp */
// func: Unwind@005caedd
// addr: 005caedd

void Unwind_005caedd(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x48));
  return;
}



/* from unknown.cpp */
// func: Unwind@005caf30
// addr: 005caf30

void Unwind_005caf30(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x2c) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x28));
  return;
}



/* from unknown.cpp */
// func: Unwind@005caf90
// addr: 005caf90

void Unwind_005caf90(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x2c) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x28));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb050
// addr: 005cb050

void Unwind_005cb050(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + 0xc) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x3c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb120
// addr: 005cb120

void Unwind_005cb120(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + 0xc) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x3c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb178
// addr: 005cb178

void Unwind_005cb178(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x2c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb1a7
// addr: 005cb1a7

void Unwind_005cb1a7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x34));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb1d6
// addr: 005cb1d6

void Unwind_005cb1d6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x3c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb205
// addr: 005cb205

void Unwind_005cb205(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x44));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb270
// addr: 005cb270

void Unwind_005cb270(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x2c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb29f
// addr: 005cb29f

void Unwind_005cb29f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x34));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb2d0
// addr: 005cb2d0

void Unwind_005cb2d0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(unaff_EBP + -0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb2ff
// addr: 005cb2ff

void Unwind_005cb2ff(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb32e
// addr: 005cb32e

void Unwind_005cb32e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x40));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb35d
// addr: 005cb35d

void Unwind_005cb35d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x48));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb3b0
// addr: 005cb3b0

void Unwind_005cb3b0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    *(undefined4 *)(unaff_EBP + 4) = 0;
  }
  else {
    *(int *)(unaff_EBP + 4) = *(int *)(unaff_EBP + 0x10) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + 4));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb410
// addr: 005cb410

void Unwind_005cb410(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x28));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb470
// addr: 005cb470

void Unwind_005cb470(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x2c) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x28));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb4d0
// addr: 005cb4d0

void Unwind_005cb4d0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x28));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb580
// addr: 005cb580

void Unwind_005cb580(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + 0x10) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x38));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb6f0
// addr: 005cb6f0

void Unwind_005cb6f0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + 0xc) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x68));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb71f
// addr: 005cb71f

void Unwind_005cb71f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x70) = *(int *)(unaff_EBP + 0xc) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x70));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb7d0
// addr: 005cb7d0

void Unwind_005cb7d0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x6c) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x6c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb82a
// addr: 005cb82a

void Unwind_005cb82a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + 8) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x60));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb8a8
// addr: 005cb8a8

void Unwind_005cb8a8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x40) == 0) {
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x70) = *(int *)(unaff_EBP + -0x40) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x70));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb8d7
// addr: 005cb8d7

void Unwind_005cb8d7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x40) == 0) {
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x78) = *(int *)(unaff_EBP + -0x40) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x78));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb940
// addr: 005cb940

void Unwind_005cb940(void)

{
  int unaff_EBP;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (*(_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               **)(unaff_EBP + -0x1c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cb99b
// addr: 005cb99b

void Unwind_005cb99b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  ExtAlloc::
  map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::
  ~map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
            (*(map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
               **)(unaff_EBP + -0x14));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cba00
// addr: 005cba00

void Unwind_005cba00(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::
  map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
  ::
  ~map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
            (*(map<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>,class_clResult*,struct__STL::less<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
               **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cba60
// addr: 005cba60

void Unwind_005cba60(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x1dc));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cba85
// addr: 005cba85

void Unwind_005cba85(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 2) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 8));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cbab5
// addr: 005cbab5

void Unwind_005cbab5(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 4) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 8));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cbae5
// addr: 005cbae5

void Unwind_005cbae5(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 8) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cbd7a
// addr: 005cbd7a

void Unwind_005cbd7a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + 0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x60));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cbe20
// addr: 005cbe20

void Unwind_005cbe20(void)

{
  int unaff_EBP;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (*(_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cbe5b
// addr: 005cbe5b

void Unwind_005cbe5b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1a4) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x1ac) + 0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cbe91
// addr: 005cbe91

void Unwind_005cbe91(void)

{
  int unaff_EBP;
  
  ExtAlloc::list<class_CCurMessage*>::_vbase_destructor_
            ((list<class_CCurMessage*> *)(*(int *)(unaff_EBP + -0x1a4) + 0xac));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cbf48
// addr: 005cbf48

void Unwind_005cbf48(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    *(undefined4 *)(unaff_EBP + -100) = 0;
  }
  else {
    *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + 0xc) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -100));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cbf77
// addr: 005cbf77

void Unwind_005cbf77(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x6c) = *(int *)(unaff_EBP + 0xc) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x6c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cbfc8
// addr: 005cbfc8

void Unwind_005cbfc8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x48));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cbff7
// addr: 005cbff7

void Unwind_005cbff7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x50));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc0c0
// addr: 005cc0c0

void Unwind_005cc0c0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x28) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x68));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc13a
// addr: 005cc13a

void Unwind_005cc13a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    *(undefined4 *)(unaff_EBP + 4) = 0;
  }
  else {
    *(int *)(unaff_EBP + 4) = *(int *)(unaff_EBP + 0xc) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + 4));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc1f0
// addr: 005cc1f0

void Unwind_005cc1f0(void)

{
  int unaff_EBP;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (*(_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               **)(unaff_EBP + -0x1c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc2f0
// addr: 005cc2f0

void Unwind_005cc2f0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::map<void*,class_PRNGAlgorithm*,struct__STL::less<void*>_>::
  ~map<void*,class_PRNGAlgorithm*,struct__STL::less<void*>_>
            (*(map<void*,class_PRNGAlgorithm*,struct__STL::less<void*>_> **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc350
// addr: 005cc350

void Unwind_005cc350(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::map<void*,class_CryptoAlgorithm*,struct__STL::less<void*>_>::
  ~map<void*,class_CryptoAlgorithm*,struct__STL::less<void*>_>
            (*(map<void*,class_CryptoAlgorithm*,struct__STL::less<void*>_> **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc3b0
// addr: 005cc3b0

void Unwind_005cc3b0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::map<void*,class_PKCAlgorithm*,struct__STL::less<void*>_>::
  ~map<void*,class_PKCAlgorithm*,struct__STL::less<void*>_>
            (*(map<void*,class_PKCAlgorithm*,struct__STL::less<void*>_> **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc410
// addr: 005cc410

void Unwind_005cc410(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x28));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc4b0
// addr: 005cc4b0

void Unwind_005cc4b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x2c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc510
// addr: 005cc510

void Unwind_005cc510(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc590
// addr: 005cc590

void Unwind_005cc590(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc5f0
// addr: 005cc5f0

void Unwind_005cc5f0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 100));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc620
// addr: 005cc620

void Unwind_005cc620(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x74));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc6b0
// addr: 005cc6b0

void Unwind_005cc6b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x18) + 0x248));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc6f1
// addr: 005cc6f1

void Unwind_005cc6f1(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 2) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x20));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc70b
// addr: 005cc70b

void Unwind_005cc70b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 4) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc73b
// addr: 005cc73b

void Unwind_005cc73b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 8) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x20));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc755
// addr: 005cc755

void Unwind_005cc755(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 0x10) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x14) + 0x10));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc785
// addr: 005cc785

void Unwind_005cc785(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 0x20) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x2c));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc990
// addr: 005cc990

void Unwind_005cc990(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x20));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005cc9ea
// addr: 005cc9ea

void Unwind_005cc9ea(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x34) + 0x18));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005ccaa9
// addr: 005ccaa9

void Unwind_005ccaa9(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x20) + 4;
  }
  ExtAlloc::deque<class_clSegment*>::~deque<class_clSegment*>
            (*(deque<class_clSegment*> **)(unaff_EBP + -0x30));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ccb10
// addr: 005ccb10

void Unwind_005ccb10(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x74) == 0) {
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x70) = *(int *)(unaff_EBP + -0x74) + 4;
  }
  ExtAlloc::deque<class_clSegment*>::~deque<class_clSegment*>
            (*(deque<class_clSegment*> **)(unaff_EBP + -0x70));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ccc10
// addr: 005ccc10

void Unwind_005ccc10(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + -0x10) + 0x98));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005ccc48
// addr: 005ccc48

void Unwind_005ccc48(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(unaff_EBP + 8) + 0xc));
    return;
  }
  return;
}



/* from unknown.cpp */
// func: Unwind@005ccca3
// addr: 005ccca3

void Unwind_005ccca3(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x18) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x10));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ccd0c
// addr: 005ccd0c

void Unwind_005ccd0c(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x114) == 0) {
    *(undefined4 *)(unaff_EBP + -0x110) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x110) = *(int *)(unaff_EBP + -0x114) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x110));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ccd60
// addr: 005ccd60

void Unwind_005ccd60(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x24));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ccda8
// addr: 005ccda8

void Unwind_005ccda8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x14) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x1c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005cce98
// addr: 005cce98

void Unwind_005cce98(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x5c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ccf60
// addr: 005ccf60

void Unwind_005ccf60(void)

{
  int unaff_EBP;
  
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            (*(_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               **)(unaff_EBP + -0x1c));
  return;
}



/* from unknown.cpp */
// func: Unwind@005ccfc8
// addr: 005ccfc8

void Unwind_005ccfc8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + 4) + 4;
  }
  ExtAlloc::list<class_clRcvElement*>::~list<class_clRcvElement*>
            (*(list<class_clRcvElement*> **)(unaff_EBP + -0x5c));
  return;
}

