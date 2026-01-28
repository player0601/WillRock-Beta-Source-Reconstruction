
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_main.cpp
   addr: 0049BDC0 */

undefined4 WinMain_16(HINSTANCE__ *param_1,undefined4 param_2,char *param_3)

{
  uiUI_SYSTEM *puVar1;
  undefined4 uVar2;
  gsWIN_APP_SYSTEM *this;
  gsSTRINGS *pgVar3;
  gsLVL_SYSTEM *this_00;
  gsRENDER_SYSTEM *this_01;
  gsINP_SYSTEM *this_02;
  wrUI_SYSTEM *this_03;
  gsSND_SYSTEM *this_04;
  gsCFG_SYSTEM *this_05;
  gsDOMAIN_LIST *this_06;
  pshSHADOW_SYSTEM *this_07;
  mrrMIRROR_SYSTEM *this_08;
  entIACTIVE_OBJ *this_09;
  gsMP_SERVER *this_10;
  gsMP_CLIENT *this_11;
  
  apHInstance = param_1;
  wrAppCmdLine = param_3;
  wrAppState = 0;
  apGPF_FILTER::pFilter = (apGPF_FILTER *)&DAT_0060f014;
  this = (gsWIN_APP_SYSTEM *)operator_new(0x94);
  if (this == (gsWIN_APP_SYSTEM *)0x0) {
    gsAppSystem = (gsAPP_SYSTEM *)0x0;
  }
  else {
    gsWIN_APP_SYSTEM::gsWIN_APP_SYSTEM(this,s_WR_WIN_CLASS,s_Will_Rock,0x67);
    *(undefined4 *)(this + 0x90) = 0;
    *(undefined ***)this = &wrAPP_SYSTEM::_vftable_;
    gsAppSystem = (gsAPP_SYSTEM *)this;
  }
  pgVar3 = (gsSTRINGS *)operator_new(0x34);
  if (pgVar3 == (gsSTRINGS *)0x0) {
    gsStrings = (gsSTRINGS *)0x0;
  }
  else {
    gsSTRINGS::gsSTRINGS(pgVar3);
    gsStrings = pgVar3;
  }
  this_00 = (gsLVL_SYSTEM *)operator_new(0x3d90);
  if (this_00 == (gsLVL_SYSTEM *)0x0) {
    gsSysLevel = (gsLVL_SYSTEM *)0x0;
  }
  else {
    gsLVL_SYSTEM::gsLVL_SYSTEM(this_00);
    this_00[0x3c3c] = (gsLVL_SYSTEM)0x0;
    this_00[0x3c3d] = (gsLVL_SYSTEM)0x40;
    *(undefined4 *)(this_00 + 0x3d84) = 0;
    *(undefined4 *)(this_00 + 0x3d88) = 0;
    *(undefined4 *)(this_00 + 0x3d8c) = 0;
    this_00[0x3c40] = (gsLVL_SYSTEM)0x0;
    this_00[0x3d44] = (gsLVL_SYSTEM)0x0;
    *(undefined2 *)(this_00 + 0x3c3e) = 0x154;
    *(undefined ***)this_00 = &wrLVL_SYSTEM::_vftable_;
    gsSysLevel = this_00;
  }
  this_01 = (gsRENDER_SYSTEM *)operator_new(0x3c);
  if (this_01 == (gsRENDER_SYSTEM *)0x0) {
    gsSysRender = (gsRENDER_SYSTEM *)0x0;
  }
  else {
    gsRENDER_SYSTEM::gsRENDER_SYSTEM(this_01);
    *(undefined ***)this_01 = &wrRENDER_SYSTEM::_vftable_;
    gsSysRender = this_01;
  }
  this_02 = (gsINP_SYSTEM *)operator_new(0x70);
  if (this_02 == (gsINP_SYSTEM *)0x0) {
    gsSysInput = (gsINP_SYSTEM *)0x0;
  }
  else {
    gsINP_SYSTEM::gsINP_SYSTEM(this_02);
    *(undefined ***)this_02 = &wrINP_SYSTEM::_vftable_;
    gsSysInput = this_02;
  }
  this_03 = (wrUI_SYSTEM *)operator_new(0x16c);
  if (this_03 == (wrUI_SYSTEM *)0x0) {
    uiSystem = (uiUI_SYSTEM *)0x0;
  }
  else {
    uiSystem = (uiUI_SYSTEM *)wrUI_SYSTEM::wrUI_SYSTEM(this_03);
  }
  fontManager = (uiFONT_MANAGER *)operator_new(0x10);
  if (fontManager == (uiFONT_MANAGER *)0x0) {
    fontManager = (uiFONT_MANAGER *)0x0;
  }
  else {
    *(undefined4 *)(fontManager + 4) = 0;
    *(undefined4 *)(fontManager + 8) = 0;
    *(undefined4 *)(fontManager + 0xc) = 0;
    *(undefined ***)fontManager = &uiFONT_MANAGER::_vftable_;
  }
  this_04 = (gsSND_SYSTEM *)operator_new(0xf8);
  if (this_04 == (gsSND_SYSTEM *)0x0) {
    gsSysSound = (gsSND_SYSTEM *)0x0;
  }
  else {
    gsSND_SYSTEM::gsSND_SYSTEM(this_04);
    *(undefined ***)this_04 = &wrSND_SYSTEM::_vftable_;
    gsSysSound = this_04;
  }
  this_05 = (gsCFG_SYSTEM *)operator_new(0xc);
  if (this_05 == (gsCFG_SYSTEM *)0x0) {
    gsSysCfg = (gsCFG_SYSTEM *)0x0;
  }
  else {
    gsSysCfg = (gsCFG_SYSTEM *)gsCFG_SYSTEM::gsCFG_SYSTEM(this_05);
  }
  this_06 = (gsDOMAIN_LIST *)operator_new(0x3d0);
  if (this_06 == (gsDOMAIN_LIST *)0x0) {
    gsSysVis = (gsVIS_SYSTEM *)0x0;
  }
  else {
    gsDOMAIN_LIST::gsDOMAIN_LIST(this_06);
    *(undefined4 *)(this_06 + 0x3c4) = _m3dVUndef;
    *(undefined4 *)(this_06 + 0x3c8) = DAT_0096374c;
    uVar2 = DAT_00963750;
    *(undefined ***)this_06 = &gsVIS_SYSTEM::_vftable_;
    *(undefined4 *)(this_06 + 0x3cc) = uVar2;
    gsSysVis = (gsVIS_SYSTEM *)this_06;
  }
  this_07 = (pshSHADOW_SYSTEM *)operator_new(0x58c4);
  if (this_07 == (pshSHADOW_SYSTEM *)0x0) {
    gsSysProjShd = (pshSHADOW_SYSTEM *)0x0;
  }
  else {
    pshSHADOW_SYSTEM::pshSHADOW_SYSTEM(this_07);
    *(undefined ***)this_07 = &wrSHADOW_SYSTEM::_vftable_;
    gsSysProjShd = this_07;
  }
  this_08 = (mrrMIRROR_SYSTEM *)operator_new(0x4414);
  if (this_08 == (mrrMIRROR_SYSTEM *)0x0) {
    gsSysMirror = (mrrMIRROR_SYSTEM *)0x0;
  }
  else {
    gsSysMirror = (mrrMIRROR_SYSTEM *)mrrMIRROR_SYSTEM::mrrMIRROR_SYSTEM(this_08);
  }
  this_09 = (entIACTIVE_OBJ *)operator_new(0x140);
  if (this_09 == (entIACTIVE_OBJ *)0x0) {
    wrSysStat = (wrSTAT_SYSTEM *)0x0;
  }
  else {
    entIACTIVE_OBJ::entIACTIVE_OBJ(this_09);
    *(undefined4 *)(this_09 + 0x94) = 0;
    *(undefined4 *)(this_09 + 0x98) = 0;
    *(undefined4 *)(this_09 + 0x9c) = 0;
    *(undefined4 *)(this_09 + 0xa0) = 0;
    *(undefined4 *)(this_09 + 0xa4) = 0;
    *(undefined4 *)(this_09 + 0xa8) = 0;
    *(undefined4 *)(this_09 + 0xd8) = 0;
    *(undefined4 *)(this_09 + 0xdc) = 0;
    *(undefined4 *)(this_09 + 0xe0) = 0;
    *(undefined4 *)(this_09 + 0xe4) = 0;
    *(undefined4 *)(this_09 + 0xe8) = 0;
    *(undefined4 *)(this_09 + 0xec) = 0;
    *(undefined4 *)(this_09 + 0x11c) = 0;
    *(undefined4 *)(this_09 + 0x120) = 0;
    *(undefined4 *)(this_09 + 0x124) = 0;
    *(undefined4 *)(this_09 + 0x128) = 0;
    *(undefined4 *)(this_09 + 300) = 0xffffffff;
    *(undefined4 *)(this_09 + 0x130) = 0;
    *(undefined4 *)(this_09 + 0x134) = 0xffffffff;
    *(undefined4 *)(this_09 + 0x138) = 0;
    *(undefined4 *)(this_09 + 0x13c) = 0;
    *(undefined ***)this_09 = &wrSTAT_SYSTEM::_vftable_;
    wrSysStat = (wrSTAT_SYSTEM *)this_09;
  }
  this_10 = (gsMP_SERVER *)operator_new(0xa00);
  if (this_10 == (gsMP_SERVER *)0x0) {
    gsSysServer = (gsMP_SERVER *)0x0;
  }
  else {
    gsSysServer = (gsMP_SERVER *)gsMP_SERVER::gsMP_SERVER(this_10);
  }
  this_11 = (gsMP_CLIENT *)operator_new(0x510);
  if (this_11 == (gsMP_CLIENT *)0x0) {
    gsSysClient = (gsMP_CLIENT *)0x0;
  }
  else {
    gsSysClient = (gsMP_CLIENT *)gsMP_CLIENT::gsMP_CLIENT(this_11);
  }
  gspCutscene = (gsCUTSCENE *)operator_new(4);
  if (gspCutscene == (gsCUTSCENE *)0x0) {
    gspCutscene = (gsCUTSCENE *)0x0;
  }
  else {
    *(undefined ***)gspCutscene = &wrCUTSCENE::_vftable_;
  }
  gsAppState = gsAppState | 0x8000;
  gsRun();
  if (gsAppSystem != (gsAPP_SYSTEM *)0x0) {
    (*(code *)**(undefined4 **)gsAppSystem)(1);
  }
  gsAppSystem = (gsAPP_SYSTEM *)0x0;
  if (gsSysLevel != (gsLVL_SYSTEM *)0x0) {
    (*(code *)**(undefined4 **)gsSysLevel)(1);
  }
  gsSysLevel = (gsLVL_SYSTEM *)0x0;
  if (gsSysRender != (gsRENDER_SYSTEM *)0x0) {
    (*(code *)**(undefined4 **)gsSysRender)(1);
  }
  gsSysRender = (gsRENDER_SYSTEM *)0x0;
  if (gsSysInput != (gsINP_SYSTEM *)0x0) {
    (*(code *)**(undefined4 **)gsSysInput)(1);
  }
  gsSysInput = (gsINP_SYSTEM *)0x0;
  if (fontManager != (uiFONT_MANAGER *)0x0) {
    (*(code *)**(undefined4 **)fontManager)(1);
  }
  puVar1 = uiSystem;
  fontManager = (uiFONT_MANAGER *)0x0;
  if (uiSystem != (uiUI_SYSTEM *)0x0) {
    uiUI_SYSTEM::~uiUI_SYSTEM(uiSystem);
    operator_delete(puVar1);
  }
  uiSystem = (uiUI_SYSTEM *)0x0;
  if (gsSysCfg != (gsCFG_SYSTEM *)0x0) {
    (**(code **)(*(int *)gsSysCfg + 8))(1);
  }
  gsSysCfg = (gsCFG_SYSTEM *)0x0;
  if (gsSysSound != (gsSND_SYSTEM *)0x0) {
    (*(code *)**(undefined4 **)gsSysSound)(1);
  }
  gsSysSound = (gsSND_SYSTEM *)0x0;
  if (gsSysVis != (gsVIS_SYSTEM *)0x0) {
    (*(code *)**(undefined4 **)gsSysVis)(1);
  }
  gsSysVis = (gsVIS_SYSTEM *)0x0;
  if (gsSysProjShd != (pshSHADOW_SYSTEM *)0x0) {
    (*(code *)**(undefined4 **)gsSysProjShd)(1);
  }
  gsSysProjShd = (pshSHADOW_SYSTEM *)0x0;
  if (gsSysMirror != (mrrMIRROR_SYSTEM *)0x0) {
    (*(code *)**(undefined4 **)gsSysMirror)(1);
  }
  gsSysMirror = (mrrMIRROR_SYSTEM *)0x0;
  if (wrSysStat != (wrSTAT_SYSTEM *)0x0) {
    (*(code *)**(undefined4 **)wrSysStat)(1);
  }
  wrSysStat = (wrSTAT_SYSTEM *)0x0;
  if (gsSysServer != (gsMP_SERVER *)0x0) {
    (*(code *)**(undefined4 **)gsSysServer)(1);
  }
  gsSysServer = (gsMP_SERVER *)0x0;
  if (gsSysClient != (gsMP_CLIENT *)0x0) {
    (*(code *)**(undefined4 **)gsSysClient)(1);
  }
  pgVar3 = gsStrings;
  gsSysClient = (gsMP_CLIENT *)0x0;
  if (gsStrings != (gsSTRINGS *)0x0) {
    apFree(*(void **)(gsStrings + 0x24));
    apFree(*(void **)(pgVar3 + 0x18));
    apFree(*(void **)(pgVar3 + 0xc));
    apFree(*(void **)pgVar3);
    operator_delete(pgVar3);
  }
  gsStrings = (gsSTRINGS *)0x0;
  operator_delete(gspCutscene);
  gspCutscene = (gsCUTSCENE *)0x0;
  return 0;
}




