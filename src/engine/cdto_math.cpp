
/* from: engine:cdto_math.cpp
   addr: 004E1A10 */

int __fastcall cdtoInit(void)

{
  cdtOFL *this;
  
  this = (cdtOFL *)operator_new(0x20);
  if (this == (cdtOFL *)0x0) {
    cdtOflPtr = (cdtOFL *)0x0;
    return 0;
  }
  cdtOflPtr = (cdtOFL *)cdtOFL::cdtOFL(this,2000,8000);
  if (cdtOflPtr == (cdtOFL *)0x0) {
    return 0;
  }
  return 1;
}




/* from: engine:cdto_math.cpp
   addr: 004E1A50 */

void __fastcall cdtoTerm(void)

{
  cdtOFL *pcVar1;
  
  pcVar1 = cdtOflPtr;
  if (cdtOflPtr != (cdtOFL *)0x0) {
    cdtOFL::~cdtOFL(cdtOflPtr);
    operator_delete(pcVar1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:cdto_math.cpp
   addr: 004E1A70 */

int __thiscall
cdtCOLL_OBJ::ShootRay
          (cdtCOLL_OBJ *this,m3dV *param_1,m3dV *param_2,float param_3,int param_4,cdtINFO *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float unaff_EBP;
  float unaff_ESI;
  float unaff_EDI;
  cdtOFL *pcVar7;
  uint uVar8;
  undefined4 unaff_retaddr;
  float fVar9;
  uint uVar10;
  uint uVar11;
  int iStack_174;
  float fStack_16c;
  cdtOFL *pcStack_168;
  uint uStack_164;
  uint uStack_160;
  int iStack_15c;
  float fStack_150;
  float fStack_14c;
  cdtOFL *local_148;
  float fStack_144;
  float fStack_140;
  cdtOFL *pcStack_13c;
  int iStack_138;
  uint uStack_134;
  uint uStack_130;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float afStack_114 [63];
  m3dV *pmStack_18;
  float fStack_14;
  uint uStack_10;
  uint *puStack_c;
  float fStack_4;
  
  pcVar7 = cdtOflPtr;
  local_148 = cdtOflPtr;
  pcStack_13c = (cdtOFL *)(**(code **)(*(int *)this + 0x34))();
  iVar2 = (**(code **)(*(int *)this + 0x4c))(*(undefined4 *)(this + 100),param_1,param_2,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  if (uStack_164 == 0) {
    iVar2 = (**(code **)(*(int *)this + 0x14))();
  }
  else {
    fStack_11c = fStack_4 * *(float *)param_2 + *(float *)param_1;
    fStack_118 = fStack_4 * *(float *)(param_2 + 4) + *(float *)(param_1 + 4);
    afStack_114[0] = fStack_4 * *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
    (**(code **)(*(int *)this + 8))(param_1,&fStack_11c,pcVar7,unaff_retaddr);
    iVar2 = *(int *)pcVar7;
  }
  fStack_16c = fStack_14;
  bVar1 = false;
  uVar11 = 0;
  if (0 < iVar2) {
    do {
      uVar8 = uVar11;
      if (iStack_174 != 0) {
        uVar8 = (uint)*(ushort *)(*(int *)(pcVar7 + 4) + uVar11 * 2);
      }
      if (iStack_15c == 0) {
        param_3 = *(float *)(this + 100);
        uVar4 = 1;
LAB_004e1bfb:
        uVar10 = uVar4;
        iVar3 = (**(code **)(*(int *)this + 0x38))(param_3);
        if (iVar3 == 0) {
          uStack_160 = ~uStack_10 & 1;
          uVar5 = uStack_10 & 2;
        }
        else {
          uVar5 = 0;
          uStack_160 = 0;
        }
        uStack_164 = 0;
        param_2 = pmStack_18;
        if (0 < (int)uVar4) {
          do {
            uVar4 = uVar8;
            if (((iStack_15c != 0) && (uVar4 = uStack_164, iStack_174 != 0)) &&
               (((byte)this[4] & 1) != 0)) {
              uVar4 = (uint)*(ushort *)
                             (*(int *)(pcStack_168 + 0x14) +
                             (*(int *)(*(int *)(pcStack_168 + 0xc) + uVar11 * 4) + uStack_164) * 2);
            }
            (**(code **)(*(int *)this + 0x3c))(param_3,uVar4,&stack0xfffffe7c);
            fVar9 = unaff_ESI * *(float *)(pmStack_18 + 4) +
                    unaff_EBP * *(float *)(pmStack_18 + 8) + unaff_EDI * *(float *)pmStack_18;
            if (fVar9 <= -DAT_005dc354) {
              iVar3 = 0;
              if (uVar5 == 0) goto LAB_004e1d1a;
            }
            else {
              iVar3 = 1;
              if (uStack_160 == 0) {
                unaff_EDI = unaff_EDI * ___real_bf800000;
                unaff_ESI = unaff_ESI * ___real_bf800000;
                unaff_EBP = unaff_EBP * ___real_bf800000;
                fVar9 = fVar9 * ___real_bf800000;
LAB_004e1d1a:
                (**(code **)(*(int *)this + 0x40))(param_3,uVar4,0,&fStack_120);
                fVar9 = -((unaff_EDI * *(float *)param_1 +
                          unaff_ESI * *(float *)(param_1 + 4) +
                          unaff_EBP * *(float *)(param_1 + 8) +
                          -(fStack_120 * unaff_EDI + fStack_11c * unaff_ESI + fStack_118 * unaff_EBP
                           )) / fVar9);
                if ((___real_00000000 <= fVar9) && (fVar9 <= fStack_16c)) {
                  fStack_150 = fVar9 * *(float *)pmStack_18 + *(float *)param_1;
                  fStack_14c = fVar9 * *(float *)(pmStack_18 + 4) + *(float *)(param_1 + 4);
                  local_148 = (cdtOFL *)
                              (fVar9 * *(float *)(pmStack_18 + 8) + *(float *)(param_1 + 8));
                  (**(code **)(*(int *)this + 0x44))(param_3,uVar4,afStack_114);
                  iVar6 = m3dIsBelongPointPoly_A
                                    ((m3dPOLY *)afStack_114,(m3dV *)&fStack_150,
                                     (m3dV *)&stack0xfffffe7c,DAT_005dc354);
                  if (iVar6 != 0) {
                    fStack_144 = fStack_150;
                    bVar1 = true;
                    fStack_140 = fStack_14c;
                    pcStack_13c = local_148;
                    fStack_16c = fVar9;
                    iStack_138 = iVar3;
                    uStack_134 = uVar8;
                    uStack_130 = uVar4;
                    if ((uStack_10 & 4) != 0) goto LAB_004e1e91;
                  }
                }
              }
            }
            uStack_164 = uStack_164 + 1;
            param_2 = pmStack_18;
          } while ((int)uStack_164 < (int)uVar10);
        }
      }
      else {
        uVar11 = (**(code **)(*(int *)this + 0x18))(uVar8);
        iVar3 = (**(code **)(*(int *)this + 0x48))
                          (*(undefined4 *)(this + 100),uVar8,param_1,param_2,pmStack_18);
        if (iVar3 != 0) {
          if ((iStack_174 == 0) || (((byte)this[4] & 1) == 0)) {
            uVar4 = (**(code **)(*(int *)this + 0x1c))(uVar8);
          }
          else {
            uVar4 = (uint)*(ushort *)(*(int *)(pcStack_168 + 8) + uVar11 * 2);
          }
          goto LAB_004e1bfb;
        }
      }
      uVar11 = uVar11 + 1;
      pcVar7 = pcStack_168;
    } while ((int)uVar11 < iVar2);
    if (bVar1) {
LAB_004e1e91:
      if (puStack_c != (uint *)0x0) {
        puStack_c[2] = uStack_134;
        puStack_c[3] = uStack_130;
        puStack_c[4] = (uint)fStack_144;
        puStack_c[5] = (uint)fStack_140;
        puStack_c[6] = (uint)pcStack_13c;
        puStack_c[7] = (uint)fStack_16c;
        if (iStack_138 == 0) {
          uVar11 = *puStack_c & 0xfffffffe;
        }
        else {
          uVar11 = *puStack_c | 1;
        }
        *puStack_c = uVar11;
        *puStack_c = uVar11 | 2;
      }
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:cdto_math.cpp
   addr: 004E1F00 */

int __thiscall
cdtCOLL_OBJ::ShootCyl
          (cdtCOLL_OBJ *this,m3dV *param_1,m3dV *param_2,float param_3,int param_4,
          cdtINFO_LSEG *param_5)

{
  bool bVar1;
  cdtOFL *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *unaff_EBX;
  float fVar6;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float fVar7;
  ulonglong uVar8;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fStack_17c;
  uint uStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float afStack_148 [2];
  uint local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  uint uStack_11c;
  uint uStack_118;
  int iStack_114;
  float fStack_110;
  float fStack_10c;
  m3dPOLY amStack_108 [248];
  m3dV *pmStack_10;
  m3dV *pmStack_c;
  float fStack_8;
  uint uStack_4;
  
  *(uint *)param_5 = *(uint *)param_5 & 0xfffffffd;
  pcVar2 = cdtOflPtr;
  local_140 = (uint)(*(int *)(this + 0x44) != 0);
  iStack_114 = (**(code **)(*(int *)this + 0x34))();
  fStack_17c = (*(float *)param_1 - *(float *)param_2) * (*(float *)param_1 - *(float *)param_2) +
               (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) *
               (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) +
               (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) *
               (*(float *)(param_1 + 8) - *(float *)(param_2 + 8));
  if (m3dSimdType == 0) {
    fStack_17c = fStack_17c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar13 = rsqrtss(ZEXT416((uint)fStack_17c),ZEXT416((uint)fStack_17c));
    fVar7 = auVar13._0_4_;
    fStack_17c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_17c * fVar7 * fVar7) *
                 fStack_17c;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar8 = (ulonglong)(uint)fStack_17c;
    uVar9 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar8);
    uVar10 = PackedFloatingMUL(uVar9,uVar9);
    uVar10 = PackedFloatingReciprocalSQRIter1(uVar10,uVar8);
    uVar9 = PackedFloatingReciprocalIter2(uVar10,uVar9);
    uVar9 = PackedFloatingMUL(uVar9,uVar8);
    fStack_17c = (float)uVar9;
    FastExitMediaState();
  }
  else {
    fStack_17c = SQRT(fStack_17c);
  }
  fStack_10c = fStack_17c;
  fStack_170 = param_3 + param_3;
  fStack_110 = fStack_170 + fStack_17c;
  fStack_130 = (*(float *)param_1 + *(float *)param_2) * ___real_3f000000;
  fStack_12c = (*(float *)(param_2 + 4) + *(float *)(param_1 + 4)) * ___real_3f000000;
  fStack_128 = (*(float *)(param_2 + 8) + *(float *)(param_1 + 8)) * ___real_3f000000;
  fStack_158 = *(float *)param_2 - *(float *)param_1;
  fStack_154 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fStack_150 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  m3dNormalize((m3dV *)&fStack_158);
  if ((iStack_114 == 0) &&
     (iVar3 = (**(code **)(*(int *)this + 0x54))(*(undefined4 *)(this + 100),&fStack_130,fStack_110)
     , iVar3 == 0)) {
    return 0;
  }
  if (local_140 == 0) {
    iVar3 = (**(code **)(*(int *)this + 0x14))();
  }
  else {
    (**(code **)(*(int *)this + 4))(param_1,param_2,fStack_170,pcVar2,param_4);
    iVar3 = *unaff_EBX;
  }
  fStack_110 = DAT_005dc358;
  iStack_114 = 0;
  fStack_17c = 0.0;
  if (0 < iVar3) {
    do {
      fVar7 = fStack_17c;
      if (fStack_154 != 0.0) {
        fVar7 = (float)(uint)*(ushort *)(unaff_EBX[1] + (int)fStack_17c * 2);
      }
      if (fStack_128 == 0.0) {
        fStack_170 = *(float *)(this + 100);
        uStack_178 = 1;
        fStack_174 = fVar7;
LAB_004e21a8:
        iVar4 = (**(code **)(*(int *)this + 0x38))(fStack_170);
        if (iVar4 == 0) {
          uStack_118 = ~uStack_4 & 1;
          uStack_11c = uStack_4 & 2;
        }
        else {
          uStack_11c = 0;
          uStack_118 = 0;
        }
        fStack_12c = 0.0;
        if (0 < (int)uStack_178) {
          do {
            if (((fStack_128 != 0.0) && (fVar7 = fStack_12c, fStack_154 != 0.0)) &&
               (((byte)this[4] & 1) != 0)) {
              fVar7 = (float)(uint)*(ushort *)
                                    (unaff_EBX[5] +
                                    (*(int *)(unaff_EBX[3] + (int)fStack_17c * 4) + (int)fStack_12c)
                                    * 2);
            }
            (**(code **)(*(int *)this + 0x3c))(fStack_170,fVar7,&fStack_150);
            bVar1 = -DAT_005dc354 <
                    (float)pcVar2 * fStack_150 +
                    fStack_14c * fStack_168 + afStack_148[0] * fStack_164;
            uVar5 = uStack_11c;
            if (bVar1) {
              uVar5 = uStack_118;
            }
            fVar6 = (float)(uint)bVar1;
            if (uVar5 == 0) {
              (**(code **)(*(int *)this + 0x44))(fStack_170,fVar7,amStack_108);
              iVar4 = m3dDistLSegPoly(pmStack_10,pmStack_c,amStack_108,(m3dV *)&fStack_150,
                                      (m3dV *)&fStack_160,(m3dV *)&uStack_138,
                                      (float *)&stack0xfffffe74,(int *)&stack0xfffffe78,fStack_8);
              if (iVar4 != 0) {
                fVar11 = (*(float *)pmStack_10 - fStack_160) * (*(float *)pmStack_10 - fStack_160) +
                         (*(float *)(pmStack_10 + 4) - fStack_15c) *
                         (*(float *)(pmStack_10 + 4) - fStack_15c) +
                         (*(float *)(pmStack_10 + 8) - fStack_158) *
                         (*(float *)(pmStack_10 + 8) - fStack_158);
                if (m3dSimdType == 0) {
                  fVar11 = fVar11 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
                  auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
                  fVar12 = auVar13._0_4_;
                  fVar11 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar12 *
                           (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar11 * fVar12 * fVar12)
                           * fVar11;
                }
                else if (m3dSimdType == 1) {
                  FastExitMediaState();
                  uVar8 = (ulonglong)(uint)fVar11;
                  uVar9 = PackedFloatingReciprocalSQRAprox(extraout_MM1_00,uVar8);
                  uVar10 = PackedFloatingMUL(uVar9,uVar9);
                  uVar10 = PackedFloatingReciprocalSQRIter1(uVar10,uVar8);
                  uVar9 = PackedFloatingReciprocalIter2(uVar10,uVar9);
                  uVar9 = PackedFloatingMUL(uVar9,uVar8);
                  fVar11 = (float)uVar9;
                  FastExitMediaState();
                }
                else {
                  fVar11 = SQRT(fVar11);
                }
                if (fVar11 / fStack_120 <= fStack_110) {
                  *(float *)(param_5 + 8) = fStack_174;
                  *(undefined4 *)(param_5 + 0x20) = unaff_ESI;
                  iStack_114 = 1;
                  *(undefined4 *)(param_5 + 0x10) = uStack_138;
                  *(undefined4 *)(param_5 + 0x14) = uStack_134;
                  *(float *)(param_5 + 0xc) = fVar7;
                  *(float *)(param_5 + 0x18) = fStack_130;
                  *(float *)(param_5 + 0x24) = fStack_160;
                  *(float *)(param_5 + 0x28) = fStack_15c;
                  *(undefined4 *)(param_5 + 0x1c) = unaff_EDI;
                  *(float *)(param_5 + 0x2c) = fStack_158;
                  fStack_110 = fVar11 / fStack_120;
                  fStack_10c = fVar6;
                  if ((uStack_4 & 4) != 0) goto LAB_004e242c;
                }
              }
            }
            fStack_12c = (float)((int)fStack_12c + 1);
            fVar7 = fStack_174;
          } while ((int)fStack_12c < (int)uStack_178);
        }
      }
      else {
        fStack_174 = (float)(**(code **)(*(int *)this + 0x18))(fVar7);
        iVar4 = (**(code **)(*(int *)this + 0x50))
                          (*(undefined4 *)(this + 100),fVar7,afStack_148,fStack_128);
        if (iVar4 != 0) {
          if ((fStack_154 == 0.0) || (((byte)this[4] & 1) == 0)) {
            uStack_178 = (**(code **)(*(int *)this + 0x1c))(fVar7);
          }
          else {
            uStack_178 = (uint)*(ushort *)(unaff_EBX[2] + (int)fStack_17c * 2);
          }
          goto LAB_004e21a8;
        }
      }
      fStack_17c = (float)((int)fStack_17c + 1);
    } while ((int)fStack_17c < iVar3);
    if (iStack_114 != 0) {
LAB_004e242c:
      if (fStack_10c == 0.0) {
        uVar5 = *(uint *)param_5 & 0xfffffffe;
      }
      else {
        uVar5 = *(uint *)param_5 | 1;
      }
      *(uint *)param_5 = uVar5;
      *(uint *)param_5 = uVar5 | 2;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:cdto_math.cpp
   addr: 004E24C0 */

int __thiscall
cdtCOLL_OBJ::GetClosestPoint
          (cdtCOLL_OBJ *this,m3dV *param_1,float param_2,int param_3,cdtINFO *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint unaff_EBX;
  uint uVar7;
  undefined4 unaff_EBP;
  uint uVar8;
  cdtOFL *pcVar9;
  float fVar10;
  uint uVar11;
  cdtOFL *pcStack_148;
  int iStack_140;
  uint local_138;
  cdtOFL *local_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_124;
  cdtOFL *pcStack_120;
  uint uStack_11c;
  uint uStack_118;
  m3dV amStack_114 [12];
  m3dPOLY amStack_108 [244];
  undefined4 uStack_14;
  m3dV *pmStack_10;
  float fStack_c;
  byte bStack_8;
  uint *puStack_4;
  
  pcVar9 = cdtOflPtr;
  local_134 = cdtOflPtr;
  local_138 = (uint)(*(int *)(this + 0x44) != 0);
  uStack_12c = (**(code **)(*(int *)this + 0x34))();
  if ((uStack_12c == 0) &&
     (iVar3 = (**(code **)(*(int *)this + 0x54))(*(undefined4 *)(this + 100),param_1,param_2),
     iVar3 == 0)) {
    return 0;
  }
  if (local_138 == 0) {
    iVar3 = (**(code **)(*(int *)this + 0x14))();
  }
  else {
    (**(code **)(*(int *)this + 4))(param_1,param_1,param_2,pcVar9,param_3);
    iVar3 = *(int *)pcVar9;
  }
  bVar2 = false;
  uVar11 = 0;
  uVar6 = local_138;
  fVar10 = fStack_c;
  if (0 < iVar3) {
    do {
      uVar8 = uVar11;
      if (uVar6 != 0) {
        uVar8 = (uint)*(ushort *)(*(int *)(pcVar9 + 4) + uVar11 * 2);
      }
      if (iStack_140 == 0) {
        unaff_EBP = *(undefined4 *)(this + 100);
        uVar6 = 1;
LAB_004e25fa:
        uVar4 = uVar6;
        if (((bStack_8 & 1) == 0) &&
           (iVar5 = (**(code **)(*(int *)this + 0x38))(unaff_EBP), iVar5 == 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        uVar7 = 0;
        pcVar9 = pcStack_148;
        if (0 < (int)uVar6) {
          do {
            uVar6 = uVar8;
            if (((iStack_140 != 0) && (uVar6 = uVar7, unaff_EBX != 0)) && (((byte)this[4] & 1) != 0)
               ) {
              uVar6 = (uint)*(ushort *)
                             (*(int *)(pcStack_148 + 0x14) +
                             (*(int *)(*(int *)(pcStack_148 + 0xc) + uVar11 * 4) + uVar7) * 2);
            }
            (**(code **)(*(int *)this + 0x44))(unaff_EBP,uVar6,amStack_108);
            (**(code **)(*(int *)this + 0x3c))(uVar4,uVar6,&pcStack_120);
            iVar5 = m3dDistPointPoly(pmStack_10,amStack_108,amStack_114,(uint)!bVar1,
                                     (m3dV *)&pcStack_120,&fStack_c,fVar10);
            if ((iVar5 != 0) && (DAT_005dc354 * ___real_42c80000 + fStack_c <= fVar10)) {
              bVar2 = true;
              local_134 = pcStack_120;
              uStack_130 = uStack_11c;
              uStack_12c = uStack_118;
              fVar10 = fStack_c;
              local_138 = uVar6;
              uStack_124 = uVar8;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar4);
        }
      }
      else {
        uVar4 = (**(code **)(*(int *)this + 0x18))(uVar8);
        iVar5 = (**(code **)(*(int *)this + 0x50))
                          (*(undefined4 *)(this + 100),uVar8,uStack_14,pmStack_10);
        if (iVar5 != 0) {
          if ((unaff_EBX == 0) || (((byte)this[4] & 1) == 0)) {
            uVar6 = (**(code **)(*(int *)this + 0x1c))(uVar8);
            uVar11 = uVar4;
          }
          else {
            uVar6 = (uint)*(ushort *)(*(int *)(pcVar9 + 8) + uVar11 * 2);
            uVar11 = uVar4;
          }
          goto LAB_004e25fa;
        }
      }
      uVar11 = uVar11 + 1;
      uVar6 = unaff_EBX;
    } while ((int)uVar11 < iVar3);
    if (bVar2) {
      if (puStack_4 != (uint *)0x0) {
        puStack_4[2] = uStack_124;
        puStack_4[3] = local_138;
        puStack_4[1] = 0;
        puStack_4[4] = (uint)local_134;
        puStack_4[5] = uStack_130;
        puStack_4[6] = uStack_12c;
        puStack_4[7] = (uint)fVar10;
        *puStack_4 = *puStack_4 | 2;
      }
      return 1;
    }
  }
  return 0;
}




/* from: engine:cdto_math.cpp
   addr: 004E27B0 */

int __thiscall
cdtCOLL_OBJ::GetClosestPoint
          (cdtCOLL_OBJ *this,m3dV *param_1,m3dV *param_2,float param_3,int param_4,
          cdtINFO_LSEG *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  cdtOFL *pcVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_retaddr;
  m3dV *in_stack_fffffea4;
  uint uVar8;
  uint uVar9;
  float fStack_144;
  cdtOFL *pcStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  uint uStack_130;
  cdtOFL *local_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  m3dV amStack_114 [12];
  m3dPOLY amStack_108 [248];
  m3dV *pmStack_10;
  m3dV *pmStack_c;
  float fStack_8;
  byte bStack_4;
  
  pcVar5 = cdtOflPtr;
  iVar2 = *(int *)(this + 0x44);
  local_12c = cdtOflPtr;
  local_128 = (uint)(iVar2 != 0);
  uStack_120 = (**(code **)(*(int *)this + 0x34))();
  if ((uStack_120 == 0) &&
     (in_stack_fffffea4 = param_2,
     iVar1 = (**(code **)(*(int *)this + 0x54))(*(undefined4 *)(this + 100),param_2,param_3),
     iVar1 == 0)) {
    return 0;
  }
  if ((iVar2 != 0) == 0) {
    iVar2 = (**(code **)(*(int *)this + 0x14))();
  }
  else {
    in_stack_fffffea4 = (m3dV *)pcVar5;
    (**(code **)(*(int *)this + 4))(param_1,param_2,param_3,pcVar5,param_4);
    iVar2 = *(int *)pcVar5;
  }
  fStack_144 = fStack_8;
  iStack_138 = 0;
  uVar9 = 0;
  if (0 < iVar2) {
    do {
      uVar6 = uVar9;
      if (iStack_13c != 0) {
        uVar6 = (uint)*(ushort *)(*(int *)(pcVar5 + 4) + uVar9 * 2);
      }
      uVar8 = uVar6;
      if (iStack_134 == 0) {
        unaff_ESI = *(undefined4 *)(this + 100);
        uVar3 = 1;
LAB_004e2911:
        if ((bStack_4 & 1) == 0) {
          (**(code **)(*(int *)this + 0x38))(unaff_ESI);
        }
        uVar4 = 0;
        if (0 < (int)uVar3) {
          do {
            uVar7 = uVar6;
            if (((iStack_134 != 0) && (uVar7 = uVar4, iStack_13c != 0)) &&
               (((byte)this[4] & 1) != 0)) {
              uVar7 = (uint)*(ushort *)
                             (*(int *)(pcStack_140 + 0x14) +
                             (*(int *)(*(int *)(pcStack_140 + 0xc) + uVar9 * 4) + uVar4) * 2);
            }
            (**(code **)(*(int *)this + 0x44))(unaff_ESI,uVar7,amStack_108);
            (**(code **)(*(int *)this + 0x3c))(in_stack_fffffea4,uVar7,&uStack_120);
            uVar6 = uVar8;
            iVar1 = m3dDistLSegPoly(pmStack_10,pmStack_c,amStack_108,amStack_114,(m3dV *)&uStack_120
                                    ,(m3dV *)&local_12c,&fStack_144,(int *)&uStack_130,fStack_144);
            if ((iVar1 != 0) && (iStack_138 = 1, unaff_retaddr != (uint *)0x0)) {
              unaff_retaddr[2] = uVar6;
              unaff_retaddr[8] = uStack_130;
              unaff_retaddr[3] = uVar7;
              unaff_retaddr[4] = (uint)local_12c;
              unaff_retaddr[5] = local_128;
              unaff_retaddr[6] = uStack_124;
              unaff_retaddr[9] = uStack_120;
              unaff_retaddr[10] = uStack_11c;
              unaff_retaddr[7] = (uint)fStack_144;
              unaff_retaddr[0xb] = uStack_118;
            }
            uVar4 = uVar4 + 1;
            uVar8 = uVar6;
          } while ((int)uVar4 < (int)uVar3);
        }
      }
      else {
        (**(code **)(*(int *)this + 0x18))(uVar6);
        iVar1 = (**(code **)(*(int *)this + 0x50))
                          (*(undefined4 *)(this + 100),uVar6,pmStack_10,pmStack_c);
        if (iVar1 != 0) {
          if ((iStack_13c == 0) || (((byte)this[4] & 1) == 0)) {
            uVar3 = (**(code **)(*(int *)this + 0x1c))(uVar6);
          }
          else {
            uVar3 = (uint)*(ushort *)(*(int *)(pcStack_140 + 8) + uVar9 * 2);
          }
          goto LAB_004e2911;
        }
      }
      uVar9 = uVar9 + 1;
      pcVar5 = pcStack_140;
    } while ((int)uVar9 < iVar2);
    if (iStack_138 != 0) {
      if (unaff_retaddr != (uint *)0x0) {
        unaff_retaddr[1] = 0;
        *unaff_retaddr = *unaff_retaddr | 2;
      }
      return 1;
    }
  }
  return 0;
}




/* from: engine:cdto_math.cpp
   addr: 004E2A80 */

int __thiscall cdtCOLL_OBJ::GetClosestPoint(cdtCOLL_OBJ *this,cdtQUERY *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int unaff_EBX;
  cdtOFL *pcVar3;
  uint uVar4;
  uint uVar5;
  byte unaff_retaddr;
  uint uVar6;
  cdtOFL *pcStack_1c;
  uint local_18;
  int local_14;
  int iStack_10;
  int iStack_c;
  uint uStack_4;
  
  pcVar3 = cdtOflPtr;
  local_18 = (uint)(*(int *)(this + 0x44) != 0);
  *(cdtCOLL_OBJ **)(param_1 + 4) = this;
  (**(code **)(*(int *)param_1 + 4))();
  iVar1 = (**(code **)(*(int *)this + 0x34))();
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(*(int *)param_1 + 0x14))(*(undefined4 *)(this + 100)), iVar1 == 0)) {
    return 0;
  }
  if (local_18 == 0) {
    local_14 = (**(code **)(*(int *)this + 0x14))();
  }
  else {
    (*(code *)**(undefined4 **)param_1)(pcVar3,param_2);
    local_14 = *(int *)pcVar3;
  }
  iStack_c = 0;
  uVar6 = 0;
  if (0 < local_14) {
    do {
      uVar4 = uVar6;
      if (unaff_EBX != 0) {
        uVar4 = (uint)*(ushort *)(*(int *)(pcVar3 + 4) + uVar6 * 2);
      }
      if (iStack_10 == 0) {
        local_18 = *(uint *)(this + 100);
        uStack_4 = 1;
LAB_004e2b94:
        if ((unaff_retaddr & 1) == 0) {
          (**(code **)(*(int *)this + 0x38))(local_18);
        }
        uVar5 = 0;
        if (0 < (int)uStack_4) {
          do {
            uVar2 = uVar4;
            if (((iStack_10 != 0) && (uVar2 = uVar5, unaff_EBX != 0)) && (((byte)this[4] & 1) != 0))
            {
              uVar2 = (uint)*(ushort *)
                             (*(int *)(pcStack_1c + 0x14) +
                             (*(int *)(*(int *)(pcStack_1c + 0xc) + uVar6 * 4) + uVar5) * 2);
            }
            iVar1 = (**(code **)(*(int *)param_1 + 8))(local_18,uVar4,uVar2);
            if (iVar1 != 0) {
              iStack_c = 1;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)uStack_4);
        }
      }
      else {
        pcStack_1c = (cdtOFL *)(**(code **)(*(int *)this + 0x18))(uVar4);
        iVar1 = (**(code **)(*(int *)param_1 + 0x10))(*(undefined4 *)(this + 100),uVar4);
        if (iVar1 != 0) {
          if ((unaff_EBX == 0) || (((byte)this[4] & 1) == 0)) {
            uStack_4 = (**(code **)(*(int *)this + 0x1c))(uVar4);
          }
          else {
            uStack_4 = (uint)*(ushort *)(*(int *)(pcStack_1c + 8) + uVar6 * 2);
          }
          goto LAB_004e2b94;
        }
      }
      uVar6 = uVar6 + 1;
      pcVar3 = pcStack_1c;
    } while ((int)uVar6 < local_14);
  }
  (**(code **)(*(int *)param_1 + 0xc))();
  return iStack_c;
}

