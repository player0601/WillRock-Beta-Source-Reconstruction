
/* from: gs_shared:dyn_destroy.cpp
   addr: 0053B390 */

int __fastcall dstrInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_dyn_destroy,0x24445354,0x28,dstrDESTROY::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_0095d970 = txmMANAGER::Add(txmManager,s_stat_oblom,0x40000,1);
  return (uint)(DAT_0095d970 != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:dyn_destroy.cpp
   addr: 0053B3E0 */

rgdRIGID * __thiscall
dstrSHATTER_RIGID_START::CreatePiece
          (dstrSHATTER_RIGID_START *this,objOBJ *param_1,rgdINIT_PARAMS *param_2)

{
  float fVar1;
  rgdRIGID *prVar2;
  float extraout_ECX;
  float extraout_EDX;
  float fVar3;
  float fStack_c8;
  undefined1 local_c4 [4];
  float fStack_c0;
  rgdINIT_PARAMS arStack_bc [4];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined2 local_b6;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_a8 = (float)DAT_00963744;
  local_ac = (float)DAT_00963740;
  local_a0 = (float)DAT_00963740;
  local_9c = DAT_00963744;
  local_b0 = (float)_m3dVZero;
  local_a4 = (float)_m3dVZero;
  local_b8 = 0;
  local_b7 = 0x40;
  local_b4 = 1.12104e-44;
  local_20 = 0;
  local_1c = 0x3f19999a;
  local_18 = 0x3f4ccccd;
  local_14 = 0x41200000;
  local_10 = 0x3e99999a;
  local_c = 0xbf800000;
  local_8 = 0xbf800000;
  local_4 = 0xbf800000;
  local_b6 = 0xb8;
  (**(code **)(*(int *)(param_1 + 0xc0) + 0x24))(local_c4);
  fVar3 = *(float *)(this + 4);
  fVar1 = *(float *)(this + 0xc);
  m3dNormalize((m3dV *)&stack0xffffff2c);
  local_b4 = (fStack_c8 - fVar3) * ___real_3f333333;
  local_b0 = ___real_3f333333 * 0.0;
  local_ac = (fStack_c0 - fVar1) * ___real_3f333333;
  local_a0 = m3dRandRange(local_b4,local_b0);
  local_a8 = _m3dVUnitY * local_a0;
  local_10 = *(undefined4 *)(this + 0x10);
  local_8 = *(undefined4 *)(this + 0x14);
  local_a4 = DAT_005f9994 * local_a0;
  local_a0 = DAT_005f9998 * local_a0;
  prVar2 = rgdRIGID_START::CreatePiece((rgdRIGID_START *)this,param_1,arStack_bc);
  fVar3 = m3dRandom();
  if (fVar3 < ___real_3f4ccccd) {
    fVar3 = m3dRandRange(extraout_ECX,extraout_EDX);
    msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)prVar2,2,(msgADDR *)0x0,fVar3);
  }
  return prVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:dyn_destroy.cpp
   addr: 0053B5B0 */

shtSHATTER * __thiscall dstrSHATTER_RIGID_START::GetShatter(dstrSHATTER_RIGID_START *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_00963284 & 1) == 0) {
    DAT_00963284 = DAT_00963284 | 1;
    cgmWED_SYS::cgmWED_SYS((cgmWED_SYS *)&DAT_0095d97c);
    _DAT_0095d97c = &cgmWED_3D::_vftable_;
    puVar2 = &DAT_0095e32c;
    iVar1 = 100;
    do {
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0xffffffff;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0xffffffff;
      puVar2[8] = 0;
      puVar2[9] = 0xffffffff;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      _vector_constructor_iterator_(puVar2 + 0xc,0x1c,3,dsDYN_ARRAY::dsDYN_ARRAY);
      puVar2[0x21] = 0;
      puVar2[0x22] = 0;
      puVar2[0x23] = 0xffffffff;
      puVar2[0x24] = 0;
      puVar2[0x25] = 0xffffffff;
      puVar2[0x26] = 0;
      puVar2[0x27] = 0;
      puVar2 = puVar2 + 0x30;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    _DAT_0095d978 = &dstrSHATTER::_vftable_;
    atexit((_func_4879 *)&__E16);
  }
  return (shtSHATTER *)&DAT_0095d978;
}




