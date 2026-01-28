
/* from: libgsconnect:ptimer.cpp
   addr: 0059A3F0 */

uchar PTIMER_fn_bResetStart(void)

{
  BOOL BVar1;
  
  BVar1 = QueryPerformanceCounter(&PTIMER_stStartCycle);
  if (BVar1 == 0) {
    return '\0';
  }
  BVar1 = QueryPerformanceFrequency(&PTIMER_stCyclesPerSecond);
  if (BVar1 == 0) {
    return '\0';
  }
  DAT_005fedbc = 0;
  return '\x01';
}




/* from: libgsconnect:ptimer.cpp
   addr: 0059A420 */

uint PTIMER_fn_ulElapsedMiliSeconds(void)

{
  undefined8 uVar1;
  LARGE_INTEGER local_10;
  undefined4 uStack_4;
  
  if (DAT_005fedbc != '\0') {
    PTIMER_fn_bResetStart();
  }
  QueryPerformanceCounter(&local_10);
  uVar1 = allmul(local_10.s.LowPart - PTIMER_stStartCycle._0_4_,
                 (local_10.s.HighPart - PTIMER_stStartCycle._4_4_) -
                 (uint)(local_10.s.LowPart < PTIMER_stStartCycle.s.LowPart),1000,0);
  uVar1 = alldiv(uVar1,PTIMER_stCyclesPerSecond.s.LowPart,PTIMER_stCyclesPerSecond.s.HighPart);
  uStack_4 = (undefined4)((ulonglong)uVar1 >> 0x20);
  PTIMER_fn_bResetStart();
  return (uint)uVar1;
}

