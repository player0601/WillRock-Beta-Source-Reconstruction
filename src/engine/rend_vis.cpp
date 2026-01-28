
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:rend_vis.cpp
   addr: 004D89C0 */

void __thiscall
rendDRIVER::RenderSphere(rendDRIVER *this,camCAMERA *param_1,m3dSPHERE *param_2,ulong param_3)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar3 = param_3;
  local_1c = 0.0;
  do {
    fVar2 = local_1c + ___real_41a00000;
    param_3 = 0;
    do {
      fVar4 = (float10)_DAT_005dc1e0 * (float10)(float)param_3 * (float10)___real_3bb60b61;
      fVar5 = (float10)fsin(fVar4);
      fVar1 = (float)fVar5;
      fVar5 = (float10)_DAT_005dc1e0 * (float10)local_1c * (float10)___real_3bb60b61;
      fVar6 = (float10)fcos(fVar5);
      local_c = (float)(fVar6 * (float10)*(float *)(param_2 + 0x14) * (float10)fVar1 +
                       (float10)*(float *)(param_2 + 8));
      fVar5 = (float10)fsin(fVar5);
      local_8 = (float)(fVar5 * (float10)*(float *)(param_2 + 0x14) * (float10)fVar1 +
                       (float10)*(float *)(param_2 + 0xc));
      fVar4 = (float10)fcos(fVar4);
      fVar4 = fVar4 * (float10)*(float *)(param_2 + 0x14) + (float10)*(float *)(param_2 + 0x10);
      local_4 = (float)fVar4;
      fVar5 = (float10)fVar2 * (float10)_DAT_005dc1e0 * (float10)___real_3bb60b61;
      fVar6 = (float10)fcos(fVar5);
      local_18 = (float)(fVar6 * (float10)*(float *)(param_2 + 0x14) * (float10)fVar1 +
                        (float10)*(float *)(param_2 + 8));
      fVar5 = (float10)fsin(fVar5);
      local_14 = (float)(fVar5 * (float10)*(float *)(param_2 + 0x14) * (float10)fVar1 +
                        (float10)*(float *)(param_2 + 0xc));
      local_10 = (float)fVar4;
      RenderLine(this,param_1,(m3dV *)&local_c,(m3dV *)&local_18,uVar3);
      fVar4 = (float10)(float)param_3;
      param_3 = (ulong)(float)(fVar4 + (float10)___real_41a00000);
      fVar4 = (fVar4 + (float10)___real_41a00000) * (float10)_DAT_005dc1e0 *
              (float10)___real_3bb60b61;
      fVar5 = (float10)fsin(fVar4);
      fVar6 = (float10)_DAT_005dc1e0 * (float10)local_1c * (float10)___real_3bb60b61;
      fVar7 = (float10)fcos(fVar6);
      local_18 = (float)(fVar7 * fVar5 * (float10)*(float *)(param_2 + 0x14) +
                        (float10)*(float *)(param_2 + 8));
      fVar6 = (float10)fsin(fVar6);
      local_14 = (float)(fVar6 * fVar5 * (float10)*(float *)(param_2 + 0x14) +
                        (float10)*(float *)(param_2 + 0xc));
      fVar4 = (float10)fcos(fVar4);
      local_10 = (float)(fVar4 * (float10)*(float *)(param_2 + 0x14) +
                        (float10)*(float *)(param_2 + 0x10));
      RenderLine(this,param_1,(m3dV *)&local_c,(m3dV *)&local_18,uVar3);
    } while ((float)param_3 < ___real_43b40000);
    local_1c = fVar2;
  } while (fVar2 < ___real_43b40000);
  return;
}




/* from: engine:rend_vis.cpp
   addr: 004D8B50 */

void __thiscall
rendDRIVER::RenderLine
          (rendDRIVER *this,camCAMERA *param_1,m3dV *param_2,m3dV *param_3,ulong param_4)

{
  int iVar1;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  m3dV local_154 [8];
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  m3dV local_130 [4];
  undefined1 auStack_12c [4];
  undefined4 local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  ulong local_114;
  undefined1 auStack_fc [8];
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  ulong local_e4;
  undefined1 auStack_cc [8];
  rendCFG local_c4 [184];
  undefined4 local_c;
  ulong local_8;
  
  camCAMERA::TransformPoint(param_1,param_2,local_154);
  camCAMERA::TransformPoint(param_1,param_3,local_130);
  iVar1 = m3dClipLSegNearFar(local_154,local_130,*(float *)(param_1 + 0x80),
                             *(float *)(param_1 + 0x84));
  if (iVar1 != 1) {
    camCAMERA::ProjPoint(param_1,local_154,(m2dV *)&local_164);
    camCAMERA::ProjPoint(param_1,local_130,(m2dV *)&local_15c);
    local_148 = local_164;
    local_144 = local_160;
    local_140 = local_14c;
    local_13c = local_15c;
    local_138 = local_158;
    local_134 = local_128;
    iVar1 = m3xyClipLSegRect((m3dV *)&local_148,(m3dV *)&local_13c,(m2dPOLY *)(param_1 + 0x88),
                             (m3dV *)&local_170,(m3dV *)&local_17c);
    if (iVar1 != 1) {
      local_11c = local_174;
      local_ec = local_168;
      local_f4 = (local_170 - *(float *)(param_1 + 300)) * *(float *)(param_1 + 0x158) +
                 *(float *)(param_1 + 0x13c);
      local_e4 = param_4;
      local_114 = param_4;
      local_f0 = ((*(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x130)) - local_16c) *
                 *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x140);
      local_e8 = *(float *)(param_1 + 0x80) / local_168;
      local_124 = (local_17c - *(float *)(param_1 + 300)) * *(float *)(param_1 + 0x158) +
                  *(float *)(param_1 + 0x13c);
      local_120 = ((*(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x130)) - local_178) *
                  *(float *)(param_1 + 0x15c) + *(float *)(param_1 + 0x140);
      local_118 = *(float *)(param_1 + 0x80) / local_174;
      rendCFG::InitMtl1(local_c4,(txmTEXTURE *)0x0);
      local_c = 2;
      local_8 = param_4;
      (**(code **)(*(int *)this + 0x50))(local_c4,0);
      (**(code **)(*(int *)this + 0x44))(auStack_fc,auStack_12c,auStack_cc);
    }
  }
  return;
}