/* from: gs_shared:dyn_destroy.cpp
   addr: 0053B6E0 */

entENTITY * __fastcall dstrDESTROY::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x167);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: gs_shared:dyn_destroy.cpp
   addr: 0053B720 */

int __thiscall
dstrDESTROY::ProcessMsg(dstrDESTROY *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      (**(code **)(*(int *)this + 0x6c))();
      return 0;
    }
    if (param_1 == 1) {
      (**(code **)(*(int *)this + 0x68))();
      return 0;
    }
    if (param_1 == 2) {
      (**(code **)(*(int *)this + 0x70))();
      return 0;
    }
    if (param_1 == 3) {
      (**(code **)(*(int *)this + 0x78))(param_2);
      return 0;
    }
  }
  else if (param_1 == 0x3f4) {
    (**(code **)(*(int *)this + 0x7c))();
  }
  else {
    if (param_1 == 0x40c) {
      (**(code **)(*(int *)this + 0x80))(param_2);
      return 0;
    }
    if (param_1 == 0x4c5) {
      (**(code **)(*(int *)this + 0x74))(param_2);
      return 0;
    }
  }
  return 0;
}




/* from: gs_shared:dyn_destroy.cpp
   addr: 0053B7B0 */

int __thiscall dstrDESTROY::ProcessINIT(dstrDESTROY *this)

