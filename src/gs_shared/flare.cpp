
/* from: gs_shared:flare.cpp
   addr: 0053C2B0 */

int __fastcall flrInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_flare,0x24464c52,0x55,flrFLARE::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: gs_shared:flare.cpp
   addr: 0053C2E0 */

void __fastcall flrRender(camCAMERA *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_009632d0;
  do {
    if ((msgADDR *)*puVar1 != (msgADDR *)0x0) {
      msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)*puVar1,0x3e9,param_1,(msgADDR *)0x0);
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x9632f8);
  return;
}




/* from: gs_shared:flare.cpp
   addr: 0053C310 */

entENTITY * __fastcall flrFLARE::Create(animINST *param_1)

{
  txmTEXTURE *ptVar1;
  flrFLARE *this;
  entENTITY *peVar2;
  int iVar3;
  
  DAT_009632b4 = txmMANAGER::Add(txmManager,_flrTexName,0x40000,1);
  if (DAT_009632b4 == (txmTEXTURE *)0x0) {
    apMsg(s_Cannot_load_default_texture___s_,_flrTexName);
  }
  iVar3 = 0;
  do {
    ptVar1 = txmMANAGER::Add(txmManager,*(char **)((int)&PTR_s_flare_crcl_005f9180 + iVar3),0x40000,
                             1);
    *(txmTEXTURE **)((int)&DAT_009632b8 + iVar3) = ptVar1;
    if (ptVar1 == (txmTEXTURE *)0x0) {
      apMsg(s_Cannot_load_default_texture___s_,
            *(undefined4 *)((int)&PTR_s_flare_crcl_005f9180 + iVar3));
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x10);
  this = (flrFLARE *)operator_new(0x3c3);
  if (this != (flrFLARE *)0x0) {
    peVar2 = (entENTITY *)flrFLARE(this);
    return peVar2;
  }
  return (entENTITY *)0x0;
}




/* from: gs_shared:flare.cpp
   addr: 0053C3B0 */

flrFLARE * __thiscall flrFLARE::flrFLARE(flrFLARE *this)

{
  flrFLARE *pfVar1;
  int iVar2;
  
  entENTITY::entENTITY((entENTITY *)this);
  *(undefined4 *)(this + 0x14f) = 4;
  *(undefined4 *)(this + 0x153) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x157) = 0x42a00000;
  *(undefined4 *)(this + 0x15b) = 0x43200000;
  *(undefined4 *)(this + 0x15f) = 0;
  *(undefined4 *)(this + 0x163) = 0;
  *(undefined4 *)(this + 0x167) = 0;
  *(undefined4 *)(this + 0x16b) = 0;
  *(undefined4 *)(this + 0x16f) = 0;
  *(undefined4 *)(this + 0x173) = 0;
  *(undefined4 *)(this + 0x177) = 0x40;
  *(undefined4 *)(this + 0x17b) = 0;
  *(undefined4 *)(this + 0x17f) = 0;
  *(undefined4 *)(this + 0x183) = 0;
  *(undefined4 *)(this + 0x187) = 0;
  *(undefined4 *)(this + 0x18b) = 0x80;
  *(undefined4 *)(this + 399) = 0;
  pfVar1 = this + 0x19f;
  iVar2 = 0x14;
  do {
    *(undefined4 *)(pfVar1 + -8) = 0;
    *(undefined4 *)(pfVar1 + -4) = 0;
    *(undefined4 *)pfVar1 = 0;
    *(undefined4 *)(pfVar1 + 4) = 0;
    pfVar1 = pfVar1 + 0x1c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined ***)this = &_vftable_;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:flare.cpp
   addr: 0053C460 */

void __thiscall flrFLARE::SetupDefault(flrFLARE *this)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  *(undefined4 *)(this + 0x15f) = 0x3d4ccccd;
  *(undefined4 *)(this + 0x16f) = 0x437f0000;
  *(undefined4 *)(this + 0x163) = 0x42200000;
  *(undefined4 *)(this + 0x167) = 0x425c0000;
  *(undefined1 **)(this + 0x16b) = &DAT_42480000;
  *(undefined4 *)(this + 0x17b) = DAT_009632b4;
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffe;
  *(undefined4 *)(this + 0x17f) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x183) = 0x3dcccccd;
  local_10 = 0x430c0000;
  local_8 = &DAT_42480000;
  local_c = 0x42c80000;
  local_4 = 0x42c80000;
  local_20 = 0x437f0000;
  local_18 = 0x43480000;
  local_1c = 0x437f0000;
  local_14 = 0x437f0000;
  _DAT_009632c8 = 10;
  FlareRandomize(this,10,4,(txmTEXTURE **)&DAT_009632b8,(m3dCOLOR *)&local_10,(m3dCOLOR *)&local_20)
  ;
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffd;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:flare.cpp
   addr: 0053C540 */

