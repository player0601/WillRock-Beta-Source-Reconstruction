
/* from: drv:D3d_prep_cfg.cpp
   addr: 004B5F40 */

void __thiscall d3dREND_DRIVER::InvalidatePrepCFG(d3dREND_DRIVER *this,scnSCENE *param_1)

{
  rendDRIVER::InvalidatePrepCFG((rendDRIVER *)this,param_1);
  (**(code **)(*(int *)d3dDriver + 0x54))();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_prep_cfg.cpp
   addr: 004B5F60 */

int __thiscall d3dREND_DRIVER::ObjAllocPrepCFG(d3dREND_DRIVER *this,objOBJ *param_1)

{
  float fVar1;
  undefined4 uVar2;
  rendOBJ_UD_PREP_CFG *this_00;
  uint *puVar3;
  rendCFG_PREP *prVar4;
  ushort *puVar5;
  float fVar6;
  int iVar7;
  rendOBJ_UD_PREP_CFG *prVar8;
  int iVar9;
  rendCFG_PREP *this_01;
  int iVar10;
  int iVar11;
  uint uVar12;
  int local_10;
  int local_c;
  
  objOBJ::InvalidateRendCFG(param_1);
  if ((*(int *)(param_1 + 0xe8) == 0) ||
     (*(int *)(*(int *)(param_1 + 0xe8) + *(int *)(this + 0x78) * 4) == 0)) {
    this_00 = (rendOBJ_UD_PREP_CFG *)operator_new(0x34);
    if (this_00 == (rendOBJ_UD_PREP_CFG *)0x0) {
      return 0;
    }
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined2 *)(this_00 + 0x28) = 0;
    *(undefined2 *)(this_00 + 0x2a) = 0xffff;
    *(undefined ***)this_00 = &d3dOBJ_UD_PREP_CFG::_vftable_;
    uVar12 = (uint)**(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
    puVar3 = (uint *)operator_new(uVar12 * 0x128 + 4);
    if (puVar3 == (uint *)0x0) {
      prVar4 = (rendCFG_PREP *)0x0;
    }
    else {
      *puVar3 = uVar12;
      prVar4 = (rendCFG_PREP *)(puVar3 + 1);
      this_01 = prVar4;
      if (-1 < (int)(uVar12 - 1)) {
        do {
          rendCFG_PREP::rendCFG_PREP(this_01);
          *(undefined ***)this_01 = &d3dCFG_PREP::_vftable_;
          uVar12 = uVar12 - 1;
          this_01 = this_01 + 0x128;
        } while (uVar12 != 0);
      }
    }
    *(rendCFG_PREP **)(this_00 + 0xc) = prVar4;
    *(undefined4 *)(this_00 + 8) = 0x128;
    objOBJ::AddUsrData(param_1,*(int *)(this + 0x78),(objUSR_DATA *)this_00);
    rendOBJ_UD_PREP_CFG::Init(this_00,param_1);
    *(undefined2 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    local_c = 0;
    puVar5 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
    if (*puVar5 != 0) {
      iVar11 = 0;
      do {
        iVar7 = *(int *)(puVar5 + 1);
        iVar10 = 0;
        local_10 = 0;
        if (0 < *(short *)(iVar7 + 100 + iVar11)) {
          do {
            iVar7 = iVar10 + iVar11 + iVar7;
            switch((char)puVar5[*(char *)(iVar7 + 0x18) * 2 + 4]) {
            case '\x02':
            case '\x03':
              fVar1 = ___real_40000000 / *(float *)(iVar7 + 0xc) + ___real_40800000;
              goto LAB_004b60b2;
            case '\x04':
              if (*(float *)(this_00 + 0x2c) <= *(float *)(iVar7 + 0x10)) {
                uVar2 = *(undefined4 *)(iVar7 + 0x10);
                this_00[0x28] = (rendOBJ_UD_PREP_CFG)((byte)this_00[0x28] | 2);
                *(undefined4 *)(this_00 + 0x2c) = uVar2;
              }
              else {
                this_00[0x28] = (rendOBJ_UD_PREP_CFG)((byte)this_00[0x28] | 2);
                *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this_00 + 0x2c);
              }
              break;
            case '\x05':
              fVar1 = *(float *)(iVar7 + 0x10);
              this_00[0x28] = (rendOBJ_UD_PREP_CFG)((byte)this_00[0x28] | 2);
LAB_004b60b2:
              if (___real_00000000 < fVar1) {
                iVar7 = *(int *)(this_00 + 0x24);
                fVar6 = DAT_005db7d0;
                if (0 < iVar7) {
                  prVar8 = this_00 + 0x10;
                  iVar9 = iVar7;
                  do {
                    if (ABS(*(float *)prVar8 - fVar1) < fVar6) {
                      fVar6 = ABS(*(float *)prVar8 - fVar1);
                    }
                    prVar8 = prVar8 + 4;
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                }
                if (___real_40000000 < fVar6) {
                  *(float *)(this_00 + iVar7 * 4 + 0x10) = fVar1;
                  *(int *)(this_00 + 0x24) = *(int *)(this_00 + 0x24) + 1;
                  if (fVar1 < *(float *)(this_00 + 0x2c)) {
                    fVar1 = *(float *)(this_00 + 0x2c);
                  }
                  *(float *)(this_00 + 0x2c) = fVar1;
                }
              }
            }
            local_10 = local_10 + 1;
            iVar10 = iVar10 + 0x19;
            puVar5 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
            iVar7 = *(int *)(puVar5 + 1);
          } while (local_10 < *(short *)(iVar7 + 100 + iVar11));
        }
        iVar7 = *(int *)(this_00 + 8) * local_c;
        local_c = local_c + 1;
        iVar11 = iVar11 + 0x70;
        *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 2) + -4 + iVar11) =
             iVar7 + *(int *)(this_00 + 0xc);
        puVar5 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
      } while (local_c < (int)(uint)*puVar5);
    }
    if ((*(int *)(this_00 + 0x24) == 0) && ((*(ushort *)(this_00 + 0x28) & 2) == 0)) {
      *(ushort *)(this_00 + 0x28) = *(ushort *)(this_00 + 0x28) | 1;
    }
    (**(code **)(*(int *)this + 0x90))(param_1);
  }
  return 1;
}




