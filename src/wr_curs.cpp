
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_curs.cpp
   addr: 00498020 */

int __fastcall wrCURSORS::Init(void)

{
  wrCURSORS *pwVar1;
  int iVar2;
  int iVar3;
  int local_104;
  char local_100 [256];
  
  _wrCursors = (wrCURSORS *)operator_new(8);
  if (_wrCursors == (wrCURSORS *)0x0) {
    _wrCursors = (wrCURSORS *)0x0;
  }
  else {
    pInstance = _wrCursors;
    *(undefined4 *)_wrCursors = 0;
    *(undefined4 *)(_wrCursors + 4) = 0;
  }
  gscAllocCursors(0xd);
  local_104 = 0;
  do {
    iVar3 = 0;
    do {
      sprintf(local_100,s_cursor__02i__02i,local_104,iVar3);
      iVar2 = gscRegisterCursor(iVar3 + local_104 * 2,(float)local_100,0.5,0.5,(char *)0x3f800000);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    local_104 = local_104 + 1;
  } while (local_104 < 6);
  gscRegisterCursor(0xc,0.0,0.0,0.0,(char *)0x0);
  gscCURSOR::Lock(&gscCursor,0.5,0.5);
  iVar3 = _apCfgReadInt((void **)0x0,s_GameOpt,s_Crosshair,&local_104);
  pwVar1 = pInstance;
  if (iVar3 != 0) {
    *(int *)pInstance = local_104;
    if (local_104 < 6) {
      _DAT_00948380 = *(int *)(pwVar1 + 4) + local_104 * 2;
      return 1;
    }
    _DAT_00948380 = local_104 * 2;
    return 1;
  }
  pwVar1 = pInstance + 4;
  *(undefined4 *)pInstance = 0;
  _DAT_00948380 = *(undefined4 *)pwVar1;
  return 1;
}




/* from: wr_curs.cpp
   addr: 00498170 */

void __fastcall wrCURSORS::Term(void)

{
  gscFreeCursors();
  if (_wrCursors != (wrCURSORS *)0x0) {
    pInstance = (wrCURSORS *)0x0;
    operator_delete(_wrCursors);
  }
  return;
}




/* from: wr_curs.cpp
   addr: 00498190 */

txmTEXTURE * __thiscall wrCURSORS::GetCursorTexture(wrCURSORS *this,int param_1,int param_2)

{
  txmTEXTURE *ptVar1;
  
  ptVar1 = gscGetCursorTexture(param_2 + param_1 * 2);
  return ptVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_curs.cpp
   addr: 004981B0 */

void __thiscall wrCURSORS::SetCursor(wrCURSORS *this,int param_1)

{
  *(int *)this = param_1;
  if (param_1 < 6) {
    _DAT_00948380 = *(int *)(this + 4) + param_1 * 2;
    return;
  }
  _DAT_00948380 = param_1 * 2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_curs.cpp
   addr: 004981E0 */

void __thiscall wrCURSORS::SetCursorType(wrCURSORS *this,int param_1)

{
  int iVar1;
  
  *(int *)(this + 4) = param_1;
  iVar1 = *(int *)this;
  if (iVar1 < 6) {
    _DAT_00948380 = param_1 + iVar1 * 2;
    return;
  }
  _DAT_00948380 = iVar1 * 2;
  return;
}

