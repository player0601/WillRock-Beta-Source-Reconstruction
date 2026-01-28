
/* from: gs_shared:caustics.cpp
   addr: 0053F990 */

int __fastcall cauInit(void)

{
  int iVar1;
  
  iVar1 = pteMANAGER::RegisterClass(pteManager,s__caustic,0x2d,pteCAUSTICS::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = pteMANAGER::RegisterClass
                    (pteManager,s_emap_reflect_water,0x23,pteEMAP_REFLECT_WATER::Create);
  return (uint)(iVar1 != 0);
}




/* from: gs_shared:caustics.cpp
   addr: 0053F9D0 */

pteSHADER * __fastcall pteCAUSTICS::Create(animINST *param_1,objOBJ *param_2)

{
  txmTEXTURE *ptVar1;
  pteCAUSTICS *this;
  pteSHADER *ppVar2;
  txmTEXTURE ***ppptVar3;
  int iVar4;
  
  iVar4 = 1;
  ppptVar3 = &texList;
  do {
    sprintf((char *)&apBuffer,s_caustic__d,iVar4);
    ptVar1 = txmMANAGER::Add(txmManager,(char *)&apBuffer,0x40000,1);
    *ppptVar3 = (txmTEXTURE **)ptVar1;
    if (ptVar1 == (txmTEXTURE *)0x0) {
      return (pteSHADER *)0x0;
    }
    ppptVar3 = ppptVar3 + 1;
    iVar4 = iVar4 + 1;
  } while ((int)ppptVar3 < 0x963425);
  this = (pteCAUSTICS *)operator_new(0xdc);
  if (this == (pteCAUSTICS *)0x0) {
    return (pteSHADER *)0x0;
  }
  ppVar2 = (pteSHADER *)pteCAUSTICS(this);
  return ppVar2;
}




/* from: gs_shared:caustics.cpp
   addr: 0053FA40 */

pteCAUSTICS * __thiscall pteCAUSTICS::pteCAUSTICS(pteCAUSTICS *this)

{
  pteSHADER::pteSHADER((pteSHADER *)this);
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0xa0) = 1;
  *(undefined ***)(this + 0x9c) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x7c) = 0x7f;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xd0) = 0x42200000;
  *(undefined4 *)(this + 0xcc) = 0x41a00000;
  *(undefined4 *)(this + 0xd4) = 0x3f000000;
  *(undefined4 *)(this + 200) = 0x40400000;
  *(undefined4 *)(this + 0xd8) = 0x3e4ccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
  *(txmTEXTURE ***)(this + 0x68) = texList;
  return this;
}




/* from: gs_shared:caustics.cpp
   addr: 0053FAD0
   addr: 0053FAD0 */

