
/* from: ai_sketavr.cpp
   addr: 00453D10 */

int __fastcall aiSketavrInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_sketavr,0x244e5043,0x32,aiSKETAVR::Create,s_ai_sketavr,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(7,(sncSOUND_DESCR_3D *)&DAT_0060d298);
  return (uint)(iVar1 != 0);
}




/* from: ai_sketavr.cpp
   addr: 00453D50 */

entENTITY * __fastcall aiSKETAVR::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x593);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x577) = 0;
    *(undefined4 *)(this + 0x58b) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 6;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_sketavr.cpp
   addr: 00453DA0 */

int __thiscall aiSKETAVR::ProcessINIT(aiSKETAVR *this,void *param_1)

{
  int iVar1;
  
  iVar1 = aiCENT::ProcessINIT((aiCENT *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0xd0) = 0x41f00000;
  *(undefined4 *)(this + 0xcc) = 0x41f00000;
  *(undefined4 *)(this + 0x52b) = 0x42a00000;
  *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x800;
  *(uint *)(this + 0x51b) = *(uint *)(this + 0x51b) | 2;
  return 1;
}




/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_sketavr.cpp
   addr: 00453E00 */

void __thiscall
aiSKETAVR::StartDeath(aiSKETAVR *this,dmgDAMAGE *param_1,cdtINFO *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  dmgDAMAGE *pdVar3;
  int iVar4;
  float local_4c [2];
  float local_44;
  float local_40;
  float local_3c;
  m3dV local_38 [12];
  m3dV local_2c [12];
  undefined **local_20 [4];
  entENTITY *local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pdVar3 = param_1;
  local_20[0] = &aiSKEL_RIGID_START::_vftable_;
  if ((param_1 == (dmgDAMAGE *)0x0) || (*(float *)(param_1 + 8) < ___real_459c4000)) {
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 4;
    local_4c[1] = 0.07;
    local_10 = entCreate(gsScenePtr,s_sfx_skel_death,s_,(animCREATE_DATA *)0x0,local_4c + 1,0);
    if (local_10 == (entENTITY *)0x0) {
      return;
    }
    if (param_3 != 0) {
      if (param_1 == (dmgDAMAGE *)0x0) {
        if ((param_2 == (cdtINFO *)0x0) ||
           ((*(int *)(param_2 + 4) != 0 && ((*(byte *)(*(int *)(param_2 + 4) + 4) & 0x48) == 0)))) {
          animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_44);
        }
        else {
          scnSCENE::GetCDTFace(gsScenePtr,param_2,(m3dPOLY *)0x0,(m3dV *)&local_44);
        }
        param_1 = (dmgDAMAGE *)0x40800000;
      }
      else {
        aiNPC::GetPosRooted((aiNPC *)this,local_38);
        dmgGetOrgDir(param_1,local_38,local_2c,(m3dV *)&local_44,local_4c);
        fVar1 = *(float *)(param_1 + 8);
        fVar2 = ___real_40400000;
        if ((___real_40a00000 <= fVar1) && (fVar2 = ___real_40e00000, fVar1 <= ___real_41a00000)) {
          fVar2 = (fVar1 - ___real_40a00000) * ___real_3e888889 + ___real_40400000;
        }
        if (___real_00000000 <= local_4c[0]) {
          if (local_4c[0] <= ___real_41700000) {
            param_1 = (dmgDAMAGE *)((___real_40000000 - local_4c[0] * ___real_3d888889) * fVar2);
          }
          else {
            param_1 = (dmgDAMAGE *)((float)___real_3f800000 * fVar2);
          }
        }
        else {
          param_1 = (dmgDAMAGE *)(___real_40000000 * fVar2);
        }
      }
      local_40 = 0.0;
      iVar4 = _m3dNormalize((m3dV *)&local_44);
      if (iVar4 == 0) {
        local_44 = _m3dVUnitY;
        local_40 = DAT_005f9994;
        local_3c = DAT_005f9998;
        param_1 = ___real_3f800000;
      }
      local_c = local_44 * (float)param_1;
      local_8 = local_40 * (float)param_1;
      local_4 = local_3c * (float)param_1;
      aiSKEL_RIGID_START::StartExplos((aiSKEL_RIGID_START *)local_20,(entENTITY *)this);
      *(undefined4 *)(this + 0x527) = 0;
      *(undefined4 *)(this + 0x163) = 0;
      *(undefined4 *)(*(int *)(this + 0xbc) + 0x10) = 0;
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
    }
  }
  aiNPC_WR::StartDeath((aiNPC_WR *)this,pdVar3);
  return;
}




/* from: ai_sketavr.cpp
   addr: 00454050 */

void __thiscall aiSKETAVR::PlaySounds(aiSKETAVR *this)

{
  int iVar1;
  
  if (((*(uint *)(this + 1099) & 0x210000) == 0) &&
     ((*(int *)(*(int *)(this + 0xbc) + 0xe0) == 3 || (*(int *)(*(int *)(this + 0xbc) + 0xe0) == 4))
     )) {
    (**(code **)(**(int **)(this + 0x58b) + 4))(&DAT_0060d4a0,0);
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),10,1);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(this + 0x58b) + 4))(&DAT_0060d300,0);
  }
  if (((byte)this[0xf8] & 4) != 0) {
    (**(code **)(**(int **)(this + 0x58b) + 4))(&DAT_0060d438,0);
  }
  if (((byte)this[0xf8] & 2) != 0) {
    (**(code **)(**(int **)(this + 0x58b) + 4))(&DAT_0060d300,0);
  }
  aiNPC::PlaySounds((aiNPC *)this);
  return;
}




/* from: ai_sketavr.cpp
   addr: 00454110 */

int __fastcall pjlTridentInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pjl_trident,0x41525257,0x32,pjlTRIDENT::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_sketavr.cpp
   addr: 00454160 */

entENTITY * __fastcall pjlTRIDENT::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1ec);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0xbf800000;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xffffffff;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x16f) = 0xbf800000;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined ***)this = &pjlPJL<struct_pjlARROW_GENERIC_SFX>::_vftable_;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = _m3dVZero;
    *(undefined4 *)(this + 400) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x194) = uVar1;
    *(undefined4 *)(this + 0x1e8) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}

