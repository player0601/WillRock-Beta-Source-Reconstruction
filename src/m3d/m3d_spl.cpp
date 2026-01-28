
/* from: m3d:m3d_spl.cpp
   addr: 0054E300 */

m3dSPL * __fastcall m3dSPL::Make(int param_1)

{
  m3dSPL *pmVar1;
  
  switch(param_1) {
  case 0:
    pmVar1 = (m3dSPL *)operator_new(0x34);
    if (pmVar1 != (m3dSPL *)0x0) {
      m3dSPL(pmVar1,0,8,1);
      *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
      return pmVar1;
    }
    break;
  case 1:
    pmVar1 = (m3dSPL *)operator_new(0x34);
    if (pmVar1 != (m3dSPL *)0x0) {
      m3dSPL(pmVar1,1,0xc,2);
      *(undefined ***)pmVar1 = &m3dSPL_LINEAR2D::_vftable_;
      return pmVar1;
    }
    break;
  case 2:
    pmVar1 = (m3dSPL *)operator_new(0x34);
    if (pmVar1 != (m3dSPL *)0x0) {
      *(undefined4 *)(pmVar1 + 4) = 0;
      *(undefined4 *)(pmVar1 + 0xc) = 0;
      *(undefined4 *)(pmVar1 + 0x20) = 0;
      *(undefined4 *)(pmVar1 + 0x24) = 0;
      *(undefined4 *)(pmVar1 + 0x28) = 0;
      *(undefined4 *)(pmVar1 + 0x2c) = 0;
      *(undefined4 *)(pmVar1 + 0x30) = 0;
      *(undefined4 *)(pmVar1 + 8) = 2;
      *(undefined4 *)(pmVar1 + 0x14) = 0x10;
      *(undefined4 *)(pmVar1 + 0x18) = 0x10;
      *(undefined4 *)(pmVar1 + 0x1c) = 3;
      *(undefined ***)pmVar1 = &m3dSPL_LINEAR3D::_vftable_;
      return pmVar1;
    }
    break;
  case 3:
    pmVar1 = (m3dSPL *)operator_new(0x34);
    if (pmVar1 != (m3dSPL *)0x0) {
      m3dSPL(pmVar1,3,0x10,1);
      *(undefined ***)pmVar1 = &m3dSPL_HERMIT::_vftable_;
      return pmVar1;
    }
    break;
  case 4:
    pmVar1 = (m3dSPL *)operator_new(0x34);
    if (pmVar1 != (m3dSPL *)0x0) {
      m3dSPL(pmVar1,4,0x1c,2);
      *(undefined ***)pmVar1 = &m3dSPL_BEZIER2D::_vftable_;
      return pmVar1;
    }
    break;
  case 5:
    pmVar1 = (m3dSPL *)operator_new(0x34);
    if (pmVar1 != (m3dSPL *)0x0) {
      m3dSPL(pmVar1,5,0x28,3);
      *(undefined ***)pmVar1 = &m3dSPL_BEZIER3D::_vftable_;
      return pmVar1;
    }
    break;
  case 6:
    pmVar1 = (m3dSPL *)operator_new(0x34);
    if (pmVar1 != (m3dSPL *)0x0) {
      m3dSPL(pmVar1,6,8,1);
      *(undefined ***)pmVar1 = &m3dSPL_LAGRANGE::_vftable_;
      return pmVar1;
    }
    break;
  case 7:
    pmVar1 = (m3dSPL *)operator_new(0x34);
    if (pmVar1 != (m3dSPL *)0x0) {
      *(undefined4 *)(pmVar1 + 4) = 0;
      *(undefined4 *)(pmVar1 + 0xc) = 0;
      *(undefined4 *)(pmVar1 + 0x20) = 0;
      *(undefined4 *)(pmVar1 + 0x24) = 0;
      *(undefined4 *)(pmVar1 + 0x28) = 0;
      *(undefined4 *)(pmVar1 + 0x2c) = 0;
      *(undefined4 *)(pmVar1 + 0x30) = 0;
      *(undefined4 *)(pmVar1 + 8) = 7;
      *(undefined4 *)(pmVar1 + 0x14) = 0x14;
      *(undefined4 *)(pmVar1 + 0x18) = 0x14;
      *(undefined4 *)(pmVar1 + 0x1c) = 4;
      *(undefined ***)pmVar1 = &m3dSPL_QUAT::_vftable_;
      return pmVar1;
    }
    break;
  case 8:
    pmVar1 = (m3dSPL *)operator_new(0x34);
    if (pmVar1 != (m3dSPL *)0x0) {
      m3dSPL(pmVar1,8,0x14,4);
      *(undefined ***)pmVar1 = &m3dSPL_COLOR::_vftable_;
      return pmVar1;
    }
  }
  return (m3dSPL *)0x0;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054E500 */

m3dSPL * __fastcall m3dSPL::Make(int param_1,int param_2)

{
  int iVar1;
  m3dSPL *pmVar2;
  void *pvVar3;
  
  pmVar2 = Make(param_1);
  if (pmVar2 == (m3dSPL *)0x0) {
    return (m3dSPL *)0x0;
  }
  if (param_2 == -1) {
    param_2 = *(int *)(pmVar2 + 0xc);
  }
  iVar1 = *(int *)(pmVar2 + 0x18);
  pvVar3 = apRealloc(*(void **)(pmVar2 + 0x24),iVar1 * param_2);
  if (pvVar3 != (void *)0x0) {
    *(void **)(pmVar2 + 0x24) = pvVar3;
    *(int *)(pmVar2 + 0x20) = iVar1 * param_2;
    *(int *)(pmVar2 + 0xc) = param_2;
    *(int *)(pmVar2 + 0x10) = param_2;
    return pmVar2;
  }
  (**(code **)(*(int *)pmVar2 + 4))(1);
  return (m3dSPL *)0x0;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054E560 */

int __thiscall m3dSPL::AllocKpList(m3dSPL *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == -1) {
    param_1 = *(int *)(this + 0xc);
  }
  iVar1 = *(int *)(this + 0x18);
  pvVar2 = apRealloc(*(void **)(this + 0x24),iVar1 * param_1);
  if (pvVar2 != (void *)0x0) {
    *(int *)(this + 0x20) = iVar1 * param_1;
    *(void **)(this + 0x24) = pvVar2;
    *(int *)(this + 0xc) = param_1;
    *(int *)(this + 0x10) = param_1;
    return 1;
  }
  return 0;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054E5B0 */

m3dSPL * __thiscall m3dSPL::Duplicate(m3dSPL *this)

{
  m3dSPL *pmVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  pmVar1 = Make(*(int *)(this + 8));
  if (pmVar1 == (m3dSPL *)0x0) {
    return (m3dSPL *)0x0;
  }
  uVar5 = *(uint *)(this + 0x20);
  pvVar2 = apRealloc(*(void **)(pmVar1 + 0x24),uVar5);
  if (pvVar2 != (void *)0x0) {
    *(void **)(pmVar1 + 0x24) = pvVar2;
    *(uint *)(pmVar1 + 0x20) = uVar5;
    *(uint *)(pmVar1 + 4) = *(uint *)(pmVar1 + 4) | *(uint *)(this + 4);
    *(undefined4 *)(pmVar1 + 0x14) = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(pmVar1 + 0x18) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(pmVar1 + 0x1c) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(pmVar1 + 0x20) = *(undefined4 *)(this + 0x20);
    uVar5 = *(uint *)(this + 0x20);
    puVar3 = *(undefined4 **)(this + 0x24);
    puVar6 = *(undefined4 **)(pmVar1 + 0x24);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    if (*(int *)(this + 0x28) != 0) {
      puVar3 = (undefined4 *)apMalloc(*(uint *)(this + 0x14));
      *(undefined4 **)(pmVar1 + 0x28) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        return (m3dSPL *)0x0;
      }
      uVar5 = *(uint *)(this + 0x14);
      puVar6 = *(undefined4 **)(this + 0x28);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    if (*(int *)(this + 0x2c) != 0) {
      puVar3 = (undefined4 *)apMalloc(*(uint *)(this + 0x1c));
      *(undefined4 **)(pmVar1 + 0x2c) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        return (m3dSPL *)0x0;
      }
      uVar5 = *(uint *)(this + 0x1c);
      puVar6 = *(undefined4 **)(this + 0x2c);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    return pmVar1;
  }
  (**(code **)(*(int *)pmVar1 + 4))(1);
  return (m3dSPL *)0x0;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054E6A0 */

int __thiscall m3dSPL::RemoveKp(m3dSPL *this,int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  if (param_2 < 1) {
    return 1;
  }
  param_2 = param_1 + param_2;
  if (param_2 < *(int *)(this + 0xc)) {
    iVar3 = *(int *)(this + 0x10);
    if (iVar3 <= param_2) {
      param_2 = iVar3;
    }
    if (param_1 < iVar3) {
      iVar3 = param_1;
    }
    iVar1 = *(int *)(this + 0x18);
    memmove((void *)(iVar1 * iVar3 + *(int *)(this + 0x24)),
            (void *)(iVar1 * param_2 + *(int *)(this + 0x24)),
            ((*(int *)(this + 0xc) - param_1) - iVar4) * iVar1);
  }
  iVar4 = *(int *)(this + 0xc) - iVar4;
  if (iVar4 == -1) {
    iVar4 = *(int *)(this + 0xc);
  }
  iVar3 = *(int *)(this + 0x18);
  pvVar2 = apRealloc(*(void **)(this + 0x24),iVar3 * iVar4);
  if (pvVar2 != (void *)0x0) {
    *(int *)(this + 0xc) = iVar4;
    *(int *)(this + 0x10) = iVar4;
    *(void **)(this + 0x24) = pvVar2;
    *(int *)(this + 0x20) = iVar3 * iVar4;
    return 1;
  }
  return 0;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054E750 */

void __thiscall m3dSPL::GetKp(m3dSPL *this,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  uint local_4;
  
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar1 = param_1;
  }
  puVar7 = (undefined4 *)(*(uint *)(this + 0x18) * iVar1 + *(int *)(this + 0x24));
  if (puVar7 == (undefined4 *)0x0) {
    return;
  }
  if (param_2 == (void *)0x0) {
    return;
  }
  uVar4 = *(uint *)(this + 0x14);
  if (uVar4 != *(uint *)(this + 0x18)) {
    bVar10 = ((byte)this[4] & 4) == 0;
    if (bVar10) {
      *(undefined4 *)param_2 = *puVar7;
    }
    else {
      *(float *)param_2 = (float)param_1;
    }
    local_4 = (uint)bVar10;
    uVar4 = *(uint *)(this + 4);
    if ((uVar4 & 8) != 0) {
      iVar1 = *(int *)(this + 0x14);
      puVar8 = *(undefined4 **)(this + 0x28);
      uVar4 = iVar1 - 4U >> 2;
      puVar9 = (undefined4 *)param_2;
      while( true ) {
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        *puVar9 = *puVar8;
      }
      for (uVar4 = iVar1 - 4U & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      if (((byte)this[4] & 0x10) != 0) {
        iVar5 = param_1 % kpPackNmb;
        iVar1 = *(int *)(this + 0x18);
        puVar7 = (undefined4 *)
                 ((((kpPackNmb + -1) * iVar1) / 2 + iVar1) * (param_1 / kpPackNmb) +
                 *(int *)(this + 0x24));
        if (iVar5 != 0) {
          iVar6 = 0;
          if (*(int *)(this + 0x1c) < 1) {
            return;
          }
          do {
            if (*(byte *)(iVar6 + *(int *)(this + 0x2c)) != 0) {
              *(float *)((int)param_2 + (uint)*(byte *)(iVar6 + *(int *)(this + 0x2c)) * 4) =
                   (float)(int)*(short *)((int)puVar7 +
                                         iVar6 * 2 + (iVar1 / 2) * (iVar5 + -1) + iVar1) *
                   *(float *)(this + 0x30) + (float)puVar7[iVar6];
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(this + 0x1c));
          return;
        }
      }
      iVar1 = 0;
      if (*(int *)(this + 0x1c) < 1) {
        return;
      }
      puVar7 = puVar7 + local_4;
      do {
        if (*(byte *)(iVar1 + *(int *)(this + 0x2c)) != 0) {
          *(undefined4 *)((int)param_2 + (uint)*(byte *)(iVar1 + *(int *)(this + 0x2c)) * 4) =
               *puVar7;
        }
        iVar1 = iVar1 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar1 < *(int *)(this + 0x1c));
      return;
    }
    if ((uVar4 & 4) == 0) {
      return;
    }
    if ((uVar4 & 0x10) != 0) {
      iVar1 = *(int *)(this + 0x18);
      iVar5 = param_1 % kpPackNmb;
      puVar7 = (undefined4 *)
               ((((kpPackNmb + -1) * iVar1) / 2 + iVar1) * (param_1 / kpPackNmb) +
               *(int *)(this + 0x24));
      if (iVar5 != 0) {
        iVar6 = 0;
        if (*(int *)(this + 0x1c) < 1) {
          return;
        }
        do {
          param_2 = (void *)((int)param_2 + 4);
          iVar2 = iVar6 + 1;
          *(float *)param_2 =
               (float)(int)*(short *)((int)puVar7 + iVar6 * 2 + (iVar1 / 2) * (iVar5 + -1) + iVar1)
               * *(float *)(this + 0x30) + (float)puVar7[iVar6];
          iVar6 = iVar2;
        } while (iVar2 < *(int *)(this + 0x1c));
        return;
      }
    }
    uVar4 = *(uint *)(this + 0x18);
    param_2 = (void *)((int)param_2 + 4);
  }
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = (undefined4 *)((int)param_2 + 4);
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 0054E950 */

int __thiscall m3dSPL::FindSeg(m3dSPL *this,float param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*(uint *)(this + 4) & 2) != 0) {
    return -2;
  }
  if ((*(uint *)(this + 4) & 1) == 0) {
    uVar1 = *(uint *)(this + 0x10);
    iVar2 = *(int *)(this + 0x18);
    iVar3 = *(int *)(this + 0x24);
    if (param_1 < *(float *)(iVar2 * ((0 < (int)uVar1) - 1 & uVar1) + iVar3)) {
      return -2;
    }
    uVar8 = *(int *)(this + 0xc) - 1;
    uVar4 = uVar8;
    if ((int)uVar1 <= (int)uVar8) {
      uVar4 = uVar1;
    }
    if (*(float *)(iVar2 * uVar4 + iVar3) <= param_1) {
      return -1;
    }
    uVar4 = 0;
    uVar6 = uVar8;
    while (1 < (int)uVar6) {
      uVar5 = (int)(uVar8 + uVar4) / 2;
      uVar6 = uVar5;
      if ((int)uVar1 <= (int)uVar5) {
        uVar6 = uVar1;
      }
      uVar7 = uVar5;
      if (param_1 < *(float *)(iVar2 * uVar6 + iVar3)) {
        uVar7 = uVar4;
        uVar8 = uVar5;
      }
      uVar4 = uVar7;
      uVar6 = uVar8 - uVar7;
    }
    return uVar4;
  }
  if (param_1 < _DAT_005de45c) {
    return -2;
  }
  if (((float)*(int *)(this + 0xc) - ___real_3f800000) - _DAT_005de45c < param_1) {
    return -1;
  }
  return (int)ROUND(param_1 - `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 0054EA70 */

int __thiscall m3dSPL::Optimize(m3dSPL *this,int param_1)

{
  undefined2 uVar1;
  float *pfVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  int iVar12;
  undefined4 *puVar13;
  size_t _Size;
  float local_c8;
  uint uStack_c4;
  int iStack_bc;
  byte bStack_b4;
  undefined1 auStack_b3 [7];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float afStack_a0 [20];
  float afStack_50 [20];
  
  if ((param_1 & 1U) != 0) {
    fVar11 = 0.0;
    local_c8 = 0.0;
    if (0 < *(int *)(this + 0xc)) {
      do {
        fVar11 = local_c8;
        pfVar2 = (float *)GetKpPtr(this,(int)local_c8);
        local_c8 = (float)(uint)(ABS(*pfVar2 - (float)(int)local_c8) < _DAT_005de45c);
        if ((float)(int)local_c8 == ___real_00000000) break;
        fVar11 = (float)((int)fVar11 + 1);
        local_c8 = fVar11;
      } while ((int)fVar11 < *(int *)(this + 0xc));
    }
    if (fVar11 == (float)*(int *)(this + 0xc)) {
      *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
    }
  }
  if ((param_1 & 2U) != 0) {
    pvVar3 = GetKpPtr(this,0);
    iVar12 = 1;
    if (1 < *(int *)(this + 0xc)) {
      do {
        pvVar4 = GetKpPtr(this,iVar12);
        iVar5 = (*(code *)**(undefined4 **)this)(pvVar3,pvVar4);
        if (iVar5 == 0) break;
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(this + 0xc));
    }
    if (iVar12 == *(int *)(this + 0xc)) {
      *(uint *)(this + 4) = *(uint *)(this + 4) | 2;
    }
  }
  if (*(int *)(this + 0xc) < 2) {
    return 1;
  }
  if (((param_1 & 8U) != 0) && (((byte)this[4] & 8) == 0)) {
    iVar12 = 1;
    _bStack_b4 = 0;
    auStack_b3._3_4_ = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uVar10 = *(int *)(this + 0xc) - 1;
    uVar9 = *(uint *)(this + 0x10);
    if ((int)uVar9 <= (int)uVar10) {
      uVar10 = uVar9;
    }
    (**(code **)(*(int *)this + 0x24))
              (*(undefined4 *)
                (*(int *)(this + 0x18) * ((0 < (int)uVar9) - 1 & uVar9) + *(int *)(this + 0x24)),
               *(undefined4 *)(*(int *)(this + 0x18) * uVar10 + *(int *)(this + 0x24)),0x3f800000,
               afStack_50,afStack_a0);
    iVar5 = *(int *)(this + 0x1c);
    iVar8 = 0;
    if (0 < iVar5) {
      do {
        local_c8 = (float)(uint)(ABS(afStack_a0[iVar8] - afStack_50[iVar8]) < ___real_3b449ba6);
        if ((float)(int)local_c8 == ___real_00000000) {
          (&bStack_b4)[iVar12] = (char)iVar8 + 1;
          iVar12 = iVar12 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar5);
    }
    if (iVar12 + -1 < iVar5) {
      puVar6 = (undefined4 *)apMalloc(*(uint *)(this + 0x14));
      *(undefined4 **)(this + 0x28) = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        return 0;
      }
      uVar10 = *(uint *)(this + 0x14);
      puVar13 = *(undefined4 **)(this + 0x24);
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar6 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar13;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      puVar6 = (undefined4 *)apMalloc(*(uint *)(this + 0x1c));
      *(undefined4 **)(this + 0x2c) = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        return 0;
      }
      uVar10 = *(uint *)(this + 0x1c);
      puVar13 = (undefined4 *)auStack_b3;
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar6 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar6 = puVar6 + 1;
      }
      iStack_bc = 0;
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar13;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      pvVar3 = *(void **)(this + 0x24);
      iVar5 = *(int *)(this + 0x18) + -4 + (iVar12 - *(int *)(this + 0x1c)) * 4;
      if (0 < *(int *)(this + 0xc)) {
        do {
          iVar8 = 0;
          if (0 < iVar12) {
            do {
              iVar7 = *(int *)(this + 0x10);
              if (iStack_bc < *(int *)(this + 0x10)) {
                iVar7 = iStack_bc;
              }
              memmove(pvVar3,(void *)(*(int *)(this + 0x18) * iVar7 + (uint)(&bStack_b4)[iVar8] * 4
                                     + *(int *)(this + 0x24)),4);
              pvVar3 = (void *)((int)pvVar3 + 4);
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar12);
          }
          iStack_bc = iStack_bc + 1;
        } while (iStack_bc < *(int *)(this + 0xc));
      }
      iVar12 = *(int *)(this + 0xc);
      uVar10 = iVar12 * iVar5;
      *(int *)(this + 0x18) = iVar5;
      pvVar3 = apRealloc(*(void **)(this + 0x24),uVar10);
      if (pvVar3 != (void *)0x0) {
        *(void **)(this + 0x24) = pvVar3;
        *(uint *)(this + 0x20) = uVar10;
        *(int *)(this + 0xc) = iVar12;
        *(int *)(this + 0x10) = iVar12;
      }
      *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
    }
  }
  if ((((param_1 & 4U) != 0) && ((*(uint *)(this + 4) & 4) == 0)) &&
     ((*(uint *)(this + 4) & 1) != 0)) {
    pvVar3 = *(void **)(this + 0x24);
    _Size = *(int *)(this + 0x18) - 4;
    iVar12 = 0;
    if (0 < *(int *)(this + 0xc)) {
      do {
        iVar5 = *(int *)(this + 0x10);
        if (iVar12 < *(int *)(this + 0x10)) {
          iVar5 = iVar12;
        }
        memmove(pvVar3,(void *)(*(int *)(this + 0x18) * iVar5 + 4 + *(int *)(this + 0x24)),_Size);
        pvVar3 = (void *)((int)pvVar3 + _Size);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(this + 0xc));
    }
    iVar12 = *(int *)(this + 0xc);
    *(size_t *)(this + 0x18) = _Size;
    pvVar3 = apRealloc(*(void **)(this + 0x24),iVar12 * _Size);
    if (pvVar3 != (void *)0x0) {
      *(void **)(this + 0x24) = pvVar3;
      *(size_t *)(this + 0x20) = iVar12 * _Size;
      *(int *)(this + 0xc) = iVar12;
      *(int *)(this + 0x10) = iVar12;
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  }
  if ((param_1 & 0x10U) != 0) {
    iVar12 = 0;
    local_c8 = 0.0;
    if (0 < *(int *)(this + 0xc)) {
      do {
        GetKp(this,iVar12 - iVar12 % kpPackNmb,afStack_50);
        GetKp(this,iVar12,afStack_a0);
        iVar5 = 0;
        if (0 < *(int *)(this + 0x1c) + 1) {
          do {
            if (local_c8 <= ABS(afStack_a0[iVar5] - afStack_50[iVar5])) {
              local_c8 = ABS(afStack_a0[iVar5] - afStack_50[iVar5]);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(this + 0x1c) + 1);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(this + 0xc));
    }
    uStack_c4 = 0;
    iStack_bc = 0;
    if (0 < *(int *)(this + 0xc)) {
      uVar10 = *(uint *)(this + 0x18);
      do {
        iVar12 = *(int *)(this + 0x10);
        if (iStack_bc < *(int *)(this + 0x10)) {
          iVar12 = iStack_bc;
        }
        iVar5 = iStack_bc % kpPackNmb;
        pvVar3 = (void *)(((int)((kpPackNmb + -1) * uVar10) / 2 + uVar10) * (iStack_bc / kpPackNmb)
                         + *(int *)(this + 0x24));
        if (iVar5 == 0) {
          memmove(pvVar3,(void *)(uVar10 * iVar12 + *(int *)(this + 0x24)),uVar10);
          uVar10 = *(uint *)(this + 0x18);
          uVar9 = uVar10;
        }
        else {
          if ((uVar10 & 0xfffffffc) != 0) {
            uVar9 = 0;
            do {
              uVar1 = ftol();
              *(undefined2 *)((int)pvVar3 + uVar9 * 2 + ((int)uVar10 / 2) * (iVar5 + -1) + uVar10) =
                   uVar1;
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(this + 0x18) >> 2);
          }
          uVar10 = *(uint *)(this + 0x18);
          uVar9 = (int)uVar10 / 2;
        }
        uStack_c4 = uStack_c4 + uVar9;
        iStack_bc = iStack_bc + 1;
      } while (iStack_bc < *(int *)(this + 0xc));
    }
    *(float *)(this + 0x30) = local_c8 * ___real_3803126f;
    pvVar3 = apRealloc(*(void **)(this + 0x24),uStack_c4);
    if (pvVar3 != (void *)0x0) {
      *(void **)(this + 0x24) = pvVar3;
      *(uint *)(this + 0x20) = uStack_c4;
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 0054EFE0 */

int __thiscall m3dSPL::IsIntegerArg(m3dSPL *this)

{
  uint uVar1;
  uint uVar2;
  uint local_4;
  
  uVar2 = 0;
  local_4 = 0;
  if (0 < *(int *)(this + 0xc)) {
    do {
      uVar2 = local_4;
      uVar1 = local_4;
      if (*(int *)(this + 0x10) <= (int)local_4) {
        uVar1 = *(int *)(this + 0x10);
      }
      local_4 = (uint)(ABS(*(float *)(*(int *)(this + 0x24) + *(int *)(this + 0x18) * uVar1) -
                           (float)(int)local_4) < _DAT_005de45c);
    } while (((float)local_4 != ___real_00000000) &&
            (uVar2 = uVar2 + 1, local_4 = uVar2, (int)uVar2 < *(int *)(this + 0xc)));
  }
  if (uVar2 == *(int *)(this + 0xc)) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
    return 1;
  }
  return 0;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054F080 */

int __thiscall m3dSPL::IsConst(m3dSPL *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 1;
  uVar1 = *(uint *)(this + 0x10);
  iVar2 = *(int *)(this + 0x18);
  iVar3 = *(int *)(this + 0x24);
  if (1 < *(int *)(this + 0xc)) {
    do {
      iVar4 = *(int *)(this + 0x10);
      if (iVar5 < *(int *)(this + 0x10)) {
        iVar4 = iVar5;
      }
      iVar4 = (*(code *)**(undefined4 **)this)
                        (iVar2 * (uVar1 & (0 < (int)uVar1) - 1) + iVar3,
                         *(int *)(this + 0x18) * iVar4 + *(int *)(this + 0x24));
    } while ((iVar4 != 0) && (iVar5 = iVar5 + 1, iVar5 < *(int *)(this + 0xc)));
  }
  if (iVar5 == *(int *)(this + 0xc)) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 2;
    return 1;
  }
  return 0;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054F0F0 */

int __thiscall m3dSPL::CompareKP(m3dSPL *this,m3dSPL_KP *param_1,m3dSPL_KP *param_2)

{
  int iVar1;
  m3dSPL_KP *pmVar2;
  m3dSPL_KP *pmVar3;
  bool bVar4;
  
  iVar1 = *(int *)(this + 0x14) + -4;
  bVar4 = true;
  pmVar2 = param_1 + 4;
  pmVar3 = param_2 + 4;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pmVar2 == *pmVar3;
    pmVar2 = pmVar2 + 1;
    pmVar3 = pmVar3 + 1;
  } while (bVar4);
  return (uint)bVar4;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054F120 */

m3dSPL * __thiscall
m3dSPL::Sample(m3dSPL *this,float param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  m3dSPL *pmVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined1 local_50 [80];
  
  if (param_4 == -1) {
    param_4 = *(int *)(this + 8);
  }
  pmVar2 = Make(param_4);
  if (pmVar2 != (m3dSPL *)0x0) {
    iVar5 = 1 - (int)ROUND(-((param_2 - param_1) / param_3) -
                           `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
    iVar4 = iVar5;
    if (iVar5 == -1) {
      iVar4 = *(int *)(pmVar2 + 0xc);
    }
    iVar1 = *(int *)(pmVar2 + 0x18);
    pvVar3 = apRealloc(*(void **)(pmVar2 + 0x24),iVar1 * iVar4);
    if (pvVar3 != (void *)0x0) {
      *(int *)(pmVar2 + 0x20) = iVar1 * iVar4;
      *(void **)(pmVar2 + 0x24) = pvVar3;
      *(int *)(pmVar2 + 0xc) = iVar4;
      *(int *)(pmVar2 + 0x10) = iVar4;
      param_4 = 0;
      if (0 < iVar5) {
        do {
          (**(code **)(*(int *)this + 0x10))((float)param_4 * param_3 + param_1,local_50,0);
          iVar4 = *(int *)(pmVar2 + 0x10);
          if (param_4 < *(int *)(pmVar2 + 0x10)) {
            iVar4 = param_4;
          }
          *(float *)(*(int *)(pmVar2 + 0x18) * iVar4 + *(int *)(pmVar2 + 0x24)) = param_1;
          (**(code **)(*(int *)pmVar2 + 0xc))(param_4,&stack0xffffffa4);
          param_4 = param_4 + 1;
        } while (param_4 < iVar5);
      }
      return pmVar2;
    }
  }
  return (m3dSPL *)0x0;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054F220 */

void __thiscall
m3dSPL::GetMinMaxValue
          (m3dSPL *this,float param_1,float param_2,float param_3,void *param_4,void *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float local_50 [20];
  
  iVar5 = 0;
  if (0 < *(int *)(this + 0x1c)) {
    pfVar4 = (float *)param_5;
    do {
      iVar5 = iVar5 + 1;
      *(float *)(((int)param_4 - (int)param_5) + (int)pfVar4) = DAT_005de460;
      *pfVar4 = -DAT_005de460;
      pfVar4 = pfVar4 + 1;
    } while (iVar5 < *(int *)(this + 0x1c));
  }
  iVar5 = 1 - (int)ROUND(-((param_2 - param_1) / param_3) -
                         `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
  param_2 = 0.0;
  if (0 < iVar5) {
    do {
      (**(code **)(*(int *)this + 0x10))((float)(int)param_2 * param_3 + param_1,local_50,0);
      iVar6 = 0;
      if (0 < *(int *)(this + 0x1c)) {
        do {
          iVar3 = iVar6 * 4 - (int)local_50;
          fVar1 = *(float *)((int)param_4 + (int)local_50 + iVar3);
          fVar2 = local_50[iVar6];
          if (fVar1 < local_50[iVar6]) {
            fVar2 = fVar1;
          }
          *(float *)((int)param_4 + (int)local_50 + iVar3) = fVar2;
          iVar3 = iVar6 * 4 - (int)local_50;
          fVar1 = *(float *)((int)param_5 + (int)local_50 + iVar3);
          fVar2 = local_50[iVar6];
          if (local_50[iVar6] < fVar1) {
            fVar2 = fVar1;
          }
          *(float *)((int)param_5 + (int)local_50 + iVar3) = fVar2;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(this + 0x1c));
      }
      param_2 = (float)((int)param_2 + 1);
    } while ((int)param_2 < iVar5);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 0054F340 */

void __thiscall
m3dSPL_LINEAR1D::GetValue(m3dSPL_LINEAR1D *this,float param_1,void *param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float local_18;
  float local_14;
  float local_10 [4];
  
  iVar1 = m3dSPL::FindSeg((m3dSPL *)this,param_1);
  if (iVar1 == -2) {
    m3dSPL::GetKp((m3dSPL *)this,0,local_10);
    *(float *)param_2 = local_10[1];
    return;
  }
  if (iVar1 == -1) {
    m3dSPL::GetKp((m3dSPL *)this,*(int *)(this + 0xc) + -1,local_10 + 2);
    uVar3 = *(uint *)(this + 0x14);
    pfVar4 = local_10 + 2;
    pfVar5 = local_10;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)pfVar5 = *(undefined1 *)pfVar4;
      pfVar4 = (float *)((int)pfVar4 + 1);
      pfVar5 = (float *)((int)pfVar5 + 1);
    }
    *(float *)param_2 = local_10[1];
    return;
  }
  m3dSPL::GetKp((m3dSPL *)this,iVar1,local_10);
  m3dSPL::GetKp((m3dSPL *)this,iVar1 + 1,local_10 + 2);
  local_18 = (float)(uint)(ABS(local_10[2] - local_10[0]) < _DAT_005de45c);
  if ((float)(int)local_18 != ___real_00000000) {
    *(float *)param_2 = (local_10[3] + local_10[1]) * ___real_3f000000;
    return;
  }
  local_14 = local_10[2];
  local_18 = local_10[3];
  if (local_10[2] < local_10[0]) {
    local_14 = local_10[0];
    local_18 = local_10[1];
    local_10[0] = local_10[2];
    local_10[1] = local_10[3];
  }
  *(float *)param_2 =
       ((param_1 - local_10[0]) * (local_18 - local_10[1])) / (local_14 - local_10[0]) + local_10[1]
  ;
  return;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054F4B0 */

void __thiscall
m3dSPL_LINEAR1D::SetKp(m3dSPL_LINEAR1D *this,int param_1,float param_2,float param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar1 = param_1;
  }
  *(float *)(*(int *)(this + 0x18) * iVar1 + *(int *)(this + 0x24)) = param_2;
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar1 = param_1;
  }
  *(float *)(*(int *)(this + 0x18) * iVar1 + 4 + *(int *)(this + 0x24)) = param_3;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 0054F4F0 */

int __thiscall
m3dSPL_LINEAR1D::CompareKP(m3dSPL_LINEAR1D *this,m3dSPL_KP *param_1,m3dSPL_KP *param_2)

{
  param_2 = (m3dSPL_KP *)
            (uint)(ABS(*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) < ___real_38d1b717);
  if ((float)(int)param_2 == ___real_00000000) {
    return 0;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 0054F550 */

void __thiscall
m3dSPL_LINEAR2D::GetValue(m3dSPL_LINEAR2D *this,float param_1,void *param_2,void *param_3)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float local_20;
  float local_1c;
  float local_18 [2];
  void *local_10;
  float local_c [2];
  void *local_4;
  
  pvVar2 = param_2;
  iVar3 = m3dSPL::FindSeg((m3dSPL *)this,param_1);
  if (iVar3 == -2) {
    m3dSPL::GetKp((m3dSPL *)this,0,local_18);
  }
  else {
    if (iVar3 != -1) {
      m3dSPL::GetKp((m3dSPL *)this,iVar3,local_18);
      m3dSPL::GetKp((m3dSPL *)this,iVar3 + 1,local_c);
      local_20 = (float)(uint)(ABS(local_c[0] - local_18[0]) < _DAT_005de45c);
      if ((float)(int)local_20 == ___real_00000000) {
        local_1c = local_c[0];
        local_20 = local_c[1];
        fVar1 = local_18[0];
        if (local_c[0] < local_18[0]) {
          local_1c = local_18[0];
          local_20 = local_18[1];
          local_18[1] = local_c[1];
          fVar1 = local_c[0];
        }
        local_18[1] = ((param_1 - fVar1) * (local_20 - local_18[1])) / (local_1c - fVar1) +
                      local_18[1];
      }
      else {
        local_18[1] = (local_18[1] + local_c[1]) * ___real_3f000000;
      }
      *(float *)param_2 = local_18[1];
      param_2 = (void *)(uint)(ABS(local_c[0] - local_18[0]) < _DAT_005de45c);
      if ((float)(int)param_2 != ___real_00000000) {
        *(float *)((int)pvVar2 + 4) = ((float)local_10 + (float)local_4) * ___real_3f000000;
        return;
      }
      param_2 = local_4;
      local_1c = local_c[0];
      if (local_c[0] < local_18[0]) {
        local_1c = local_18[0];
        param_2 = local_10;
        local_18[0] = local_c[0];
        local_10 = local_4;
      }
      *(float *)((int)pvVar2 + 4) =
           ((param_1 - local_18[0]) * ((float)param_2 - (float)local_10)) / (local_1c - local_18[0])
           + (float)local_10;
      return;
    }
    m3dSPL::GetKp((m3dSPL *)this,*(int *)(this + 0xc) + -1,local_c);
    uVar5 = *(uint *)(this + 0x14);
    pfVar6 = local_c;
    pfVar7 = local_18;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)pfVar7 = *(undefined1 *)pfVar6;
      pfVar6 = (float *)((int)pfVar6 + 1);
      pfVar7 = (float *)((int)pfVar7 + 1);
    }
  }
  *(float *)param_2 = local_18[1];
  *(void **)((int)param_2 + 4) = local_10;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 0054F750 */

int __thiscall
m3dSPL_LINEAR2D::CompareKP(m3dSPL_LINEAR2D *this,m3dSPL_KP *param_1,m3dSPL_KP *param_2)

{
  m3dSPL_KP *pmVar1;
  
  pmVar1 = param_2;
  param_2 = (m3dSPL_KP *)
            (uint)(ABS(*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) < ___real_3a83126f);
  if (((float)(int)param_2 != ___real_00000000) &&
     (param_2 = (m3dSPL_KP *)
                (uint)(ABS(*(float *)(param_1 + 8) - *(float *)(pmVar1 + 8)) < ___real_3a83126f),
     (float)(int)param_2 != ___real_00000000)) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 0054F7F0 */

void __thiscall
m3dSPL_LINEAR3D::GetValue(m3dSPL_LINEAR3D *this,float param_1,void *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float local_28;
  float local_24;
  float local_20 [2];
  void *local_18;
  void *local_14;
  float local_10 [2];
  void *local_8;
  void *local_4;
  
  pvVar3 = param_2;
  iVar4 = m3dSPL::FindSeg((m3dSPL *)this,param_1);
  if (iVar4 == -2) {
    m3dSPL::GetKp((m3dSPL *)this,0,local_20);
  }
  else {
    if (iVar4 != -1) {
      m3dSPL::GetKp((m3dSPL *)this,iVar4,local_20);
      m3dSPL::GetKp((m3dSPL *)this,iVar4 + 1,local_10);
      fVar2 = local_10[0] - local_20[0];
      local_28 = (float)(uint)(ABS(fVar2) < _DAT_005de45c);
      if ((float)(int)local_28 == ___real_00000000) {
        local_28 = local_10[1];
        local_24 = local_10[0];
        fVar1 = local_20[0];
        if (local_10[0] < local_20[0]) {
          local_24 = local_20[0];
          local_28 = local_20[1];
          local_20[1] = local_10[1];
          fVar1 = local_10[0];
        }
        local_20[1] = ((param_1 - fVar1) * (local_28 - local_20[1])) / (local_24 - fVar1) +
                      local_20[1];
      }
      else {
        local_20[1] = (local_20[1] + local_10[1]) * ___real_3f000000;
      }
      *(float *)param_2 = local_20[1];
      param_2 = (void *)(uint)(ABS(fVar2) < _DAT_005de45c);
      if ((float)(int)param_2 == ___real_00000000) {
        local_24 = local_10[0];
        param_2 = local_8;
        fVar1 = local_20[0];
        if (local_10[0] < local_20[0]) {
          local_24 = local_20[0];
          param_2 = local_18;
          local_18 = local_8;
          fVar1 = local_10[0];
        }
        fVar1 = ((param_1 - fVar1) * ((float)param_2 - (float)local_18)) / (local_24 - fVar1) +
                (float)local_18;
      }
      else {
        fVar1 = ((float)local_18 + (float)local_8) * ___real_3f000000;
      }
      *(float *)((int)pvVar3 + 4) = fVar1;
      param_2 = (void *)(uint)(ABS(fVar2) < _DAT_005de45c);
      if ((float)(int)param_2 != ___real_00000000) {
        *(float *)((int)pvVar3 + 8) = ((float)local_14 + (float)local_4) * ___real_3f000000;
        return;
      }
      param_2 = local_4;
      local_24 = local_10[0];
      if (local_10[0] < local_20[0]) {
        local_24 = local_20[0];
        param_2 = local_14;
        local_20[0] = local_10[0];
        local_14 = local_4;
      }
      *(float *)((int)pvVar3 + 8) =
           ((param_1 - local_20[0]) * ((float)param_2 - (float)local_14)) / (local_24 - local_20[0])
           + (float)local_14;
      return;
    }
    m3dSPL::GetKp((m3dSPL *)this,*(int *)(this + 0xc) + -1,local_10);
    uVar6 = *(uint *)(this + 0x14);
    pfVar7 = local_10;
    pfVar8 = local_20;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)pfVar8 = *(undefined1 *)pfVar7;
      pfVar7 = (float *)((int)pfVar7 + 1);
      pfVar8 = (float *)((int)pfVar8 + 1);
    }
  }
  *(float *)param_2 = local_20[1];
  *(void **)((int)param_2 + 4) = local_18;
  *(void **)((int)param_2 + 8) = local_14;
  return;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054FAA0 */

void __thiscall
m3dSPL_LINEAR3D::GetValueClosest(m3dSPL_LINEAR3D *this,float param_1,void *param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float local_20 [4];
  float local_10 [4];
  
  iVar1 = m3dSPL::FindSeg((m3dSPL *)this,param_1);
  if (iVar1 == -2) {
    m3dSPL::GetKp((m3dSPL *)this,0,local_20);
  }
  else {
    if (iVar1 != -1) {
      m3dSPL::GetKp((m3dSPL *)this,iVar1,local_20);
      m3dSPL::GetKp((m3dSPL *)this,iVar1 + 1,local_10);
      if (local_10[0] - param_1 <= param_1 - local_20[0]) {
        *(float *)param_2 = local_10[1];
        *(float *)((int)param_2 + 4) = local_10[2];
        *(float *)((int)param_2 + 8) = local_10[3];
        return;
      }
      *(float *)param_2 = local_20[1];
      *(float *)((int)param_2 + 4) = local_20[2];
      *(float *)((int)param_2 + 8) = local_20[3];
      return;
    }
    m3dSPL::GetKp((m3dSPL *)this,*(int *)(this + 0xc) + -1,local_10);
    uVar3 = *(uint *)(this + 0x14);
    pfVar4 = local_10;
    pfVar5 = local_20;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)pfVar5 = *(undefined1 *)pfVar4;
      pfVar4 = (float *)((int)pfVar4 + 1);
      pfVar5 = (float *)((int)pfVar5 + 1);
    }
  }
  *(float *)param_2 = local_20[1];
  *(float *)((int)param_2 + 4) = local_20[2];
  *(float *)((int)param_2 + 8) = local_20[3];
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 0054FB90 */

int __thiscall
m3dSPL_LINEAR3D::CompareKP(m3dSPL_LINEAR3D *this,m3dSPL_KP *param_1,m3dSPL_KP *param_2)

{
  m3dSPL_KP *pmVar1;
  
  pmVar1 = param_2;
  param_2 = (m3dSPL_KP *)
            (uint)(ABS(*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) < ___real_3b449ba6);
  if ((((float)(int)param_2 != ___real_00000000) &&
      (param_2 = (m3dSPL_KP *)
                 (uint)(ABS(*(float *)(param_1 + 8) - *(float *)(pmVar1 + 8)) < ___real_3b449ba6),
      (float)(int)param_2 != ___real_00000000)) &&
     (param_2 = (m3dSPL_KP *)
                (uint)(ABS(*(float *)(param_1 + 0xc) - *(float *)(pmVar1 + 0xc)) < ___real_3b449ba6)
     , (float)(int)param_2 != ___real_00000000)) {
    return 1;
  }
  return 0;
}




/* from: m3d:m3d_spl.cpp
   addr: 0054FC80 */

float __thiscall
m3dSPL_LINEAR3D::DistPoint
          (m3dSPL_LINEAR3D *this,void *param_1,int *param_2,float *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = 0;
  local_34 = DAT_005de460;
  local_28 = -1;
  local_2c = *(int *)(this + 0xc) + -1;
  local_24 = local_2c;
  if (0 < local_2c) {
    do {
      iVar1 = *(int *)(this + 0x10);
      iVar3 = (iVar3 + 0x13d4fd) % local_24;
      iVar2 = iVar3;
      if (iVar1 <= iVar3) {
        iVar2 = iVar1;
      }
      if (iVar3 + 1 < iVar1) {
        iVar1 = iVar3 + 1;
      }
      iVar1 = m3dDistPointLSeg((m3dV *)param_1,
                               (m3dV *)(*(int *)(this + 0x18) * iVar2 + 4 + *(int *)(this + 0x24)),
                               (m3dV *)(*(int *)(this + 0x18) * iVar1 + 4 + *(int *)(this + 0x24)),
                               local_34,&local_30,(m3dV *)&local_c,&local_20);
      if ((iVar1 != 0) && (local_30 < local_34)) {
        local_34 = local_30;
        local_18 = local_c;
        local_14 = local_8;
        local_10 = local_4;
        local_1c = local_20;
        local_28 = iVar3;
      }
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_28;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = local_1c;
  }
  if (param_4 != (void *)0x0) {
    *(undefined4 *)param_4 = local_18;
    *(undefined4 *)((int)param_4 + 4) = local_14;
    *(undefined4 *)((int)param_4 + 8) = local_10;
  }
  return local_34;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 0054FDA0 */

void __thiscall
m3dSPL_HERMIT::GetValue(m3dSPL_HERMIT *this,float param_1,void *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  uint local_24;
  float local_20 [4];
  float local_10 [4];
  
  iVar5 = m3dSPL::FindSeg((m3dSPL *)this,param_1);
  if (iVar5 == -2) {
    m3dSPL::GetKp((m3dSPL *)this,0,local_20);
    *(float *)param_2 = local_20[1];
    return;
  }
  if (iVar5 == -1) {
    m3dSPL::GetKp((m3dSPL *)this,*(int *)(this + 0xc) + -1,local_10);
    uVar7 = *(uint *)(this + 0x14);
    pfVar8 = local_10;
    pfVar9 = local_20;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar9 = pfVar9 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)pfVar9 = *(undefined1 *)pfVar8;
      pfVar8 = (float *)((int)pfVar8 + 1);
      pfVar9 = (float *)((int)pfVar9 + 1);
    }
    *(float *)param_2 = local_20[1];
    return;
  }
  m3dSPL::GetKp((m3dSPL *)this,iVar5,local_20);
  m3dSPL::GetKp((m3dSPL *)this,iVar5 + 1,local_10);
  local_24 = (uint)(ABS(local_20[0] - local_10[0]) < _DAT_005de45c);
  if ((float)local_24 != ___real_00000000) {
    *(float *)param_2 = (local_10[1] + local_20[1]) * ___real_3f000000;
    return;
  }
  local_10[0] = local_10[0] - local_20[0];
  fVar1 = (param_1 - local_20[0]) / local_10[0];
  fVar3 = fVar1 * fVar1;
  fVar4 = fVar3 * fVar1;
  fVar2 = (fVar4 + fVar4) - fVar3 * ___real_40400000;
  *(float *)param_2 =
       ((fVar2 + ___real_3f800000) * local_20[1] - fVar2 * local_10[1]) +
       (fVar4 - fVar3) * local_10[0] * local_10[2] +
       local_10[0] * local_20[3] * ((fVar4 - (fVar3 + fVar3)) + fVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 0054FF10 */

void __thiscall
m3dSPL_LAGRANGE::GetValue(m3dSPL_LAGRANGE *this,float param_1,void *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float local_28 [4];
  float local_18 [5];
  
  fVar2 = 0.0;
  iVar3 = m3dSPL::FindSeg((m3dSPL *)this,param_1);
  if (iVar3 == -2) {
    m3dSPL::GetKp((m3dSPL *)this,0,local_28);
    uVar5 = *(uint *)(this + 0x14);
    pfVar6 = local_28;
    pfVar8 = local_18;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)pfVar8 = *(undefined1 *)pfVar6;
      pfVar6 = (float *)((int)pfVar6 + 1);
      pfVar8 = (float *)((int)pfVar8 + 1);
    }
  }
  else if (iVar3 == -1) {
    m3dSPL::GetKp((m3dSPL *)this,*(int *)(this + 0xc) + -1,local_18);
    uVar5 = *(uint *)(this + 0x14);
    pfVar6 = local_18;
    pfVar8 = local_28;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)pfVar8 = *(undefined1 *)pfVar6;
      pfVar6 = (float *)((int)pfVar6 + 1);
      pfVar8 = (float *)((int)pfVar8 + 1);
    }
  }
  else {
    m3dSPL::GetKp((m3dSPL *)this,iVar3,local_28);
    m3dSPL::GetKp((m3dSPL *)this,iVar3 + 1,local_18);
  }
  if ((float)(ABS(local_28[0] - param_1) < _DAT_005de45c) != ___real_00000000) {
    *(float *)param_2 = local_28[1];
    return;
  }
  if ((float)(ABS(local_18[0] - param_1) < _DAT_005de45c) != ___real_00000000) {
    *(float *)param_2 = local_18[1];
    return;
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0xc)) {
    do {
      m3dSPL::GetKp((m3dSPL *)this,iVar3,local_28);
      iVar7 = 0;
      fVar1 = local_28[1];
      if (0 < *(int *)(this + 0xc)) {
        do {
          m3dSPL::GetKp((m3dSPL *)this,iVar7,local_18);
          if (iVar7 != iVar3) {
            fVar1 = ((param_1 - local_18[0]) / (local_28[0] - local_18[0])) * fVar1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(this + 0xc));
      }
      fVar2 = fVar1 + fVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0xc));
  }
  *(float *)param_2 = fVar2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 005500E0 */

void __thiscall
m3dSPL_BEZIER::GetValueDim
          (m3dSPL_BEZIER *this,float param_1,int param_2,void *param_3,void *param_4,void *param_5,
          void *param_6,void *param_7,void *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((param_1 < ___real_00000000) || (___real_3f800000 < param_1)) {
    if (___real_00000000 <= param_1) {
      if (___real_3f800000 < param_1) {
        param_1 = 1.0;
      }
    }
    else {
      param_1 = 0.0;
    }
  }
  fVar1 = ___real_3f800000 - param_1;
  fVar3 = param_1 * param_1;
  fVar2 = fVar1 * fVar1;
  if (param_7 != (void *)0x0) {
    local_18 = fVar2 * fVar1;
    local_20 = fVar3 * param_1;
    local_14 = param_1 * fVar2 * ___real_40400000;
    local_1c = fVar3 * fVar1 * ___real_40400000;
  }
  if (param_8 != (void *)0x0) {
    local_8 = fVar2 * ___real_c0400000;
    local_10 = fVar3 * ___real_40400000;
    local_4 = (param_1 * ___real_40400000 - ___real_3f800000) * fVar1 * ___real_c0400000;
    local_c = (___real_40000000 - param_1 * ___real_40400000) * param_1 * ___real_40400000;
  }
  if (0 < param_2) {
    iVar8 = (int)param_7 - (int)param_4;
    iVar4 = (int)param_3 - (int)param_4;
    iVar5 = (int)param_6 - (int)param_4;
    iVar7 = (int)param_5 - (int)param_4;
    iVar6 = (int)param_8 - (int)param_4;
    param_1 = (float)param_2;
    do {
      if (param_7 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
        *(float *)(iVar8 + (int)param_4) =
             *param_4 * local_14 +
             *(float *)(iVar4 + (int)param_4) * local_18 +
             *(float *)(iVar5 + (int)param_4) * local_1c +
             *(float *)(iVar7 + (int)param_4) * local_20;
      }
      if (param_8 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
        *(float *)(iVar6 + (int)param_4) =
             *param_4 * local_4 +
             *(float *)(iVar4 + (int)param_4) * local_8 +
             *(float *)(iVar5 + (int)param_4) * local_c +
             *(float *)(iVar7 + (int)param_4) * local_10;
      }
      param_4 = (void *)((int)param_4 + 4);
      param_1 = (float)((int)param_1 + -1);
    } while (param_1 != 0.0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 00550290 */

void __thiscall
m3dSPL_BEZIER2D::GetValue(m3dSPL_BEZIER2D *this,float param_1,void *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)ROUND(param_1 - `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
  param_1 = param_1 - (float)iVar4;
  if (iVar4 == *(int *)(this + 0xc) + -1) {
    param_1 = param_1 + ___real_3f800000;
    iVar4 = iVar4 + -1;
  }
  iVar1 = *(int *)(this + 0x10);
  iVar3 = iVar4;
  if (iVar1 <= iVar4) {
    iVar3 = iVar1;
  }
  iVar2 = *(int *)(this + 0x18) * iVar3 + *(int *)(this + 0x24);
  iVar3 = iVar4 + 1;
  if (iVar1 <= iVar4 + 1) {
    iVar3 = iVar1;
  }
  iVar4 = *(int *)(this + 0x18) * iVar3 + *(int *)(this + 0x24);
  m3dSPL_BEZIER::GetValueDim
            ((m3dSPL_BEZIER *)this,param_1,2,(void *)(iVar2 + 4),(void *)(iVar2 + 0x14),
             (void *)(iVar4 + 4),(void *)(iVar4 + 0xc),param_2,param_3);
  return;
}




/* from: m3d:m3d_spl.cpp
   addr: 00550320 */

void __thiscall
m3dSPL_BEZIER2D::SetKp
          (m3dSPL_BEZIER2D *this,int param_1,float param_2,m2dV *param_3,m2dV *param_4,m2dV *param_5
          )

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar3 = param_1;
  }
  *(float *)(*(int *)(this + 0x18) * iVar3 + *(int *)(this + 0x24)) = param_2;
  iVar3 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar3 = param_1;
  }
  iVar1 = *(int *)(this + 0x18);
  iVar2 = *(int *)(this + 0x24);
  *(undefined4 *)(iVar1 * iVar3 + 4 + iVar2) = *(undefined4 *)param_3;
  *(undefined4 *)(iVar1 * iVar3 + 8 + iVar2) = *(undefined4 *)(param_3 + 4);
  iVar3 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar3 = param_1;
  }
  iVar1 = *(int *)(this + 0x18);
  iVar2 = *(int *)(this + 0x24);
  *(undefined4 *)(iVar1 * iVar3 + 0xc + iVar2) = *(undefined4 *)param_4;
  *(undefined4 *)(iVar1 * iVar3 + 0x10 + iVar2) = *(undefined4 *)(param_4 + 4);
  if (*(int *)(this + 0x10) <= param_1) {
    param_1 = *(int *)(this + 0x10);
  }
  iVar3 = *(int *)(this + 0x18);
  iVar1 = *(int *)(this + 0x24);
  *(undefined4 *)(iVar3 * param_1 + 0x14 + iVar1) = *(undefined4 *)param_5;
  *(undefined4 *)(iVar3 * param_1 + 0x18 + iVar1) = *(undefined4 *)(param_5 + 4);
  return;
}




/* from: m3d:m3d_spl.cpp
   addr: 005503B0 */

void __thiscall
m3dSPL_BEZIER3D::GetValue(m3dSPL_BEZIER3D *this,float param_1,void *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)ROUND(param_1 - `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
  param_1 = param_1 - (float)iVar3;
  if (iVar3 == *(int *)(this + 0xc) + -1) {
    iVar3 = *(int *)(this + 0xc) + -2;
    param_1 = 1.0;
  }
  iVar1 = *(int *)(this + 0x10);
  iVar4 = iVar3;
  if (iVar1 <= iVar3) {
    iVar4 = iVar1;
  }
  iVar2 = *(int *)(this + 0x18) * iVar4 + *(int *)(this + 0x24);
  iVar4 = iVar3 + 1;
  if (iVar1 <= iVar3 + 1) {
    iVar4 = iVar1;
  }
  iVar3 = *(int *)(this + 0x18) * iVar4 + *(int *)(this + 0x24);
  m3dSPL_BEZIER::GetValueDim
            ((m3dSPL_BEZIER *)this,param_1,3,(void *)(iVar2 + 4),(void *)(iVar2 + 0x1c),
             (void *)(iVar3 + 4),(void *)(iVar3 + 0x10),param_2,param_3);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 00550440 */

m3dSPL * __thiscall m3dSPL_BEZIER3D::Convert(m3dSPL_BEZIER3D *this,int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  m3dSPL *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  unkbyte10 extraout_ST1;
  unkbyte10 extraout_ST1_00;
  unkbyte10 Var10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  int iStack_1c;
  float fStack_18;
  int iStack_14;
  int iStack_10;
  m3dSPL *local_4;
  
  if (param_1 != 2) {
    return local_4;
  }
  iVar3 = *(int *)(this + 0xc);
  this_00 = m3dSPL::Make(2);
  if (this_00 != (m3dSPL *)0x0) {
    iVar3 = m3dSPL::AllocKpList(this_00,(iVar3 + -1) * param_2 + 1);
    if (iVar3 != 0) {
      iVar3 = 1;
      (**(code **)(*(int *)this + 0x10))
                (0,*(int *)(this_00 + 0x18) *
                   (*(uint *)(this_00 + 0x10) & (0 < (int)*(uint *)(this_00 + 0x10)) - 1) + 4 +
                   *(int *)(this_00 + 0x24),0);
      iStack_1c = 0;
      Var10 = extraout_ST1;
      if (*(int *)(this + 0xc) != 1 && -1 < *(int *)(this + 0xc) + -1) {
        do {
          param_1 = 1;
          if (0 < param_2) {
            iVar4 = iVar3;
            do {
              iVar3 = iVar4 + 1;
              if (*(int *)(this_00 + 0x10) <= iVar4) {
                iVar4 = *(int *)(this_00 + 0x10);
              }
              (**(code **)(*(int *)this + 0x10))
                        ((float)param_1 / (float)param_2 + (float)iStack_1c,
                         *(int *)(this_00 + 0x18) * iVar4 + 4 + *(int *)(this_00 + 0x24),0);
              param_1 = param_1 + 1;
              iVar4 = iVar3;
              Var10 = extraout_ST1_00;
            } while (param_1 <= param_2);
          }
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < *(int *)(this + 0xc) + -1);
      }
      iStack_1c = 0;
      if (*(int *)(this + 0xc) == 1 || *(int *)(this + 0xc) + -1 < 0) {
        return this_00;
      }
      iStack_14 = 0;
      do {
        fStack_18 = 0.0;
        if (0 < param_2) {
          iStack_10 = param_2;
          iVar3 = iStack_14;
          do {
            iVar6 = *(int *)(this_00 + 0x10);
            iVar4 = iVar3 + 1;
            iVar5 = iVar4;
            if (iVar6 <= iVar4) {
              iVar5 = iVar6;
            }
            if (iVar6 <= iVar3) {
              iVar3 = iVar6;
            }
            iVar6 = *(int *)(this_00 + 0x24);
            iVar3 = *(int *)(this_00 + 0x18) * iVar3;
            iVar5 = *(int *)(this_00 + 0x18) * iVar5;
            fVar11 = *(float *)(iVar3 + 4 + iVar6) - *(float *)(iVar6 + 4 + iVar5);
            fVar2 = *(float *)(iVar3 + 8 + iVar6) - *(float *)(iVar6 + 8 + iVar5);
            fVar12 = *(float *)(iVar3 + 0xc + iVar6) - *(float *)(iVar6 + 0xc + iVar5);
            fVar11 = fVar11 * fVar11 + fVar2 * fVar2 + fVar12 * fVar12;
            if (m3dSimdType == 0) {
              fVar11 = fVar11 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
              fVar12 = auVar13._0_4_;
              param_1 = (int)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar12 *
                              (`float___cdecl_m3dSqrt(float)'::__l2::three -
                              fVar11 * fVar12 * fVar12) * fVar11);
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar7 = (ulonglong)(uint)fVar11;
              uVar8 = PackedFloatingReciprocalSQRAprox((longlong)Var10,uVar7);
              uVar9 = PackedFloatingMUL(uVar8,uVar8);
              uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
              uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
              uVar8 = PackedFloatingMUL(uVar8,uVar7);
              Var10 = CONCAT28((short)((unkuint10)Var10 >> 0x40),uVar8);
              param_1 = (int)uVar8;
              FastExitMediaState();
            }
            else {
              param_1 = (int)SQRT(fVar11);
            }
            fStack_18 = (float)param_1 + fStack_18;
            iStack_10 = iStack_10 + -1;
            iVar3 = iVar4;
          } while (iStack_10 != 0);
        }
        iVar3 = *(int *)(this_00 + 0x10);
        if (iStack_14 < *(int *)(this_00 + 0x10)) {
          iVar3 = iStack_14;
        }
        *(float *)(*(int *)(this_00 + 0x18) * iVar3 + *(int *)(this_00 + 0x24)) = (float)iStack_1c;
        if (0 < param_2) {
          fStack_18 = ___real_3f800000 / fStack_18;
          iVar3 = iStack_14;
          iStack_10 = param_2;
          do {
            iVar5 = iVar3 + 1;
            iVar4 = *(int *)(this_00 + 0x10);
            iVar6 = iVar5;
            if (iVar4 <= iVar5) {
              iVar6 = iVar4;
            }
            if (iVar3 < iVar4) {
              iVar4 = iVar3;
            }
            iVar1 = *(int *)(this_00 + 0x24);
            iVar4 = *(int *)(this_00 + 0x18) * iVar4;
            iVar6 = *(int *)(this_00 + 0x18) * iVar6;
            fVar11 = *(float *)(iVar4 + 4 + iVar1) - *(float *)(iVar1 + 4 + iVar6);
            fVar2 = *(float *)(iVar4 + 8 + iVar1) - *(float *)(iVar1 + 8 + iVar6);
            fVar12 = *(float *)(iVar4 + 0xc + iVar1) - *(float *)(iVar1 + 0xc + iVar6);
            fVar11 = fVar11 * fVar11 + fVar2 * fVar2 + fVar12 * fVar12;
            if (m3dSimdType == 0) {
              fVar11 = fVar11 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
              fVar12 = auVar13._0_4_;
              param_1 = (int)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar12 *
                              (`float___cdecl_m3dSqrt(float)'::__l2::three -
                              fVar11 * fVar12 * fVar12) * fVar11);
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar7 = (ulonglong)(uint)fVar11;
              uVar8 = PackedFloatingReciprocalSQRAprox((longlong)Var10,uVar7);
              uVar9 = PackedFloatingMUL(uVar8,uVar8);
              uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
              uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
              uVar8 = PackedFloatingMUL(uVar8,uVar7);
              Var10 = CONCAT28((short)((unkuint10)Var10 >> 0x40),uVar8);
              param_1 = (int)uVar8;
              FastExitMediaState();
            }
            else {
              param_1 = (int)SQRT(fVar11);
            }
            iVar4 = *(int *)(this_00 + 0x10);
            if (iVar4 <= iVar3) {
              iVar3 = iVar4;
            }
            if (iVar5 < iVar4) {
              iVar4 = iVar5;
            }
            *(float *)(*(int *)(this_00 + 0x18) * iVar4 + *(int *)(this_00 + 0x24)) =
                 fStack_18 * (float)param_1 +
                 *(float *)(*(int *)(this_00 + 0x24) + *(int *)(this_00 + 0x18) * iVar3);
            iStack_10 = iStack_10 + -1;
            iVar3 = iVar5;
          } while (iStack_10 != 0);
        }
        iStack_1c = iStack_1c + 1;
        iStack_14 = iStack_14 + param_2;
      } while (iStack_1c < *(int *)(this + 0xc) + -1);
      return this_00;
    }
    (**(code **)(*(int *)this_00 + 4))(1);
  }
  return (m3dSPL *)0x0;
}




/* from: m3d:m3d_spl.cpp
   addr: 00550830 */

void __thiscall m3dSPL_QUAT::GetValue(m3dSPL_QUAT *this,float param_1,void *param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  m3dQUAT local_10 [16];
  
  iVar1 = m3dSPL::FindSeg((m3dSPL *)this,param_1);
  if (iVar1 == -2) {
    m3dSPL::GetKp((m3dSPL *)this,0,&local_28);
  }
  else {
    if (iVar1 != -1) {
      m3dSPL::GetKp((m3dSPL *)this,iVar1,&local_28);
      m3dSPL::GetKp((m3dSPL *)this,iVar1 + 1,&local_14);
      m3dSlerpQuat((m3dQUAT *)&local_24,local_10,(param_1 - local_28) / (local_14 - local_28),
                   (m3dQUAT *)param_2);
      return;
    }
    m3dSPL::GetKp((m3dSPL *)this,*(int *)(this + 0xc) + -1,&local_14);
    uVar3 = *(uint *)(this + 0x14);
    pfVar4 = &local_14;
    pfVar5 = &local_28;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)pfVar5 = *(undefined1 *)pfVar4;
      pfVar4 = (float *)((int)pfVar4 + 1);
      pfVar5 = (float *)((int)pfVar5 + 1);
    }
  }
  *(undefined4 *)param_2 = local_24;
  *(undefined4 *)((int)param_2 + 4) = local_20;
  *(undefined4 *)((int)param_2 + 8) = local_1c;
  *(undefined4 *)((int)param_2 + 0xc) = local_18;
  return;
}




/* from: m3d:m3d_spl.cpp
   addr: 00550900 */

void __thiscall
m3dSPL_QUAT::GetValueClosest(m3dSPL_QUAT *this,float param_1,void *param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float local_28 [4];
  undefined4 local_18;
  float local_14 [4];
  undefined4 local_4;
  
  iVar1 = m3dSPL::FindSeg((m3dSPL *)this,param_1);
  if (iVar1 == -2) {
    m3dSPL::GetKp((m3dSPL *)this,0,local_28);
  }
  else if (iVar1 == -1) {
    m3dSPL::GetKp((m3dSPL *)this,*(int *)(this + 0xc) + -1,local_14);
    uVar3 = *(uint *)(this + 0x14);
    pfVar4 = local_14;
    pfVar5 = local_28;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)pfVar5 = *(undefined1 *)pfVar4;
      pfVar4 = (float *)((int)pfVar4 + 1);
      pfVar5 = (float *)((int)pfVar5 + 1);
    }
  }
  else {
    m3dSPL::GetKp((m3dSPL *)this,iVar1,local_28);
    m3dSPL::GetKp((m3dSPL *)this,iVar1 + 1,local_14);
    if (local_14[0] - param_1 <= param_1 - local_28[0]) {
      *(float *)param_2 = local_14[1];
      *(float *)((int)param_2 + 4) = local_14[2];
      *(float *)((int)param_2 + 8) = local_14[3];
      *(undefined4 *)((int)param_2 + 0xc) = local_4;
      return;
    }
  }
  *(float *)param_2 = local_28[1];
  *(float *)((int)param_2 + 4) = local_28[2];
  *(float *)((int)param_2 + 8) = local_28[3];
  *(undefined4 *)((int)param_2 + 0xc) = local_18;
  return;
}




/* from: m3d:m3d_spl.cpp
   addr: 005509E0 */

int __thiscall m3dSPL_QUAT::CompareKP(m3dSPL_QUAT *this,m3dSPL_KP *param_1,m3dSPL_KP *param_2)

{
  int iVar1;
  
  iVar1 = m3dIsEqualQuat_A((m3dQUAT *)(param_1 + 4),(m3dQUAT *)(param_2 + 4),0.003);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 00550A10 */

void __thiscall m3dSPL_COLOR::GetValue(m3dSPL_COLOR *this,float param_1,void *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float local_30;
  float local_2c;
  float local_28 [2];
  void *local_20;
  void *local_1c;
  void *local_18;
  float local_14 [2];
  void *local_c;
  void *local_8;
  void *local_4;
  
  pvVar3 = param_2;
  local_28[1] = 0.0;
  local_20 = (void *)0x0;
  local_1c = (void *)0x0;
  local_18 = (void *)0x0;
  local_14[1] = 0.0;
  local_c = (void *)0x0;
  local_8 = (void *)0x0;
  local_4 = (void *)0x0;
  iVar4 = m3dSPL::FindSeg((m3dSPL *)this,param_1);
  if (iVar4 == -2) {
    m3dSPL::GetKp((m3dSPL *)this,0,local_28);
  }
  else {
    if (iVar4 != -1) {
      m3dSPL::GetKp((m3dSPL *)this,iVar4,local_28);
      m3dSPL::GetKp((m3dSPL *)this,iVar4 + 1,local_14);
      fVar2 = local_14[0] - local_28[0];
      local_30 = (float)(uint)(ABS(fVar2) < _DAT_005de45c);
      if ((float)(int)local_30 == ___real_00000000) {
        local_2c = local_14[0];
        local_30 = local_14[1];
        fVar1 = local_28[0];
        if (local_14[0] < local_28[0]) {
          local_2c = local_28[0];
          local_30 = local_28[1];
          local_28[1] = local_14[1];
          fVar1 = local_14[0];
        }
        local_28[1] = ((param_1 - fVar1) * (local_30 - local_28[1])) / (local_2c - fVar1) +
                      local_28[1];
      }
      else {
        local_28[1] = (local_28[1] + local_14[1]) * ___real_3f000000;
      }
      *(float *)param_2 = local_28[1];
      param_2 = (void *)(uint)(ABS(fVar2) < _DAT_005de45c);
      if ((float)(int)param_2 == ___real_00000000) {
        local_2c = local_14[0];
        param_2 = local_c;
        fVar1 = local_28[0];
        if (local_14[0] < local_28[0]) {
          local_2c = local_28[0];
          param_2 = local_20;
          local_20 = local_c;
          fVar1 = local_14[0];
        }
        fVar1 = ((param_1 - fVar1) * ((float)param_2 - (float)local_20)) / (local_2c - fVar1) +
                (float)local_20;
      }
      else {
        fVar1 = ((float)local_20 + (float)local_c) * ___real_3f000000;
      }
      *(float *)((int)pvVar3 + 4) = fVar1;
      param_2 = (void *)(uint)(ABS(fVar2) < _DAT_005de45c);
      if ((float)(int)param_2 == ___real_00000000) {
        local_2c = local_14[0];
        param_2 = local_8;
        fVar1 = local_28[0];
        if (local_14[0] < local_28[0]) {
          local_2c = local_28[0];
          param_2 = local_1c;
          local_1c = local_8;
          fVar1 = local_14[0];
        }
        fVar1 = ((param_1 - fVar1) * ((float)param_2 - (float)local_1c)) / (local_2c - fVar1) +
                (float)local_1c;
      }
      else {
        fVar1 = ((float)local_1c + (float)local_8) * ___real_3f000000;
      }
      *(float *)((int)pvVar3 + 8) = fVar1;
      param_2 = (void *)(uint)(ABS(fVar2) < _DAT_005de45c);
      if ((float)(int)param_2 != ___real_00000000) {
        *(float *)((int)pvVar3 + 0xc) = ((float)local_18 + (float)local_4) * ___real_3f000000;
        return;
      }
      param_2 = local_4;
      local_2c = local_14[0];
      if (local_14[0] < local_28[0]) {
        local_2c = local_28[0];
        param_2 = local_18;
        local_28[0] = local_14[0];
        local_18 = local_4;
      }
      *(float *)((int)pvVar3 + 0xc) =
           ((param_1 - local_28[0]) * ((float)param_2 - (float)local_18)) / (local_2c - local_28[0])
           + (float)local_18;
      return;
    }
    m3dSPL::GetKp((m3dSPL *)this,*(int *)(this + 0xc) + -1,local_14);
    uVar6 = *(uint *)(this + 0x14);
    pfVar7 = local_14;
    pfVar8 = local_28;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)pfVar8 = *(undefined1 *)pfVar7;
      pfVar7 = (float *)((int)pfVar7 + 1);
      pfVar8 = (float *)((int)pfVar8 + 1);
    }
  }
  *(float *)param_2 = local_28[1];
  *(void **)((int)param_2 + 4) = local_20;
  *(void **)((int)param_2 + 8) = local_1c;
  *(void **)((int)param_2 + 0xc) = local_18;
  return;
}




/* from: m3d:m3d_spl.cpp
   addr: 00550DA0 */

void __thiscall
m3dSPL_COLOR::SetKp(m3dSPL_COLOR *this,int param_1,float param_2,float param_3,float param_4,
                   float param_5,float param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar1 = param_1;
  }
  *(float *)(*(int *)(this + 0x18) * iVar1 + *(int *)(this + 0x24)) = param_2;
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar1 = param_1;
  }
  *(float *)(*(int *)(this + 0x18) * iVar1 + 4 + *(int *)(this + 0x24)) = param_3;
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar1 = param_1;
  }
  *(float *)(*(int *)(this + 0x18) * iVar1 + 8 + *(int *)(this + 0x24)) = param_4;
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar1 = param_1;
  }
  *(float *)(*(int *)(this + 0x18) * iVar1 + 0xc + *(int *)(this + 0x24)) = param_5;
  if (*(int *)(this + 0x10) <= param_1) {
    param_1 = *(int *)(this + 0x10);
  }
  *(float *)(*(int *)(this + 0x18) * param_1 + 0x10 + *(int *)(this + 0x24)) = param_6;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 00550E30 */

int __thiscall m3dSPL_COLOR::CompareKP(m3dSPL_COLOR *this,m3dSPL_KP *param_1,m3dSPL_KP *param_2)

{
  m3dSPL_KP *pmVar1;
  
  pmVar1 = param_2;
  param_2 = (m3dSPL_KP *)
            (uint)(ABS(*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) < ___real_3b449ba6);
  if (((((float)(int)param_2 != ___real_00000000) &&
       (param_2 = (m3dSPL_KP *)
                  (uint)(ABS(*(float *)(pmVar1 + 8) - *(float *)(param_1 + 8)) < ___real_3b449ba6),
       (float)(int)param_2 != ___real_00000000)) &&
      (param_2 = (m3dSPL_KP *)
                 (uint)(ABS(*(float *)(pmVar1 + 0xc) - *(float *)(param_1 + 0xc)) < ___real_3b449ba6
                       ), (float)(int)param_2 != ___real_00000000)) &&
     (param_2 = (m3dSPL_KP *)
                (uint)(ABS(*(float *)(pmVar1 + 0x10) - *(float *)(param_1 + 0x10)) <
                      ___real_3b449ba6), (float)(int)param_2 != ___real_00000000)) {
    return 1;
  }
  return 0;
}




/* from: m3d:m3d_spl.cpp
   addr: 00550F40 */

void * __thiscall m3dSPL::GetKpPtr(m3dSPL *this,int param_1)

{
  if (*(int *)(this + 0x10) <= param_1) {
    param_1 = *(int *)(this + 0x10);
  }
  return (void *)(*(int *)(this + 0x18) * param_1 + *(int *)(this + 0x24));
}




/* from: m3d:m3d_spl.cpp
   addr: 00550F60
   addr: 00550F60 */

void __thiscall m3dSPL_BEZIER2D::GetKpValue(m3dSPL_BEZIER2D *this,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar3 = param_1;
  }
  iVar1 = *(int *)(this + 0x18);
  iVar2 = *(int *)(this + 0x24);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar1 * iVar3 + 4 + iVar2);
  *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(iVar1 * iVar3 + 8 + iVar2);
  return;
}




/* from: m3d:m3d_spl.cpp
   addr: 00550F90 */

void __thiscall m3dSPL_LINEAR2D::SetKpValue(m3dSPL_LINEAR2D *this,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar3 = param_1;
  }
  iVar1 = *(int *)(this + 0x18);
  iVar2 = *(int *)(this + 0x24);
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)(iVar1 * iVar3 + 4 + iVar2) = *param_2;
  *(undefined4 *)(iVar1 * iVar3 + 8 + iVar2) = *(undefined4 *)((int)param_2 + 4);
  return;
}




/* from: m3d:m3d_spl.cpp
   addr: 00550FC0 */

void __thiscall m3dSPL_LINEAR3D::SetKpValue(m3dSPL_LINEAR3D *this,int param_1,void *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar2 = param_1;
  }
  puVar1 = (undefined4 *)(*(int *)(this + 0x18) * iVar2 + 4 + *(int *)(this + 0x24));
                    /* WARNING: Load size is inaccurate */
  *puVar1 = *param_2;
  puVar1[1] = *(undefined4 *)((int)param_2 + 4);
  puVar1[2] = *(undefined4 *)((int)param_2 + 8);
  return;
}




/* from: m3d:m3d_spl.cpp
   addr: 00551000 */

void __thiscall m3dSPL_HERMIT::SetKpValue(m3dSPL_HERMIT *this,int param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar1 = param_1;
  }
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)(*(int *)(this + 0x18) * iVar1 + 4 + *(int *)(this + 0x24)) = *param_2;
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar1 = param_1;
  }
  *(undefined4 *)(*(int *)(this + 0x18) * iVar1 + 0xc + *(int *)(this + 0x24)) = 0;
  if (*(int *)(this + 0x10) <= param_1) {
    param_1 = *(int *)(this + 0x10);
  }
  *(undefined4 *)(*(int *)(this + 0x18) * param_1 + 8 + *(int *)(this + 0x24)) = 0;
  return;
}




/* from: m3d:m3d_spl.cpp
   addr: 00551060
   addr: 00551060 */

void __thiscall m3dSPL_LINEAR3D::GetKpValue(m3dSPL_LINEAR3D *this,int param_1,void *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar2 = param_1;
  }
  puVar1 = (undefined4 *)(*(int *)(this + 0x18) * iVar2 + 4 + *(int *)(this + 0x24));
  *(undefined4 *)param_2 = *puVar1;
  *(undefined4 *)((int)param_2 + 4) = puVar1[1];
  *(undefined4 *)((int)param_2 + 8) = puVar1[2];
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_spl.cpp
   addr: 005510A0 */

void __thiscall m3dSPL_BEZIER3D::SetKpValue(m3dSPL_BEZIER3D *this,int param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar3 = param_1;
  }
  puVar1 = (undefined4 *)(*(int *)(this + 0x18) * iVar3 + 4 + *(int *)(this + 0x24));
                    /* WARNING: Load size is inaccurate */
  *puVar1 = *param_2;
  puVar1[1] = *(undefined4 *)((int)param_2 + 4);
  puVar1[2] = *(undefined4 *)((int)param_2 + 8);
  iVar3 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar3 = param_1;
  }
  puVar1 = (undefined4 *)(*(int *)(this + 0x18) * iVar3 + 0x1c + *(int *)(this + 0x24));
  *puVar1 = _m3dVZero;
  puVar1[1] = DAT_00963740;
  puVar1[2] = DAT_00963744;
  if (*(int *)(this + 0x10) <= param_1) {
    param_1 = *(int *)(this + 0x10);
  }
  puVar2 = (undefined4 *)(*(int *)(this + 0x18) * param_1 + 0x10 + *(int *)(this + 0x24));
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  return;
}