/* from: drv:D3d_prep_cfg.cpp
   addr: 004B6230
   addr: 004B6230 */

void * __thiscall
d3dOBJ_UD_PREP_CFG::_vector_deleting_destructor_(d3dOBJ_UD_PREP_CFG *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(int *)(this + 0xc) != 0) {
    operator_delete((void *)(*(int *)(this + 0xc) + -4));
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &objUSR_DATA::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:D3d_prep_cfg.cpp
   addr: 004B6290 */

void __thiscall rendCFG_PREP::rendCFG_PREP(rendCFG_PREP *this)

{
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined ***)this = &_vftable_;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_prep_cfg.cpp
   addr: 004B62C0 */

int __thiscall d3dREND_DRIVER::IsValidPrepCFG(d3dREND_DRIVER *this,objOBJ *param_1)

{
  bool bVar1;
  float fVar2;
  objOBJ *poVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 extraout_MM1;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float local_34;
  float fStack_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  poVar3 = param_1;
  iVar4 = rendDRIVER::IsValidPrepCFG((rendDRIVER *)this,param_1);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(int *)(poVar3 + 0xe8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(poVar3 + 0xe8) + *(int *)(this + 0x78) * 4);
  }
  if (((*(byte *)(iVar4 + 0x28) & 1) == 0) && (*(uint *)(iVar4 + 0x30) <= *(uint *)(this + 0x1e14)))
  {
    iVar5 = *(int *)(this + 0x84);
    local_18 = *(float *)(iVar5 + 0x1f0);
    fVar2 = *(float *)(iVar5 + 0x144) * ___real_3acccccd;
    local_14 = *(float *)(iVar5 + 500);
    local_10 = *(float *)(iVar5 + 0x1f8);
    if (*(animINST **)(poVar3 + 0xbc) == (animINST *)0x0) {
      iVar5 = (**(code **)(*(int *)(poVar3 + 0xc0) + 0x10))(&local_18,DAT_005db7d0,0,&param_1,0);
      if (iVar5 == 2) {
        param_1 = (objOBJ *)0x0;
      }
    }
    else {
      animINST::GetCenter(*(animINST **)(poVar3 + 0xbc),(m3dV *)&local_c);
      fVar14 = (local_c - local_18) * (local_c - local_18) +
               (local_8 - local_14) * (local_8 - local_14) +
               (local_4 - local_10) * (local_4 - local_10);
      if (m3dSimdType == 0) {
        fVar14 = fVar14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar15 = auVar16._0_4_;
        param_1 = (objOBJ *)
                  (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar15 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar14 * fVar15 * fVar15) * fVar14
                  );
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar11 = (ulonglong)(uint)fVar14;
        uVar12 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar11);
        uVar13 = PackedFloatingMUL(uVar12,uVar12);
        uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
        uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
        uVar12 = PackedFloatingMUL(uVar12,uVar11);
        param_1 = (objOBJ *)uVar12;
        FastExitMediaState();
      }
      else {
        param_1 = (objOBJ *)SQRT(fVar14);
      }
    }
    if ((float)param_1 <= *(float *)(iVar4 + 0x2c) + ___real_41200000) {
      *(int *)(iVar4 + 0x30) = *(int *)(this + 0x1e14) + 3;
    }
    else {
      *(int *)(iVar4 + 0x30) = *(int *)(this + 0x1e14) + 0x1e;
    }
    iVar5 = *(int *)(iVar4 + 0x24);
    if (0 < iVar5) {
      if (iVar5 == 1) {
        bVar1 = fVar2 * *(float *)(iVar4 + 0x10) < (float)param_1;
        if ((ushort)bVar1 != *(ushort *)(iVar4 + 0x2a)) {
          *(ushort *)(iVar4 + 0x2a) = (ushort)bVar1;
          return 0;
        }
      }
      else {
        uVar10 = 0;
        iVar6 = 0;
        if (0 < iVar5) {
          pfVar8 = (float *)(iVar4 + 0x10);
          do {
            if (fVar2 * *pfVar8 < (float)param_1) {
              uVar10 = uVar10 | 1 << ((byte)iVar6 & 0x1f);
            }
            iVar6 = iVar6 + 1;
            pfVar8 = pfVar8 + 1;
          } while (iVar6 < iVar5);
        }
        if (uVar10 != *(ushort *)(iVar4 + 0x2a)) {
          *(short *)(iVar4 + 0x2a) = (short)uVar10;
          return 0;
        }
      }
    }
    if (((*(byte *)(iVar4 + 0x28) & 2) != 0) &&
       (iVar5 = 0, **(short **)(*(int *)(poVar3 + 0x28) + 0x18) != 0)) {
      do {
        iVar6 = *(int *)(iVar4 + 8) * iVar5;
        iVar7 = iVar6 + *(int *)(iVar4 + 0xc);
        iVar9 = 0;
        if (0 < *(int *)(iVar6 + 0xbc + *(int *)(iVar4 + 0xc))) {
          pfVar8 = (float *)(iVar7 + 0x28);
          do {
            if ((3 < (int)pfVar8[-6]) && ((int)pfVar8[-6] < 7)) {
              fVar14 = fVar2 * *pfVar8;
              fStack_28 = 0.0;
              fStack_24 = 1.0;
              fStack_30 = fVar2 * pfVar8[-1];
              local_34 = fVar14;
              if (fVar14 < fStack_30) {
                fStack_24 = 0.0;
                fStack_28 = 1.0;
                local_34 = fStack_30;
                fStack_30 = fVar14;
              }
              fVar14 = fStack_24;
              if ((fStack_30 <= (float)param_1) && (fVar14 = fStack_28, (float)param_1 <= local_34))
              {
                fStack_1c = local_34;
                fStack_20 = fStack_28;
                if (local_34 < fStack_30) {
                  fStack_1c = fStack_30;
                  fStack_20 = fStack_24;
                  fStack_30 = local_34;
                  fStack_24 = fStack_28;
                }
                fVar14 = (((float)param_1 - fStack_30) * (fStack_20 - fStack_24)) /
                         (fStack_1c - fStack_30) + fStack_24;
              }
              pfVar8[-2] = fVar14;
            }
            iVar9 = iVar9 + 1;
            pfVar8 = pfVar8 + 9;
          } while (iVar9 < *(int *)(iVar7 + 0xbc));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)**(ushort **)(*(int *)(poVar3 + 0x28) + 0x18));
    }
  }
  return 1;
}