/* from: engine:rend_vis.cpp
   addr: 004D8D50 */

void __thiscall
rendDRIVER::RenderVector
          (rendDRIVER *this,camCAMERA *param_1,m3dV *param_2,m3dV *param_3,float param_4,
          ulong param_5)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_c = param_4 * *(float *)param_3 + *(float *)param_2;
  local_8 = param_4 * *(float *)(param_3 + 4) + *(float *)(param_2 + 4);
  local_4 = param_4 * *(float *)(param_3 + 8) + *(float *)(param_2 + 8);
  RenderLine(this,param_1,param_2,(m3dV *)&local_c,param_5);
  return;
}




/* from: engine:rend_vis.cpp
   addr: 004D8DC0 */

void __thiscall
rendDRIVER::RenderCross
          (rendDRIVER *this,camCAMERA *param_1,m3dV *param_2,float param_3,ulong param_4)

{
  float *pfVar1;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)&DAT_005f9a20;
  do {
    local_c = param_3 * pfVar1[-2] + *(float *)param_2;
    local_8 = param_3 * pfVar1[-1] + *(float *)(param_2 + 4);
    local_4 = param_3 * *pfVar1 + *(float *)(param_2 + 8);
    RenderLine(this,param_1,param_2,(m3dV *)&local_c,param_4);
    pfVar1 = pfVar1 + 3;
  } while ((int)pfVar1 < 0x5f9a68);
  return;
}




/* from: engine:rend_vis.cpp
   addr: 004D8E30 */

void __thiscall
rendDRIVER::RenderCS(rendDRIVER *this,camCAMERA *param_1,m3dMATR *param_2,float param_3)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  m3dMATR::GetOrigin(param_2,(m3dV *)&local_24);
  m3dMATR::GetAxisX(param_2,(m3dV *)&local_18);
  local_c = local_18 * param_3 + local_24;
  local_8 = local_14 * param_3 + local_20;
  local_4 = local_10 * param_3 + local_1c;
  RenderLine(this,param_1,(m3dV *)&local_24,(m3dV *)&local_c,0xffff0000);
  m3dMATR::GetAxisY(param_2,(m3dV *)&local_18);
  local_c = local_18 * param_3 + local_24;
  local_8 = local_14 * param_3 + local_20;
  local_4 = local_10 * param_3 + local_1c;
  RenderLine(this,param_1,(m3dV *)&local_24,(m3dV *)&local_c,0xff00ff00);
  m3dMATR::GetAxisZ(param_2,(m3dV *)&local_18);
  local_c = local_18 * param_3 + local_24;
  local_8 = local_14 * param_3 + local_20;
  local_4 = local_10 * param_3 + local_1c;
  RenderLine(this,param_1,(m3dV *)&local_24,(m3dV *)&local_c,0xff0000ff);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:rend_vis.cpp
   addr: 004D8F50 */

int __thiscall
rendDRIVER::RenderPoly
          (rendDRIVER *this,camCAMERA *param_1,int param_2,rendV3D *param_3,int param_4,
          rendCFG *param_5)