/* from: wr_main.cpp
   addr: 0049C310 */

void * __thiscall wrLVL_SYSTEM::_scalar_deleting_destructor_(wrLVL_SYSTEM *this,uint param_1)

{
  gsLVL_SYSTEM::~gsLVL_SYSTEM((gsLVL_SYSTEM *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_main.cpp
   addr: 0049C330 */

void * __thiscall wrINP_SYSTEM::_scalar_deleting_destructor_(wrINP_SYSTEM *this,uint param_1)

{
  gsINP_SYSTEM::~gsINP_SYSTEM((gsINP_SYSTEM *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_main.cpp
   addr: 0049C350 */

void * __thiscall wrSND_SYSTEM::_vector_deleting_destructor_(wrSND_SYSTEM *this,uint param_1)

{
  gsSND_SYSTEM::~gsSND_SYSTEM((gsSND_SYSTEM *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_main.cpp
   addr: 0049C370 */

void * __thiscall wrSHADOW_SYSTEM::_vector_deleting_destructor_(wrSHADOW_SYSTEM *this,uint param_1)

{
  pshSHADOW_SYSTEM::~pshSHADOW_SYSTEM((pshSHADOW_SYSTEM *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_main.cpp
   addr: 0049C3A0 */

int __thiscall wrAPP_SYSTEM::Init(wrAPP_SYSTEM *this)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = _gsDetectDx9();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  pcVar2 = strstr(wrAppCmdLine,s__safemode);
  if (pcVar2 != (char *)0x0) {
    apCfgWriteBool(s_CONFIG,s_IsScaleInited,0);
    apCfgWriteBool(s_CONFIG,s_IsScaleMinimal,1);
  }
  iVar1 = gsWIN_APP_SYSTEM::Init((gsWIN_APP_SYSTEM *)this);
  return iVar1;
}




/* from: wr_main.cpp
   addr: 0049C400 */

int __thiscall wrAPP_SYSTEM::InitSubsys(wrAPP_SYSTEM *this)

{
  int iVar1;
  gssWND *pgVar2;
  LSTATUS LVar3;
  BYTE *pBVar4;
  BYTE *pBVar5;
  bool bVar6;
  HKEY local_9c;
  DWORD local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  DWORD DStack_84;
  BYTE aBStack_80 [128];
  
  iVar1 = wrSTRINGS::Init((wrSTRINGS *)gsStrings);
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s___wrSTRINGS__gsStrings__>Init);
    return 0;
  }
  iVar1 = gmSharedInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_gmSharedInit);
    return 0;
  }
  iVar1 = wrCURSORS::Init();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_wrCURSORS__Init);
    return 0;
  }
  iVar1 = plrInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_plrInit);
    return 0;
  }
  local_94 = 0;
  local_90 = 0;
  local_8c = 0x3f800000;
  local_88 = 0x3f800000;
  pgVar2 = (gssWND *)operator_new(0x30);
  if (pgVar2 == (gssWND *)0x0) {
    pgVar2 = (gssWND *)0x0;
  }
  else {
    gssWND::gssWND(pgVar2,(gssRECT *)&local_94);
    *(undefined ***)pgVar2 = &gssWND_RENDER::_vftable_;
  }
  gssWND::Register(pgVar2);
  gssWND::Show(pgVar2);
  *(undefined4 *)(pgVar2 + 0x18) = 1;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0x3f800000;
  local_88 = 0x3f800000;
  DAT_0060f010 = pgVar2;
  pgVar2 = (gssWND *)operator_new(0x30);
  if (pgVar2 == (gssWND *)0x0) {
    pgVar2 = (gssWND *)0x0;
  }
  else {
    gssWND::gssWND(pgVar2,(gssRECT *)&local_94);
    *(undefined ***)pgVar2 = &wrWND_MENU::_vftable_;
  }
  gssWND::Register(pgVar2);
  *(uint *)(pgVar2 + 4) = *(uint *)(pgVar2 + 4) | 4;
  gssWND::Show(pgVar2);
  wrWndMenu = (wrWND_MENU *)pgVar2;
  iVar1 = aiMinoInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiMinoInit);
    return 0;
  }
  iVar1 = aiCentInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiCentInit);
    return 0;
  }
  iVar1 = aiBirdInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiBirdInit);
    return 0;
  }
  iVar1 = aiSatyrInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiSatyrInit);
    return 0;
  }
  iVar1 = aisStatueInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aisStatueInit);
    return 0;
  }
  iVar1 = aisPerseusInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aisPerseusInit);
    return 0;
  }
  iVar1 = aisSphinxInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aisSphinxInit);
    return 0;
  }
  iVar1 = aiSkeletonsAllInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiSkeletonsAllInit);
    return 0;
  }
  iVar1 = aiGladiatorsAllInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiGladiatorsAllInit);
    return 0;
  }
  iVar1 = aiTigerInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiTigerInit);
    return 0;
  }
  iVar1 = aiAmurInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiAmurInit);
    return 0;
  }
  iVar1 = aiRatInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiRatInit);
    return 0;
  }
  iVar1 = aiCyclopInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiCyclopInit);
    return 0;
  }
  iVar1 = aiCerberInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiCerberInit);
    return 0;
  }
  iVar1 = aiGefestInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiGefestInit);
    return 0;
  }
  iVar1 = aiCrocInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiCrocInit);
    return 0;
  }
  iVar1 = aiMedusaInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiMedusaInit);
    return 0;
  }
  iVar1 = aiZevsInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_aiZevsInit);
    return 0;
  }
  iVar1 = dntInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_dntInit);
    return 0;
  }
  iVar1 = wrsfxInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_wrsfxInit);
    return 0;
  }
  iVar1 = wrsobInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_wrsobInit);
    return 0;
  }
  iVar1 = wrsfxDestrInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_wrsfxDestrInit);
    return 0;
  }
  iVar1 = wrMsgInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_wrMsgInit);
    return 0;
  }
  iVar1 = wrStatInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_wrStatInit);
    return 0;
  }
  iVar1 = wrItemInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_wrItemInit);
    return 0;
  }
  iVar1 = wrGOInit();
  if (iVar1 == 0) {
    apMsgBox(s__s___failed,s_wrGOInit);
    return 0;
  }
  local_98 = 1;
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,s_SOFTWARE_Saber_Interactive_Will_,0,1,&local_9c);
  if (LVar3 == 0) {
    local_98 = 1;
    DStack_84 = 0x80;
    LVar3 = RegQueryValueExA(local_9c,s_Language,(LPDWORD)0x0,&local_98,aBStack_80,&DStack_84);
    if (LVar3 == 0) {
      iVar1 = 7;
      bVar6 = true;
      pBVar4 = aBStack_80;
      pBVar5 = (BYTE *)s_German;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *pBVar4 == *pBVar5;
        pBVar4 = pBVar4 + 1;
        pBVar5 = pBVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        wrAppState = wrAppState | 1;
      }
      RegCloseKey(local_9c);
    }
  }
  if ((wrAppState & 1U) != 0) {
    wrAppState = wrAppState | 2;
  }
  return 1;
}




