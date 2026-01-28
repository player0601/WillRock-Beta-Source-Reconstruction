
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_melt.cpp
   addr: 00471750 */

int __fastcall _chdStartMelt(objOBJ *param_1,m3dBOX *param_2,float param_3,float param_4)

{
  objOBJ *poVar1;
  float fVar2;
  bool bVar3;
  objMODIFIER *poVar4;
  objMOD_GEOM *this;
  int iVar5;
  objOBJ *poVar6;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    for (poVar4 = objOBJ::FindNextModifier(param_1,(objMODIFIER *)0x0,0x200,0x534b494e);
        poVar4 != (objMODIFIER *)0x0;
        poVar4 = objOBJ::FindNextModifier(param_1,poVar4,0x200,0x534b494e)) {
      *(uint *)(poVar4 + 4) = *(uint *)(poVar4 + 4) | 1;
    }
    this = (objMOD_GEOM *)operator_new(0x7c);
    if (this == (objMOD_GEOM *)0x0) {
      return 0;
    }
    objMOD_GEOM::objMOD_GEOM(this,0x4d454c54,0x50);
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined ***)this = &chdDEFORM::_vftable_;
    *(undefined4 *)(this + 0x10) = 0x8000;
    m3dBOX::m3dBOX((m3dBOX *)(this + 0x38));
    fVar2 = param_4 * ___real_3e4ccccd;
    *(undefined ***)this = &chdMELT::_vftable_;
    *(undefined4 *)(this + 0x30) = 0x3e0f5c29;
    *(float *)(this + 0x24) = fVar2 + ___real_3f19999a;
    *(float *)(this + 0x28) = param_4 + ___real_40066666;
    *(float *)(this + 0x2c) = param_4 * ___real_3d4ccccd + ___real_3e99999a;
    *(float *)(this + 0x34) = param_3 * ___real_3dcccccd;
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_2 + 0x1c);
    *(float *)(this + 0x58) = *(float *)(this + 0x4c) - *(float *)(this + 0x40);
    *(float *)(this + 0x5c) = *(float *)(this + 0x50) - *(float *)(this + 0x44);
    *(float *)(this + 0x60) = *(float *)(this + 0x54) - *(float *)(this + 0x48);
    (**(code **)(*(int *)(this + 0x38) + 0x24))(this + 100);
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x74) = 0xbf800000;
    iVar5 = (**(code **)(*(int *)this + 4))(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = objOBJ::IsApplyModifiers(param_1,0x200);
    if (iVar5 != 0) {
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
    }
  }
  bVar3 = false;
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  for (poVar6 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar3 || (poVar6 != poVar1))));
      poVar6 = *(objOBJ **)(poVar6 + 0x30)) {
    iVar5 = _chdStartMelt(poVar6,param_2,param_3,param_4);
    if (iVar5 == 0) {
      return 0;
    }
    bVar3 = true;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_melt.cpp
   addr: 00471900 */

int __fastcall chdMeltStart(entENTITY *param_1)

{
  int iVar1;
  int iVar2;
  m3dV *pmVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_a4;
  float local_a0;
  undefined **local_9c;
  undefined4 local_98;
  animINST *local_94;
  undefined **local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  m3dV local_70 [4];
  float local_6c;
  float local_64;
  m3dV local_60 [96];
  
  local_9c = &cdtREFINE::_vftable_;
  local_94 = *(animINST **)(param_1 + 0xbc);
  local_98 = 2;
  local_8c = 1;
  local_90 = &m3dBOX::_vftable_;
  animINST::LODFreeze(local_94,1);
  animINST::Validate(*(animINST **)(param_1 + 0xbc),2);
  iVar2 = *(int *)(*(int *)(param_1 + 0xbc) + 0x10);
  local_8c = *(undefined4 *)(iVar2 + 0xc4);
  local_88 = *(undefined4 *)(iVar2 + 200);
  local_84 = *(float *)(iVar2 + 0xcc);
  local_80 = *(undefined4 *)(iVar2 + 0xd0);
  local_7c = *(undefined4 *)(iVar2 + 0xd4);
  local_78 = *(float *)(iVar2 + 0xd8);
  local_64 = local_78 - local_84;
  local_74 = *(undefined4 *)(iVar2 + 0xdc);
  m3dBOX::GetVertices((m3dBOX *)&local_90,local_60);
  pmVar3 = local_60;
  local_a0 = DAT_005d7530;
  iVar2 = 8;
  do {
    iVar1 = scnSCENE::FloorPlace
                      (gsScenePtr,pmVar3,DAT_005d7530,local_70,1.0,0.0,0,(cdtREFINE *)&local_9c,
                       (cdtINFO *)0x0);
    if ((iVar1 != 0) && (local_6c <= local_a0)) {
      local_a0 = local_6c;
    }
    pmVar3 = pmVar3 + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_a4 = 0.0;
  if (local_a0 < local_84) {
    local_a4 = (local_84 - local_a0) * ___real_411ccccd;
    if (m3dSimdType == 0) {
      local_a4 = local_a4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar8 = rsqrtss(ZEXT416((uint)local_a4),ZEXT416((uint)local_a4));
      fVar7 = auVar8._0_4_;
      local_a4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_a4 * fVar7 * fVar7) * local_a4
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)local_a4;
      uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      local_a4 = (float)uVar5;
      FastExitMediaState();
    }
    else {
      local_a4 = SQRT(local_a4);
    }
  }
  local_84 = local_a0;
  iVar2 = _chdStartMelt(*(objOBJ **)(*(int *)(param_1 + 0xbc) + 0x10),(m3dBOX *)&local_90,local_64,
                        local_a4);
  animINST::Invalidate(*(animINST **)(param_1 + 0xbc),0x200);
  animINST::Validate(*(animINST **)(param_1 + 0xbc),0x200);
  return iVar2;
}




