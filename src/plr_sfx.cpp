#include "player.h"
#include "m3d.h"

/* from: plr_sfx.cpp
   addr: 00428E50 */

int __thiscall plrPLAYER::InitSFX(plrPLAYER *this)

{
  int iVar1;
  txmTEXTURE *ptVar2;
  pteEMAP *this_00;
  wrsfxBLOOD_SURF *this_01;
  
  ptVar2 = txmMANAGER::Add(txmManager,s_plr_wpn_spec,0x40000,1);
  if (ptVar2 == (txmTEXTURE *)0x0) {
    return 0;
  }
  this_00 = (pteEMAP *)operator_new(0x110);
  if (this_00 == (pteEMAP *)0x0) {
    this_00 = (pteEMAP *)0x0;
  }
  else {
    pteEMAP::pteEMAP(this_00);
    *(undefined ***)this_00 = &plrWPN_CHROME::_vftable_;
    *(undefined4 *)(this_00 + 0x10c) = 0x3e99999a;
  }
  *(pteEMAP **)(this + 0x36b) = this_00;
  *(txmTEXTURE **)(this_00 + 0x68) = ptVar2;
  pteSHADER::Register(*(pteSHADER **)(this + 0x36b));
  (**(code **)(**(int **)(this + 0x36b) + 4))(1);
  pteSHADER::SetInstCreate(*(pteSHADER **)(this + 0x36b),*(animINST **)(this + 0xbc));
  ptVar2 = txmMANAGER::Add(txmManager,s_plr_blood_hands,0x40000,1);
  if (ptVar2 == (txmTEXTURE *)0x0) {
    return 0;
  }
  this_01 = (wrsfxBLOOD_SURF *)operator_new(0x16c);
  if (this_01 == (wrsfxBLOOD_SURF *)0x0) {
    this_01 = (wrsfxBLOOD_SURF *)0x0;
  }
  else {
    wrsfxBLOOD_SURF::wrsfxBLOOD_SURF(this_01);
    *(undefined ***)this_01 = &plrBLOOD_HANDS::_vftable_;
    *(undefined4 *)(this_01 + 0x14) = 0x504c424c;
  }
  *(wrsfxBLOOD_SURF **)(this + 0x367) = this_01;
  if (this_01 == (wrsfxBLOOD_SURF *)0x0) {
    return 0;
  }
  *(uint *)(this_01 + 4) = *(uint *)(this_01 + 4) & 0xffffffbf;
  pteSPOT::SetTex(*(pteSPOT **)(this + 0x367),ptVar2);
  pteSHADER::Register(*(pteSHADER **)(this + 0x367));
  (**(code **)(**(int **)(this + 0x367) + 4))(0);
  pteSHADER::SetInstCreate(*(pteSHADER **)(this + 0x367),*(animINST **)(this + 0xbc));
  iVar1 = *(int *)(this + 0x367);
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  return 1;
}




/* from: plr_sfx.cpp
   addr: 00428FF0 */

void __thiscall plrPLAYER::NotifySFXBloodHands(plrPLAYER *this,m3dV *param_1)