/* from: drv:D3d_prep_cfg.cpp
   addr: 004B6690 */

void __thiscall
d3dREND_DRIVER::ValidatePrepCFG
          (d3dREND_DRIVER *this,objOBJ *param_1,int param_2,rendCFG_PREP *param_3)

{
  PrepareCFG(this,param_1,
             (objSPLIT_ENTRY *)
             (param_2 * 0x70 + *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 2)),
             (rendCFG *)(param_3 + 8));
  PrepStgBlend(this,(rendCFG *)(param_3 + 8),(d3dCFG_PREP *)param_3,*(char **)(param_1 + 0x18));
  rendDRIVER::ValidatePrepCFG((rendDRIVER *)this,param_1,param_2,param_3);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_prep_cfg.cpp
   addr: 004B66F0 */

void __thiscall
d3dREND_DRIVER::PrepareCFG
          (d3dREND_DRIVER *this,objOBJ *param_1,objSPLIT_ENTRY *param_2,rendCFG *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  objOBJ *poVar4;
  objOBJ *poVar5;
  rendCFG *prVar6;
  int iVar7;
  d3dDRIVER *pdVar8;
  rendCFG *prVar9;
  rendCFG *prVar10;
  int *piVar11;
  uint uVar12;
  objSPLIT_ENTRY *local_3c;
  int local_38;
  int local_30;
  rendCFG *local_2c;
  int local_24 [4];
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  prVar6 = param_3;
  poVar4 = param_1;
  if (((*(uint *)param_1 & 0x4000) == 0) ||
     ((*(byte *)(*(int *)(d3dDriver + 0x210) + 0x14) & 8) == 0)) {
    objOBJ::SetStateRendNo(param_1,0x2000);
  }
  else {
    objOBJ::SetStateRendYes(param_1,0x2000);
  }
  objOBJ::SetStateRendYes(param_1,0x4000);
  *(undefined4 *)(param_3 + 0xb8) = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x62);
  *(undefined4 *)(param_3 + 0xc0) = 0;
  *(undefined4 *)(param_3 + 0xbc) = uVar2;
  if ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x800000) == 0) {
    *(uint *)(param_3 + 0xb8) = *(uint *)(param_3 + 0xb8) & 0xfffff7ff;
  }
  bVar3 = false;
  param_3 = (rendCFG *)0x0;
  pdVar8 = d3dDriver;
  if (0 < *(short *)(param_2 + 100)) {
    local_3c = param_2 + 0x19;
    local_30 = 1;
    local_2c = prVar6;
    param_1 = (objOBJ *)param_2;
    do {
      poVar5 = param_1;
      uVar12 = (uint)*(byte *)(*(int *)(*(int *)(poVar4 + 0x28) + 0x18) + 8 +
                              (char)param_1[0x18] * 4);
      local_38 = *(int *)param_1;
      local_24[2] = uVar12;
      if ((local_38 == 0) && (uVar12 != 0)) goto LAB_004b6a24;
      if (uVar12 == 0) {
        if ((*(uint *)(*(int *)(pdVar8 + 0x210) + 0x14) & 0x80000) == 0) {
          if ((*(uint *)(*(int *)(pdVar8 + 0x210) + 0x14) & 0x8000000) != 0) {
            local_38 = *(int *)(txmManager + 0x10f8);
          }
        }
        else {
          local_38 = *(int *)(txmManager + 0x10f0);
        }
LAB_004b69d7:
        local_24[0] = local_38;
        bVar1 = *(byte *)(*(int *)(*(int *)(poVar4 + 0x28) + 0x18) + 9 + (char)param_1[0x18] * 4);
        *(int *)(prVar6 + 0xb4) = local_30;
        local_24[3] = (uint)bVar1;
        local_30 = local_30 + 1;
        prVar9 = local_2c + 0x24;
        piVar11 = local_24;
        prVar10 = local_2c;
        for (iVar7 = 9; pdVar8 = d3dDriver, local_2c = prVar9, iVar7 != 0; iVar7 = iVar7 + -1) {
          *(int *)prVar10 = *piVar11;
          piVar11 = piVar11 + 1;
          prVar10 = prVar10 + 4;
        }
      }
      else {
        if (uVar12 == 4) {
          CalcBumpDistCoeff(this,poVar4,(objMTL *)param_1);
          pdVar8 = d3dDriver;
          if ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x2000000) == 0) goto LAB_004b6a24;
          iVar7 = *(int *)(d3dDriver + 0x238);
          if ((iVar7 == 2) || (3 < iVar7)) {
            if ((*(uint *)(prVar6 + 0xb8) & 0x20) != 0) goto LAB_004b6886;
            uVar12 = 6;
            local_24[1] = *(int *)local_3c;
            *(uint *)(prVar6 + 0xb8) = *(uint *)(prVar6 + 0xb8) | 0x220;
            local_3c = local_3c + 0x19;
            param_3 = param_3 + 1;
            param_1 = param_1 + 0x19;
            local_24[2] = 6;
          }
          else if ((iVar7 == 1) && (((byte)prVar6[0xb8] & 0x20) != 0)) {
LAB_004b6886:
            bVar3 = true;
          }
          local_14 = *(float *)(*(int *)(*(int *)(poVar4 + 0x28) + 0x18) + 0x18);
          local_8 = *(undefined4 *)(poVar5 + 0xc);
          local_10 = *(undefined4 *)(*(int *)(*(int *)(poVar4 + 0x28) + 0x18) + 0x1c);
          local_c = *(undefined4 *)(poVar5 + 0x14);
          local_4 = *(undefined4 *)(poVar5 + 0x10);
          *(uint *)(prVar6 + 0xb8) = *(uint *)(prVar6 + 0xb8) & 0xfffff7ff;
          pdVar8 = d3dDriver;
        }
        if (uVar12 == 5) {
          CalcBumpDistCoeff(this,poVar4,(objMTL *)poVar5);
          pdVar8 = d3dDriver;
          if (((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x4000000) == 0) ||
             (*(float *)(poVar5 + 0x14) < _DAT_005db7cc)) goto LAB_004b6a24;
          local_8 = *(undefined4 *)(poVar5 + 0xc);
          local_4 = *(undefined4 *)(poVar5 + 0x10);
          local_c = *(undefined4 *)(poVar5 + 0x14);
          local_14 = *(float *)(*(int *)(*(int *)(poVar4 + 0x28) + 0x18) + 0x20) *
                     *(float *)(poVar5 + 0x14);
          goto LAB_004b69d7;
        }
        if (uVar12 == 2) {
          uVar12 = *(uint *)(*(int *)(pdVar8 + 0x210) + 0x14) & 0x200000;
LAB_004b69b1:
          if ((uVar12 != 0) &&
             (iVar7 = IsDetailTexConst(this,poVar4,(objMTL *)poVar5), pdVar8 = d3dDriver, iVar7 == 0
             )) goto LAB_004b69d7;
        }
        else if (uVar12 == 3) {
          if ((*(uint *)(*(int *)(pdVar8 + 0x210) + 0x14) & 0x200000) != 0) {
            uVar12 = *(uint *)(*(int *)(pdVar8 + 0x210) + 0x14) & 0x20000000;
            goto LAB_004b69b1;
          }
        }
        else if ((uVar12 != 1) || ((*(uint *)(*(int *)(pdVar8 + 0x210) + 0x14) & 0x4000) != 0))
        goto LAB_004b69d7;
      }
