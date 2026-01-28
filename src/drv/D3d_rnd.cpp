
/* from: drv:D3d_rnd.cpp
   addr: 004B33F0 */

void __thiscall d3dREND_DRIVER::ConfigureTransp(d3dREND_DRIVER *this,int param_1)

{
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    d3dDRIVER::ConfigureAlphaBlend(d3dDriver,param_1);
  }
  return;
}




/* from: drv:D3d_rnd.cpp
   addr: 004B3420 */

void __thiscall
d3dREND_DRIVER::Configure(d3dREND_DRIVER *this,rendCFG *param_1,rendCFG_PREP *param_2)

{
  clMSClientClass::LoginRcv_AccountCreationResult((clMSClientClass *)this,(int)param_1,(char *)0x0);
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    d3dDRIVER::ConfigureAlphaBlend(d3dDriver,*(int *)(param_1 + 0xb8));
    if ((*(uint *)(param_1 + 0xb8) & 0x800) == 0) {
      if (DAT_006121b4 != 0) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x89,0);
        DAT_006121b4 = 0;
      }
    }
    else if (DAT_006121b4 != 1) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x89,1);
      DAT_006121b4 = 1;
    }
    d3dDRIVER::ConfigureTexBlend(d3dDriver,param_1,(d3dCFG_PREP *)param_2);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd.cpp
   addr: 004B34C0 */

void __thiscall d3dREND_DRIVER::PreDrawScene(d3dREND_DRIVER *this)

{
  rendDRIVER *prVar1;
  float10 fVar2;
  
  if (DAT_005f6388 == 1) {
    camCAMERA::GetOrigin(gsCameraPtr,(m3dV *)&DAT_00612608);
  }
  else if (DAT_005f6388 == 2) {
    _DAT_00612608 = *(float *)(rendDrv + 0x40);
    DAT_0061260c = *(undefined4 *)(rendDrv + 0x44);
    DAT_00612610 = *(undefined4 *)(rendDrv + 0x48);
  }
  prVar1 = rendDrv;
  fVar2 = (float10)gsElapsedTime * (float10)_DAT_005f638c + (float10)_DAT_00612604;
  _DAT_00612604 = (float)fVar2;
  fVar2 = (float10)fsin(fVar2);
  *(float *)(rendDrv + 0x40) = (float)((float10)_DAT_00612608 + fVar2 * (float10)_DAT_00612614);
  *(undefined4 *)(prVar1 + 0x44) = DAT_0061260c;
  *(undefined4 *)(prVar1 + 0x48) = DAT_00612610;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd.cpp
   addr: 004B3560 */

int __fastcall d3drPrepareMaterial(objOBJ *param_1,mtlCOEFF *param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float local_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x18);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 0x24);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x28) + 0x62);
  local_28 = (float)(uVar2 & 0xff);
  fStack_24 = 0.0;
  fVar7 = (float)(((float10)(uint)local_28 + (float10)(uVar2 >> 8 & 0xff) +
                  (float10)(uVar2 >> 0x10 & 0xff)) * (float10)___real_3eaaaaab);
  fVar3 = ___real_00000000;
  if ((___real_41700000 <= fVar7) && (fVar3 = *(float *)(param_2 + 4), fVar7 <= ___real_437f0000)) {
    fVar3 = *(float *)(param_2 + 4) * (fVar7 - ___real_41700000) * ___real_3b888889;
  }
  *(float *)(param_2 + 4) = fVar3;
  if ((*(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 0x1f0) != 0) {
    local_10 = DAT_005f6398;
    if (*(animINST **)(param_1 + 0xbc) != (animINST *)0x0) {
      animINST::GetPos(*(animINST **)(param_1 + 0xbc),(m3dV *)&local_28);
      iVar1 = *(int *)(rendDrv + 0x84);
      local_28 = local_28 - *(float *)(iVar1 + 0x1f0);
      fStack_24 = fStack_24 - *(float *)(iVar1 + 500);
      local_20 = local_20 - *(float *)(iVar1 + 0x1f8);
      local_40 = local_28 * local_28 + fStack_24 * fStack_24 + local_20 * local_20;
      if (m3dSimdType == 0) {
        local_40 = local_40 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar8 = rsqrtss(ZEXT416((uint)local_40),ZEXT416((uint)local_40));
        fVar7 = auVar8._0_4_;
        local_40 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - local_40 * fVar7 * fVar7) *
                   local_40;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar4 = (ulonglong)(uint)local_40;
        uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
        uVar6 = PackedFloatingMUL(uVar5,uVar5);
        uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
        uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
        uVar5 = PackedFloatingMUL(uVar5,uVar4);
        local_40 = (float)uVar5;
        FastExitMediaState();
      }
      else {
        local_40 = SQRT(local_40);
      }
      fVar7 = local_40;
      if (DAT_005f6394 < local_40) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(float *)param_2 = local_10;
        return 0;
      }
      local_40 = DAT_005f6394;
      local_3c = DAT_005f6390;
      local_38 = 0.0;
      local_34 = 1.0;
      if (DAT_005f6394 < DAT_005f6390) {
        local_3c = DAT_005f6394;
        local_40 = DAT_005f6390;
        local_34 = 0.0;
        local_38 = 1.0;
      }
      fVar3 = local_34;
      if ((local_3c <= fVar7) && (fVar3 = local_38, fVar7 <= local_40)) {
        local_2c = local_38;
        local_28 = local_40;
        if (local_40 < local_3c) {
          local_28 = local_3c;
          local_2c = local_34;
          local_34 = local_38;
          local_3c = local_40;
        }
        fVar3 = ((fVar7 - local_3c) * (local_2c - local_34)) / (local_28 - local_3c) + local_34;
      }
      fVar7 = ___real_3f800000 - fVar3;
      *(float *)param_2 = fVar3 * *(float *)param_2 + local_10 * fVar7;
      *(float *)(param_2 + 4) = fVar7 * ___real_00000000 + fVar3 * *(float *)(param_2 + 4);
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd.cpp
   addr: 004B3880 */

int __thiscall
d3dREND_DRIVER::PreDrawObj(d3dREND_DRIVER *this,objOBJ *param_1,objSPLIT_ENTRY *param_2)

{
  int iVar1;
  _d3drPOST_ENTRY *this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  rendCFG *prVar8;
  rendMTL_TBL *prVar9;
  mtlCOEFF local_d4 [16];
  rendCFG local_c4 [196];
  
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) == 0) {
    return 1;
  }
  if (((500 < DAT_00899238) || (6999 < DAT_0083a68c)) || (6999 < DAT_00861790)) {
    DrawPostBuf(this);
  }
  if (((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x400000) != 0) &&
     ((((*(uint *)param_1 & 0x100) == 0 || (((byte)this[4] & 0x10) == 0)) ||
      ((*(uint *)(d3dDriver + 4) & 0x4000) != 0)))) {
    if (*(int *)(param_1 + 0xbc) == 0) {
      iVar7 = *(int *)(param_2 + 0x6c);
    }
    else {
      if (*(int *)(param_1 + 0xe8) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0xe8) + *(int *)(this + 0x78) * 4);
      }
      iVar7 = (uint)*(ushort *)(param_2 + 0x66) * *(int *)(iVar7 + 8) + *(int *)(iVar7 + 0xc);
    }
    prVar8 = (rendCFG *)(iVar7 + 8);
    *(undefined4 *)(iVar7 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x62);
    if ((*(uint *)(iVar7 + 0xc0) & 0x800) != 0) {
      iVar2 = d3drPrepareMaterial(param_1,local_d4);
      (**(code **)(*(int *)this + 0x68))(local_d4);
      if (iVar2 == 0) {
        if (DAT_006121fc != *(uint *)(iVar7 + 0xc4)) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                    (*(int **)(d3dDriver + 0x77c),0x8b,*(uint *)(iVar7 + 0xc4));
          DAT_006121fc = *(uint *)(iVar7 + 0xc4);
        }
        uVar3 = *(uint *)(iVar7 + 0xc0) | 0x40000000;
      }
      else {
        uVar3 = ftol();
        iVar2 = ftol();
        uVar4 = ftol();
        uVar5 = ftol();
        uVar3 = ((uVar3 & 0xff | iVar2 << 8) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
        if (DAT_006121fc != uVar3) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                    (*(int **)(d3dDriver + 0x77c),0x8b,uVar3);
          DAT_006121fc = uVar3;
        }
        uVar3 = *(uint *)(iVar7 + 0xc0) & 0xbfffffff;
      }
      *(uint *)(iVar7 + 0xc0) = uVar3;
    }
    if ((((*(uint *)param_1 & 2) == 0) || (((byte)param_1[0x24] & 0x20) != 0)) ||
       (((*(uint *)param_1 & 0x40) == 0 ||
        ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x40000000) != 0)))) {
      (**(code **)(*(int *)this + 0x50))(prVar8,iVar7);
    }
    else {
      *(undefined4 *)(iVar7 + 200) = 0;
    }
    iVar2 = DAT_00899238;
    if ((*(uint *)param_1 & 2) == 0) {
      if (999 < DAT_00899238) {
        return 2;
      }
      iVar1 = DAT_00899238 * 0xe4;
      (&DAT_00861870)[DAT_00899238 * 0x39] = 0;
      *(undefined4 *)(&DAT_00861874 + iVar1) = 0;
      (&DAT_00861878)[iVar2 * 0x39] = 0;
      if (((*(uint *)(param_1 + 0x24) & 0x20000) == 0) &&
         (RasterizeObj(this,param_1,param_2,prVar8), (*(uint *)(param_1 + 0x24) & 0x20000) == 0)) {
        if ((*(int *)(iVar7 + 0xbc) <= *(int *)(iVar7 + 200)) &&
           ((&DAT_00861870)[iVar2 * 0x39] == 0)) {
          return 2;
        }
        prVar9 = (rendMTL_TBL *)(&DAT_008617a4 + iVar2 * 0x39);
        for (iVar6 = 0x31; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)prVar9 = *(undefined4 *)prVar8;
          prVar8 = prVar8 + 4;
          prVar9 = prVar9 + 4;
        }
        rendMTL_TBL::UseNMtl((rendMTL_TBL *)(&DAT_008617a4 + iVar2 * 0x39),*(int *)(iVar7 + 200));
      }
      else if ((&DAT_00861870)[iVar2 * 0x39] == 0) {
        return 2;
      }
      DAT_00899238 = DAT_00899238 + 1;
      _d3drPOST_ENTRY::SetEntryData
                ((_d3drPOST_ENTRY *)(&_d3drPostBuf + iVar1),param_1,param_2,-1,-1);
      return 2;
    }
    if (((((byte)param_1[0x24] & 0x20) == 0) && ((*(uint *)param_1 & 0x40) != 0)) &&
       ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x40000000) == 0)) {
      if (999 < DAT_00899238) {
        return 2;
      }
      iVar7 = DAT_00899238 * 0xe4;
      this_00 = (_d3drPOST_ENTRY *)(&_d3drPostBuf + iVar7);
      (&DAT_00861870)[DAT_00899238 * 0x39] = 0;
      *(undefined4 *)(&DAT_00861874 + iVar7) = 0;
      (&DAT_00861878)[iVar2 * 0x39] = 0;
      _d3drPOST_ENTRY::SetEntryData(this_00,param_1,param_2,-1,-1);
      if (((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x10000) != 0) &&
         (((byte)*param_1 & 2) != 0)) {
        CallShaders(this,param_1,(uint)*(ushort *)(param_2 + 0x68),(uint)*(ushort *)(param_2 + 0x6a)
                    ,this_00);
      }
      FillPostBuf_Shaded(this,param_1,prVar8,this_00);
      return 2;
    }
    DrawObj_ShadedNoRevert(this,param_1,param_2,prVar8);
    return 2;
  }
  PrepareCFG_NotHTL(this,param_1,param_2,local_c4);
  (**(code **)(*(int *)this + 0x50))(local_c4,0);
  return 0;
}