/* from: wr_main.cpp
   addr: 0049C9E0 */

void __thiscall wrAPP_SYSTEM::TermSubsys(wrAPP_SYSTEM *this)

{
  wrGOTerm();
  m3dTerm2DMatr();
  wrStatTerm();
  wrMsgTerm();
  m3dTerm2DMatr();
  wrsobTerm();
  wrsfxTerm();
  dntTerm();
  aiCyclopTerm();
  wrsobTermNiche();
  m3dTerm2DMatr();
  wrsobTermNiche();
  wrsobTermNiche();
  aiCyclopTerm();
  wrsobTermNiche();
  wrsobTermNiche();
  m3dTerm2DMatr();
  wrsobTermNiche();
  aiCyclopTerm();
  wrsobTermNiche();
  m3dTerm2DMatr();
  aisStatueTerm();
  aiCyclopTerm();
  aiCyclopTerm();
  aiCyclopTerm();
  wrsobTermNiche();
  wrCURSORS::Term();
  gssWND::Unregister((gssWND *)wrWndMenu);
  if (wrWndMenu != (wrWND_MENU *)0x0) {
    (*(code *)**(undefined4 **)wrWndMenu)(1);
  }
  gssWND::Unregister(DAT_0060f010);
  if (DAT_0060f010 != (gssWND *)0x0) {
    (*(code *)**(undefined4 **)DAT_0060f010)(1);
  }
  plrTerm();
  gmSharedTerm();
  return;
}