LAB_004b6a24:
      local_3c = local_3c + 0x19;
      param_3 = param_3 + 1;
      param_1 = param_1 + 0x19;
    } while ((int)param_3 < (int)*(short *)(param_2 + 100));
    if (bVar3) {
      prVar10 = prVar6;
      piVar11 = local_24;
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar11 = *(int *)prVar10;
        prVar10 = prVar10 + 4;
        piVar11 = piVar11 + 1;
      }
      prVar10 = prVar6 + 0x24;
      prVar9 = prVar6;
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(int *)prVar9 = *(int *)prVar10;
        prVar10 = prVar10 + 4;
        prVar9 = prVar9 + 4;
      }
      piVar11 = local_24;
      prVar10 = prVar6 + 0x24;
      for (iVar7 = 9; pdVar8 = d3dDriver, iVar7 != 0; iVar7 = iVar7 + -1) {
        *(int *)prVar10 = *piVar11;
        piVar11 = piVar11 + 1;
        prVar10 = prVar10 + 4;
      }
    }
  }
  if ((*(uint *)(*(int *)(pdVar8 + 0x210) + 0x14) & 0x800000) == 0) {
    *(uint *)(prVar6 + 0xb8) = *(uint *)(prVar6 + 0xb8) & 0xfffff7ff;
  }
  return;
}