/* from: drv:D3d_rnd.cpp
   addr: 004B3D10 */

int __thiscall
d3dREND_DRIVER::FillPostBuf_Shaded
          (d3dREND_DRIVER *this,objOBJ *param_1,rendCFG *param_2,_d3drPOST_ENTRY *param_3)

{
  uint uVar1;
  _d3drPOST_ENTRY *p_Var2;
  _d3drPOST_ENTRY *p_Var3;
  _d3drPOST_ENTRY *p_Var4;
  int iVar5;
  rendCFG *prVar6;
  rendCFG *prVar7;
  
  p_Var2 = param_3;
  if ((*(uint *)(param_1 + 0x24) & 0x20000) != 0) {
    if (*(int *)(param_3 + 0xd8) != 0) {
      DAT_00899238 = DAT_00899238 + 1;
      return 1;
    }
    return 0;
  }
  uVar1 = *(uint *)(param_3 + 0xe0);
  *(uint *)(param_3 + 0xe0) = uVar1 | 1;
  *(undefined4 *)(param_3 + 0xc0) = *(undefined4 *)(param_2 + 0xb4);
  iVar5 = 0;
  if (0 < *(int *)(param_2 + 0xb4)) {
    prVar7 = param_2 + 8;
    do {
      if (*(int *)prVar7 == 1) {
        iVar5 = 1;
        goto LAB_004b3d71;
      }
      iVar5 = iVar5 + 1;
      prVar7 = prVar7 + 0x24;
    } while (iVar5 < *(int *)(param_2 + 0xb4));
  }
  iVar5 = 0;
  *(uint *)(param_3 + 0xe0) = uVar1 | 3;
LAB_004b3d71:
  param_3 = (_d3drPOST_ENTRY *)0x0;
  if (0 < *(int *)(param_2 + 0xb4)) {
    p_Var3 = p_Var2 + iVar5 * 0x24 + 0xc;
    prVar7 = param_2;
    do {
      iVar5 = 9;
      prVar6 = prVar7;
      if (*(int *)(prVar7 + 8) == 1) {
        p_Var4 = p_Var3;
        p_Var3 = p_Var2 + 0xc;
      }
      else {
        p_Var4 = p_Var3 + 0x24;
      }
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)p_Var3 = *(undefined4 *)prVar6;
        prVar6 = prVar6 + 4;
        p_Var3 = p_Var3 + 4;
      }
      param_3 = param_3 + 1;
      prVar7 = prVar7 + 0x24;
      p_Var3 = p_Var4;
    } while ((int)param_3 < *(int *)(param_2 + 0xb4));
  }
  *(undefined4 *)(p_Var2 + 0xc4) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(p_Var2 + 200) = *(undefined4 *)(param_2 + 0xbc);
  DAT_00899238 = DAT_00899238 + 1;
  return 1;
}




/* from: drv:D3d_rnd.cpp
   addr: 004B3E20 */

int __thiscall
d3dREND_DRIVER::DrawFace
          (d3dREND_DRIVER *this,objOBJ *param_1,int param_2,int param_3,rendVERTEX *param_4,
          rendCLIP_INFO *param_5)

