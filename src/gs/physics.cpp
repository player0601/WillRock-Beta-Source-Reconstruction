
/* from: gs:physics.cpp
   addr: 004F63C0 */

int __fastcall physInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_phys,0x50485953,0x28,physPHYS::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  rgdInit();
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:physics.cpp
   addr: 004F63F0 */

entENTITY * __fastcall physPHYS::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  undefined4 *puVar2;
  
  this = (entENTITY *)operator_new(0x153);
  if (this == (entENTITY *)0x0) {
    return (entENTITY *)0x0;
  }
  entENTITY::entENTITY(this);
  *(undefined ***)this = &_vftable_;
  puVar2 = (undefined4 *)operator_new(0xb4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 0x17) = 0;
    *(undefined1 *)((int)puVar2 + 0x5d) = 0x40;
    *(undefined2 *)((int)puVar2 + 0x5e) = 0xffff;
    puVar2[0x18] = _m3dVZero;
    puVar2[0x19] = DAT_00963740;
    puVar2[0x1a] = DAT_00963744;
    puVar2[0x1b] = _m3dVZero;
    puVar2[0x1c] = DAT_00963740;
    uVar1 = DAT_00963744;
    puVar2[0x1e] = 0x3dcccccd;
    puVar2[0x1d] = uVar1;
    puVar2[0x1f] = DAT_005dc4f4;
    puVar2[0x20] = 1;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    puVar2[0x24] = 0;
    *(undefined2 *)((int)puVar2 + 0x5e) = 0x38;
    puVar2[0x2a] = 0;
    puVar2[0x2b] = 0;
    *puVar2 = &physMATH::_vftable_;
    m3dMATR::Identity((m3dMATR *)(puVar2 + 2));
    puVar2[0x2b] = this;
    *(undefined4 **)(this + 0x14f) = puVar2;
    return this;
  }
  *(undefined4 *)(this + 0x14f) = 0;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:physics.cpp
   addr: 004F64F0 */

physPHYS * __thiscall physPHYS::physPHYS(physPHYS *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  entENTITY::entENTITY((entENTITY *)this);
  *(undefined ***)this = &_vftable_;
  puVar2 = (undefined4 *)operator_new(0xb4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 0x17) = 0;
    *(undefined1 *)((int)puVar2 + 0x5d) = 0x40;
    *(undefined2 *)((int)puVar2 + 0x5e) = 0xffff;
    puVar2[0x18] = _m3dVZero;
    puVar2[0x19] = DAT_00963740;
    puVar2[0x1a] = DAT_00963744;
    puVar2[0x1b] = _m3dVZero;
    puVar2[0x1c] = DAT_00963740;
    uVar1 = DAT_00963744;
    puVar2[0x1e] = 0x3dcccccd;
    puVar2[0x1d] = uVar1;
    puVar2[0x1f] = DAT_005dc4f4;
    puVar2[0x20] = 1;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    puVar2[0x24] = 0;
    *(undefined2 *)((int)puVar2 + 0x5e) = 0x38;
    puVar2[0x2a] = 0;
    puVar2[0x2b] = 0;
    *puVar2 = &physMATH::_vftable_;
    m3dMATR::Identity((m3dMATR *)(puVar2 + 2));
    puVar2[0x2b] = this;
    *(undefined4 **)(this + 0x14f) = puVar2;
    return this;
  }
  *(undefined4 *)(this + 0x14f) = 0;
  return this;
}




/* from: gs:physics.cpp
   addr: 004F65E0
   addr: 004F65E0 */

void * __thiscall physPHYS::_vector_deleting_destructor_(physPHYS *this,uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 0x14f);
  *(undefined ***)this = &_vftable_;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &physMATH::_vftable_;
    operator_delete(puVar1);
  }
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:physics.cpp
   addr: 004F6620 */

void __thiscall physPHYS::~physPHYS(physPHYS *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 0x14f);
  *(undefined ***)this = &_vftable_;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &physMATH::_vftable_;
    operator_delete(puVar1);
  }
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  return;
}




/* from: gs:physics.cpp
   addr: 004F6650 */

