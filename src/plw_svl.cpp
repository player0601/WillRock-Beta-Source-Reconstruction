#include "entity.h"
#include "pwp_comm.h"
#include "m3d.h"

/* from: plw_svl.cpp
   addr: 00413970 */

int pwpSVLInit(void)

{
  int result;
  
  result = entRegisterClass(pwp_svl, PSVL, 0x50, pwpSHOVEL::Create, (char *)0x0, 1);
  if (result == 0) {
    return 0;
  }
  result = entRegisterClass(sfx_shovel, PSVL, 0x50, pwpSVL_HIT::Create, (char *)0x0, 1);
  if (result == 0) {
    return 0;
  }
  pwpSVL_SMOKE::pTexSmoke = txmMANAGER::Add(txmManager, sfx_mcg_cloud, 0x40003, 1);
  if (pwpSVL_SMOKE::pTexSmoke == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpSVL_PARTS::pTexPart = txmMANAGER::Add(txmManager, sfx_mcg_part, 0x40003, 1);
  if (pwpSVL_PARTS::pTexPart == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpSVL_SPARKS::pTexSparks = txmMANAGER::Add(txmManager, sfx_shovel_sparks, 0x40003, 1);
  if (pwpSVL_SPARKS::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpSVL_SCORCHMARK::pTexScorchMark = txmMANAGER::Add(txmManager, sfx_shovel_scorchmark, 0x40003, 1);
  if (pwpSVL_SCORCHMARK::pTexScorchMark == (txmTEXTURE *)0x0) {
    return 0;
  }
  result = sncLinkSndListData(3,(sncSOUND_DESCR_3D *)&DAT_00603190);
  return (uint)(result != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_svl.cpp
   addr: 00413A50 */

entENTITY * __fastcall pwpSVL_HIT::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x187);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = _m3dVZero;
    *(undefined4 *)(this + 0x167) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x16b) = uVar1;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: plw_svl.cpp
   addr: 00413AE0 */

void * __thiscall pwpSVL_HIT::_scalar_deleting_destructor_(pwpSVL_HIT *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_svl.cpp
   addr: 00413B10 */

int __thiscall pwpSHOVEL::ProcessINIT(pwpSHOVEL *this)

{
  int iVar1;
  animCREATE_DATA local_98 [152];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  iVar1 = pwpWEAPON::ProcessINIT((pwpWEAPON *)this);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x19b) = 0;
  *(undefined4 *)(this + 0x197) = 0xffffffff;
  (**(code **)(*(int *)this + 0xa0))(0x41c80000);
  *(undefined4 *)(this + 0x15b) = 0x42f00000;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
  *(uint *)(this + 0x193) = *(uint *)(this + 0x193) | 3;
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
  wpnWEAPON::SetAmmo((wpnWEAPON *)this,1.0);
  objOBJ::AllocVertNormalList(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10));
  return 1;
}




/* from: plw_svl.cpp
   addr: 00413BD0 */

void __thiscall pwpSHOVEL::ProcessFRAME(pwpSHOVEL *this)

{
  int iVar1;
  
  wpnWEAPON::ProcessFRAME((wpnWEAPON *)this);
  iVar1 = *(int *)(this + 0xbc);
  if ((((*(byte *)(iVar1 + 4) & 1) == 0) && (*(int *)(iVar1 + 0xe0) == 7)) &&
     ((*(byte *)(iVar1 + 0x28) & 2) != 0)) {
    (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00603190,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_svl.cpp
   addr: 00413C10 */

int __thiscall pwpSHOVEL::Shoot(pwpSHOVEL *this,entENTITY *param_1,m3dV *param_2)

{
  animINST *this_00;
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 Var6;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 Var7;
  undefined1 auVar8 [16];
  float fVar9;
  float local_1c0;
  int local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  m3dV local_160 [4];
  float fStack_15c;
  undefined **local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124;
  undefined1 local_123;
  undefined2 local_122;
  undefined4 local_120;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  m3dV amStack_e4 [12];
  m3dV amStack_d8 [12];
  ulong local_cc;
  int local_c8 [50];
  
  local_134 = _m3dVZero;
  local_130 = DAT_00963740;
  local_12c = DAT_00963744;
  local_124 = 0;
  local_123 = 0x40;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_cc = 0;
  local_120 = 0;
  local_122 = 0x5c;
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_128 = 0;
  local_14c = *(undefined4 *)(plrPlayer + 0xbc);
  local_150 = 2;
  local_148 = 1;
  local_154 = &entCDT_REFINE_EXCL::_vftable_;
  iVar1 = wpnWEAPON::Shoot((wpnWEAPON *)this,*(entENTITY **)(this + 0x187),param_2);
  if (iVar1 == 0) {
    return 0;
  }
  animINST::GetPos(*(animINST **)(plrPlayer + 0xbc),(m3dV *)&local_1b8);
  animINST::GetDir(*(animINST **)(plrPlayer + 0xbc),(m3dV *)&local_194);
  local_190 = 0;
  m3dNormalize((m3dV *)&local_194);
  dmgCollectInst((m3dV *)&local_1b8,(float)local_c8,(animINST **)0x3fc00000,&local_1bc,0x32);
  iVar1 = 0;
  local_17c = DAT_005cff10;
  iVar2 = 0;
  if (0 < local_1bc) {
    do {
      uVar4 = (undefined8)in_ST2;
      this_00 = (animINST *)local_c8[iVar2];
      Var6 = in_ST3;
      if ((this_00 != *(animINST **)(plrPlayer + 0xbc)) && (((byte)this_00[4] & 0x40) == 0)) {
        animINST::GetPos(this_00,(m3dV *)&local_1a0);
        local_1ac = local_1a0 - local_1b8;
        local_1a8 = local_19c - local_1b4;
        local_1a4 = local_198 - local_1b0;
        Var7 = in_ST6;
        fVar9 = m3dAngleVector((m3dV *)&local_1ac,(m3dV *)&local_194);
        in_ST2 = in_ST3;
        Var6 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = Var7;
        if (fVar9 <= ___real_42820000) {
          local_1c0 = (local_1b8 - local_1a0) * (local_1b8 - local_1a0) +
                      (local_1b4 - local_19c) * (local_1b4 - local_19c) +
                      (local_1b0 - local_198) * (local_1b0 - local_198);
          if (m3dSimdType == 0) {
            local_1c0 = local_1c0 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar8 = rsqrtss(ZEXT416((uint)local_1c0),ZEXT416((uint)local_1c0));
            fVar9 = auVar8._0_4_;
            local_1c0 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                        (`float___cdecl_m3dSqrt(float)'::__l2::three - local_1c0 * fVar9 * fVar9) *
                        local_1c0;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar3 = (ulonglong)(uint)local_1c0;
            uVar4 = PackedFloatingReciprocalSQRAprox(uVar4,uVar3);
            uVar5 = PackedFloatingMUL(uVar4,uVar4);
            uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
            uVar5 = PackedFloatingReciprocalIter2(uVar5,uVar4);
            uVar5 = PackedFloatingMUL(uVar5,uVar3);
            local_1c0 = (float)uVar5;
            FastExitMediaState();
            in_ST2 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),uVar4);
          }
          else {
            local_1c0 = SQRT(local_1c0);
          }
          Var6 = in_ST3;
          in_ST4 = in_ST3;
          in_ST5 = in_ST3;
          in_ST6 = in_ST3;
          if (local_1c0 < local_17c) {
            local_17c = local_1c0;
            iVar1 = local_c8[iVar2];
          }
        }
      }
      iVar2 = iVar2 + 1;
      in_ST3 = Var6;
    } while (iVar2 < local_1bc);
    if (iVar1 != 0) {
      local_188 = local_1b8;
      local_184 = local_1b4;
      local_180 = local_1b0;
      (**(code **)(**(int **)(iVar1 + 0x13c) + 0x5c))(local_160);
      local_184 = local_184 + ___real_3fc00000;
      fStack_15c = fStack_15c + ___real_3fc00000;
      iVar2 = scnSCENE::IsVisiblePoint
                        (gsScenePtr,(m3dV *)&local_188,local_160,0,(cdtREFINE *)&local_154,
                         (cdtINFO *)0x0);
      if (iVar2 != 0) {
        local_f8 = *(undefined4 *)(*(int *)(iVar1 + 0x13c) + 0x8c);
        fStack_108 = local_1b0;
        fStack_10c = local_1b4;
        uStack_fc = uStack_18c;
        fStack_110 = local_1b8;
        uStack_100 = local_190;
        uStack_104 = local_194;
        (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c6,&local_124,0x20000);
        return 1;
      }
    }
  }
  camCAMERA::GetOrigin(gsCameraPtr,(m3dV *)&local_178);
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x17b),(m3dV *)&fStack_16c);
  local_1ac = fStack_16c - local_178;
  local_1a8 = fStack_168 - fStack_174;
  local_1a4 = fStack_164 - fStack_170;
  m3dNormalize((m3dV *)&local_1ac);
  iVar1 = scnSCENE::ShootRay(gsScenePtr,(m3dV *)&local_178,(m3dV *)&local_1ac,1.5,0,
                             (cdtREFINE *)&local_154,(cdtINFO *)&local_144);
  if (iVar1 != 0) {
    uStack_f0 = local_134;
    uStack_ec = local_130;
    local_f4 = 1;
    uStack_e8 = local_12c;
    local_cc = gsEffEnvirColor((cdtINFO *)&local_144,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
    scnSCENE::GetCDTFace(gsScenePtr,(cdtINFO *)&local_144,(m3dPOLY *)0x0,amStack_e4);
    objOBJ::GetAxisZ(*(objOBJ **)(this + 0x17b),amStack_d8);
    m3dNormalize(amStack_d8);
  }
  (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c6,&local_124,0x20000);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_svl.cpp
   addr: 00414110 */

void __thiscall pwpSHOVEL::ProcessSHOOT(pwpSHOVEL *this,void *param_1)

{
  entIACTIVE_OBJ *peVar1;
  m3dV local_40 [4];
  float local_3c;
  dmgWEAPON local_34 [12];
  undefined4 uStack_28;
  
  dmgWEAPON::dmgWEAPON(local_34);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)((int)param_1 + 0x2c) != -1) {
      peVar1 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)((int)param_1 + 0x2c),0);
      if (peVar1 == (entIACTIVE_OBJ *)0x0) {
        return;
      }
      animINST::GetPos(*(animINST **)(peVar1 + 0xbc),local_40);
      local_3c = local_3c + ___real_3f800000;
      (**(code **)(*(int *)this + 0x78))(local_34,local_40);
      uStack_28 = *(undefined4 *)(*(int *)(this + 0x187) + 0x8c);
      msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)peVar1,0x4c5,local_34,(msgADDR *)this);
    }
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,*(entIACTIVE_OBJ **)(this + 0x187),0x4c6,(msgDATA *)param_1,0x90000,
               0xffffffff,0xfffffffd);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    if (*(int *)((int)param_1 + 0x2c) != -1) {
      (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_006031f8,0);
      return;
    }
    if (*(int *)((int)param_1 + 0x30) != 0) {
      (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00603260,0);
      entCreate(gsScenePtr,s_sfx_shovel,s_sfx_shovel,(animCREATE_DATA *)0x0,param_1,0);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_svl.cpp
   addr: 00414240 */

int __thiscall pwpSVL_HIT::ProcessINIT(pwpSVL_HIT *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  pwpSVL_SCORCHMARK *this_00;
  pteSHADER *this_01;
  objOBJ *this_02;
  pwpSVL_PARTS *this_03;
  partEMITTER_PHYS *ppVar3;
  pwpSVL_SMOKE *this_04;
  pwpSVL_SPARKS *this_05;
  undefined1 *puVar4;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined **local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined2 local_9a;
  undefined4 local_98;
  undefined4 local_70;
  undefined4 local_6c;
  m3dV local_68 [12];
  m3dV local_5c [12];
  m3dV local_50 [12];
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  local_b8 = 1;
  local_bc = &m3dBOX::_vftable_;
  local_9c = 0;
  local_9b = 0x40;
  local_70 = 0xffffffff;
  local_6c = 0;
  local_44 = 0;
  local_98 = 0;
  local_9a = 0x5c;
  if (param_1 == (void *)0x0) {
    puVar4 = &local_9c;
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),local_68);
    m3dMATR::GetAxisX((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),local_50);
    m3dMATR::GetAxisZ((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),local_5c);
    local_44 = 0xffffffff;
  }
  else {
    m3dMATR::MakeLCS2WCS
              (local_40,(m3dV *)((int)param_1 + 0x34),(m3dV *)((int)param_1 + 0x4c),
               (m3dV *)((int)param_1 + 0x40),(m3dV *)0x0);
    animINST::Transform(*(animINST **)(this + 0xbc),local_40,0);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    puVar4 = (undefined1 *)param_1;
  }
  iVar2 = dynDYNAMIC::ProcessINIT((dynDYNAMIC *)this,(void *)0x0);
  if (iVar2 == 0) {
    return 0;
  }
  dynDYNAMIC::StartAnim((dynDYNAMIC *)this,0,0.0,0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  if (param_1 != (void *)0x0) {
    uVar1 = *(uint *)(puVar4 + 0x58);
    local_cc = (float)(uVar1 >> 0x10 & 0xff);
    local_c8 = (float)(uVar1 >> 8 & 0xff);
    local_c4 = (float)(uVar1 & 0xff);
    local_c0 = (float)(uVar1 >> 0x18);
    this_00 = (pwpSVL_SCORCHMARK *)operator_new(0x168);
    if ((this_00 == (pwpSVL_SCORCHMARK *)0x0) ||
       (this_01 = (pteSHADER *)
                  pwpSVL_SCORCHMARK::pwpSVL_SCORCHMARK
                            (this_00,(m3dV *)(puVar4 + 0x34),(m3dV *)(puVar4 + 0x4c),
                             (m3dV *)(puVar4 + 0x40),(m3dCOLOR *)&local_cc),
       this_01 == (pteSHADER *)0x0)) {
      return 0;
    }
    pteSHADER::Register(this_01);
    (**(code **)(*(int *)this_01 + 4))(1);
    pteSHADER::CalcStaticData(this_01,0);
  }
  this_02 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
  *(objOBJ **)(this + 0x183) = this_02;
  if (this_02 == (objOBJ *)0x0) {
    return 0;
  }
  objOBJ::SetStateProcYes(this_02,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  iVar2 = wrsfxFindFloor((m3dV *)(puVar4 + 0x34),(m3dBOX *)&local_bc);
  uStack_dc = DAT_00963744;
  uStack_e4 = _m3dVZero;
  uStack_e0 = DAT_00963740;
  if (iVar2 != 0) {
    uStack_dc = uStack_ac;
    uStack_e4 = uStack_b4;
    uStack_e0 = uStack_b0;
  }
  uStack_d8 = _m3dVUnitY;
  uStack_d4 = DAT_005f9994;
  uStack_d0 = DAT_005f9998;
  this_03 = (pwpSVL_PARTS *)operator_new(0x2c0);
  if (this_03 == (pwpSVL_PARTS *)0x0) {
    ppVar3 = (partEMITTER_PHYS *)0x0;
  }
  else {
    ppVar3 = (partEMITTER_PHYS *)pwpSVL_PARTS::pwpSVL_PARTS(this_03,(m3dPLANE *)&uStack_e4);
  }
  *(partEMITTER_PHYS **)(this + 0x177) = ppVar3;
  if (ppVar3 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  iVar2 = partSetAreaEmissionObj(ppVar3,*(objOBJ **)(this + 0x183),-1,(m3dV *)0x0);
  if (iVar2 == 0) {
    return 0;
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x177));
  this_04 = (pwpSVL_SMOKE *)operator_new(0x2c0);
  if (this_04 == (pwpSVL_SMOKE *)0x0) {
    ppVar3 = (partEMITTER_PHYS *)0x0;
  }
  else {
    ppVar3 = (partEMITTER_PHYS *)pwpSVL_SMOKE::pwpSVL_SMOKE(this_04);
  }
  *(partEMITTER_PHYS **)(this + 0x17b) = ppVar3;
  if (ppVar3 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  iVar2 = partSetAreaEmissionObj(ppVar3,*(objOBJ **)(this + 0x183),-1,(m3dV *)0x0);
  if (iVar2 == 0) {
    return 0;
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x17b));
  this_05 = (pwpSVL_SPARKS *)operator_new(0x2c0);
  if (this_05 == (pwpSVL_SPARKS *)0x0) {
    ppVar3 = (partEMITTER_PHYS *)0x0;
  }
  else {
    ppVar3 = (partEMITTER_PHYS *)pwpSVL_SPARKS::pwpSVL_SPARKS(this_05);
  }
  *(partEMITTER_PHYS **)(this + 0x17f) = ppVar3;
  if (ppVar3 != (partEMITTER_PHYS *)0x0) {
    iVar2 = partSetAreaEmissionObj(ppVar3,*(objOBJ **)(this + 0x183),-1,(m3dV *)0x0);
    if (iVar2 != 0) {
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x17f));
      return 1;
    }
    return 0;
  }
  return 0;
}




/* from: plw_svl.cpp
   addr: 00414620 */

void __thiscall pwpSVL_HIT::ProcessFRAME(pwpSVL_HIT *this)

{
  int iVar1;
  
  dynDYNAMIC::ProcessFRAME((dynDYNAMIC *)this);
  iVar1 = partSetAreaEmissionObj
                    (*(partEMITTER_PHYS **)(this + 0x177),*(objOBJ **)(this + 0x183),-1,(m3dV *)0x0)
  ;
  if (iVar1 != 0) {
    iVar1 = partSetAreaEmissionObj
                      (*(partEMITTER_PHYS **)(this + 0x17b),*(objOBJ **)(this + 0x183),-1,
                       (m3dV *)0x0);
    if (iVar1 != 0) {
      iVar1 = partSetAreaEmissionObj
                        (*(partEMITTER_PHYS **)(this + 0x17f),*(objOBJ **)(this + 0x183),-1,
                         (m3dV *)0x0);
      if ((iVar1 != 0) && ((*(byte *)(*(int *)(this + 0xbc) + 0x28) & 1) != 0)) {
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
      }
    }
  }
  return;
}




/* from: plw_svl.cpp
   addr: 00414690 */

void __thiscall pwpSVL_HIT::ProcessTERM(pwpSVL_HIT *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x177);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x200;
    *(undefined4 *)(this + 0x177) = 0;
  }
  iVar1 = *(int *)(this + 0x17b);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x200;
    *(undefined4 *)(this + 0x17b) = 0;
  }
  iVar1 = *(int *)(this + 0x17f);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x200;
    *(undefined4 *)(this + 0x17f) = 0;
  }
  return;
}




/* from: plw_svl.cpp
   addr: 004146F0 */

pwpSVL_SCORCHMARK * __thiscall
pwpSVL_SCORCHMARK::pwpSVL_SCORCHMARK
          (pwpSVL_SCORCHMARK *this,m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dCOLOR *param_4)

{
  m3dSPL *this_00;
  m3dCTRL_TIME *this_01;
  
  pteSPOT::pteSPOT((pteSPOT *)this,0);
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0x3f800000;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined ***)this = &_vftable_;
  pteSPOT::SetStateRend((pteSPOT *)this,0xaf);
  pteSPOT::SetTex((pteSPOT *)this,pTexScorchMark);
  pteSPOT_ELLIPSE::SetParams((pteSPOT_ELLIPSE *)this,param_1,param_2,param_3,0.07,0.0);
  pteSPOT::SetRadius((pteSPOT *)this,0.3);
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
    m3dSPL::AllocKpList(this_00,3);
  }
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,0,0.0,*(float *)param_4,*(float *)(param_4 + 4),
                      *(float *)(param_4 + 8),255.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,1,0.75,*(float *)param_4,*(float *)(param_4 + 4),
                      *(float *)(param_4 + 8),255.0);
  m3dSPL_COLOR::SetKp((m3dSPL_COLOR *)this_00,2,1.0,*(float *)param_4,*(float *)(param_4 + 4),
                      *(float *)(param_4 + 8),0.0);
  this_01 = (m3dCTRL_TIME *)operator_new(0x2c);
  if (this_01 == (m3dCTRL_TIME *)0x0) {
    this_01 = (m3dCTRL_TIME *)0x0;
  }
  else {
    m3dCTRL_TIME::m3dCTRL_TIME(this_01,10.0);
    *(undefined4 *)(this_01 + 0x18) = 0;
    *(undefined4 *)(this_01 + 0x1c) = 0;
    *(undefined4 *)(this_01 + 0x20) = 0;
    *(undefined4 *)(this_01 + 0x24) = 0;
    *(m3dSPL **)(this_01 + 0x28) = this_00;
    *(undefined ***)this_01 = &m3dCTRL_COLOR_SPL::_vftable_;
  }
  *(uint *)((m3dCTRL_COLOR *)this_01 + 4) = *(uint *)((m3dCTRL_COLOR *)this_01 + 4) | 6;
  pteSPOT_ANIM::SetCtrlColorBase((pteSPOT_ANIM *)this,(m3dCTRL_COLOR *)this_01);
  *(uint *)(this + 0xf4) = *(uint *)(this + 0xf4) | 4;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_svl.cpp
   addr: 00414880 */

int __thiscall
pwpSVL_SCORCHMARK::ShadeFace
          (pwpSVL_SCORCHMARK *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
          ptePOLY_DATA *param_4)

{
  m3dPOLY *pmVar1;
  pwpSVL_SCORCHMARK *ppVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  ptePOLY_DATA *ppVar10;
  pwpSVL_SCORCHMARK *ppVar11;
  pteSDR_INFO *ppVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float local_2c [3];
  float local_20;
  float local_1c;
  float local_18;
  m3dPOLY *local_14;
  pwpSVL_SCORCHMARK *local_10;
  int local_c;
  float local_8;
  
  local_10 = this;
  (**(code **)(*(int *)this + 0x18))(&local_20);
  local_8 = *(float *)(this + 200);
  pmVar1 = (m3dPOLY *)(param_3 + 4);
  ppVar12 = param_3 + 8;
  pfVar8 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x44) + param_2 * 0xc);
  if (local_8 < ABS((local_20 - *(float *)(param_3 + 8)) * *pfVar8 +
                    (local_1c - *(float *)(param_3 + 0xc)) * pfVar8[1] +
                    (local_18 - *(float *)(param_3 + 0x10)) * pfVar8[2])) {
    return 0;
  }
  local_14 = pmVar1;
  iVar6 = m3xzIsIsectPolyCircle(pmVar1,(m3dV *)&local_20,local_8);
  if (iVar6 == 0) {
    return 0;
  }
  local_c = 0;
  local_8 = ___real_3f000000 / local_8;
  if (0 < *(int *)pmVar1) {
    ppVar2 = this + 0x110;
    ppVar10 = param_4 + 8;
    ppVar11 = this;
    do {
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar13 = (undefined4)*(undefined8 *)ppVar12;
          uVar16 = CONCAT44(uVar13,uVar13);
          uVar13 = (undefined4)((ulonglong)*(undefined8 *)ppVar12 >> 0x20);
          uVar19 = CONCAT44(uVar13,uVar13);
          uVar20 = CONCAT44(*(undefined4 *)(ppVar12 + 8),*(undefined4 *)(ppVar12 + 8));
          uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)ppVar2);
          uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0x120));
          uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(this + 0x130));
          uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(this + 0x140));
          uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0x118));
          uVar16 = PackedFloatingADD(uVar15,uVar17);
          uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(this + 0x128));
          uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(this + 0x138));
          uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(this + 0x148));
          uVar16 = PackedFloatingADD(uVar14,uVar16);
          uVar14 = PackedFloatingADD(uVar15,uVar20);
          local_2c[0] = (float)uVar16;
          uVar16 = PackedFloatingADD(uVar19,uVar14);
          local_2c[2] = (float)uVar16;
          FastExitMediaState();
        }
        else {
          iVar6 = 0;
          pfVar8 = local_2c;
          do {
            *pfVar8 = 0.0;
            iVar7 = 0;
            pfVar9 = (float *)(((int)ppVar2 - (int)local_2c) + (int)pfVar8);
            fVar5 = ___real_00000000;
            do {
              iVar3 = iVar7 * 4;
              fVar4 = *pfVar9;
              iVar7 = iVar7 + 1;
              pfVar9 = pfVar9 + 4;
              fVar5 = *(float *)(ppVar12 + iVar3) * fVar4 + fVar5;
            } while (iVar7 < 3);
            *pfVar8 = fVar5;
            iVar7 = iVar6 + iVar7 * 4;
            iVar6 = iVar6 + 1;
            *pfVar8 = fVar5 + *(float *)(ppVar2 + iVar7 * 4);
            pfVar8 = pfVar8 + 1;
            ppVar11 = local_10;
          } while (iVar6 < 3);
        }
      }
      local_c = local_c + 1;
      ppVar12 = ppVar12 + 0xc;
      *(float *)(ppVar10 + -4) = local_2c[0] * local_8 + ___real_3f000000;
      *(float *)ppVar10 = (local_8 / *(float *)(ppVar11 + 0x108)) * local_2c[2] + ___real_3f000000;
      ppVar10 = ppVar10 + 8;
    } while (local_c < *(int *)local_14);
  }
  return 1;
}




/* from: plw_svl.cpp
   addr: 00414B10 */

pwpSVL_PARTS * __thiscall pwpSVL_PARTS::pwpSVL_PARTS(pwpSVL_PARTS *this,m3dPLANE *param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x46,300.0,3.0);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.16666667,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.20833333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,2.0,1.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,0.015000001,0.0066666664,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.5,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,180.0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc1000000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x3f800000;
  *(undefined4 *)(this + 0xb8) = 0x3f333333;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x3f19999a;
  *(undefined4 *)(this + 0xc4) = 0x3f000000;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xe8) = 0x3c23d70a;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pTexPart);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  *(uint *)(this + 4) = uVar1 | 0xa408;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.015000001,0.2,0.3,4);
  partEMITTER_PHYS::SetCDTPlane((partEMITTER_PHYS *)this,1,0,param_1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* from: plw_svl.cpp
   addr: 00414D50 */

pwpSVL_SMOKE * __thiscall pwpSVL_SMOKE::pwpSVL_SMOKE(pwpSVL_SMOKE *this)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x14,70.0,1.5);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,70.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.16666667,70.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.20833333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.0,0.5);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.1);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.0,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.075,76.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xb8) = 0x3dcccccd;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xf8) = 0x428c0000;
  *(undefined4 *)(this + 0xfc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x2000;
  *(uint *)(this + 4) = uVar1 | 0xa000;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pTexSmoke);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* from: plw_svl.cpp
   addr: 00414F60 */

pwpSVL_SPARKS * __thiscall pwpSVL_SPARKS::pwpSVL_SPARKS(pwpSVL_SPARKS *this)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,80.0,0.25);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.16666667,30.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.20833333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.15,0.05);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,50.0,(m3dSPL_LINEAR1D *)0x0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.335,0.2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.0,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pTexSparks);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,75.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,1.0,0.0,0.2,0.05);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x2000;
  *(uint *)(this + 4) = uVar1 | 0xa000;
  *(undefined4 *)(this + 0xb4) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  return this;
}




/* from: plw_svl.cpp
   addr: 00415110 */

entENTITY * __fastcall pwpSHOVEL::Create(animINST *param_1)

{
  wpnWEAPON *this;
  
  this = (wpnWEAPON *)operator_new(0x1af);
  if (this != (wpnWEAPON *)0x0) {
    wpnWEAPON::wpnWEAPON(this);
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x1a7) = 0x3f800000;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 0;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}