/* from: drv:D3d_prep_cfg.cpp
   addr: 004B6AC0 */

void __thiscall
d3dREND_DRIVER::PrepareCFG_NotHTL
          (d3dREND_DRIVER *this,objOBJ *param_1,objSPLIT_ENTRY *param_2,rendCFG *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  rendCFG *prVar4;
  int *piVar5;
  rendCFG *prVar6;
  int local_30;
  objSPLIT_ENTRY *local_2c;
  int local_24 [9];
  
  *(undefined4 *)(param_3 + 0xb8) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_3 + 0xbc) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x62);
  *(undefined4 *)(param_3 + 0xc0) = 0;
  local_30 = 0;
  if (0 < *(short *)(param_2 + 100)) {
    iVar3 = 1;
    local_2c = param_2;
    prVar4 = param_3;
    do {
      bVar1 = *(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 8 + (char)local_2c[0x18] * 4);
      local_24[2] = (int)bVar1;
      if (((bVar1 < 3) && (local_24[2] != 2)) &&
         ((local_24[0] = *(int *)local_2c, local_24[0] != 0 || (local_24[2] == 0)))) {
        if (local_24[2] == 1) {
          if ((*(byte *)(*(int *)(d3dDriver + 0x210) + 0x15) & 0x40) == 0) goto LAB_004b6bc6;
        }
        else if (local_24[2] == 0) {
          if ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x80000) == 0) {
            if ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x8000000) != 0) {
              local_24[0] = *(int *)(txmManager + 0x10f8);
            }
          }
          else {
            local_24[0] = *(int *)(txmManager + 0x10f0);
          }
        }
        *(int *)(param_3 + 0xb4) = iVar3;
        local_24[3] = local_24[2];
        iVar3 = iVar3 + 1;
        piVar5 = local_24;
        prVar6 = prVar4;
        for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(int *)prVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          prVar6 = prVar6 + 4;
        }
        prVar4 = prVar4 + 0x24;
      }