int __thiscall
physPHYS::ProcessMsg(physPHYS *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  undefined4 uVar1;
  
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      (**(code **)(*(int *)this + 0x70))();
      return 0;
    }
    if (param_1 == 1) {
      (**(code **)(*(int *)this + 0x68))(param_2);
      return 0;
    }
    if (param_1 == 2) {
      (**(code **)(*(int *)this + 0x6c))();
      return 0;
    }
    if (param_1 == 3) {
      (**(code **)(*(int *)this + 0x74))(param_2);
      return 0;
    }
  }
  else if (param_1 == 0x3f9) {
    uVar1 = (**(code **)(*(int *)this + 0x78))(param_2);
    *(undefined4 *)param_3 = uVar1;
  }
  else if (param_1 == 0x40c) {
    (**(code **)(*(int *)this + 0x7c))(param_2);
    return 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:physics.cpp
   addr: 004F66D0 */

int __thiscall physPHYS::ProcessINIT(physPHYS *this,physINIT *param_1)

{
  physINIT *ppVar1;
  physPHYS pVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined **ppuStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  m3dV amStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  ppVar1 = param_1;
  if (*(int *)(this + 0x14f) != 0) {
    puVar4 = (undefined4 *)(*(int *)(this + 0xbc) + 0x60);
    puVar5 = (undefined4 *)(*(int *)(this + 0x14f) + 8);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = (**(code **)**(undefined4 **)(this + 0x14f))(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    uStack_10 = _m3dVZero;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_c = DAT_00963740;
    uStack_8 = DAT_00963744;
    uStack_4 = 0;
    uStack_30 = 0;
    ppuStack_38 = &cdtREFINE::_vftable_;
    uStack_34 = 2;
    animINST::GetPos(*(animINST **)(this + 0xbc),amStack_2c);
    scnSCENE::FloorPlace
              (gsScenePtr,amStack_2c,DAT_005dc4f4,(m3dV *)0x0,0.0,0.0,0,(cdtREFINE *)&ppuStack_38,
               (cdtINFO *)&uStack_20);
    entENTITY::ApplyColor((entENTITY *)this,(cdtINFO *)&uStack_20,0);
    in_MM1 = extraout_MM1;
  }
  this[0xfc] = (physPHYS)0xb;
  *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) | 0x100;
  fVar9 = *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
          *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
          *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18);
  if (m3dSimdType == 0) {
    fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar10 = auVar11._0_4_;
    param_1 = (physINIT *)
              (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar10 * fVar10) * fVar9);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar6 = (ulonglong)(uint)fVar9;
    uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar6);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
    uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
    in_MM1 = PackedFloatingMUL(uVar7,uVar6);
    param_1 = (physINIT *)in_MM1;
    FastExitMediaState();
  }
  else {
    param_1 = (physINIT *)SQRT(fVar9);
  }
  if (___real_3e4ccccd < (float)param_1) {
    fVar9 = *(float *)(ppVar1 + 0x10);
    fVar10 = *(float *)(ppVar1 + 0x18);
    fVar9 = fVar9 * fVar9 + fVar10 * fVar10;
    if (m3dSimdType == 0) {
      fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      param_1 = (physINIT *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar10 * fVar10) * fVar9);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar6 = (ulonglong)(uint)fVar9;
      uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar6);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar6);
      param_1 = (physINIT *)uVar7;
      FastExitMediaState();
    }
    else {
      param_1 = (physINIT *)SQRT(fVar9);
    }
    if (___real_3e4ccccd <= (float)param_1) {
      pVar2 = (physPHYS)((byte)this[0xfc] | 0x20);
    }
    else {
      pVar2 = (physPHYS)((byte)this[0xfc] | 0x40);
    }
    this[0xfc] = pVar2;
  }
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
  return 1;
}




/* from: gs:physics.cpp
   addr: 004F6960 */

void __thiscall physPHYS::ProcessTERM(physPHYS *this)

{
  if (*(int **)(this + 0x14f) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14f) + 4))();
    *(undefined4 *)(this + 0x14f) = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:physics.cpp
   addr: 004F6980 */

void __thiscall physPHYS::ProcessFRAME(physPHYS *this)

{
  int iVar1;
  undefined4 *puVar2;
  m3dMATR *pmVar3;
  undefined4 *puVar4;
  undefined **ppuStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  m3dV local_58 [12];
  m3dV local_4c [12];
  m3dMATR amStack_40 [64];
  
  if (((byte)this[0x88] & 1) == 0) {
    if (*(int **)(this + 0x14f) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x14f) + 8))();
      puVar2 = (undefined4 *)(*(int *)(this + 0x14f) + 8);
      pmVar3 = amStack_40;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pmVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        pmVar3 = pmVar3 + 4;
      }
      animINST::Transform(*(animINST **)(this + 0xbc),amStack_40,0);
    }
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(this + 0xbc) + 0x60);
    puVar4 = (undefined4 *)(*(int *)(this + 0x14f) + 8);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),local_4c);
    iVar1 = *(int *)(this + 0x14f);
    *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(this + 0xe0);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(this + 0xe4);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(this + 0xe8);
    m3dMATR::Translate((m3dMATR *)(*(int *)(this + 0x14f) + 8),local_4c,0);
  }
  if ((*(int *)(this + 0x14f) != 0) && ((*(byte *)(*(int *)(this + 0x14f) + 4) & 0x20) != 0)) {
    local_68 = _m3dVZero;
    local_60 = DAT_00963744;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    uStack_64 = DAT_00963740;
    uStack_5c = 0;
    uStack_7c = 0;
    ppuStack_84 = &cdtREFINE::_vftable_;
    uStack_80 = 2;
    animINST::GetPos(*(animINST **)(this + 0xbc),local_58);
    scnSCENE::FloorPlace
              (gsScenePtr,local_58,DAT_005dc4f4,(m3dV *)0x0,0.0,0.0,0,(cdtREFINE *)&ppuStack_84,
               (cdtINFO *)&local_78);
    entENTITY::ApplyColor((entENTITY *)this,(cdtINFO *)&local_78,1);
  }
  return;
}




