
/* from: drv:d3d_txm.cpp
   addr: 004B02B0 */

int __thiscall txmD3D::D3DRequestSize(txmD3D *this,int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 1;
  uVar1 = *param_1;
  if (1 < uVar1) {
    do {
      uVar6 = uVar6 * 2;
    } while (uVar6 < uVar1);
  }
  uVar4 = 1;
  uVar2 = *param_2;
  if (1 < uVar2) {
    do {
      uVar4 = uVar4 * 2;
    } while (uVar4 < uVar2);
  }
  uVar5 = *(uint *)(d3dDriver + 0x5e4);
  uVar3 = *(uint *)(d3dDriver + 0x5e8);
  if (uVar5 == 0) {
    if (0xff < uVar6) {
      uVar6 = 0x100;
    }
  }
  else if (uVar5 <= uVar6) {
    uVar6 = uVar5;
  }
  if (uVar3 == 0) {
    if (0xff < uVar4) {
      uVar4 = 0x100;
    }
  }
  else if (uVar3 <= uVar4) {
    uVar4 = uVar3;
  }
  uVar5 = uVar4;
  if ((((byte)d3dDriver[0x5bc] & 0x20) != 0) && (uVar5 = uVar6, uVar4 <= uVar6)) {
    uVar5 = uVar4;
    uVar6 = uVar4;
  }
  if ((uVar6 == uVar1) && (uVar5 == uVar2)) {
    return 0;
  }
  *param_1 = uVar6;
  *param_2 = uVar5;
  return 1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B0360 */

int __thiscall txmD3D::D3DFindBestWithAlpha(txmD3D *this)

{
  int iVar1;
  
  iVar1 = D3DFindFormat(this,8,8,8,8);
  *(int *)(this + 4) = iVar1;
  if (iVar1 < 0) {
    iVar1 = D3DFindFormat(this,4,4,4,4);
    *(int *)(this + 4) = iVar1;
    if (iVar1 < 0) {
      iVar1 = D3DFindFormat(this,8,3,3,2);
      *(int *)(this + 4) = iVar1;
      if (iVar1 < 0) {
        iVar1 = D3DFindFormat(this,1,5,5,5);
        *(int *)(this + 4) = iVar1;
        if (iVar1 < 0) {
          iVar1 = D3DFindFormat(this,-1,0,0,0);
          *(int *)(this + 4) = iVar1;
        }
      }
    }
  }
  return iVar1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B03D0 */

int __thiscall txmD3D::D3DCreateDrv(txmD3D *this,pctHEADER *param_1)

{
  uint uVar1;
  int *piVar2;
  pctFORMAT *ppVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  d3dDRIVER *pdVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_100;
  int local_fc;
  undefined4 local_f8 [6];
  undefined4 local_e0;
  undefined4 local_b0 [8];
  undefined1 *local_90;
  undefined4 auStack_8c [35];
  
  iVar6 = 0;
  local_fc = 0;
  local_100 = 0;
  iVar8 = 0;
  iVar5 = 0;
  ppVar3 = pctGetFormat(param_1);
  uVar1 = *(uint *)(ppVar3 + 4);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 4) == 0) {
      iVar5 = (int)(char)ppVar3[0x2c];
      if ((uVar1 & 2) == 0) {
        local_100 = (int)(char)ppVar3[0x2f];
        iVar6 = (int)(char)ppVar3[0x2d];
        iVar8 = (int)(char)ppVar3[0x2e];
      }
      else {
        local_fc = (int)(char)ppVar3[0x2d];
        if (0 < local_fc) {
          if (iVar5 < 1) {
            iVar4 = D3DFindFormat(this,0,5,6,5);
            *(int *)(this + 4) = iVar4;
            if (-1 < iVar4) goto LAB_004b04a1;
            iVar4 = D3DFindFormat(this,0,-1,-1,-1);
          }
          else {
            iVar4 = D3DFindFormat(this,4,4,4,4);
            *(int *)(this + 4) = iVar4;
            if (-1 < iVar4) goto LAB_004b04a1;
            iVar4 = D3DFindFormat(this,-1,0,0,0);
          }
          goto LAB_004b049e;
        }
      }
      iVar4 = D3DFindFormat(this,iVar5,iVar6,iVar8,local_100);
      *(int *)(this + 4) = iVar4;
      if (-1 < iVar4) goto LAB_004b04a1;
      if (iVar5 < 1) goto LAB_004b044c;
      iVar4 = D3DFindBestWithAlpha(this);
    }
    else {
      iVar4 = D3DFindFormat(this,-2,8,8,0);
    }
  }
  else if ((*(byte *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 == 0xc) {
LAB_004b044c:
      iVar4 = D3DFindFormat(this,0,8,8,8);
      *(int *)(this + 4) = iVar4;
      if (iVar4 < 0) {
        iVar4 = D3DFindFormat(this,0,5,6,5);
        *(int *)(this + 4) = iVar4;
        if (iVar4 < 0) {
          iVar4 = D3DFindFormat(this,0,3,3,2);
          *(int *)(this + 4) = iVar4;
          if (iVar4 < 0) {
            iVar4 = D3DFindFormat(this,0,-1,-1,-1);
            *(int *)(this + 4) = iVar4;
          }
        }
      }
    }
    else {
      if ((iVar4 < 0xd) || (0x11 < iVar4)) goto LAB_004b04a1;
      iVar4 = D3DFindBestWithAlpha(this);
    }
  }
  else {
    iVar4 = D3DFindFormat(this,-3,*(int *)(param_1 + 0x10),0,0);
  }
LAB_004b049e:
  *(int *)(this + 4) = iVar4;
LAB_004b04a1:
  if (*(int *)(this + 4) == -1) {
    apLog(s_FATAL__Cann_t_find_a_valid_forma,iVar5,iVar6,iVar8,local_100,local_fc);
    return 0;
  }
  pdVar7 = d3dDriver + *(int *)(this + 4) * 0x44 + 0x78c;
  if ((0 < iVar5) && (*(int *)(pdVar7 + 0x40) == 0)) {
    apLog(s_FATAL__Cann_t_find_a_valid_forma);
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  if ((iVar5 < 1) ||
     (iVar6 = pctGetMaxMipMapCount(*(int *)(param_1 + 4),*(int *)(param_1 + 8)), iVar6 < iVar5)) {
    *(undefined4 *)(this + 0xc) = 1;
  }
  else {
    *(int *)(this + 0xc) = iVar5;
  }
  puVar9 = local_f8;
  for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_f8[0] = 0x7c;
  local_f8[1] = 0x121007;
  local_f8[3] = *(undefined4 *)(param_1 + 4);
  local_f8[2] = *(undefined4 *)(param_1 + 8);
  local_e0 = *(undefined4 *)(this + 0xc);
  local_90 = &LAB_00401808;
  auStack_8c[3] = 0;
  puVar9 = local_b0;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *(undefined4 *)pdVar7;
    pdVar7 = pdVar7 + 4;
    puVar9 = puVar9 + 1;
  }
  iVar5 = (**(code **)(**(int **)(d3dDriver + 0x774) + 0x18))
                    (*(int **)(d3dDriver + 0x774),local_f8,this + 0x20,0);
  if (iVar5 == 0) {
    piVar2 = *(int **)(this + 0x20);
    puVar9 = auStack_8c;
    for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    auStack_8c[0] = 0x7c;
    auStack_8c[1] = 0x80000;
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(this + 0x24);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x58))(piVar2,auStack_8c);
      }
    }
    else {
      (**(code **)(*piVar2 + 0x58))(piVar2,auStack_8c);
    }
    *(undefined4 *)(this + 0x18) = auStack_8c[4];
    return 1;
  }
  return 0;
}




