
/* from: gs_shared:ai_ctrl.cpp
   addr: 00534090 */

aiINIT_DATA_PACK * __thiscall aiINIT_DATA_PACK::aiINIT_DATA_PACK(aiINIT_DATA_PACK *this)

{
  msgDATA_PACK::msgDATA_PACK((msgDATA_PACK *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 005340B0 */

int __fastcall aiInit(void)

{
  int iVar1;
  
  iVar1 = aiPlannerInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aiSpawnInit();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = aiaArenaInit();
  if (iVar1 == 0) {
    return 0;
  }
  msgSYSTEM::RegisterMsgData(&msgSystem,(msgDATA_PACK *)&DAT_0095d918);
  return 1;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00534100 */

aiNPC * __fastcall aiNPC::GetNext(aiNPC *param_1,int param_2)

{
  animSYSTEM_GROUP *this;
  ulong uVar1;
  int iVar2;
  
  for (this = (animSYSTEM_GROUP *)entFindNext((entENTITY *)param_1);
      (this != (animSYSTEM_GROUP *)0x0 &&
      ((uVar1 = animSYSTEM_GROUP::GetNGroup(this), uVar1 != 0x244e5043 ||
       ((param_2 == 0 &&
        ((((*(byte *)(*(int *)(this + 0xbc) + 4) & 1) != 0 ||
          (iVar2 = IsDead((aiNPC *)this), iVar2 != 0)) || ((*(uint *)(this + 1099) & 0x10000) != 0))
        )))))); this = (animSYSTEM_GROUP *)entFindNext((entENTITY *)this)) {
  }
  return (aiNPC *)this;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00534160 */

int __fastcall aiNPC::GetNOpp(char *param_1,char *param_2)

{
  aiNPC *this;
  uint uVar1;
  animINST *this_00;
  ulong uVar2;
  int iVar3;
  char *_Str;
  char *pcVar4;
  int local_4;
  
  local_4 = 0;
  this_00 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0);
  if (this_00 == (animINST *)0x0) {
    return 0;
  }
  do {
    if (*(animSYSTEM_GROUP **)(this_00 + 0x13c) != (animSYSTEM_GROUP *)0x0) {
      uVar2 = animSYSTEM_GROUP::GetNGroup(*(animSYSTEM_GROUP **)(this_00 + 0x13c));
      if (uVar2 == 0x244e5043) {
        this = *(aiNPC **)(this_00 + 0x13c);
        iVar3 = IsDead(this);
        if ((iVar3 == 0) &&
           ((uVar1 = *(uint *)(this + 1099), (uVar1 & 0x10000) == 0 || ((uVar1 & 0x80000) != 0)))) {
          if (param_1 != (char *)0x0) {
            pcVar4 = param_1;
            _Str = animINST::GetNameClass(this_00);
            goto LAB_005341da;
          }
LAB_005341e7:
          local_4 = local_4 + 1;
        }
      }
      else if (param_2 != (char *)0x0) {
        pcVar4 = param_2;
        _Str = animINST::GetNameTpl(this_00);
LAB_005341da:
        pcVar4 = strstr(_Str,pcVar4);
        if (pcVar4 != (char *)0x0) goto LAB_005341e7;
      }
    }
    this_00 = scnSCENE::FindNextInst(gsScenePtr,this_00);
    if (this_00 == (animINST *)0x0) {
      return local_4;
    }
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl.cpp
   addr: 00534210 */

aiNPC * __thiscall aiNPC::aiNPC(aiNPC *this)

{
  undefined4 uVar1;
  float extraout_ECX;
  float extraout_EDX;
  
  entENTITY::entENTITY((entENTITY *)this);
  aiNAV_PARAMS::aiNAV_PARAMS((aiNAV_PARAMS *)(this + 399));
  cdtINFO::cdtINFO((cdtINFO *)(this + 0x453));
  aiENEMY::aiENEMY((aiENEMY *)(this + 0x4bb));
  *(undefined4 *)(this + 0x183) = 0x41f00000;
  *(undefined4 *)(this + 0x4a7) = 0x41f00000;
  *(undefined4 *)(this + 0x15f) = 0x42b40000;
  *(undefined4 *)(this + 0x187) = 0x42b40000;
  *(undefined4 *)(this + 0x15b) = 0x43340000;
  *(undefined4 *)(this + 0x17f) = 0x43340000;
  *(undefined4 *)(this + 0x4a3) = 0xffffffff;
  *(undefined4 *)(this + 0x4c7) = 0xffffffff;
  *(undefined4 *)(this + 0x3ef) = 0xffffffff;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x153) = 0x40600000;
  *(undefined4 *)(this + 0x157) = 0x40a00000;
  *(undefined4 *)(this + 0x4ab) = 0x41a00000;
  *(undefined4 *)(this + 0x16b) = 0x3f333333;
  *(undefined4 *)(this + 0x173) = 0x3f8ccccd;
  *(undefined4 *)(this + 0x16f) = 0x3f666666;
  *(undefined4 *)(this + 0x177) = 0;
  *(undefined4 *)(this + 0x17b) = 0;
  *(undefined4 *)(this + 0x18b) = 0x42200000;
  *(undefined4 *)(this + 0x473) = 0;
  *(undefined4 *)(this + 0x477) = 0;
  *(undefined4 *)(this + 0x47b) = 6;
  *(undefined4 *)(this + 0x47f) = 10;
  *(undefined4 *)(this + 0x483) = 0;
  *(undefined4 *)(this + 1099) = 0;
  *(undefined4 *)(this + 0x44f) = 0;
  *(undefined4 *)(this + 0x14f) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x48f) = 0;
  *(undefined4 *)(this + 0x49f) = 0;
  *(undefined4 *)(this + 0x4cb) = 0x3f800000;
  *(undefined4 *)(this + 0x163) = 0;
  *(undefined4 *)(this + 0x167) = 0;
  *(undefined4 *)(this + 0x493) = 0;
  *(undefined4 *)(this + 0x497) = 0x40a00000;
  *(undefined4 *)(this + 0x49b) = 0x40800000;
  *(undefined4 *)(this + 0x433) = _m3dVZero;
  *(undefined4 *)(this + 0x437) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0x3af) = 0;
  *(undefined4 *)(this + 0x3b3) = 0x41200000;
  *(undefined4 *)(this + 0x43b) = uVar1;
  *(undefined4 *)(this + 0x3b7) = _m3dVUndef;
  *(undefined4 *)(this + 0x3bb) = DAT_0096374c;
  *(undefined4 *)(this + 0x3bf) = DAT_00963750;
  *(undefined4 *)(this + 0x3c3) = _m3dVUndef;
  *(undefined4 *)(this + 0x3c7) = DAT_0096374c;
  *(undefined4 *)(this + 0x3cb) = DAT_00963750;
  *(undefined4 *)(this + 0x40f) = _m3dVUndef;
  *(undefined4 *)(this + 0x413) = DAT_0096374c;
  *(undefined4 *)(this + 0x417) = DAT_00963750;
  *(undefined4 *)(this + 0x41b) = _m3dVUndef;
  *(undefined4 *)(this + 0x41f) = DAT_0096374c;
  *(undefined4 *)(this + 0x423) = DAT_00963750;
  *(undefined4 *)(this + 0x427) = _m3dVUndef;
  *(undefined4 *)(this + 0x42b) = DAT_0096374c;
  *(undefined4 *)(this + 0x42f) = DAT_00963750;
  *(undefined4 *)(this + 0x3cf) = DAT_005dd43c;
  *(undefined4 *)(this + 0x3d3) = DAT_005dd43c;
  *(undefined4 *)(this + 0x3d7) = DAT_005dd43c;
  *(undefined4 *)(this + 0x3db) = _m3dVUndef;
  *(undefined4 *)(this + 0x3df) = DAT_0096374c;
  *(undefined4 *)(this + 0x3e3) = DAT_00963750;
  *(undefined4 *)(this + 999) = DAT_005dd43c;
  uVar1 = DAT_005dd43c;
  *(undefined4 *)(this + 399) = 0x41200000;
  *(undefined4 *)(this + 0x3eb) = uVar1;
  *(undefined4 *)(this + 0x40b) = 0;
  *(undefined4 *)(this + 0x4af) = 0;
  *(undefined4 *)(this + 0x4b3) = 0x42200000;
  *(undefined4 *)(this + 0x4b7) = 0x41700000;
  *(undefined4 *)(this + 0x193) = 0x40000000;
  *(undefined4 *)(this + 0x197) = 0x3f000000;
  *(undefined4 *)(this + 0x19b) = 0x40800000;
  *(undefined4 *)(this + 0x1a3) = 0x41200000;
  *(undefined4 *)(this + 0x1a7) = 0x41a00000;
  *(undefined4 *)(this + 0x373) = 0x3e800000;
  *(undefined4 *)(this + 0x377) = 0xc0400000;
  *(undefined4 *)(this + 0x37b) = 0;
  *(undefined4 *)(this + 0x37f) = 0xc45e0000;
  *(undefined4 *)(this + 899) = 0x3fd9999a;
  *(undefined4 *)(this + 0x387) = 0x3f8ccccd;
  *(undefined4 *)(this + 0x3a3) = 0;
  *(undefined4 *)(this + 0x3a7) = 0x3f800000;
  *(undefined4 *)(this + 0x38b) = _m3dVUndef;
  *(undefined4 *)(this + 0x38f) = DAT_0096374c;
  *(undefined4 *)(this + 0x393) = DAT_00963750;
  *(undefined4 *)(this + 0x397) = _m3dVUndef;
  *(undefined4 *)(this + 0x39b) = DAT_0096374c;
  uVar1 = DAT_00963750;
  *(undefined4 *)(this + 0x3ab) = 0x40000000;
  *(undefined4 *)(this + 0x39f) = uVar1;
  aiENEMY::Assign((aiENEMY *)(this + 0x4bb),(entENTITY *)0x0);
  *(undefined4 *)(this + 0x43f) = 0;
  *(undefined4 *)(this + 0x443) = 0;
  *(undefined4 *)(this + 0x487) = 5;
  m3dRandRange(extraout_ECX,extraout_EDX);
  uVar1 = ftol();
  *(undefined4 *)(this + 0x48b) = uVar1;
  m3dMATR::Identity((m3dMATR *)(this + 0x4cf));
  *(undefined4 *)(this + 0x50f) = 0;
  *(undefined4 *)(this + 0x513) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0x40000000;
  *(undefined4 *)(this + 0xcc) = 0x40000000;
  return this;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 005345E0 */

aiNAV_PARAMS * __thiscall aiNAV_PARAMS::aiNAV_PARAMS(aiNAV_PARAMS *this)

{
  aiAREA::aiAREA((aiAREA *)(this + 0x1c));
  scnDOMAIN::scnDOMAIN((scnDOMAIN *)(this + 0x1a8));
  return this;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00534600 */

void __thiscall aiNPC::~aiNPC(aiNPC *this)

{
  *(undefined ***)this = &_vftable_;
  aiNAV_PARAMS::~aiNAV_PARAMS((aiNAV_PARAMS *)(this + 399));
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  return;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00534620 */

void __thiscall aiNAV_PARAMS::~aiNAV_PARAMS(aiNAV_PARAMS *this)

{
  aiAREA::~aiAREA((aiAREA *)(this + 0x1a8));
  aiAREA::~aiAREA((aiAREA *)(this + 0x1c));
  return;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00534640 */

int __thiscall
aiNPC::ProcessMsg(aiNPC *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  m3dMATR *this_00;
  
  if (param_1 < 0x3f9) {
    if (param_1 == 0x3f8) {
      (**(code **)(*(int *)this + 0x158))(param_2);
      return 0;
    }
    if (param_1 < 4) {
      if (param_1 == 3) {
        (**(code **)(*(int *)this + 0x15c))(param_2);
        return 0;
      }
      if (param_1 == 1) {
        iVar1 = (**(code **)(*(int *)this + 0x138))(param_2);
        if (iVar1 != 0) {
          (**(code **)(*(int *)this + 0x68))();
          (**(code **)(*(int *)this + 0x6c))();
          return 0;
        }
      }
      else if (param_1 == 2) {
        (**(code **)(*(int *)this + 0x13c))();
        return 0;
      }
    }
    else {
      if (param_1 == 1000) {
        (**(code **)(*(int *)this + 0x144))();
        return 0;
      }
      if (param_1 == 0x3f4) {
        (**(code **)(*(int *)this + 0x140))();
        return 0;
      }
    }
  }
  else if (param_1 - 0x3f9U < 0xcd) {
    switch(param_1) {
    case 0x3f9:
      (**(code **)(*(int *)this + 0x14c))(param_2);
      return 0;
    case 0x3fa:
      if (param_2 != (void *)0x0) {
        m3dMATR::TransformPoint((m3dMATR *)(uint)*(byte *)(param_1 + 0x5343d3),(m3dV *)param_2);
        m3dMATR::TransformPoint(this_00,(m3dV *)param_2);
        return 0;
      }
      break;
    case 0x3fb:
      iVar1 = (**(code **)(*(int *)this + 0x150))();
      *param_4 = iVar1;
      return 1;
    case 0x40c:
      (**(code **)(*(int *)this + 0x154))(param_2);
      break;
    case 0x4c5:
      uVar2 = (**(code **)(*(int *)this + 0x148))(param_2);
      *(undefined4 *)param_3 = uVar2;
      return 1;
    }
  }
  return 0;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 005348A0 */

int __thiscall aiNPC::ProcessINIT(aiNPC *this,void *param_1)

{
  m3dMATR *pmVar1;
  int iVar2;
  uint uVar3;
  animINST *this_00;
  objOBJ *poVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  int local_a0;
  float local_9c;
  char local_98 [64];
  m3dV local_58 [12];
  m3dV local_4c [12];
  m3dMATR local_40 [64];
  
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 8) != 0)) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x100000;
    *(undefined4 *)(this + 0x49f) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)(this + 0x4a3) = *(undefined4 *)((int)param_1 + 0xc);
    m3dMATR::MakeLCS2WCS_VZ(local_40,&m3dVZero,&m3dVUnitZ);
    fVar6 = DAT_005dd438;
    fVar7 = DAT_005dd438;
    pmVar1 = animINST::GetMatrL2W(*(animINST **)(this + 0xbc));
    iVar2 = m3dIsEqualMatr_A(local_40,pmVar1,fVar6,fVar7);
    if (iVar2 != 0) {
      aiDOMAIN_SPAWN::GetSpawnPosDir(*(aiDOMAIN_SPAWN **)(this + 0x49f),local_4c,local_58);
      m3dMATR::MakeLCS2WCS_VZ(local_40,&m3dVZero,&m3dVUnitZ);
      animINST::Transform(*(animINST **)(this + 0xbc),local_40,0);
    }
  }
  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
  *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 4;
  *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) | 0x500;
  this[0xfc] = (aiNPC)0xb;
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x1410000;
  *(undefined4 *)(this + 0x447) = 0;
  animINST::GetFloat(*(animINST **)(this + 0xbc),s_AI_PROP,s_radCDT,(float *)(this + 0x16b));
  animINST::GetFloat(*(animINST **)(this + 0xbc),s_AI_PROP,s_radActivate,(float *)(this + 0x4a7));
  animINST::GetFloat(*(animINST **)(this + 0xbc),s_AI_PROP,s_radActivateBack,(float *)(this + 0x4ab)
                    );
  iVar2 = GetInt(this,s_AI_PROP,s_isSniper,&local_a0);
  if (iVar2 != 0) {
    if (local_a0 == 0) {
      uVar3 = *(uint *)(this + 1099) & 0xfffbffff;
    }
    else {
      uVar3 = *(uint *)(this + 1099) | 0x40000;
    }
    *(uint *)(this + 1099) = uVar3;
  }
  iVar2 = GetInt(this,s_AI_PROP,s_isPlrNoVisibility,&local_a0);
  if ((iVar2 != 0) && (local_a0 != 0)) {
    *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x20000;
  }
  iVar2 = GetStr(this,s_AI_PROP,s_actorWayPoint,local_98,0x40);
  if (iVar2 != 0) {
    this_00 = scnSCENE::FindInstName(gsScenePtr,local_98);
    if (this_00 == (animINST *)0x0) {
      pcVar5 = GetLogableName(this);
      apLogErr(s_AI__waypoint___s__is_not_found_f,local_98,pcVar5);
    }
    else if (*(entIACTIVE_OBJ **)(this_00 + 0x13c) != (entIACTIVE_OBJ *)0x0) {
      iVar2 = entIACTIVE_OBJ::IsLocked(*(entIACTIVE_OBJ **)(this_00 + 0x13c));
      if (iVar2 == 0) {
        *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x10;
        animINST::GetPos(this_00,(m3dV *)(this + 0x3f3));
        *(undefined4 *)(this + 0x3ff) = *(undefined4 *)(this + 0x3f3);
        *(undefined4 *)(this + 0x403) = *(undefined4 *)(this + 0x3f7);
        *(undefined4 *)(this + 0x407) = *(undefined4 *)(this + 0x3fb);
      }
    }
  }
  iVar2 = GetStr(this,s_AI_PROP,s_navArea,local_98,0x40);
  if (iVar2 != 0) {
    poVar4 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),local_98);
    if (poVar4 == (objOBJ *)0x0) {
      pcVar5 = GetLogableName(this);
      apLogErr(s_AI__nav_area___s__is_not_found_f,local_98,pcVar5);
    }
    else {
      scnDOMAIN::SetObj((scnDOMAIN *)(this + 0x1ab),poVar4);
      objOBJ::SetStateProcYes(poVar4,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      iVar2 = (**(code **)(*(int *)(this + 0x1ab) + 4))();
      if (iVar2 != 0) {
        *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 8;
      }
    }
    iVar2 = GetStr(this,s_AI_PROP,s_navBanCross,local_98,0x40);
    if (iVar2 != 0) {
      poVar4 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),local_98);
      if (poVar4 == (objOBJ *)0x0) {
        pcVar5 = GetLogableName(this);
        apLogErr(s_AI__ban_cross_area___s__is_speci,local_98,pcVar5);
      }
      else {
        scnDOMAIN::SetObj((scnDOMAIN *)(this + 0x337),poVar4);
        objOBJ::SetStateProcYes(poVar4,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
        iVar2 = (**(code **)(*(int *)(this + 0x337) + 4))();
        if (iVar2 != 0) {
          *(uint *)(this + 0x44f) = *(uint *)(this + 0x44f) | 0x10;
        }
      }
    }
  }
  iVar2 = GetFloat(this,s_AI_PROP,s_size,&local_9c);
  if (iVar2 != 0) {
    animINST::Scale(*(animINST **)(this + 0xbc),local_9c,2);
  }
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
  *(float *)(this + 0x517) = 0.0;
  GetFloat(this,s_AI_PROP,s_timeIdleAfterSpawn,(float *)(this + 0x517));
  return 1;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00534C90 */

void __thiscall aiNPC::SetupHeightCDTParams(aiNPC *this)

{
  aiNPC *paVar1;
  int iVar2;
  
  paVar1 = this + 0x387;
  iVar2 = GetFloat(this,s_AI_PROP,s_heightUpTester,(float *)paVar1);
  if (((iVar2 == 0) && (gsScenePtr != (scnSCENE *)0x0)) &&
     (*(psSHEET **)(gsScenePtr + 0x80) != (psSHEET *)0x0)) {
    psSHEET::GetFloat(*(psSHEET **)(gsScenePtr + 0x80),s_AI_PROP,s_heightUpTester,(float *)paVar1);
  }
  if (*(float *)(this + 0x173) < *(float *)paVar1) {
    *(float *)(this + 0x173) = *(float *)paVar1;
  }
  return;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00534CF0 */

void __thiscall aiNPC::ProcessINIT_LEVEL(aiNPC *this)

{
  m3dV *pmVar1;
  
  (**(code **)(*(int *)this + 0x70))();
  (**(code **)(*(int *)this + 0x74))(0);
  pmVar1 = (m3dV *)(this + 0x40f);
  animINST::GetPos(*(animINST **)(this + 0xbc),pmVar1);
  *(undefined4 *)(this + 0x41b) = *(undefined4 *)pmVar1;
  *(undefined4 *)(this + 0x41f) = *(undefined4 *)(this + 0x413);
  *(undefined4 *)(this + 0x423) = *(undefined4 *)(this + 0x417);
  *(undefined4 *)(this + 0x427) = *(undefined4 *)pmVar1;
  *(undefined4 *)(this + 0x42b) = *(undefined4 *)(this + 0x413);
  *(undefined4 *)(this + 0x42f) = *(undefined4 *)(this + 0x417);
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)(this + 0x3c3));
  *(undefined4 *)(this + 0x3ef) = 0xffffffff;
  return;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00534D70 */

void __thiscall aiNPC::ProcessTERM(aiNPC *this)

{
  if (((byte)this[0x44f] & 8) != 0) {
    (**(code **)(*(int *)(this + 0x1ab) + 8))();
    if (((byte)this[0x44f] & 0x10) != 0) {
      (**(code **)(*(int *)(this + 0x337) + 8))();
    }
  }
  (**(code **)(*(int *)this + 0x84))();
  if ((*(uint *)(this + 0x44f) & 0x40000) != 0) {
    aiPLANNER::SetBoss(aiAttackPlanner,(aiNPC *)0x0);
  }
  return;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00534DD0 */

void __thiscall aiNPC::ProcessDESTROY_ENT(aiNPC *this,entENTITY *param_1)

{
  if (*(entENTITY **)(this + 0x4c3) == param_1) {
    aiENEMY::Assign((aiENEMY *)(this + 0x4bb),(entENTITY *)0x0);
    return;
  }
  return;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00534E00 */

void __thiscall aiNPC::ProcessIACTION(aiNPC *this,entIACTION *param_1)

{
  apNAME *this_00;
  int iVar1;
  
  iVar1 = apSTATE::IsState((apSTATE *)(this + 0x84),0x80);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x16c))(1);
  }
  this_00 = (apNAME *)(param_1 + 8);
  iVar1 = apNAME::IsName(this_00,s_ACTIVATE);
  if (iVar1 == 0) {
    iVar1 = apNAME::IsName(this_00,s_ACTIVATE_PLR_VISIBILITY);
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 0x170))();
      return;
    }
    iVar1 = apNAME::IsName(this_00,s_UNLOCK);
    if ((iVar1 != 0) && (*(int *)(this + 0x30) < 1)) {
      (**(code **)(*(int *)this + 0x16c))(1);
    }
  }
  else if (*(int *)(this + 0x30) == 0) {
    (**(code **)(*(int *)this + 0x16c))(1);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl.cpp
   addr: 00534EA0 */

void __thiscall aiNPC::ProcessFRAME(aiNPC *this)

{
  int iVar1;
  uint uVar2;
  uint local_4;
  
  local_4 = 0;
  iVar1 = cinSYSTEM::IsActive(gsSysCinema);
  if (((iVar1 == 0) && (iVar1 = *(int *)(this + 0xbc), *(int *)(iVar1 + 0x10) != 0)) &&
     (uVar2 = *(uint *)(iVar1 + 4), (uVar2 & 1) == 0)) {
    if (((*(uint *)(this + 1099) & 0x1000000) == 0) || ((*(uint *)(this + 1099) & 0x810000) != 0)) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      uVar2 = uVar2 & 0xfdffffff;
    }
    *(uint *)(iVar1 + 4) = uVar2;
    if ((*(uint *)(this + 1099) & 0x800000) == 0) {
      _apCfgReadBool((void **)&DAT_0095d914,s_Debug,s_Decomp_OFF_AI,(int *)&local_4);
      local_4 = local_4 | DAT_0095d928;
      if (((local_4 == 0) || (this == DAT_0095d924)) || (((byte)this[0x88] & 4) == 0)) {
        _DAT_0095d910 = 1;
        if (((byte)this[0x88] & 4) == 0) {
          (**(code **)(*(int *)this + 0x10c))();
        }
        else {
          (**(code **)(*(int *)this + 0x108))();
        }
        (**(code **)(*(int *)this + 0x110))();
        _DAT_0095d910 = 0;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl.cpp
   addr: 00534F90 */

void __thiscall aiNPC::UpdateTimers(aiNPC *this)

{
  float fVar1;
  int iVar2;
  float extraout_EDX;
  float extraout_EDX_00;
  float fVar3;
  
  if ((*(uint *)(this + 1099) & 0x10000000) == 0) {
    *(float *)(this + 0x4af) = gsElapsedTime + *(float *)(this + 0x4af);
  }
  else {
    *(undefined4 *)(this + 0x4af) = 0;
  }
  iVar2 = IsInAnyStrafe(this);
  fVar3 = extraout_EDX;
  if (iVar2 == 0) {
    *(float *)(this + 0x3b3) = gsElapsedTime + *(float *)(this + 0x3b3);
  }
  else {
    fVar1 = *(float *)(this + 0x3af) - gsElapsedTime;
    *(float *)(this + 0x3af) = fVar1;
    if (fVar1 < ___real_00000000) {
      StopStrafe(this);
      fVar3 = extraout_EDX_00;
    }
  }
  if (((*(uint *)(this + 1099) & 0x100) != 0) &&
     (fVar1 = gsElapsedTime * *(float *)(this + 0x377) + *(float *)(this + 0x443),
     *(float *)(this + 0x443) = fVar1, fVar1 < *(float *)(this + 0x37b))) {
    *(undefined4 *)(this + 0x443) = *(undefined4 *)(this + 0x37b);
  }
  m3dUpdateTimeField((float *)(this + 0x3a3),fVar3);
  m3dUpdateTimeField((float *)(this + 0x517),gsElapsedTime);
  aiENEMY::UpdateTimers((aiENEMY *)(this + 0x4bb));
  return;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00535080 */

aiINIT_DATA * __thiscall aiINIT_DATA::aiINIT_DATA(aiINIT_DATA *this)

{
  int iVar1;
  
  msgDATA::msgDATA((msgDATA *)this);
  *(undefined4 *)(this + 4) = 0x41495349;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined2 *)(this + 2) = 0x10;
  iVar1 = d3dFVF_DESCR::GetSizeofD3D((d3dFVF_DESCR *)&DAT_0095d918);
  *this = SUB41(iVar1,0);
  return this;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 005350B0 */

int __thiscall aiINIT_DATA_PACK::Pack(aiINIT_DATA_PACK *this,fioFILE_MEM *param_1,msgDATA *param_2)

{
  int iVar1;
  
  iVar1 = msgDATA_PACK::Pack((msgDATA_PACK *)this,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(entIACTIVE_OBJ **)(param_2 + 8) != (entIACTIVE_OBJ *)0x0) {
    gsMP_SYSTEM::WriteEIO(gsSysMP,(fioFILE *)param_1,*(entIACTIVE_OBJ **)(param_2 + 8));
  }
  return 1;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 005350F0 */

msgDATA * __thiscall aiINIT_DATA_PACK::UnPack(aiINIT_DATA_PACK *this,fioFILE_MEM *param_1)

{
  msgDATA *pmVar1;
  entIACTIVE_OBJ *peVar2;
  
  pmVar1 = msgDATA_PACK::UnPack((msgDATA_PACK *)this,param_1);
  if (*(int *)(pmVar1 + 8) != 0) {
    peVar2 = gsMP_SYSTEM::ReadEIO(gsSysMP,(fioFILE *)param_1);
    *(entIACTIVE_OBJ **)(pmVar1 + 8) = peVar2;
  }
  return pmVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl.cpp
   addr: 00535120 */

void __thiscall m3dMATR::TransformPoint(m3dMATR *this,m3dV *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float *in_stack_00000008;
  float local_10 [3];
  
  if (m3dSimdType == 0) {
    if (((uint)param_1 & 0xf) == 0) {
      fVar18 = *in_stack_00000008;
      fVar3 = in_stack_00000008[1];
      fVar2 = in_stack_00000008[2];
      fVar16 = fVar18 * *(float *)param_1 + *(float *)(param_1 + 0x30) +
               fVar3 * *(float *)(param_1 + 0x10) + fVar2 * *(float *)(param_1 + 0x20);
      fVar17 = fVar18 * *(float *)(param_1 + 4) + *(float *)(param_1 + 0x34) +
               fVar3 * *(float *)(param_1 + 0x14) + fVar2 * *(float *)(param_1 + 0x24);
      fVar18 = fVar18 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x38) +
               fVar3 * *(float *)(param_1 + 0x18) + fVar2 * *(float *)(param_1 + 0x28);
    }
    else {
      fVar18 = *in_stack_00000008;
      fVar3 = in_stack_00000008[1];
      fVar2 = in_stack_00000008[2];
      fVar16 = fVar18 * (float)*(undefined8 *)param_1 +
               fVar3 * (float)*(undefined8 *)(param_1 + 0x10) +
               fVar2 * (float)*(undefined8 *)(param_1 + 0x20) +
               (float)*(undefined8 *)(param_1 + 0x30);
      fVar17 = fVar18 * (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) +
               fVar3 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
               fVar2 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
      fVar18 = fVar18 * (float)*(undefined8 *)(param_1 + 8) +
               fVar3 * (float)*(undefined8 *)(param_1 + 0x18) +
               fVar2 * (float)*(undefined8 *)(param_1 + 0x28) +
               (float)*(undefined8 *)(param_1 + 0x38);
    }
    *(ulonglong *)in_stack_00000008 = CONCAT44(fVar17,fVar16);
    in_stack_00000008[2] = fVar18;
    return;
  }
  if (m3dSimdType != 1) {
    iVar7 = 0;
    pfVar6 = local_10;
    do {
      *pfVar6 = 0.0;
      iVar4 = 0;
      pfVar5 = (float *)(((int)param_1 - (int)local_10) + (int)pfVar6);
      fVar18 = ___real_00000000;
      do {
        pfVar1 = in_stack_00000008 + iVar4;
        fVar3 = *pfVar5;
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 4;
        fVar18 = *pfVar1 * fVar3 + fVar18;
      } while (iVar4 < 3);
      *pfVar6 = fVar18;
      iVar4 = iVar7 + iVar4 * 4;
      iVar7 = iVar7 + 1;
      *pfVar6 = fVar18 + *(float *)(param_1 + iVar4 * 4);
      pfVar6 = pfVar6 + 1;
    } while (iVar7 < 3);
    *in_stack_00000008 = local_10[0];
    in_stack_00000008[1] = local_10[1];
    in_stack_00000008[2] = local_10[2];
    return;
  }
  FastExitMediaState();
  uVar8 = (undefined4)*(undefined8 *)in_stack_00000008;
  uVar11 = CONCAT44(uVar8,uVar8);
  uVar8 = (undefined4)((ulonglong)*(undefined8 *)in_stack_00000008 >> 0x20);
  uVar14 = CONCAT44(uVar8,uVar8);
  uVar15 = CONCAT44(in_stack_00000008[2],in_stack_00000008[2]);
  uVar9 = PackedFloatingMUL(uVar11,*(undefined8 *)param_1);
  uVar10 = PackedFloatingMUL(uVar14,*(undefined8 *)(param_1 + 0x10));
  uVar12 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 0x20));
  uVar9 = PackedFloatingADD(uVar9,*(undefined8 *)(param_1 + 0x30));
  uVar13 = PackedFloatingMUL(uVar11,*(undefined8 *)(param_1 + 8));
  uVar11 = PackedFloatingADD(uVar10,uVar12);
  uVar10 = PackedFloatingMUL(uVar14,*(undefined8 *)(param_1 + 0x18));
  uVar15 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 0x28));
  uVar14 = PackedFloatingADD(uVar13,*(undefined8 *)(param_1 + 0x38));
  uVar11 = PackedFloatingADD(uVar9,uVar11);
  uVar9 = PackedFloatingADD(uVar10,uVar15);
  *(undefined8 *)in_stack_00000008 = uVar11;
  uVar11 = PackedFloatingADD(uVar14,uVar9);
  in_stack_00000008[2] = (float)uVar11;
  FastExitMediaState();
  return;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 005352D0 */

void __thiscall animINST::Scale(animINST *this,float param_1,int param_2)

{
  Scale(this,param_1,param_1,param_1,param_2);
  return;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00535300 */

void __thiscall scnDOMAIN::scnDOMAIN(scnDOMAIN *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined ***)(this + 0x10) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined ***)this = &_vftable_;
  return;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00535340 */

void __thiscall msgDATA_PACK::msgDATA_PACK(msgDATA_PACK *this)

{
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined ***)this = &_vftable_;
  return;
}




/* from: gs_shared:ai_ctrl.cpp
   addr: 00535370 */

void __thiscall aiAREA::aiAREA(aiAREA *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined ***)(this + 0x10) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x188) = 2;
  *(undefined ***)this = &_vftable_;
  return;
}