/* from: gs:physics.cpp
   addr: 004F6AF0 */

void __thiscall physPHYS::ProcessDESTROY_ENT(physPHYS *this,entENTITY *param_1)

{
  if (*(int **)(this + 0x14f) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f6afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0x14f) + 0xc))();
    return;
  }
  return;
}




/* from: gs:physics.cpp
   addr: 004F6B10 */

int __thiscall physPHYS::ProcessCDT(physPHYS *this,cdtINFO *param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x14f) != 0) {
    entENTITY::ApplyColor((entENTITY *)this,param_1,0);
  }
  if (*(int **)(this + 0x14f) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x14f) + 0x10))(param_1);
    return iVar1;
  }
  return 0;
}




/* from: gs:physics.cpp
   addr: 004F6B50 */

void __thiscall physPHYS::AddEntCDTExclude(physPHYS *this,entENTITY *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x14f);
  if ((((iVar2 != 0) && (param_1 != (entENTITY *)0x0)) && (*(int *)(iVar2 + 0xa8) < 5)) &&
     (*(int *)(param_1 + 0xbc) != 0)) {
    *(entENTITY **)(iVar2 + 0x94 + *(int *)(iVar2 + 0xa8) * 4) = param_1;
    *(int *)(iVar2 + 0xa8) = *(int *)(iVar2 + 0xa8) + 1;
    if (*(int *)(iVar2 + 0xac) != 0) {
      puVar1 = (uint *)(*(int *)(iVar2 + 0xac) + 0xc);
      *puVar1 = *puVar1 | 2;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:physics.cpp
   addr: 004F6BB0 */

void __thiscall physPHYS::ProcessMP_GET_SYNC_DATA(physPHYS *this,void *param_1)

{
  int iVar1;
  undefined *puVar2;
  
                    /* WARNING: Load size is inaccurate */
  puVar2 = *param_1;
  if (puVar2 == (undefined *)0x0) {
    if ((DAT_00947cc4 & 1) == 0) {
      DAT_00947cc4 = DAT_00947cc4 | 1;
      DAT_00947cb4 = 0;
      DAT_00947cb5 = 0x40;
      DAT_00947cb8 = _m3dVZero;
      DAT_00947cbc = DAT_00963740;
      DAT_00947cc0 = DAT_00963744;
      _DAT_00947cb6 = 0x10;
      atexit((_func_4879 *)&__E12);
    }
    puVar2 = &DAT_00947cb4;
    *(undefined1 **)param_1 = &DAT_00947cb4;
  }
  iVar1 = *(int *)(this + 0x14f);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x50);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: gs:physics.cpp
   addr: 004F6C50 */

void __thiscall physPHYS::ProcessMP_WRITE_SYNC_DATA(physPHYS *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  local_e = 0xffffffff;
  local_a = 0xffffffff;
  iVar1 = *(int *)param_1;
  local_6 = 0xffffffff;
  local_10 = 0;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
  (**(code **)(**(int **)(param_1 + 4) + 0x18))(iVar1 + 4,0xc,4);
  fioFILE::UpdateChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&stack0xffffffe4);
  fioFILE::WriteLastChunk(*(fioFILE **)(param_1 + 4));
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:physics.cpp
   addr: 004F6CC0 */

void __thiscall physPHYS::ProcessMP_READ_SYNC_DATA(physPHYS *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined *puVar2;
  short local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_10;
  
  puVar2 = *(undefined **)param_1;
  local_20 = 0;
  local_1e = 0xffffffff;
  local_1a = 0xffffffff;
  local_16 = 0xffffffff;
  if (puVar2 == (undefined *)0x0) {
    if ((DAT_00947cc4 & 1) == 0) {
      DAT_00947cc4 = DAT_00947cc4 | 1;
      DAT_00947cb8 = _m3dVZero;
      DAT_00947cbc = DAT_00963740;
      DAT_00947cc0 = DAT_00963744;
      _DAT_00947cb4 = 0x104000;
      atexit((_func_4879 *)&__E12);
    }
    puVar2 = &DAT_00947cb4;
    *(undefined **)param_1 = &DAT_00947cb4;
    local_10 = 0x104000;
    DAT_00947cb8 = _m3dVZero;
    _DAT_00947cb4 = 0x104000;
    DAT_00947cbc = DAT_00963740;
    DAT_00947cc0 = DAT_00963744;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_20);
  while ((iVar1 != 0 && (local_20 != 1))) {
    if (local_20 == 0xf0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2 + 4,0xc,4);
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_20);
  }
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: gs:physics.cpp
   addr: 004F6DE0 */

void __thiscall physPHYS::ProcessMP_NOTIFY(physPHYS *this,gsEVENT *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == -100) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(this + 0x14f);
    *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar1 + 0xc);
  }
  return;
}