{
  if ((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) {
    StopUseHTL(this);
    DrawFace_NotShaded(this,param_1,param_2,param_3,param_4,param_5);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd.cpp
   addr: 004B3E60 */

int __thiscall
d3dREND_DRIVER::DrawFace_NotShaded
          (d3dREND_DRIVER *this,objOBJ *param_1,int param_2,int param_3,rendVERTEX *param_4,
          rendCLIP_INFO *param_5)

{
  float fVar1;
  d3dDRIVER *pdVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  rendVERTEX *prVar6;
  
  if (param_3 < 9) {
    if (999 < DAT_00899238) {
      return 1;
    }
    iVar5 = 0;
    if (0 < param_3) {
      prVar6 = param_4 + 0xc;
      do {
        if (*(int *)(d3dDriver + 0x1db0) != 0) {
          if (*(float *)prVar6 <= *(float *)(d3dDriver + 0x1db4)) {
            if (*(float *)(d3dDriver + 0x1db8) <= *(float *)prVar6) {
              iVar4 = ftol();
              fVar3 = (float)((iVar4 + 1) * -0x1000000);
            }
            else {
              iVar4 = ftol();
              fVar3 = (float)(iVar4 << 0x18);
            }
          }
          else {
            fVar3 = -1.7014118e+38;
          }
          *(float *)(prVar6 + 8) = fVar3;
        }
        fVar3 = *(float *)prVar6;
        fVar1 = ___real_00000000;
        if ((fVar3 <= *(float *)(d3dDriver + 0x1da0)) &&
           (fVar1 = ___real_3f7fff58, *(float *)(d3dDriver + 0x1da4) <= fVar3)) {
          fVar1 = fVar3 * *(float *)(d3dDriver + 0x1da8) + *(float *)(d3dDriver + 0x1dac);
        }
        *(float *)(prVar6 + -4) = fVar1;
        if (*(float *)(prVar6 + -0xc) < ___real_bdcccccd) {
          return 0;
        }
        if ((float)*(int *)(*(int *)(d3dDriver + 0x210) + 8) + ___real_3dcccccd <
            *(float *)(prVar6 + -0xc)) {
          return 0;
        }
        if (*(float *)(prVar6 + -8) < ___real_bdcccccd) {
          return 0;
        }
        if ((float)*(int *)(*(int *)(d3dDriver + 0x210) + 0xc) + ___real_3dcccccd <
            *(float *)(prVar6 + -8)) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        prVar6 = prVar6 + 0x30;
      } while (iVar5 < param_3);
    }
    pdVar2 = d3dDriver;
    *(int *)(d3dDriver + 0x228) = *(int *)(d3dDriver + 0x228) + param_3 + -2;
    (**(code **)(**(int **)(pdVar2 + 0x77c) + 100))
              (*(int **)(pdVar2 + 0x77c),6,0x3c4,param_4,param_3,0);
  }
  return 0;
}




/* from: drv:D3d_rnd.cpp
   addr: 004B4000 */

void __thiscall
d3dREND_DRIVER::DrawObj_ShadedNoRevert
          (d3dREND_DRIVER *this,objOBJ *param_1,objSPLIT_ENTRY *param_2,rendCFG *param_3)

{
  int iVar1;
  int iVar2;
  rendCFG *prVar3;
  rendMTL_TBL *prVar4;
  
  iVar1 = DAT_00899238;
  if (DAT_00899238 < 1000) {
    iVar2 = DAT_00899238 * 0xe4;
    (&DAT_00861870)[DAT_00899238 * 0x39] = 0;
    *(undefined4 *)(&DAT_00861874 + iVar2) = 0;
    (&DAT_00861878)[iVar1 * 0x39] = 0;
    _d3drPOST_ENTRY::SetEntryData((_d3drPOST_ENTRY *)(&_d3drPostBuf + iVar2),param_1,param_2,-1,-1);
    if ((*(uint *)(param_1 + 0x24) & 0x20000) == 0) {
      RasterizeObj(this,param_1,param_2,param_3);
    }
    if (((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x10000) != 0) &&
       (((byte)*param_1 & 2) != 0)) {
      CallShaders(this,param_1,(uint)*(ushort *)(param_2 + 0x68),(uint)*(ushort *)(param_2 + 0x6a),
                  (_d3drPOST_ENTRY *)(&_d3drPostBuf + iVar2));
    }
    if ((*(uint *)(param_1 + 0x24) & 0x20000) == 0) {
      if ((*(int *)(param_3 + 0xc0) < *(int *)(param_3 + 0xb4)) ||
         ((&DAT_00861870)[iVar1 * 0x39] != 0)) {
        prVar3 = param_3;
        prVar4 = (rendMTL_TBL *)(&DAT_008617a4 + iVar1 * 0x39);
        for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)prVar4 = *(undefined4 *)prVar3;
          prVar3 = prVar3 + 4;
          prVar4 = prVar4 + 4;
        }
        rendMTL_TBL::UseNMtl((rendMTL_TBL *)(&DAT_008617a4 + iVar1 * 0x39),*(int *)(param_3 + 0xc0))
        ;
        DAT_00899238 = DAT_00899238 + 1;
        return;
      }
    }
    else if ((&DAT_00861870)[iVar1 * 0x39] != 0) {
      DAT_00899238 = DAT_00899238 + 1;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd.cpp
   addr: 004B4110 */

void __thiscall
d3dREND_DRIVER::DrawShaderFace
          (d3dREND_DRIVER *this,_d3drPOST_ENTRY *param_1,int param_2,int param_3)

{
  int *piVar1;
  d3dDRIVER *pdVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  int iStack_100;
  int *piStack_fc;
  d3dREND_DRIVER *local_e8;
  undefined4 uStack_e4;
  undefined4 auStack_d8 [3];
  undefined4 uStack_cc;
  undefined4 uStack_c4;
  byte bStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  undefined1 local_c [12];
  
  local_e8 = this;
  StopUseHTL(this);
  piVar10 = (int *)(&DAT_0083a690 + (*(int *)(param_1 + 0xd4) + param_2) * 0x10);
  piVar1 = *(int **)(pteManager + *(int *)(*piVar10 + 0x68) * 4 + 4);
  iVar3 = (**(code **)(*piVar1 + 0x20))(param_3,local_c);
  if (iVar3 != 0) {
    uStack_14 = uStack_14 | 2;
    uStack_18 = 1;
    uStack_c4 = 0;
    auStack_d8[0] =
         (**(code **)(*piVar1 + 8))(param_1,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 8));
    uStack_cc = 0;
    if ((bStack_20 & 0x10) == 0) {
      (**(code **)(*piVar1 + 0x10))(&local_e8,param_1);
      iVar3 = ftol();
      uVar5 = ftol();
      uVar4 = ftol();
      uVar4 = ((iVar3 << 8 | uVar5 & 0xff) << 8 | uVar4 & 0xff) << 8;
      uVar5 = ftol();
      uStack_1c = uVar4 | uVar5 & 0xff;
      if (((bStack_20 & 0x40) != 0) && (uVar4 >> 0x18 != 0xff)) {
        uVar5 = ftol();
        uVar4 = ftol();
        uVar6 = ftol();
        uStack_1c = ((uVar5 | 0xffffff00) << 8 | uVar4 & 0xff) << 8 | uVar6 & 0xff;
      }
    }
    else {
      iVar3 = __d3drFaceDataBuf + -1;
      if (-1 < iVar3) {
        iVar8 = iVar3 * 4 + 0x44;
        puVar9 = (uint *)(&DAT_006b29ac + iVar3 * 0x30);
        iStack_100 = __d3drFaceDataBuf;
        do {
          uVar5 = *(uint *)(iVar8 + *piVar10);
          if (((bStack_20 & 0x40) != 0) && (uVar5 >> 0x18 != 0xff)) {
            uVar4 = ftol();
            uStack_e4 = 0;
            local_e8 = (d3dREND_DRIVER *)(uVar5 >> 8 & 0xff);
            uVar5 = ftol();
            uVar6 = ftol();
            uVar5 = ((uVar4 | 0xffffff00) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff;
          }
          *puVar9 = uVar5;
          iVar8 = iVar8 + -4;
          puVar9 = puVar9 + -0xc;
          iStack_100 = iStack_100 + -1;
        } while (iStack_100 != 0);
      }
    }
    (**(code **)(*piStack_fc + 0x50))(auStack_d8,0);
    iVar3 = __d3drFaceDataBuf + -1;
    if (-1 < iVar3) {
      puVar7 = (undefined4 *)(&DAT_006b29b8 + iVar3 * 0x30);
      do {
        iVar3 = iVar3 + -1;
        puVar7[-1] = *(undefined4 *)(*piVar10 + 0xc + iVar3 * 8);
        *puVar7 = *(undefined4 *)(*piVar10 + 0x10 + iVar3 * 8);
        puVar7 = puVar7 + -0xc;
      } while (-1 < iVar3);
    }
    iVar3 = __d3drFaceDataBuf;
    pdVar2 = d3dDriver;
    *(int *)(d3dDriver + 0x228) = *(int *)(d3dDriver + 0x228) + __d3drFaceDataBuf + -2;
    (**(code **)(**(int **)(pdVar2 + 0x77c) + 100))
              (*(int **)(pdVar2 + 0x77c),6,0x3c4,&DAT_006b299c,iVar3,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd.cpp
   addr: 004B44A0 */

void __thiscall
d3dREND_DRIVER::DrawShaderObj(d3dREND_DRIVER *this,_d3drPOST_ENTRY *param_1,int param_2)

{
  objOBJ *poVar1;
  pteSHADER *ppVar2;
  bool bVar3;
  int iVar4;
  txmTEXTURE *ptVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iStack_138;
  int local_130;
  int iStack_124;
  txmTEXTURE *aptStack_d4 [46];
  uint local_1c;
  uint uStack_18;
  undefined1 auStack_10 [16];
  
  bVar3 = false;
  if (*(int *)(param_1 + 0xd8) != 0) {
    poVar1 = *(objOBJ **)param_1;
    local_130 = 0;
    DAT_006b2990 = this;
    if (0 < *(int *)(param_1 + 0xdc)) {
      do {
        iVar11 = (*(int *)(param_1 + 0xd4) + local_130) * 0x10;
        piVar12 = (int *)(&DAT_0083a690 + iVar11);
        ppVar2 = *(pteSHADER **)(pteManager + *(int *)(&DAT_0083a694 + iVar11) * 4 + 4);
        iVar4 = (**(code **)(*(int *)ppVar2 + 0x20))(param_2,&local_1c);
        if (iVar4 != 0) {
          local_1c = local_1c |
                     (uint)((byte)((uint)*(undefined4 *)(param_1 + 0xc4) >> 8) & 0x20 | 0x40) << 8;
          ptVar5 = (txmTEXTURE *)
                   (**(code **)(*(int *)ppVar2 + 8))
                             (param_2,*(undefined4 *)param_1,
                              *(undefined2 *)(*(int *)(param_1 + 4) + 0x68));
          rendCFG::InitMtl1((rendCFG *)aptStack_d4,ptVar5);
          if (((byte)ppVar2[4] & 0x10) == 0) {
            if (__d3drSdrRendVertMng != 0) {
              if ((DAT_006b2984 & 2) != 0) {
                DAT_006b2984 = DAT_006b2984 | 0x10;
              }
              (**(code **)(*(int *)DAT_006b2990 + 0x50))(&DAT_006b28cc,0);
              RenderPrimitive(DAT_006b2990,&_d3drSdrVList,__d3drSdrRendVertMng,0x142);
              __d3drSdrRendVertMng = 0;
              DAT_006b2984 = 0xffffffff;
            }
            iVar4 = d3dMakeFaceIndGeo(poVar1,(uint)*(ushort *)(*(int *)(param_1 + 4) + 0x68),
                                      (uint)*(ushort *)(*(int *)(param_1 + 4) + 0x6a),
                                      (ushort *)&d3dIdxFaceInd,20000,(pteVERT_DATA *)*piVar12);
            if (iVar4 != 0) {
              iStack_124 = 0;
              if (0 < *(int *)(poVar1 + 0x14)) {
                iStack_138 = 0;
                puVar14 = &DAT_00899244;
                puVar13 = (undefined4 *)(*piVar12 + 5);
                do {
                  iVar11 = *(int *)(*(int *)(poVar1 + 0x28) + 0x20);
                  if ((iVar11 != 0) && ((*(byte *)(iVar11 + iStack_124) & 0x40) != 0)) {
                    puVar7 = (undefined4 *)(*(int *)(*(int *)(poVar1 + 0x28) + 0x40) + iStack_138);
                    puVar14[-1] = *puVar7;
                    *puVar14 = puVar7[1];
                    puVar14[1] = puVar7[2];
                    puVar14[3] = puVar13[-1];
                    puVar14[4] = *puVar13;
                    if ((local_1c & 0x10) != 0) {
                      uVar8 = puVar13[1];
                      if (((local_1c & 0x40) != 0) && (uVar8 >> 0x18 != 0xff)) {
                        uVar8 = ftol();
                        uVar9 = ftol();
                        uVar10 = ftol();
                        uVar8 = ((uVar8 | 0xffffff00) << 8 | uVar9 & 0xff) << 8 | uVar10 & 0xff;
                      }
                      puVar14[2] = uVar8;
                    }
                  }
                  iStack_124 = iStack_124 + 1;
                  iStack_138 = iStack_138 + 0xc;
                  puVar13 = (undefined4 *)((int)puVar13 + 0xd);
                  puVar14 = puVar14 + 6;
                } while (iStack_124 < *(int *)(poVar1 + 0x14));
              }
              uVar8 = uStack_18;
              if ((local_1c & 2) != 0) {
                (**(code **)(*(int *)ppVar2 + 0x10))(auStack_10,param_2);
                iVar11 = ftol();
                uVar8 = ftol();
                uVar9 = ftol();
                uVar9 = ((iVar11 << 8 | uVar8 & 0xff) << 8 | uVar9 & 0xff) << 8;
                uVar8 = ftol();
                uVar8 = uVar9 | uVar8 & 0xff;
                if (((local_1c & 0x40) != 0) && (uVar9 >> 0x18 != 0xff)) {
                  uVar8 = ftol();
                  uVar9 = ftol();
                  uVar10 = ftol();
                  uVar8 = ((uVar8 | 0xffffff00) << 8 | uVar9 & 0xff) << 8 | uVar10 & 0xff;
                }
              }
              uStack_18 = uVar8;
              (**(code **)(*(int *)this + 0x50))(aptStack_d4,0);
              if (!bVar3) {
                BeginRasterizeObj(this,poVar1,0);
                bVar3 = true;
              }
              d3dVBUF_MNG::RenderIndexedPrimitive
                        (&d3dVBMng,&_d3drSdrVList,*(int *)(poVar1 + 0x14),(ushort *)&d3dIdxFaceInd,
                         iVar4 / 3,0x142);
            }
          }
          else {
            if ((local_1c != DAT_006b2984) || (aptStack_d4[0] != DAT_006b28cc)) {
              if (__d3drSdrRendVertMng != 0) {
                if ((DAT_006b2984 & 2) != 0) {
                  DAT_006b2984 = DAT_006b2984 | 0x10;
                }
                (**(code **)(*(int *)DAT_006b2990 + 0x50))(&DAT_006b28cc,0);
                RenderPrimitive(DAT_006b2990,&_d3drSdrVList,__d3drSdrRendVertMng,0x142);
                __d3drSdrRendVertMng = 0;
              }
              DAT_006b2984 = local_1c;
              rendCFG::InitMtl1((rendCFG *)&DAT_006b28cc,aptStack_d4[0]);
            }
            iStack_138 = 0;
            if (0 < *(int *)(&DAT_0083a698 + iVar11)) {
              iVar4 = 0;
              do {
                iVar6 = _d3drSDR_REND_VERT::AddFace
                                  (&_d3drSdrRendVertMng,poVar1,ppVar2,param_2,
                                   (ptePOLY_DATA *)(*piVar12 + iVar4));
                if (iVar6 == 0) break;
                iStack_138 = iStack_138 + 1;
                iVar4 = iVar4 + 0x6c;
              } while (iStack_138 < *(int *)(&DAT_0083a698 + iVar11));
            }
            if (!bVar3) {
              BeginRasterizeObj(this,poVar1,0);
              bVar3 = true;
            }
          }
        }
        local_130 = local_130 + 1;
      } while (local_130 < *(int *)(param_1 + 0xdc));
    }
    if (__d3drSdrRendVertMng != 0) {
      if ((DAT_006b2984 & 2) != 0) {
        DAT_006b2984 = DAT_006b2984 | 0x10;
      }
      (**(code **)(*(int *)DAT_006b2990 + 0x50))(&DAT_006b28cc,0);
      RenderPrimitive(DAT_006b2990,&_d3drSdrVList,__d3drSdrRendVertMng,0x142);
      __d3drSdrRendVertMng = 0;
      DAT_006b2984 = 0xffffffff;
    }
    if (bVar3) {
      rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)poVar1);
    }
  }
  return;
}




/* from: drv:D3d_rnd.cpp
   addr: 004B4A60 */

int __thiscall
_d3drSDR_REND_VERT::AddFace
          (_d3drSDR_REND_VERT *this,objOBJ *param_1,pteSHADER *param_2,int param_3,
          ptePOLY_DATA *param_4)

{
  int *piVar1;
  d3dVERTEX_SDR **ppdVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  ptePOLY_DATA *ppVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  _d3drSDR_REND_VERT *unaff_EDI;
  uint local_20 [3];
  float fStack_14;
  float local_10;
  undefined4 uStack_c;
  
  ppVar10 = param_4;
  iVar8 = *(int *)(param_4 + 100);
  if ((iVar8 < 0) || (*(int *)(param_1 + 0x10) <= iVar8)) {
    return 0;
  }
  iVar11 = 2;
  ppdVar2 = &_d3drSdrVList + *(int *)this * 6;
  do {
    piVar1 = *(int **)(param_1 + 0x28);
    iVar9 = (uint)*(byte *)(piVar1 + 1) * iVar8 + iVar11;
    iVar11 = iVar11 + 2;
    puVar6 = (undefined4 *)(piVar1[0x10] + (uint)*(ushort *)(iVar9 + *piVar1) * 0xc);
    *ppdVar2 = (d3dVERTEX_SDR *)*puVar6;
    ppdVar2[1] = (d3dVERTEX_SDR *)puVar6[1];
    ppdVar2[2] = (d3dVERTEX_SDR *)puVar6[2];
    ppdVar2[4] = *(d3dVERTEX_SDR **)(param_4 + 4);
    ppdVar2[5] = *(d3dVERTEX_SDR **)(param_4 + 8);
    ppdVar2 = ppdVar2 + 6;
    param_4 = param_4 + 8;
  } while (iVar11 < 8);
  iVar8 = *(int *)this;
  if ((*(uint *)(this + 0xbc) & 0x10) == 0) {
    if ((*(uint *)(this + 0xbc) & 2) != 0) {
      puVar6 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x10))(local_20,param_3);
      local_20[2] = *puVar6;
      uStack_c = puVar6[3];
      fStack_14 = (float)param_2 * (float)puVar6[1];
      local_10 = (float)param_2 * (float)puVar6[2];
      uVar5 = ftol();
      iVar11 = ftol();
      uVar3 = ftol();
      uVar12 = ((uVar5 & 0xff | iVar11 << 8) << 8 | uVar3 & 0xff) << 8;
      uVar4 = ftol();
      uVar13 = uVar12 | uVar4 & 0xff;
      if ((((byte)this[0xbc] & 0x40) != 0) && (uVar12 >> 0x18 != 0xff)) {
        fStack_14 = 0.0;
        local_20[2] = uVar5 & 0xff;
        uVar5 = ftol();
        fStack_14 = 0.0;
        local_20[2] = uVar3 & 0xff;
        uVar3 = ftol();
        fStack_14 = 0.0;
        local_20[2] = uVar4 & 0xff;
        uVar4 = ftol();
        uVar13 = ((uVar5 | 0xffffff00) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
        this = unaff_EDI;
      }
      puVar7 = &DAT_0089924c + iVar8 * 6;
      iVar8 = 3;
      do {
        *puVar7 = uVar13;
        puVar7 = puVar7 + 6;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(int *)this = *(int *)this + 3;
    return 1;
  }
  puVar7 = &DAT_0089924c + iVar8 * 6;
  param_4 = (ptePOLY_DATA *)0x3;
  ppVar10 = ppVar10 + 0x44;
  do {
    uVar5 = *(uint *)ppVar10;
    if ((((byte)this[0xbc] & 0x40) != 0) && (uVar5 >> 0x18 != 0xff)) {
      uVar3 = ftol();
      local_20[1] = 0;
      local_20[0] = uVar5 >> 8 & 0xff;
      uVar4 = ftol();
      local_10 = (float)(uVar5 & 0xff);
      uStack_c = 0;
      uVar5 = ftol();
      uVar5 = ((uVar3 | 0xffffff00) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
    }
    *puVar7 = uVar5;
    puVar7 = puVar7 + 6;
    ppVar10 = ppVar10 + 4;
    param_4 = param_4 + -1;
  } while (param_4 != (ptePOLY_DATA *)0x0);
  *(int *)this = *(int *)this + 3;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd.cpp
   addr: 004B4DA0 */

void __thiscall d3dREND_DRIVER::DrawPostBuf(d3dREND_DRIVER *this)

{
  _d3drPOST_ENTRY *p_Var1;
  uint uVar2;
  d3dDRIVER *pdVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  rendCFG *prVar9;
  int *piVar10;
  int *piStack_100;
  int *piStack_fc;
  int iStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int iStack_ec;
  int *piStack_e8;
  int iStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int iStack_d4;
  rendCFG arStack_c4 [36];
  int aiStack_a0 [9];
  int aiStack_7c [27];
  undefined4 uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  if (((*(uint *)(d3dDriver + 4) & 0x1000000) != 0) && (DAT_00899238 != 0)) {
    if (DAT_00612188 != 0) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1c,0);
      DAT_00612188 = 0;
    }
    if (DAT_006121b4 != 0) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x89,0);
      DAT_006121b4 = 0;
    }
    iVar4 = DAT_0061215c;
    iStack_d4 = 0;
    if (0 < DAT_00899238) {
      piStack_fc = &DAT_00861858;
      do {
        iStack_e4 = 0;
        p_Var1 = (_d3drPOST_ENTRY *)(piStack_fc + -0x30);
        if (0 < *piStack_fc) {
          piStack_dc = piStack_fc + -0x24;
          iStack_f8 = 1;
          piStack_100 = piStack_fc + -0x22;
          piStack_e0 = piStack_fc + -0x1b;
          piStack_e8 = piStack_fc + -0x19;
          piStack_f0 = piStack_fc + -0x2b;
          piStack_f4 = piStack_fc + -0x2d;
          iStack_ec = 2;
          do {
            uVar2 = piStack_fc[1];
            uStack_8 = 0xffffffff;
            uStack_10 = 1;
            piVar6 = piStack_f4;
            prVar9 = arStack_c4;
            for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(int *)prVar9 = *piVar6;
              piVar6 = piVar6 + 1;
              prVar9 = prVar9 + 4;
            }
            uVar8 = uVar2 & 0x2000;
            uStack_c = uVar8 | 0x4000;
            switch(*piStack_f0) {
            case 0:
              uStack_8 = piStack_fc[2];
              if ((piStack_fc[8] & 1U) == 0) {
                uStack_c = uVar2 | 0x120;
                if (DAT_0061215c != 1) {
                  piVar6 = *(int **)(d3dDriver + 0x77c);
LAB_004b52c8:
                  (**(code **)(*piVar6 + 0x50))(piVar6,0xe,1);
                  DAT_0061215c = 1;
                }
              }
              else if ((piStack_fc[8] & 2U) == 0) {
                if ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x8000) == 0) {
                  uStack_c = uVar2 | 0x120;
                }
                else {
                  uStack_c = uVar2 | 0x60;
                }
                if (DAT_0061215c != 0) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                            (*(int **)(d3dDriver + 0x77c),0xe,0);
                  DAT_0061215c = 0;
                }
              }
              else {
                uStack_c = uVar2;
                if (DAT_0061215c != 1) {
                  piVar6 = *(int **)(d3dDriver + 0x77c);
                  goto LAB_004b52c8;
                }
              }
              if ((((*(int *)(d3dDriver + 0x238) < 3) || (*piStack_fc <= iStack_ec)) ||
                  (*piStack_100 != 2)) || (*piStack_e8 != 3)) {
                if (((1 < *(int *)(d3dDriver + 0x238)) && (iStack_f8 < *piStack_fc)) &&
                   ((*piStack_100 == 2 || (*piStack_100 == 3)))) {
                  uStack_10 = 2;
                  piVar6 = piStack_dc;
                  piVar10 = aiStack_a0;
                  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *piVar10 = *piVar6;
                    piVar6 = piVar6 + 1;
                    piVar10 = piVar10 + 1;
                  }
                  iStack_e4 = iStack_e4 + 1;
                  iStack_ec = iStack_ec + 1;
                  iStack_f8 = iStack_f8 + 1;
                  piStack_f4 = piStack_f4 + 9;
                  piStack_f0 = piStack_f0 + 9;
                  piStack_e8 = piStack_e8 + 9;
                  piStack_e0 = piStack_e0 + 9;
                  piStack_100 = piStack_100 + 9;
                  piStack_dc = piStack_dc + 9;
                }
              }
              else {
                uStack_10 = 3;
                piVar6 = piStack_dc;
                piVar10 = aiStack_a0;
                for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *piVar10 = *piVar6;
                  piVar6 = piVar6 + 1;
                  piVar10 = piVar10 + 1;
                }
                piVar6 = piStack_e0;
                piVar10 = aiStack_7c;
                for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *piVar10 = *piVar6;
                  piVar6 = piVar6 + 1;
                  piVar10 = piVar10 + 1;
                }
                iStack_e4 = iStack_e4 + 2;
                iStack_ec = iStack_ec + 2;
                iStack_f8 = iStack_f8 + 2;
                piStack_f4 = piStack_f4 + 0x12;
                piStack_f0 = piStack_f0 + 0x12;
                piStack_e8 = piStack_e8 + 0x12;
                piStack_e0 = piStack_e0 + 0x12;
                piStack_100 = piStack_100 + 0x12;
                piStack_dc = piStack_dc + 0x12;
              }
              (**(code **)(*(int *)this + 0x50))(arStack_c4,0);
              if (((**(uint **)p_Var1 & 0x4000) != 0) &&
                 ((*(byte *)(*(int *)(d3dDriver + 0x210) + 0x14) & 8) != 0)) {
                vidDRIVER::ToggleModeParam(vidDriver,0x100000,1);
                (**(code **)(*(int *)vidDriver + 0x50))
                          (0x44,*(undefined4 *)(rendDrv + 0x7c),0xffff,
                           *(undefined4 *)(rendDrv + 0x80));
              }
              if (piStack_fc[-0x2e] < 0) {
                RasterizeObj(this,*(objOBJ **)p_Var1,(objSPLIT_ENTRY *)piStack_fc[-0x2f],arStack_c4)
                ;
              }
              if (((**(uint **)p_Var1 & 0x4000) != 0) &&
                 ((*(byte *)(*(int *)(d3dDriver + 0x210) + 0x14) & 8) != 0)) {
                vidDRIVER::ToggleModeParam(vidDriver,0x100000,0);
              }
              break;
            case 1:
              if ((*(byte *)(piStack_fc + 8) & 1) == 0) {
                if ((*(uint *)(*(int *)(d3dDriver + 0x210) + 0x14) & 0x8000) == 0) {
                  uStack_c = uVar8 | 0x4120;
                }
                else {
                  uStack_c = uVar8 | 0x4060;
                }
                if (DAT_0061215c != 0) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                            (*(int **)(d3dDriver + 0x77c),0xe,0);
                  DAT_0061215c = 0;
                }
              }
              else if (DAT_0061215c != 1) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                          (*(int **)(d3dDriver + 0x77c),0xe,1);
                DAT_0061215c = 1;
              }
              (**(code **)(*(int *)this + 0x50))(arStack_c4,0);
              iVar7 = __d3drFaceDataBuf;
              pdVar3 = d3dDriver;
              if (piStack_fc[-0x2e] < 0) {
                RasterizeObj(this,*(objOBJ **)p_Var1,(objSPLIT_ENTRY *)piStack_fc[-0x2f],arStack_c4)
                ;
              }
              else {
                *(int *)(d3dDriver + 0x228) = *(int *)(d3dDriver + 0x228) + __d3drFaceDataBuf + -2;
                (**(code **)(**(int **)(pdVar3 + 0x77c) + 100))
                          (*(int **)(pdVar3 + 0x77c),6,0x3c4,&DAT_006b299c,iVar7,0);
              }
              if ((0 < piStack_fc[6]) && ((*(byte *)(piStack_fc + 8) & 1) != 0)) {
                if (DAT_0061215c != 0) {
                  (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                            (*(int **)(d3dDriver + 0x77c),0xe,0);
                  DAT_0061215c = 0;
                }
                if (piStack_fc[-0x2e] < 0) {
                  DrawShaderObj(this,p_Var1,0);
                }
                else {
                  iVar7 = 0;
                  if (0 < piStack_fc[6]) {
                    do {
                      DrawShaderFace(this,p_Var1,iVar7,0);
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < piStack_fc[6]);
                  }
                }
              }
              break;
            case 2:
            case 3:
              if (DAT_0061215c != 0) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                          (*(int **)(d3dDriver + 0x77c),0xe,0);
                DAT_0061215c = 0;
              }
              if ((*(uint *)(*(int *)p_Var1 + 0x24) & 0x1000) == 0) {
                uStack_c = uStack_c | 0xa0;
              }
              else {
                uStack_c = uStack_c | 0x60;
              }
              (**(code **)(*(int *)this + 0x50))(arStack_c4,0);
              if (piStack_fc[-0x2e] < 0) {
                RasterizeObj(this,*(objOBJ **)p_Var1,(objSPLIT_ENTRY *)piStack_fc[-0x2f],arStack_c4)
                ;
                break;
              }
              goto LAB_004b51e4;
            case 4:
              if (DAT_0061215c != 0) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                          (*(int **)(d3dDriver + 0x77c),0xe,0);
                DAT_0061215c = 0;
              }
              uVar2 = uStack_c | 0x120;
              if (*(char *)(*(int *)p_Var1 + 0x24) < '\0') {
                uStack_c = uStack_c | 0x128;
                bVar5 = ftol();
                goto LAB_004b50c6;
              }
              goto LAB_004b50e4;
            case 5:
              if (DAT_0061215c != 0) {
                (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))
                          (*(int **)(d3dDriver + 0x77c),0xe,0);
                DAT_0061215c = 0;
              }
              uStack_c = uStack_c | 0x60;
              bVar5 = ftol();
