
/* from: gs_shared:gm_shared.cpp
   addr: 0053EFF0 */

int __fastcall gmSharedInit(void)

{
  int iVar1;
  gsMP_CLIENT *this;
  
  iVar1 = dmgInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_dmgInit);
    return 0;
  }
  iVar1 = flrInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_flrInit);
    return 0;
  }
  iVar1 = waterInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_waterInit);
    return 0;
  }
  iVar1 = rwlInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_rwlInit);
    return 0;
  }
  iVar1 = gsMP_CLIENT::Init(this);
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_blklInit);
    return 0;
  }
  iVar1 = rplInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_rplInit);
    return 0;
  }
  iVar1 = peffInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_peffInit);
    return 0;
  }
  iVar1 = aiInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiInit);
    return 0;
  }
  iVar1 = dstrInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_dstrInit);
    return 0;
  }
  iVar1 = domMiscInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_domMiscInit);
    return 0;
  }
  iVar1 = itemInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_itemInit);
    return 0;
  }
  iVar1 = doorInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_doorInit);
    return 0;
  }
  iVar1 = trmpInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_trmpInit);
    return 0;
  }
  iVar1 = cinInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_cinInit);
    return 0;
  }
  iVar1 = bttnInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_bttnInit);
    return 0;
  }
  iVar1 = cauInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_cauInit);
    return 0;
  }
  entRegMsgMPDispatch(0x4c5);
  return 1;
}




/* from: gs_shared:gm_shared.cpp
   addr: 0053F1E0 */

void __fastcall gmSharedTerm(void)

{
  m3dTerm2DMatr();
  cinTerm();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  domMiscTerm();
  m3dTerm2DMatr();
  aiTerm();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  m3dTerm2DMatr();
  return;
}