/* from: wr_main.cpp
   addr: 0049CAD0 */

void __thiscall wrAPP_SYSTEM::ActivateApp(wrAPP_SYSTEM *this)

{
  int iVar1;
  
  if (*(int *)(gsSysMP + 0x28) == 1) {
    iVar1 = *(int *)gsSysRender;
    *(undefined4 *)(gsSysRender + 8) = *(undefined4 *)(gsSysRender + 0x38);
    (**(code **)(iVar1 + 0x24))(1);
    gsAppState = gsAppState | 0x100;
  }
  gsWIN_APP_SYSTEM::ActivateApp((gsWIN_APP_SYSTEM *)this);
  return;
}




/* from: wr_main.cpp
   addr: 0049CB10 */

int __thiscall wrAPP_SYSTEM::UpdateLaunch(wrAPP_SYSTEM *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x90);
  if ((uVar1 & 1) == 0) {
    (**(code **)(*(int *)gspCutscene + 4))(0);
    *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 1;
    return 1;
  }
  if ((uVar1 & 2) == 0) {
    (**(code **)(*(int *)gspCutscene + 4))(1);
    *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 2;
    return 1;
  }
  if ((uVar1 & 4) == 0) {
    gspPLAY_SYSTEM::StartFirst(gspSysPlay);
    *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 4;
    return 1;
  }
  return 0;
}




/* from: wr_main.cpp
   addr: 0049CB90 */

int __thiscall wrLVL_SYSTEM::InitBumpMtl(wrLVL_SYSTEM *this)

{
  gsLVL_SYSTEM::InitBumpMtl((gsLVL_SYSTEM *)this);
  apNAME::SetName((apNAME *)(this + 0x718),s_minotavr1);
  apNAME::SetName((apNAME *)(this + 0x758),s_minotavr1_dot3);
  apNAME::SetName((apNAME *)(this + 0x7a0),s_minotavr2);
  apNAME::SetName((apNAME *)(this + 0x7e0),s_minotavr2_dot3);
  apNAME::SetName((apNAME *)(this + 0x828),s_minotavr3);
  apNAME::SetName((apNAME *)(this + 0x868),s_minotavr3_dot3);
  apNAME::SetName((apNAME *)(this + 0x8b0),s_ciklop01);
  apNAME::SetName((apNAME *)(this + 0x8f0),s_ciklop01_dot3);
  *(undefined4 *)(this + 0x930) = 0x43160000;
  *(undefined4 *)(this + 0x934) = 0x43480000;
  apNAME::SetName((apNAME *)(this + 0x938),s_ciklop02);
  apNAME::SetName((apNAME *)(this + 0x978),s_ciklop02_dot3);
  *(undefined4 *)(this + 0x9b8) = 0x43160000;
  *(undefined4 *)(this + 0x9bc) = 0x43480000;
  apNAME::SetName((apNAME *)(this + 0x9c0),s_dubbina2);
  apNAME::SetName((apNAME *)(this + 0xa00),s_dubbina2_dot3);
  *(undefined4 *)(this + 0xa40) = 0x43160000;
  *(undefined4 *)(this + 0xa44) = 0x43480000;
  apNAME::SetName((apNAME *)(this + 0xa48),s_bizhuteriya);
  apNAME::SetName((apNAME *)(this + 0xa88),s_bizhuteriya_dot3);
  *(undefined4 *)(this + 0xac8) = 0x43160000;
  *(undefined4 *)(this + 0xacc) = 0x43480000;
  apNAME::SetName((apNAME *)(this + 0xad0),s_satir01);
  apNAME::SetName((apNAME *)(this + 0xb10),s_satir01_dot3);
  apNAME::SetName((apNAME *)(this + 0xb58),s_satir02);
  apNAME::SetName((apNAME *)(this + 0xb98),s_satir02_dot3);
  apNAME::SetName((apNAME *)(this + 0xbe0),s_atlas01);
  apNAME::SetName((apNAME *)(this + 0xc20),s_atlas01_dot3);
  *(undefined4 *)(this + 0xc60) = 0x41700000;
  *(undefined4 *)(this + 0xc64) = 0x41f00000;
  apNAME::SetName((apNAME *)(this + 0xc68),s_atlas02);
  apNAME::SetName((apNAME *)(this + 0xca8),s_atlas02_dot3);
  *(undefined4 *)(this + 0xce8) = 0x41700000;
  *(undefined4 *)(this + 0xcec) = 0x41f00000;
  apNAME::SetName((apNAME *)(this + 0xcf0),s_globe);
  apNAME::SetName((apNAME *)(this + 0xd30),s_globe_dot3);
  *(undefined4 *)(this + 0xd70) = 0x41700000;
  *(undefined4 *)(this + 0xd74) = 0x41f00000;
  apNAME::SetName((apNAME *)(this + 0xd78),s_discobol_01);
  apNAME::SetName((apNAME *)(this + 0xdb8),s_discobol_01_dot3);
  *(undefined4 *)(this + 0xdf8) = 0x41700000;
  *(undefined4 *)(this + 0xdfc) = 0x41f00000;
  apNAME::SetName((apNAME *)(this + 0xe00),s_discobol_02);
  apNAME::SetName((apNAME *)(this + 0xe40),s_discobol_02_dot3);
  *(undefined4 *)(this + 0xe80) = 0x41700000;
  *(undefined4 *)(this + 0xe84) = 0x41f00000;
  apNAME::SetName((apNAME *)(this + 0xe88),s_disk);
  apNAME::SetName((apNAME *)(this + 0xec8),s_disk_dot3);
  apNAME::SetName((apNAME *)(this + 0xf10),s_gladiator_01a);
  apNAME::SetName((apNAME *)(this + 0xf50),s_gladiator_01a_dot3);
  apNAME::SetName((apNAME *)(this + 0xf98),s_gladiator_01b);
  apNAME::SetName((apNAME *)(this + 0xfd8),s_gladiator_01b_dot3);
  apNAME::SetName((apNAME *)(this + 0x1020),s_gladiator_02a);
  apNAME::SetName((apNAME *)(this + 0x1060),s_gladiator_02a_dot3);
  apNAME::SetName((apNAME *)(this + 0x10a8),s_gladiator_armour1);
  apNAME::SetName((apNAME *)(this + 0x10e8),s_gladiator_armour1_dot3);
  apNAME::SetName((apNAME *)(this + 0x1130),s_gladiator_armour2);
  apNAME::SetName((apNAME *)(this + 0x1170),s_gladiator_armour2_dot3);
  apNAME::SetName((apNAME *)(this + 0x11b8),s_min_body1a);
  apNAME::SetName((apNAME *)(this + 0x11f8),s_min_body1a_dot3);
  apNAME::SetName((apNAME *)(this + 0x1240),s_min_body2a);
  apNAME::SetName((apNAME *)(this + 0x1280),s_min_body2a_dot3);
  apNAME::SetName((apNAME *)(this + 0x12c8),s_min_hvost1);
  apNAME::SetName((apNAME *)(this + 0x1308),s_min_hvost1_dot3);
  apNAME::SetName((apNAME *)(this + 0x1350),s_tiger);
  apNAME::SetName((apNAME *)(this + 0x1390),s_tiger_dot3);
  apNAME::SetName((apNAME *)(this + 0x13d8),s_lion);
  apNAME::SetName((apNAME *)(this + 0x1418),s_lion_dot3);
  apNAME::SetName((apNAME *)(this + 0x1460),s_cerber);
  apNAME::SetName((apNAME *)(this + 0x14a0),s_cerber_dot3);
  apNAME::SetName((apNAME *)(this + 0x14e8),s_gefest_01);
  apNAME::SetName((apNAME *)(this + 0x1528),s_gefest_01_dot3);
  *(undefined4 *)(this + 0x1568) = 0x43160000;
  *(undefined4 *)(this + 0x156c) = 0x43480000;
  apNAME::SetName((apNAME *)(this + 0x1570),s_gefest_02);
  apNAME::SetName((apNAME *)(this + 0x15b0),s_gefest_02_dot3);
  *(undefined4 *)(this + 0x15f0) = 0x43160000;
  *(undefined4 *)(this + 0x15f4) = 0x43480000;
  apNAME::SetName((apNAME *)(this + 0x15f8),s_gefest_03);
  apNAME::SetName((apNAME *)(this + 0x1638),s_gefest_03_dot3);
  *(undefined4 *)(this + 0x1678) = 0x43160000;
  *(undefined4 *)(this + 0x167c) = 0x43480000;
  apNAME::SetName((apNAME *)(this + 0x1680),s_zeus01);
  apNAME::SetName((apNAME *)(this + 0x16c0),s_zeus01_dot3);
  *(undefined4 *)(this + 0x1700) = 0x451c4000;
  *(undefined4 *)(this + 0x1704) = 0x453b8000;
  apNAME::SetName((apNAME *)(this + 0x1708),s_zeus02);
  apNAME::SetName((apNAME *)(this + 0x1748),s_zeus02_dot3);
  *(undefined4 *)(this + 0x1788) = 0x451c4000;
  *(undefined4 *)(this + 0x178c) = 0x453b8000;
  apNAME::SetName((apNAME *)(this + 0x1790),s_zeus03);
  apNAME::SetName((apNAME *)(this + 0x17d0),s_zeus03_dot3);
  *(undefined4 *)(this + 0x1810) = 0x451c4000;
  *(undefined4 *)(this + 0x1814) = 0x453b8000;
  apNAME::SetName((apNAME *)(this + 0x1818),s_medusa01);
  apNAME::SetName((apNAME *)(this + 0x1858),s_medusa01_dot3);
  *(undefined4 *)(this + 0x1898) = 0x451c4000;
  *(undefined4 *)(this + 0x189c) = 0x453b8000;
  apNAME::SetName((apNAME *)(this + 0x18a0),s_medusa02);
  apNAME::SetName((apNAME *)(this + 0x18e0),s_medusa02_dot3);
  *(undefined4 *)(this + 0x1920) = 0x451c4000;
  *(undefined4 *)(this + 0x1924) = 0x453b8000;
  apNAME::SetName((apNAME *)(this + 0x1928),s_crocodyl1);
  apNAME::SetName((apNAME *)(this + 0x1968),s_crocodyl1_dot3);
  *(undefined4 *)(this + 0x19a8) = 0x451c4000;
  *(undefined4 *)(this + 0x19ac) = 0x453b8000;
  *(undefined4 *)(this + 0x714) = 0x23;
  apNAME::SetName((apNAME *)(this + 0x21ac),s_ciklop02);
  apNAME::SetName((apNAME *)(this + 0x21ec),s_ciklop02_dot3_spec);
  *(undefined4 *)(this + 0x222c) = 0x43160000;
  *(undefined4 *)(this + 0x2230) = 0x43480000;
  *(undefined4 *)(this + 0x21a8) = 1;
  return 1;
}