{
  if (param_1 == (m3dV *)0x0) {
    (**(code **)(*(int *)*(plrBLOOD_HANDS **)(this + 0x367) + 4))();
    return;
  }
  plrBLOOD_HANDS::NotifyBloodSource(*(plrBLOOD_HANDS **)(this + 0x367),param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_sfx.cpp
   addr: 00429020 */

void __thiscall plrWPN_CHROME::GetMatrL2W(plrWPN_CHROME *this,m3dMATR *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  m3dMATR::Identity(param_1);
  (**(code **)(*(int *)plrPlayer + 0x68))(local_c);
  m3dMATR::Translate(param_1,(m3dV *)&stack0xfffffff0,0);
  iVar1 = plrPLAYER_COMMON::IsActivePowerup((plrPLAYER_COMMON *)plrPlayer,0);
  if (iVar1 != 0) {
    DAT_00603f88 = gsElapsedTime * ___real_44098000 + DAT_00603f88;
    m3dMATR::RotateY(param_1,DAT_00603f88,1);
  }
  return;
}




/* from: plr_sfx.cpp
   addr: 00429090 */

int __thiscall plrWPN_CHROME::IsShadeObj(plrWPN_CHROME *this,objOBJ *param_1)

{
  char *pcVar1;
  
  if ((((*(int *)(param_1 + 0xbc) != 0) &&
       (*(int *)(*(int *)(*(int *)(plrPlayer + 0x23f) + *(int *)(plrPlayer + 0x243) * 4) + 0xbc) ==
        *(int *)(param_1 + 0xbc))) && (((byte)param_1[8] & 0x3f) == 0)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    pcVar1 = strstr(*(char **)(param_1 + 0x18),s_nospec);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(*(char **)(param_1 + 0x18),s_RUKA_);
      if (pcVar1 == (char *)0x0) {
        return 1;
      }
    }
  }
  return 0;
}




/* from: plr_sfx.cpp
   addr: 00429110
   addr: 00429110 */

int __thiscall plrBLOOD_HANDS::IsShadeInst(plrBLOOD_HANDS *this,animINST *param_1)

{
  return (uint)(*(animINST **)
                 (*(int *)(*(int *)(plrPlayer + 0x23f) + *(int *)(plrPlayer + 0x243) * 4) + 0xbc) ==
               param_1);
}




/* from: plr_sfx.cpp
   addr: 00429140 */

int __thiscall plrWPN_CHROME::IsActive(plrWPN_CHROME *this,camCAMERA *param_1)

{
  int iVar1;
  plrWPN_CHROME *local_4;
  
  local_4 = this;
  iVar1 = _apCfgReadBool((void **)&DAT_00603f90,s_Debug,s_Decompose3,(int *)&local_4);
  if ((iVar1 != 0) && (local_4 != (plrWPN_CHROME *)0x0)) {
    return 0;
  }
  return *(uint *)(plrPlayer + 0x2a3) & 2;
}




/* from: plr_sfx.cpp
   addr: 00429180 */

int __fastcall plrWPN_CHROME_IsShadeObj(objOBJ *param_1,void *param_2)

{
  char *pcVar1;
  
  if ((((*(int *)(param_1 + 0xbc) != 0) &&
       (*(int *)(*(int *)(*(int *)(plrPlayer + 0x23f) + *(int *)(plrPlayer + 0x243) * 4) + 0xbc) ==
        *(int *)(param_1 + 0xbc))) && (((byte)param_1[8] & 0x3f) == 0)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    pcVar1 = strstr(*(char **)(param_1 + 0x18),s_nospec);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(*(char **)(param_1 + 0x18),s_RUKA_);
      if (pcVar1 == (char *)0x0) {
        return 1;
      }
    }
  }
  return 0;
}




/* from: plr_sfx.cpp
   addr: 004291F0 */

void __thiscall
plrWPN_CHROME::PrepareFrame(plrWPN_CHROME *this,scnSCENE *param_1,camCAMERA *param_2)

{
  objOBJ *this_00;
  int iVar1;
  
  (**(code **)(*(int *)this + 100))((m3dMATR *)(this + 0x8c));
  m3dMATR::Invert((m3dMATR *)(this + 0x8c),(m3dMATR *)(this + 0xcc));
  this_00 = *(objOBJ **)
             (*(int *)(*(int *)(*(int *)(plrPlayer + 0x23f) + *(int *)(plrPlayer + 0x243) * 4) +
                      0xbc) + 0x10);
  objOBJ::CalcFaceNormals(this_00,plrWPN_CHROME_IsShadeObj);
  objOBJ::CalcVertNormals(this_00,plrWPN_CHROME_IsShadeObj);
  iVar1 = plrPLAYER_COMMON::IsActivePowerup((plrPLAYER_COMMON *)plrPlayer,0);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x6c) = 0x437f0000;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x74) = 0x42fe0000;
    *(undefined4 *)(this + 0x78) = 0x431f0000;
    return;
  }
  *(undefined4 *)(this + 0x6c) = 0x437f0000;
  *(undefined4 *)(this + 0x70) = 0x437f0000;
  *(undefined4 *)(this + 0x74) = 0x437f0000;
  *(undefined4 *)(this + 0x78) = 0x42a00000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: plr_sfx.cpp
   addr: 004292E0 */