void __thiscall flrFLARE::ReadParams(flrFLARE *this,animINST *param_1)

{
  animINST *this_00;
  int iVar1;
  uint uVar2;
  txmTEXTURE *ptVar3;
  char *pcVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40 [64];
  
  this_00 = param_1;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  iVar1 = animINST::GetInt(param_1,s_SHINE,s_isOn,(int *)&param_1);
  if (iVar1 != 0) {
    if (param_1 == (animINST *)0x0) {
      uVar2 = *(uint *)(this + 0x14f) & 0xfffffffe;
    }
    else {
      uVar2 = *(uint *)(this + 0x14f) | 1;
    }
    *(uint *)(this + 0x14f) = uVar2;
  }
  animINST::GetFloat(this_00,s_SHINE,s_size,(float *)(this + 0x15f));
  animINST::GetColor(this_00,s_SHINE,s_color,(m3dCOLOR *)(this + 0x163));
  iVar1 = animINST::GetStr(this_00,s_SHINE,s_texture,local_40,0x40);
  if ((iVar1 != 0) && (local_40[0] != '\0')) {
    ptVar3 = txmMANAGER::Add(txmManager,local_40,0x100,1);
    *(txmTEXTURE **)(this + 0x17b) = ptVar3;
    if (ptVar3 == (txmTEXTURE *)0x0) {
      pcVar4 = *(char **)(this_00 + 0x18);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = s_;
      }
      apMsg(s_Cannot_create_texture___s__for_s,local_40,pcVar4);
      *(undefined4 *)(this + 0x17b) = DAT_009632b4;
    }
  }
  iVar1 = animINST::GetBool(this_00,s_FLARE,s_isOn,(int *)&param_1);
  if (iVar1 != 0) {
    if (param_1 == (animINST *)0x0) {
      uVar2 = *(uint *)(this + 0x14f) & 0xfffffffd;
    }
    else {
      uVar2 = *(uint *)(this + 0x14f) | 2;
    }
    *(uint *)(this + 0x14f) = uVar2;
  }
  animINST::GetFloat(this_00,s_FLARE,s_minSize,(float *)(this + 0x17f));
  animINST::GetFloat(this_00,s_FLARE,s_maxSize,(float *)(this + 0x183));
  iVar1 = animINST::GetColor(this_00,s_FLARE,s_minColor,(m3dCOLOR *)&local_50);
  if (iVar1 != 0) {
    iVar1 = animINST::GetColor(this_00,s_FLARE,s_maxColor,(m3dCOLOR *)&local_60);
    if (iVar1 != 0) {
      _DAT_009632c8 = 10;
      FlareRandomize(this,10,4,(txmTEXTURE **)&DAT_009632b8,(m3dCOLOR *)&local_50,
                     (m3dCOLOR *)&local_60);
    }
  }
  return;
}




/* from: gs_shared:flare.cpp
   addr: 0053C730 */

void __thiscall flrFLARE::EnableShine(flrFLARE *this,int param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
    return;
  }
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffe;
  return;
}




/* from: gs_shared:flare.cpp
   addr: 0053C760 */

void __thiscall flrFLARE::EnableFlare(flrFLARE *this,int param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 2;
    return;
  }
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffd;
  return;
}




/* from: gs_shared:flare.cpp
   addr: 0053C790 */

void __thiscall flrFLARE::EnableAnim(flrFLARE *this,int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | param_1;
    return;
  }
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & ~param_1;
  return;
}




/* from: gs_shared:flare.cpp
   addr: 0053C7D0 */