LAB_004b50c6:
              uStack_8 = (uint)bVar5;
              uStack_8 = ((uStack_8 | 0xffffff00) << 8 | uStack_8) << 8 | uStack_8;
              uVar2 = uStack_c;
LAB_004b50e4:
              uStack_c = uVar2;
              (**(code **)(*(int *)this + 0x50))(arStack_c4,0);
              if (piStack_fc[-0x2e] < 0) {
                RasterizeObj(this,*(objOBJ **)p_Var1,(objSPLIT_ENTRY *)piStack_fc[-0x2f],arStack_c4)
                ;
              }
              else {
LAB_004b51e4:
                iVar7 = __d3drFaceDataBuf;
                pdVar3 = d3dDriver;
                *(int *)(d3dDriver + 0x228) = *(int *)(d3dDriver + 0x228) + __d3drFaceDataBuf + -2;
                (**(code **)(**(int **)(pdVar3 + 0x77c) + 100))
                          (*(int **)(pdVar3 + 0x77c),6,0x3c4,&DAT_006b299c,iVar7,0);
              }
            }
            iStack_e4 = iStack_e4 + 1;
            iStack_ec = iStack_ec + 1;
            iStack_f8 = iStack_f8 + 1;
            piStack_f4 = piStack_f4 + 9;
            piStack_f0 = piStack_f0 + 9;
            piStack_e8 = piStack_e8 + 9;
            piStack_e0 = piStack_e0 + 9;
            piStack_100 = piStack_100 + 9;
            piStack_dc = piStack_dc + 9;
          } while (iStack_e4 < *piStack_fc);
        }
        if (DAT_0061215c != 0) {
          (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0xe,0);
          DAT_0061215c = 0;
        }
        if (0 < piStack_fc[6]) {
          if (piStack_fc[-0x2e] < 0) {
            DrawShaderObj(this,p_Var1,1);
          }
          else {
            iVar7 = 0;
            if (0 < piStack_fc[6]) {
              do {
                DrawShaderFace(this,p_Var1,iVar7,0);
                iVar7 = iVar7 + 1;
              } while (iVar7 < piStack_fc[6]);
            }
          }
        }
        iStack_d4 = iStack_d4 + 1;
        piStack_fc = piStack_fc + 0x39;
      } while (iStack_d4 < DAT_00899238);
    }
    if (DAT_0061215c != iVar4) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0xe,iVar4);
      DAT_0061215c = iVar4;
    }
    if (DAT_00612368 != 0) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x94))(*(int **)(d3dDriver + 0x77c),0,0xb,0);
      DAT_00612368 = 0;
    }
    DAT_00899238 = 0;
    DAT_00861790 = 0;
    DAT_00732bc8 = 0;
    DAT_0083a68c = 0;
    if (*(int *)(d3dDriver + 0x1db0) == 0) {
      if (DAT_00612188 != 0) {
        (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1c,0);
        DAT_00612188 = 0;
      }
    }
    else if (DAT_00612188 != 1) {
      (**(code **)(**(int **)(d3dDriver + 0x77c) + 0x50))(*(int **)(d3dDriver + 0x77c),0x1c,1);
      DAT_00612188 = 1;
      return;
    }
  }
  return;
}