int __thiscall
plrWPN_CHROME::ShadeFace
          (plrWPN_CHROME *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  int iVar1;
  float fVar2;
  ptePOLY_DATA *ppVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ptePOLY_DATA *ppVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  plrWPN_CHROME *ppVar11;
  pteSDR_INFO *ppVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float local_1c [3];
  undefined8 local_10;
  float local_8;
  
  ppVar3 = *(ptePOLY_DATA **)(param_3 + 4);
  pteSDR_INFO::ValidateNormalSmooth(param_3,param_1,param_2);
  if (0 < (int)ppVar3) {
    ppVar11 = this + 0xcc;
    ppVar12 = param_3 + 0xf8;
    ppVar6 = param_4;
    param_4 = ppVar3;
    do {
      uVar4 = *(undefined4 *)ppVar12;
      local_10._0_4_ = (float)uVar4;
      uVar5 = *(undefined4 *)(ppVar12 + 4);
      uVar14 = *(undefined8 *)ppVar12;
      local_10._4_4_ = (float)uVar5;
      local_10 = uVar14;
      local_8 = *(float *)(ppVar12 + 8);
      if (m3dSimdType == 0) {
        local_10._0_4_ = (float)uVar14;
        local_10._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
        if (((uint)ppVar11 & 0xf) == 0) {
          local_10._0_4_ =
               (float)local_10 * *(float *)ppVar11 + local_10._4_4_ * *(float *)(this + 0xdc) +
               local_8 * *(float *)(this + 0xec);
        }
        else {
          local_10._0_4_ =
               (float)local_10 * (float)*(undefined8 *)ppVar11 +
               local_10._4_4_ * (float)*(undefined8 *)(this + 0xdc) +
               local_8 * (float)*(undefined8 *)(this + 0xec);
        }
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar14 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),*(undefined8 *)ppVar11);
        uVar15 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),*(undefined8 *)(this + 0xdc));
        uVar16 = PackedFloatingMUL(CONCAT44(local_8,local_8),*(undefined8 *)(this + 0xec));
        uVar17 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),*(undefined8 *)(this + 0xd4));
        uVar15 = PackedFloatingADD(uVar15,uVar16);
        uVar16 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),*(undefined8 *)(this + 0xe4));
        uVar18 = PackedFloatingMUL(CONCAT44(local_8,local_8),*(undefined8 *)(this + 0xf4));
        uVar14 = PackedFloatingADD(uVar14,uVar15);
        uVar15 = PackedFloatingADD(uVar16,uVar18);
        local_10._0_4_ = (float)uVar14;
        uVar14 = PackedFloatingADD(uVar17,uVar15);
        local_8 = (float)uVar14;
        FastExitMediaState();
      }
      else {
        pfVar10 = local_1c;
        iVar13 = 3;
        do {
          *pfVar10 = 0.0;
          iVar8 = 0;
          pfVar9 = (float *)(((int)ppVar11 - (int)local_1c) + (int)pfVar10);
          fVar7 = ___real_00000000;
          do {
            iVar1 = iVar8 * 4;
            fVar2 = *pfVar9;
            iVar8 = iVar8 + 1;
            pfVar9 = pfVar9 + 4;
            fVar7 = *(float *)((int)&local_10 + iVar1) * fVar2 + fVar7;
          } while (iVar8 < 3);
          *pfVar10 = fVar7;
          pfVar10 = pfVar10 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        local_10._0_4_ = local_1c[0];
        local_8 = local_1c[2];
      }
      ppVar12 = ppVar12 + 0xc;
      param_4 = param_4 + -1;
      *(float *)(ppVar6 + 4) = (float)local_10 * ___real_3f000000 + ___real_3e800000;
      *(float *)(ppVar6 + 8) = local_8 * ___real_3f000000 + ___real_3e800000;
      ppVar6 = ppVar6 + 8;
    } while (param_4 != (ptePOLY_DATA *)0x0);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: plr_sfx.cpp
   addr: 004294E0 */

int __thiscall
plrWPN_CHROME::ShadeVert(plrWPN_CHROME *this,objOBJ *param_1,int param_2,pteVERT_DATA *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  plrWPN_CHROME *ppVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float local_1c [3];
  undefined8 local_10;
  float local_8;
  
  if (*(int *)(*(int *)(param_1 + 0x28) + 0x48) != 0) {
    ppVar8 = this + 0xcc;
    puVar1 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x48) + param_2 * 0xc);
    uVar4 = *(undefined4 *)puVar1;
    local_10._0_4_ = (float)uVar4;
    uVar5 = *(undefined4 *)((int)puVar1 + 4);
    uVar12 = *puVar1;
    local_10._4_4_ = (float)uVar5;
    local_10 = uVar12;
    local_8 = *(float *)(puVar1 + 1);
    if (m3dSimdType == 0) {
      local_10._0_4_ = (float)uVar12;
      local_10._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
      if (((uint)ppVar8 & 0xf) == 0) {
        local_10._0_4_ =
             (float)local_10 * *(float *)ppVar8 + local_10._4_4_ * *(float *)(this + 0xdc) +
             local_8 * *(float *)(this + 0xec);
      }
      else {
        local_10._0_4_ =
             (float)local_10 * (float)*(undefined8 *)ppVar8 +
             local_10._4_4_ * (float)*(undefined8 *)(this + 0xdc) +
             local_8 * (float)*(undefined8 *)(this + 0xec);
      }
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar12 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),*(undefined8 *)ppVar8);
      uVar13 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),*(undefined8 *)(this + 0xdc));
      uVar14 = PackedFloatingMUL(CONCAT44(local_8,local_8),*(undefined8 *)(this + 0xec));
      uVar15 = PackedFloatingMUL(CONCAT44(uVar4,uVar4),*(undefined8 *)(this + 0xd4));
      uVar13 = PackedFloatingADD(uVar13,uVar14);
      uVar14 = PackedFloatingMUL(CONCAT44(uVar5,uVar5),*(undefined8 *)(this + 0xe4));
      uVar16 = PackedFloatingMUL(CONCAT44(local_8,local_8),*(undefined8 *)(this + 0xf4));
      uVar12 = PackedFloatingADD(uVar12,uVar13);
      uVar13 = PackedFloatingADD(uVar14,uVar16);
      local_10._0_4_ = (float)uVar12;
      uVar12 = PackedFloatingADD(uVar15,uVar13);
      local_8 = (float)uVar12;
      FastExitMediaState();
    }
    else {
      pfVar10 = local_1c;
      iVar11 = 3;
      do {
        *pfVar10 = 0.0;
        iVar7 = 0;
        pfVar9 = (float *)(((int)ppVar8 - (int)local_1c) + (int)pfVar10);
        fVar6 = ___real_00000000;
        do {
          iVar2 = iVar7 * 4;
          fVar3 = *pfVar9;
          iVar7 = iVar7 + 1;
          pfVar9 = pfVar9 + 4;
          fVar6 = *(float *)((int)&local_10 + iVar2) * fVar3 + fVar6;
        } while (iVar7 < 3);
        *pfVar10 = fVar6;
        pfVar10 = pfVar10 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      local_10._0_4_ = local_1c[0];
      local_8 = local_1c[2];
    }
    *(float *)(param_3 + 1) = (float)local_10 * ___real_3eaaaaab + ___real_3e800000;
    *(float *)(param_3 + 5) = local_8 * ___real_3eaaaaab + ___real_3e800000;
    return 1;
  }
  return 0;
}




