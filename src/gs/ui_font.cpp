
/* from: gs:ui_font.cpp
   addr: 00517290 */

void __thiscall uiFONT_PAGE::uiFONT_PAGE(uiFONT_PAGE *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}




/* from: gs:ui_font.cpp
   addr: 005172B0 */

void __thiscall uiFONT::Create(uiFONT *this,objOBJ *param_1)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  objOBJ *poVar13;
  arrStdCmp<class_uiFONT_PAGE> local_11;
  objOBJ *local_10;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  local_10 = param_1;
  objOBJ_ITER::Rewind((objOBJ_ITER *)&local_10);
  arrVector<class_uiFONT_PAGE>::Resize((arrVector<class_uiFONT_PAGE> *)(this + 0x54),0);
  local_c = (objOBJ *)0x0;
  if (local_10 != (objOBJ *)0x0) {
    local_4 = 0;
    local_c = *(objOBJ **)(local_10 + 0x38);
    local_8 = local_c;
  }
  do {
    if ((local_c == (objOBJ *)0x0) || ((local_4 != 0 && (local_8 == local_c)))) {
      arrVector<class_uiFONT_PAGE>::Sort
                ((arrVector<class_uiFONT_PAGE> *)(this + 0x54),&local_11,
                 (arrStdSwap<class_uiFONT_PAGE> *)&param_1);
      iVar4 = *(int *)(this + 0x58);
      *(undefined4 *)(this + 0x4c) = 0;
      *(undefined4 *)(this + 0x50) = 0;
      if (0 < iVar4) {
        iVar8 = *(int *)(this + 0x54);
        do {
          iVar10 = *(int *)(iVar8 + 4);
          if (iVar10 < *(int *)(iVar8 + 0xc) + iVar10) {
            do {
              iVar7 = (iVar10 - *(int *)(iVar8 + 4)) * 0x40 + *(int *)(iVar8 + 8);
              fVar1 = -*(float *)(iVar7 + 4);
              if (fVar1 < *(float *)(this + 0x4c)) {
                fVar1 = *(float *)(this + 0x4c);
              }
              *(float *)(this + 0x4c) = fVar1;
              fVar1 = *(float *)(iVar7 + 0x24);
              if (fVar1 < *(float *)(this + 0x50)) {
                fVar1 = *(float *)(this + 0x50);
              }
              *(float *)(this + 0x50) = fVar1;
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(iVar8 + 4) + *(int *)(iVar8 + 0xc));
          }
          iVar8 = iVar8 + 0x14;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      return;
    }
    pcVar3 = *(char **)(local_8 + 0x18);
    uVar5 = 0xffffffff;
    pcVar9 = pcVar3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar6 = 0xffffffff;
    pcVar9 = s_page_;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    if (~uVar6 - 1 < ~uVar5 - 1) {
      uVar5 = 0xffffffff;
      pcVar9 = s_page_;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      bVar12 = true;
      pcVar9 = pcVar3;
      pcVar11 = s_page_;
      do {
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) break;
        bVar12 = *pcVar9 == *pcVar11;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar12);
      if (bVar12) {
        uVar5 = 0xffffffff;
        pcVar9 = s_page_;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        poVar13 = local_8;
        iVar4 = atoi(pcVar3 + (~uVar5 - 1));
        AddPage(this,iVar4,poVar13);
      }
    }
    local_4 = 1;
    local_8 = *(objOBJ **)(local_8 + 0x30);
  } while( true );
}




/* from: gs:ui_font.cpp
   addr: 00517430 */

void __thiscall uiFONT::AddPage(uiFONT *this,int param_1,objOBJ *param_2)