/* from: wr_main.cpp
   addr: 0049D160 */

void __thiscall wrLVL_SYSTEM::ProcessFRAME(wrLVL_SYSTEM *this)

{
  int iVar1;
  uint uVar2;
  gsSTRINGS *pgVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pgVar3 = gsStrings;
  if ((((((gsAppState & 0x200U) == 0) && ((gsAppState & 0x401000U) == 0)) &&
       ((gsAppState & 0x2000U) != 0)) &&
      (((iVar1 = *(int *)(gsSysInput + 0x40), *(int *)(iVar1 + 8) < 0x12 &&
        (0x11 < *(int *)(iVar1 + 0xc))) &&
       ((*(int *)(iVar1 + 8) < 0x12 &&
        ((0x11 < *(int *)(iVar1 + 0xc) &&
         ((*(uint *)(*(int *)(iVar1 + 4) + (0x11 - *(int *)(iVar1 + 8)) * 0x9c) & 1) != 0)))))))) &&
     ((*(int *)(iVar1 + 8) < 0x12 &&
      (((0x11 < *(int *)(iVar1 + 0xc) &&
        ((*(uint *)(*(int *)(iVar1 + 4) + (0x11 - *(int *)(iVar1 + 8)) * 0x9c) & 2) != 0)) &&
       ((*(uint *)(plrPlayer + 0x29b) & 0x40400000) == 0)))))) {
    (**(code **)(*(int *)uiSystem + 0x38))(2,0);
    return;
  }
  if ((((gsAppState & 0x200U) == 0) && ((gsAppState & 0x1000U) == 0)) &&
     ((((iVar1 = *(int *)(gsSysInput + 0x40), *(int *)(iVar1 + 8) < 0x27 &&
        ((0x26 < *(int *)(iVar1 + 0xc) && (*(int *)(iVar1 + 8) < 0x27)))) &&
       (0x26 < *(int *)(iVar1 + 0xc))) &&
      (((((*(uint *)(*(int *)(iVar1 + 4) + (0x26 - *(int *)(iVar1 + 8)) * 0x9c) & 1) != 0 &&
         (*(int *)(iVar1 + 8) < 0x27)) && (0x26 < *(int *)(iVar1 + 0xc))) &&
       (((*(uint *)(*(int *)(iVar1 + 4) + (0x26 - *(int *)(iVar1 + 8)) * 0x9c) & 2) != 0 &&
        (*(int *)(gsSysMP + 0x28) == 1)))))))) {
    gsMsgChangeMode((gsAppState & 0x4000U | 0x8000) >> 0xe);
    pgVar3 = gsStrings;
    if ((gsAppState & 0x4000U) == 0) {
      gsAppState = gsAppState | 0x4000;
      gsSND_SYSTEM::Mute(gsSysSound,1,0);
      return;
    }
    uVar4 = gsAppState & 0xffffbfff;
    uVar2 = gsAppState & 0x80000;
    gsAppState = uVar4;
    if (uVar2 == 0) {
      uVar8 = 1;
      uVar7 = 0x40000000;
      iVar1 = *(int *)uiSystem;
      iVar5 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_RESUMED);
      puVar6 = gsSTRINGS::GetStringById(pgVar3,iVar5);
      (**(code **)(iVar1 + 0x20))(puVar6,uVar7,uVar8);
    }
    gsSND_SYSTEM::Mute(gsSysSound,0,0);
    return;
  }
  if (((gsAppState & 0x4000U) != 0) && ((gsAppState & 0x80000U) == 0)) {
    uVar8 = 3;
    uVar7 = 0x3f800000;
    iVar1 = *(int *)uiSystem;
    iVar5 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_PAUSED);
    puVar6 = gsSTRINGS::GetStringById(pgVar3,iVar5);
    (**(code **)(iVar1 + 0x20))(puVar6,uVar7,uVar8);
  }
  m3dTerm2DMatr();
  return;
}




