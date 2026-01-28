
/* from: gs:ent_mp.cpp
   addr: 004F7D10 */

int __thiscall entIACTIVE_OBJ::IsMPSynchableExisting(entIACTIVE_OBJ *this)

{
  if ((*(int *)(this + 0x8c) != -1) && (*(int *)(this + 0x8c) != -3)) {
    return (uint)(((byte)this[0xc] & 0xc) == 0);
  }
  return 0;
}




/* from: gs:ent_mp.cpp
   addr: 004F7D30 */

int __thiscall entENTITY::IsMPSynchableExisting(entENTITY *this)

{
  if (((*(int *)(this + 0x8c) != -1) && (*(int *)(this + 0x8c) != -3)) &&
     (((byte)this[0xc] & 0xc) == 0)) {
    return 1;
  }
  return 0;
}




/* from: gs:ent_mp.cpp
   addr: 004F7D60 */

void __thiscall entENTITY::GetMPSysSyncData(entENTITY *this,gsMSG_MP_SYNC *param_1)

{
  gsMSG_MP_SYNC gVar1;
  short sVar2;
  msgDATA *pmVar3;
  char *pcVar4;
  uint uVar5;
  gsMSG_MP_SYNC *pgVar6;
  msgDATA *pmVar7;
  
  pcVar4 = *(char **)(*(int *)(this + 0xbc) + 0x18);
  if ((gsMSG_MP_SYNC *)pcVar4 == (gsMSG_MP_SYNC *)0x0) {
    pcVar4 = s_;
  }
  pgVar6 = param_1 + 0x98;
  do {
    gVar1 = (gsMSG_MP_SYNC)*pcVar4;
    pcVar4 = (char *)((gsMSG_MP_SYNC *)pcVar4 + 1);
    *pgVar6 = gVar1;
    pgVar6 = pgVar6 + 1;
  } while (gVar1 != (gsMSG_MP_SYNC)0x0);
  pcVar4 = *(char **)(*(int *)(this + 0xbc) + 0x20);
  if ((gsMSG_MP_SYNC *)pcVar4 == (gsMSG_MP_SYNC *)0x0) {
    pcVar4 = s_;
  }
  pgVar6 = param_1 + 0x18;
  do {
    gVar1 = (gsMSG_MP_SYNC)*pcVar4;
    pcVar4 = (char *)((gsMSG_MP_SYNC *)pcVar4 + 1);
    *pgVar6 = gVar1;
    pgVar6 = pgVar6 + 1;
  } while (gVar1 != (gsMSG_MP_SYNC)0x0);
  pcVar4 = *(char **)(*(int *)(this + 0xbc) + 0x1c);
  if ((gsMSG_MP_SYNC *)pcVar4 == (gsMSG_MP_SYNC *)0x0) {
    pcVar4 = s_;
  }
  pgVar6 = param_1 + 0x58;
  do {
    gVar1 = (gsMSG_MP_SYNC)*pcVar4;
    pcVar4 = (char *)((gsMSG_MP_SYNC *)pcVar4 + 1);
    *pgVar6 = gVar1;
    pgVar6 = pgVar6 + 1;
  } while (gVar1 != (gsMSG_MP_SYNC)0x0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(*(int *)(this + 0xbc) + 0x130);
  *(uint *)(param_1 + 0x10) = *(uint *)(this + 0xb4) & 1;
  animINST::MakeCreateData(*(animINST **)(this + 0xbc),(animCREATE_DATA *)(param_1 + 0xdc));
  if (*(int *)(this + 0x145) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  (**(code **)(*(int *)DAT_009574c4 + 0x1c))(*(int *)(this + 0x145),0x400,0x15);
  pmVar3 = msgSYSTEM::UnPack(&msgSystem,DAT_009574c4);
  (**(code **)(*(int *)DAT_009574c4 + 8))();
  sVar2 = *(short *)(pmVar3 + 2);
  pmVar7 = (msgDATA *)&DAT_00947cc8;
  for (uVar5 = (uint)(int)sVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pmVar7 = *(undefined4 *)pmVar3;
    pmVar3 = pmVar3 + 4;
    pmVar7 = pmVar7 + 4;
  }
  for (uVar5 = (int)sVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pmVar7 = *pmVar3;
    pmVar3 = pmVar3 + 1;
    pmVar7 = pmVar7 + 1;
  }
  *(undefined4 **)(param_1 + 4) = &DAT_00947cc8;
  return;
}




/* from: gs:ent_mp.cpp
   addr: 004F7E60 */

int __thiscall entIACTIVE_OBJ::IdentifyMPSysSyncData(entIACTIVE_OBJ *this,gsMSG_MP_SYNC *param_1)

{
  entIACTIVE_OBJ eVar1;
  entIACTIVE_OBJ *peVar2;
  entIACTIVE_OBJ *peVar3;
  bool bVar4;
  
  peVar3 = this + 0x44;
  peVar2 = (entIACTIVE_OBJ *)(param_1 + 0x98);
  while( true ) {
    eVar1 = *peVar2;
    bVar4 = (byte)eVar1 < (byte)*peVar3;
    if (eVar1 != *peVar3) break;
    if (eVar1 == (entIACTIVE_OBJ)0x0) {
      return 1;
    }
    eVar1 = peVar2[1];
    bVar4 = (byte)eVar1 < (byte)peVar3[1];
    if (eVar1 != peVar3[1]) break;
    peVar2 = peVar2 + 2;
    peVar3 = peVar3 + 2;
    if (eVar1 == (entIACTIVE_OBJ)0x0) {
      return 1;
    }
  }
  return (uint)(1 - bVar4 == (uint)(bVar4 != 0));
}




/* from: gs:ent_mp.cpp
   addr: 004F7EC0 */

void __thiscall entENTITY::GetMP_UPD_POS(entENTITY *this,gsMSG_MP_UPD_POS *param_1)

{
  (**(code **)(*(int *)this + 0x4c))(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x3c);
  *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
  return;
}




/* from: gs:ent_mp.cpp
   addr: 004F7EF0 */

void __thiscall entENTITY::ProcessMP_UPD_POS(entENTITY *this,gsMSG_MP_UPD_POS *param_1)

{
  uint uVar1;
  int iVar2;
  entENTITY *peVar3;
  entENTITY *peVar4;
  
  if (*(uint *)(this + 0x14b) <= *(uint *)(param_1 + 4)) {
    peVar3 = (entENTITY *)(param_1 + 8);
    peVar4 = this + 0xfc;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)peVar4 = *(undefined4 *)peVar3;
      peVar3 = peVar3 + 4;
      peVar4 = peVar4 + 4;
    }
    uVar1 = *(uint *)(this + 0xb4);
    *peVar4 = *peVar3;
    *(uint *)(this + 0xb4) = uVar1 | 0x200;
    *(undefined4 *)(this + 0x14b) = *(undefined4 *)(param_1 + 4);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ent_mp.cpp
   addr: 004F7F40 */

void __thiscall entENTITY::UpdateMP_UPD_POS(entENTITY *this)

{
  entENTITY eVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  m3dMATR *pmVar5;
  m3dV local_4c [12];
  m3dMATR local_40 [64];
  
  fVar2 = gsElapsedTime;
  if ((*(uint *)(this + 0xb4) & 0x200) == 0) {
    if (___real_3ba3d70a < ABS(*(float *)(this + 0x125))) {
      *(float *)(this + 0x121) = gsElapsedTime * *(float *)(this + 0x139) + *(float *)(this + 0x121)
      ;
      *(float *)(this + 0x125) = fVar2 * *(float *)(this + 0x13d) + *(float *)(this + 0x125);
      *(float *)(this + 0x129) = fVar2 * *(float *)(this + 0x141) + *(float *)(this + 0x129);
    }
    fVar2 = gsElapsedTime;
    *(float *)(this + 0xfd) = gsElapsedTime * *(float *)(this + 0x121) + *(float *)(this + 0xfd);
    *(float *)(this + 0x101) = fVar2 * *(float *)(this + 0x125) + *(float *)(this + 0x101);
    *(float *)(this + 0x105) = fVar2 * *(float *)(this + 0x129) + *(float *)(this + 0x105);
  }
  eVar1 = this[0xfc];
  if (((((byte)eVar1 & 1) == 0) || (((byte)eVar1 & 2) == 0)) || (((byte)eVar1 & 4) == 0)) {
    if ((((byte)eVar1 & 1) == 0) || (((byte)eVar1 & 2) == 0)) {
      puVar4 = (undefined4 *)(*(int *)(this + 0xbc) + 0x60);
      pmVar5 = local_40;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pmVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        pmVar5 = pmVar5 + 4;
      }
      m3dMATR::Translate(local_40,(m3dV *)(this + 0xfd),0);
    }
    else {
      m3dMATR::MakeLCS2WCS_VZ(local_40,(m3dV *)(this + 0xfd),(m3dV *)(this + 0x115));
    }
  }
  else {
    m3dMATR::MakeLCS2WCS
              (local_40,(m3dV *)(this + 0xfd),(m3dV *)(this + 0x109),(m3dV *)0x0,
               (m3dV *)(this + 0x115));
  }
  if (((byte)this[0x88] & 0x20) == 0) {
    animINST::Transform(*(animINST **)(this + 0xbc),local_40,0);
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)(this + 0x121);
    *(undefined4 *)(this + 0xe4) = *(undefined4 *)(this + 0x125);
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0x129);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_4c);
  }
  *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) & 0xfffffdff;
  return;
}