LAB_004b6bc6:
      local_30 = local_30 + 1;
      local_2c = local_2c + 0x19;
    } while (local_30 < *(short *)(param_2 + 100));
  }
  return;
}




/* from: drv:D3d_prep_cfg.cpp
   addr: 004B6BF0 */

int __fastcall
_d3drGetMtlStgBlend(int param_1,rendMTL *param_2,int param_3,d3dSTG_BLEND_PARAMS *param_4)

{
  int iVar1;
  int iVar2;
  txmD3D *ptVar3;
  
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
    *(undefined4 *)param_4 = 1;
    *(undefined4 *)(param_4 + 4) = 1;
    iVar1 = *(int *)param_2;
    if (iVar1 == 0) {
      *(undefined4 *)(param_4 + 8) = 0xffffffff;
      return 1;
    }
    if (*(int *)(iVar1 + 0x48) == 0x20544558) {
      ptVar3 = (txmD3D *)(iVar1 + 0x78);
    }
    else if (*(int *)(iVar1 + 0x48) == 0x4c544558) {
      ptVar3 = (txmD3D *)(iVar1 + 0x228);
    }
    else {
      ptVar3 = (txmD3D *)0x0;
    }
    iVar2 = *(int *)(ptVar3 + 0x10);
    if ((iVar2 < 0) || ((*(uint *)(iVar1 + 4) & 0x20000) != 0)) {
      iVar2 = txmD3D::D3DCalcTexStageNmb(ptVar3);
    }
    *(int *)(param_4 + 8) = iVar2;
    return 1;
  case 4:
  case 5:
    if (0 < param_3) {
      return 0;
    }
    *(undefined4 *)param_4 = 2;
    *(undefined4 *)(param_4 + 4) = 1;
    iVar1 = *(int *)param_2;
    if (iVar1 == 0) {
      *(undefined4 *)(param_4 + 8) = 0xffffffff;
      *(undefined4 *)(param_4 + 0xc) = 0;
      return 1;
    }
    if (*(int *)(iVar1 + 0x48) == 0x20544558) {
      ptVar3 = (txmD3D *)(iVar1 + 0x78);
    }
    else if (*(int *)(iVar1 + 0x48) == 0x4c544558) {
      ptVar3 = (txmD3D *)(iVar1 + 0x228);
    }
    else {
      ptVar3 = (txmD3D *)0x0;
    }
    iVar2 = *(int *)(ptVar3 + 0x10);
    if ((iVar2 < 0) || ((*(uint *)(iVar1 + 4) & 0x20000) != 0)) {
      iVar2 = txmD3D::D3DCalcTexStageNmb(ptVar3);
    }
    *(int *)(param_4 + 8) = iVar2;
    *(int *)(param_4 + 0xc) = iVar2 + 1;
    return 1;
  case 6:
    if (0 < param_3) {
      return 0;
    }
    *(undefined4 *)param_4 = 2;
    *(undefined4 *)(param_4 + 4) = 2;
    iVar1 = *(int *)param_2;
    if (iVar1 == 0) {
      iVar2 = -1;
    }
    else {
      if (*(int *)(iVar1 + 0x48) == 0x20544558) {
        ptVar3 = (txmD3D *)(iVar1 + 0x78);
      }
      else if (*(int *)(iVar1 + 0x48) == 0x4c544558) {
        ptVar3 = (txmD3D *)(iVar1 + 0x228);
      }
      else {
        ptVar3 = (txmD3D *)0x0;
      }
      iVar2 = *(int *)(ptVar3 + 0x10);
      if ((iVar2 < 0) || ((*(uint *)(iVar1 + 4) & 0x20000) != 0)) {
        iVar2 = txmD3D::D3DCalcTexStageNmb(ptVar3);
      }
    }
    *(int *)(param_4 + 8) = iVar2;
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 0) {
      *(undefined4 *)(param_4 + 0xc) = 0xffffffff;
      return 1;
    }
    if (*(int *)(iVar1 + 0x48) == 0x20544558) {
      ptVar3 = (txmD3D *)(iVar1 + 0x78);
    }
    else if (*(int *)(iVar1 + 0x48) == 0x4c544558) {
      ptVar3 = (txmD3D *)(iVar1 + 0x228);
    }
    else {
      ptVar3 = (txmD3D *)0x0;
    }
    iVar2 = *(int *)(ptVar3 + 0x10);
    if ((iVar2 < 0) || ((*(uint *)(iVar1 + 4) & 0x20000) != 0)) {
      iVar2 = txmD3D::D3DCalcTexStageNmb(ptVar3);
    }
    *(int *)(param_4 + 0xc) = iVar2;
    return 1;
  default:
    *(undefined4 *)param_4 = 0;
    *(undefined4 *)(param_4 + 4) = 0;
    *(undefined4 *)(param_4 + 8) = 0;
    *(undefined4 *)(param_4 + 0xc) = 0;
    return 1;
  }
  if (param_3 < 1) {
    *(undefined4 *)param_4 = 1;
    *(uint *)(param_4 + 4) = (uint)((param_1 & 5U) != 0);
  }
  else {
    if ((param_1 & 10U) == 0) {
      *(undefined4 *)param_4 = 1;
    }
    else {
      if ((param_1 & 5U) == 0) {
        *(undefined4 *)param_4 = 1;
        *(undefined4 *)(param_4 + 4) = 0;
        *(int *)(param_4 + 8) = param_3;
        goto LAB_004b6c92;
      }
      *(undefined4 *)param_4 = 2;
    }
    *(undefined4 *)(param_4 + 4) = 1;
  }
  iVar1 = *(int *)param_2;
  if (iVar1 == 0) {
    iVar2 = -1;
  }
  else {
    if (*(int *)(iVar1 + 0x48) == 0x20544558) {
      ptVar3 = (txmD3D *)(iVar1 + 0x78);
    }
    else if (*(int *)(iVar1 + 0x48) == 0x4c544558) {
      ptVar3 = (txmD3D *)(iVar1 + 0x228);
    }
    else {
      ptVar3 = (txmD3D *)0x0;
    }
    iVar2 = *(int *)(ptVar3 + 0x10);
    if ((iVar2 < 0) || ((*(uint *)(iVar1 + 4) & 0x20000) != 0)) {
      iVar2 = txmD3D::D3DCalcTexStageNmb(ptVar3);
    }
  }
  *(int *)(param_4 + 8) = iVar2;