/* from: wr_main.cpp
   addr: 0049D3C0 */

int __thiscall
wrLVL_SYSTEM::ProcessMsg(wrLVL_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  wrLVL_SYSTEM *pwVar3;
  msgDATA local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  m3dV amStack_c [12];
  
  switch(param_1) {
  case 1000:
    if ((((((plrPlayer != (plrPLAYER *)0x0) &&
           (iVar1 = (**(code **)(*(int *)plrPlayer + 0x78))(), iVar1 != 0)) &&
          (iVar1 = *(int *)(gsSysInput + 0x40), *(int *)(iVar1 + 8) < 0x11)) &&
         ((0x10 < *(int *)(iVar1 + 0xc) && (*(int *)(iVar1 + 8) < 0x11)))) &&
        ((0x10 < *(int *)(iVar1 + 0xc) &&
         (((*(uint *)(*(int *)(iVar1 + 4) + (0x10 - *(int *)(iVar1 + 8)) * 0x9c) & 1) != 0 &&
          (*(int *)(iVar1 + 8) < 0x11)))))) &&
       ((0x10 < *(int *)(iVar1 + 0xc) &&
        (((*(uint *)(*(int *)(iVar1 + 4) + (0x10 - *(int *)(iVar1 + 8)) * 0x9c) & 2) != 0 &&
         ((*(uint *)(plrPlayer + 0x29b) & 0x40000000) == 0)))))) {
      if (*(int *)(gsSysMP + 0x28) == 1) {
        (**(code **)(*(int *)uiSystem + 0x8c))();
      }
      else {
        plrPLAYER::RevitalizeStart(plrPlayer,0);
        gsMP_SYSTEM::SelectStartPosDir(gsSysMP,amStack_c,(m3dV *)&local_18);
        (**(code **)(*(int *)plrPlayer + 0x74))(amStack_c,&local_18,1);
      }
    }
    break;
  case 0x3f4:
    DAT_0060f01c = 0;
    if (*(int *)(gsSysMP + 0x28) == 1) {
      msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,0x4d3,(msgADDR *)0x0,0.2);
    }
    break;
  case 0x4c9:
    if (DAT_0060f01c == 0) {
      if (*(int *)((int)param_2 + 0x14c) == 0) {
        msgSYSTEM::PostMsgData
                  (&msgSystem,(msgADDR *)gspSysPlay,0x3ec,(msgDATA *)param_2,(msgADDR *)0x0);
        DAT_0060f01c = 1;
      }
      else {
        puVar2 = (undefined4 *)param_2;
        pwVar3 = this + 0x3c3c;
        for (iVar1 = 0x55; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined4 *)pwVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          pwVar3 = pwVar3 + 4;
        }
        local_18 = (msgDATA)0x0;
        local_17 = 0x40;
        local_14 = 0;
        local_16 = 0xc;
        local_10 = 1;
        gsMP_SERVER::SendMsgClientAll
                  (gsSysServer,(entIACTIVE_OBJ *)wrSysGO,0x40c,&local_18,0x20000,0xfffffffd,
                   0xfffffffd);
        DAT_0060f01c = 1;
      }
    }
    break;
  case 0x4d3:
    if ((*(int *)(gsSysMP + 0x28) == 1) && (((byte)gsAppState & 4) != 0)) {
      (**(code **)(*(int *)uiSystem + 0x88))(1);
    }
  }
  iVar1 = gsLVL_SYSTEM::ProcessMsg((gsLVL_SYSTEM *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: wr_main.cpp
   addr: 0049D720 */

int __thiscall wrLVL_SYSTEM::LoadLevel(wrLVL_SYSTEM *this,gsLOAD_SCENE_PARAM *param_1)

{
  int iVar1;
  
  iVar1 = gsLVL_SYSTEM::LoadLevel((gsLVL_SYSTEM *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  blklCreateLMLightSources();
  return 1;
}




/* from: wr_main.cpp
   addr: 0049D750 */

void __thiscall wrLVL_SYSTEM::InstLoadNotify(wrLVL_SYSTEM *this,animINST *param_1)

{
  gsLVL_SYSTEM::InstLoadNotify((gsLVL_SYSTEM *)this,param_1);
  (**(code **)(*(int *)dntSystem + 0x10))(param_1);
  return;
}




/* from: wr_main.cpp
   addr: 0049D770 */

void __thiscall wrLVL_SYSTEM::InstDestroyNotify(wrLVL_SYSTEM *this,animINST *param_1)

{
  gsLVL_SYSTEM::InstDestroyNotify((gsLVL_SYSTEM *)this,param_1);
  (**(code **)(*(int *)dntSystem + 0x14))(param_1);
  return;
}




/* from: wr_main.cpp
   addr: 0049D790 */

int __thiscall wrRENDER_SYSTEM::Init(wrRENDER_SYSTEM *this)

{
  int iVar1;
  txmTEXTURE *ptVar2;
  char local_100 [256];
  
  gsRENDER_SYSTEM::Init((gsRENDER_SYSTEM *)this);
  iVar1 = _apCfgReadString((void **)0x0,s_Visual,s_LogoTex,local_100,0xff);
  if (iVar1 != 0) {
    ptVar2 = txmMANAGER::Add(txmManager,local_100,0x40003,1);
    *(txmTEXTURE **)(this + 0x34) = ptVar2;
    if (ptVar2 != (txmTEXTURE *)0x0) {
      iVar1 = _apCfgReadString((void **)0x0,s_Visual,s_LogoReadyTex,local_100,0xff);
      if (iVar1 != 0) {
        ptVar2 = txmMANAGER::Add(txmManager,local_100,0x40003,1);
        *(txmTEXTURE **)(this + 0x38) = ptVar2;
        if (ptVar2 != (txmTEXTURE *)0x0) {
          *(undefined4 *)(this + 8) = *(undefined4 *)(this + 0x34);
        }
      }
    }
  }
  return 1;
}




/* from: wr_main.cpp
   addr: 0049D870 */

void __thiscall wrRENDER_SYSTEM::RenderSetOptions(wrRENDER_SYSTEM *this)

{
  camCAMERA::SetNearPlane(gsCameraPtr,0.05);
  *(undefined4 *)(gsCameraPtr + 0x84) = 0x44a28000;
  (**(code **)(*(int *)vidDriver + 0x38))(*(undefined4 *)(gsCameraPtr + 0x80));
  (**(code **)(*(int *)vidDriver + 0x3c))
            (*(undefined4 *)(gsCameraPtr + 0x80),*(undefined4 *)(gsCameraPtr + 0x84));
  return;
}




/* from: wr_main.cpp
   addr: 0049D8D0 */

void __thiscall wrSHADOW_SYSTEM::SetupGroupShdParams(wrSHADOW_SYSTEM *this,pshOBJ_GROUP *param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = *(char **)(**(int **)(param_1 + 8) + 0x20);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_;
  }
  iVar2 = stricmp(pcVar1,s_ai_bird);
  if (iVar2 == 0) {
LAB_0049d961:
    *(undefined4 *)(param_1 + 0x34) = 0x3ee66666;
    *(undefined1 **)(param_1 + 0x24) = &DAT_42480000;
    *(uint *)param_1 = *(uint *)param_1 | 0x40;
  }
  else {
    pcVar1 = *(char **)(**(int **)(param_1 + 8) + 0x20);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = s_;
    }
    iVar2 = stricmp(pcVar1,s_ai_amur);
    if (iVar2 == 0) goto LAB_0049d961;
    pcVar1 = *(char **)(**(int **)(param_1 + 8) + 0x20);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = s_;
    }
    iVar2 = stricmp(pcVar1,s_ai_croc);
    if (iVar2 == 0) goto LAB_0049d961;
    pcVar1 = *(char **)(**(int **)(param_1 + 8) + 0x20);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = s_;
    }
    iVar2 = stricmp(pcVar1,s_ai_medusa);
    if (iVar2 == 0) goto LAB_0049d961;
  }
  pcVar1 = *(char **)(**(int **)(param_1 + 8) + 0x20);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_;
  }
  iVar2 = stricmp(pcVar1,s_ai_amur);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  pcVar1 = *(char **)(**(int **)(param_1 + 8) + 0x20);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_;
  }
  iVar2 = stricmp(pcVar1,&s_ai_skel);
  if (iVar2 != 0) {
    pcVar1 = *(char **)(**(int **)(param_1 + 8) + 0x20);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = s_;
    }
    iVar2 = stricmp(pcVar1,s_ai_skeletavr);
    if (iVar2 != 0) goto LAB_0049d9eb;
  }
  *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_0049d9eb:
  pcVar1 = *(char **)(**(int **)(param_1 + 8) + 0x1c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_;
  }
  iVar2 = stricmp(pcVar1,s_ai_cyclop);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(uint *)param_1 = *(uint *)param_1 | 0x1000;
  }
  pcVar1 = *(char **)(**(int **)(param_1 + 8) + 0x20);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_;
  }
  iVar2 = stricmp(pcVar1,s_player_mp);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0x20) = 0x41a00000;
    *(uint *)param_1 = *(uint *)param_1 | 0xcc0;
  }
  pcVar1 = *(char **)(**(int **)(param_1 + 8) + 0x1c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_;
  }
  iVar2 = strnicmp(pcVar1,s_item,4);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0x40200000;
    *(undefined4 *)(param_1 + 0x24) = 0x41200000;
    *(uint *)param_1 = *(uint *)param_1 | 0x140;
  }
  pcVar1 = *(char **)(**(int **)(param_1 + 8) + 0x20);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_;
  }
  iVar2 = stricmp(pcVar1,s_item_money);
  if (iVar2 == 0) {
    *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_main.cpp
   addr: 0049DAC0 */

void __thiscall wrSHADOW_SYSTEM::UpdateGroupDistOff(wrSHADOW_SYSTEM *this,pshOBJ_GROUP *param_1)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = *(char **)(**(int **)(param_1 + 8) + 0x20);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_;
  }
  iVar3 = stricmp(pcVar2,s_ai_bird);
  if (iVar3 != 0) {
    pcVar2 = *(char **)(**(int **)(param_1 + 8) + 0x20);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    iVar3 = stricmp(pcVar2,s_ai_amur);
    if (iVar3 != 0) {
      pcVar2 = *(char **)(**(int **)(param_1 + 8) + 0x20);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = s_;
      }
      iVar3 = stricmp(pcVar2,s_ai_croc);
      if (iVar3 != 0) {
        pcVar2 = *(char **)(**(int **)(param_1 + 8) + 0x20);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = s_;
        }
        iVar3 = stricmp(pcVar2,s_ai_medusa);
        if (iVar3 != 0) {
          return;
        }
      }
    }
  }
  fVar1 = *(float *)(param_1 + 0x14) * ___real_3fa66666;
  *(undefined4 *)(param_1 + 0x1c) = DAT_005daaf8;
  *(float *)(param_1 + 0x14) = fVar1;
  return;
}