/* from: gs:physics.cpp
   addr: 004F6E10 */

int __thiscall physMATH::ProcessINIT(physMATH *this,physINIT *param_1)

{
  uint *puVar1;
  int iVar2;
  physINIT *ppVar3;
  physMATH *ppVar4;
  
  ppVar3 = param_1;
  ppVar4 = this + 0x5c;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)ppVar4 = *(undefined4 *)ppVar3;
    ppVar3 = ppVar3 + 4;
    ppVar4 = ppVar4 + 4;
  }
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  if (*(int *)(this + 0xac) != 0) {
    puVar1 = (uint *)(*(int *)(*(int *)(this + 0xac) + 0xbc) + 4);
    *puVar1 = *puVar1 | 0x10;
  }
  *(undefined4 *)(this + 0xa8) = 0;
  return 1;
}




/* from: gs:physics.cpp
   addr: 004F6EA0 */

void __thiscall physMATH::ProcessTERM(physMATH *this)

{
  if (this != (physMATH *)0x0) {
    *(undefined ***)this = &_vftable_;
    operator_delete(this);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:physics.cpp
   addr: 004F6EC0 */

void __thiscall physMATH::ProcessFRAME(physMATH *this)

{
  msgADDR *pmVar1;
  float fVar2;
  
  (**(code **)(*(int *)this + 0x18))();
  fVar2 = gsElapsedTime + *(float *)(this + 0x54);
  *(float *)(this + 0x54) = fVar2;
  if ((*(float *)(this + 0x7c) < fVar2) && (___real_00000000 < *(float *)(this + 0x7c))) {
    pmVar1 = *(msgADDR **)(this + 0xac);
    if (pmVar1 == (msgADDR *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f6f11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this + 4))();
      return;
    }
    msgSYSTEM::PostMsg(&msgSystem,pmVar1,2,pmVar1);
  }
  return;
}




/* from: gs:physics.cpp
   addr: 004F6F20 */

void __thiscall physMATH::ProcessPhysics(physMATH *this)

{
  uint uVar1;
  int iVar2;
  m3dV local_18 [4];
  m3dV amStack_14 [8];
  undefined1 auStack_c [12];
  
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 & 1) != 0) {
    *(uint *)(this + 4) = uVar1 & 0xfffffffe;
    return;
  }
  if ((uVar1 & 0x10) == 0) {
    m3dMATR::GetOrigin((m3dMATR *)(this + 8),local_18);
    iVar2 = (**(code **)(*(int *)this + 0x14))();
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x58) = 0;
    }
    else {
      iVar2 = *(int *)(this + 0x58);
      *(int *)(this + 0x58) = iVar2 + 1;
      if (3 < iVar2 + 1) {
        *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
        return;
      }
    }
    (**(code **)(*(int *)this + 0x1c))(local_18,auStack_c);
    ProcessCollision(this,(m3dV *)&stack0xffffffe0,amStack_14);
    m3dMATR::Translate((m3dMATR *)(this + 8),amStack_14,0);
  }
  return;
}




/* from: gs:physics.cpp
   addr: 004F6FB0 */

void __thiscall physMATH::CalcNewPos(physMATH *this,m3dV *param_1,m3dV *param_2)