/* from: plr_sfx.cpp
   addr: 004296B0
   addr: 004296B0 */

void * __thiscall plrBLOOD_HANDS::_vector_deleting_destructor_(plrBLOOD_HANDS *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x104) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x104))(1);
  }
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined ***)this = &pteSPOT_ANIM::_vftable_;
  if (*(undefined4 **)(this + 0xf8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xf8))(1);
  }
  if (*(undefined4 **)(this + 0xfc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xfc))(1);
  }
  if (*(undefined4 **)(this + 0x100) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x100))(1);
  }
  if (*(undefined4 **)(this + 0x104) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x104))(1);
  }
  pteSPOT::~pteSPOT((pteSPOT *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plr_sfx.cpp
   addr: 00429740 */

int __thiscall plrBLOOD_HANDS::IsActive(plrBLOOD_HANDS *this,camCAMERA *param_1)

{
  return ((int)(char)~(byte)wrAppState & 2U) >> 1;
}




/* from: plr_sfx.cpp
   addr: 00429760 */

int __thiscall plrBLOOD_HANDS::IsShadeObj(plrBLOOD_HANDS *this,objOBJ *param_1)

{
  if (*(int *)(param_1 + 0xbc) == 0) {
    return 0;
  }
  if (((byte)wrAppState & 2) != 0) {
    return 0;
  }
  return (uint)(*(int *)(*(int *)(*(int *)(plrPlayer + 0x23f) + *(int *)(plrPlayer + 0x243) * 4) +
                        0xbc) == *(int *)(param_1 + 0xbc));
}




/* from: plr_sfx.cpp
   addr: 004297B0 */

void __thiscall plrBLOOD_HANDS::Enable(plrBLOOD_HANDS *this,int param_1)

{
  pteSHADER::Enable((pteSHADER *)this,param_1);
  if (param_1 == 0) {
    if (*(undefined4 **)(this + 0x104) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x104))(1);
    }
    *(undefined4 *)(this + 0x104) = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_sfx.cpp
   addr: 004297F0 */

void __thiscall plrBLOOD_HANDS::NotifyBloodSource(plrBLOOD_HANDS *this,m3dV *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  m3dSPL *this_00;
  m3dCTRL_TIME *this_01;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float *unaff_retaddr;
  float fVar9;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float afStack_30 [3];
  undefined1 auStack_24 [8];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  local_10 = 0.0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0.0;
  if (((byte)this[4] & 1) == 0) {
    (**(code **)(*(int *)plrPlayer + 0x68))(&local_34);
    fVar9 = (*unaff_retaddr - fStack_38) * (*unaff_retaddr - fStack_38) +
            (unaff_retaddr[2] - afStack_30[0]) * (unaff_retaddr[2] - afStack_30[0]);
    if (m3dSimdType == 0) {
      fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar7 = auVar8._0_4_;
      fVar9 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar7 * fVar7) * fVar9;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)fVar9;
      uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      fVar9 = (float)uVar5;
      FastExitMediaState();
    }
    else {
      fVar9 = SQRT(fVar9);
    }
    if (fVar9 <= ___real_40a00000) {
      (**(code **)(*(int *)this + 4))(1);
      *(undefined4 *)(this + 0x168) = 0x40800000;
      afStack_30[0] = fStack_3c - *unaff_retaddr;
      afStack_30[1] = 0.0;
      afStack_30[2] = local_34 - unaff_retaddr[2];
      iVar2 = _m3dNormalize((m3dV *)afStack_30);
      if (iVar2 == 0) {
        (**(code **)(*(int *)plrPlayer + 0x70))(afStack_30);
      }
      else {
        fVar9 = ___real_00000000;
        if (___real_00000000 <= local_4) {
          fVar9 = local_4 * ___real_3d75c290;
        }
        local_34 = afStack_30[2] * -fVar9 + local_34;
      }
      (**(code **)(*(int *)plrPlayer + 0x70))(auStack_24);
      uVar3 = gsEffEnvirColor((cdtINFO *)(plrPlayer + 0x30b),(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
      fStack_1c = (float)(uVar3 >> 0x10 & 0xff);
      fStack_18 = (float)(uVar3 >> 8 & 0xff);
      fStack_14 = (float)(uVar3 & 0xff);
      local_10 = (float)(uVar3 >> 0x18);
      wrsfxBLOOD_SURF::SetParams
                ((wrsfxBLOOD_SURF *)this,(m3dV *)&stack0xffffffc0,(m3dV *)&local_34,
                 *(float *)(this + 0x168),(m3dCOLOR *)&fStack_1c);
      if (*(undefined4 **)(this + 0x104) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x104))(1);
      }
      this_00 = (m3dSPL *)operator_new(0x34);
      if (this_00 == (m3dSPL *)0x0) {
        this_00 = (m3dSPL *)0x0;
      }
      else {
        *(undefined4 *)(this_00 + 4) = 0;
        *(undefined4 *)(this_00 + 8) = 8;
        *(undefined4 *)(this_00 + 0xc) = 0;
        *(undefined4 *)(this_00 + 0x14) = 0x14;
        *(undefined4 *)(this_00 + 0x18) = 0x14;
        *(undefined4 *)(this_00 + 0x1c) = 4;
        *(undefined4 *)(this_00 + 0x20) = 0;
        *(undefined4 *)(this_00 + 0x24) = 0;
        *(undefined4 *)(this_00 + 0x28) = 0;
        *(undefined4 *)(this_00 + 0x2c) = 0;
        *(undefined4 *)(this_00 + 0x30) = 0;
        *(undefined ***)this_00 = &m3dSPL_COLOR::_vftable_;
        m3dSPL::AllocKpList(this_00,4);
      }
      m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,0,0.0,fStack_1c,fStack_18,fStack_14,0.0);
      m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,1,___real_3dcccccd / *(float *)(this + 0x168),
                          fStack_1c,fStack_18,fStack_14,255.0);
      m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,2,0.9,fStack_1c,fStack_18,fStack_14,255.0);
      m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,3,1.0,fStack_1c,fStack_18,fStack_14,0.0);
      this_01 = (m3dCTRL_TIME *)operator_new(0x2c);
      if (this_01 == (m3dCTRL_TIME *)0x0) {
        this_01 = (m3dCTRL_TIME *)0x0;
      }
      else {
        uVar1 = *(undefined4 *)(this + 0x168);
        *(undefined4 *)(this_01 + 4) = 0;
        *(undefined4 *)(this_01 + 0xc) = uVar1;
        *(undefined4 *)(this_01 + 8) = 0;
        *(undefined4 *)(this_01 + 0x10) = 0x3f800000;
        *(undefined4 *)(this_01 + 0x14) = 0;
        *(undefined ***)this_01 = &m3dCTRL_TIME::_vftable_;
        m3dCTRL_TIME::Enable(this_01,1);
        wrSTAT_WPN::wrSTAT_WPN((wrSTAT_WPN *)(this_01 + 0x18));
        *(m3dSPL **)(this_01 + 0x28) = this_00;
        *(undefined ***)this_01 = &m3dCTRL_COLOR_SPL::_vftable_;
      }
      *(uint *)((m3dCTRL_COLOR *)this_01 + 4) = *(uint *)((m3dCTRL_COLOR *)this_01 + 4) | 6;
      pteSPOT_ANIM::SetCtrlColorBase((pteSPOT_ANIM *)this,(m3dCTRL_COLOR *)this_01);
      iVar2 = *(int *)(*(int *)(*(int *)(plrPlayer + 0x23f) + *(int *)(plrPlayer + 0x243) * 4) +
                      0x94);
      if ((iVar2 == 3) || (iVar2 == 1)) {
        fVar9 = 0.3;
      }
      else {
        fVar9 = 0.5;
      }
      pteSPOT::SetRadius((pteSPOT *)this,fVar9);
      animINST::Validate(*(animINST **)
                          (*(int *)(*(int *)(plrPlayer + 0x23f) + *(int *)(plrPlayer + 0x243) * 4) +
                          0xbc),1);
      pteSHADER::CalcStaticData((pteSHADER *)this,2);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_sfx.cpp
   addr: 00429C60 */

