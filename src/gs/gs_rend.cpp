
/* from: gs:gs_rend.cpp
   addr: 005062D0 */

void __thiscall gsRENDER_SYSTEM::gsRENDER_SYSTEM(gsRENDER_SYSTEM *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}




/* from: gs:gs_rend.cpp
   addr: 00506300 */

int __thiscall gsRENDER_SYSTEM::Init(gsRENDER_SYSTEM *this)

{
  _apCfgReadString((void **)0x0,s_Visual,s_BACKDROP_Tex,(char *)&apBuffer,0x1000);
  return 1;
}




/* from: gs:gs_rend.cpp
   addr: 00506330 */

int __thiscall gsRENDER_SYSTEM::InitLevel(gsRENDER_SYSTEM *this)

{
  int iVar1;
  gsRENDER_SYSTEM *pgVar2;
  
  pgVar2 = this + 0x14;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pgVar2 = 0;
    pgVar2 = pgVar2 + 4;
  }
  (**(code **)(*(int *)this + 0x18))(0);
  return 1;
}




/* from: gs:gs_rend.cpp
   addr: 00506360 */

void __thiscall gsRENDER_SYSTEM::BeginFrame(gsRENDER_SYSTEM *this)

{
  float extraout_EDX;
  
  if (((gsAppState & 0x40000U) != 0) && (((byte)this[4] & 1) == 0)) {
    *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
    (**(code **)(*(int *)rendDrv + 0x10))(gsScenePtr);
    if ((gsAppState & 0x2004000U) == 0) {
      pteMANAGER::UpdateAllShaders(pteManager,gsElapsedTime);
      partUpdate(gsCameraPtr,extraout_EDX);
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffef;
                    /* WARNING: Could not recover jumptable at 0x005063d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this + 0x20))();
    return;
  }
  return;
}




/* from: gs:gs_rend.cpp
   addr: 005063E0 */

void __thiscall gsRENDER_SYSTEM::SwapBuffers(gsRENDER_SYSTEM *this)

{
  int iVar1;
  int local_3c;
  int local_38 [3];
  float fStack_2c;
  uint local_28 [10];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  local_3c = 0;
  _apCfgReadBool((void **)&DAT_0094de44,s_Video,s_VIDEO_2PassRend,&local_3c);
  if ((**(byte **)(vidDriver + 0x210) & 0x10) != 0) {
    *(uint *)(rendDrv + 4) = *(uint *)(rendDrv + 4) | 0x400;
  }
  if (local_3c != 0) {
    *(uint *)(rendDrv + 4) = *(uint *)(rendDrv + 4) | 0x400;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  _apCfgReadBool((void **)&DAT_0094de4c,s_Video,s_Wait_VSync,local_38 + 1);
  _apCfgReadBool((void **)&DAT_0094de54,s_Video,s_Wait_Pending,local_38);
  if (((byte)this[4] & 4) == 0) {
    (**(code **)(*(int *)vidDriver + 0x1c))();
    iVar1 = _apCfgReadBool((void **)&DAT_0094de50,s_Video,s_Gamma_Changes,local_38 + 2);
    if ((iVar1 != 0) && (local_38[2] != 0)) {
      iVar1 = _apCfgReadFloat((void **)&DAT_0094de58,s_Video,s_Gamma,&fStack_2c);
      if (iVar1 != 0) {
        (**(code **)(*(int *)vidDriver + 0x48))(fStack_2c);
      }
    }
    (**(code **)(*(int *)this + 0x40))(gsCameraPtr);
    (**(code **)(*(int *)vidDriver + 0x20))(local_38[0],local_3c);
  }
  else {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffb;
  }
  local_28[1] = 0;
  local_28[0] = local_28[0] | 2;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  pshSHADOW_SYSTEM::UpdateClear(gsSysProjShd,(vidCLEAR *)local_28);
  (**(code **)(*(int *)vidDriver + 0x24))(local_28);
  (**(code **)(*(int *)txmManager + 4))(gsElapsedTime);
  (**(code **)(*(int *)vidDriver + 0x18))();
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffffef;
  return;
}




/* from: gs:gs_rend.cpp
   addr: 005065A0 */

void __thiscall gsRENDER_SYSTEM::EndFrame(gsRENDER_SYSTEM *this,int param_1)

{
  entENTITY *peVar1;
  uint uVar2;
  animINST *paVar3;
  
  (**(code **)(*(int *)rendDrv + 0x14))();
  objMODIFIER::elapsedTime = 0.0;
  for (paVar3 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0); paVar3 != (animINST *)0x0;
      paVar3 = scnSCENE::FindNextInst(gsScenePtr,paVar3)) {
    if (((param_1 != 0) && (peVar1 = *(entENTITY **)(paVar3 + 0x13c), peVar1 != (entENTITY *)0x0))
       && (0 < *(int *)(peVar1 + 0x34))) {
      gsSND_SYSTEM::UpdateEntAnim(gsSysSound,peVar1);
    }
    uVar2 = *(uint *)(paVar3 + 4);
    *(uint *)(paVar3 + 4) = uVar2 & 0xffff1fff;
    if ((uVar2 & 0x1000000) != 0) {
      objOBJ::SetStateVBNo(*(objOBJ **)(paVar3 + 0x10),0x1f000);
    }
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffe;
  pteMANAGER::DeactivateAllShaders(pteManager);
  return;
}




/* from: gs:gs_rend.cpp
   addr: 00506640 */

void __thiscall gsRENDER_SYSTEM::RenderFrame(gsRENDER_SYSTEM *this,camCAMERA *param_1,int param_2)

{
  byte bVar1;
  animINST *paVar2;
  int *unaff_EBP;
  int iVar3;
  uint auStack_34 [3];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  uint local_4;
  
  iVar3 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (-1 < (char)*(uint *)(rendDrv + 4)) {
    if (((*(uint *)(rendDrv + 4) & 0x100) == 0) && ((param_2 & 8U) == 0)) {
      mrrMIRROR_SYSTEM::Render(gsSysMirror,param_1);
    }
    if ((((param_2 & 0x20U) != 0) || ((*(uint *)(rendDrv + 4) & 0x400) == 0)) ||
       ((*(uint *)(rendDrv + 4) & 0x100) != 0)) {
      iVar3 = 3;
    }
    (**(code **)(*(int *)rendDrv + 0x30))(param_1,0x3d4ccccd,0x44a28000);
    camCAMERA::GetOrigin(param_1,(m3dV *)&stack0xffffffc0);
    objMODIFIER::elapsedTime = gsElapsedTime;
    objMODIFIER::SetViewPos((m3dV *)&stack0xffffffc0);
    if (((*(uint *)(rendDrv + 4) & 0x100) == 0) && ((local_4 & 0x10) == 0)) {
      (**(code **)(*(int *)gsSysVis + 0x7c))(&stack0xffffffc0);
      (**(code **)(*(int *)gsSysVis + 0x80))(gsScenePtr);
    }
    local_8 = 0x10000;
    if (((byte)this[4] & 0x10) == 0) {
      local_8 = 0x18000;
    }
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
    pteMANAGER::ActivateAllShaders(pteManager,param_1);
    pteMANAGER::PrepareFrame(pteManager,gsScenePtr,param_1);
    bVar1 = (byte)local_4;
    if (((*(uint *)(rendDrv + 4) & 0x100) == 0) && ((local_4 & 4) == 0)) {
      rendDRIVER::ConfigureTransp((rendDRIVER *)gsSysProjShd,param_1);
    }
    *(uint *)(rendDrv + 4) = *(uint *)(rendDrv + 4) & 0xfffffffb;
    if (*(int *)(gsScenePtr + 0x44) != 0) {
      rendDRIVER::RenderObjListStatic
                (rendDrv,*(int *)(gsScenePtr + 0x48),*(objOBJ ***)(gsScenePtr + 0x4c),
                 *(uint *)(rendDrv + 4) & 0x100);
    }
    paVar2 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0);
    if (paVar2 != (animINST *)0x0) {
      do {
        *(undefined4 *)(paVar2 + 0x124) = 0xffffffff;
        rendDRIVER::RenderInst(rendDrv,paVar2,local_8);
        paVar2 = scnSCENE::FindNextInst(gsScenePtr,paVar2);
      } while (paVar2 != (animINST *)0x0);
      bVar1 = (byte)local_4;
    }
    if (iVar3 != 3) {
      (**(code **)(*(int *)rendDrv + 0x30))(param_1,0x3ecccccd,0x44a28000);
    }
    vidDRIVER::ToggleModeParam(vidDriver,0x1000,0);
    if (((*(uint *)(rendDrv + 4) & 0x100) == 0) && ((bVar1 & 1) == 0)) {
      (**(code **)(*unaff_EBP + 0x30))(param_1);
    }
    vidDRIVER::ToggleModeParam(vidDriver,-0x7ffbf000,1);
    rnsMNG::Purge((rnsMNG *)(rendDrv + 0x8c),iVar3,4);
    vidDRIVER::ToggleModeParam(vidDriver,-0x7ffff000,0);
    if (((*(uint *)(rendDrv + 4) & 0x100) == 0) && ((bVar1 & 4) == 0)) {
      pshSHADOW_SYSTEM::FinishRender(gsSysProjShd,param_1);
    }
    vidDRIVER::ToggleModeParam(vidDriver,0x40000,0);
    rnsMNG::Purge((rnsMNG *)(rendDrv + 0x8c),iVar3,0);
    rnsMNG::Purge((rnsMNG *)(rendDrv + 0x8c),iVar3,1);
    rnsMNG::Purge((rnsMNG *)(rendDrv + 0x8c),iVar3,2);
    if (((*(uint *)(rendDrv + 4) & 0x100) == 0) && ((bVar1 & 2) == 0)) {
      partRender(param_1,iVar3,(partEMITTER_VIS *)&stack0xffffffbc);
    }
    rnsMNG::Purge((rnsMNG *)(rendDrv + 0x8c),iVar3,3);
    if ((iVar3 != 3) && (iVar3 = rnsMNG::IsEmpty((rnsMNG *)(rendDrv + 0x8c),1), iVar3 == 0)) {
      auStack_34[0] = auStack_34[0] | 6;
      (**(code **)(*(int *)vidDriver + 0x24))(auStack_34);
      (**(code **)(*(int *)rendDrv + 0x30))(param_1,0x3d4ccccd,0x42c80000);
      vidDRIVER::ToggleModeParam(vidDriver,-0x7ffbf000,1);
      rnsMNG::Purge((rnsMNG *)(rendDrv + 0x8c),1,4);
      vidDRIVER::ToggleModeParam(vidDriver,-0x7ffbf000,0);
      rnsMNG::Purge((rnsMNG *)(rendDrv + 0x8c),1,0);
      rnsMNG::Purge((rnsMNG *)(rendDrv + 0x8c),1,1);
      rnsMNG::Purge((rnsMNG *)(rendDrv + 0x8c),1,2);
      if ((bVar1 & 2) == 0) {
        partRender(param_1,1,(partEMITTER_VIS *)&stack0xffffffbc);
      }
      rnsMNG::Purge((rnsMNG *)(rendDrv + 0x8c),1,3);
    }
    if ((*(uint *)(rendDrv + 4) & 0x100) == 0) {
      (**(code **)(*unaff_EBP + 0x34))(param_1);
    }
    rnsMNG::PurgePoly((rnsMNG *)(rendDrv + 0x8c));
    vidDRIVER::ToggleModeParam(vidDriver,0x40000,1);
    if ((*(uint *)(rendDrv + 4) & 0x100) == 0) {
      (**(code **)(*unaff_EBP + 0x38))(param_1);
    }
    (**(code **)(*unaff_EBP + 0x44))(param_1);
    (**(code **)(*(int *)rendDrv + 0x34))();
  }
  return;
}




/* from: gs:gs_rend.cpp
   addr: 00506AD0 */

void __thiscall gsRENDER_SYSTEM::RenderSetOptions(gsRENDER_SYSTEM *this)

{
  (**(code **)(*(int *)vidDriver + 0x3c))(0x40000000,0x45ce4000);
  return;
}




/* from: gs:gs_rend.cpp
   addr: 00506AF0 */

void __thiscall gsRENDER_SYSTEM::SaveScreenShot(gsRENDER_SYSTEM *this,camCAMERA *param_1)

{
  char cVar1;
  pctPICTURE *ppVar2;
  int iVar3;
  char *pcVar4;
  ushort *puVar5;
  char *pcVar6;
  pctHEADER local_21c [4];
  undefined4 local_218;
  undefined4 local_214;
  char local_210 [260];
  char acStack_10c [268];
  
  if (((byte)this[4] & 8) != 0) {
    local_210[4] = '\x02';
    local_210[5] = '\0';
    local_210[6] = '\0';
    local_210[7] = '\0';
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff7;
    local_210[0] = '\x01';
    local_210[1] = '\0';
    local_210[2] = '\0';
    local_210[3] = '\0';
    local_218 = ftol();
    local_214 = ftol();
    ppVar2 = pctCreate(local_21c);
    if (ppVar2 != (pctPICTURE *)0x0) {
      iVar3 = (**(code **)(*(int *)vidDriver + 0x28))(0,ppVar2);
      if (iVar3 != 0) {
        _apCfgReadString((void **)0x0,s_Debug,s_ScrShotPath,acStack_10c,0x104);
        pcVar4 = fnmAddExt(acStack_10c,(char *)0x0);
        pcVar6 = acStack_10c;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        sprintf(local_210,s__s__04d_bmp,acStack_10c,*(undefined4 *)(this + 0x10));
        pcVar6 = strrchr(local_210,0x5c);
        if (pcVar6 != (char *)0x0) {
          *pcVar6 = '\0';
          mkdir(local_210);
          *pcVar6 = '\\';
        }
        iVar3 = pctSaveBMP(local_210,ppVar2);
        if (iVar3 != 0) {
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
          iVar3 = *(int *)uiSystem;
          puVar5 = gsSTRINGS::Printf((gsSTRINGS *)uiSystem,(char *)gsStrings,
                                     s_GAME_MSG_SAVE_SCREENSHOT,local_210,0x3f800000,1);
          (**(code **)(iVar3 + 0x20))(puVar5);
        }
        pctDestroy(ppVar2);
      }
    }
  }
  return;
}




/* from: gs:gs_rend.cpp
   addr: 00506C70 */

void __thiscall gsRENDER_SYSTEM::SetColorFullScr(gsRENDER_SYSTEM *this,ulong param_1)

{
  *(float *)(this + 0x14) = (float)(param_1 >> 0x10 & 0xff);
  *(float *)(this + 0x18) = (float)(param_1 >> 8 & 0xff);
  *(float *)(this + 0x1c) = (float)(param_1 & 0xff);
  *(float *)(this + 0x20) = (float)(param_1 >> 0x18);
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x2c) = 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_rend.cpp
   addr: 00506CF0 */

void __thiscall gsRENDER_SYSTEM::RenderColorFullScr(gsRENDER_SYSTEM *this,camCAMERA *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float local_184;
  float local_180;
  float local_154;
  float local_150;
  float local_124;
  float local_120;
  float local_f4;
  float local_f0;
  rendCFG local_c4 [184];
  int local_c;
  uint local_8;
  
  if ((_DAT_005dca70 <= *(float *)(this + 0x28)) || (*(int *)(this + 0x30) != 0)) {
    local_180 = *(float *)(param_1 + 0x140);
    local_184 = *(float *)(param_1 + 0x13c);
    local_150 = *(float *)(param_1 + 0x148) + local_180;
    local_124 = *(float *)(param_1 + 0x144) + local_184;
    local_c = (-(uint)(*(int *)(this + 0x2c) != 0) & 0x40) + 0x20806a;
    local_154 = local_184;
    local_120 = local_150;
    local_f4 = local_124;
    local_f0 = local_180;
    if (*(int *)(this + 0x30) == 0) {
      uVar2 = ftol();
      iVar1 = ftol();
      uVar4 = uVar2 & 0xff | iVar1 << 8;
      uVar2 = ftol();
    }
    else {
      iVar1 = ftol();
      uVar2 = ftol();
      uVar4 = iVar1 << 8 | uVar2 & 0xff;
      uVar2 = ftol();
    }
    uVar3 = ftol();
    local_8 = (uVar4 << 8 | uVar2 & 0xff) << 8 | uVar3 & 0xff;
    rendCFG::InitMtl1(local_c4,(txmTEXTURE *)0x0);
    rendDRIVER::RenderPolyCompat(rendDrv,param_1,4,(rendVERTEX *)&local_184,local_c4);
    *(undefined4 *)(this + 0x30) = 0;
  }
  return;
}