{
  int iVar1;
  objOBJ *poVar2;
  
  if ((*(byte *)(*(int *)(this + 0xbc) + 4) & 0x40) != 0) {
    *(undefined4 *)(this + 0x1c) = 0x28;
  }
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
  *(undefined4 *)(this + 0x163) = 0;
  *(float *)(this + 0x15f) = 2.0;
  animINST::GetFloat(*(animINST **)(this + 0xbc),s_DESTROY,s_damage,(float *)(this + 0x15f));
  *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 4;
  iVar1 = *(int *)(*(animINST **)(this + 0xbc) + 0x138);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x8c))) {
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_geom_debris);
  if (poVar2 != (objOBJ *)0x0) {
    objOBJ::SetStateProcYes(poVar2,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_geom_debris_left);
  if (poVar2 != (objOBJ *)0x0) {
    objOBJ::SetStateProcYes(poVar2,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  }
  return 1;
}




/* from: gs_shared:dyn_destroy.cpp
   addr: 0053B880 */

void __thiscall dstrDESTROY::ProcessINIT_LEVEL(dstrDESTROY *this)

{
  int iVar1;
  dstrDESTROY *local_4;
  
  local_4 = this;
  iVar1 = animINST::GetBool(*(animINST **)(this + 0xbc),s_DESTROY,s_isPlaceGround,(int *)&local_4);
  if ((iVar1 != 0) && (local_4 != (dstrDESTROY *)0x0)) {
    (**(code **)(*(int *)this + 0x44))(0,1,0);
    return;
  }
  entENTITY::ApplyColor((entENTITY *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:dyn_destroy.cpp
   addr: 0053B8D0 */

void __thiscall dstrDESTROY::ProcessFRAME(dstrDESTROY *this)

{
  animINST *this_00;
  uchar uVar1;
  int iVar2;
  objOBJ *this_01;
  float fVar3;
  float extraout_EDX;
  float extraout_EDX_00;
  
  fVar3 = 1.4013e-45;
  this_00 = *(animINST **)(this + 0xbc);
  if (((byte)this_00[4] & 1) == 0) {
    if ((*(int *)(this_00 + 0x138) != 0) && (0 < *(int *)(*(int *)(this_00 + 0x138) + 0x8c))) {
      if ((((byte)this[0x14f] & 1) != 0) &&
         ((iVar2 = animINST::AdvanceTime(this_00,gsElapsedTime,1,(float *)0x0), fVar3 = extraout_EDX
          , iVar2 != 0 && ((*(uint *)(this + 0x14f) & 2) == 0)))) {
        *(undefined4 *)(this + 0x153) = 0x40a00000;
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffe | 2;
        *(undefined4 *)(this + 0x15b) = 0x3f800000;
        *(undefined4 *)(this + 0x157) = 0x3f800000;
      }
      if (((byte)this[0x14f] & 2) != 0) {
        iVar2 = m3dUpdateTimeField((float *)(this + 0x153),fVar3);
        if (iVar2 != 0) {
          *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 8;
        }
        if (((byte)this[0x14f] & 8) != 0) {
          this_01 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_geom_debris);
          uVar1 = ftol();
          objOBJ::SetTransparency(this_01,0x80,uVar1);
          iVar2 = m3dUpdateTimeField((float *)(this + 0x157),extraout_EDX_00);
          if (iVar2 != 0) {
            objOBJ::SetStateProcYes(this_01,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
          }
        }
      }
    }
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffb;
  }
  return;
}




/* from: gs_shared:dyn_destroy.cpp
   addr: 0053BA70 */

void __thiscall dstrDESTROY::ProcessCDT_FIREABLE(dstrDESTROY *this,dmgDAMAGE *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(this + 0x163);
  *(float *)(this + 0x163) = fVar1 + fVar2;
  if (*(float *)(this + 0x15f) <= fVar1 + fVar2) {
    if ((*(uint *)(this + 0x14f) & 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0053baaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this + 0x84))();
      return;
    }
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffffb;
  }
  return;
}




/* from: gs_shared:dyn_destroy.cpp
   addr: 0053BAC0 */

void __thiscall dstrDESTROY::ProcessMP_NOTIFY(dstrDESTROY *this,gsEVENT *param_1)

{
  if ((*(int *)(param_1 + 4) == -100) && (*(int *)(*(int *)(param_1 + 8) + 4) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0053bade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this + 0x84))();
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:dyn_destroy.cpp
   addr: 0053BB00 */

void __thiscall dstrDESTROY::ProcessMP_GET_SYNC_DATA(dstrDESTROY *this,void *param_1)

{
  undefined *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_009632b0 & 1) == 0) {
      DAT_009632b0 = DAT_009632b0 | 1;
      DAT_0096328c = 0;
      DAT_0096328d = 0x40;
      DAT_00963290 = 0;
      _DAT_0096328e = 8;
      atexit((_func_4879 *)&__E18);
    }
    puVar1 = &DAT_0096328c;
    *(undefined1 **)param_1 = &DAT_0096328c;
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(this + 0x14f);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:dyn_destroy.cpp
   addr: 0053BB70 */

void __thiscall dstrDESTROY::ProcessMP_READ_SYNC_DATA(dstrDESTROY *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined *puVar2;
  short local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  local_6 = 0xffffffff;
  puVar2 = *(undefined **)param_1;
  local_10 = 0;
  if (puVar2 == (undefined *)0x0) {
    if ((DAT_009632b0 & 1) == 0) {
      DAT_009632b0 = DAT_009632b0 | 1;
      DAT_00963290 = 0;
      _DAT_0096328c = 0x84000;
      atexit((_func_4879 *)&__E18);
    }
    puVar2 = &DAT_0096328c;
    *(undefined **)param_1 = &DAT_0096328c;
    _DAT_0096328c = 0x84000;
    DAT_00963290 = 0;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  while ((iVar1 != 0 && (local_10 != 1))) {
    if (local_10 == 0xf0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2 + 4,4,4);
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_10);
  }
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:dyn_destroy.cpp
   addr: 0053BC60 */

void __thiscall dstrDESTROY::StartExplos(dstrDESTROY *this,int param_1)

{
  objOBJ *poVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  animINST *paVar5;
  entENTITY *peVar6;
  char *pcVar7;
  int iVar8;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  undefined1 auVar15 [16];
  float fVar16;
  float fStack_310;
  float local_30c;
  objOBJ *local_308;
  float local_304;
  int local_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined1 local_2e0;
  undefined1 local_2df;
  undefined2 local_2de;
  undefined4 local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  animCREATE_DATA local_228 [148];
  int iStack_194;
  objOBJ *local_190 [100];
  
  local_2d4 = DAT_00963740;
  local_2c8 = DAT_00963740;
  local_2e0 = 0;
  local_2df = 0x40;
  local_2dc = 8;
  local_2d8 = _m3dVZero;
  local_2d0 = DAT_00963744;
  local_2cc = _m3dVZero;
  local_2c4 = DAT_00963744;
  local_248 = 0;
  local_244 = 0x3f19999a;
  local_240 = 0x3f4ccccd;
  local_23c = 0x41200000;
  local_238 = 0x3e99999a;
  local_234 = 0xbf800000;
  local_230 = 0xbf800000;
  local_22c = 0xbf800000;
  local_2de = 0xb8;
  animCREATE_DATA::animCREATE_DATA(local_228);
  if ((*(uint *)(this + 0x14f) & 3) == 0) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 5;
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
    local_308 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_geom_orig);
    if (local_308 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(local_308,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    local_308 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_geom_debris_left);
    if (local_308 != (objOBJ *)0x0) {
      objOBJ::SetStateProcNo(local_308,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    if (param_1 != 0) {
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 2;
      return;
    }
    local_308 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_geom_debris);
    if (local_308 != (objOBJ *)0x0) {
      objOBJ::SetStateProcNo(local_308,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    animINST::Invalidate(*(animINST **)(this + 0xbc),6);
    if ((*(int *)(*(int *)(this + 0xbc) + 0x138) == 0) ||
       (*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x8c) < 1)) {
      if (local_308 == (objOBJ *)0x0) {
        rgdSHATTER_RIGID_START::StartExplos
                  ((rgdSHATTER_RIGID_START *)&DAT_00963294,(entENTITY *)this,0x14,8.0,3.0,1,0);
        return;
      }
      local_300 = objMakePtrList(&local_308,1,local_190,100);
      iVar9 = 1;
      if (1 < local_300) {
        do {
          uVar14 = (undefined8)in_ST4;
          uVar13 = (undefined8)in_ST2;
          m3dMakeVUnitConusRandom(&m3dVUnitY,(float)&local_2d8,(m3dV *)0x42b40000);
          local_30c = 4.0;
          animINST::GetFloat(*(animINST **)(this + 0xbc),s_DESTROY,s_iniSpeed,&local_30c);
          local_2d8 = local_2d8 * local_30c;
          local_304 = 0.05;
          local_2d4 = local_2d4 * local_30c;
          local_2d0 = local_2d0 * local_30c;
          animINST::GetFloat(*(animINST **)(this + 0xbc),s_DESTROY,s_iniMomentum,&local_304);
          local_2c4 = m3dRandRange(local_304,extraout_EDX);
          local_2cc = _m3dVUnitY * local_2c4;
          local_2c8 = DAT_005f9994 * local_2c4;
          local_2c4 = DAT_005f9998 * local_2c4;
          pcVar7 = *(char **)(*(int *)(this + 0xbc) + 0x20);
          if (pcVar7 == (char *)0x0) {
            pcVar7 = s_;
          }
          iVar8 = 7;
          bVar11 = true;
          pcVar10 = s_barrel;
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            bVar11 = *pcVar7 == *pcVar10;
            pcVar7 = pcVar7 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar11);
          if (bVar11) {
            uVar13 = uVar14;
            (**(code **)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x10) + 0xc0) + 0x24))
                      (&local_2f8);
            (**(code **)(*(int *)((&iStack_194)[iVar9] + 0xc0) + 0x24))(&fStack_2f0);
            local_2d8 = fStack_2ec - local_2f8;
            local_2d4 = fStack_2e8 - fStack_2f4;
            local_2d0 = fStack_2e4 - fStack_2f0;
            m3dNormalize((m3dV *)&local_2d8);
            in_ST3 = in_ST5;
            fVar16 = m3dRandRange(extraout_ECX,extraout_EDX_00);
            local_2d8 = local_2d8 * fVar16;
            local_23c = 0x41a00000;
            local_2d4 = local_2d4 * fVar16;
            local_2d0 = local_2d0 * fVar16;
            m3dMakeVUnitConusRandom(&m3dVUnitY,(float)&local_2cc,(m3dV *)0x43340000);
            fVar16 = m3dRandRange(extraout_ECX_00,extraout_EDX_01);
            local_2cc = local_2cc * fVar16;
            local_2c8 = local_2c8 * fVar16;
            local_2c4 = local_2c4 * fVar16;
          }
          poVar1 = local_190[iVar9];
          fStack_310 = (*(float *)(poVar1 + 200) - *(float *)(poVar1 + 0xd4)) *
                       (*(float *)(poVar1 + 200) - *(float *)(poVar1 + 0xd4)) +
                       (*(float *)(poVar1 + 0xcc) - *(float *)(poVar1 + 0xd8)) *
                       (*(float *)(poVar1 + 0xcc) - *(float *)(poVar1 + 0xd8)) +
                       (*(float *)(poVar1 + 0xd0) - *(float *)(poVar1 + 0xdc)) *
                       (*(float *)(poVar1 + 0xd0) - *(float *)(poVar1 + 0xdc));
          if (m3dSimdType == 0) {
            fStack_310 = fStack_310 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar15 = rsqrtss(ZEXT416((uint)fStack_310),ZEXT416((uint)fStack_310));
            fVar16 = auVar15._0_4_;
            fStack_310 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_310 * fVar16 * fVar16
                         ) * fStack_310;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar12 = (ulonglong)(uint)fStack_310;
            uVar13 = PackedFloatingReciprocalSQRAprox(uVar13,uVar12);
            in_ST3 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),uVar13);
            uVar14 = PackedFloatingMUL(uVar13,uVar13);
            uVar14 = PackedFloatingReciprocalSQRIter1(uVar14,uVar12);
            uVar13 = PackedFloatingReciprocalIter2(uVar14,uVar13);
            uVar13 = PackedFloatingMUL(uVar13,uVar12);
            fStack_310 = (float)uVar13;
            FastExitMediaState();
          }
          else {
            fStack_310 = SQRT(fStack_310);
          }
          fVar4 = fStack_310;
          iVar8 = *(int *)(*(int *)(this + 0xbc) + 0x10);
          fStack_2fc = fStack_310;
          fVar16 = *(float *)(iVar8 + 200) - *(float *)(iVar8 + 0xd4);
          fVar3 = *(float *)(iVar8 + 0xcc) - *(float *)(iVar8 + 0xd8);
          fVar2 = *(float *)(iVar8 + 0xd0) - *(float *)(iVar8 + 0xdc);
          fStack_310 = fVar16 * fVar16 + fVar3 * fVar3 + fVar2 * fVar2;
          in_ST2 = in_ST3;
          if (m3dSimdType == 0) {
            fStack_310 = fStack_310 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar15 = rsqrtss(ZEXT416((uint)fStack_310),ZEXT416((uint)fStack_310));
            fVar16 = auVar15._0_4_;
            fStack_310 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_310 * fVar16 * fVar16
                         ) * fStack_310;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar12 = (ulonglong)(uint)fStack_310;
            uVar13 = PackedFloatingReciprocalSQRAprox(uVar13,uVar12);
            uVar14 = PackedFloatingMUL(uVar13,uVar13);
            uVar14 = PackedFloatingReciprocalSQRIter1(uVar14,uVar12);
            uVar14 = PackedFloatingReciprocalIter2(uVar14,uVar13);
            uVar14 = PackedFloatingMUL(uVar14,uVar12);
            fStack_310 = (float)uVar14;
            FastExitMediaState();
            in_ST2 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),uVar13);
          }
          else {
            fStack_310 = SQRT(fStack_310);
          }
          fVar4 = fVar4 / fStack_310;
          fVar16 = ___real_00000000;
          if ((___real_3e800000 <= fVar4) && (fVar16 = ___real_3f800000, fVar4 <= ___real_3f800000))
          {
            fVar16 = (fVar4 - ___real_3e800000) * ___real_3faaaaab;
          }
          local_2cc = local_2cc * fVar16;
          local_2c8 = local_2c8 * fVar16;
          local_2c4 = local_2c4 * fVar16;
          in_ST4 = in_ST3;
          in_ST5 = in_ST3;
          paVar5 = scnSCENE::CreateInst(gsScenePtr,local_190[iVar9],(animCREATE_DATA *)0x0);
          if (paVar5 != (animINST *)0x0) {
            *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
            peVar6 = entCreate(s_nch_rigid,paVar5,&local_2e0,0);
            if (peVar6 != (entENTITY *)0x0) {
              *(uint *)(*(int *)(peVar6 + 0xbc) + 4) = *(uint *)(*(int *)(peVar6 + 0xbc) + 4) | 0x10
              ;
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_300);
      }
    }
  }
  return;
}