void __thiscall plrBLOOD_HANDS::Update(plrBLOOD_HANDS *this,float param_1)

{
  pteSDR_STATIC_DATA *this_00;
  m3dSPL_COLOR *this_01;
  float fVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  
  pteSPOT_ANIM::Update((pteSPOT_ANIM *)this,param_1);
  if (((byte)this[4] & 1) == 0) {
    this_00 = *(pteSDR_STATIC_DATA **)(this + 0x88);
    if (this_00 != (pteSDR_STATIC_DATA *)0x0) {
      pteSDR_STATIC_DATA::~pteSDR_STATIC_DATA(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x88) = 0;
    return;
  }
  uVar4 = gsEffEnvirColor((cdtINFO *)(plrPlayer + 0x30b),(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
  fVar1 = (float)(uVar4 >> 0x10 & 0xff);
  fVar2 = (float)(uVar4 >> 8 & 0xff);
  this_01 = *(m3dSPL_COLOR **)(*(int *)(this + 0x104) + 0x28);
  fVar3 = (float)(uVar4 & 0xff);
  m3dSPL_COLOR::SetKp(this_01,0,0.0,fVar1,fVar2,fVar3,0.0);
  m3dSPL_COLOR::SetKp(this_01,1,___real_3dcccccd / *(float *)(this + 0x168),fVar1,fVar2,fVar3,255.0)
  ;
  m3dSPL_COLOR::SetKp(this_01,2,0.9,fVar1,fVar2,fVar3,255.0);
  m3dSPL_COLOR::SetKp(this_01,3,1.0,fVar1,fVar2,fVar3,0.0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_sfx.cpp
   addr: 00429D90 */

int __thiscall
plrBLOOD_HANDS::ShadeFace
          (plrBLOOD_HANDS *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  plrBLOOD_HANDS *ppVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ptePOLY_DATA *ppVar6;
  int iVar7;
  pteSDR_INFO *ppVar8;
  float *pfVar9;
  float *pfVar10;
  plrBLOOD_HANDS *ppVar11;
  int iVar12;
  ptePOLY_DATA *ppVar13;
  pteSDR_INFO *ppVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [3];
  plrBLOOD_HANDS *local_14;
  ptePOLY_DATA *local_10;
  m3dPOLY *local_c;
  ptePOLY_DATA *local_8;
  
  local_14 = this;
  (**(code **)(*(int *)this + 0x18))(&local_2c);
  local_8 = *(ptePOLY_DATA **)(this + 200);
  local_c = (m3dPOLY *)(param_3 + 4);
  ppVar14 = param_3 + 8;
  iVar7 = *(int *)(*(int *)(param_1 + 0x28) + 0x44);
  if ((ABS((local_2c - *(float *)(param_3 + 8)) * *(float *)(iVar7 + param_2 * 0xc) +
           (local_28 - *(float *)(param_3 + 0xc)) * *(float *)(iVar7 + 4 + param_2 * 0xc) +
           (local_24 - *(float *)(param_3 + 0x10)) * *(float *)(iVar7 + 8 + param_2 * 0xc)) <=
       (float)local_8) &&
     (iVar7 = m3xzIsIsectPolyCircle(local_c,(m3dV *)&local_2c,(float)local_8), iVar7 != 0)) {
    iVar7 = *(int *)local_c;
    param_1 = DAT_005d0b78;
    iVar12 = iVar7;
    ppVar8 = param_3;
    param_3 = (pteSDR_INFO *)-(float)DAT_005d0b78;
    if (0 < iVar7) {
      do {
        ppVar8 = ppVar8 + 0xc;
        if ((float)param_3 <= (float)*(pteSDR_INFO **)ppVar8) {
          param_3 = *(pteSDR_INFO **)ppVar8;
        }
        if ((float)*(objOBJ **)ppVar8 <= (float)param_1) {
          param_1 = *(objOBJ **)ppVar8;
        }
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if (((float)param_1 <= local_28 + (float)local_8) &&
       (local_28 - (float)local_8 <= (float)param_3)) {
      fVar25 = (float)param_3 - (float)param_1;
      param_1 = (objOBJ *)0x0;
      fVar5 = ___real_3f000000 / (float)local_8;
      if (fVar25 <= (float)local_8) {
        if (0 < iVar7) {
          ppVar1 = this + 0x110;
          local_10 = (ptePOLY_DATA *)local_20;
          local_8 = param_4 + 8;
          ppVar11 = this;
          do {
            ppVar6 = local_10;
            ppVar13 = local_8;
            if (m3dSimdType == 0) {
              if (((uint)ppVar1 & 0xf) == 0) {
                fVar25 = *(float *)ppVar14;
                fVar4 = *(float *)(ppVar14 + 4);
                fVar3 = *(float *)(ppVar14 + 8);
                fVar23 = fVar25 * *(float *)ppVar1 + *(float *)(this + 0x140) +
                         fVar4 * *(float *)(this + 0x120) + fVar3 * *(float *)(this + 0x130);
                fVar24 = fVar25 * *(float *)(this + 0x114) + *(float *)(this + 0x144) +
                         fVar4 * *(float *)(this + 0x124) + fVar3 * *(float *)(this + 0x134);
                fVar25 = fVar25 * *(float *)(this + 0x118) + *(float *)(this + 0x148) +
                         fVar4 * *(float *)(this + 0x128) + fVar3 * *(float *)(this + 0x138);
              }
              else {
                fVar25 = *(float *)ppVar14;
                fVar4 = *(float *)(ppVar14 + 4);
                fVar3 = *(float *)(ppVar14 + 8);
                fVar23 = fVar25 * (float)*(undefined8 *)ppVar1 +
                         fVar4 * (float)*(undefined8 *)(this + 0x120) +
                         fVar3 * (float)*(undefined8 *)(this + 0x130) +
                         (float)*(undefined8 *)(this + 0x140);
                fVar24 = fVar25 * (float)((ulonglong)*(undefined8 *)ppVar1 >> 0x20) +
                         fVar4 * (float)((ulonglong)*(undefined8 *)(this + 0x120) >> 0x20) +
                         fVar3 * (float)((ulonglong)*(undefined8 *)(this + 0x130) >> 0x20) +
                         (float)((ulonglong)*(undefined8 *)(this + 0x140) >> 0x20);
                fVar25 = fVar25 * (float)*(undefined8 *)(this + 0x118) +
                         fVar4 * (float)*(undefined8 *)(this + 0x128) +
                         fVar3 * (float)*(undefined8 *)(this + 0x138) +
                         (float)*(undefined8 *)(this + 0x148);
              }
              *(ulonglong *)local_10 = CONCAT44(fVar24,fVar23);
              *(float *)((int)local_10 + 8) = fVar25;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar15 = (undefined4)*(undefined8 *)ppVar14;
              uVar18 = CONCAT44(uVar15,uVar15);
              uVar15 = (undefined4)((ulonglong)*(undefined8 *)ppVar14 >> 0x20);
              uVar21 = CONCAT44(uVar15,uVar15);
              uVar22 = CONCAT44(*(float *)(ppVar14 + 8),*(float *)(ppVar14 + 8));
              uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)ppVar1);
              uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(this + 0x120));
              uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(this + 0x130));
              uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(this + 0x140));
              uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0x118));
              uVar18 = PackedFloatingADD(uVar17,uVar19);
              uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(this + 0x128));
              uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(this + 0x138));
              uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(this + 0x148));
              uVar18 = PackedFloatingADD(uVar16,uVar18);
              uVar16 = PackedFloatingADD(uVar17,uVar22);
              *(undefined8 *)local_10 = uVar18;
              uVar18 = PackedFloatingADD(uVar21,uVar16);
              *(float *)((int)ppVar6 + 8) = (float)uVar18;
              FastExitMediaState();
            }
            else {
              iVar7 = 0;
              pfVar9 = local_20;
              do {
                *pfVar9 = 0.0;
                iVar12 = 0;
                pfVar10 = (float *)(((int)ppVar1 - (int)local_20) + (int)pfVar9);
                fVar25 = ___real_00000000;
                do {
                  iVar2 = iVar12 * 4;
                  fVar4 = *pfVar10;
                  iVar12 = iVar12 + 1;
                  pfVar10 = pfVar10 + 4;
                  fVar25 = *(float *)(ppVar14 + iVar2) * fVar4 + fVar25;
                } while (iVar12 < 3);
                iVar12 = iVar7 + iVar12 * 4;
                *pfVar9 = fVar25;
                iVar7 = iVar7 + 1;
                *pfVar9 = fVar25 + *(float *)(ppVar1 + iVar12 * 4);
                pfVar9 = pfVar9 + 1;
                ppVar11 = local_14;
                ppVar13 = local_8;
              } while (iVar7 < 3);
            }
            param_1 = param_1 + 1;
            ppVar14 = ppVar14 + 0xc;
            local_8 = ppVar13 + 8;
            *(float *)(ppVar13 + -4) =
                 (fVar5 / *(float *)(ppVar11 + 0x108)) * local_20[0] + ___real_3f000000;
            *(float *)ppVar13 = local_20[2] * fVar5 + ___real_3f000000;
          } while ((int)param_1 < *(int *)local_c);
        }
      }
      else if (0 < iVar7) {
        ppVar1 = this + 0x110;
        local_8 = (ptePOLY_DATA *)local_20;
        local_10 = param_4 + 8;
        do {
          ppVar6 = local_8;
          ppVar13 = local_10;
          if (m3dSimdType == 0) {
            if (((uint)ppVar1 & 0xf) == 0) {
              fVar25 = *(float *)ppVar14;
              fVar4 = *(float *)(ppVar14 + 4);
              fVar3 = *(float *)(ppVar14 + 8);
              fVar23 = fVar25 * *(float *)ppVar1 + *(float *)(this + 0x140) +
                       fVar4 * *(float *)(this + 0x120) + fVar3 * *(float *)(this + 0x130);
              fVar24 = fVar25 * *(float *)(this + 0x114) + *(float *)(this + 0x144) +
                       fVar4 * *(float *)(this + 0x124) + fVar3 * *(float *)(this + 0x134);
              fVar25 = fVar25 * *(float *)(this + 0x118) + *(float *)(this + 0x148) +
                       fVar4 * *(float *)(this + 0x128) + fVar3 * *(float *)(this + 0x138);
            }
            else {
              fVar25 = *(float *)ppVar14;
              fVar4 = *(float *)(ppVar14 + 4);
              fVar3 = *(float *)(ppVar14 + 8);
              fVar23 = fVar25 * (float)*(undefined8 *)ppVar1 +
                       fVar4 * (float)*(undefined8 *)(this + 0x120) +
                       fVar3 * (float)*(undefined8 *)(this + 0x130) +
                       (float)*(undefined8 *)(this + 0x140);
              fVar24 = fVar25 * (float)((ulonglong)*(undefined8 *)ppVar1 >> 0x20) +
                       fVar4 * (float)((ulonglong)*(undefined8 *)(this + 0x120) >> 0x20) +
                       fVar3 * (float)((ulonglong)*(undefined8 *)(this + 0x130) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(this + 0x140) >> 0x20);
              fVar25 = fVar25 * (float)*(undefined8 *)(this + 0x118) +
                       fVar4 * (float)*(undefined8 *)(this + 0x128) +
                       fVar3 * (float)*(undefined8 *)(this + 0x138) +
                       (float)*(undefined8 *)(this + 0x148);
            }
            *(ulonglong *)local_8 = CONCAT44(fVar24,fVar23);
            *(float *)((int)local_8 + 8) = fVar25;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar15 = (undefined4)*(undefined8 *)ppVar14;
            uVar18 = CONCAT44(uVar15,uVar15);
            uVar15 = (undefined4)((ulonglong)*(undefined8 *)ppVar14 >> 0x20);
            uVar21 = CONCAT44(uVar15,uVar15);
            uVar22 = CONCAT44(*(float *)(ppVar14 + 8),*(float *)(ppVar14 + 8));
            uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)ppVar1);
            uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(this + 0x120));
            uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(this + 0x130));
            uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(this + 0x140));
            uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(this + 0x118));
            uVar18 = PackedFloatingADD(uVar17,uVar19);
            uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(this + 0x128));
            uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(this + 0x138));
            uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(this + 0x148));
            uVar18 = PackedFloatingADD(uVar16,uVar18);
            uVar16 = PackedFloatingADD(uVar17,uVar22);
            *(undefined8 *)local_8 = uVar18;
            uVar18 = PackedFloatingADD(uVar21,uVar16);
            *(float *)((int)ppVar6 + 8) = (float)uVar18;
            FastExitMediaState();
          }
          else {
            iVar7 = 0;
            pfVar9 = local_20;
            do {
              iVar12 = 0;
              *pfVar9 = 0.0;
              pfVar10 = (float *)(((int)ppVar1 - (int)local_20) + (int)pfVar9);
              fVar25 = ___real_00000000;
              do {
                iVar2 = iVar12 * 4;
                fVar4 = *pfVar10;
                iVar12 = iVar12 + 1;
                pfVar10 = pfVar10 + 4;
                fVar25 = *(float *)(ppVar14 + iVar2) * fVar4 + fVar25;
              } while (iVar12 < 3);
              *pfVar9 = fVar25;
              iVar12 = iVar7 + iVar12 * 4;
              iVar7 = iVar7 + 1;
              *pfVar9 = fVar25 + *(float *)(ppVar1 + iVar12 * 4);
              pfVar9 = pfVar9 + 1;
              ppVar13 = local_10;
            } while (iVar7 < 3);
          }
          param_1 = param_1 + 1;
          ppVar14 = ppVar14 + 0xc;
          local_10 = ppVar13 + 8;
          *(float *)(ppVar13 + -4) =
               (fVar5 / *(float *)(this + 0x108)) * local_20[0] + ___real_3f000000;
          *(float *)ppVar13 = (fVar5 / *(float *)(this + 0x108)) * local_20[1] + ___real_3f000000;
        } while ((int)param_1 < *(int *)local_c);
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