/* from: sfx_melt.cpp
   addr: 00471B10 */

int __fastcall chdMeltIsComplete(objOBJ *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  objMODIFIER *poVar3;
  int iVar4;
  objOBJ *poVar5;
  
  if ((0 < *(int *)(param_1 + 0x14)) && (((byte)param_1[8] & 0x3f) == 0)) {
    for (poVar3 = objOBJ::FindNextModifier(param_1,(objMODIFIER *)0x0,0x200,0x4d454c54);
        poVar3 != (objMODIFIER *)0x0;
        poVar3 = objOBJ::FindNextModifier(param_1,poVar3,0x200,0x4d454c54)) {
      if (((char)(*(uint *)(poVar3 + 4) >> 8) < '\0') && ((*(uint *)(poVar3 + 4) & 0x2000) == 0)) {
        return 0;
      }
    }
  }
  bVar2 = false;
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  for (poVar5 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar5 != poVar1))));
      poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
    iVar4 = chdMeltIsComplete(poVar5);
    if (iVar4 == 0) {
      return 0;
    }
    bVar2 = true;
  }
  return 1;
}




/* from: sfx_melt.cpp
   addr: 00471B90 */

void __fastcall chdMeltStartSink(objOBJ *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  objMODIFIER *poVar3;
  objOBJ *poVar4;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    for (poVar3 = objOBJ::FindNextModifier(param_1,(objMODIFIER *)0x0,0x200,0x4d454c54);
        poVar3 != (objMODIFIER *)0x0;
        poVar3 = objOBJ::FindNextModifier(param_1,poVar3,0x200,0x4d454c54)) {
      *(uint *)(poVar3 + 4) = *(uint *)(poVar3 + 4) | 0x4000;
    }
  }
  bVar2 = false;
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  for (poVar4 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar4 != poVar1))));
      poVar4 = *(objOBJ **)(poVar4 + 0x30)) {
    chdMeltStartSink(poVar4);
    bVar2 = true;
  }
  return;
}




/* from: sfx_melt.cpp
   addr: 00471C00 */

void __fastcall chdRemoveDeform(objOBJ *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  objMODIFIER *poVar3;
  objOBJ *poVar4;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    for (poVar3 = objOBJ::FindNextModifier(param_1,(objMODIFIER *)0x0,0x200,0);
        poVar3 != (objMODIFIER *)0x0; poVar3 = objOBJ::FindNextModifier(param_1,poVar3,0x200,0)) {
      if (*(int *)(poVar3 + 8) == 0x4d454c54) {
        (**(code **)(*(int *)poVar3 + 8))();
        (*(code *)**(undefined4 **)poVar3)(1);
        poVar3 = (objMODIFIER *)0x0;
      }
      else {
        *(uint *)(poVar3 + 4) = *(uint *)(poVar3 + 4) & 0xfffffffe;
      }
    }
  }
  bVar2 = false;
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  for (poVar4 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar4 != poVar1))));
      poVar4 = *(objOBJ **)(poVar4 + 0x30)) {
    chdRemoveDeform(poVar4);
    bVar2 = true;
  }
  return;
}