{
  float fVar1;
  
  fVar1 = gsElapsedTime;
  *(float *)(this + 0x48) = gsElapsedTime * *(float *)(this + 0x6c) + *(float *)(this + 0x48);
  *(float *)(this + 0x4c) = fVar1 * *(float *)(this + 0x70) + *(float *)(this + 0x4c);
  *(float *)(this + 0x50) = fVar1 * *(float *)(this + 0x74) + *(float *)(this + 0x50);
  fVar1 = gsElapsedTime;
  *(float *)param_2 = gsElapsedTime * *(float *)(this + 0x48) + *(float *)param_1;
  *(float *)(param_2 + 4) = fVar1 * *(float *)(this + 0x4c) + *(float *)(param_1 + 4);
  *(float *)(param_2 + 8) = fVar1 * *(float *)(this + 0x50) + *(float *)(param_1 + 8);
  return;
}




/* from: gs:physics.cpp
   addr: 004F7010 */

void __thiscall physDRIFT_MATH::CalcNewPos(physDRIFT_MATH *this,m3dV *param_1,m3dV *param_2)

{
  float fVar1;
  
  fVar1 = gsElapsedTime;
  *(float *)(this + 0x48) = gsElapsedTime * *(float *)(this + 0x6c) + *(float *)(this + 0x48);
  *(float *)(this + 0x4c) = fVar1 * *(float *)(this + 0x70) + *(float *)(this + 0x4c);
  *(float *)(this + 0x50) = fVar1 * *(float *)(this + 0x74) + *(float *)(this + 0x50);
  fVar1 = gsElapsedTime;
  *(float *)param_2 = gsElapsedTime * *(float *)(this + 0x48) + *(float *)param_1;
  *(float *)(param_2 + 4) = fVar1 * *(float *)(this + 0x4c) + *(float *)(param_1 + 4);
  *(float *)(param_2 + 8) = fVar1 * *(float *)(this + 0x50) + *(float *)(param_1 + 8);
  *(float *)param_2 = *(float *)(this + 0xb4) + *(float *)param_2;
  *(float *)(param_2 + 4) = *(float *)(this + 0xb8) + *(float *)(param_2 + 4);
  *(float *)(param_2 + 8) = *(float *)(this + 0xbc) + *(float *)(param_2 + 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:physics.cpp
   addr: 004F7090 */

void __thiscall physMATH::ProcessCollision(physMATH *this,m3dV *param_1,m3dV *param_2)

{
  m3dV *pmVar1;
  msgADDR *pmVar2;
  float fVar3;
  animINST *paVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 extraout_MM1_01;
  undefined8 extraout_MM1_02;
  undefined8 extraout_MM1_03;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_MM1_04;
  float fVar9;
  undefined1 auVar10 [16];
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined **local_84;
  uint local_80;
  physMATH *local_74;
  uint local_70 [4];
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  scnAOBJ local_50 [80];
  
  if (*(int *)(this + 0xac) == 0) {
    paVar4 = (animINST *)0x0;
  }
  else {
    paVar4 = *(animINST **)(*(int *)(this + 0xac) + 0xbc);
  }
  entCDT_REFINE_EXCL::entCDT_REFINE_EXCL
            ((entCDT_REFINE_EXCL *)&local_84,*(int *)(this + 0x8c),*(int *)(this + 0x90),paVar4);
  local_a8 = *(float *)param_2 - *(float *)param_1;
  local_5c = DAT_00963740;
  local_84 = &physCDT_REFINE::_vftable_;
  local_a4 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  local_60 = _m3dVZero;
  local_58 = DAT_00963744;
  local_a0 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  local_54 = 0;
  local_c4 = local_a4 * local_a4 + local_a0 * local_a0 + local_a8 * local_a8;
  if (m3dSimdType == 0) {
    local_c4 = local_c4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)local_c4),ZEXT416((uint)local_c4));
    fVar9 = auVar10._0_4_;
    local_c4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_c4 * fVar9 * fVar9) * local_c4;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar6 = (ulonglong)(uint)local_c4;
    uVar7 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar6);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
    uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
    uVar7 = PackedFloatingMUL(uVar7,uVar6);
    local_c4 = (float)uVar7;
    FastExitMediaState();
  }
  else {
    local_c4 = SQRT(local_c4);
  }
  local_74 = this;
  iVar5 = _m3dNormalize((m3dV *)&local_a8);
  uVar7 = extraout_MM1_00;
  if (iVar5 == 0) {
    m3dMATR::GetAxisZ((m3dMATR *)(this + 8),(m3dV *)&local_a8);
    local_c4 = 0.1;
    uVar7 = extraout_MM1_01;
  }
  if (((byte)this[4] & 4) == 0) {
    iVar5 = scnSCENE::ShootRay(gsScenePtr,param_1,(m3dV *)&local_a8,local_c4,0x20,
                               (cdtREFINE *)&local_84,(cdtINFO *)local_70);
  }
  else {
    local_c4 = *(float *)(this + 0x48) * *(float *)(this + 0x48) +
               *(float *)(this + 0x4c) * *(float *)(this + 0x4c) +
               *(float *)(this + 0x50) * *(float *)(this + 0x50);
    if (m3dSimdType == 0) {
      local_c4 = local_c4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar10 = rsqrtss(ZEXT416((uint)local_c4),ZEXT416((uint)local_c4));
      fVar9 = auVar10._0_4_;
      local_c4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_c4 * fVar9 * fVar9) * local_c4
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar6 = (ulonglong)(uint)local_c4;
      uVar7 = PackedFloatingReciprocalSQRAprox(uVar7,uVar6);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar6);
      local_c4 = (float)uVar7;
      FastExitMediaState();
    }
    else {
      local_c4 = SQRT(local_c4);
    }
    local_c4 = (float)(uint)(ABS(local_c4) < ___real_3d4ccccd);
    if (((float)(int)local_c4 == ___real_00000000) ||
       ((-1 < *(int *)(this + 0x80) && (*(int *)(this + 0x80) <= *(int *)(this + 0xb0))))) {
      local_c4 = 0.0;
    }
    else {
      local_c4 = 0.2;
    }
    *(float *)(param_1 + 4) = local_c4 + *(float *)(param_1 + 4);
    *(float *)(param_2 + 4) = local_c4 + *(float *)(param_2 + 4);
    iVar5 = scnSCENE::ConstrSphere
                      (gsScenePtr,param_1,param_2,*(float *)(this + 0x78),0x20,
                       (cdtREFINE *)&local_84,(cdtINFO *)local_70);
    *(float *)(param_1 + 4) = *(float *)(param_1 + 4) - local_c4;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) - local_c4;
    local_5c = local_5c - local_c4;
  }
  if (iVar5 == 0) {
    if (((byte)this[4] & 2) == 0) {
      return;
    }
    iVar5 = scnSCENE::MakeAnimList
                      (gsScenePtr,param_1,param_2,*(float *)(this + 0x78),(cdtREFINE *)&local_84,
                       local_50,10);
    if (iVar5 < 1) {
      return;
    }
    local_80 = local_80 | 1;
    scnSCENE::ConstrSphere
              (gsScenePtr,param_1,param_2,*(float *)(this + 0x78),0,(cdtREFINE *)&local_84,
               (cdtINFO *)local_70);
    if ((local_70[0] & 2) == 0) {
      return;
    }
  }
  *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
  m3dMATR::Translate((m3dMATR *)(this + 8),(m3dV *)&local_60,0);
  if ((*(int *)(this + 0x80) < 1) || (*(int *)(this + 0xb0) < *(int *)(this + 0x80))) {
    pmVar2 = *(msgADDR **)(this + 0xac);
    if (pmVar2 == (msgADDR *)0x0) {
      iVar5 = (**(code **)(*(int *)this + 0x10))(local_70);
    }
    else {
      iVar5 = msgSYSTEM::SendMsg(&msgSystem,pmVar2,0x3f9,local_70,pmVar2);
    }
    if (iVar5 == 0) goto LAB_004f7482;
  }
  pmVar2 = *(msgADDR **)(this + 0xac);
  if (pmVar2 == (msgADDR *)0x0) {
    (**(code **)(*(int *)this + 4))();
    return;
  }
  msgSYSTEM::PostMsg(&msgSystem,pmVar2,2,pmVar2);
