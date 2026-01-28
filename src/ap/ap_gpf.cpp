
/* from: ap:ap_gpf.cpp
   addr: 004A1A80 */

int __fastcall apGPF_FILTER::SetupFilter(void)

{
  SetUnhandledExceptionFilter(GPFExeptFunc);
  GlobalMemoryStatus((LPMEMORYSTATUS)&DAT_00611fa8);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ap:ap_gpf.cpp
   addr: 004A1AA0 */

long apGPF_FILTER::GPFExeptFunc(_EXCEPTION_POINTERS *param_1)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  FILE *_File;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uStack_428;
  _MEMORYSTATUS _Stack_420;
  CHAR local_400 [1024];
  
  uStack_428._4_4_ = 0x10;
  if ((isInFilter == 0) &&
     (((isInFilter = 1, param_1 == (_EXCEPTION_POINTERS *)0x0 ||
       (param_1->ExceptionRecord->ExceptionCode == 0xc0000005)) &&
      (DVar2 = GetModuleFileNameA(apHInstance,local_400,1000), DVar2 != 0)))) {
    pcVar3 = strrchr(local_400,0x5c);
    if (pcVar3 != (char *)0x0) {
      pcVar3[1] = '\0';
    }
    if (pFilter == (apGPF_FILTER *)0x0) {
      iVar5 = -1;
      pcVar3 = local_400;
      do {
        pcVar8 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      *(undefined4 *)(pcVar8 + -1) = _s_ap_gpf_log;
      *(undefined4 *)(pcVar8 + 3) = DAT_005f5844;
      *(undefined2 *)(pcVar8 + 7) = DAT_005f5848;
      pcVar8[9] = DAT_005f584a;
    }
    else {
      pcVar3 = (char *)(*(code *)**(undefined4 **)pFilter)();
      uVar4 = 0xffffffff;
      do {
        pcVar8 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar3 = local_400;
      do {
        pcVar7 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar3 = pcVar8 + -uVar4;
      pcVar8 = pcVar7 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    _File = fopen(local_400,s_at);
    if (_File != (FILE *)0x0) {
      fprintf(_File,s_________________________________);
      if (param_1 != (_EXCEPTION_POINTERS *)0x0) {
        fprintf(_File,s_GPF_occured_at_0x_08X_,param_1->ExceptionRecord->ExceptionAddress);
      }
      time(&uStack_428);
      if (param_1 == (_EXCEPTION_POINTERS *)0x0) {
        pcVar3 = ctime(&uStack_428);
        pcVar8 = s_Build_Date__s___Record__no_crash;
      }
      else {
        pcVar3 = ctime(&uStack_428);
        pcVar8 = s_Build_Date__s___Crash_Date___s;
      }
      fprintf(_File,pcVar8,s_Feb_21_2003,pcVar3);
      GetComputerNameA(local_400,(LPDWORD)((int)&uStack_428 + 4));
      fprintf(_File,s_Computer_Name___s_,local_400);
      GlobalMemoryStatus(&_Stack_420);
      fprintf(_File,s_Cur_____Mem__Phisical___d__Avail,_Stack_420.dwTotalPhys / 1000000,
              _Stack_420.dwAvailPhys / 1000000,_Stack_420.dwTotalPageFile / 1000000,
              _Stack_420.dwAvailPageFile / 1000000);
      fprintf(_File,s_Startup_Mem__Phisical___d__Avail,DAT_00611fb0 / 1000000,DAT_00611fb4 / 1000000
              ,DAT_00611fb8 / 1000000,DAT_00611fbc / 1000000);
      fflush(_File);
      if (pFilter != (apGPF_FILTER *)0x0) {
        (**(code **)(*(int *)pFilter + 4))(_File,local_400);
      }
      fclose(_File);
    }
  }
  isInFilter = 0;
  return 0;
}