/* from: sfx_melt.cpp
   addr: 00471C80
   addr: 00471C80 */

void * __thiscall chdDEFORM::_scalar_deleting_destructor_(chdDEFORM *this,uint param_1)

{
  objMOD_GEOM::~objMOD_GEOM((objMOD_GEOM *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_melt.cpp
   addr: 00471CA0 */

int __thiscall chdDEFORM::AddObj(chdDEFORM *this,objOBJ *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = objMOD_GEOM::StoreIniVert((objMOD_GEOM *)this,param_1,1,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = objMOD_GEOM::AddObj((objMOD_GEOM *)this,param_1);
  if (iVar1 != 0) {
    **(uint **)(this + 0x18) = **(uint **)(this + 0x18) | 1;
    iVar1 = *(int *)(this + 0x18);
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0x14)) {
      iVar3 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)(this + 0x20) + iVar3);
        puVar2 = (undefined4 *)(*(int *)(*(int *)(iVar1 + 0x28) + 0x40) + iVar3);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0xc;
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
        puVar2[2] = puVar5[2];
        iVar1 = *(int *)(this + 0x18);
      } while (iVar4 < *(int *)(iVar1 + 0x14));
    }
    *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
         *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x20;
    *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
         *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 4;
    return 1;
  }
  return 0;
}




/* from: sfx_melt.cpp
   addr: 00471D40 */

void __thiscall chdDEFORM::DelObj(chdDEFORM *this)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(this + 0x18);
  if ((iVar1 != 0) && (iVar4 = 0, 0 < *(int *)(iVar1 + 0x14))) {
    iVar3 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(this + 0x1c) + iVar3);
      puVar2 = (undefined4 *)(*(int *)(*(int *)(iVar1 + 0x28) + 0x40) + iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
      *puVar2 = *puVar5;
      puVar2[1] = puVar5[1];
      puVar2[2] = puVar5[2];
      iVar1 = *(int *)(this + 0x18);
    } while (iVar4 < *(int *)(iVar1 + 0x14));
  }
  **(uint **)(this + 0x18) = **(uint **)(this + 0x18) & 0xfffffffe;
  objMODIFIER::DelObj((objMODIFIER *)this);
  return;
}




/* from: sfx_melt.cpp
   addr: 00471D90 */

int __thiscall chdDEFORM::Modify(chdDEFORM *this)

{
  *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
       *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x2000;
  return 1;
}




/* from: sfx_melt.cpp
   addr: 00471DB0
   addr: 00471DB0 */

void * __thiscall chdMELT::_vector_deleting_destructor_(chdMELT *this,uint param_1)