LAB_004f7482:
  if (((byte)this[4] & 4) == 0) {
    scnSCENE::GetCDTFace(gsScenePtr,(cdtINFO *)local_70,(m3dPOLY *)0x0,(m3dV *)&local_b4);
    m3dMirrorPointPlane((m3dV *)&local_60,(m3dV *)&local_b4,param_2,param_2);
    local_a8 = *(float *)param_2 - local_60;
    local_94 = *(float *)(this + 0x88);
    local_a4 = *(float *)(param_2 + 4) - local_5c;
    local_a0 = *(float *)(param_2 + 8) - local_58;
    fVar9 = local_b0 * local_a4 + local_ac * local_a0 + local_b4 * local_a8;
    local_90 = local_b4 * fVar9;
    local_8c = local_b0 * fVar9;
    local_88 = local_ac * fVar9;
    local_9c = (local_a8 - local_b4 * fVar9) * local_94;
    local_98 = (local_a4 - local_b0 * fVar9) * local_94;
    local_94 = (local_a0 - local_ac * fVar9) * local_94;
    local_b8 = *(float *)(this + 0x84);
    local_c0 = local_90 * local_b8;
    local_bc = local_8c * local_b8;
    local_b8 = local_88 * local_b8;
    local_c4 = local_bc * local_bc + local_b8 * local_b8 + local_c0 * local_c0;
    if (m3dSimdType == 0) {
      local_c4 = local_c4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar10 = rsqrtss(ZEXT416((uint)local_c4),ZEXT416((uint)local_c4));
      fVar9 = auVar10._0_4_;
      local_c4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_c4 * fVar9 * fVar9) * local_c4
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar6 = (ulonglong)(uint)local_c4;
      uVar7 = PackedFloatingReciprocalSQRAprox(extraout_MM1_02,uVar6);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar6);
      local_c4 = (float)uVar7;
      FastExitMediaState();
    }
    else {
      local_c4 = SQRT(local_c4);
    }
    local_c4 = (float)(uint)(ABS(local_c4) < ___real_3a83126f);
    if ((float)(int)local_c4 != ___real_00000000) {
      iVar5 = _m3dNormalize((m3dV *)&local_90);
      local_b8 = DAT_005f9998;
      local_c0 = _m3dVUnitY;
      local_bc = DAT_005f9994;
      if (iVar5 != 0) {
        local_b8 = local_88;
        local_c0 = local_90;
        local_bc = local_8c;
      }
      local_bc = local_bc * ___real_3a83126f;
      local_c0 = local_c0 * ___real_3a83126f;
      local_b8 = local_b8 * ___real_3a83126f;
    }
    *(float *)param_2 = local_c0 + local_9c + local_60;
    *(float *)(param_2 + 4) = local_bc + local_98 + local_5c;
    *(float *)(param_2 + 8) = local_b8 + local_94 + local_58;
    pmVar1 = (m3dV *)(this + 0x48);
    m3dMirrorPointPlane(&m3dVZero,(m3dV *)&local_b4,pmVar1,pmVar1);
    local_94 = *(float *)(this + 0x88);
    fVar9 = local_b0 * *(float *)(this + 0x4c) +
            local_ac * *(float *)(this + 0x50) + local_b4 * *(float *)pmVar1;
    fVar3 = local_b4 * *(float *)pmVar1 +
            local_b0 * *(float *)(this + 0x4c) + local_ac * *(float *)(this + 0x50);
    local_9c = (*(float *)pmVar1 - local_b4 * fVar9) * local_94;
    local_98 = (*(float *)(this + 0x4c) - local_b0 * fVar9) * local_94;
    local_94 = (*(float *)(this + 0x50) - local_ac * fVar9) * local_94;
    local_b8 = *(float *)(this + 0x84);
    local_c0 = local_b4 * fVar3 * local_b8;
    local_bc = local_b0 * fVar3 * local_b8;
    local_b8 = local_ac * fVar3 * local_b8;
    local_c4 = local_bc * local_bc + local_b8 * local_b8 + local_c0 * local_c0;
    if (m3dSimdType == 0) {
      local_c4 = local_c4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar10 = rsqrtss(ZEXT416((uint)local_c4),ZEXT416((uint)local_c4));
      fVar9 = auVar10._0_4_;
      local_c4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_c4 * fVar9 * fVar9) * local_c4
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar6 = (ulonglong)(uint)local_c4;
      uVar7 = PackedFloatingReciprocalSQRAprox(extraout_MM1_03,uVar6);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar6);
      local_c4 = (float)uVar7;
      FastExitMediaState();
    }
    else {
      local_c4 = SQRT(local_c4);
    }
  }
  else {
    scnSCENE::GetCDTFace(gsScenePtr,(cdtINFO *)local_70,(m3dPOLY *)0x0,(m3dV *)&local_b4);
    pmVar1 = (m3dV *)(this + 0x48);
    m3dMirrorPointPlane(&m3dVZero,(m3dV *)&local_b4,pmVar1,pmVar1);
    local_94 = *(float *)(this + 0x88);
    fVar9 = local_b0 * *(float *)(this + 0x4c) +
            local_ac * *(float *)(this + 0x50) + local_b4 * *(float *)pmVar1;
    fVar3 = local_b4 * *(float *)pmVar1 +
            local_b0 * *(float *)(this + 0x4c) + local_ac * *(float *)(this + 0x50);
    local_9c = local_94 * (*(float *)pmVar1 - local_b4 * fVar9);
    local_98 = (*(float *)(this + 0x4c) - local_b0 * fVar9) * local_94;
    local_94 = (*(float *)(this + 0x50) - local_ac * fVar9) * local_94;
    local_c4 = local_98 * local_98 + local_94 * local_94 + local_9c * local_9c;
    uVar7 = extraout_MM1_04;
    if (m3dSimdType == 0) {
      local_c4 = local_c4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar10 = rsqrtss(ZEXT416((uint)local_c4),ZEXT416((uint)local_c4));
      fVar9 = auVar10._0_4_;
      local_c4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_c4 * fVar9 * fVar9) * local_c4
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar6 = (ulonglong)(uint)local_c4;
      uVar7 = PackedFloatingReciprocalSQRAprox(extraout_MM1_04,uVar6);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar6);
      local_c4 = (float)uVar7;
      FastExitMediaState();
    }
    else {
      local_c4 = SQRT(local_c4);
    }
    if (local_c4 < ___real_3e4ccccd) {
      local_9c = _m3dVZero;
      local_98 = DAT_00963740;
      local_94 = DAT_00963744;
    }
    local_b8 = *(float *)(this + 0x84);
    local_c0 = local_b4 * fVar3 * local_b8;
    local_bc = local_b0 * fVar3 * local_b8;
    local_b8 = local_ac * fVar3 * local_b8;
    local_c4 = local_bc * local_bc + local_b8 * local_b8 + local_c0 * local_c0;
    if (m3dSimdType == 0) {
      local_c4 = local_c4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar10 = rsqrtss(ZEXT416((uint)local_c4),ZEXT416((uint)local_c4));
      fVar9 = auVar10._0_4_;
      local_c4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_c4 * fVar9 * fVar9) * local_c4
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar6 = (ulonglong)(uint)local_c4;
      uVar7 = PackedFloatingReciprocalSQRAprox(uVar7,uVar6);
      uVar8 = PackedFloatingMUL(uVar7,uVar7);
      uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
      uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
      uVar7 = PackedFloatingMUL(uVar7,uVar6);
      local_c4 = (float)uVar7;
      FastExitMediaState();
    }
    else {
      local_c4 = SQRT(local_c4);
    }
  }
  if (local_c4 < ___real_3f19999a) {
    local_b8 = DAT_00963744;
    local_c0 = _m3dVZero;
    local_bc = DAT_00963740;
  }
  *(float *)(this + 0x48) = local_c0 + local_9c;
  *(float *)(this + 0x4c) = local_bc + local_98;
  *(float *)(this + 0x50) = local_b8 + local_94;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  return;
}