{
  rendDRIVER rVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  m3dV *pmVar6;
  rendV3D *prVar7;
  m3dPOLY *pmVar8;
  uint uVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  m3dPOLY *pmVar13;
  float fStack_a44;
  float fStack_a40;
  float fStack_a3c;
  undefined4 uStack_a38;
  float fStack_a34;
  float fStack_a30;
  float fStack_a2c;
  int iStack_a28;
  float *pfStack_a24;
  uint uStack_a20;
  uint uStack_a1c;
  uint uStack_a18;
  int iStack_a14;
  undefined4 uStack_a10;
  int iStack_a0c;
  undefined4 uStack_a08;
  uint uStack_a04;
  undefined4 uStack_a00;
  int iStack_9fc;
  undefined4 uStack_9f8;
  uint uStack_9f4;
  undefined4 uStack_9f0;
  int iStack_9ec;
  undefined4 uStack_9e8;
  uint uStack_9e4;
  undefined4 uStack_9e0;
  int iStack_9dc;
  undefined4 uStack_9d8;
  uint uStack_9d4;
  undefined4 uStack_9d0;
  int iStack_9cc;
  undefined4 uStack_9c8;
  uint uStack_9c4;
  undefined4 uStack_9c0;
  int iStack_9bc;
  undefined4 uStack_9b8;
  int iStack_9b4;
  undefined4 uStack_9b0;
  undefined4 local_9ac;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  float fStack_9a0;
  float fStack_99c;
  float fStack_998;
  float fStack_994;
  float fStack_990;
  float fStack_98c;
  float fStack_988;
  float fStack_984;
  float fStack_980;
  int iStack_97c;
  float local_978 [4];
  float fStack_968;
  float fStack_964;
  float fStack_960;
  float fStack_95c;
  float fStack_958;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  float fStack_87c;
  undefined4 uStack_878;
  float fStack_874;
  float fStack_870;
  undefined4 uStack_86c;
  float fStack_868;
  m2dPOLY amStack_7e4 [4];
  float afStack_7e0 [40];
  int iStack_740;
  float afStack_73c [60];
  m2dPOLY amStack_64c [164];
  m3dPOLY amStack_5a8 [244];
  m3dPOLY amStack_4b4 [244];
  rendVERTEX arStack_3c0 [4];
  float afStack_3bc [239];
  
  if ((*(uint *)(param_5 + 0xb8) & 0xc00000) == 0) {
    (**(code **)(*(int *)this + 0x50))(param_5,0);
  }
  if ((*(uint *)(param_5 + 0xb8) & 0x300000) == 0) {
    if (0 < param_2) {
      pmVar6 = (m3dV *)local_978;
      prVar7 = param_3 + 8;
      iVar12 = param_2;
      do {
        local_9ac = *(undefined4 *)(prVar7 + -8);
        uStack_9a8 = *(undefined4 *)(prVar7 + -4);
        uStack_9a4 = *(undefined4 *)prVar7;
        camCAMERA::TransformPoint(param_1,(m3dV *)&local_9ac,pmVar6);
        prVar7 = prVar7 + 0x18;
        pmVar6 = pmVar6 + 0xc;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  else if (0 < param_2) {
    pfVar2 = local_978 + 1;
    prVar7 = param_3 + 8;
    iVar12 = param_2;
    do {
      pfVar2[-1] = *(float *)(prVar7 + -8);
      *pfVar2 = *(float *)(prVar7 + -4);
      pfVar2[1] = *(float *)prVar7;
      pfVar2 = pfVar2 + 3;
      iVar12 = iVar12 + -1;
      prVar7 = prVar7 + 0x18;
    } while (iVar12 != 0);
  }
  iStack_97c = param_2;
  m3dGetPolyNormal((m3dPOLY *)&iStack_97c,(m3dV *)&fStack_a34);
  fStack_a34 = fStack_a34 * ___real_bf800000;
  fStack_a30 = fStack_a30 * ___real_bf800000;
  fStack_a2c = fStack_a2c * ___real_bf800000;
  if ((*(uint *)(param_5 + 0xb8) & 0x200000) == 0) {
    if (-_DAT_005dc1dc <
        local_978[1] * fStack_a30 + local_978[2] * fStack_a2c + local_978[0] * fStack_a34) {
LAB_004d9142:
      if ((((byte)this[4] & 1) != 0) && ((*(uint *)(param_5 + 0xb8) & 0x10000) == 0)) {
        return 1;
      }
      uVar3 = *(uint *)(this + 4) | 0x20000;
      goto LAB_004d90c5;
    }
  }
  else if (-_DAT_005dc1dc <
           fStack_a2c * *(float *)(param_1 + 0x80) + (fStack_a30 + fStack_a34) * ___real_00000000)
  goto LAB_004d9142;
  uVar3 = *(uint *)(this + 4) & 0xfffdffff;
LAB_004d90c5:
  *(uint *)(this + 4) = uVar3;
  if (param_4 == 0) {
    iVar12 = m3dClipPolyNearPlane
                       ((m3dPOLY *)&iStack_97c,(float)amStack_5a8,
                        *(m3dPOLY **)(*(int *)(this + 0x84) + 0x80));
    if (iVar12 == 1) {
      return 1;
    }
    if (((byte)this[4] & 0x10) != 0) {
      iVar12 = m3dClipPolyPlane(amStack_5a8,(m3dV *)(this + 0x24),(m3dV *)(this + 0x30),amStack_4b4)
      ;
      if (iVar12 == 1) {
        return 1;
      }
      pmVar8 = amStack_4b4;
      pmVar13 = amStack_5a8;
      for (iVar12 = 0x3d; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined4 *)pmVar13 = *(undefined4 *)pmVar8;
        pmVar8 = pmVar8 + 4;
        pmVar13 = pmVar13 + 4;
      }
    }
    if ((*(uint *)(param_5 + 0xb8) & 0x200000) == 0) {
      camCAMERA::ProjPoly(param_1,amStack_5a8,amStack_64c);
      iVar12 = m2dClipPolyRect(amStack_64c,(m2dPOLY *)(param_1 + 0x88),amStack_7e4);
      if (iVar12 == 1) {
        return 1;
      }
      iVar12 = camCAMERA::BackProjPoly
                         (param_1,amStack_7e4,(m3dPOLY *)&iStack_97c,(m3dPOLY *)&iStack_740,
                          (m3dV *)&fStack_a34,*(uint *)(this + 4) & 0x20000);
      if (iVar12 == 0) {
        return 1;
      }
    }
    else {
      camCAMERA::ProjPolyOrtho(amStack_5a8,amStack_64c);
      uStack_884 = *(undefined4 *)(param_1 + 0x13c);
      uStack_880 = *(undefined4 *)(param_1 + 0x140);
      fStack_87c = *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x13c);
      uStack_878 = *(undefined4 *)(param_1 + 0x140);
      uStack_888 = 4;
      fStack_870 = *(float *)(param_1 + 0x148) + *(float *)(param_1 + 0x140);
      uStack_86c = *(undefined4 *)(param_1 + 0x13c);
      fStack_874 = fStack_87c;
      fStack_868 = fStack_870;
      iVar12 = m2dClipPolyRect(amStack_64c,(m2dPOLY *)&uStack_888,amStack_7e4);
      if (iVar12 == 1) {
        return 1;
      }
      iVar12 = camCAMERA::BackProjPolyOrtho
                         (amStack_7e4,(m3dPOLY *)&iStack_97c,(m3dPOLY *)&iStack_740,
                          (m3dV *)&fStack_a34,*(uint *)(this + 4) & 0x20000);
      if (iVar12 == 0) {
        return 1;
      }
    }
  }
  else {
    if ((*(uint *)(param_5 + 0xb8) & 0x200000) == 0) {
      camCAMERA::ProjPoly(param_1,(m3dPOLY *)&iStack_97c,amStack_7e4);
    }
    else {
      camCAMERA::ProjPolyOrtho((m3dPOLY *)&iStack_97c,amStack_7e4);
    }
    iStack_740 = iStack_97c;
    pfVar2 = local_978;
    pfVar11 = afStack_73c;
    for (uVar3 = iStack_97c * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pfVar11 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar11 = pfVar11 + 1;
    }
    for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
      *(undefined1 *)pfVar11 = *(undefined1 *)pfVar2;
      pfVar2 = (float *)((int)pfVar2 + 1);
      pfVar11 = (float *)((int)pfVar11 + 1);
    }
  }
  if (((byte)this[4] & 2) == 0) {
    fStack_994 = local_978[3] - local_978[0];
    fStack_990 = fStack_968 - local_978[1];
    fStack_98c = fStack_964 - local_978[2];
    fStack_9a0 = fStack_960 - local_978[0];
    fStack_99c = fStack_95c - local_978[1];
    fStack_998 = fStack_958 - local_978[2];
  }
  if ((((*(uint *)(param_5 + 0xb8) & 0x10) == 0) &&
      (fVar10 = *(float *)(param_5 + 0xbc), fStack_a3c = fVar10,
      (*(uint *)(param_5 + 0xb8) & 0x40) != 0)) && ((uint)fVar10 >> 0x18 != 0xff)) {
    fStack_a3c = (float)((uint)fVar10 >> 0x10 & 0xff);
    uStack_a38 = 0;
    uVar3 = ftol();
    uStack_a38 = 0;
    fStack_a3c = (float)((uint)fVar10 >> 8 & 0xff);
    uVar4 = ftol();
    fStack_a3c = (float)((uint)fVar10 & 0xff);
    uStack_a38 = 0;
    uVar5 = ftol();
    fStack_a3c = (float)(((uVar3 | 0xffffff00) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff);
  }
  iStack_a28 = 0;
  if (0 < iStack_740) {
    pfVar2 = afStack_73c + 2;
    pfVar11 = afStack_3bc;
    do {
      if ((*(uint *)(param_5 + 0xb8) & 0x200000) == 0) {
        pfVar11[-1] = (afStack_7e0[iStack_a28 * 2] - *(float *)(param_1 + 300)) *
                      *(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x13c);
        fVar10 = ((*(float *)(param_1 + 0x138) - afStack_7e0[iStack_a28 * 2 + 1]) +
                 *(float *)(param_1 + 0x130)) * *(float *)(param_1 + 0x15c) +
                 *(float *)(param_1 + 0x140);
      }
      else {
        pfVar11[-1] = afStack_7e0[iStack_a28 * 2];
        fVar10 = afStack_7e0[iStack_a28 * 2 + 1];
      }
      *pfVar11 = fVar10;
      pfVar11[1] = *pfVar2;
      rVar1 = this[4];
      pfVar11[2] = *(float *)(param_1 + 0x80) / *pfVar2;
      if (((byte)rVar1 & 2) == 0) {
        fStack_988 = pfVar2[-2] - local_978[0];
        fStack_984 = pfVar2[-1] - local_978[1];
        fStack_980 = *pfVar2 - local_978[2];
        pfStack_a24 = pfVar11;
        m3dBasisCoord((m3dV *)&fStack_994,(m3dV *)&fStack_9a0,(m3dV *)&fStack_988,&fStack_a44,
                      &fStack_a40);
        if (((byte)param_5[0xb8] & 0x10) == 0) {
          pfVar11[3] = fStack_a3c;
        }
        else {
          uStack_a20 = (uint)(byte)param_3[0xd];
          uVar3 = *(ushort *)(param_3 + 0xe) & 0xff;
          iStack_9dc = (byte)param_3[0x26] - uVar3;
          uStack_9d8 = 0;
          uStack_a08 = 0;
          iStack_a0c = (byte)param_3[0x3e] - uVar3;
          uStack_a1c = *(ushort *)(param_3 + 0xe) & 0xff;
          uVar4 = (uint)(byte)param_3[0xf];
          uVar5 = *(uint *)(param_3 + 0xc) & 0xff;
          uStack_a18 = uVar4;
          uVar3 = ftol();
          iStack_9b4 = (byte)param_3[0x27] - uVar4;
          uStack_9b0 = 0;
          iStack_9fc = (byte)param_3[0x3f] - uVar4;
          uStack_9f8 = 0;
          iVar12 = ftol();
          iStack_9bc = (byte)param_3[0x25] - uStack_a20;
          uStack_9b8 = 0;
          uStack_9e8 = 0;
          iStack_9ec = (byte)param_3[0x3d] - uStack_a20;
          uVar4 = ftol();
          uVar9 = ((uVar3 & 0xff | iVar12 << 8) << 8 | uVar4 & 0xff) << 8;
          iStack_9cc = (*(uint *)(param_3 + 0x24) & 0xff) - uVar5;
          uStack_9c8 = 0;
          uStack_a10 = 0;
          iStack_a14 = (*(uint *)(param_3 + 0x3c) & 0xff) - uVar5;
          uStack_a00 = 0;
          uStack_a04 = uVar5;
          uVar5 = ftol();
          fVar10 = (float)(uVar9 | uVar5 & 0xff);
          if ((((byte)param_5[0xb8] & 0x40) != 0) && (uVar9 = uVar9 >> 0x18, uVar9 != 0xff)) {
            uStack_9f0 = 0;
            uStack_9e0 = 0;
            uStack_9f4 = uVar9;
            uStack_9e4 = uVar3 & 0xff;
            uVar3 = ftol();
            uStack_9d0 = 0;
            uStack_9d4 = uVar4 & 0xff;
            uVar4 = ftol();
            uStack_9c0 = 0;
            uStack_9c4 = uVar5 & 0xff;
            uVar5 = ftol();
            fVar10 = (float)(((uVar3 | 0xffffff00) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff);
          }
          pfStack_a24[3] = fVar10;
          pfVar11 = pfStack_a24;
        }
        if (*(int *)param_5 != 0) {
          pfVar11[5] = (*(float *)(param_3 + 0x40) - *(float *)(param_3 + 0x10)) * fStack_a40 +
                       (*(float *)(param_3 + 0x28) - *(float *)(param_3 + 0x10)) * fStack_a44 +
                       *(float *)(param_3 + 0x10);
          pfVar11[6] = (*(float *)(param_3 + 0x44) - *(float *)(param_3 + 0x14)) * fStack_a40 +
                       (*(float *)(param_3 + 0x2c) - *(float *)(param_3 + 0x14)) * fStack_a44 +
                       *(float *)(param_3 + 0x14);
        }
      }
      iStack_a28 = iStack_a28 + 1;
      pfVar2 = pfVar2 + 3;
      pfVar11 = pfVar11 + 0xc;
      pfStack_a24 = pfVar11;
    } while (iStack_a28 < iStack_740);
  }
  if (((*(uint *)(param_5 + 0xb8) & 0x20) != 0) && ((*(uint *)(param_5 + 0xb8) & 0x800000) != 0)) {
    rnsMNG::StorePoly((rnsMNG *)(this + 0x8c),param_2,arStack_3c0,param_5);
    return 1;
  }
  iVar12 = (**(code **)(*(int *)this + 0x40))(iStack_740,arStack_3c0,param_5);
  return iVar12;
}




/* from: engine:rend_vis.cpp
   addr: 004D9940 */

int __thiscall
rendDRIVER::RenderPoly
          (rendDRIVER *this,camCAMERA *param_1,m3dPOLY *param_2,int param_3,rendCFG *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  m3dPOLY *pmVar3;
  int iVar4;
  rendV3D local_1e0 [4];
  undefined4 local_1dc [119];
  
  iVar2 = *(int *)param_2;
  if (0 < iVar2) {
    puVar1 = local_1dc;
    pmVar3 = param_2 + 8;
    iVar4 = iVar2;
    do {
      puVar1[-1] = *(undefined4 *)(pmVar3 + -4);
      *puVar1 = *(undefined4 *)pmVar3;
      puVar1[1] = *(undefined4 *)(pmVar3 + 4);
      puVar1[4] = 0;
      puVar1[3] = 0;
      pmVar3 = pmVar3 + 0xc;
      puVar1 = puVar1 + 6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar2 = RenderPoly(this,param_1,iVar2,local_1e0,param_3,param_4);
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:rend_vis.cpp
   addr: 004D99B0 */

int __thiscall
rendDRIVER::RenderPolyCompat
          (rendDRIVER *this,camCAMERA *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,rendVERTEX *param_7,rendCFG *param_8)

{
  rendDRIVER rVar1;
  rendVERTEX *prVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uStack_850;
  float fStack_848;
  float fStack_844;
  rendDRIVER *local_840;
  float fStack_83c;
  float *pfStack_838;
  int iStack_834;
  float fStack_830;
  float fStack_82c;
  float fStack_828;
  float fStack_824;
  uint uStack_820;
  undefined4 uStack_81c;
  uint uStack_818;
  undefined4 uStack_814;
  uint uStack_810;
  undefined4 uStack_80c;
  int iStack_808;
  undefined4 uStack_804;
  int iStack_800;
  undefined4 uStack_7fc;
  uint uStack_7f8;
  undefined4 uStack_7f4;
  uint uStack_7f0;
  undefined4 uStack_7ec;
  uint uStack_7e8;
  undefined4 uStack_7e4;
  uint uStack_7e0;
  undefined4 uStack_7dc;
  int iStack_7d8;
  undefined4 uStack_7d4;
  uint uStack_7d0;
  undefined4 uStack_7cc;
  uint uStack_7c8;
  undefined4 uStack_7c4;
  int iStack_7c0;
  undefined4 uStack_7bc;
  float fStack_7b8;
  float fStack_7b4;
  float fStack_7b0;
  float fStack_7ac;
  float fStack_7a8;
  float fStack_7a4;
  float fStack_7a0;
  float fStack_79c;
  float fStack_798;
  int iStack_794;
  float local_790;
  float local_78c;
  float local_788;
  float fStack_784;
  float fStack_780;
  float fStack_77c;
  float fStack_778;
  float fStack_774;
  float fStack_770;
  undefined4 uStack_6a0;
  float fStack_69c;
  float fStack_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float fStack_688;
  float fStack_684;
  float fStack_680;
  float fStack_600;
  float afStack_5fc [41];
  m2dPOLY amStack_558 [4];
  undefined4 auStack_554 [40];
  int aiStack_4b4 [3];
  float afStack_4a8 [58];
  rendVERTEX arStack_3c0 [4];
  undefined4 auStack_3bc [239];
  
  local_840 = this;
  if ((*(uint *)(param_8 + 0xb8) & 0xc00000) == 0) {
    (**(code **)(*(int *)this + 0x50))(param_8,0);
  }
  iVar6 = 0;
  if (0 < param_6) {
    pfVar7 = &local_78c;
    prVar2 = param_7 + 4;
    do {
      iVar6 = iVar6 + 1;
      pfVar7[-1] = *(float *)(prVar2 + -4);
      *pfVar7 = *(float *)prVar2;
      pfVar7[1] = *(float *)(prVar2 + 4);
      (&fStack_600)[iVar6 * 2] = *(float *)(prVar2 + -4);
      afStack_5fc[iVar6 * 2] = *(float *)prVar2;
      pfVar7 = pfVar7 + 3;
      prVar2 = prVar2 + 0x30;
    } while (iVar6 < param_6);
  }
  iStack_794 = param_6;
  afStack_5fc[0] = (float)param_6;
  m3dGetPolyNormal((m3dPOLY *)&iStack_794,(m3dV *)&fStack_830);
  fStack_830 = fStack_830 * ___real_bf800000;
  fStack_82c = fStack_82c * ___real_bf800000;
  fStack_828 = fStack_828 * ___real_bf800000;
  if ((fStack_82c + fStack_830) * ___real_00000000 + fStack_828 <= -_DAT_005dc1dc) {
    uVar3 = *(uint *)(this + 4) & 0xfffdffff;
  }
  else {
    if ((((byte)this[4] & 1) != 0) && ((*(uint *)(param_8 + 0xb8) & 0x10000) == 0)) {
      return 1;
    }
    uVar3 = *(uint *)(this + 4) | 0x20000;
  }
  fStack_69c = (float)param_2;
  fStack_698 = (float)param_3;
  *(uint *)(this + 4) = uVar3;
  fStack_694 = (float)(param_2 + param_4);
  uStack_850 = param_3 + param_5;
  uStack_6a0 = 4;
  fStack_688 = (float)(int)uStack_850;
  fStack_690 = fStack_698;
  fStack_68c = fStack_694;
  fStack_684 = fStack_69c;
  fStack_680 = fStack_688;
  iVar6 = m2dClipPolyRect((m2dPOLY *)afStack_5fc,(m2dPOLY *)&uStack_6a0,amStack_558);
  if (iVar6 == 1) {
    return 1;
  }
  if (iVar6 == 0) {
    iVar6 = camCAMERA::BackProjPolyOrtho
                      (amStack_558,(m3dPOLY *)&iStack_794,(m3dPOLY *)aiStack_4b4,(m3dV *)&fStack_830
                       ,*(uint *)(this + 4) & 0x20000);
    if (iVar6 == 0) {
      return 1;
    }
  }
  else {
    piVar8 = &iStack_794;
    piVar11 = aiStack_4b4;
    for (iVar6 = 0x3d; this = local_840, iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar11 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar11 = piVar11 + 1;
    }
  }
  if (((byte)this[4] & 2) == 0) {
    fStack_7ac = fStack_784 - local_790;
    fStack_7a8 = fStack_780 - local_78c;
    fStack_7a4 = fStack_77c - local_788;
    fStack_7a0 = fStack_778 - local_790;
    fStack_79c = fStack_774 - local_78c;
    fStack_798 = fStack_770 - local_788;
  }
  uVar3 = *(uint *)(param_8 + 0xb8);
  if ((uVar3 & 0x10) == 0) {
    if ((uVar3 & 0x10000000) == 0) {
      uStack_850 = *(uint *)(param_8 + 0xbc);
      if (((uVar3 & 0x40) != 0) && (uStack_850 >> 0x18 != 0xff)) {
        uVar3 = ftol();
        uVar4 = ftol();
        uVar5 = ftol();
        uStack_850 = ((uVar3 | 0xffffff00) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
        this = local_840;
      }
    }
    else {
      uStack_850 = *(uint *)(param_8 + 0xbc);
    }
  }
  iStack_834 = 0;
  if (0 < aiStack_4b4[0]) {
    pfVar7 = afStack_4a8;
    puVar12 = auStack_3bc;
    do {
      puVar12[-1] = auStack_554[iStack_834 * 2];
      *puVar12 = auStack_554[iStack_834 * 2 + 1];
      puVar12[1] = *pfVar7;
      rVar1 = local_840[4];
      puVar12[2] = *(float *)(param_1 + 0x80) / *pfVar7;
      if (((byte)rVar1 & 2) == 0) {
        fStack_7b8 = pfVar7[-2] - local_790;
        fStack_7b4 = pfVar7[-1] - local_78c;
        fStack_7b0 = *pfVar7 - local_788;
        pfStack_838 = pfVar7;
        m3dBasisCoord((m3dV *)&fStack_7ac,(m3dV *)&fStack_7a0,(m3dV *)&fStack_7b8,&fStack_848,
                      &fStack_844);
        if (((byte)param_8[0xb8] & 0x10) == 0) {
          puVar12[3] = uStack_850;
        }
        else {
          uStack_7d4 = 0;
          iStack_7d8 = (uint)(byte)param_7[0x42] - (*(ushort *)(param_7 + 0x12) & 0xff);
          uStack_804 = 0;
          iStack_808 = (uint)(byte)param_7[0x72] - (*(ushort *)(param_7 + 0x12) & 0xff);
          uVar3 = (uint)(byte)param_7[0x11];
          uStack_80c = 0;
          uStack_810 = (byte)param_7[0x41] - uVar3;
          uStack_7d0 = (byte)param_7[0x71] - uVar3;
          uStack_7cc = 0;
          uStack_820 = *(uint *)(param_7 + 0x10) & 0xff;
          uStack_7fc = 0;
          iStack_800 = (*(uint *)(param_7 + 0x70) & 0xff) - uStack_820;
          iStack_7c0 = (*(uint *)(param_7 + 0x40) & 0xff) - uStack_820;
          uStack_7bc = 0;
          uStack_81c = 0;
          uVar4 = (uint)(byte)param_7[0x13];
          uStack_7e8 = (byte)param_7[0x43] - uVar4;
          uStack_7e4 = 0;
          fStack_824 = (float)uStack_7d0 * fStack_844 + (float)uStack_810 * fStack_848 +
                       (float)uVar3;
          uStack_7c4 = 0;
          uStack_7c8 = (byte)param_7[0x73] - uVar4;
          fStack_83c = (float)uStack_7c8 * fStack_844 + (float)uStack_7e8 * fStack_848 +
                       (float)uVar4;
          if ((*(uint *)(param_8 + 0xb8) & 0x10000000) == 0) {
            uVar3 = ftol();
            iVar6 = ftol();
            uVar4 = ftol();
            uVar9 = ((uVar3 & 0xff | iVar6 << 8) << 8 | uVar4 & 0xff) << 8;
            uVar5 = ftol();
            uVar10 = uVar9 | uVar5 & 0xff;
            if ((((byte)param_8[0xb8] & 0x40) != 0) && (uVar9 = uVar9 >> 0x18, uVar9 != 0xff)) {
              uStack_7f4 = 0;
              uStack_7ec = 0;
              uStack_7f8 = uVar9;
              uStack_7f0 = uVar3 & 0xff;
              uVar3 = ftol();
              uStack_7dc = 0;
              uStack_7e0 = uVar4 & 0xff;
              uVar4 = ftol();
              uStack_814 = 0;
              uStack_818 = uVar5 & 0xff;
              uVar5 = ftol();
              uVar10 = ((uVar3 | 0xffffff00) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
            }
            puVar12[3] = uVar10;
            pfVar7 = pfStack_838;
          }
          else {
            uVar3 = ftol();
            iVar6 = ftol();
            uVar4 = ftol();
            uVar5 = ftol();
            puVar12[3] = ((uVar3 & 0xff | iVar6 << 8) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
            pfVar7 = pfStack_838;
          }
        }
        if (*(int *)param_8 != 0) {
          puVar12[5] = (*(float *)(param_7 + 0x48) - *(float *)(param_7 + 0x18)) * fStack_848 +
                       (*(float *)(param_7 + 0x78) - *(float *)(param_7 + 0x18)) * fStack_844 +
                       *(float *)(param_7 + 0x18);
          puVar12[6] = (*(float *)(param_7 + 0x4c) - *(float *)(param_7 + 0x1c)) * fStack_848 +
                       (*(float *)(param_7 + 0x7c) - *(float *)(param_7 + 0x1c)) * fStack_844 +
                       *(float *)(param_7 + 0x1c);
        }
      }
      iStack_834 = iStack_834 + 1;
      pfVar7 = pfVar7 + 3;
      puVar12 = puVar12 + 0xc;
      this = local_840;
      pfStack_838 = pfVar7;
    } while (iStack_834 < aiStack_4b4[0]);
  }
  if (((*(uint *)(param_8 + 0xb8) & 0x20) != 0) && ((*(uint *)(param_8 + 0xb8) & 0x800000) != 0)) {
    rnsMNG::StorePoly((rnsMNG *)(this + 0x8c),param_6,arStack_3c0,param_8);
    return 1;
  }
  iVar6 = (**(code **)(*(int *)this + 0x40))(aiStack_4b4[0],arStack_3c0,param_8);
  return iVar6;
}




/* from: engine:rend_vis.cpp
   addr: 004DA1B0 */

int __thiscall
rendDRIVER::RenderPolyCompat
          (rendDRIVER *this,camCAMERA *param_1,int param_2,rendVERTEX *param_3,rendCFG *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  rendVERTEX *prVar4;
  int iVar5;
  int local_28;
  
  uVar1 = *(uint *)(param_4 + 0xb8);
  if ((uVar1 & 0x10000000) == 0) {
    if ((uVar1 & 0x10) == 0) {
      uVar2 = *(uint *)(param_4 + 0xbc);
      if (((uVar1 & 0x40) != 0) && (uVar2 >> 0x18 != 0xff)) {
        uVar1 = ftol();
        uVar2 = ftol();
        uVar3 = ftol();
        uVar2 = ((uVar1 | 0xffffff00) << 8 | uVar2 & 0xff) << 8 | uVar3 & 0xff;
      }
      if (0 < param_2) {
        prVar4 = param_3 + 0x10;
        iVar5 = param_2;
        do {
          *(uint *)prVar4 = uVar2;
          prVar4 = prVar4 + 0x30;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else if (0 < param_2) {
      local_28 = param_2;
      prVar4 = param_3 + 0x10;
      do {
        uVar1 = *(uint *)prVar4;
        if ((((byte)param_4[0xb8] & 0x40) != 0) && (uVar1 >> 0x18 != 0xff)) {
          uVar1 = ftol();
          uVar2 = ftol();
          uVar3 = ftol();
          uVar1 = ((uVar1 | 0xffffff00) << 8 | uVar2 & 0xff) << 8 | uVar3 & 0xff;
        }
        *(uint *)prVar4 = uVar1;
        prVar4 = prVar4 + 0x30;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
  }
  uVar1 = *(uint *)(param_4 + 0xb8);
  if (((uVar1 & 0x20) != 0) && ((uVar1 & 0x800000) != 0)) {
    rnsMNG::StorePoly((rnsMNG *)(this + 0x8c),param_2,param_3,param_4);
    return 1;
  }
  if ((uVar1 & 0x400000) == 0) {
    (**(code **)(*(int *)this + 0x50))(param_4,0);
  }
  iVar5 = (**(code **)(*(int *)this + 0x40))(param_2,param_3,param_4);
  return iVar5;
}




/* from: engine:rend_vis.cpp
   addr: 004DA3F0 */

void __thiscall
rendDRIVER::RenderQuad
          (rendDRIVER *this,camCAMERA *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
          rendCFG *param_11)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  rendVERTEX *prVar9;
  float local_c0;
  float local_bc;
  float local_b4 [3];
  float local_a8;
  float local_a4;
  float local_90;
  float local_8c;
  float local_78;
  float local_74;
  float local_60;
  float local_5c;
  float local_48;
  float local_44;
  float local_30;
  float local_2c;
  float local_18;
  float local_14;
  
  local_c0 = param_2;
  local_bc = param_3;
  local_a8 = param_4;
  local_a4 = param_5;
  fVar1 = *(float *)(param_1 + 0x80);
  local_90 = param_2;
  local_8c = param_7;
  local_78 = param_4;
  local_74 = param_9;
  local_60 = param_6;
  local_5c = param_7;
  local_48 = param_8;
  local_44 = param_9;
  local_30 = param_6;
  local_2c = param_3;
  local_18 = param_8;
  fVar2 = *(float *)(param_11 + 0xbc);
  local_14 = param_5;
  pfVar3 = local_b4;
  iVar7 = 4;
  do {
    pfVar3[1] = fVar2;
    *pfVar3 = fVar1 / param_10;
    pfVar3[-1] = param_10;
    pfVar3 = pfVar3 + 0xc;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  prVar9 = (rendVERTEX *)&local_c0;
  iVar8 = 4;
  iVar7 = ftol();
  iVar4 = ftol();
  iVar5 = ftol();
  iVar6 = ftol();
  RenderPolyCompat(this,param_1,iVar6,iVar5,iVar4,iVar7,iVar8,prVar9,param_11);
  return;
}

