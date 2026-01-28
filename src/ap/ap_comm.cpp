
/* from: ap:ap_comm.cpp
   addr: 004A07E0 */

int __cdecl apInit(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_0060f328;
  do {
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x42;
  } while ((int)puVar1 < 0x60fd78);
  apGPF_FILTER::SetupFilter();
  return 1;
}




/* from: ap:ap_comm.cpp
   addr: 004A0810 */

void __cdecl apTerm(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  puVar3 = &DAT_0060f328;
  do {
    iVar2 = -1;
    pcVar4 = (char *)(puVar3 + 1);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      fclose((FILE *)*puVar3);
    }
    *puVar3 = 0;
    puVar3 = puVar3 + 0x42;
    if (0x60fd77 < (int)puVar3) {
      return;
    }
  } while( true );
}




/* from: ap:ap_comm.cpp
   addr: 004A0850 */

void __cdecl apMsgBox(char *param_1,...)

{
  if (param_1 == (char *)0x0) {
    if (DAT_00610f84 != (code *)0x0) {
      (*DAT_00610f84)(0);
      return;
    }
  }
  else if (DAT_00610f84 != (code *)0x0) {
    vsprintf(&DAT_0060fd78,param_1,&stack0x00000008);
    (*DAT_00610f84)(&DAT_0060fd78);
  }
  return;
}




/* from: ap:ap_comm.cpp
   addr: 004A08A0 */

void __cdecl apMsg(char *param_1,...)

{
  if (param_1 == (char *)0x0) {
    if (DAT_00610f80 != (code *)0x0) {
      (*DAT_00610f80)(0);
      return;
    }
  }
  else if (DAT_00610f80 != (code *)0x0) {
    vsprintf(&DAT_0060fd78,param_1,&stack0x00000008);
    (*DAT_00610f80)(&DAT_0060fd78);
  }
  return;
}




/* from: ap:ap_comm.cpp
   addr: 004A08F0 */

void __cdecl apLog(char *param_1,...)

{
  if (param_1 == (char *)0x0) {
    if (DAT_0060f320 != (code *)0x0) {
      (*DAT_0060f320)(0);
      return;
    }
  }
  else if (DAT_0060f320 != (code *)0x0) {
    vsprintf(&DAT_0060fd78,param_1,&stack0x00000008);
    (*DAT_0060f320)(&DAT_0060fd78);
  }
  return;
}




/* from: ap:ap_comm.cpp
   addr: 004A0940 */

void __cdecl apLogErr(char *param_1,...)

{
  if (param_1 == (char *)0x0) {
    if (DAT_0060ff78 != (code *)0x0) {
      (*DAT_0060ff78)(0);
      return;
    }
  }
  else {
    if (DAT_0060ff78 != (code *)0x0) {
      vsprintf(&DAT_0060fd78,param_1,&stack0x00000008);
      (*DAT_0060ff78)(&DAT_0060fd78);
    }
    if (DAT_0060f320 != (code *)0x0) {
      vsprintf(&DAT_0060fd78,param_1,&stack0x00000008);
      (*DAT_0060f320)(&DAT_0060fd78);
    }
  }
  return;
}




/* from: ap:ap_comm.cpp
   addr: 004A09F0 */

void __thiscall apNAME::SetName(apNAME *this,char *param_1)

{
  strncpy((char *)this,param_1,0x3f);
  this[0x3e] = (apNAME)0x0;
  return;
}




/* from: ap:ap_comm.cpp
   addr: 004A0A10 */

int __thiscall apNAME::IsName(apNAME *this,char *param_1)

{
  apNAME aVar1;
  bool bVar2;
  
  while( true ) {
    aVar1 = *this;
    bVar2 = (byte)aVar1 < (byte)*param_1;
    if (aVar1 != (apNAME)*param_1) break;
    if (aVar1 == (apNAME)0x0) {
      return 1;
    }
    aVar1 = this[1];
    bVar2 = (byte)aVar1 < (byte)((apNAME *)param_1)[1];
    if (aVar1 != ((apNAME *)param_1)[1]) break;
    this = this + 2;
    param_1 = (char *)((apNAME *)param_1 + 2);
    if (aVar1 == (apNAME)0x0) {
      return 1;
    }
  }
  return (uint)(1 - bVar2 == (uint)(bVar2 != 0));
}