/* from: gs:physics.cpp
   addr: 004F7BC0 */

void __thiscall physMATH::ProcessDESTROY_ENT(physMATH *this,entENTITY *param_1)

{
  physMATH *ppVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xa8)) {
    ppVar1 = this + 0x94;
    do {
      if (*(entENTITY **)ppVar1 == param_1) {
        *(int *)ppVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      ppVar1 = ppVar1 + 4;
    } while (iVar2 < *(int *)(this + 0xa8));
  }
  return;
}




/* from: gs:physics.cpp
   addr: 004F7C00 */

void __thiscall physMATH::AddEntCDTExclude(physMATH *this,entENTITY *param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0xa8) < 5) {
    if (*(int *)(param_1 + 0xbc) != 0) {
      *(entENTITY **)(this + *(int *)(this + 0xa8) * 4 + 0x94) = param_1;
      *(int *)(this + 0xa8) = *(int *)(this + 0xa8) + 1;
      iVar1 = *(int *)(this + 0xac);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 2;
      }
    }
  }
  return;
}




/* from: gs:physics.cpp
   addr: 004F7C60 */

void __thiscall physMATH::SetPos(physMATH *this,m3dV *param_1)

{
  m3dMATR::Translate((m3dMATR *)(this + 8),param_1,0);
  return;
}




/* from: gs:physics.cpp
   addr: 004F7C80 */

int __thiscall physCDT_REFINE::IsInclInst(physCDT_REFINE *this,animINST *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(*(int *)(this + 0x10) + 0xa8);
  iVar1 = 0;
  if (0 < iVar2) {
    piVar3 = (int *)(*(int *)(this + 0x10) + 0x94);
    do {
      if (*piVar3 == *(int *)(param_1 + 0x13c)) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < iVar2);
  }
  iVar2 = entCDT_REFINE_EXCL::IsInclInst((entCDT_REFINE_EXCL *)this,param_1);
  return iVar2;
}




/* from: gs:physics.cpp
   addr: 004F7CD0 */

void __thiscall
entCDT_REFINE_EXCL::entCDT_REFINE_EXCL
          (entCDT_REFINE_EXCL *this,int param_1,int param_2,animINST *param_3)

{
  *(undefined4 *)(this + 4) = 0;
  *(animINST **)(this + 8) = param_3;
  *(undefined ***)this = &cdtREFINE::_vftable_;
  *(uint *)(this + 4) = *(uint *)(this + 4) | param_1;
  *(int *)(this + 0xc) = param_2;
  *(undefined ***)this = &_vftable_;
  return;
}