LAB_004b6c92:
  if (*(int *)(param_4 + 8) == -1) {
    *(int *)(param_4 + 8) = param_3;
  }
  if (*(int *)param_4 != 2) {
    return 1;
  }
  *(int *)(param_4 + 0xc) = *(int *)(param_4 + 8) + 1;
  return 1;
}




/* from: drv:D3d_prep_cfg.cpp
   addr: 004B6E80 */

void __thiscall
d3dREND_DRIVER::PrepStgBlend
          (d3dREND_DRIVER *this,rendCFG *param_1,d3dCFG_PREP *param_2,char *param_3)

{
  d3dCFG_PREP *pdVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  rendCFG *prVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  iVar6 = 0;
  if (0 < *(int *)(d3dDriver + 0x230)) {
    pdVar1 = param_2 + 0xe8;
    do {
      *(undefined4 *)(pdVar1 + -4) = 0;
      *(undefined4 *)pdVar1 = 0;
      *(undefined4 *)(pdVar1 + 4) = 1;
      iVar3 = iVar3 + 1;
      pdVar1 = pdVar1 + 0xc;
    } while (iVar3 < *(int *)(d3dDriver + 0x230));
  }
  *(undefined4 *)(param_2 + 0xe0) = 0;
  iVar3 = 0;
  prVar5 = param_1;
  if (0 < *(int *)(param_1 + 0xb4)) {
    do {
      iVar2 = _d3drGetMtlStgBlend(*(int *)(param_1 + 0xb8),(rendMTL *)prVar5,
                                  *(int *)(param_2 + 0xe0),(d3dSTG_BLEND_PARAMS *)&local_10);
      if ((((iVar2 == 0) || (iVar6 = iVar6 + local_c, *(int *)(d3dDriver + 0x238) < iVar6)) ||
          (*(int *)(d3dDriver + 0x230) < *(int *)(param_2 + 0xe0) + local_10)) ||
         (iVar2 = local_8 * 3 + 0x39, *(int *)(param_2 + iVar2 * 4) != 0)) break;
      *(undefined4 *)(param_2 + iVar2 * 4) = 1;
      *(rendCFG **)(param_2 + local_8 * 0xc + 0xe8) = prVar5;
      *(int *)(param_2 + local_8 * 0xc + 0xec) = local_10;
      iVar2 = local_8 + 1;
      if (local_8 + 1 < *(int *)(param_2 + 0xe0)) {
        iVar2 = *(int *)(param_2 + 0xe0);
      }
      *(int *)(param_2 + 0xe0) = iVar2;
      if (local_10 == 2) {
        iVar2 = local_4 * 3 + 0x39;
        if (*(int *)(param_2 + iVar2 * 4) != 0) break;
        *(undefined4 *)(param_2 + iVar2 * 4) = 1;
        iVar2 = local_4 + 1;
        if (local_4 + 1 < *(int *)(param_2 + 0xe0)) {
          iVar2 = *(int *)(param_2 + 0xe0);
        }
        *(int *)(param_2 + 0xe0) = iVar2;
      }
      iVar3 = iVar3 + 1;
      prVar5 = (rendCFG *)((rendMTL *)prVar5 + 0x24);
    } while (iVar3 < *(int *)(param_1 + 0xb4));
  }
  iVar6 = 0;
  *(int *)(param_2 + 0x120) = iVar3;
  *(undefined4 *)(param_2 + 0x124) = 0;
  if (0 < *(int *)(param_2 + 0xe0)) {
    do {
      iVar3 = *(int *)(param_2 + iVar6 * 0xc + 0xe8);
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 8);
        uVar4 = *(uint *)(param_2 + 0x124) | *(int *)(iVar3 + 0xc) << ((char)iVar6 * '\x03' & 0x1fU)
        ;
        *(uint *)(param_2 + 0x124) = uVar4;
        if (iVar2 == 6) {
          *(uint *)(param_2 + 0x124) =
               *(int *)(iVar3 + 0xc) << ((char)iVar6 * '\x03' + 3U & 0x1f) | uVar4;
        }
      }
      iVar6 = iVar6 + *(int *)(param_2 + iVar6 * 0xc + 0xec);
    } while (iVar6 < *(int *)(param_2 + 0xe0));
  }
  return;
}




/* from: drv:D3d_prep_cfg.cpp
   addr: 004B7030 */

ulong __thiscall d3dCFG_PREP::CalcSignature(d3dCFG_PREP *this,objOBJ *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = 0;
  if (0 < *(int *)(this + 0xe0)) {
    do {
      if (*(int *)(this + iVar1 * 0xc + 0xe8) == 0) {
        bVar2 = 8;
      }
      else {
        bVar2 = (byte)*(undefined4 *)(*(int *)(this + iVar1 * 0xc + 0xe8) + 8);
      }
      uVar3 = uVar3 | 1 << (bVar2 & 0x1f);
      iVar1 = iVar1 + *(int *)(this + iVar1 * 0xc + 0xec);
    } while (iVar1 < *(int *)(this + 0xe0));
  }
  return (*(uint *)(param_1 + 0x24) & 0x3fff) << 0xc | uVar3;
}




/* from: drv:D3d_prep_cfg.cpp
   addr: 004B7090
   addr: 004B7090 */

void * __thiscall objUSR_DATA::_scalar_deleting_destructor_(objUSR_DATA *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