/* from: drv:d3d_txm.cpp
   addr: 004B0700 */

int __thiscall txmD3D::D3DLoadDrv(txmD3D *this,pctPICTURE *param_1)

{
  d3dDRIVER *pdVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int *unaff_EDI;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  int *local_98;
  int *piStack_90;
  undefined1 *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c [4];
  uchar *puStack_6c;
  pctPICTURE *ppStack_10;
  
  if (((*(int *)(this + 0x20) == 0) && (*(int *)(this + 0x24) != 0)) &&
     (iVar2 = D3DCompress(this,0), iVar2 == 0)) {
    return 0;
  }
  pdVar1 = d3dDriver;
  iVar2 = *(int *)(this + 4) * 0x44;
  pctGetFormat(param_1);
  local_98 = *(int **)(this + 0x20);
  local_88 = 0;
  iVar6 = 0;
  local_84 = 0;
  local_8c = &__E56;
  local_80 = 0;
  if (0 < *(int *)(this + 0xc)) {
    do {
      piVar12 = (int *)0x0;
      puVar7 = local_7c;
      for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_7c[0] = 0x7c;
      iVar3 = (**(code **)(*local_98 + 100))(local_98,0,local_7c,0x21);
      if (iVar3 != 0) {
        return 0;
      }
      iVar5 = *(int *)(*piVar12 + 0x4c) >> ((byte)iVar6 & 0x1f);
      iVar3 = *(int *)(*piVar12 + 0x50) >> ((byte)iVar6 & 0x1f);
      if ((*(uint *)(unaff_ESI + 4) & 8) == 0) {
        if ((*(uint *)(unaff_ESI + 4) & 4) == 0) {
          uVar11 = *(ulong *)(pdVar1 + iVar2 + 0x7a8);
          uVar10 = *(ulong *)(pdVar1 + iVar2 + 0x7a4);
          uVar9 = *(ulong *)(pdVar1 + iVar2 + 0x7a0);
          uVar8 = *(ulong *)(pdVar1 + iVar2 + 0x79c);
          iVar4 = *(int *)(pdVar1 + iVar2 + 0x7ac);
        }
        else {
          uVar9 = *(ulong *)(pdVar1 + iVar2 + 0x7a0);
          uVar11 = 0;
          uVar10 = 0;
          uVar8 = *(ulong *)(pdVar1 + iVar2 + 0x79c);
          iVar4 = *(int *)(pdVar1 + iVar2 + 0x7ac);
          param_1 = ppStack_10;
        }
        pctCopyBuf(param_1,iVar5,iVar3,iVar4,iVar6,
                   local_80 - *(int *)(pdVar1 + iVar2 + 0x7ac) * iVar5,uVar8,uVar9,uVar10,uVar11,
                   puStack_6c);
      }
      else if (((byte)pdVar1[iVar2 + 0x790] & 4) == 0) {
        pctCopyViaUnpackDXTBuf
                  (param_1,iVar5,iVar3,*(int *)(pdVar1 + iVar2 + 0x7ac),iVar6,
                   local_80 - *(int *)(pdVar1 + iVar2 + 0x7ac) * iVar5,
                   *(ulong *)(pdVar1 + iVar2 + 0x79c),*(ulong *)(pdVar1 + iVar2 + 0x7a0),
                   *(ulong *)(pdVar1 + iVar2 + 0x7a4),*(ulong *)(pdVar1 + iVar2 + 0x7a8),puStack_6c)
        ;
      }
      else {
        pctCopyDXTBuf(param_1,iVar6,puStack_6c);
      }
      iVar3 = (**(code **)(*unaff_EDI + 0x80))(unaff_EDI,0);
      if (iVar3 != 0) {
        return 0;
      }
      if (iVar6 < *(int *)(this + 0xc) + -1) {
        iVar3 = (**(code **)(*unaff_EDI + 0x30))(unaff_EDI,&local_8c,&piStack_90);
        if (iVar3 != 0) {
          return 0;
        }
        local_98 = piStack_90;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(this + 0xc));
  }
  iVar2 = D3DCompress(this,*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x10);
  return (uint)(iVar2 != 0);
}




/* WARNING: Type propagation algorithm not settling */
/* from: drv:d3d_txm.cpp
   addr: 004B0900 */

int __thiscall txmD3D::D3DCompress(txmD3D *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  d3dDRIVER *pdVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar9;
  undefined4 unaff_EDI;
  undefined4 *puVar10;
  int *piStack_130;
  undefined4 *puStack_12c;
  undefined1 *local_118;
  int iStack_114;
  int iStack_110;
  int aiStack_10c [5];
  undefined4 local_f8 [4];
  undefined4 local_e8;
  undefined4 auStack_7c [6];
  undefined4 uStack_64;
  undefined4 auStack_34 [8];
  undefined1 *puStack_14;
  int iStack_c;
  undefined4 uStack_4;
  
  iVar6 = *(int *)this;
  uVar7 = *(uint *)(iVar6 + 4);
  if ((((uVar7 & 0x1000000) != 0) && ((uVar7 & 0x2000) == 0)) && ((uVar7 & 8) == 0)) {
    if (param_1 == 0) {
      iVar4 = *(int *)(this + 0x20);
    }
    else {
      if ((char)(uVar7 >> 8) < '\0') {
        return 1;
      }
      iVar4 = *(int *)(this + 0x24);
    }
    if ((((iVar4 == 0) && ((4 < *(int *)(iVar6 + 0x4c) || (4 < *(int *)(iVar6 + 0x50))))) &&
        ((uVar7 & 0x1000) == 0)) &&
       (((uVar7 & 0x30) == 0 || ((*(byte *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x40) != 0)))) {
      puVar10 = local_f8;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      piStack_130 = *(int **)(this + 0x20);
      local_f8[0] = 0x7c;
      local_f8[1] = 0x80000;
      if ((piStack_130 != (int *)0x0) ||
         (piStack_130 = *(int **)(this + 0x24), piStack_130 != (int *)0x0)) {
        puStack_12c = local_f8;
        (**(code **)(*piStack_130 + 0x58))();
      }
      *(undefined4 *)(this + 0x18) = local_e8;
      if (param_1 == 0) {
        iStack_110 = *(int *)(this + 0x24);
        local_118 = *(undefined1 **)(this + 4);
      }
      else {
        puVar1 = *(undefined1 **)(d3dDriver + 0xf84);
        puVar8 = (undefined1 *)0x0;
        local_118 = (undefined1 *)0xffffffff;
        puVar2 = local_118;
        if (0 < (int)puVar1) {
          pdVar3 = d3dDriver + 0x794;
          do {
            if ((((byte)pdVar3[-4] & 4) != 0) &&
               (((uVar7 = *(uint *)(*(int *)this + 4) & 4, puVar2 = puVar8, uVar7 != 0 &&
                 (*(int *)pdVar3 == 0x33545844)) || ((uVar7 == 0 && (*(int *)pdVar3 == 0x31545844)))
                ))) break;
            puVar8 = puVar8 + 1;
            pdVar3 = pdVar3 + 0x44;
            puVar2 = local_118;
          } while ((int)puVar8 < (int)puVar1);
        }
        local_118 = puVar2;
        if (puVar8 == puVar1) {
          return 1;
        }
        iStack_110 = *(int *)(this + 0x20);
      }
      puStack_12c = (undefined4 *)0x0;
      puVar10 = auStack_7c;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      auStack_7c[0] = 0x7c;
      auStack_7c[1] = 0x121007;
      puStack_14 = &LAB_00401808;
      auStack_7c[3] = *(undefined4 *)(*(int *)this + 0x4c);
      uStack_64 = *(undefined4 *)(this + 0xc);
      auStack_7c[2] = *(undefined4 *)(*(int *)this + 0x50);
      uStack_4 = 0;
      piStack_130 = aiStack_10c;
      pdVar3 = d3dDriver + (int)local_118 * 0x44 + 0x78c;
      puVar10 = auStack_34;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *(undefined4 *)pdVar3;
        pdVar3 = pdVar3 + 4;
        puVar10 = puVar10 + 1;
      }
      iVar6 = (**(code **)(**(int **)(d3dDriver + 0x774) + 0x18))
                        (*(int **)(d3dDriver + 0x774),auStack_7c);
      if (iVar6 != 0) {
        return 0;
      }
      iVar6 = 0;
      local_118 = &__E56;
      iStack_114 = 0;
      piVar9 = unaff_EBX;
      piVar5 = unaff_EBP;
      iStack_110 = iStack_114;
      aiStack_10c[0] = iStack_114;
      if (0 < *(int *)(this + 0xc)) {
        do {
          (**(code **)(*piVar9 + 0x14))(piVar9,0,piVar5,0,0x1000000,0);
          if (iVar6 < *(int *)(this + 0xc) + -1) {
            iVar4 = (**(code **)(*piVar5 + 0x30))(piVar5,&local_118,&stack0xfffffedc);
            piVar5 = piStack_130;
            if (iVar4 != 0) {
              return 0;
            }
            iVar4 = (**(code **)(*piVar9 + 0x30))(piVar9,&stack0xfffffedc,&piStack_130);
            piVar9 = unaff_ESI;
            if (iVar4 != 0) {
              return 0;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(this + 0xc));
      }
      if (iStack_c == 0) {
        *(undefined4 *)(this + 0x24) = 0;
        *(int **)(this + 0x20) = unaff_EBX;
      }
      else {
        *(int **)(this + 0x24) = unaff_EBX;
        *(undefined4 *)(this + 8) = unaff_EDI;
        *(undefined4 *)(this + 0x20) = 0;
      }
      if (unaff_EBP != (int *)0x0) {
        (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      }
      piVar5 = aiStack_10c;
      for (iVar6 = 0x1f; piVar5 = (int *)((int)piVar5 + 4), iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar5 = 0;
      }
      piVar5 = *(int **)(this + 0x20);
      aiStack_10c[1] = 0x7c;
      aiStack_10c[2] = 0x80000;
      if ((piVar5 != (int *)0x0) || (piVar5 = *(int **)(this + 0x24), piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 0x58))(piVar5,aiStack_10c + 1);
      }
      *(undefined4 *)(this + 0x18) = local_f8[0];
    }
  }
  return 1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B0C10 */

int __thiscall txmD3D::D3DGetColor(txmD3D *this,int param_1,int param_2,pctPIXEL *param_3)

{
  pctPIXEL pVar1;
  void *pvVar2;
  int iVar3;
  _DDSURFACEDESC2 local_7c [84];
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  *param_3 = (pctPIXEL)0x0;
  param_3[3] = (pctPIXEL)0x0;
  param_3[2] = (pctPIXEL)0x0;
  param_3[1] = (pctPIXEL)0x0;
  if (*(IDirectDrawSurface7 **)(this + 0x20) == (IDirectDrawSurface7 *)0x0) {
    return 0;
  }
  pvVar2 = d3dReadLock(*(IDirectDrawSurface7 **)(this + 0x20),local_7c);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  switch(local_28 >> 3) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
  }
  if (local_24 != 0) {
    iVar3 = 0;
    do {
      if ((local_24 & 1 << ((byte)iVar3 & 0x1f)) != 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    if (iVar3 != 0x20) {
      while ((iVar3 < 0x20 && ((local_24 & 1 << ((byte)iVar3 & 0x1f)) != 0))) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  pVar1 = (pctPIXEL)ftol();
  param_3[1] = pVar1;
  if (local_20 != 0) {
    iVar3 = 0;
    do {
      if ((local_20 & 1 << ((byte)iVar3 & 0x1f)) != 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    if (iVar3 != 0x20) {
      while ((iVar3 < 0x20 && ((local_20 & 1 << ((byte)iVar3 & 0x1f)) != 0))) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  pVar1 = (pctPIXEL)ftol();
  param_3[2] = pVar1;
  if (local_1c != 0) {
    iVar3 = 0;
    do {
      if ((local_1c & 1 << ((byte)iVar3 & 0x1f)) != 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    if (iVar3 != 0x20) {
      while ((iVar3 < 0x20 && ((local_1c & 1 << ((byte)iVar3 & 0x1f)) != 0))) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  pVar1 = (pctPIXEL)ftol();
  param_3[3] = pVar1;
  if (local_18 != 0) {
    iVar3 = 0;
    do {
      if ((local_18 & 1 << ((byte)iVar3 & 0x1f)) != 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    if (iVar3 != 0x20) {
      while ((iVar3 < 0x20 && ((local_18 & 1 << ((byte)iVar3 & 0x1f)) != 0))) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  pVar1 = (pctPIXEL)ftol();
  *param_3 = pVar1;
  d3dUnlock(*(IDirectDrawSurface7 **)(this + 0x20));
  return 1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B0FC0 */

int __thiscall txmD3D::D3DSetColor(txmD3D *this,int param_1,int param_2,pctPIXEL *param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  _DDSURFACEDESC2 local_7c [16];
  int iStack_6c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  if (*(IDirectDrawSurface7 **)(this + 0x20) == (IDirectDrawSurface7 *)0x0) {
    return 0;
  }
  pvVar1 = d3dReadLock(*(IDirectDrawSurface7 **)(this + 0x20),local_7c);
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  if (uStack_24 == 0) {
LAB_004b1104:
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    do {
      if ((uStack_24 & 1 << ((byte)iVar7 & 0x1f)) != 0) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x20);
    iVar2 = iVar7;
    if (iVar7 == 0x20) goto LAB_004b1104;
    for (; iVar2 < 0x20; iVar2 = iVar2 + 1) {
      if ((uStack_24 & 1 << ((byte)iVar2 & 0x1f)) == 0) {
        iVar2 = iVar2 + -1;
        break;
      }
    }
    if (((iVar2 != 0x20) && (iVar2 < 0x1f)) &&
       (uStack_24 != (1 << (((char)iVar2 - (byte)iVar7) + 1 & 0x1f)) + -1 << ((byte)iVar7 & 0x1f)))
    goto LAB_004b1104;
  }
  iVar2 = ftol();
  if (uStack_20 == 0) {
LAB_004b11ba:
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    do {
      if ((uStack_20 & 1 << ((byte)iVar8 & 0x1f)) != 0) break;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x20);
    iVar3 = iVar8;
    if (iVar8 == 0x20) goto LAB_004b11ba;
    for (; iVar3 < 0x20; iVar3 = iVar3 + 1) {
      if ((uStack_20 & 1 << ((byte)iVar3 & 0x1f)) == 0) {
        iVar3 = iVar3 + -1;
        break;
      }
    }
    if (((iVar3 != 0x20) && (iVar3 < 0x1f)) &&
       (uStack_20 != (1 << (((char)iVar3 - (byte)iVar8) + 1 & 0x1f)) + -1 << ((byte)iVar8 & 0x1f)))
    goto LAB_004b11ba;
  }
  iVar3 = ftol();
  if (uStack_1c == 0) {
LAB_004b1273:
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    do {
      if ((uStack_1c & 1 << ((byte)iVar9 & 0x1f)) != 0) break;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x20);
    iVar4 = iVar9;
    if (iVar9 == 0x20) goto LAB_004b1273;
    for (; iVar4 < 0x20; iVar4 = iVar4 + 1) {
      if ((uStack_1c & 1 << ((byte)iVar4 & 0x1f)) == 0) {
        iVar4 = iVar4 + -1;
        break;
      }
    }
    if (((iVar4 != 0x20) && (iVar4 < 0x1f)) &&
       (uStack_1c != (1 << (((char)iVar4 - (byte)iVar9) + 1 & 0x1f)) + -1 << ((byte)iVar9 & 0x1f)))
    goto LAB_004b1273;
  }
  iVar4 = ftol();
  if (uStack_18 != 0) {
    iVar10 = 0;
    do {
      if ((uStack_18 & 1 << ((byte)iVar10 & 0x1f)) != 0) break;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x20);
    iVar5 = iVar10;
    if (iVar10 != 0x20) {
      for (; iVar5 < 0x20; iVar5 = iVar5 + 1) {
        if ((uStack_18 & 1 << ((byte)iVar5 & 0x1f)) == 0) {
          iVar5 = iVar5 + -1;
          break;
        }
      }
      if (((iVar5 == 0x20) || (0x1e < iVar5)) ||
         (uStack_18 ==
          (1 << (((char)iVar5 - (byte)iVar10) + 1 & 0x1f)) + -1 << ((byte)iVar10 & 0x1f)))
      goto LAB_004b128c;
    }
  }
  iVar10 = 0;
LAB_004b128c:
  iVar5 = ftol();
  uVar11 = iVar2 << ((byte)iVar7 & 0x1f) | iVar3 << ((byte)iVar8 & 0x1f) |
           iVar4 << ((byte)iVar9 & 0x1f) | iVar5 << ((byte)iVar10 & 0x1f);
  puVar6 = (uint *)((int)pvVar1 + (uStack_28 >> 3) * param_1 + iStack_6c * param_2);
  switch(uStack_28 >> 3) {
  case 1:
    *(char *)puVar6 = (char)uVar11;
    break;
  case 2:
    *(short *)puVar6 = (short)uVar11;
    break;
  case 3:
    *(char *)puVar6 = (char)uVar11;
    *(char *)((int)puVar6 + 1) = (char)(uVar11 >> 8);
    *(char *)((int)puVar6 + 2) = (char)(uVar11 >> 0x10);
    break;
  case 4:
    *puVar6 = uVar11;
  }
  d3dUnlock(*(IDirectDrawSurface7 **)(this + 0x20));
  return 1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B1350 */

void __thiscall
txmD3D::D3DBlendDrv_888
          (txmD3D *this,int param_1,int param_2,int param_3,int *param_4,uchar **param_5,
          uchar *param_6,int param_7,d3dTEX_FORMAT *param_8,txmLINE_SKIP_TYPE param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uchar **ppuVar8;
  uchar **ppuVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uchar *local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  uVar1 = *(undefined4 *)(param_8 + 0x3c);
  uVar2 = *(undefined4 *)(param_8 + 0x38);
  uVar3 = *(undefined4 *)(param_8 + 0x28);
  uVar4 = *(undefined4 *)(param_8 + 0x24);
  uVar5 = *(undefined4 *)(param_8 + 0x34);
  uVar6 = *(undefined4 *)(param_8 + 0x2c);
  local_28 = param_6;
  local_24 = 0;
  if (0 < param_2) {
    do {
      if (param_9 == 0) {
        uVar10 = local_24 & 0x80000001;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
        }
        if (uVar10 != 1) goto LAB_004b13d8;
LAB_004b14ed:
        iVar11 = 0;
        if (0 < param_3) {
          do {
            param_5[iVar11] = param_5[iVar11] + param_1 * 3;
            iVar11 = iVar11 + 1;
          } while (iVar11 < param_3);
        }
      }
      else {
        if (param_9 == 1) {
          uVar10 = local_24 & 0x80000001;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
          }
          if (uVar10 == 0) goto LAB_004b14ed;
        }
LAB_004b13d8:
        if (0 < param_1) {
          local_1c = param_1;
          param_6 = local_28;
          do {
            iVar11 = 0;
            iVar13 = 0;
            uVar10 = 0;
            if (0 < param_3) {
              local_20 = param_3;
              ppuVar8 = param_5;
              do {
                pbVar7 = *ppuVar8;
                ppuVar9 = ppuVar8 + 1;
                uVar10 = uVar10 + (uint)*pbVar7 *
                                  *(int *)((int)param_4 + (-4 - (int)param_5) + (int)ppuVar9);
                *ppuVar8 = pbVar7 + 1;
                iVar13 = iVar13 + (uint)pbVar7[1] *
                                  *(int *)((int)param_4 + (-4 - (int)param_5) + (int)ppuVar9);
                *ppuVar8 = pbVar7 + 2;
                iVar11 = iVar11 + (uint)pbVar7[2] *
                                  *(int *)((int)param_4 + (-4 - (int)param_5) + (int)ppuVar9);
                local_20 = local_20 + -1;
                *ppuVar8 = pbVar7 + 3;
                ppuVar8 = ppuVar9;
              } while (local_20 != 0);
            }
            uVar14 = iVar13 + (uVar10 & 0xff);
            uVar12 = iVar11 + (uVar14 & 0xff);
            if ((uVar10 & 0xffff0000) != 0) {
              uVar10 = uVar10 | 0xffff;
            }
            if ((uVar14 & 0xffff0000) != 0) {
              uVar14 = uVar14 | 0xffff;
            }
            if ((uVar12 & 0xffff0000) != 0) {
              uVar12 = uVar12 | 0xffff;
            }
            uVar10 = (uVar12 >> (0x10U - (char)uVar1 & 0x1f)) << ((byte)uVar6 & 0x1f) |
                     (uVar14 >> (0x10U - (char)uVar2 & 0x1f)) << ((byte)uVar3 & 0x1f) |
                     (uVar10 >> (0x10U - (char)uVar5 & 0x1f)) << ((byte)uVar4 & 0x1f);
            if (*(int *)(param_8 + 0x20) == 2) {
              *(short *)param_6 = (short)uVar10;
            }
            else if (*(int *)(param_8 + 0x20) == 4) {
              *(uint *)param_6 = uVar10;
            }
            param_6 = param_6 + *(int *)(param_8 + 0x20);
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
      }
      local_28 = local_28 + param_7;
      local_24 = local_24 + 1;
    } while ((int)local_24 < param_2);
  }
  return;
}




/* from: drv:d3d_txm.cpp
   addr: 004B1560 */

int __thiscall
txmD3D::D3DBlendDrv(txmD3D *this,pctHEADER *param_1,int param_2,void **param_3,float *param_4,
                   txmLINE_SKIP_TYPE param_5)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  txmLINE_SKIP_TYPE unaff_retaddr;
  d3dTEX_FORMAT *pdVar6;
  int *piStack_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uchar *local_a4 [5];
  undefined4 local_90 [4];
  int iStack_80;
  undefined4 local_7c [4];
  uchar *puStack_6c;
  int iStack_10;
  int iStack_c;
  
  iVar3 = 0;
  if (0 < param_2) {
    puVar5 = local_90;
    for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
    do {
      puVar1 = (uchar *)ftol();
      local_a4[iVar3] = puVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  *(uint *)(this + 0x1c) = (uint)(*(int *)(this + 0x1c) == 0);
  piVar4 = *(int **)(this + 0x20);
  iVar3 = 0;
  local_b4 = &__E56;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  if (0 < *(int *)(this + 0xc)) {
    do {
      pdVar6 = (d3dTEX_FORMAT *)0x0;
      puVar5 = local_7c;
      for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_7c[0] = 0x7c;
      iVar2 = (**(code **)(*piVar4 + 100))(piVar4,0,local_7c,0x21);
      if (iVar2 != 0) {
        return 0;
      }
      if (*(int *)(iStack_10 + 0x10) == 2) {
        D3DBlendDrv_888(this,*(int *)(*(int *)this + 0x4c) >> ((byte)iVar3 & 0x1f),
                        *(int *)(*(int *)this + 0x50) >> ((byte)iVar3 & 0x1f),iStack_c,
                        (int *)&piStack_b8,local_a4,puStack_6c,iStack_80,pdVar6,unaff_retaddr);
      }
      iVar2 = (**(code **)(*piVar4 + 0x80))(piVar4,0);
      if (iVar2 != 0) {
        return 0;
      }
      if ((iVar3 < *(int *)(this + 0xc) + -1) &&
         (iVar2 = (**(code **)(*piVar4 + 0x30))(piVar4,&local_b4,&piStack_b8), piVar4 = piStack_b8,
         iVar2 != 0)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0xc));
  }
  return 1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B16E0 */

int __thiscall txmD3D::D3DTryDownLoadHw(txmD3D *this,int param_1)

{
  txmD3D *ptVar1;
  int iVar2;
  int iVar3;
  d3dDRIVER *pdVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iStack_a4;
  undefined1 *puStack_a0;
  undefined1 local_90 [4];
  int local_8c [6];
  int iStack_74;
  undefined4 auStack_44 [8];
  undefined4 uStack_24;
  undefined4 uStack_1c;
  int iStack_14;
  
  ptVar1 = this + 0x28;
  if (*(int *)(this + 0x28) != 0) {
    return 1;
  }
  local_8c[0] = 0x5000;
  local_8c[1] = 0;
  local_8c[2] = 0;
  local_8c[3] = 0;
  puStack_a0 = local_90;
  iStack_a4 = 0;
  (**(code **)(**(int **)(d3dDriver + 0x774) + 0x5c))(*(int **)(d3dDriver + 0x774),local_8c);
  if (*(undefined1 **)(this + 0x18) <= puStack_a0) {
    piVar5 = local_8c;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    local_8c[0] = 0x7c;
    local_8c[1] = 0x121007;
    uStack_24 = 0x4405008;
    local_8c[3] = *(int *)(*(int *)this + 0x4c);
    local_8c[2] = *(int *)(*(int *)this + 0x50);
    iStack_74 = *(int *)(this + 0xc);
    if (((byte)d3dDriver[4] & 1) == 0) {
      uStack_24 = 0x4401808;
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LowResTex,&iStack_a4);
    if (((iVar2 != 0) && (iStack_a4 != 0)) && (1 < *(int *)(this + 0xc))) {
      local_8c[3] = *(int *)(*(int *)this + 0x4c) / 2;
      local_8c[2] = *(int *)(*(int *)this + 0x50) / 2;
      iStack_74 = *(int *)(this + 0xc) + -1;
    }
    iStack_14 = D3DCalcTexStageNmb(this);
    *(int *)(this + 0x10) = iStack_14;
    if (*(int *)(this + 0x24) == 0) {
      iVar2 = *(int *)(this + 4);
    }
    else {
      iVar2 = *(int *)(this + 8);
    }
    pdVar4 = d3dDriver + iVar2 * 0x44 + 0x78c;
    puVar6 = auStack_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *(undefined4 *)pdVar4;
      pdVar4 = pdVar4 + 4;
      puVar6 = puVar6 + 1;
    }
    iVar2 = (**(code **)(**(int **)(d3dDriver + 0x774) + 0x18))
                      (*(int **)(d3dDriver + 0x774),local_8c,ptVar1,0);
    if (iVar2 == 0) {
      if (*(int *)(this + 0x24) == 0) {
        iVar2 = (**(code **)(**(int **)(d3dDriver + 0x77c) + 0xac))
                          (*(int **)(d3dDriver + 0x77c),*(int *)ptVar1,0,
                           *(undefined4 *)(this + 0x20),0,0);
      }
      else {
        iVar2 = (**(code **)(**(int **)(d3dDriver + 0x77c) + 0xac))
                          (*(int **)(d3dDriver + 0x77c),*(int *)ptVar1,0,*(int *)(this + 0x24));
      }
      if (iVar2 == 0) {
        *(undefined4 *)(this + 0x14) = uStack_1c;
        *(uint *)(*(int *)this + 4) = *(uint *)(*(int *)this + 4) | 0x4000000;
        return 1;
      }
    }
    piVar5 = *(int **)ptVar1;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    *(int *)ptVar1 = 0;
  }
  return 0;
}




/* from: drv:d3d_txm.cpp
   addr: 004B18F0 */

int __thiscall txmD3D::D3DReplaceTex(txmD3D *this,txmD3D *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if ((((*(int *)(*(int *)this + 0x4c) == *(int *)(*(int *)param_1 + 0x4c)) &&
       (*(int *)(*(int *)this + 0x50) == *(int *)(*(int *)param_1 + 0x50))) &&
      (*(int *)(this + 4) == *(int *)(param_1 + 4))) &&
     (*(int *)(this + 0xc) == *(int *)(param_1 + 0xc))) {
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(int *)(this + 0x14) = param_2;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(uint *)(*(int *)param_1 + 4) = *(uint *)(*(int *)param_1 + 4) & 0xfbffffff;
    iVar1 = *(int *)(this + 0x24);
    if (iVar1 == 0) {
      piVar3 = *(int **)(d3dDriver + 0x77c);
      iVar1 = *(int *)(this + 0x20);
      uVar4 = *(undefined4 *)(this + 0x28);
      iVar2 = *piVar3;
    }
    else {
      piVar3 = *(int **)(d3dDriver + 0x77c);
      uVar4 = *(undefined4 *)(this + 0x28);
      iVar2 = *piVar3;
    }
    iVar1 = (**(code **)(iVar2 + 0xac))(piVar3,uVar4,0,iVar1,0,0);
    if (iVar1 == 0) {
      *(uint *)(*(int *)this + 4) = *(uint *)(*(int *)this + 4) | 0x4000000;
      return 1;
    }
  }
  return 0;
}




/* from: drv:d3d_txm.cpp
   addr: 004B19C0 */

int __thiscall txmD3D::D3DFindFormat(txmD3D *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  d3dDRIVER *pdVar3;
  
  if (param_1 == -3) {
    switch(param_2) {
    case 0xc:
    case 0xd:
      param_2 = 0x31545844;
      break;
    case 0xe:
      param_2 = 0x32545844;
      break;
    case 0xf:
      param_2 = 0x33545844;
      break;
    case 0x10:
      param_2 = 0x34545844;
      break;
    case 0x11:
      param_2 = 0x35545844;
    }
    iVar1 = 0;
    if (0 < *(int *)(d3dDriver + 0xf84)) {
      pdVar3 = d3dDriver + 0x794;
      while ((((byte)pdVar3[-4] & 4) == 0 || (*(int *)pdVar3 != param_2))) {
        iVar1 = iVar1 + 1;
        pdVar3 = pdVar3 + 0x44;
        if (*(int *)(d3dDriver + 0xf84) <= iVar1) {
          return -1;
        }
      }
      return iVar1;
    }
  }
  else {
    iVar2 = 0;
    iVar1 = *(int *)(d3dDriver + 0xf84);
    if (param_1 == -1) {
      if (0 < iVar1) {
        pdVar3 = d3dDriver + 0x7cc;
        while ((*(int *)(pdVar3 + -0x20) == 0 || (*(int *)pdVar3 < 1))) {
          iVar2 = iVar2 + 1;
          pdVar3 = pdVar3 + 0x44;
          if (iVar1 <= iVar2) {
            return -1;
          }
        }
        return iVar2;
      }
    }
    else if (param_2 == -1) {
      if (0 < iVar1) {
        pdVar3 = d3dDriver + 0x7cc;
        while ((*(int *)(pdVar3 + -0x20) == 0 || (*(int *)pdVar3 != 0))) {
          iVar2 = iVar2 + 1;
          pdVar3 = pdVar3 + 0x44;
          if (iVar1 <= iVar2) {
            return -1;
          }
        }
        return iVar2;
      }
    }
    else if (0 < iVar1) {
      pdVar3 = d3dDriver + 0x790;
      do {
        if (*(int *)(pdVar3 + 0x1c) != 0) {
          if (param_1 == -2) {
            if (((byte)pdVar3[2] & 8) != 0) {
              return iVar2;
            }
          }
          else if ((((*(int *)(pdVar3 + 0x3c) == param_1) && (*(int *)(pdVar3 + 0x30) == param_2))
                   && (*(int *)(pdVar3 + 0x34) == param_3)) && (*(int *)(pdVar3 + 0x38) == param_4))
          {
            return iVar2;
          }
        }
        iVar2 = iVar2 + 1;
        pdVar3 = pdVar3 + 0x44;
      } while (iVar2 < iVar1);
    }
  }
  return -1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B1B20 */

int __thiscall txmD3D::D3DCalcTexStageNmb(txmD3D *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(d3dDriver + 0x238);
  if (iVar1 == 2) {
    uVar3 = *(uint *)(*(int *)this + 4);
    uVar2 = uVar3 & 0x18;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 < 4) {
        return 0;
      }
      uVar3 = *(uint *)(*(int *)this + 4);
      if ((uVar3 & 8) != 0) {
        return 3;
      }
      if ((uVar3 & 0x10) != 0) {
        return 1;
      }
      if ((uVar3 & 0x2000) != 0) {
        return 1;
      }
      if ((uVar3 & 0x20) != 0) {
        return 2;
      }
      goto LAB_004b1b5c;
    }
    uVar3 = *(uint *)(*(int *)this + 4);
    if ((uVar3 & 8) != 0) {
      return 2;
    }
    uVar2 = uVar3 & 0x30;
  }
  if (uVar2 != 0) {
    return 1;
  }
  if ((uVar3 & 0x2000) != 0) {
    return 1;
  }
LAB_004b1b5c:
  if ((uVar3 & 0x4000) != 0) {
    return 2;
  }
  if ((uVar3 & 0x10000) != 0) {
    return 1;
  }
  return 0;
}




/* from: drv:d3d_txm.cpp
   addr: 004B1BA0 */

txmD3D_TEX * __thiscall txmD3D_TEX::txmD3D_TEX(txmD3D_TEX *this,char *param_1,int param_2)

{
  txmTEXTURE::txmTEXTURE((txmTEXTURE *)this,param_1,param_2);
  *(txmD3D_TEX **)(this + 0x78) = this;
  *(undefined4 *)(this + 0x7c) = 0xffffffff;
  *(undefined4 *)(this + 0x80) = 0xffffffff;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(txmD3D_TEX **)(this + 0x74) = this + 0x78;
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: drv:d3d_txm.cpp
   addr: 004B1BF0 */

txmD3D_TEX_LAY * __thiscall
txmD3D_TEX_LAY::txmD3D_TEX_LAY(txmD3D_TEX_LAY *this,char *param_1,int param_2)

{
  txmTEXTURE_LAY::txmTEXTURE_LAY((txmTEXTURE_LAY *)this,param_1,param_2);
  *(txmD3D_TEX_LAY **)(this + 0x228) = this;
  *(undefined4 *)(this + 0x22c) = 0xffffffff;
  *(undefined4 *)(this + 0x230) = 0xffffffff;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x238) = 0xffffffff;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  *(txmD3D_TEX_LAY **)(this + 0x74) = this + 0x228;
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: drv:d3d_txm.cpp
   addr: 004B1C40 */

int __thiscall
txmD3D_TEX_LAY::GetColor(txmD3D_TEX_LAY *this,int param_1,int param_2,pctPIXEL *param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == -1) {
    iVar1 = txmD3D::D3DGetColor((txmD3D *)(this + 0x228),param_1,param_2,param_3);
    return iVar1;
  }
  iVar1 = txmTEXTURE_LAY::GetColor((txmTEXTURE_LAY *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B1C70 */

int __thiscall
txmD3D_TEX_LAY::SetColor(txmD3D_TEX_LAY *this,int param_1,int param_2,pctPIXEL *param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == -1) {
    iVar1 = txmD3D::D3DSetColor((txmD3D *)(this + 0x228),param_1,param_2,param_3);
    return iVar1;
  }
  iVar1 = txmTEXTURE_LAY::SetColor((txmTEXTURE_LAY *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B1CA0 */

void __thiscall txmD3D_MANAGER::NewFrame(txmD3D_MANAGER *this,float param_1)

{
  *(int *)(this + 0x1100) = *(int *)(this + 0x1100) + 1;
  txmMANAGER::NewFrame((txmMANAGER *)this,param_1);
  return;
}




/* from: drv:d3d_txm.cpp
   addr: 004B1CC0 */

void __thiscall txmD3D_MANAGER::SetSource(txmD3D_MANAGER *this,txmTEXTURE *param_1)

{
  txmD3D *this_00;
  d3dDRIVER *pdVar1;
  int iVar2;
  
  if (param_1 == (txmTEXTURE *)0x0) {
    (**(code **)(*(int *)this + 0x10))(*(undefined4 *)(this + 0x10f0));
    return;
  }
  if ((*(uint *)(param_1 + 4) & 0x1000000) == 0) {
    txmMANAGER::Load((txmMANAGER *)this,param_1,0);
  }
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    this_00 = *(txmD3D **)(param_1 + 0x74);
    iVar2 = *(int *)(this_00 + 0x10);
    if (iVar2 == -1) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20000;
    }
    else {
      if ((*(txmTEXTURE **)(&DAT_00612398 + iVar2 * 0x4c) == param_1) &&
         ((*(uint *)(param_1 + 4) & 0x20000) == 0)) {
        return;
      }
      *(txmTEXTURE **)(&DAT_00612398 + iVar2 * 0x4c) = param_1;
    }
    if (*(int *)(this_00 + 0x28) == 0) {
      iVar2 = (**(code **)(*(int *)this + 0x14))(param_1);
      if (iVar2 == 0) {
        return;
      }
    }
    else if ((*(uint *)(param_1 + 4) & 0x20000) != 0) {
      iVar2 = txmD3D::D3DCalcTexStageNmb(this_00);
      if (*(int *)(this_00 + 0x10) != iVar2) {
        (**(code **)(*(int *)this + 0x18))(param_1);
        iVar2 = (**(code **)(*(int *)this + 0x14))(param_1);
        if (iVar2 == 0) {
          return;
        }
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffdffff;
    }
    pdVar1 = d3dDriver;
    if (*(int *)(&DAT_00612394 + *(int *)(this_00 + 0x10) * 0x4c) != *(int *)(this_00 + 0x28)) {
      *(int *)(&DAT_00612394 + *(int *)(this_00 + 0x10) * 0x4c) = *(int *)(this_00 + 0x28);
      (**(code **)(**(int **)(pdVar1 + 0x77c) + 0x8c))
                (*(int **)(pdVar1 + 0x77c),*(undefined4 *)(this_00 + 0x10),
                 *(undefined4 *)(this_00 + 0x28));
      iVar2 = *(int *)(this_00 + 0x10);
      if (((byte)param_1[4] & 1) == 0) {
        if (*(int *)(&DAT_00612370 + iVar2 * 0x4c) != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar2,0xd,1);
          *(undefined4 *)(&DAT_00612370 + *(int *)(this_00 + 0x10) * 0x4c) = 1;
        }
      }
      else if (*(int *)(&DAT_00612370 + iVar2 * 0x4c) != 3) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                  (*(int **)(d3dDriver + 0x77c),iVar2,0xd,3);
        *(undefined4 *)(&DAT_00612370 + *(int *)(this_00 + 0x10) * 0x4c) = 3;
      }
      iVar2 = *(int *)(this_00 + 0x10);
      if (((byte)param_1[4] & 2) == 0) {
        if (*(int *)(&DAT_00612374 + iVar2 * 0x4c) != 1) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                    (*(int **)(d3dDriver + 0x77c),iVar2,0xe,1);
          *(undefined4 *)(&DAT_00612374 + *(int *)(this_00 + 0x10) * 0x4c) = 1;
        }
      }
      else if (*(int *)(&DAT_00612374 + iVar2 * 0x4c) != 3) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))
                  (*(int **)(d3dDriver + 0x77c),iVar2,0xe,3);
        *(undefined4 *)(&DAT_00612374 + *(int *)(this_00 + 0x10) * 0x4c) = 3;
      }
      if (((byte)param_1[4] & 0x38) != 0) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x2000000;
      }
    }
  }
  return;
}




/* from: drv:d3d_txm.cpp
   addr: 004B1EE0 */

int __thiscall txmD3D_MANAGER::HwInit(txmD3D_MANAGER *this)

{
  int iVar1;
  int iVar2;
  txmD3D *this_00;
  txmD3D_MANAGER *ptVar3;
  
  HwDestroyLost(this);
  iVar2 = 0;
  ptVar3 = this + 0x150;
  do {
    iVar1 = *(int *)ptVar3;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x48) == 0x20544558) {
        this_00 = (txmD3D *)(iVar1 + 0x78);
      }
      else if (*(int *)(iVar1 + 0x48) == 0x4c544558) {
        this_00 = (txmD3D *)(iVar1 + 0x228);
      }
      else {
        this_00 = (txmD3D *)0x0;
      }
      iVar1 = txmD3D::D3DCompress(this_00,*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x10);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = txmD3D::D3DCalcTexStageNmb(this_00);
      *(int *)(this_00 + 0x10) = iVar1;
    }
    iVar2 = iVar2 + 1;
    ptVar3 = ptVar3 + 4;
    if (999 < iVar2) {
      return 1;
    }
  } while( true );
}




/* from: drv:d3d_txm.cpp
   addr: 004B1F60 */

void __thiscall txmD3D_MANAGER::HwTerm(txmD3D_MANAGER *this)

{
  int iVar1;
  txmD3D_MANAGER *ptVar2;
  
  iVar1 = 1000;
  ptVar2 = this + 0x150;
  do {
    if (*(int *)ptVar2 != 0) {
      (**(code **)(*(int *)this + 0x18))(*(int *)ptVar2);
    }
    ptVar2 = ptVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}




/* from: drv:d3d_txm.cpp
   addr: 004B1F90 */

int __thiscall txmD3D_MANAGER::HwDownload(txmD3D_MANAGER *this,txmTEXTURE *param_1)

{
  int *piVar1;
  int iVar2;
  txmD3D *ptVar3;
  undefined4 *puVar4;
  txmD3D *this_00;
  
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    if ((*(uint *)(param_1 + 4) & 0x9000000) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x48) == 0x20544558) {
      this_00 = (txmD3D *)(param_1 + 0x78);
    }
    else if (*(int *)(param_1 + 0x48) == 0x4c544558) {
      this_00 = (txmD3D *)(param_1 + 0x228);
    }
    else {
      this_00 = (txmD3D *)0x0;
    }
    if (*(int *)(this_00 + 0x28) != 0) {
      *(undefined4 *)(this_00 + 0x14) = *(undefined4 *)(this + 0x1100);
      return 1;
    }
    iVar2 = txmD3D::D3DTryDownLoadHw(this_00,*(int *)(this + 0x1100));
    if (iVar2 == 0) {
      puVar4 = &DAT_00612520;
      do {
        ptVar3 = HwFindBestUnload(this,this_00);
        if (ptVar3 == (txmD3D *)0x0) {
          return 0;
        }
        *puVar4 = *(undefined4 *)ptVar3;
        if (0x6125e7 < (int)puVar4) {
          return 0;
        }
        puVar4 = puVar4 + 1;
        iVar2 = txmD3D::D3DReplaceTex(this_00,ptVar3,*(int *)(this + 0x1100));
        if (iVar2 != 0) {
          return 1;
        }
        *(uint *)(*(int *)ptVar3 + 4) = *(uint *)(*(int *)ptVar3 + 4) & 0xfbffffff;
        piVar1 = *(int **)(ptVar3 + 0x28);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        *(undefined4 *)(ptVar3 + 0x28) = 0;
        *(undefined4 *)(ptVar3 + 0x10) = 0xffffffff;
        iVar2 = txmD3D::D3DTryDownLoadHw(this_00,*(int *)(this + 0x1100));
      } while (iVar2 == 0);
    }
  }
  return 1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B2090 */

void __thiscall txmD3D_MANAGER::HwDelete(txmD3D_MANAGER *this,txmTEXTURE *param_1)

{
  int *piVar1;
  txmTEXTURE *ptVar2;
  
  if (*(int *)(param_1 + 0x48) == 0x20544558) {
    ptVar2 = param_1 + 0x78;
  }
  else if (*(int *)(param_1 + 0x48) == 0x4c544558) {
    ptVar2 = param_1 + 0x228;
  }
  else {
    ptVar2 = (txmTEXTURE *)0x0;
  }
  *(uint *)(*(int *)ptVar2 + 4) = *(uint *)(*(int *)ptVar2 + 4) & 0xfbffffff;
  piVar1 = *(int **)(ptVar2 + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int *)(ptVar2 + 0x28) = 0;
  *(int *)(ptVar2 + 0x10) = -1;
  return;
}




/* from: drv:d3d_txm.cpp
   addr: 004B20F0 */

txmD3D * __thiscall txmD3D_MANAGER::HwFindBestUnload(txmD3D_MANAGER *this,txmD3D *param_1)

{
  int iVar1;
  int iVar2;
  txmD3D *ptVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  txmD3D *ptVar7;
  uint uVar8;
  txmD3D *ptVar9;
  txmD3D_MANAGER *local_18;
  int local_14;
  uint local_10;
  int local_c;
  txmD3D *local_8;
  
  local_18 = this + 0x150;
  local_14 = 0x7fffffff;
  local_8 = (txmD3D *)0x0;
  local_10 = 0x7fffffff;
  local_c = 1000;
  uVar5 = 0x7fffffff;
  ptVar7 = (txmD3D *)0x0;
  do {
    iVar1 = *(int *)local_18;
    uVar6 = uVar5;
    ptVar3 = ptVar7;
    iVar2 = local_14;
    if ((((iVar1 != 0) && (uVar4 = *(uint *)(iVar1 + 4), (uVar4 & 0x4000000) != 0)) &&
        ((uVar4 & 0x40) == 0)) && ((uVar4 & 0x2000000) == 0)) {
      if (*(int *)(iVar1 + 0x48) == 0x20544558) {
        ptVar9 = (txmD3D *)(iVar1 + 0x78);
      }
      else if (*(int *)(iVar1 + 0x48) == 0x4c544558) {
        ptVar9 = (txmD3D *)(iVar1 + 0x228);
      }
      else {
        ptVar9 = (txmD3D *)0x0;
      }
      if (*(int *)(ptVar9 + 0x10) == *(int *)(param_1 + 0x10)) {
        iVar1 = *(int *)(ptVar9 + 0x14);
        uVar8 = *(int *)(ptVar9 + 0x18) - *(int *)(param_1 + 0x18);
        uVar4 = (int)uVar8 >> 0x1f;
        if (iVar1 < *(int *)(this + 0x1100)) {
          uVar6 = uVar8;
          ptVar3 = ptVar9;
          iVar2 = iVar1;
          if (((local_14 <= iVar1) &&
              (uVar6 = uVar5, ptVar3 = ptVar7, iVar2 = local_14, iVar1 == local_14)) &&
             ((int)((uVar8 ^ uVar4) - uVar4) <
              (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)))) {
            uVar6 = uVar8;
            ptVar3 = ptVar9;
          }
        }
        else if ((int)((uVar8 ^ uVar4) - uVar4) <
                 (int)((local_10 ^ (int)local_10 >> 0x1f) - ((int)local_10 >> 0x1f))) {
          local_10 = uVar8;
          local_8 = ptVar9;
        }
      }
    }
    local_14 = iVar2;
    local_18 = local_18 + 4;
    local_c = local_c + -1;
    uVar5 = uVar6;
    ptVar7 = ptVar3;
  } while (local_c != 0);
  if (ptVar3 == (txmD3D *)0x0) {
    ptVar3 = local_8;
  }
  return ptVar3;
}




/* from: drv:d3d_txm.cpp
   addr: 004B2220 */

void __thiscall txmD3D_MANAGER::HwDestroyLost(txmD3D_MANAGER *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  txmD3D_MANAGER *ptVar5;
  
  iVar3 = 0;
  ptVar5 = this + 0x150;
  do {
    iVar2 = *(int *)ptVar5;
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) & 0x8000000) != 0)) {
      if (*(int *)(iVar2 + 0x48) == 0x20544558) {
        iVar4 = iVar2 + 0x78;
      }
      else if (*(int *)(iVar2 + 0x48) == 0x4c544558) {
        iVar4 = iVar2 + 0x228;
      }
      else {
        iVar4 = 0;
      }
      if ((((*(uint *)(iVar2 + 4) & 0x4000000) != 0) &&
          (piVar1 = *(int **)(iVar4 + 0x28), piVar1 != (int *)0x0)) &&
         (iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1), iVar2 == -0x7789fe3e)) {
        iVar2 = (**(code **)(**(int **)(iVar4 + 0x28) + 0x6c))(*(int **)(iVar4 + 0x28));
        if (iVar2 != 0) {
          return;
        }
        (**(code **)(*(int *)this + 0x18))(*(int *)ptVar5);
      }
    }
    iVar3 = iVar3 + 1;
    ptVar5 = ptVar5 + 4;
  } while (iVar3 < 1000);
  return;
}




/* from: drv:d3d_txm.cpp
   addr: 004B22E0 */

void __thiscall txmD3D_TEX::UnloadDrv(txmD3D_TEX *this)

{
  int *piVar1;
  
  *(uint *)(*(int *)(this + 0x78) + 4) = *(uint *)(*(int *)(this + 0x78) + 4) & 0xfbffffff;
  piVar1 = *(int **)(this + 0xa0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x98);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x9c);
  *(undefined4 *)(this + 0x98) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(this + 0x9c) = 0;
  return;
}




/* from: drv:d3d_txm.cpp
   addr: 004B2350 */

int __thiscall
txmD3D_TEX::GetColor(txmD3D_TEX *this,int param_1,int param_2,pctPIXEL *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = txmD3D::D3DGetColor((txmD3D *)(this + 0x78),param_1,param_2,param_3);
  return iVar1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B2370 */

int __thiscall
txmD3D_TEX::SetColor(txmD3D_TEX *this,int param_1,int param_2,pctPIXEL *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = txmD3D::D3DSetColor((txmD3D *)(this + 0x78),param_1,param_2,param_3);
  return iVar1;
}




/* from: drv:d3d_txm.cpp
   addr: 004B2390
   addr: 004B2390 */

void * __thiscall txmD3D_TEX::_scalar_deleting_destructor_(txmD3D_TEX *this,uint param_1)

{
  int *piVar1;
  
  *(undefined ***)this = &_vftable_;
  *(uint *)(*(int *)(this + 0x78) + 4) = *(uint *)(*(int *)(this + 0x78) + 4) & 0xfbffffff;
  piVar1 = *(int **)(this + 0xa0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x98);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x9c);
  *(undefined4 *)(this + 0x98) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(this + 0x9c) = 0;
  txmTEXTURE::~txmTEXTURE((txmTEXTURE *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:d3d_txm.cpp
   addr: 004B2450 */

void __thiscall txmD3D_TEX_LAY::UnloadDrv(txmD3D_TEX_LAY *this)

{
  int *piVar1;
  
  *(uint *)(*(int *)(this + 0x228) + 4) = *(uint *)(*(int *)(this + 0x228) + 4) & 0xfbffffff;
  piVar1 = *(int **)(this + 0x250);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x248);
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x238) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x24c);
  *(undefined4 *)(this + 0x248) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(this + 0x24c) = 0;
  return;
}




/* from: drv:d3d_txm.cpp
   addr: 004B24D0
   addr: 004B24D0 */

void * __thiscall txmD3D_TEX_LAY::_vector_deleting_destructor_(txmD3D_TEX_LAY *this,uint param_1)

{
  int *piVar1;
  
  *(undefined ***)this = &_vftable_;
  *(uint *)(*(int *)(this + 0x228) + 4) = *(uint *)(*(int *)(this + 0x228) + 4) & 0xfbffffff;
  piVar1 = *(int **)(this + 0x250);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x248);
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x238) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x24c);
  *(undefined4 *)(this + 0x248) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(this + 0x24c) = 0;
  txmTEXTURE_LAY::~txmTEXTURE_LAY((txmTEXTURE_LAY *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