{
  *(undefined ***)(this + 0x38) = &m3dVOL::_vftable_;
  objMOD_GEOM::~objMOD_GEOM((objMOD_GEOM *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_melt.cpp
   addr: 00471DE0 */

int __thiscall chdMELT::Modify(chdMELT *this)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  bVar3 = true;
  *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) =
       *(uint *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x66) | 0x2000;
  **(uint **)(this + 0x18) = **(uint **)(this + 0x18) | 1;
  local_2c = (float)(uint)(ABS(objMODIFIER::elapsedTime) < _DAT_005d752c);
  if ((float)(int)local_2c != ___real_00000000) {
    return 1;
  }
  if ((*(uint *)(this + 4) & 0x4000) != 0) goto LAB_00472150;
  iVar5 = *(int *)(this + 0x18);
  iVar7 = 0;
  if (*(int *)(iVar5 + 0x14) < 1) {
LAB_0047213f:
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2000;
  }
  else {
    iVar8 = 0;
    do {
      pfVar6 = (float *)(*(int *)(*(int *)(iVar5 + 0x28) + 0x40) + iVar8);
      local_18 = *pfVar6;
      local_14 = pfVar6[1];
      local_10 = pfVar6[2];
      if (local_14 <=
          _DAT_005d752c * ___real_42c80000 + *(float *)(this + 0x44) + *(float *)(this + 0x34)) {
        fVar1 = *(float *)(*(int *)(this + 0x20) + 4 + iVar8);
        pfVar6 = (float *)(*(int *)(this + 0x20) + iVar8);
        fVar2 = *(float *)(this + 0x50);
        local_44 = *(float *)(this + 0x44);
        local_14 = *(float *)(this + 0x44);
        local_48 = fVar2;
        local_3c = *(float *)(this + 0x44) + *(float *)(this + 0x34);
        if (fVar2 < local_44) {
          local_14 = *(float *)(this + 0x44) + *(float *)(this + 0x34);
          local_48 = local_44;
          local_44 = fVar2;
          local_3c = *(float *)(this + 0x44);
        }
        if (local_44 <= fVar1) {
          if (fVar1 <= local_48) {
            local_30 = local_44;
            local_1c = local_48;
            local_20 = local_3c;
            local_2c = local_14;
            if (local_48 < local_44) {
              local_30 = local_48;
              local_1c = local_44;
              local_2c = local_3c;
              local_20 = local_14;
            }
            local_14 = ((fVar1 - local_30) * (local_20 - local_2c)) / (local_1c - local_30) +
                       local_2c;
          }
          else {
            local_14 = local_3c;
          }
        }
        local_c = *pfVar6 - *(float *)(this + 100);
        local_4 = pfVar6[2] - *(float *)(this + 0x6c);
        local_8 = 0.0;
        m3dNormalize((m3dV *)&local_c);
        fVar1 = objMODIFIER::elapsedTime * *(float *)(this + 0x2c) +
                objMODIFIER::elapsedTime * *(float *)(this + 0x2c);
        local_c = local_c * fVar1;
        local_14 = local_8 * fVar1 + local_14;
        local_4 = local_4 * fVar1;
      }
      else {
        fVar2 = *(float *)(this + 0x44);
        local_4c = *(float *)(this + 0x50);
        fVar1 = *(float *)(this + 0x24);
        local_50 = fVar2;
        local_40 = *(float *)(this + 0x28);
        if (fVar2 < local_4c) {
          fVar1 = *(float *)(this + 0x28);
          local_50 = local_4c;
          local_4c = fVar2;
          local_40 = *(float *)(this + 0x24);
        }
        local_4 = fVar1;
        if ((local_4c <= local_14) && (local_4 = local_40, local_14 <= local_50)) {
          local_24 = local_50;
          local_38 = local_4c;
          local_28 = local_40;
          local_3c = fVar1;
          if (local_50 < local_4c) {
            local_24 = local_4c;
            local_38 = local_50;
            local_3c = local_40;
            local_28 = fVar1;
          }
          local_4 = ((local_14 - local_38) * (local_28 - local_3c)) / (local_24 - local_38) +
                    local_3c;
        }
        local_4 = local_4 * objMODIFIER::elapsedTime;
        bVar3 = false;
        local_c = local_4 * *(float *)(this + 0x70);
        local_14 = local_4 * *(float *)(this + 0x74) + local_14;
        local_4 = local_4 * *(float *)(this + 0x78);
      }
      local_10 = local_4 + local_10;
      local_18 = local_c + local_18;
      pfVar6 = (float *)(*(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x40) + iVar8);
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0xc;
      *pfVar6 = local_18;
      pfVar6[1] = local_14;
      pfVar6[2] = local_10;
      iVar5 = *(int *)(this + 0x18);
    } while (iVar7 < *(int *)(iVar5 + 0x14));
    if (bVar3) goto LAB_0047213f;
  }
  if ((*(uint *)(this + 4) & 0x4000) == 0) {
    return 1;
  }
LAB_00472150:
  iVar5 = *(int *)(this + 0x18);
  iVar7 = 0;
  if (0 < *(int *)(iVar5 + 0x14)) {
    iVar8 = 0;
    do {
      fVar4 = objMODIFIER::elapsedTime * *(float *)(this + 0x30);
      pfVar6 = (float *)(*(int *)(*(int *)(iVar5 + 0x28) + 0x40) + iVar8);
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0xc;
      fVar1 = *(float *)(this + 0x74);
      fVar2 = *(float *)(this + 0x78);
      *pfVar6 = fVar4 * *(float *)(this + 0x70) + *pfVar6;
      pfVar6[1] = fVar4 * fVar1 + pfVar6[1];
      pfVar6[2] = fVar4 * fVar2 + pfVar6[2];
      iVar5 = *(int *)(this + 0x18);
    } while (iVar7 < *(int *)(iVar5 + 0x14));
  }
  return 1;
}




/* from: sfx_melt.cpp
   addr: 00472200 */

void __thiscall m3dBOX::m3dBOX(m3dBOX *this)

{
  *(undefined4 *)(this + 4) = 1;
  *(undefined ***)this = &_vftable_;
  return;
}