{
  byte *pbVar1;
  float *pfVar2;
  float fVar3;
  byte *pbVar4;
  float *pfVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int extraout_EDX;
  uiFONT_PAGE *puVar11;
  objOBJ *poVar12;
  int iVar13;
  float *pfVar14;
  objOBJ *this_00;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 local_6c;
  undefined4 local_68;
  arrVector<struct_uiFONT_LETTER> local_64 [12];
  objOBJ *local_58;
  byte *local_54;
  byte *local_50;
  int local_4c;
  void *local_48;
  int local_44;
  undefined4 local_40;
  float local_3c [3];
  Record local_30 [8];
  uiFONT *local_28;
  int local_24;
  int local_20;
  float *local_1c;
  float *local_18;
  uiFONT_PAGE *local_14;
  float *local_10;
  byte *local_c;
  arrStdCmp<struct_uiFONT_TMP_LINE> local_5;
  
  local_58 = param_2;
  local_28 = this;
  objOBJ_ITER::Rewind((objOBJ_ITER *)&local_58);
  local_48 = (void *)0x0;
  local_40 = 0;
  local_44 = 0;
  arrVector<struct_uiFONT_TMP_LINE>::Resize((arrVector<struct_uiFONT_TMP_LINE> *)&local_48,0);
  arrVector<struct_uiFONT_LETTER>::arrVector<struct_uiFONT_LETTER>(local_64,0);
  this_00 = (objOBJ *)(this + 0x54);
  local_6c = 0;
  local_68 = 0;
  param_2 = this_00;
  arrVector<class_uiFONT_PAGE>::Insert
            ((arrVector<class_uiFONT_PAGE> *)this_00,*(int *)(this + 0x58),(uiFONT_PAGE *)&local_6c,
             1);
  puVar11 = (uiFONT_PAGE *)(*(int *)this_00 + -0x14 + *(int *)(this + 0x58) * 0x14);
  local_14 = puVar11;
  arrVector<unsigned_char>::~arrVector<unsigned_char>((arrVector<unsigned_char> *)local_64);
  local_54 = (byte *)0x0;
  if (local_58 != (objOBJ *)0x0) {
    local_4c = 0;
    local_54 = *(byte **)(local_58 + 0x38);
    local_50 = local_54;
  }
  for (; (iVar13 = 0, local_54 != (byte *)0x0 && ((local_4c == 0 || (local_50 != local_54))));
      local_50 = *(byte **)(local_50 + 0x30)) {
    if (*(int *)(local_50 + 0x38) != 0) {
      arrVector<struct_wrUI_STRINGS::Record>::Insert
                ((arrVector<struct_wrUI_STRINGS::Record> *)&local_48,local_44,local_30,1);
      pfVar10 = (float *)((int)local_48 + local_44 * 8 + -8);
      local_10 = pfVar10;
      pfVar10[1] = (float)local_50;
      puVar11 = local_14;
      if (*(int *)(local_50 + 0x14) != 0) {
        if ((*local_50 & 1) == 0) {
          pfVar14 = *(float **)(*(int *)(local_50 + 0x28) + 0x40);
          local_c = local_50 + 0x3c;
          local_18 = local_3c;
          local_1c = pfVar14;
          this_00 = param_2;
          if (m3dSimdType != 0) {
            if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar15 = (undefined4)*(undefined8 *)pfVar14;
              uVar18 = CONCAT44(uVar15,uVar15);
              uVar15 = (undefined4)((ulonglong)*(undefined8 *)pfVar14 >> 0x20);
              uVar21 = CONCAT44(uVar15,uVar15);
              uVar22 = CONCAT44(pfVar14[2],pfVar14[2]);
              uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)local_c);
              uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_50 + 0x4c));
              uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_50 + 0x5c));
              uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(local_50 + 0x6c));
              uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_50 + 0x44));
              uVar18 = PackedFloatingADD(uVar17,uVar19);
              uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_50 + 0x54));
              uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(local_50 + 100));
              uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(local_50 + 0x74));
              uVar18 = PackedFloatingADD(uVar16,uVar18);
              uVar16 = PackedFloatingADD(uVar17,uVar22);
              local_3c[1] = (float)((ulonglong)uVar18 >> 0x20);
              local_3c[0] = (float)uVar18;
              uVar18 = PackedFloatingADD(uVar21,uVar16);
              local_3c[2] = (float)uVar18;
              FastExitMediaState();
            }
            else {
              iVar13 = 0;
              local_24 = (int)local_c - (int)local_3c;
              pfVar5 = local_3c;
              do {
                iVar8 = local_24;
                iVar7 = 0;
                *pfVar5 = 0.0;
                pfVar9 = (float *)(iVar8 + (int)pfVar5);
                do {
                  pfVar2 = pfVar14 + iVar7;
                  fVar3 = *pfVar9;
                  iVar7 = iVar7 + 1;
                  pfVar9 = pfVar9 + 4;
                  *pfVar5 = *pfVar2 * fVar3 + *pfVar5;
                } while (iVar7 < 3);
                iVar8 = iVar13 + iVar7 * 4;
                iVar13 = iVar13 + 1;
                *pfVar5 = *(float *)(local_c + iVar8 * 4) + *pfVar5;
                pfVar5 = pfVar5 + 1;
              } while (iVar13 < 3);
            }
          }
        }
        else {
          pfVar14 = *(float **)(*(int *)(local_50 + 0x28) + 0x40);
          local_3c[0] = *pfVar14;
          local_3c[1] = pfVar14[1];
          local_3c[2] = pfVar14[2];
        }
        pbVar4 = (byte *)pfVar10[1];
        *pfVar10 = -local_3c[1];
        local_20 = 1;
        puVar11 = local_14;
        if (1 < *(int *)(pbVar4 + 0x14)) {
          local_24 = 0xc;
          do {
            if ((*pbVar4 & 1) == 0) {
              pbVar1 = pbVar4 + 0x3c;
              local_1c = local_3c;
              pfVar14 = (float *)(*(int *)(*(int *)(pbVar4 + 0x28) + 0x40) + local_24);
              local_18 = pfVar14;
              local_c = pbVar1;
              pfVar10 = local_10;
              if (m3dSimdType != 0) {
                if (m3dSimdType == 1) {
                  FastExitMediaState();
                  uVar15 = (undefined4)*(undefined8 *)pfVar14;
                  uVar18 = CONCAT44(uVar15,uVar15);
                  uVar15 = (undefined4)((ulonglong)*(undefined8 *)pfVar14 >> 0x20);
                  uVar21 = CONCAT44(uVar15,uVar15);
                  uVar22 = CONCAT44(pfVar14[2],pfVar14[2]);
                  uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)pbVar1);
                  uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(pbVar4 + 0x4c));
                  uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(pbVar4 + 0x5c));
                  uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(pbVar4 + 0x6c));
                  uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(pbVar4 + 0x44));
                  uVar18 = PackedFloatingADD(uVar17,uVar19);
                  uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(pbVar4 + 0x54));
                  uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(pbVar4 + 100));
                  uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(pbVar4 + 0x74));
                  uVar18 = PackedFloatingADD(uVar16,uVar18);
                  uVar16 = PackedFloatingADD(uVar17,uVar22);
                  local_3c[1] = (float)((ulonglong)uVar18 >> 0x20);
                  local_3c[0] = (float)uVar18;
                  uVar18 = PackedFloatingADD(uVar21,uVar16);
                  local_3c[2] = (float)uVar18;
                  FastExitMediaState();
                }
                else {
                  iVar13 = 0;
                  local_1c = (float *)(pbVar1 + -(int)local_3c);
                  pfVar5 = local_3c;
                  do {
                    pfVar10 = local_1c;
                    iVar8 = 0;
                    *pfVar5 = 0.0;
                    pfVar10 = (float *)((int)pfVar10 + (int)pfVar5);
                    do {
                      pfVar9 = pfVar14 + iVar8;
                      fVar3 = *pfVar10;
                      iVar8 = iVar8 + 1;
                      pfVar10 = pfVar10 + 4;
                      *pfVar5 = *pfVar9 * fVar3 + *pfVar5;
                    } while (iVar8 < 3);
                    iVar8 = iVar13 + iVar8 * 4;
                    iVar13 = iVar13 + 1;
                    *pfVar5 = *(float *)(pbVar1 + iVar8 * 4) + *pfVar5;
                    pfVar5 = pfVar5 + 1;
                    pfVar10 = local_10;
                  } while (iVar13 < 3);
                }
              }
            }
            else {
              pfVar14 = (float *)(*(int *)(*(int *)(pbVar4 + 0x28) + 0x40) + local_24);
              local_3c[0] = *pfVar14;
              local_3c[1] = pfVar14[1];
              local_3c[2] = pfVar14[2];
            }
            fVar3 = -local_3c[1];
            if (*pfVar10 < -local_3c[1]) {
              fVar3 = *pfVar10;
            }
            pbVar4 = (byte *)pfVar10[1];
            *pfVar10 = fVar3;
            local_20 = local_20 + 1;
            local_24 = local_24 + 0xc;
            puVar11 = local_14;
            this_00 = param_2;
          } while (local_20 < *(int *)(pbVar4 + 0x14));
        }
      }
    }
    local_4c = 1;
  }
  arrVector<struct_uiFONT_TMP_LINE>::Sort
            ((arrVector<struct_uiFONT_TMP_LINE> *)&local_48,&local_5,
             (arrStdSwap<struct_uiFONT_TMP_LINE> *)((int)&param_2 + 3));
  if (0 < local_44) {
    do {
      AddLettersLine(local_28,puVar11,*(objOBJ **)((int)local_48 + iVar13 * 8 + 4),
                     *(float *)((int)local_48 + iVar13 * 8));
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_44);
  }
  if (*(int *)(puVar11 + 0xc) == 0) {
    iVar13 = *(int *)((arrVector<class_uiFONT_PAGE> *)this_00 + 4);
    poVar12 = (objOBJ *)(iVar13 + -1);
    param_2 = poVar12;
    if ((int)poVar12 < iVar13) {
      iVar13 = (int)poVar12 * 0x14;
      do {
        arrVector<unsigned_char>::~arrVector<unsigned_char>
                  ((arrVector<unsigned_char> *)(*(int *)this_00 + 8 + iVar13));
        poVar12 = poVar12 + 1;
        iVar13 = iVar13 + 0x14;
      } while ((int)poVar12 < *(int *)((arrVector<class_uiFONT_PAGE> *)this_00 + 4));
      *(objOBJ **)((arrVector<class_uiFONT_PAGE> *)this_00 + 4) = param_2;
    }
    else {
      if (iVar13 < (int)poVar12) {
        arrVector<class_uiFONT_PAGE>::Reserve((arrVector<class_uiFONT_PAGE> *)this_00,(int)poVar12);
        iVar13 = *(int *)((arrVector<class_uiFONT_PAGE> *)this_00 + 4);
        if (iVar13 < (int)param_2) {
          iVar8 = iVar13 * 0x14;
          iVar13 = (int)param_2 - iVar13;
          do {
            if ((uiFONT_PAGE *)(*(int *)this_00 + iVar8) != (uiFONT_PAGE *)0x0) {
              uiFONT_PAGE::uiFONT_PAGE((uiFONT_PAGE *)(*(int *)this_00 + iVar8));
              iVar8 = extraout_EDX;
            }
            iVar8 = iVar8 + 0x14;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
      *(objOBJ **)((arrVector<class_uiFONT_PAGE> *)this_00 + 4) = param_2;
    }
  }
  else {
    iVar13 = *(int *)(puVar11 + 0xc);
    if (iVar13 != *(int *)(puVar11 + 0x10)) {
      pvVar6 = apRealloc(*(void **)(puVar11 + 8),iVar13 << 6);
      *(void **)(puVar11 + 8) = pvVar6;
      *(int *)(puVar11 + 0x10) = iVar13;
    }
    *(int *)(puVar11 + 4) = param_1;
  }
  apFree(local_48);
  return;
}




/* from: gs:ui_font.cpp
   addr: 005179C0 */

void __thiscall
uiFONT::AddLettersLine(uiFONT *this,uiFONT_PAGE *param_1,objOBJ *param_2,float param_3)

{
  arrVector<struct_uiFONT_LETTER> *this_00;
  float fVar1;
  int iVar2;
  uiFONT_PAGE *puVar3;
  objOBJ *poVar4;
  txmTEXTURE *ptVar5;
  int iVar6;
  uiFONT_PAGE *puVar7;
  int iVar8;
  int iVar9;
  objOBJ *poVar10;
  objOBJ *this_01;
  int iVar11;
  int iVar12;
  float *pfVar13;
  arrStdSwapMem<struct_uiFONT_LETTER> local_55;
  uiFONT_PAGE *local_54;
  void *local_50;
  int local_4c;
  objOBJ *local_48;
  int local_44;
  uiFONT_LETTER local_40 [64];
  
  poVar4 = param_2;
  puVar3 = param_1;
  poVar10 = (objOBJ *)0x0;
  this_01 = local_48;
  iVar11 = local_44;
  if (param_2 != (objOBJ *)0x0) {
    this_01 = *(objOBJ **)(param_2 + 0x38);
    iVar11 = 0;
  }
  local_50 = (void *)0x0;
  local_48 = (objOBJ *)0x0;
  local_4c = 0;
  arrVector<struct_uiFONT_LETTER>::Resize((arrVector<struct_uiFONT_LETTER> *)&local_50,0);
  if (poVar4 != (objOBJ *)0x0) {
    poVar10 = *(objOBJ **)(poVar4 + 0x38);
    iVar11 = 0;
    this_01 = poVar10;
  }
  for (; (poVar10 != (objOBJ *)0x0 && ((iVar11 == 0 || (this_01 != poVar10))));
      this_01 = *(objOBJ **)(this_01 + 0x30)) {
    ptVar5 = objOBJ::GetFaceTexRendMtl(this_01,0,0);
    if (*(int *)param_1 == 0) {
      *(txmTEXTURE **)param_1 = ptVar5;
    }
    arrVector<struct_uiFONT_LETTER>::Insert
              ((arrVector<struct_uiFONT_LETTER> *)&local_50,local_4c,local_40,1);
    uiGetObjRenderRect(this_01,(uiVERTEX *)(local_4c * 0x40 + -0x40 + (int)local_50));
    iVar11 = 1;
  }
  do {
    iVar11 = 1;
    local_54 = (uiFONT_PAGE *)0x0;
    if (local_4c < 2) break;
    iVar8 = 0x40;
    iVar12 = iVar11;
    iVar9 = iVar8;
joined_r0x00517a77:
    do {
      iVar2 = iVar12;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar8 + -0x40;
        iVar6 = arrStdCmp<float>::cmp
                          ((arrStdCmp<float> *)&param_2,(float *)((int)local_50 + iVar8),
                           (float *)(iVar9 + (int)local_50));
        iVar12 = iVar2 + -1;
        if (iVar6 == 1) goto joined_r0x00517a77;
      }
      if (iVar2 != iVar11) {
        arrStdSwapMem<struct_uiFONT_LETTER>::operator()
                  (&local_55,(uiFONT_LETTER *)(iVar9 + (int)local_50),
                   (uiFONT_LETTER *)(iVar2 * 0x40 + (int)local_50));
        local_54 = (uiFONT_PAGE *)0x1;
      }
      iVar11 = iVar11 + 1;
      iVar8 = iVar9 + 0x40;
      iVar12 = iVar11;
      iVar9 = iVar8;
    } while (iVar11 < local_4c);
  } while (local_54 != (uiFONT_PAGE *)0x0);
  param_2 = (objOBJ *)0x0;
  if (0 < local_4c) {
    param_1 = (uiFONT_PAGE *)0x0;
    this_00 = (arrVector<struct_uiFONT_LETTER> *)(puVar3 + 8);
    do {
      local_54 = (uiFONT_PAGE *)((int)local_50 + (int)param_1);
      iVar11 = 4;
      fVar1 = *(float *)local_54;
      puVar7 = local_54;
      do {
        iVar11 = iVar11 + -1;
        *(float *)puVar7 = *(float *)puVar7 - fVar1;
        *(float *)(puVar7 + 4) = *(float *)(puVar7 + 4) - param_3;
        puVar7 = puVar7 + 0x10;
      } while (iVar11 != 0);
      iVar8 = *(int *)(puVar3 + 0xc);
      iVar11 = iVar8 + 1;
      if (*(int *)(puVar3 + 0x10) < iVar11) {
        iVar12 = *(int *)(puVar3 + 0x10) * 2;
        if (iVar12 <= iVar11) {
          iVar12 = iVar11;
        }
        arrVector<struct_uiFONT_LETTER>::Reserve(this_00,iVar12);
      }
      iVar12 = iVar8 * 0x40;
      memmove((void *)(iVar11 * 0x40 + *(int *)this_00),(void *)(*(int *)this_00 + iVar12),
              (*(int *)(puVar3 + 0xc) - iVar8) * 0x40);
      if (iVar8 < iVar11) {
        iVar11 = iVar11 - iVar8;
        do {
          if ((float *)(*(int *)this_00 + iVar12) != (float *)0x0) {
            puVar7 = local_54;
            pfVar13 = (float *)(*(int *)this_00 + iVar12);
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              *pfVar13 = *(float *)puVar7;
              puVar7 = puVar7 + 4;
              pfVar13 = pfVar13 + 1;
            }
          }
          iVar12 = iVar12 + 0x40;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 0x40;
      *(int *)(puVar3 + 0xc) = *(int *)(puVar3 + 0xc) + 1;
    } while ((int)param_2 < local_4c);
  }
  apFree(local_50);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_font.cpp
   addr: 00517BD0 */

void __thiscall uiFONT::GetStringSizeW(uiFONT *this,ushort *param_1,m2dV *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  uint in_stack_00000010;
  
  fVar2 = *(float *)(this + 0x50);
  fVar3 = *(float *)(this + 0x4c);
  uVar9 = *(ushort *)param_2;
  fVar6 = ___real_00000000;
  if (uVar9 != 0) {
    do {
      if ((in_stack_00000010 & 0x10) == 0) {
        uVar10 = (uint)uVar9;
        iVar8 = 0;
        if (*(int *)(this + 0x58) == 0) {
LAB_00517c57:
          pfVar11 = *(float **)(*(int *)(this + 0x54) + 8);
        }
        else {
          iVar5 = *(int *)(this + 0x54);
          iVar12 = *(int *)(this + 0x58);
          do {
            iVar7 = iVar12 + iVar8 >> 1;
            iVar1 = iVar5 + iVar7 * 0x14;
            if (*(int *)(iVar5 + 4 + iVar7 * 0x14) <= (int)uVar10) {
              if ((int)uVar10 < *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 4)) {
                iVar5 = iVar5 + iVar7 * 0x14;
                if (iVar5 == 0) goto LAB_00517c57;
                pfVar11 = (float *)((uVar10 - *(int *)(iVar5 + 4)) * 0x40 + *(int *)(iVar5 + 8));
                goto LAB_00517c6c;
              }
              iVar8 = iVar7 + 1;
              iVar7 = iVar12;
            }
            iVar12 = iVar7;
          } while (iVar8 != iVar7);
          pfVar11 = *(float **)(*(int *)(this + 0x54) + 8);
        }
LAB_00517c6c:
        fVar4 = pfVar11[8] - *pfVar11;
        param_2 = param_2 + 2;
      }
      else {
        fVar4 = *(float *)(this + 0x48);
      }
      fVar6 = fVar6 + fVar4;
      uVar9 = *(ushort *)param_2;
    } while (uVar9 != 0);
  }
  fVar4 = *(float *)(param_3 + 4);
  *(float *)param_1 = fVar6 * *(float *)param_3;
  *(float *)(param_1 + 2) = (fVar2 + fVar3) * fVar4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_font.cpp
   addr: 00517CC0 */

void __thiscall
uiFONT::AdjustStringPosW(uiFONT *this,m2dV *param_1,ushort *param_2,m2dV *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if ((param_4 & 3U) == 1) {
    fVar4 = ___real_00000000;
    if (*param_2 != 0) {
      do {
        if ((param_4 & 0x10U) == 0) {
          uVar9 = (uint)*param_2;
          iVar7 = 0;
          if (*(int *)(this + 0x58) == 0) {
LAB_00517e24:
            pfVar6 = *(float **)(*(int *)(this + 0x54) + 8);
          }
          else {
            iVar3 = *(int *)(this + 0x54);
            iVar8 = *(int *)(this + 0x58);
            do {
              iVar5 = iVar8 + iVar7 >> 1;
              iVar1 = iVar3 + iVar5 * 0x14;
              if (*(int *)(iVar3 + 4 + iVar5 * 0x14) <= (int)uVar9) {
                if ((int)uVar9 < *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 4)) {
                  iVar3 = iVar3 + iVar5 * 0x14;
                  if (iVar3 == 0) goto LAB_00517e24;
                  pfVar6 = (float *)((uVar9 - *(int *)(iVar3 + 4)) * 0x40 + *(int *)(iVar3 + 8));
                  goto LAB_00517e3d;
                }
                iVar7 = iVar5 + 1;
                iVar5 = iVar8;
              }
              iVar8 = iVar5;
            } while (iVar7 != iVar5);
            pfVar6 = *(float **)(*(int *)(this + 0x54) + 8);
          }
LAB_00517e3d:
          fVar2 = pfVar6[8] - *pfVar6;
          param_2 = param_2 + 1;
        }
        else {
          fVar2 = *(float *)(this + 0x48);
        }
        fVar4 = fVar4 + fVar2;
      } while (*param_2 != 0);
    }
    *(float *)param_1 = *(float *)param_1 - fVar4 * *(float *)param_3 * ___real_3f000000;
  }
  else if ((param_4 & 3U) == 2) {
    fVar4 = ___real_00000000;
    if (*param_2 != 0) {
      do {
        if ((param_4 & 0x10U) == 0) {
          uVar9 = (uint)*param_2;
          iVar7 = 0;
          if (*(int *)(this + 0x58) == 0) {
LAB_00517d5d:
            pfVar6 = *(float **)(*(int *)(this + 0x54) + 8);
          }
          else {
            iVar3 = *(int *)(this + 0x54);
            iVar8 = *(int *)(this + 0x58);
            do {
              iVar5 = iVar8 + iVar7 >> 1;
              iVar1 = iVar3 + iVar5 * 0x14;
              if (*(int *)(iVar3 + 4 + iVar5 * 0x14) <= (int)uVar9) {
                if ((int)uVar9 < *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 4)) {
                  iVar3 = iVar3 + iVar5 * 0x14;
                  if (iVar3 == 0) goto LAB_00517d5d;
                  pfVar6 = (float *)((uVar9 - *(int *)(iVar3 + 4)) * 0x40 + *(int *)(iVar3 + 8));
                  goto LAB_00517d76;
                }
                iVar7 = iVar5 + 1;
                iVar5 = iVar8;
              }
              iVar8 = iVar5;
            } while (iVar7 != iVar5);
            pfVar6 = *(float **)(*(int *)(this + 0x54) + 8);
          }
LAB_00517d76:
          fVar2 = pfVar6[8] - *pfVar6;
          param_2 = param_2 + 1;
        }
        else {
          fVar2 = *(float *)(this + 0x48);
        }
        fVar4 = fVar4 + fVar2;
      } while (*param_2 != 0);
    }
    *(float *)param_1 = *(float *)param_1 - fVar4 * *(float *)param_3;
  }
  uVar9 = param_4 & 0xc;
  if (uVar9 == 4) {
    *(float *)(param_1 + 4) =
         *(float *)(this + 0x4c) * *(float *)(param_3 + 4) + *(float *)(param_1 + 4);
  }
  else {
    if (uVar9 == 8) {
      *(float *)(param_1 + 4) =
           *(float *)(param_1 + 4) - *(float *)(this + 0x50) * *(float *)(param_3 + 4);
      return;
    }
    if (uVar9 == 0xc) {
      *(float *)(param_1 + 4) =
           ((*(float *)(this + 0x4c) + *(float *)(this + 0x50)) * ___real_3f000000 -
           *(float *)(this + 0x50)) * *(float *)(param_3 + 4) + *(float *)(param_1 + 4);
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_font.cpp
   addr: 00517F00 */

void __thiscall
uiFONT::GetStringRectW
          (uiFONT *this,float param_2,float param_3,ushort *param_4,m2dV *param_5,ushort *param_6,
          float *param_7,float *param_8)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  float *pfVar9;
  m2dV *pmVar10;
  int iVar11;
  int iVar12;
  
  uVar5 = (uint)param_6;
  pmVar10 = param_5;
  puVar7 = param_4;
  AdjustStringPosW(this,(m2dV *)&param_2,param_4,param_5,(int)param_6);
  param_6 = puVar7;
  fVar4 = ___real_00000000;
  if (*puVar7 != 0) {
    do {
      if ((uVar5 & 0x10) == 0) {
        uVar8 = (uint)*puVar7;
        iVar12 = 0;
        if (*(int *)(this + 0x58) == 0) {
LAB_00517f8e:
          pfVar9 = *(float **)(*(int *)(this + 0x54) + 8);
        }
        else {
          iVar3 = *(int *)(this + 0x54);
          iVar11 = *(int *)(this + 0x58);
          do {
            iVar6 = iVar11 + iVar12 >> 1;
            iVar1 = iVar3 + iVar6 * 0x14;
            if (*(int *)(iVar3 + 4 + iVar6 * 0x14) <= (int)uVar8) {
              if ((int)uVar8 < *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 4)) {
                iVar3 = iVar3 + iVar6 * 0x14;
                if (iVar3 == 0) goto LAB_00517f8e;
                pfVar9 = (float *)((uVar8 - *(int *)(iVar3 + 4)) * 0x40 + *(int *)(iVar3 + 8));
                goto LAB_00517fa3;
              }
              iVar12 = iVar6 + 1;
              iVar6 = iVar11;
            }
            iVar11 = iVar6;
          } while (iVar12 != iVar6);
          pfVar9 = *(float **)(*(int *)(this + 0x54) + 8);
        }
LAB_00517fa3:
        fVar2 = pfVar9[8] - *pfVar9;
        puVar7 = param_6 + 1;
        pmVar10 = param_5;
        param_6 = puVar7;
      }
      else {
        fVar2 = *(float *)(this + 0x48);
      }
      fVar4 = fVar4 + fVar2;
    } while (*puVar7 != 0);
  }
  fVar2 = *(float *)pmVar10;
  *param_7 = param_2;
  param_7[1] = param_3 - *(float *)(this + 0x4c) * *(float *)(pmVar10 + 4);
  *param_8 = fVar4 * fVar2 + param_2;
  param_8[1] = *(float *)(this + 0x50) * *(float *)(pmVar10 + 4) + param_3;
  return;
}




/* from: gs:ui_font.cpp
   addr: 00518000 */

void __thiscall
uiFONT::PrintW(uiFONT *this,float *param_1,camCAMERA *param_2,ushort *param_4,float param_5,
              float param_6,undefined4 param_7,m2dV *param_8,uint param_9)

{
  int iVar1;
  float fVar2;
  m2dV *pmVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  txmTEXTURE *local_18c;
  float fStack_184;
  float afStack_180 [2];
  undefined4 local_178 [21];
  float fStack_124;
  rendCFG local_c4 [184];
  undefined4 local_c;
  undefined4 local_8;
  
  uVar4 = param_9;
  pmVar3 = param_8;
  local_c = 0x4080af;
  local_8 = param_7;
  AdjustStringPosW(this,(m2dV *)&param_5,param_4,param_8,param_9);
  local_18c = (txmTEXTURE *)0x0;
  puVar5 = local_178;
  iVar9 = 4;
  do {
    puVar5[-1] = 0x3dcccccd;
    *puVar5 = 0x3f800000;
    puVar5 = puVar5 + 0xc;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar8 = *param_4;
  if (uVar8 != 0) {
    do {
      uVar10 = (uint)uVar8;
      iVar9 = 0;
      if (*(int *)(this + 0x58) == 0) {
LAB_005180da:
        puVar5 = *(undefined4 **)(this + 0x54);
        iVar9 = puVar5[2];
      }
      else {
        iVar12 = *(int *)(this + 0x54);
        iVar13 = *(int *)(this + 0x58);
        do {
          iVar6 = iVar13 + iVar9 >> 1;
          iVar1 = iVar12 + iVar6 * 0x14;
          if (*(int *)(iVar12 + 4 + iVar6 * 0x14) <= (int)uVar10) {
            if ((int)uVar10 < *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 4)) {
              puVar5 = (undefined4 *)(iVar12 + iVar6 * 0x14);
              if (puVar5 == (undefined4 *)0x0) goto LAB_005180da;
              iVar9 = (uVar10 - puVar5[1]) * 0x40 + puVar5[2];
              goto LAB_005180f5;
            }
            iVar9 = iVar6 + 1;
            iVar6 = iVar13;
          }
          iVar13 = iVar6;
        } while (iVar9 != iVar6);
        puVar5 = *(undefined4 **)(this + 0x54);
        iVar9 = puVar5[2];
      }
LAB_005180f5:
      if (local_18c != (txmTEXTURE *)*puVar5) {
        rendCFG::InitMtl1(local_c4,(txmTEXTURE *)*puVar5);
        local_18c = (txmTEXTURE *)*puVar5;
        (**(code **)(*(int *)rendDrv + 0x50))(local_c4,0);
      }
      iVar12 = 4;
      pfVar7 = (float *)(iVar9 + 8);
      pfVar11 = afStack_180;
      do {
        iVar12 = iVar12 + -1;
        pfVar11[-1] = pfVar7[-2] * *(float *)pmVar3 + param_5;
        *pfVar11 = pfVar7[-1] * *(float *)(pmVar3 + 4) + param_6;
        pfVar11[5] = *pfVar7;
        pfVar11[6] = pfVar7[1];
        pfVar7 = pfVar7 + 4;
        pfVar11 = pfVar11 + 0xc;
      } while (iVar12 != 0);
      if (*param_4 != 0x20) {
        rendDRIVER::RenderPolyCompat(rendDrv,param_2,4,(rendVERTEX *)&fStack_184,local_c4);
      }
      if ((uVar4 & 0x10) == 0) {
        fVar2 = fStack_124 - fStack_184;
      }
      else {
        fVar2 = *(float *)(this + 0x48) * *(float *)pmVar3;
      }
      param_5 = fVar2 + param_5;
      uVar8 = param_4[1];
      param_4 = param_4 + 1;
    } while (uVar8 != 0);
  }
  *param_1 = param_5;
  param_1[1] = param_6;
  return;
}




/* from: gs:ui_font.cpp
   addr: 00518200 */

uiFONT * __thiscall uiFONT_MANAGER::GetFont(uiFONT_MANAGER *this,char *param_1)

{
  uiFONT uVar1;
  uiFONT *puVar2;
  uiFONT *puVar3;
  int iVar4;
  uiFONT *puVar5;
  bool bVar6;
  
  puVar2 = *(uiFONT **)(this + 4);
  do {
    if (puVar2 == (uiFONT *)0x0) {
      return (uiFONT *)0x0;
    }
    puVar3 = puVar2 + 8;
    puVar5 = (uiFONT *)param_1;
    do {
      uVar1 = *puVar3;
      bVar6 = (byte)uVar1 < (byte)*puVar5;
      if (uVar1 != *puVar5) {
LAB_0051823c:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00518241;
      }
      if (uVar1 == (uiFONT)0x0) break;
      uVar1 = puVar3[1];
      bVar6 = (byte)uVar1 < (byte)puVar5[1];
      if (uVar1 != puVar5[1]) goto LAB_0051823c;
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar1 != (uiFONT)0x0);
    iVar4 = 0;
LAB_00518241:
    if (iVar4 == 0) {
      return puVar2;
    }
    puVar2 = *(uiFONT **)(puVar2 + 4);
  } while( true );
}




/* from: gs:ui_font.cpp
   addr: 00518260 */

int __thiscall uiFONT_MANAGER::CreateFont(uiFONT_MANAGER *this,char *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  animTPL *paVar5;
  animINST *this_00;
  objOBJ *poVar6;
  uiFONT *this_01;
  int *unaff_EBP;
  byte *pbVar7;
  bool bVar8;
  
  iVar2 = *(int *)(this + 4);
  do {
    if (iVar2 == 0) {
LAB_005182b9:
      paVar5 = (animTPL *)(**(code **)(*(int *)gsSysLevel + 0x24))(param_1);
      if (paVar5 == (animTPL *)0x0) {
        return 0;
      }
      this_00 = scnSCENE::CreateInst(gsScenePtr,paVar5,(animCREATE_DATA *)0x0,-1);
      if (this_00 == (animINST *)0x0) {
        return 0;
      }
      *(uint *)(this_00 + 4) = *(uint *)(this_00 + 4) | 0x10111;
      animINST::Validate(this_00,6);
      (**(code **)(*(int *)gsSysLevel + 0x2c))(this_00);
      poVar6 = objFindName(*(objOBJ **)(this_00 + 0x10),s_ui_font);
      if (poVar6 == (objOBJ *)0x0) {
        return 0;
      }
      this_01 = (uiFONT *)operator_new(0x60);
      if (this_01 == (uiFONT *)0x0) {
        this_01 = (uiFONT *)0x0;
      }
      else {
        *(undefined4 *)this_01 = 0;
        *(undefined4 *)(this_01 + 4) = 0;
        *(undefined4 *)(this_01 + 0x54) = 0;
        *(undefined4 *)(this_01 + 0x5c) = 0;
        *(undefined4 *)(this_01 + 0x58) = 0;
        strncpy((char *)(this_01 + 8),param_1,0x40);
        this_01[0x47] = (uiFONT)0x0;
        *(undefined4 *)(this_01 + 0x48) = 0;
        *(undefined4 *)(this_01 + 0x4c) = 0;
        *(undefined4 *)(this_01 + 0x50) = 0;
      }
      uiFONT::Create(this_01,poVar6);
      if (this_01 != (uiFONT *)0x0) {
        (**(code **)(*unaff_EBP + 8))(this_01);
        return 1;
      }
      return 0;
    }
    pbVar3 = (byte *)(iVar2 + 8);
    pbVar7 = (byte *)param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0051829f:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_005182a4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0051829f;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005182a4:
    if (iVar4 == 0) {
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_005182b9;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}




/* from: gs:ui_font.cpp
   addr: 005183A0 */

void __thiscall uiFONT_MANAGER::DestroyFont(uiFONT_MANAGER *this,char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
  bool bVar7;
  
  pvVar6 = *(void **)(this + 4);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  do {
    pbVar2 = (byte *)((int)pvVar6 + 8);
    pbVar5 = (byte *)param_1;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005183dc:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005183e1;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005183dc;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005183e1:
    if (iVar3 == 0) {
      if (pvVar6 == (void *)0x0) {
        return;
      }
      (**(code **)(*(int *)this + 0xc))(pvVar6);
      iVar3 = 0;
      if (0 < *(int *)((int)pvVar6 + 0x58)) {
        iVar4 = 0;
        do {
          apFree(*(void **)(*(int *)((int)pvVar6 + 0x54) + 8 + iVar4));
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x14;
        } while (iVar3 < *(int *)((int)pvVar6 + 0x58));
      }
      apFree(*(void **)((int)pvVar6 + 0x54));
      operator_delete(pvVar6);
      return;
    }
    pvVar6 = *(void **)((int)pvVar6 + 4);
    if (pvVar6 == (void *)0x0) {
      return;
    }
  } while( true );
}




/* from: gs:ui_font.cpp
   addr: 00518440 */

int __thiscall arrStdCmp<float>::cmp(arrStdCmp<float> *this,float *param_1,float *param_2)

{
  if (*param_1 < *param_2) {
    return -1;
  }
  if (*param_2 < *param_1) {
    return 1;
  }
  return 0;
}




/* from: gs:ui_font.cpp
   addr: 00518480 */

arrVector<struct_uiFONT_LETTER> * __thiscall
arrVector<struct_uiFONT_LETTER>::arrVector<struct_uiFONT_LETTER>
          (arrVector<struct_uiFONT_LETTER> *this,int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  if ((-1 < param_1) && (0 < param_1)) {
    pvVar1 = apRealloc((void *)0x0,param_1 << 6);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  *(int *)(this + 4) = param_1;
  return this;
}




/* from: gs:ui_font.cpp
   addr: 005184C0 */

void __thiscall
arrVector<class_uiFONT_PAGE>::Sort
          (arrVector<class_uiFONT_PAGE> *this,arrStdCmp<class_uiFONT_PAGE> *param_1,
          arrStdSwap<class_uiFONT_PAGE> *param_2)

{
  arrVector<struct_uiFONT_LETTER> *this_00;
  undefined4 *puVar1;
  arrVector<struct_uiFONT_LETTER> *this_01;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_20;
  uiFONT_LETTER *local_c;
  int local_8;
  int local_4;
  
  do {
    bVar5 = false;
    local_20 = 1;
    if (*(int *)(this + 4) < 2) {
      return;
    }
    iVar7 = 0x14;
    do {
      iVar6 = local_20 + -1;
      if (-1 < iVar6) {
        iVar2 = *(int *)(*(int *)this + 4 + iVar7);
        piVar8 = (int *)(*(int *)this + -0x10 + iVar7);
        do {
          if ((*piVar8 <= iVar2) && (*piVar8 < iVar2 != 0xffffffff)) break;
          iVar6 = iVar6 + -1;
          piVar8 = piVar8 + -5;
        } while (-1 < iVar6);
      }
      if (iVar6 + 1 != local_20) {
        iVar2 = *(int *)this;
        puVar1 = (undefined4 *)(iVar2 + (iVar6 + 1) * 0x14);
        local_c = (uiFONT_LETTER *)0x0;
        local_4 = 0;
        local_8 = 0;
        arrVector<struct_uiFONT_LETTER>::Resize((arrVector<struct_uiFONT_LETTER> *)&local_c,0);
        uVar3 = *(undefined4 *)(iVar2 + iVar7);
        uVar4 = *(undefined4 *)(iVar2 + 4 + iVar7);
        this_01 = (arrVector<struct_uiFONT_LETTER> *)(iVar2 + 8 + iVar7);
        arrVector<struct_uiFONT_LETTER>::Resize((arrVector<struct_uiFONT_LETTER> *)&local_c,0);
        if (local_4 != *(int *)(this_01 + 4)) {
          arrVector<struct_uiFONT_LETTER>::Realloc
                    ((arrVector<struct_uiFONT_LETTER> *)&local_c,local_8);
        }
        arrVector<struct_uiFONT_LETTER>::Insert
                  ((arrVector<struct_uiFONT_LETTER> *)&local_c,0,*(uiFONT_LETTER **)this_01,
                   *(uiFONT_LETTER **)this_01 + *(int *)(this_01 + 4) * 0x40);
        *(undefined4 *)(iVar2 + iVar7) = *puVar1;
        *(undefined4 *)(iVar2 + 4 + iVar7) = puVar1[1];
        this_00 = (arrVector<struct_uiFONT_LETTER> *)(puVar1 + 2);
        arrVector<struct_uiFONT_LETTER>::Resize(this_01,0);
        if (*(int *)(this_01 + 8) != puVar1[3]) {
          arrVector<struct_uiFONT_LETTER>::Realloc(this_01,*(int *)(this_01 + 4));
        }
        arrVector<struct_uiFONT_LETTER>::Insert
                  (this_01,0,*(uiFONT_LETTER **)this_00,
                   *(uiFONT_LETTER **)this_00 + puVar1[3] * 0x40);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        arrVector<struct_uiFONT_LETTER>::Resize(this_00,0);
        if (puVar1[4] != local_8) {
          arrVector<struct_uiFONT_LETTER>::Realloc(this_00,puVar1[3]);
        }
        arrVector<struct_uiFONT_LETTER>::Insert(this_00,0,local_c,local_c + local_8 * 0x40);
        apFree(local_c);
        bVar5 = true;
      }
      local_20 = local_20 + 1;
      iVar7 = iVar7 + 0x14;
    } while (local_20 < *(int *)(this + 4));
    if (!bVar5) {
      return;
    }
  } while( true );
}




/* from: gs:ui_font.cpp
   addr: 00518670 */

void __thiscall
arrVector<struct_uiFONT_TMP_LINE>::Sort
          (arrVector<struct_uiFONT_TMP_LINE> *this,arrStdCmp<struct_uiFONT_TMP_LINE> *param_1,
          arrStdSwap<struct_uiFONT_TMP_LINE> *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  
  do {
    iVar6 = 1;
    bVar4 = false;
    if (*(int *)(this + 4) < 2) {
      return;
    }
    do {
      iVar5 = iVar6 + -1;
      if (-1 < iVar5) {
        iVar1 = *(int *)this;
        pfVar7 = (float *)(iVar1 + -8 + iVar6 * 8);
        do {
          if ((*pfVar7 <= *(float *)(iVar1 + iVar6 * 8)) &&
             (*pfVar7 < *(float *)(iVar1 + iVar6 * 8) != 0xffffffff)) break;
          iVar5 = iVar5 + -1;
          pfVar7 = pfVar7 + -2;
        } while (-1 < iVar5);
      }
      iVar5 = iVar5 + 1;
      if (iVar5 != iVar6) {
        iVar1 = *(int *)this;
        bVar4 = true;
        uVar2 = *(undefined4 *)(iVar1 + iVar6 * 8);
        uVar3 = *(undefined4 *)(iVar1 + 4 + iVar6 * 8);
        *(undefined4 *)(iVar1 + iVar6 * 8) = *(undefined4 *)(iVar1 + iVar5 * 8);
        *(undefined4 *)(iVar1 + 4 + iVar6 * 8) = *(undefined4 *)(iVar1 + 4 + iVar5 * 8);
        *(undefined4 *)(iVar1 + iVar5 * 8) = uVar2;
        *(undefined4 *)(iVar1 + 4 + iVar5 * 8) = uVar3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(this + 4));
    if (!bVar4) {
      return;
    }
  } while( true );
}




/* from: gs:ui_font.cpp
   addr: 00518720 */

void __thiscall
arrStdSwapMem<struct_uiFONT_LETTER>::operator()
          (arrStdSwapMem<struct_uiFONT_LETTER> *this,uiFONT_LETTER *param_1,uiFONT_LETTER *param_2)

{
  int iVar1;
  uiFONT_LETTER *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [16];
  
  puVar2 = param_1;
  puVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)puVar2;
    puVar2 = puVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)puVar2;
    puVar2 = puVar2 + 4;
    param_1 = param_1 + 4;
  }
  puVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 4;
  }
  return;
}




/* from: gs:ui_font.cpp
   addr: 00518760 */

void __thiscall
arrVector<struct_uiFONT_LETTER>::Resize(arrVector<struct_uiFONT_LETTER> *this,int param_1)

{
  void *pvVar1;
  
  if (((*(int *)(this + 4) <= param_1) && (*(int *)(this + 4) < param_1)) &&
     (*(int *)(this + 8) < param_1)) {
    pvVar1 = apRealloc(*(void **)this,param_1 << 6);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  *(int *)(this + 4) = param_1;
  return;
}




/* from: gs:ui_font.cpp
   addr: 005187A0 */

void __thiscall
arrVector<struct_uiFONT_LETTER>::Insert
          (arrVector<struct_uiFONT_LETTER> *this,int param_1,uiFONT_LETTER *param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uiFONT_LETTER *puVar5;
  undefined4 *puVar6;
  
  if (param_3 != 0) {
    iVar3 = *(int *)(this + 8);
    iVar4 = *(int *)(this + 4) + param_3;
    if (iVar3 < iVar4) {
      iVar2 = iVar3 * 2;
      if (iVar3 * 2 <= iVar4) {
        iVar2 = iVar4;
      }
      if (iVar3 < iVar2) {
        if (iVar2 < *(int *)(this + 4)) {
          *(int *)(this + 4) = iVar2;
        }
        pvVar1 = apRealloc(*(void **)this,iVar2 << 6);
        *(void **)this = pvVar1;
        *(int *)(this + 8) = iVar2;
      }
    }
    iVar4 = param_3 + param_1;
    iVar3 = param_1 * 0x40;
    memmove((void *)(iVar4 * 0x40 + *(int *)this),(void *)(iVar3 + *(int *)this),
            (*(int *)(this + 4) - param_1) * 0x40);
    if (param_1 < iVar4) {
      iVar4 = iVar4 - param_1;
      do {
        if ((undefined4 *)(*(int *)this + iVar3) != (undefined4 *)0x0) {
          puVar5 = param_2;
          puVar6 = (undefined4 *)(*(int *)this + iVar3);
          for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *(undefined4 *)puVar5;
            puVar5 = puVar5 + 4;
            puVar6 = puVar6 + 1;
          }
        }
        iVar3 = iVar3 + 0x40;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + param_3;
  }
  return;
}




/* from: gs:ui_font.cpp
   addr: 00518850 */

void __thiscall
arrVector<struct_uiFONT_LETTER>::Realloc(arrVector<struct_uiFONT_LETTER> *this,int param_1)

{
  void *pvVar1;
  
  if (param_1 != *(int *)(this + 8)) {
    if (param_1 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 << 6);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}




/* from: gs:ui_font.cpp
   addr: 00518880 */

void __thiscall arrVector<class_uiFONT_PAGE>::Resize(arrVector<class_uiFONT_PAGE> *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < *(int *)(this + 4)) {
    iVar4 = param_1 * 0x14;
    iVar3 = param_1;
    do {
      apFree(*(void **)(iVar4 + 8 + *(int *)this));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(this + 4));
    *(int *)(this + 4) = param_1;
    return;
  }
  if (*(int *)(this + 4) < param_1) {
    if (*(int *)(this + 8) < param_1) {
      pvVar1 = apRealloc(*(void **)this,param_1 * 0x14);
      *(void **)this = pvVar1;
      *(int *)(this + 8) = param_1;
    }
    iVar3 = *(int *)(this + 4);
    if (iVar3 < param_1) {
      iVar4 = iVar3 * 0x14;
      iVar3 = param_1 - iVar3;
      do {
        puVar2 = (undefined4 *)(*(int *)this + iVar4);
        if (puVar2 != (undefined4 *)0x0) {
          puVar2[2] = 0;
          puVar2[4] = 0;
          puVar2[3] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *(int *)(this + 4) = param_1;
  return;
}




/* from: gs:ui_font.cpp
   addr: 00518920 */

void __thiscall
arrVector<class_uiFONT_PAGE>::Insert
          (arrVector<class_uiFONT_PAGE> *this,int param_1,uiFONT_PAGE *param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  arrVector<struct_uiFONT_LETTER> *this_00;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_10;
  int local_8;
  
  if (param_3 != 0) {
    iVar6 = *(int *)(this + 8);
    iVar4 = *(int *)(this + 4) + param_3;
    if (iVar6 < iVar4) {
      iVar3 = iVar6 * 2;
      if (iVar6 * 2 <= iVar4) {
        iVar3 = iVar4;
      }
      if (iVar6 < iVar3) {
        if (iVar3 < *(int *)(this + 4)) {
          iVar6 = iVar3 * 0x14;
          iVar4 = iVar3;
          do {
            apFree(*(void **)(iVar6 + 8 + *(int *)this));
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + 0x14;
          } while (iVar4 < *(int *)(this + 4));
          *(int *)(this + 4) = iVar3;
        }
        pvVar1 = apRealloc(*(void **)this,iVar3 * 0x14);
        *(void **)this = pvVar1;
        *(int *)(this + 8) = iVar3;
      }
    }
    local_8 = param_3 + param_1;
    iVar4 = param_1 * 0x14;
    memmove((void *)(*(int *)this + local_8 * 0x14),(void *)(iVar4 + *(int *)this),
            *(int *)(this + 4) * 0x14 + param_1 * -0x14);
    if (param_1 < local_8) {
      local_8 = local_8 - param_1;
      do {
        puVar5 = (undefined4 *)(*(int *)this + iVar4);
        if (puVar5 != (undefined4 *)0x0) {
          this_00 = (arrVector<struct_uiFONT_LETTER> *)(puVar5 + 2);
          *puVar5 = *(undefined4 *)param_2;
          puVar5[1] = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)this_00 = 0;
          puVar5[4] = 0;
          puVar5[3] = 0;
          puVar7 = *(undefined4 **)(param_2 + 8);
          iVar6 = (*(int *)(param_2 + 0xc) << 6) >> 6;
          if (iVar6 != 0) {
            if (0 < iVar6) {
              arrVector<struct_uiFONT_LETTER>::Realloc(this_00,iVar6);
            }
            memmove((void *)(iVar6 * 0x40 + (int)*(void **)this_00),*(void **)this_00,puVar5[3] << 6
                   );
            if (0 < iVar6) {
              iVar3 = 0;
              local_10 = iVar6;
              do {
                if ((undefined4 *)(*(int *)this_00 + iVar3) != (undefined4 *)0x0) {
                  puVar8 = puVar7;
                  puVar9 = (undefined4 *)(*(int *)this_00 + iVar3);
                  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *puVar9 = *puVar8;
                    puVar8 = puVar8 + 1;
                    puVar9 = puVar9 + 1;
                  }
                }
                puVar7 = puVar7 + 0x10;
                iVar3 = iVar3 + 0x40;
                local_10 = local_10 + -1;
              } while (local_10 != 0);
            }
            puVar5[3] = puVar5[3] + iVar6;
          }
        }
        iVar4 = iVar4 + 0x14;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + param_3;
  }
  return;
}




/* from: gs:ui_font.cpp
   addr: 00518AB0 */

void __thiscall
arrVector<struct_uiFONT_LETTER>::Reserve(arrVector<struct_uiFONT_LETTER> *this,int param_1)

{
  void *pvVar1;
  
  if (*(int *)(this + 8) < param_1) {
    if (param_1 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 << 6);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}




/* from: gs:ui_font.cpp
   addr: 00518AE0 */

void __thiscall
arrVector<struct_uiFONT_LETTER>::Insert
          (arrVector<struct_uiFONT_LETTER> *this,int param_1,uiFONT_LETTER *param_2,
          uiFONT_LETTER *param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uiFONT_LETTER *puVar6;
  undefined4 *puVar7;
  
  iVar4 = (int)param_3 - (int)param_2 >> 6;
  if (iVar4 != 0) {
    iVar3 = *(int *)(this + 8);
    iVar5 = *(int *)(this + 4) + iVar4;
    if (iVar3 < iVar5) {
      iVar2 = iVar3 * 2;
      if (iVar3 * 2 <= iVar5) {
        iVar2 = iVar5;
      }
      if (iVar3 < iVar2) {
        if (iVar2 < *(int *)(this + 4)) {
          *(int *)(this + 4) = iVar2;
        }
        pvVar1 = apRealloc(*(void **)this,iVar2 << 6);
        *(void **)this = pvVar1;
        *(int *)(this + 8) = iVar2;
      }
    }
    iVar5 = iVar4 + param_1;
    iVar3 = param_1 * 0x40;
    memmove((void *)(iVar5 * 0x40 + *(int *)this),(void *)(iVar3 + *(int *)this),
            (*(int *)(this + 4) - param_1) * 0x40);
    if (param_1 < iVar5) {
      iVar5 = iVar5 - param_1;
      do {
        if ((undefined4 *)(*(int *)this + iVar3) != (undefined4 *)0x0) {
          puVar6 = param_2;
          puVar7 = (undefined4 *)(*(int *)this + iVar3);
          for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = *(undefined4 *)puVar6;
            puVar6 = puVar6 + 4;
            puVar7 = puVar7 + 1;
          }
        }
        iVar3 = iVar3 + 0x40;
        param_2 = param_2 + 0x40;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + iVar4;
  }
  return;
}




/* from: gs:ui_font.cpp
   addr: 00518BA0 */

void __thiscall
arrVector<class_uiFONT_PAGE>::Reserve(arrVector<class_uiFONT_PAGE> *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(this + 8) < param_1) {
    if (param_1 < *(int *)(this + 4)) {
      iVar3 = param_1 * 0x14;
      iVar2 = param_1;
      do {
        apFree(*(void **)(iVar3 + 8 + *(int *)this));
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar2 < *(int *)(this + 4));
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 * 0x14);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}