/* from: wr_main.cpp
   addr: 0049DB70 */

void __thiscall wrGPF_FILTER::DumpInfo(wrGPF_FILTER *this,void *param_1,char *param_2)

{
  void *_File;
  vidDRIVER *pvVar1;
  int iVar2;
  int iVar3;
  gspEVENT *this_00;
  animINST *paVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  
  pvVar1 = (vidDRIVER *)param_2;
  _File = param_1;
  if (vidDriver == (vidDRIVER *)0x0) {
    iVar2 = _apCfgReadString((void **)0x0,s_Video,s_VIDEO_Drv,param_2,0x100);
    if (iVar2 == 0) goto LAB_0049dbb6;
  }
  else {
    pvVar1 = vidDriver + 0x10c;
  }
  fprintf((FILE *)_File,s_Video___s_,pvVar1);
LAB_0049dbb6:
  fprintf((FILE *)_File,s_gsAppState__0x_08X___Active____d,gsAppState,gsAppState & 1,
          gsAppState & 0x10,gsAppState & 4,gsAppState & 0x40000,gsAppState & 0x1000,
          gsAppState & 0x20000);
  iVar2 = _apCfgReadInt((void **)0x0,s_CONFIG,s_CPU_Freq,(int *)&param_1);
  if (iVar2 != 0) {
    fprintf((FILE *)_File,s_CPU_Freq___d___,param_1);
  }
  iVar2 = _apCfgReadBool((void **)0x0,s_CONFIG,s_CPU_Make,(int *)&param_1);
  if ((iVar2 == 0) || (param_1 == (void *)0x0)) {
    pcVar8 = s_CPU_Make__AMD___;
  }
  else {
    pcVar8 = s_CPU_Make__INTEL___;
  }
  fprintf((FILE *)_File,pcVar8);
  if (m3dSimdType == 0) {
    pcVar8 = s_SIMD__SSE___;
  }
  else if (m3dSimdType == 1) {
    pcVar8 = s_SIMD__3DNOW___;
  }
  else {
    pcVar8 = s_SIMD__NONE___;
  }
  fprintf((FILE *)_File,pcVar8);
  iVar2 = _apCfgReadBool((void **)0x0,s_CONFIG,s_GPU_VID_32_MB,(int *)&param_1);
  if ((iVar2 == 0) || (param_1 == (void *)0x0)) {
    pcVar8 = s_Video_Mem__64___;
  }
  else {
    pcVar8 = s_Video_Mem__32___;
  }
  fprintf((FILE *)_File,pcVar8);
  iVar2 = _apCfgReadBool((void **)0x0,s_CONFIG,s_GPU_VID_GF2,(int *)&param_1);
  if ((iVar2 == 0) || (param_1 == (void *)0x0)) {
    pcVar8 = s_GF2__Higher;
  }
  else {
    pcVar8 = s_GF2__Yes;
  }
  fprintf((FILE *)_File,pcVar8);
  fprintf((FILE *)_File,&s__);
  fprintf((FILE *)_File,s_Build__1_2f_,0x80000000,0x3ff3ae14);
  fprintf((FILE *)_File,s_Play_time__f___Scene__s_,(double)gsElapsedTimeLevel,&gsSceneFullName);
  uVar9 = *(undefined4 *)(pteManager + 0x1f44);
  iVar2 = partGetNEmit();
  iVar3 = scnSCENE::GetNTpl(gsScenePtr);
  uVar7 = CONCAT44(iVar2,iVar3);
  iVar2 = scnSCENE::GetNInst(gsScenePtr);
  fprintf((FILE *)_File,s_nInst___d__nTpl___d__nEmit___d__,iVar2,uVar7,uVar9);
  if (((wrSysGO == (wrGO_SYSTEM *)0x0) || (iVar2 = *(int *)(wrSysGO + 0x94), iVar2 < 0)) ||
     (3 < iVar2)) {
    fprintf((FILE *)_File,s_Game_Mode__UNDEF__);
  }
  else {
    fprintf((FILE *)_File,s_Game_Mode___s__,(&PTR_s_SINGLE_005daafc)[iVar2]);
  }
  if (plrPlayer == (plrPLAYER *)0x0) {
    fprintf((FILE *)_File,s_Player_underfined_);
  }
  else {
    iVar2 = *(int *)(*(int *)(plrPlayer + 0x23f) + *(int *)(plrPlayer + 0x243) * 4);
    if (iVar2 == 0) {
      pcVar8 = s_UNDEFINED;
    }
    else {
      pcVar8 = *(char **)(*(int *)(iVar2 + 0xbc) + 0x20);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = s_;
      }
    }
    fprintf((FILE *)_File,s_Current_weapon___s_,pcVar8);
    fprintf((FILE *)_File,s_Current_skin___d_,*(undefined4 *)(plrPlayer + 0x23b));
  }
  if (gspSysPlay != (gspPLAY_SYSTEM *)0x0) {
    gspPLAY_SYSTEM::NotifyEvent(gspSysPlay,4,(char *)&gsSceneFullName,-1);
    fprintf((FILE *)_File,s_Game_History___d_records_,*(undefined4 *)(gspSysPlay + 0x28));
    iVar2 = 0;
    if (0 < *(int *)(gspSysPlay + 0x28)) {
      do {
        this_00 = gspPLAY_SYSTEM::GetEvent(gspSysPlay,iVar2);
        if (this_00 != (gspEVENT *)0x0) {
          pcVar8 = gspEVENT::GetString(this_00);
          fprintf((FILE *)_File,s_____s_,pcVar8);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(gspSysPlay + 0x28));
    }
  }
  iVar2 = 0;
  for (paVar4 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0); paVar4 != (animINST *)0x0;
      paVar4 = scnSCENE::FindNextInst(gsScenePtr,paVar4)) {
    if ((*(int *)(paVar4 + 0x13c) == 0) ||
       (pcVar8 = s____RT, (*(byte *)(*(int *)(paVar4 + 0x13c) + 0xb4) & 1) == 0)) {
      pcVar8 = s_notRT;
    }
    pcVar6 = *(char **)(paVar4 + 0x20);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = s_;
    }
    pcVar5 = *(char **)(paVar4 + 0x1c);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = s_;
    }
    fprintf((FILE *)_File,s__d___s__nameClass___20s_____name,iVar2,pcVar8,pcVar5,pcVar6);
    iVar2 = iVar2 + 1;
  }
  if (gsSysNetwork != (gsMP_NETWORK *)0x0) {
    gsMP_NETWORK::Drv_Stop(gsSysNetwork);
  }
  return;
}