/* from: drv:D3d_rnd.cpp
   addr: 004B56D0 */

rendVERTEX * __thiscall d3dREND_DRIVER::GetVListPtr(d3dREND_DRIVER *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00899238;
  iVar1 = DAT_00899238 * 0xe4;
  (&DAT_00861870)[DAT_00899238 * 0x39] = 0;
  *(undefined4 *)(&DAT_00861874 + iVar1) = 0;
  (&DAT_00861878)[iVar2 * 0x39] = 0;
  return (rendVERTEX *)&DAT_006b299c;
}




/* from: drv:D3d_rnd.cpp
   addr: 004B5700 */

int __thiscall
d3dREND_DRIVER::CallShaders
          (d3dREND_DRIVER *this,objOBJ *param_1,int param_2,int param_3,_d3drPOST_ENTRY *param_4)

{
  pteMANAGER *this_00;
  objOBJ *poVar1;
  int iVar2;
  pteSHADER *ppVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  poVar1 = param_1;
  iVar2 = pteMANAGER::GetNShader(pteManager,param_1);
  *(int *)(param_4 + 0xd4) = DAT_00861790;
  *(int *)(param_4 + 0xdc) = iVar2;
  param_1 = (objOBJ *)0x0;
  if (0 < iVar2) {
    do {
      if (((0x270e < DAT_00861790) || (0x9c3e < DAT_00732bc8)) || (0x270e < DAT_0083a68c)) break;
      ppVar3 = pteMANAGER::GetShader(pteManager,poVar1,(int)param_1);
      this_00 = pteManager;
      iVar6 = DAT_00861790 * 0x10;
      *(undefined4 *)(&DAT_0083a694 + iVar6) = *(undefined4 *)(ppVar3 + 0x80);
      pteMANAGER::StartShadeObj(this_00,ppVar3,poVar1);
      if (((byte)ppVar3[4] & 0x10) == 0) {
        iVar5 = 0;
        *(undefined4 *)(&DAT_0083a69c + iVar6) = 1;
        *(undefined4 *)(&DAT_0083a698 + iVar6) = 0;
        *(_d3drSDR_DATA_BUF **)(&DAT_0083a690 + iVar6) = &_d3drSdrDataBuf + DAT_00732bc8 * 0xd;
        if (0 < *(int *)(poVar1 + 0x14)) {
          do {
            if (((0x270e < DAT_00861790) || (0x9c3e < DAT_00732bc8)) || (0x270e < DAT_0083a68c))
            break;
            iVar4 = DAT_00732bc8 * 0xd;
            *(pteVERT_DATA *)(&_d3drSdrDataBuf + iVar4) = (pteVERT_DATA)0x0;
            if ((*(byte *)(*(int *)(*(int *)(poVar1 + 0x28) + 0x20) + iVar5) & 0x40) != 0) {
              pteMANAGER::ShadeVert
                        (pteManager,poVar1,iVar5,(int)param_1,
                         (pteVERT_DATA *)(&_d3drSdrDataBuf + iVar4));
            }
            DAT_00732bc8 = DAT_00732bc8 + 1;
            iVar5 = iVar5 + 1;
            *(int *)(&DAT_0083a698 + iVar6) = *(int *)(&DAT_0083a698 + iVar6) + 1;
          } while (iVar5 < *(int *)(poVar1 + 0x14));
        }
LAB_004b58ef:
        DAT_00861790 = DAT_00861790 + 1;
      }
      else {
        *(undefined4 *)(&DAT_0083a69c + iVar6) = 0;
        *(undefined4 *)(&DAT_0083a698 + iVar6) = 0;
        *(undefined **)(&DAT_0083a690 + iVar6) = &DAT_00732bcc + DAT_0083a68c * 0x6c;
        iVar5 = param_2;
        if (param_2 < param_3 + param_2) {
          do {
            if ((*(byte *)(*(int *)(*(int *)(poVar1 + 0x28) + 0x24) + iVar5) & 6) == 0) {
              if (((0x270e < DAT_00861790) || (0x9c3e < DAT_00732bc8)) || (0x270e < DAT_0083a68c))
              break;
              iVar4 = pteMANAGER::ShadeFaceWCS
                                (pteManager,poVar1,iVar5,(int)param_1,
                                 (ptePOLY_DATA *)(&DAT_00732bcc + DAT_0083a68c * 0x6c));
              if (iVar4 != 0) {
                DAT_0083a68c = DAT_0083a68c + 1;
                *(int *)(&DAT_0083a698 + iVar6) = *(int *)(&DAT_0083a698 + iVar6) + 1;
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_3 + param_2);
        }
        if (0 < *(int *)(&DAT_0083a698 + iVar6)) goto LAB_004b58ef;
        *(int *)(param_4 + 0xdc) = *(int *)(param_4 + 0xdc) + -1;
      }
      pteMANAGER::EndShadeObj(pteManager,ppVar3,poVar1);
      param_1 = param_1 + 1;
    } while ((int)param_1 < iVar2);
  }
  *(int *)(param_4 + 0xd8) = DAT_00861790 - *(int *)(param_4 + 0xd4);
  return 1;
}




/* from: drv:D3d_rnd.cpp
   addr: 004B5940 */

int __fastcall
d3dMakeFaceIndGeo(objOBJ *param_1,int param_2,int param_3,ushort *param_4,int param_5,
                 pteVERT_DATA *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int local_8;
  
  iVar1 = param_3 + param_2;
  local_8 = 0;
  iVar2 = 0;
  if (param_2 < iVar1) {
    do {
      if ((((byte)*param_1 & 2) == 0) ||
         ((*(byte *)(param_2 + *(int *)(*(int *)(param_1 + 0x28) + 0x24)) & 6) == 0)) {
        if (param_6 != (pteVERT_DATA *)0x0) {
          param_3 = 0;
          puVar4 = (ushort *)
                   ((uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) * param_2 + 2 +
                   **(int **)(param_1 + 0x28));
          iVar2 = 3;
          do {
            if (((byte)param_6[(uint)*puVar4 * 0xd] & 1) != 0) {
              param_3 = param_3 + 1;
            }
            puVar4 = puVar4 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          if (param_3 < 3) goto LAB_004b59fc;
        }
        iVar2 = 2;
        puVar4 = param_4;
        do {
          param_4 = puVar4 + 1;
          iVar3 = (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) * param_2 + iVar2;
          iVar2 = iVar2 + 2;
          *puVar4 = *(ushort *)(iVar3 + **(int **)(param_1 + 0x28));
          puVar4 = param_4;
        } while (iVar2 < 8);
        local_8 = local_8 + 1;
      }
LAB_004b59fc:
      param_2 = param_2 + 1;
      iVar2 = local_8;
    } while (param_2 < iVar1);
  }
  return iVar2 * 3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd.cpp
   addr: 004B5A20 */

int __thiscall
d3dREND_DRIVER::IsDetailTexConst(d3dREND_DRIVER *this,objOBJ *param_1,objMTL *param_2)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 in_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = _m3dVZero;
  local_c = DAT_00963740;
  local_8 = DAT_00963744;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_4 = 0;
  if (*(int *)(this + 0x84) == 0) {
    local_24 = _DAT_006125f4 * _DAT_006125f4 +
               _DAT_006125f8 * _DAT_006125f8 + _DAT_006125fc * _DAT_006125fc;
    if (m3dSimdType == 0) {
      local_24 = local_24 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar9 = rsqrtss(ZEXT416((uint)local_24),ZEXT416((uint)local_24));
      fVar6 = auVar9._0_4_;
      local_24 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_24 * fVar6 * fVar6) * local_24
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)local_24;
      uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      in_MM1 = PackedFloatingMUL(uVar4,uVar3);
      local_24 = (float)in_MM1;
      FastExitMediaState();
    }
    else {
      local_24 = SQRT(local_24);
    }
    local_24 = (float)(uint)(ABS(local_24) < _DAT_005db7c4);
    if ((float)(int)local_24 != ___real_00000000) {
      return 1;
    }
  }
  iVar2 = *(int *)(this + 0x84);
  if (iVar2 != 0) {
    _DAT_006125f4 = *(float *)(iVar2 + 0x1f0);
    _DAT_006125f8 = *(float *)(iVar2 + 500);
    _DAT_006125fc = *(float *)(iVar2 + 0x1f8);
    _DAT_00612600 = *(float *)(*(int *)(this + 0x84) + 0x144) * ___real_3acccccd;
  }
  fVar6 = (___real_40000000 / *(float *)(param_2 + 0xc) + ___real_40800000) * _DAT_00612600;
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    fVar7 = _DAT_006125f4 - *(float *)(iVar2 + 0x30);
    fVar1 = _DAT_006125f8 - *(float *)(iVar2 + 0x34);
    fVar8 = _DAT_006125fc - *(float *)(iVar2 + 0x38);
    fVar7 = fVar7 * fVar7 + fVar1 * fVar1 + fVar8 * fVar8;
    if (m3dSimdType == 0) {
      fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      param_2 = (objMTL *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)fVar7;
      uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      uVar4 = PackedFloatingMUL(uVar4,uVar3);
      param_2 = (objMTL *)uVar4;
      FastExitMediaState();
    }
    else {
      param_2 = (objMTL *)SQRT(fVar7);
    }
    if (fVar6 + *(float *)(*(int *)(param_1 + 0x28) + 0x3c) < (float)param_2) {
      return 1;
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0xc0) + 0x10))(&DAT_006125f4,fVar6,0,0,0);
  }
  else {
    iVar2 = abvBVOL::DistPoint(*(abvBVOL **)(*(int *)(param_1 + 0xbc) + 0x100),(m3dV *)&DAT_006125f4
                               ,fVar6,(cdtINFO *)&local_20);
  }
  if ((iVar2 != 2) && (iVar2 != 1)) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd.cpp
   addr: 004B5D10 */