/* from: gs:ent_mp.cpp
   addr: 004F80E0 */

void __thiscall entENTITY::GetDeadReckonData(entENTITY *this,entMP_DEADRECKON *param_1)

{
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)(param_1 + 1));
  m3dMATR::GetAxisZ((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),(m3dV *)(param_1 + 0x19));
  m3dMATR::GetAxisX((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),(m3dV *)(param_1 + 0xd));
  if (*(int *)(this + 0x14) == 0x504c5952) {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    m3dNormalize((m3dV *)(param_1 + 0x19));
  }
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(this + 0xe0);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(this + 0xe4);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(this + 0xe8);
  (**(code **)(*(int *)this + 0x48))(param_1 + 0x3d);
  *param_1 = (entMP_DEADRECKON)this[0xfc];
  return;
}




/* from: gs:ent_mp.cpp
   addr: 004F8170 */

int __fastcall entPackInitDataPacked(entENTITY *param_1,msgDATA *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (param_2 != (msgDATA *)0x0) {
    (**(code **)(*(int *)DAT_009574c4 + 0x1c))(&DAT_009570c4,0x400,0x16);
    msgSYSTEM::Pack(&msgSystem,DAT_009574c4,param_2);
    sVar1 = *(short *)(DAT_009574c4 + 0x110);
    uVar4 = (uint)sVar1;
    puVar2 = (undefined4 *)apMalloc(uVar4);
    *(undefined4 **)(param_1 + 0x145) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    puVar5 = &DAT_009570c4;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(short *)(param_1 + 0x149) = sVar1;
    (**(code **)(*(int *)DAT_009574c4 + 8))();
  }
  return 1;
}




/* from: gs:ent_mp.cpp
   addr: 004F8210 */

msgDATA * __fastcall entUnpackInitDataPacked(void *param_1)

{
  short sVar1;
  msgDATA *pmVar2;
  uint uVar3;
  msgDATA *pmVar4;
  
  if (param_1 == (void *)0x0) {
    return (msgDATA *)0x0;
  }
  (**(code **)(*(int *)DAT_009574c4 + 0x1c))(param_1,0x400,0x15);
  pmVar2 = msgSYSTEM::UnPack(&msgSystem,DAT_009574c4);
  (**(code **)(*(int *)DAT_009574c4 + 8))();
  sVar1 = *(short *)(pmVar2 + 2);
  pmVar4 = (msgDATA *)&DAT_00947cc8;
  for (uVar3 = (uint)(int)sVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pmVar4 = *(undefined4 *)pmVar2;
    pmVar2 = pmVar2 + 4;
    pmVar4 = pmVar4 + 4;
  }
  for (uVar3 = (int)sVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pmVar4 = *pmVar2;
    pmVar2 = pmVar2 + 1;
    pmVar4 = pmVar4 + 1;
  }
  return (msgDATA *)&DAT_00947cc8;
}

