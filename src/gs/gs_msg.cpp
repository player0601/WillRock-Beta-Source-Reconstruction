
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_msg.cpp
   addr: 004FC420 */

int __fastcall gsMsgInit(void)

{
  msgSYSTEM::RegisterMsg(&msgSystem,1000,s_GS_MSG_FRAME);
  msgSYSTEM::RegisterMsg(&msgSystem,0x3e9,s_GS_MSG_RENDER);
  msgSYSTEM::RegisterMsg(&msgSystem,0x3ec,s_GS_MSG_LOAD_LEVEL);
  msgSYSTEM::RegisterMsg(&msgSystem,0x3f4,s_GS_MSG_INIT_LEVEL);
  msgSYSTEM::RegisterMsg(&msgSystem,0x3f5,s_GS_MSG_TERM_LEVEL);
  msgSYSTEM::RegisterMsg(&msgSystem,0x3f8,s_GS_MSG_IACTION);
  msgSYSTEM::RegisterMsg(&msgSystem,0x3f9,s_GS_MSG_CDT);
  msgSYSTEM::RegisterMsg(&msgSystem,0x3fa,s_GS_MSG_SET_LEVEL_ANCHOR);
  msgSYSTEM::RegisterMsg(&msgSystem,0x3fb,s_GS_MSG_ASK_KEEP_LEVEL_RELOAD);
  msgSYSTEM::RegisterMsg(&msgSystem,0x3f1,s_GS_MSG_INIT_MAP);
  msgSYSTEM::RegisterMsg(&msgSystem,0x3ff,s_GS_MSG_MP_SERVERCLIENT);
  msgSYSTEM::RegisterMsg(&msgSystem,0x400,s_GS_MSG_MP_SERVERCLIENT_SIMUL);
  msgSYSTEM::RegisterMsg(&msgSystem,0x401,s_GS_MSG_MP_CREATE_PLAYER);
  msgSYSTEM::RegisterMsg(&msgSystem,0x402,s_GS_MSG_MP_CREATE_ENT);
  msgSYSTEM::RegisterMsg(&msgSystem,0x403,s_GS_MSG_MP_SYNC);
  msgSYSTEM::RegisterMsg(&msgSystem,0x404,s_GS_MSG_MP_GET_SYNC_DATA);
  msgSYSTEM::RegisterMsg(&msgSystem,0x405,s_GS_MSG_MP_CLIENT_READY);
  msgSYSTEM::RegisterMsg(&msgSystem,0x409,s_GS_MSG_MP_SHOW_MSG);
  msgSYSTEM::RegisterMsg(&msgSystem,0x40a,s_GS_MSG_MP_UPD_POS);
  msgSYSTEM::RegisterMsg(&msgSystem,0x40c,s_GS_MSG_MP_NOTIFY);
  DAT_009482d4 = timeGetTime();
  DAT_00948300 = 0;
  DAT_009482f8 = DAT_009482d4;
  gsTime = DAT_009482d4;
  msgSYSTEM::NextFrame(&msgSystem);
  _DAT_008b6f4c = 0x3fc;
  _DAT_008b6f50 = 1000;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_msg.cpp
   addr: 004FC610 */

void __fastcall _gsMsgCalcElapsedTime(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD dwMilliseconds;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  LARGE_INTEGER local_18;
  LARGE_INTEGER local_10;
  uint local_8;
  int iStack_4;
  
  gsTime = timeGetTime();
  BVar2 = QueryPerformanceFrequency(&local_10);
  if ((BVar2 == 0) || (BVar2 = QueryPerformanceCounter(&local_18), BVar2 == 0)) {
    local_8 = gsTime - DAT_009482d4;
    iStack_4 = 0;
    fVar6 = (float10)local_8 * (float10)___real_3a83126f;
  }
  else {
    local_8 = local_18.s.LowPart - DAT_009482e0;
    iStack_4 = (local_18.s.HighPart - DAT_009482e4) - (uint)(local_18.s.LowPart < DAT_009482e0);
    fVar6 = (float10)CONCAT44(iStack_4,local_8) / (float10)(longlong)local_10;
  }
  gsElapsedTime = (float)fVar6;
  if (gsElapsedTime < ___real_3ba3d70a) {
    dwMilliseconds = ftol();
    Sleep(dwMilliseconds);
  }
  gsTime = timeGetTime();
  BVar2 = QueryPerformanceFrequency(&local_10);
  if ((BVar2 == 0) || (BVar2 = QueryPerformanceCounter(&local_18), BVar2 == 0)) {
    uVar3 = gsTime - DAT_009482d4;
    DAT_009482d4 = gsTime;
    fVar6 = (float10)uVar3 * (float10)___real_3a83126f;
  }
  else {
    bVar5 = local_18.s.LowPart < DAT_009482e0;
    iVar4 = local_18.s.LowPart - DAT_009482e0;
    DAT_009482e0 = local_18.s.LowPart;
    iVar1 = local_18.s.HighPart - DAT_009482e4;
    DAT_009482e4 = local_18.s.HighPart;
    fVar6 = (float10)CONCAT44(iVar1 - (uint)bVar5,iVar4) / (float10)(longlong)local_10;
  }
  gsElapsedTime = (float)((float10)_DAT_005f72a0 * fVar6);
  if (___real_3dcccccd < gsElapsedTime) {
    gsElapsedTime = 0.1;
  }
  local_18.s.LowPart._1_3_ = 0;
  local_18.s.LowPart._0_1_ = ABS(DAT_009482ec) < _DAT_005dc608;
  if ((float)local_18.s.LowPart == ___real_00000000) {
    gsElapsedTime = DAT_009482ec;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_msg.cpp
   addr: 004FC7E0 */

void __fastcall gsMsgCallFrame(void)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint local_8 [2];
  
  _gsMsgCalcElapsedTime();
  uVar2 = msgSYSTEM::GetFrameNmb(&msgSystem);
  if (uVar2 == 0) {
    msgSYSTEM::NextFrame(&msgSystem);
  }
  else if (1 < uVar2) {
    local_8[1] = 0;
    local_8[0] = gsTime - DAT_009482f8;
    uVar1 = (ulonglong)local_8[0];
    if (___real_447a0000 < (float)uVar1) {
      local_8[0] = uVar2 - DAT_00948300;
      local_8[1] = 0;
      DAT_00948308 = (float)local_8[0] / ((float)uVar1 * ___real_3a83126f);
      DAT_009482f8 = gsTime;
      DAT_00948300 = uVar2;
      gsMP_NETWORK::UpdStat(gsSysNetwork,1.0);
    }
  }
  vidDRIVER::SetFPS(vidDriver,DAT_00948308);
  iVar3 = _apCfgReadBool((void **)&DAT_009482e8,s_Debug,s_Decomp_ProfCallFr,(int *)local_8);
  if ((iVar3 == 0) || (local_8[0] == 0)) {
    DAT_009482d8 = 0;
  }
  else {
    DAT_009482d8 = DAT_009482d8 + 1;
    if (10 < DAT_009482d8) {
      gsMsgProcessFrameProfile();
      goto LAB_004fc8e1;
    }
  }
  gsMsgProcessFrameProfile();
LAB_004fc8e1:
  gsElapsedTimeLevel = gsElapsedTime + gsElapsedTimeLevel;
  return;
}




/* from: gs:gs_msg.cpp
   addr: 004FC900
   addr: 004FC900 */

void __cdecl gsMsgProcessFrameProfile(void)

{
  m3dTerm2DMatr();
  msgSYSTEM::DispatchAll(&msgSystem,gsElapsedTime);
  msgSYSTEM::SendAll(&msgSystem,1000,(void *)0x0,(msgADDR *)0x0);
  msgSYSTEM::NextFrame(&msgSystem);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_msg.cpp
   addr: 004FC940 */

void __fastcall gsMsgSetElapsedTimeScale(float param_1)

{
  float in_stack_00000004;
  
  if (in_stack_00000004 < ___real_00000000) {
    _DAT_005f72a0 = 1.0;
    return;
  }
  _DAT_005f72a0 = in_stack_00000004;
  return;
}




/* from: gs:gs_msg.cpp
   addr: 004FC980 */

void __fastcall gsMsgChangeMode(int param_1)

{
  int iVar1;
  int local_4;
  
  _eioIsUpdSuspend = 0;
  local_4 = param_1;
  if (param_1 == 1) {
    if ((gsAppState & 0x2000000U) == 0) goto LAB_004fc9d4;
    gsAppState = gsAppState & 0xfdffffff;
  }
  else {
    if (param_1 != 0) goto LAB_004fc9d4;
    iVar1 = gsMP_SYSTEM::GetMode(gsSysMP);
    if (iVar1 != 1) goto LAB_004fc9d4;
    gsAppState = gsAppState | 0x2000000;
  }
  _eioIsUpdSuspend = 1;
LAB_004fc9d4:
  msgSYSTEM::SendAll(&msgSystem,0x3fc,&local_4,(msgADDR *)0x0);
  return;
}

