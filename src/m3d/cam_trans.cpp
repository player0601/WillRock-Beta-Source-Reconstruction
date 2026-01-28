
/* from: m3d:cam_trans.cpp
   addr: 005614F0 */

void __thiscall camCAMERA::ProjPoly(camCAMERA *this,m3dPOLY *param_1,m2dPOLY *param_2)

{
  float fVar1;
  float fVar2;
  m2dPOLY *pmVar3;
  m3dPOLY *pmVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)param_1) {
    pmVar4 = param_1 + 4;
    pmVar3 = param_2;
    do {
      fVar1 = *(float *)(pmVar4 + 8);
      fVar2 = *(float *)(this + 0x80);
      iVar5 = iVar5 + 1;
      *(float *)(pmVar3 + 4) = *(float *)pmVar4 * (fVar2 / fVar1);
      *(float *)(pmVar3 + 8) = *(float *)(pmVar4 + 4) * (fVar2 / fVar1);
      pmVar4 = pmVar4 + 0xc;
      pmVar3 = pmVar3 + 8;
    } while (iVar5 < *(int *)param_1);
    *(int *)param_2 = *(int *)param_1;
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  return;
}




/* from: m3d:cam_trans.cpp
   addr: 00561550 */

void __thiscall camCAMERA::ProjPoint(camCAMERA *this,m3dV *param_1,m2dV *param_2)

{
  *(float *)param_2 = (*(float *)param_1 / *(float *)(param_1 + 8)) * *(float *)(this + 0x80);
  *(float *)(param_2 + 4) =
       (*(float *)(param_1 + 4) / *(float *)(param_1 + 8)) * *(float *)(this + 0x80);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam_trans.cpp
   addr: 00561580 */

int __thiscall
camCAMERA::BackProjPoly
          (camCAMERA *this,m2dPOLY *param_1,m3dPOLY *param_2,m3dPOLY *param_3,m3dV *param_4,
          int param_5)

{
  m2dPOLY *pmVar1;
  int iVar2;
  int iVar3;
  m3dV *pmVar4;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  if (param_5 != 0) {
    local_24 = *(float *)param_4 * ___real_bf800000;
    local_20 = *(float *)(param_4 + 4) * ___real_bf800000;
    local_1c = *(float *)(param_4 + 8) * ___real_bf800000;
    param_4 = (m3dV *)&local_24;
  }
  local_10 = *(undefined4 *)(this + 0x80);
  iVar3 = 0;
  if (0 < *(int *)param_1) {
    pmVar4 = (m3dV *)(param_3 + 4);
    pmVar1 = param_1;
    do {
      local_18 = *(undefined4 *)(pmVar1 + 4);
      local_14 = *(undefined4 *)(pmVar1 + 8);
      iVar2 = m3dIsectRayPlane((m3dV *)&local_c,(m3dV *)&local_18,param_2,pmVar4,param_4,
                               (float *)0x0);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pmVar4 = pmVar4 + 0xc;
      pmVar1 = pmVar1 + 8;
    } while (iVar3 < *(int *)param_1);
  }
  *(undefined4 *)param_3 = *(undefined4 *)param_1;
  return 1;
}




/* from: m3d:cam_trans.cpp
   addr: 00561660 */

void __fastcall camCAMERA::ProjPolyOrtho(m3dPOLY *param_1,m2dPOLY *param_2)

{
  m2dPOLY *pmVar1;
  m3dPOLY *pmVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)param_1) {
    pmVar1 = param_2 + 8;
    pmVar2 = param_1 + 8;
    do {
      *(undefined4 *)(pmVar1 + -4) = *(undefined4 *)(pmVar2 + -4);
      *(undefined4 *)pmVar1 = *(undefined4 *)pmVar2;
      iVar3 = iVar3 + 1;
      pmVar1 = pmVar1 + 8;
      pmVar2 = pmVar2 + 0xc;
    } while (iVar3 < *(int *)param_1);
    *(int *)param_2 = *(int *)param_1;
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam_trans.cpp
   addr: 005616A0 */

int __fastcall
camCAMERA::BackProjPolyOrtho
          (m2dPOLY *param_1,m3dPOLY *param_2,m3dPOLY *param_3,m3dV *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  m2dPOLY *pmVar3;
  m3dV *pmVar4;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_5 != 0) {
    local_18 = *(float *)param_4 * ___real_bf800000;
    local_14 = *(float *)(param_4 + 4) * ___real_bf800000;
    local_10 = *(float *)(param_4 + 8) * ___real_bf800000;
    param_4 = (m3dV *)&local_18;
  }
  iVar2 = 0;
  if (0 < *(int *)param_1) {
    pmVar3 = param_1 + 8;
    pmVar4 = (m3dV *)(param_3 + 4);
    do {
      local_c = *(undefined4 *)(pmVar3 + -4);
      local_8 = *(undefined4 *)pmVar3;
      local_4 = 0;
      iVar1 = m3dIsectRayPlane((m3dV *)&local_c,&m3dVUnitZ,param_2,pmVar4,param_4,(float *)0x0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pmVar3 = pmVar3 + 8;
      pmVar4 = pmVar4 + 0xc;
    } while (iVar2 < *(int *)param_1);
  }
  *(undefined4 *)param_3 = *(undefined4 *)param_1;
  return 1;
}