void * __thiscall pteCAUSTICS::_scalar_deleting_destructor_(pteCAUSTICS *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *(undefined ***)this = &_vftable_;
  if (0 < *(int *)(this + 0xbc)) {
    iVar2 = 0;
    do {
      apFree(*(void **)(*(int *)(this + 0xc0) + 4 + iVar2));
      apFree(*(void **)(*(int *)(this + 0xc0) + 8 + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < *(int *)(this + 0xbc));
  }
  apFree(*(void **)(this + 0xc0));
  *(undefined ***)(this + 0x9c) = &m3dVOL::_vftable_;
  pteSHADER::~pteSHADER((pteSHADER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs_shared:caustics.cpp
   addr: 0053FB60 */

int __thiscall pteCAUSTICS::InitLevel(pteCAUSTICS *this,scnSCENE *param_1)

{
  int iVar1;
  void *pvVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  objOBJ *poVar7;
  objOBJ *poVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar11;
  undefined8 extraout_MM1_01;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_MM1_02;
  undefined8 extraout_MM1_03;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float local_40 [3];
  objOBJ *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  objOBJ *local_20;
  float *local_1c;
  objOBJ *local_18;
  float local_14;
  float local_10;
  int local_c;
  objOBJ *local_8;
  
  if (*(int *)(this + 0x60) != 0) {
    pteSHADER::ReadFloat((pteSHADER *)this,s_minDist,(float *)(this + 0xcc));
    pteSHADER::ReadFloat((pteSHADER *)this,s_maxDist,(float *)(this + 0xd0));
    pteSHADER::ReadFloat((pteSHADER *)this,s_density,(float *)(this + 0xd4));
    pteSHADER::ReadFloat((pteSHADER *)this,s_timePeriod,(float *)(this + 200));
    pteSHADER::ReadFloat((pteSHADER *)this,s_maxIntensity,(float *)(this + 0xd8));
    iVar1 = pteSHADER::ReadBool((pteSHADER *)this,s_isDistBBox,&local_c);
    if ((iVar1 != 0) && (local_c != 0)) {
      *(uint *)(this + 0x8c) = *(uint *)(this + 0x8c) | 1;
    }
    animINST::Validate(*(animINST **)(this + 0x60),2);
    if (*(objOBJ **)(this + 100) == (objOBJ *)0x0) {
      animINST::GetPos(*(animINST **)(this + 0x60),(m3dV *)(this + 0x90));
      iVar1 = *(int *)(*(int *)(this + 0x60) + 0x10);
      *(undefined4 *)(this + 0xa0) = *(undefined4 *)(iVar1 + 0xc4);
      *(undefined4 *)(this + 0xa4) = *(undefined4 *)(iVar1 + 200);
      *(undefined4 *)(this + 0xa8) = *(undefined4 *)(iVar1 + 0xcc);
      *(undefined4 *)(this + 0xac) = *(undefined4 *)(iVar1 + 0xd0);
      *(undefined4 *)(this + 0xb0) = *(undefined4 *)(iVar1 + 0xd4);
      *(undefined4 *)(this + 0xb4) = *(undefined4 *)(iVar1 + 0xd8);
      *(undefined4 *)(this + 0xb8) = *(undefined4 *)(iVar1 + 0xdc);
      uVar12 = extraout_MM1_00;
    }
    else {
      objOBJ::GetOrigin(*(objOBJ **)(this + 100),(m3dV *)(this + 0x90));
      iVar1 = *(int *)(this + 100);
      *(undefined4 *)(this + 0xa0) = *(undefined4 *)(iVar1 + 0xc4);
      *(undefined4 *)(this + 0xa4) = *(undefined4 *)(iVar1 + 200);
      *(undefined4 *)(this + 0xa8) = *(undefined4 *)(iVar1 + 0xcc);
      *(undefined4 *)(this + 0xac) = *(undefined4 *)(iVar1 + 0xd0);
      *(undefined4 *)(this + 0xb0) = *(undefined4 *)(iVar1 + 0xd4);
      *(undefined4 *)(this + 0xb4) = *(undefined4 *)(iVar1 + 0xd8);
      *(undefined4 *)(this + 0xb8) = *(undefined4 *)(iVar1 + 0xdc);
      uVar12 = extraout_MM1;
    }
    local_30 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        local_2c = 0;
        local_24 = 0;
        poVar7 = *(objOBJ **)(*(int *)(param_1 + 0x4c) + local_30 * 4);
        local_34 = poVar7;
        if (0 < *(int *)(poVar7 + 0x14)) {
          local_28 = 0;
          do {
            if (((byte)*poVar7 & 1) == 0) {
              local_1c = local_40;
              local_18 = poVar7 + 0x3c;
              poVar8 = (objOBJ *)(*(int *)(*(int *)(poVar7 + 0x28) + 0x40) + local_28);
              local_20 = poVar8;
              if (m3dSimdType != 0) {
                if (m3dSimdType == 1) {
                  FastExitMediaState();
                  uVar9 = (undefined4)*(undefined8 *)poVar8;
                  uVar12 = CONCAT44(uVar9,uVar9);
                  uVar9 = (undefined4)((ulonglong)*(undefined8 *)poVar8 >> 0x20);
                  uVar16 = CONCAT44(uVar9,uVar9);
                  uVar17 = CONCAT44(*(undefined4 *)(poVar8 + 8),*(undefined4 *)(poVar8 + 8));
                  uVar13 = PackedFloatingMUL(uVar12,*(undefined8 *)local_18);
                  uVar11 = PackedFloatingMUL(uVar16,*(undefined8 *)(poVar7 + 0x4c));
                  uVar14 = PackedFloatingMUL(uVar17,*(undefined8 *)(poVar7 + 0x5c));
                  uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(poVar7 + 0x6c));
                  uVar15 = PackedFloatingMUL(uVar12,*(undefined8 *)(poVar7 + 0x44));
                  uVar12 = PackedFloatingADD(uVar11,uVar14);
                  uVar11 = PackedFloatingMUL(uVar16,*(undefined8 *)(poVar7 + 0x54));
                  uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(poVar7 + 100));
                  uVar16 = PackedFloatingADD(uVar15,*(undefined8 *)(poVar7 + 0x74));
                  uVar13 = PackedFloatingADD(uVar13,uVar12);
                  uVar11 = PackedFloatingADD(uVar11,uVar17);
                  local_40[1] = (float)((ulonglong)uVar13 >> 0x20);
                  local_40[0] = (float)uVar13;
                  uVar13 = PackedFloatingADD(uVar16,uVar11);
                  local_40[2] = (float)uVar13;
                  FastExitMediaState();
                }
                else {
                  iVar1 = 0;
                  local_20 = local_18 + -(int)local_40;
                  pfVar6 = local_40;
                  do {
                    poVar7 = local_20;
                    iVar5 = 0;
                    *pfVar6 = 0.0;
                    poVar7 = poVar7 + (int)pfVar6;
                    do {
                      iVar4 = iVar5 * 4;
                      fVar18 = *(float *)poVar7;
                      iVar5 = iVar5 + 1;
                      poVar7 = poVar7 + 0x10;
                      *pfVar6 = *(float *)(poVar8 + iVar4) * fVar18 + *pfVar6;
                    } while (iVar5 < 3);
                    iVar5 = iVar1 + iVar5 * 4;
                    iVar1 = iVar1 + 1;
                    *pfVar6 = *(float *)(local_18 + iVar5 * 4) + *pfVar6;
                    pfVar6 = pfVar6 + 1;
                    poVar7 = local_34;
                  } while (iVar1 < 3);
                }
              }
            }
            else {
              pfVar6 = (float *)(*(int *)(*(int *)(poVar7 + 0x28) + 0x40) + local_28);
              local_40[0] = *pfVar6;
              local_40[1] = pfVar6[1];
              local_40[2] = pfVar6[2];
            }
            if (((byte)this[0x8c] & 1) == 0) {
              fVar18 = (local_40[0] - *(float *)(this + 0x90)) *
                       (local_40[0] - *(float *)(this + 0x90)) +
                       (local_40[1] - *(float *)(this + 0x94)) *
                       (local_40[1] - *(float *)(this + 0x94)) +
                       (local_40[2] - *(float *)(this + 0x98)) *
                       (local_40[2] - *(float *)(this + 0x98));
              if (m3dSimdType == 0) {
                fVar18 = fVar18 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
                auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
                fVar19 = auVar20._0_4_;
                local_18 = (objOBJ *)
                           (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar19 *
                            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar18 * fVar19 * fVar19)
                           * fVar18);
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar10 = (ulonglong)(uint)fVar18;
                uVar12 = PackedFloatingReciprocalSQRAprox(uVar12,uVar10);
                uVar13 = PackedFloatingMUL(uVar12,uVar12);
                uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar10);
                uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
                uVar12 = PackedFloatingMUL(uVar12,uVar10);
                local_18 = (objOBJ *)uVar12;
                FastExitMediaState();
              }
              else {
                local_18 = (objOBJ *)SQRT(fVar18);
              }
              local_8 = local_18;
            }
            else {
              (**(code **)(*(int *)(this + 0x9c) + 0x10))(local_40,DAT_005dda94,0,&local_8,0);
              uVar12 = extraout_MM1_01;
            }
            if ((float)local_8 < *(float *)(this + 0xd0)) {
              local_2c = 1;
            }
            local_24 = local_24 + 1;
            local_28 = local_28 + 0xc;
          } while (local_24 < *(int *)(poVar7 + 0x14));
          if (local_2c != 0) {
            pvVar2 = apRealloc(*(void **)(this + 0xc0),(*(int *)(this + 0xbc) + 1) * 0xc);
            *(void **)(this + 0xc0) = pvVar2;
            if (pvVar2 == (void *)0x0) {
              return 0;
            }
            pvVar2 = apMalloc((uint)**(ushort **)(*(int *)(poVar7 + 0x28) + 0x18) << 2);
            *(void **)(*(int *)(this + 0xc0) + 4 + *(int *)(this + 0xbc) * 0xc) = pvVar2;
            if (*(int *)(*(int *)(this + 0xc0) + 4 + *(int *)(this + 0xbc) * 0xc) == 0) {
              return 0;
            }
            pvVar2 = apMalloc((uint)**(ushort **)(*(int *)(poVar7 + 0x28) + 0x18) << 2);
            *(void **)(*(int *)(this + 0xc0) + 8 + *(int *)(this + 0xbc) * 0xc) = pvVar2;
            if (*(int *)(*(int *)(this + 0xc0) + 8 + *(int *)(this + 0xbc) * 0xc) == 0) {
              return 0;
            }
            *(objOBJ **)(*(int *)(this + 0xc0) + *(int *)(this + 0xbc) * 0xc) = poVar7;
            iVar1 = 0;
            puVar3 = *(ushort **)(*(int *)(poVar7 + 0x28) + 0x18);
            uVar12 = extraout_MM1_02;
            if (*puVar3 != 0) {
              local_18 = (objOBJ *)0x0;
              do {
                iVar4 = objSPLIT_ENTRY::CalcTexDensity
                                  ((objSPLIT_ENTRY *)(local_18 + *(int *)(puVar3 + 1)),poVar7,0,
                                   &local_10,&local_14);
                iVar5 = *(int *)(*(int *)(this + 0xc0) + 4 + *(int *)(this + 0xbc) * 0xc);
                if (iVar4 == 0) {
                  *(undefined4 *)(iVar5 + iVar1 * 4) = 0x3f800000;
                  *(undefined4 *)
                   (*(int *)(*(int *)(this + 0xc0) + 8 + *(int *)(this + 0xbc) * 0xc) + iVar1 * 4) =
                       0x3f800000;
                }
                else {
                  *(float *)(iVar5 + iVar1 * 4) = *(float *)(this + 0xd4) / local_10;
                  *(float *)(*(int *)(*(int *)(this + 0xc0) + 8 + *(int *)(this + 0xbc) * 0xc) +
                            iVar1 * 4) = *(float *)(this + 0xd4) / local_14;
                }
                local_18 = local_18 + 0x70;
                puVar3 = *(ushort **)(*(int *)(poVar7 + 0x28) + 0x18);
                iVar1 = iVar1 + 1;
                uVar12 = extraout_MM1_03;
              } while (iVar1 < (int)(uint)*puVar3);
            }
            *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + 1;
          }
        }
        local_30 = local_30 + 1;
        if (*(int *)(param_1 + 0x48) <= local_30) {
          return 1;
        }
      } while( true );
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:caustics.cpp
   addr: 00540160 */

void __thiscall pteCAUSTICS::Update(pteCAUSTICS *this,float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = param_1 + *(float *)(this + 0xc4);
  *(float *)(this + 0xc4) = fVar1;
  fVar2 = _DAT_005dda90 * ___real_42c80000 + *(float *)(this + 200);
  param_1 = (float)(uint)(ABS(fVar2) < _DAT_005dda90);
  if ((float)(int)param_1 == ___real_00000000) {
    floor((double)(fVar1 / fVar2));
  }
  iVar3 = ftol();
  *(txmTEXTURE ***)(this + 0x68) = (&texList)[-iVar3];
  return;
}




/* from: gs_shared:caustics.cpp
   addr: 00540220 */

int __thiscall pteCAUSTICS::IsShadeObj(pteCAUSTICS *this,objOBJ *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0xbc)) {
    piVar2 = *(int **)(this + 0xc0);
    do {
      if (param_1 == (objOBJ *)*piVar2) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < *(int *)(this + 0xbc));
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:caustics.cpp
   addr: 00540260 */

int __thiscall
pteCAUSTICS::ShadeFace
          (pteCAUSTICS *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,ptePOLY_DATA *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  objFACE *poVar10;
  float *pfVar11;
  m3dV *pmVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  pteSDR_INFO *ppVar20;
  int *piVar21;
  ptePOLY_DATA *ppVar22;
  m3dCOLOR *pmVar23;
  objOBJ *poVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  unkbyte10 extraout_ST1;
  unkbyte10 Var30;
  unkbyte10 extraout_ST1_00;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  m3dCOLOR local_fc [4];
  undefined4 local_f8 [31];
  float local_7c;
  uint local_78 [4];
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  pteCAUSTICS *local_58;
  float local_54;
  objOBJ *local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [3];
  objOBJ *local_24;
  undefined8 *local_20;
  float local_1c;
  float local_18;
  uint local_14;
  float local_10;
  objOBJ *local_c;
  float local_8;
  
  puVar9 = local_f8 + 1;
  iVar17 = 8;
  local_58 = this;
  do {
    puVar9[-2] = 0;
    puVar9[-1] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9 = puVar9 + 4;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  local_68 = _m3dVZero;
  local_64 = DAT_00963740;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_60 = DAT_00963744;
  local_5c = 0;
  if (((byte)*param_1 & 1) == 0) {
    poVar10 = objOBJ::GetFace(param_1,param_2);
    local_24 = (objOBJ *)local_30;
    puVar2 = (undefined8 *)
             (*(int *)(*(int *)(param_1 + 0x28) + 0x40) + (uint)*(ushort *)(poVar10 + 2) * 0xc);
    local_c = param_1 + 0x3c;
    local_20 = puVar2;
    if (m3dSimdType != 0) {
      if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar25 = (undefined4)*puVar2;
        uVar28 = CONCAT44(uVar25,uVar25);
        uVar25 = (undefined4)((ulonglong)*puVar2 >> 0x20);
        uVar33 = CONCAT44(uVar25,uVar25);
        uVar34 = CONCAT44(*(undefined4 *)(puVar2 + 1),*(undefined4 *)(puVar2 + 1));
        uVar29 = PackedFloatingMUL(uVar28,*(undefined8 *)local_c);
        uVar27 = PackedFloatingMUL(uVar33,*(undefined8 *)(param_1 + 0x4c));
        uVar31 = PackedFloatingMUL(uVar34,*(undefined8 *)(param_1 + 0x5c));
        uVar29 = PackedFloatingADD(uVar29,*(undefined8 *)(param_1 + 0x6c));
        uVar32 = PackedFloatingMUL(uVar28,*(undefined8 *)(param_1 + 0x44));
        uVar28 = PackedFloatingADD(uVar27,uVar31);
        uVar27 = PackedFloatingMUL(uVar33,*(undefined8 *)(param_1 + 0x54));
        uVar34 = PackedFloatingMUL(uVar34,*(undefined8 *)(param_1 + 100));
        uVar33 = PackedFloatingADD(uVar32,*(undefined8 *)(param_1 + 0x74));
        uVar28 = PackedFloatingADD(uVar29,uVar28);
        uVar29 = PackedFloatingADD(uVar27,uVar34);
        local_30[1] = (float)((ulonglong)uVar28 >> 0x20);
        local_30[0] = (float)uVar28;
        uVar28 = PackedFloatingADD(uVar33,uVar29);
        local_30[2] = (float)uVar28;
        FastExitMediaState();
      }
      else {
        iVar17 = 0;
        local_14 = (int)local_c - (int)local_30;
        pfVar11 = local_30;
        do {
          uVar14 = local_14;
          iVar18 = 0;
          *pfVar11 = 0.0;
          pfVar19 = (float *)(uVar14 + (int)pfVar11);
          do {
            iVar1 = iVar18 * 4;
            fVar35 = *pfVar19;
            iVar18 = iVar18 + 1;
            pfVar19 = pfVar19 + 4;
            *pfVar11 = *(float *)((int)puVar2 + iVar1) * fVar35 + *pfVar11;
          } while (iVar18 < 3);
          iVar18 = iVar17 + iVar18 * 4;
          iVar17 = iVar17 + 1;
          *pfVar11 = *(float *)(local_c + iVar18 * 4) + *pfVar11;
          pfVar11 = pfVar11 + 1;
        } while (iVar17 < 3);
      }
    }
  }
  else {
    pmVar12 = objOBJ::GetFaceVertPtr(param_1,param_2,0);
    local_30[0] = *(float *)pmVar12;
    local_30[1] = *(float *)(pmVar12 + 4);
    local_30[2] = *(float *)(pmVar12 + 8);
  }
  local_3c = local_30[0] - *(float *)(this + 0x90);
  local_38 = local_30[1] - *(float *)(this + 0x94);
  local_34 = local_30[2] - *(float *)(this + 0x98);
  m3dNormalize((m3dV *)&local_3c);
  iVar17 = *(int *)(*(int *)(param_1 + 0x28) + 0x44);
  local_c = (objOBJ *)
            (local_3c * *(float *)(iVar17 + param_2 * 0xc) +
            local_38 * *(float *)(iVar17 + 4 + param_2 * 0xc) +
            local_34 * *(float *)(iVar17 + 8 + param_2 * 0xc));
  if (___real_bf800000 <= (float)local_c) {
    if ((float)local_c <= ___real_3f800000) {
      local_48 = ___real_3f800000 - ((float)local_c - ___real_bf800000) * ___real_3f000000;
    }
    else {
      local_48 = 0.0;
    }
  }
  else {
    local_48 = 1.0;
  }
  local_14 = 0;
  local_50 = *(objOBJ **)(param_3 + 4);
  if (0 < (int)local_50) {
    pmVar23 = local_fc;
    ppVar20 = param_3 + 8;
    Var30 = extraout_ST1;
    local_24 = local_50;
    do {
      if (((byte)this[0x8c] & 1) == 0) {
        local_8 = (*(float *)ppVar20 - *(float *)(this + 0x90)) *
                  (*(float *)ppVar20 - *(float *)(this + 0x90)) +
                  (*(float *)(ppVar20 + 4) - *(float *)(this + 0x94)) *
                  (*(float *)(ppVar20 + 4) - *(float *)(this + 0x94)) +
                  (*(float *)(ppVar20 + 8) - *(float *)(this + 0x98)) *
                  (*(float *)(ppVar20 + 8) - *(float *)(this + 0x98));
        if (m3dSimdType == 0) {
          local_8 = local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar36 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
          fVar35 = auVar36._0_4_;
          local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar35 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar35 * fVar35) *
                    local_8;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar26 = (ulonglong)(uint)local_8;
          uVar28 = PackedFloatingReciprocalSQRAprox((longlong)Var30,uVar26);
          uVar29 = PackedFloatingMUL(uVar28,uVar28);
          uVar29 = PackedFloatingReciprocalSQRIter1(uVar29,uVar26);
          uVar28 = PackedFloatingReciprocalIter2(uVar29,uVar28);
          uVar28 = PackedFloatingMUL(uVar28,uVar26);
          local_8 = (float)uVar28;
          FastExitMediaState();
        }
        else {
          local_8 = SQRT(local_8);
        }
        local_10 = local_8;
      }
      else {
        (**(code **)(*(int *)(this + 0x9c) + 0x10))(ppVar20,DAT_005dda94,0,&local_10,0);
      }
      local_18 = *(float *)(this + 0xd0);
      fVar35 = *(float *)(this + 0xcc);
      local_c = (objOBJ *)0x3f800000;
      local_40 = 0.0;
      local_1c = fVar35;
      if (local_18 < fVar35) {
        local_c = (objOBJ *)0x0;
        local_40 = 1.0;
        local_1c = local_18;
        local_18 = fVar35;
      }
      poVar24 = local_c;
      if ((local_1c <= local_10) && (poVar24 = (objOBJ *)local_40, local_10 <= local_18)) {
        local_54 = local_18;
        local_7c = local_40;
        poVar24 = local_c;
        fVar35 = local_1c;
        if (local_18 < local_1c) {
          local_54 = local_1c;
          local_7c = (float)local_c;
          poVar24 = (objOBJ *)local_40;
          fVar35 = local_18;
        }
        poVar24 = (objOBJ *)
                  (((local_10 - fVar35) * (local_7c - (float)poVar24)) / (local_54 - fVar35) +
                  (float)poVar24);
      }
      local_78[2] = (uint)*(short *)(param_1 + 0x1c);
      local_78[3] = param_2;
      local_68 = *(float *)ppVar20;
      local_8 = (float)poVar24 * *(float *)(this + 0xd8) * local_48 * ___real_437f0000;
      local_64 = *(float *)(ppVar20 + 4);
      local_60 = *(float *)(ppVar20 + 8);
      local_78[0] = local_78[0] | 2;
      uVar13 = gsEffEnvirColor((cdtINFO *)local_78,pmVar23,(m3dCOLOR *)0x0);
      fVar35 = local_8;
      if (uVar13 == 0) {
        *(float *)pmVar23 = local_8;
        *(float *)(pmVar23 + 4) = fVar35;
        *(float *)(pmVar23 + 8) = fVar35;
        *(float *)(pmVar23 + 0xc) = fVar35;
      }
      else {
        fVar35 = local_8 * ___real_3e4ccccd;
        local_44 = *(float *)pmVar23;
        fVar4 = fVar35;
        if ((___real_00000000 <= local_44) && (fVar4 = local_8, local_44 <= ___real_437f0000)) {
          fVar4 = (local_8 - fVar35) * local_44 * ___real_3b808081 + fVar35;
        }
        *(float *)pmVar23 = fVar4;
        local_4c = *(float *)(pmVar23 + 4);
        fVar4 = fVar35;
        if ((___real_00000000 <= local_4c) && (fVar4 = local_8, local_4c <= ___real_437f0000)) {
          fVar4 = (local_8 - fVar35) * local_4c * ___real_3b808081 + fVar35;
        }
        puVar2 = *(undefined8 **)(pmVar23 + 8);
        *(float *)(pmVar23 + 4) = fVar4;
        local_20 = puVar2;
        fVar4 = fVar35;
        if ((___real_00000000 <= (float)puVar2) &&
           (fVar4 = local_8, (float)puVar2 <= ___real_437f0000)) {
          fVar4 = (local_8 - fVar35) * (float)puVar2 * ___real_3b808081 + fVar35;
        }
        *(float *)(pmVar23 + 8) = fVar4;
      }
      *(undefined4 *)(pmVar23 + 0xc) = 0x437f0000;
      *(float *)(pmVar23 + 8) = *(float *)(pmVar23 + 8) * ___real_3f19999a;
      if (___real_3f800000 <= local_8 * ___real_437f0000) {
        local_14 = 1;
      }
      ppVar20 = ppVar20 + 0xc;
      pmVar23 = pmVar23 + 0x10;
      local_50 = local_50 + -1;
      Var30 = extraout_ST1_00;
    } while (local_50 != (objOBJ *)0x0);
    if (local_14 != 0) {
      iVar17 = objMTL_CTRL_TBL::FindMtlCtrlID
                         ((objMTL_CTRL_TBL *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 6),0);
      piVar21 = *(int **)(param_1 + 0x28);
      iVar17 = piVar21[6] + iVar17 * 4;
      uVar14 = (uint)*(byte *)(iVar17 + 6);
      uVar15 = (uint)*(byte *)(iVar17 + 7);
      if (**(int **)param_3 == 0) {
        param_3 = (pteSDR_INFO *)local_24;
        iVar17 = uVar14 * 6 + 8;
        ppVar22 = param_4 + 4;
        do {
          piVar21 = *(int **)(param_1 + 0x28);
          iVar18 = (uint)*(byte *)(piVar21 + 1) * param_2 + iVar17;
          iVar17 = iVar17 + 2;
          uVar14 = (uint)*(ushort *)(iVar18 + *piVar21);
          iVar18 = piVar21[uVar15 + 3];
          *(undefined4 *)ppVar22 = *(undefined4 *)(iVar18 + uVar14 * 8);
          *(undefined4 *)(ppVar22 + 4) = *(undefined4 *)(iVar18 + 4 + uVar14 * 8);
          param_3 = param_3 + -1;
          ppVar22 = ppVar22 + 8;
          this = local_58;
        } while (param_3 != (pteSDR_INFO *)0x0);
      }
      else {
        iVar18 = piVar21[uVar15 + 3];
        iVar17 = (uint)*(byte *)(piVar21 + 1) * param_2 + uVar14 * 6;
        puVar3 = (ushort *)(iVar17 + 8 + *piVar21);
        uVar14 = (uint)*puVar3;
        fVar35 = *(float *)(iVar18 + uVar14 * 8);
        fVar4 = *(float *)(iVar18 + 4 + uVar14 * 8);
        uVar14 = (uint)puVar3[1];
        fVar5 = *(float *)(iVar18 + uVar14 * 8);
        pfVar11 = (float *)(iVar18 + (uint)*(ushort *)(iVar17 + 0xc + *piVar21) * 8);
        fVar6 = *pfVar11;
        fVar7 = *(float *)(iVar18 + uVar14 * 8 + 4);
        fVar8 = pfVar11[1];
        iVar17 = 0xf8;
        poVar24 = local_24;
        ppVar22 = param_4;
        do {
          poVar24 = poVar24 + -1;
          *(float *)(ppVar22 + 4) =
               (fVar5 - fVar35) * *(float *)(iVar17 + *(int *)param_3) +
               (fVar6 - fVar35) * *(float *)(iVar17 + 0x20 + *(int *)param_3) + fVar35;
          *(float *)(ppVar22 + 8) =
               (fVar7 - fVar4) * *(float *)(iVar17 + *(int *)param_3) +
               (fVar8 - fVar4) * *(float *)(iVar17 + 0x20 + *(int *)param_3) + fVar4;
          iVar17 = iVar17 + 4;
          ppVar22 = ppVar22 + 8;
        } while (poVar24 != (objOBJ *)0x0);
      }
      local_14 = (uint)*(ushort *)
                        ((uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) * param_2 +
                        **(int **)(param_1 + 0x28));
      iVar17 = 0;
      if (0 < *(int *)(this + 0xbc)) {
        piVar21 = *(int **)(this + 0xc0);
        do {
          if (param_1 == (objOBJ *)*piVar21) break;
          iVar17 = iVar17 + 1;
          piVar21 = piVar21 + 3;
        } while (iVar17 < *(int *)(this + 0xbc));
      }
      param_2 = (int)(param_4 + 0x44);
      param_1 = local_24;
      do {
        ppVar22 = param_4 + 8;
        *(float *)(param_4 + 4) =
             *(float *)(*(int *)(*(int *)(this + 0xc0) + 4 + iVar17 * 0xc) + local_14 * 4) *
             *(float *)(param_4 + 4);
        *(float *)ppVar22 =
             *(float *)(*(int *)(*(int *)(this + 0xc0) + 8 + iVar17 * 0xc) + local_14 * 4) *
             *(float *)ppVar22;
        uVar14 = ftol();
        iVar18 = ftol();
        uVar15 = ftol();
        uVar16 = ftol();
        *(uint *)param_2 = ((uVar14 & 0xff | iVar18 << 8) << 8 | uVar15 & 0xff) << 8 | uVar16 & 0xff
        ;
        param_2 = param_2 + 4;
        param_1 = param_1 + -1;
        this = local_58;
        param_4 = ppVar22;
      } while (param_1 != (objOBJ *)0x0);
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:caustics.cpp
   addr: 00540AB0 */

int __thiscall
pteCAUSTICS::ShadeVert(pteCAUSTICS *this,objOBJ *param_1,int param_2,pteVERT_DATA *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0xc);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(iVar2 + param_2 * 8);
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)(iVar2 + 4 + param_2 * 8);
  if (((byte)this[0x7c] & 2) != 0) {
    uVar1 = ftol();
    iVar2 = ftol();
    uVar3 = ftol();
    uVar4 = ftol();
    *(uint *)(param_3 + 9) = ((uVar1 & 0xff | iVar2 << 8) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
    return 1;
  }
  iVar2 = ftol();
  uVar1 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  *(uint *)(param_3 + 9) = ((iVar2 << 8 | uVar1 & 0xff) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
  return 1;
}




/* from: gs_shared:caustics.cpp
   addr: 00540BF0 */

int __thiscall
pteEMAP_REFLECT_WATER::ShadeFace
          (pteEMAP_REFLECT_WATER *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  int iVar1;
  m3dV local_c [4];
  float local_8;
  
  camCAMERA::GetOrigin(*(camCAMERA **)(pteManager + 0x17940),local_c);
  if (local_8 < *(float *)(this + 0x11c)) {
    return 0;
  }
  iVar1 = pteEMAP_REFLECT::ShadeFace((pteEMAP_REFLECT *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: gs_shared:caustics.cpp
   addr: 00540C50 */

int __thiscall
pteEMAP_REFLECT_WATER::ShadeVert
          (pteEMAP_REFLECT_WATER *this,objOBJ *param_1,int param_2,pteVERT_DATA *param_3)

{
  int iVar1;
  m3dV local_c [4];
  float local_8;
  
  camCAMERA::GetOrigin(*(camCAMERA **)(pteManager + 0x17940),local_c);
  if (local_8 < *(float *)(this + 0x11c)) {
    return 0;
  }
  iVar1 = pteEMAP_REFLECT::ShadeVert((pteEMAP_REFLECT *)this,param_1,param_2,param_3);
  return iVar1;
}




/* from: gs_shared:caustics.cpp
   addr: 00540CB0 */

pteSHADER * __fastcall pteEMAP_REFLECT_WATER::Create(animINST *param_1,objOBJ *param_2)

{
  pteEMAP_REFLECT *this;
  
  this = (pteEMAP_REFLECT *)operator_new(0x128);
  if (this != (pteEMAP_REFLECT *)0x0) {
    pteEMAP_REFLECT::pteEMAP_REFLECT(this);
    *(undefined ***)this = &_vftable_;
    return (pteSHADER *)this;
  }
  return (pteSHADER *)0x0;
}