void __thiscall
flrFLARE::ConfigureFlare
          (flrFLARE *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  *(undefined4 *)(this + param_1 * 0x1c + 0x1a7) = param_2;
  *(undefined4 *)(this + param_1 * 0x1c + 0x1ab) = param_3;
  *(undefined4 *)(this + param_1 * 0x1c + 0x197) = param_6;
  *(undefined4 *)(this + param_1 * 0x1c + 0x19b) = param_7;
  *(undefined4 *)(this + param_1 * 0x1c + 0x19f) = param_8;
  *(undefined4 *)(this + param_1 * 0x1c + 0x1a3) = param_9;
  *(undefined4 *)(this + param_1 * 0x1c + 0x193) = param_4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:flare.cpp
   addr: 0053C830 */

int __thiscall
flrFLARE::ProcessMsg(flrFLARE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  void *this_00;
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  this_00 = param_2;
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xffffdfff;
      iVar1 = _apCfgReadBool((void **)&DAT_009632f8,s_Video,s_VIDEO_FlaresEnabled,(int *)&param_2);
      if ((iVar1 != 0) && (param_2 == (void *)0x0)) {
        return 0;
      }
      iVar1 = Update(this);
      if (iVar1 == 0) {
        return 0;
      }
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x2000;
      return 0;
    }
    if (param_1 == 1) {
      (**(code **)(*(int *)this + 0x68))();
      (**(code **)(*(int *)this + 0x6c))(*(undefined4 *)(this + 0xbc));
      iVar1 = 0;
      do {
        if ((&DAT_009632d0)[iVar1] == 0) {
          (&DAT_009632d0)[iVar1] = this;
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 10);
      return 0;
    }
    if (param_1 != 2) {
      return 0;
    }
    iVar1 = 0;
    do {
      if ((flrFLARE *)(&DAT_009632d0)[iVar1] == this) {
        (&DAT_009632d0)[iVar1] = 0;
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
    return 0;
  }
  if (param_1 != 0x3e9) {
    return 0;
  }
  if ((camCAMERA *)param_2 == gsCameraPtr) {
    iVar1 = 1;
    param_2 = (void *)(*(uint *)(this + 0x14f) & 0x2000);
  }
  else {
    iVar1 = 0;
    local_10 = 0;
    local_18 = &cdtREFINE::_vftable_;
    local_14 = 2;
    if (((byte)(*(animINST **)(this + 0xbc))[4] & 1) == 0) {
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_30);
      camCAMERA::GetOrigin((camCAMERA *)this_00,(m3dV *)&local_24);
      iVar2 = rendDRIVER::ProjectPoint
                        (rendDrv,(camCAMERA *)this_00,(m3dV *)&local_30,local_c,(m2dV *)0x0);
      if (iVar2 != 0) {
        fVar6 = (local_30 - local_24) * (local_30 - local_24) +
                (local_2c - local_20) * (local_2c - local_20) +
                (local_28 - local_1c) * (local_28 - local_1c);
        if (m3dSimdType == 0) {
          fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
          fVar7 = auVar8._0_4_;
          param_1 = (int)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                          (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) *
                         fVar6);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar3 = (ulonglong)(uint)fVar6;
          uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
          uVar5 = PackedFloatingMUL(uVar4,uVar4);
          uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
          uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
          uVar4 = PackedFloatingMUL(uVar4,uVar3);
          param_1 = (int)uVar4;
          FastExitMediaState();
        }
        else {
          param_1 = (int)SQRT(fVar6);
        }
        if ((float)param_1 <= ___real_43960000) {
          param_2 = (void *)scnSCENE::IsVisiblePoint
                                      (gsScenePtr,(m3dV *)&local_24,(m3dV *)&local_30,0,
                                       (cdtREFINE *)&local_18,(cdtINFO *)0x0);
          goto LAB_0053caa8;
        }
      }
    }
    param_2 = (void *)0x0;
  }
LAB_0053caa8:
  if (param_2 != (void *)0x0) {
    if (((byte)this[0x14f] & 1) != 0) {
      ShineRender(this,(camCAMERA *)this_00,iVar1);
    }
    if (((byte)this[0x14f] & 2) != 0) {
      FlareRender(this,(camCAMERA *)this_00,iVar1);
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:flare.cpp
   addr: 0053CAE0 */

void __thiscall flrFLARE::ShineRender(flrFLARE *this,camCAMERA *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 extraout_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float local_114;
  float local_10c;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  m3dV local_d0 [12];
  rendCFG local_c4 [184];
  uint local_c;
  uint local_8;
  
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_ec);
  rendDRIVER::ProjectPoint(rendDrv,param_1,(m3dV *)&local_ec,local_d0,(m2dV *)&local_fc);
  vidDRIVER::ToggleModeParam(vidDriver,0x200,0);
  vidDRIVER::ToggleModeParam(vidDriver,0x200,1);
  camCAMERA::GetOrigin(param_1,(m3dV *)&local_dc);
  local_114 = (local_dc - local_ec) * (local_dc - local_ec) +
              (local_d8 - local_e8) * (local_d8 - local_e8) +
              (local_d4 - local_e4) * (local_d4 - local_e4);
  if (m3dSimdType == 0) {
    local_114 = local_114 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)local_114),ZEXT416((uint)local_114));
    fVar11 = auVar10._0_4_;
    local_114 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_114 * fVar11 * fVar11) *
                local_114;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)local_114;
    uVar8 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    uVar8 = PackedFloatingMUL(uVar8,uVar7);
    local_114 = (float)uVar8;
    FastExitMediaState();
  }
  else {
    local_114 = SQRT(local_114);
  }
  fVar1 = local_114;
  fVar11 = *(float *)(this + 0x15b);
  local_10c = *(float *)(this + 0x157);
  local_100 = 0x3d4ccccd;
  local_104 = 0x3f800000;
  local_114 = fVar11;
  if (fVar11 < local_10c) {
    local_104 = 0x3d4ccccd;
    local_100 = 0x3f800000;
    local_114 = local_10c;
    local_10c = fVar11;
  }
  if (((local_10c <= fVar1) && (fVar1 <= local_114)) &&
     (local_e0 = local_100, local_114 < local_10c)) {
    local_e0 = local_104;
  }
  iVar2 = ftol();
  iVar3 = ftol();
  uVar4 = ftol();
  uVar5 = ftol();
  uVar6 = ftol();
  local_8 = ((iVar3 << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff;
  local_c = *(uint *)(this + 0x177) | 0x21002f;
  rendCFG::InitMtl1(local_c4,*(txmTEXTURE **)(this + 0x17b));
  if (((byte)this[0x14f] & 8) == 0) {
    *(undefined4 *)(this + 0x173) = 0;
  }
  else {
    local_f4 = local_fc -
               (*(float *)(gsCameraPtr + 0x144) * ___real_3f000000 + *(float *)(gsCameraPtr + 0x13c)
               );
    local_f0 = local_f8 -
               (*(float *)(gsCameraPtr + 0x148) * ___real_3f000000 + *(float *)(gsCameraPtr + 0x140)
               );
    fVar11 = m2dAngleVector((m2dV *)&local_f4,&m2dVUnitY);
    *(float *)(this + 0x173) = fVar11;
  }
  _flrOutPoly(param_1,(m2dV *)&local_fc,
              ((float)*(int *)(*(int *)(this + 0x17b) + 0x4c) * (float)iVar2) /
              (float)*(int *)(*(int *)(this + 0x17b) + 0x50),(float)iVar2,*(float *)(this + 0x173),
              local_c4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:flare.cpp
   addr: 0053CED0 */

void __thiscall flrFLARE::FlareRender(flrFLARE *this,camCAMERA *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  flrFLARE *pfVar8;
  ulonglong uVar9;
  undefined8 extraout_MM1;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float local_114;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  m3dV local_e8 [12];
  float local_dc;
  m3dV local_d8 [12];
  float local_cc;
  float local_c8;
  rendCFG local_c4 [184];
  uint local_c;
  uint local_8;
  
  animINST::GetPos(*(animINST **)(this + 0xbc),local_e8);
  rendDRIVER::ProjectPoint(rendDrv,param_1,local_e8,local_d8,(m2dV *)&local_10c);
  fVar1 = *(float *)(gsCameraPtr + 0x144) * ___real_3f000000;
  fVar12 = *(float *)(gsCameraPtr + 0x148) * ___real_3f000000;
  local_ec = *(float *)(gsCameraPtr + 0x140) + fVar12;
  local_cc = local_10c - (*(float *)(gsCameraPtr + 0x13c) + fVar1);
  local_f4 = local_108 - local_ec;
  local_114 = fVar1 * fVar1 + fVar12 * fVar12;
  uVar10 = extraout_MM1;
  if (m3dSimdType == 0) {
    local_114 = local_114 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar13 = rsqrtss(ZEXT416((uint)local_114),ZEXT416((uint)local_114));
    fVar12 = auVar13._0_4_;
    local_114 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar12 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_114 * fVar12 * fVar12) *
                local_114;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar9 = (ulonglong)(uint)local_114;
    uVar10 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar9);
    uVar11 = PackedFloatingMUL(uVar10,uVar10);
    uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
    uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
    uVar10 = PackedFloatingMUL(uVar10,uVar9);
    local_114 = (float)uVar10;
    FastExitMediaState();
  }
  else {
    local_114 = SQRT(local_114);
  }
  local_f0 = local_114;
  local_114 = local_cc * local_cc + local_f4 * local_f4;
  if (m3dSimdType == 0) {
    local_114 = local_114 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar13 = rsqrtss(ZEXT416((uint)local_114),ZEXT416((uint)local_114));
    fVar12 = auVar13._0_4_;
    local_114 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar12 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - local_114 * fVar12 * fVar12) *
                local_114;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar9 = (ulonglong)(uint)local_114;
    uVar10 = PackedFloatingReciprocalSQRAprox(uVar10,uVar9);
    uVar11 = PackedFloatingMUL(uVar10,uVar10);
    uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
    uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
    uVar10 = PackedFloatingMUL(uVar10,uVar9);
    local_114 = (float)uVar10;
    FastExitMediaState();
  }
  else {
    local_114 = SQRT(local_114);
  }
  local_cc = (*(float *)(gsCameraPtr + 0x13c) + fVar1) - local_cc;
  iVar7 = 0;
  local_c8 = local_ec - local_f4;
  if (0 < *(int *)(this + 399)) {
    local_f0 = (local_f0 - local_114) / local_f0;
    pfVar8 = this + 0x19b;
    do {
      local_100 = (___real_3f800000 - *(float *)(pfVar8 + 0xc)) * local_10c +
                  local_cc * *(float *)(pfVar8 + 0xc);
      local_fc = local_c8 * *(float *)(pfVar8 + 0xc) +
                 local_108 * (___real_3f800000 - *(float *)(pfVar8 + 0xc));
      fVar1 = *(float *)(this + 0x17f);
      local_dc = *(float *)(this + 0x183);
      fVar12 = fVar1;
      if ((___real_00000000 <= local_f0) && (fVar12 = local_dc, local_f0 <= ___real_3f800000)) {
        fVar12 = (local_dc - fVar1) * local_f0 + fVar1;
      }
      local_f8 = local_f0;
      local_104 = fVar12 * *(float *)(pfVar8 + 0x10) * ABS(*(float *)(gsCameraPtr + 0x144));
      if (___real_3f800000 < local_104) {
        if (param_2 == 0) {
          uVar6 = ftol();
          uVar6 = uVar6 & 0xff;
          iVar2 = ftol();
          uVar3 = iVar2 << 8;
        }
        else {
          iVar2 = ftol();
          uVar6 = iVar2 << 8;
          uVar3 = ftol();
          uVar3 = uVar3 & 0xff;
        }
        uVar4 = ftol();
        uVar5 = ftol();
        local_c = *(uint *)(this + 0x18b) | 0x21002f;
        local_8 = ((uVar6 | uVar3) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
        rendCFG::InitMtl1(local_c4,*(txmTEXTURE **)(pfVar8 + -8));
        _flrOutPoly(param_1,(m2dV *)&local_100,local_104,local_104,0.0,local_c4);
      }
      iVar7 = iVar7 + 1;
      pfVar8 = pfVar8 + 0x1c;
    } while (iVar7 < *(int *)(this + 399));
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:flare.cpp
   addr: 0053D2E0 */

void __thiscall
flrFLARE::FlareRandomize
          (flrFLARE *this,int param_1,int param_2,txmTEXTURE **param_3,m3dCOLOR *param_4,
          m3dCOLOR *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  flrFLARE *pfVar4;
  float fVar5;
  float fVar6;
  int local_c;
  
  *(int *)(this + 399) = param_1;
  local_c = 0;
  fVar1 = ___real_3f800000 / (float)(param_1 + -1);
  if (0 < param_1) {
    fVar2 = (float)param_2 - ___real_3c23d70a;
    pfVar4 = this + 0x1ab;
    do {
      fVar5 = m3dRND_GEN::RndFloatMax((m3dRND_GEN *)&DAT_009632c8,fVar1);
      fVar5 = (float)local_c * fVar1 + fVar5;
      *(float *)(pfVar4 + -4) = fVar5;
      fVar5 = ___real_3f800000 - (fVar5 + fVar5);
      fVar6 = m3dRND_GEN::RndFloatRange((m3dRND_GEN *)&DAT_009632c8,0.6,1.0);
      *(float *)pfVar4 = fVar6 * ABS(fVar5);
      fVar5 = m3dRND_GEN::RndFloatRange
                        ((m3dRND_GEN *)&DAT_009632c8,*(float *)param_4,*(float *)param_5);
      *(float *)(pfVar4 + -0x14) = fVar5;
      fVar5 = m3dRND_GEN::RndFloatRange
                        ((m3dRND_GEN *)&DAT_009632c8,*(float *)(param_4 + 4),*(float *)(param_5 + 4)
                        );
      *(float *)(pfVar4 + -0x10) = fVar5;
      fVar5 = m3dRND_GEN::RndFloatRange
                        ((m3dRND_GEN *)&DAT_009632c8,*(float *)(param_4 + 8),*(float *)(param_5 + 8)
                        );
      *(float *)(pfVar4 + -0xc) = fVar5;
      fVar5 = m3dRND_GEN::RndFloatRange
                        ((m3dRND_GEN *)&DAT_009632c8,*(float *)(param_4 + 0xc),
                         *(float *)(param_5 + 0xc));
      *(float *)(pfVar4 + -8) = fVar5;
      m3dRND_GEN::RndFloatRange((m3dRND_GEN *)&DAT_009632c8,0.0,fVar2);
      m3dRND_GEN::RndFloatRange((m3dRND_GEN *)&DAT_009632c8,0.0,fVar2);
      iVar3 = ftol();
      *(txmTEXTURE **)(pfVar4 + -0x18) = param_3[iVar3];
      local_c = local_c + 1;
      pfVar4 = pfVar4 + 0x1c;
    } while (local_c < *(int *)(this + 399));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:flare.cpp
   addr: 0053D430 */

int __thiscall flrFLARE::Update(flrFLARE *this)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_34;
  undefined **local_30;
  uint local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  m3dV local_c [12];
  
  local_2c = 0;
  local_28 = 0;
  local_30 = &cdtREFINE::_vftable_;
  if (((byte)(*(animINST **)(this + 0xbc))[4] & 1) != 0) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xffffefff;
    return 0;
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_24);
  camCAMERA::GetOrigin(gsCameraPtr,(m3dV *)&local_18);
  iVar2 = rendDRIVER::ProjectPoint(rendDrv,gsCameraPtr,(m3dV *)&local_24,local_c,(m2dV *)0x0);
  if (iVar2 == 0) {
LAB_0053d5e8:
    uVar3 = *(uint *)(this + 0x14f);
LAB_0053d5ee:
    uVar3 = uVar3 & 0xffffefff;
  }
  else {
    local_34 = (local_24 - local_18) * (local_24 - local_18) +
               (local_20 - local_14) * (local_20 - local_14) +
               (local_1c - local_10) * (local_1c - local_10);
    if (m3dSimdType == 0) {
      local_34 = local_34 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar8 = rsqrtss(ZEXT416((uint)local_34),ZEXT416((uint)local_34));
      fVar7 = auVar8._0_4_;
      local_34 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_34 * fVar7 * fVar7) * local_34
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)local_34;
      uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      local_34 = (float)uVar5;
      FastExitMediaState();
    }
    else {
      local_34 = SQRT(local_34);
    }
    if (*(float *)(this + 0x15b) < local_34) goto LAB_0053d5e8;
    if (((uint)(*(int *)(this + 0x18) + DAT_008b6a88) % 3 != 0) &&
       (((byte)gsSysCinema[0x80] & 1) == 0)) goto LAB_0053d5f7;
    if (((byte)gsSysCinema[0x80] & 1) == 0) {
      local_2c = local_2c | 2;
    }
    iVar2 = scnSCENE::IsVisiblePoint
                      (gsScenePtr,(m3dV *)&local_18,(m3dV *)&local_24,0,(cdtREFINE *)&local_30,
                       (cdtINFO *)0x0);
    uVar3 = *(uint *)(this + 0x14f);
    if (iVar2 == 0) goto LAB_0053d5ee;
    uVar3 = uVar3 | 0x1000;
  }
  *(uint *)(this + 0x14f) = uVar3;
LAB_0053d5f7:
  fVar7 = ___real_3f800000;
  if (((byte)gsSysCinema[0x80] & 1) != 0) {
    fVar7 = ___real_40400000;
  }
  uVar3 = *(uint *)(this + 0x14f) & 0x1000;
  if (uVar3 == 0) {
    fVar7 = gsElapsedTime * fVar7 + *(float *)(this + 0x153);
  }
  else {
    fVar7 = *(float *)(this + 0x153) - gsElapsedTime * fVar7;
  }
  *(float *)(this + 0x153) = fVar7;
  fVar7 = *(float *)(this + 0x153);
  fVar1 = ___real_00000000;
  if ((___real_00000000 <= fVar7) && (fVar1 = fVar7, ___real_3e4ccccd < fVar7)) {
    fVar1 = ___real_3e4ccccd;
  }
  *(float *)(this + 0x153) = fVar1;
  if ((*(uint *)(this + 0x14f) & 4) == 0) {
    return uVar3;
  }
  if (fVar1 <= ___real_3e4ccccd - _DAT_005dd920 * ___real_42c80000) {
    return 1;
  }
  return 0;
}




/* from: gs_shared:flare.cpp
   addr: 0053D6C0 */

void __thiscall flrFLARE::SetPos(flrFLARE *this,m3dV *param_1)

{
  animINST::Translate(*(animINST **)(this + 0xbc),param_1,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:flare.cpp
   addr: 0053D6E0 */

void __fastcall
_flrOutPoly(camCAMERA *param_1,m2dV *param_2,float param_3,float param_4,float param_5,
           rendCFG *param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  m2dMATR *pmVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  rendVERTEX *prVar14;
  int local_110;
  float local_10c [7];
  float local_f0;
  float local_ec;
  float local_e8;
  m2dMATR local_e4 [36];
  rendVERTEX local_c0 [4];
  float local_bc [5];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_18;
  undefined4 local_14;
  
  m2dMATR::MakeRot(local_e4,param_5);
  pfVar10 = local_10c;
  local_110 = 4;
  local_10c[2] = param_3 * ___real_bf000000;
  local_10c[3] = param_4 * ___real_bf000000;
  local_10c[4] = param_3 * ___real_bf000000;
  local_10c[5] = param_4 * ___real_3f000000;
  local_10c[6] = param_3 * ___real_3f000000;
  local_f0 = param_4 * ___real_3f000000;
  local_ec = param_3 * ___real_3f000000;
  local_e8 = param_4 * ___real_bf000000;
  fVar4 = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x80);
  fVar2 = *(float *)(param_1 + 0x80);
  pfVar12 = local_bc;
  do {
    pfVar10 = pfVar10 + 2;
    iVar11 = 0;
    do {
      iVar6 = 0;
      pmVar9 = local_e4 + iVar11;
      *(undefined4 *)((int)local_10c + iVar11) = 0;
      fVar5 = ___real_00000000;
      do {
        pfVar1 = pfVar10 + iVar6;
        fVar3 = *(float *)pmVar9;
        iVar6 = iVar6 + 1;
        pmVar9 = pmVar9 + 0xc;
        fVar5 = *pfVar1 * fVar3 + fVar5;
      } while (iVar6 < 2);
      *(float *)((int)local_10c + iVar11) = fVar5;
      iVar11 = iVar11 + 4;
    } while (iVar11 < 8);
    *pfVar10 = local_10c[0];
    pfVar10[1] = local_10c[1];
    local_110 = local_110 + -1;
    pfVar12[-1] = *pfVar10 + *(float *)param_2;
    *pfVar12 = pfVar10[1] + *(float *)(param_2 + 4);
    pfVar12[1] = fVar4;
    pfVar12[2] = fVar2 / fVar4;
    pfVar12 = pfVar12 + 0xc;
  } while (local_110 != 0);
  prVar14 = local_c0;
  local_a8 = 0;
  local_a4 = 0;
  local_78 = 0;
  local_74 = 0x3f800000;
  local_48 = 0x3f800000;
  local_44 = 0x3f800000;
  local_18 = 0x3f800000;
  local_14 = 0;
  iVar13 = 4;
  iVar11 = ftol();
  iVar6 = ftol();
  iVar7 = ftol();
  iVar8 = ftol();
  rendDRIVER::RenderPolyCompat(rendDrv,param_1,iVar8,iVar7,iVar6,iVar11,iVar13,prVar14,param_6);
  return;
}