void __thiscall
d3dREND_DRIVER::CalcBumpDistCoeff(d3dREND_DRIVER *this,objOBJ *param_1,objMTL *param_2)

{
  objOBJ *poVar1;
  objOBJ *poVar2;
  float fVar3;
  objMTL *poVar4;
  int iVar5;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  objOBJ *poStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  poVar4 = param_2;
  local_10 = _m3dVZero;
  local_8 = DAT_00963744;
  iVar5 = *(int *)(this + 0x84);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = DAT_00963740;
  local_4 = 0.0;
  if (iVar5 == 0) {
    *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
    return;
  }
  local_2c = *(undefined4 *)(iVar5 + 0x1f0);
  fVar3 = *(float *)(iVar5 + 0x144) * ___real_3acccccd;
  local_28 = *(undefined4 *)(iVar5 + 500);
  local_24 = *(undefined4 *)(iVar5 + 0x1f8);
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar5 = (**(code **)(*(int *)(param_1 + 0xc0) + 0x10))
                      (&local_2c,fVar3 * *(float *)(param_2 + 0x10),0,&local_38,0);
  }
  else {
    iVar5 = abvBVOL::DistPoint(*(abvBVOL **)(*(int *)(param_1 + 0xbc) + 0x100),(m3dV *)&local_2c,
                               fVar3 * *(float *)(param_2 + 0x10),(cdtINFO *)&local_20);
    local_38 = local_4;
  }
  if (iVar5 == 2) {
    *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
    _m3dCheckValid(*(float *)(param_2 + 0x14));
    return;
  }
  if (iVar5 != 1) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    _m3dCheckValid(0.0);
    return;
  }
  poVar1 = (objOBJ *)(fVar3 * *(float *)(param_2 + 0x10));
  fStack_3c = 1.0;
  poVar2 = (objOBJ *)(fVar3 * *(float *)(param_2 + 0xc));
  local_40 = 0.0;
  param_1 = poVar2;
  param_2 = (objMTL *)poVar1;
  if ((float)poVar1 < (float)poVar2) {
    fStack_3c = 0.0;
    local_40 = 1.0;
    param_1 = poVar1;
    param_2 = (objMTL *)poVar2;
  }
  if (local_38 < (float)param_1) {
    *(float *)(poVar4 + 0x14) = fStack_3c;
    _m3dCheckValid(*(float *)(poVar4 + 0x14));
    return;
  }
  if ((float)param_2 < local_38) {
    *(float *)(poVar4 + 0x14) = local_40;
    _m3dCheckValid(*(float *)(poVar4 + 0x14));
    return;
  }
  poStack_30 = (objOBJ *)param_2;
  fStack_34 = local_40;
  if ((float)param_2 < (float)param_1) {
    poStack_30 = param_1;
    fStack_34 = fStack_3c;
    param_1 = (objOBJ *)param_2;
    fStack_3c = local_40;
  }
  *(float *)(poVar4 + 0x14) =
       ((local_38 - (float)param_1) * (fStack_34 - fStack_3c)) /
       ((float)poStack_30 - (float)param_1) + fStack_3c;
  _m3dCheckValid(*(float *)(poVar4 + 0x14));
  return;
}