/* from: wr_main.cpp
   addr: 0049DF40
   addr: 0049DF40
   addr: 0049DF40
   addr: 0049DF40 */

void * __thiscall gsRENDER_SYSTEM::_vector_deleting_destructor_(gsRENDER_SYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_main.cpp
   addr: 0049DF60 */

gssAREA * __thiscall gssWND::CreateArea(gssWND *this,int param_1)

{
  gssAREA *pgVar1;
  
  pgVar1 = (gssAREA *)operator_new(0x84);
  if (pgVar1 != (gssAREA *)0x0) {
    pgVar1 = (gssAREA *)gssAREA::gssAREA(pgVar1);
    return pgVar1;
  }
  return (gssAREA *)0x0;
}




/* from: wr_main.cpp
   addr: 0049DF80 */

gssAREA * __thiscall gssWND::CreateAreaDelimiter(gssWND *this)

{
  gssAREA *this_00;
  
  this_00 = (gssAREA *)operator_new(0x84);
  if (this_00 != (gssAREA *)0x0) {
    gssAREA::gssAREA(this_00);
    *(undefined ***)this_00 = &gssAREA_DELIMITER::_vftable_;
    return this_00;
  }
  return (gssAREA *)0x0;
}




/* from: wr_main.cpp
   addr: 0049DFB0 */

void * __thiscall
gssAREA_DELIMITER::_vector_deleting_destructor_(gssAREA_DELIMITER *this,uint param_1)

{
  gssAREA::~gssAREA((gssAREA *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_main.cpp
   addr: 0049DFD0 */

void * __thiscall gssWND_RENDER::_scalar_deleting_destructor_(gssWND_RENDER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gssWND::~gssWND((gssWND *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_main.cpp
   addr: 0049E010 */

gsDOMAIN * __thiscall gsVIS_SYSTEM::MakeDomain(gsVIS_SYSTEM *this)

{
  gsDOMAIN *this_00;
  
  this_00 = (gsDOMAIN *)operator_new(0x140);
  if (this_00 != (gsDOMAIN *)0x0) {
    gsDOMAIN::gsDOMAIN(this_00);
    *(undefined4 *)(this_00 + 300) = 0;
    *(undefined4 *)(this_00 + 0x130) = 0;
    *(undefined4 *)(this_00 + 0x134) = 0;
    *(undefined4 *)(this_00 + 0x138) = 0;
    *(undefined4 *)(this_00 + 0x13c) = 0;
    *(undefined ***)this_00 = &gsDOMAIN_VIS::_vftable__for__entIACTIVE_OBJ__;
    *(undefined ***)(this_00 + 0x94) = &gsDOMAIN_VIS::_vftable__for__scnDOMAIN__;
    return this_00;
  }
  return (gsDOMAIN *)0x0;
}




/* from: wr_main.cpp
   addr: 0049E070 */

int __thiscall gsVIS_SYSTEM::GetUpdatePoint(gsVIS_SYSTEM *this,int param_1,m3dV *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)(this + 0x3c4);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x3c8);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x3cc);
  return 1;
}




/* from: wr_main.cpp
   addr: 0049E0A0
   addr: 0049E0A0
   addr: 0049E0A0
   addr: 0049E0A0 */

void * __thiscall
gsWIN_APP_SYSTEM::_scalar_deleting_destructor_(gsWIN_APP_SYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsAPP_SYSTEM::~gsAPP_SYSTEM((gsAPP_SYSTEM *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_main.cpp
   addr: 0049E0E0
   addr: 0049E0E0 */

void * __thiscall uiFONT_MANAGER::_scalar_deleting_destructor_(uiFONT_MANAGER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  lstLIST_SIMPLE::Clear((lstLIST_SIMPLE *)this);
  *(undefined ***)this = &lstLIST_SIMPLE::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_main.cpp
   addr: 0049E110 */

void * __thiscall wrWND_MENU::_vector_deleting_destructor_(wrWND_MENU *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gssWND::~gssWND((gssWND *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_main.cpp
   addr: 0049E140 */

void * __thiscall wrSTAT_SYSTEM::_vector_deleting_destructor_(wrSTAT_SYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  dsDYN_ARRAY::~dsDYN_ARRAY((dsDYN_ARRAY *)(this + 0x124));
  *(undefined ***)this = &entIACTIVE_OBJ::_vftable_;
  entIACTIVE_OBJ::TermIActive((entIACTIVE_OBJ *)this);
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

