
/* from: gs:gs_level_init.cpp
   addr: 0051FC80 */

int __thiscall gsLVL_SYSTEM::InitBumpMtl(gsLVL_SYSTEM *this)

{
  gsLVL_SYSTEM *this_00;
  int iVar1;
  gsLVL_SYSTEM *local_8;
  int local_4;
  
  local_8 = this + 0x758;
  local_4 = 2;
  do {
    iVar1 = 0x32;
    this_00 = local_8;
    do {
      apNAME::SetName((apNAME *)this_00 + -0x40,s_);
      apNAME::SetName((apNAME *)this_00,s_);
      *(undefined4 *)((apNAME *)this_00 + 0x40) = 0x40a00000;
      *(undefined4 *)((apNAME *)this_00 + 0x44) = 0x41700000;
      this_00 = (gsLVL_SYSTEM *)((apNAME *)this_00 + 0x88);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    local_8 = local_8 + 0x1a94;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return 1;
}




/* from: gs:gs_level_init.cpp
   addr: 0051FD00 */

void __thiscall gsLVL_SYSTEM::ObjLoadNotify(gsLVL_SYSTEM *this,objOBJ *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != (objOBJ *)0x0) {
    objOBJ::SetDefaultTCHWIndID(param_1);
    objOBJ::UpdRenderState(param_1);
    SetExtraObjFlags(this,param_1);
    SetTexAnimObjFlags(this,param_1);
    pteMANAGER::CreateShader(pteManager,param_1);
    mrrMIRROR_SYSTEM::InitObj(gsSysMirror,param_1);
    (**(code **)(*(int *)rendDrv + 0xa8))(param_1);
    bVar2 = false;
    iVar1 = *(int *)(param_1 + 0x38);
    for (iVar3 = iVar1; (iVar1 != 0 && ((!bVar2 || (iVar3 != iVar1))));
        iVar3 = *(int *)(iVar3 + 0x30)) {
      (**(code **)(*(int *)this + 0x28))(iVar3);
      bVar2 = true;
    }
  }
  return;
}




/* from: gs:gs_level_init.cpp
   addr: 0051FD80 */

void __thiscall gsLVL_SYSTEM::InstLoadNotify(gsLVL_SYSTEM *this,animINST *param_1)

{
  objOBJ *poVar1;
  
  if ((*(uint *)(param_1 + 4) & 0x20000) == 0) {
    pshSHADOW_SYSTEM::InitInst(gsSysProjShd,param_1);
    (**(code **)(*(int *)rendDrv + 0xa0))(param_1);
    if (*(objOBJ **)(param_1 + 0x10) != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes
                (*(objOBJ **)(param_1 + 0x10),0x2000,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      (**(code **)(*(int *)this + 0x28))(*(undefined4 *)(param_1 + 0x10));
      objOBJ::SetStateProcNo
                (*(objOBJ **)(param_1 + 0x10),0x2000,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    pteMANAGER::CreateShader(pteManager,param_1);
    poVar1 = objFind(*(objOBJ **)(param_1 + 0x10),(objFILTER *)&stack0xfffffff8);
    if (poVar1 == (objOBJ *)0x0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20000;
  }
  return;
}




/* from: gs:gs_level_init.cpp
   addr: 0051FE20 */

void __thiscall gsLVL_SYSTEM::ObjDestroyNotify(gsLVL_SYSTEM *this,objOBJ *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != (objOBJ *)0x0) {
    pteMANAGER::DeleteObjNotify(pteManager,param_1);
    mrrMIRROR_SYSTEM::TermObj(gsSysMirror,param_1);
    (**(code **)(*(int *)rendDrv + 0xac))(param_1);
    bVar2 = false;
    iVar1 = *(int *)(param_1 + 0x38);
    for (iVar3 = iVar1; (iVar1 != 0 && ((!bVar2 || (iVar3 != iVar1))));
        iVar3 = *(int *)(iVar3 + 0x30)) {
      (**(code **)(*(int *)this + 0x30))(iVar3);
      bVar2 = true;
    }
  }
  return;
}




/* from: gs:gs_level_init.cpp
   addr: 0051FE80 */

void __thiscall gsLVL_SYSTEM::InstDestroyNotify(gsLVL_SYSTEM *this,animINST *param_1)

{
  pteMANAGER::DeleteInstNotify(pteManager,param_1);
  pshSHADOW_SYSTEM::TermInst(gsSysProjShd,param_1);
  (**(code **)(*(int *)rendDrv + 0xa4))(param_1);
  partDetachInst(param_1);
  if (param_1 != (animINST *)0x0) {
    (**(code **)(*(int *)this + 0x30))(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}




/* from: gs:gs_level_init.cpp
   addr: 0051FED0 */

void __thiscall gsLVL_SYSTEM::TplDestroyNotify(gsLVL_SYSTEM *this,animTPL *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0051fee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x30))();
  return;
}




/* from: gs:gs_level_init.cpp
   addr: 0051FEF0 */

void __thiscall gsLVL_SYSTEM::TplDestroyNotify(gsLVL_SYSTEM *this,int param_1)

{
  animTPL *paVar1;
  
  for (paVar1 = scnSCENE::FindNextTpl(gsScenePtr,(animTPL *)0x0); paVar1 != (animTPL *)0x0;
      paVar1 = scnSCENE::FindNextTpl(gsScenePtr,paVar1)) {
    if ((param_1 != 0) || ((*(uint *)(paVar1 + 0x84) & 0x800) != 0)) {
      (**(code **)(*(int *)this + 0x3c))(paVar1);
    }
  }
  return;
}




/* from: gs:gs_level_init.cpp
   addr: 0051FF40 */

int __fastcall gsLvlInstLoadNotify(animINST *param_1,void *param_2)

{
  (**(code **)(*(int *)gsSysLevel + 0x2c))(param_1);
  return 1;
}




/* from: gs:gs_level_init.cpp
   addr: 0051FF60 */

int __fastcall gsLvlInstDestroyNotify(animINST *param_1,void *param_2)

{
  (**(code **)(*(int *)gsSysLevel + 0x34))(param_1);
  return 1;
}




/* from: gs:gs_level_init.cpp
   addr: 0051FF80 */

void __thiscall gsLVL_SYSTEM::SetExtraObjFlags(gsLVL_SYSTEM *this,objOBJ *param_1)

{
  objOBJ *this_00;
  char *pcVar1;
  objMOD_BILLBOARD *this_01;
  int *piVar2;
  int iVar3;
  gsLVL_SYSTEM *local_4;
  
  this_00 = param_1;
  if (*(char **)(param_1 + 0x18) != (char *)0x0) {
    local_4 = this;
    pcVar1 = strstr(*(char **)(param_1 + 0x18),s__dom);
    if (pcVar1 != (char *)0x0) {
      objOBJ::SetStateProcYes(this_00,0x40008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      objOBJ::SetStateYes(this_00,0x38);
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__h);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = strstr(*(char **)(this_00 + 0x18),s__nc);
      if (pcVar1 == (char *)0x0) {
        iVar3 = 0x11008;
      }
      else {
        iVar3 = 8;
      }
      objOBJ::SetStateProcYes(this_00,iVar3,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      *(undefined4 *)(*(int *)(this_00 + 0x28) + 0x5e) = 0;
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__plrc);
    if (pcVar1 != (char *)0x0) {
      *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) | 0x1008;
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__aic);
    if (pcVar1 != (char *)0x0) {
      *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) | 0x1008;
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__nch);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(*(char **)(this_00 + 0x18),s__nc);
      if (pcVar1 != (char *)0x0) {
        *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) | 0x40000;
      }
    }
    else {
      objOBJ::SetStateProcYes(this_00,0x40000,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__tra);
    if (pcVar1 != (char *)0x0) {
      param_1 = (objOBJ *)0xff;
      sscanf(pcVar1,s__tra__d,&param_1);
      objOBJ::SetTransparency(this_00,0x40,(uchar)param_1);
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__trb);
    if (pcVar1 != (char *)0x0) {
      param_1 = (objOBJ *)0xff;
      sscanf(pcVar1,s__trb__d,&param_1);
      objOBJ::SetTransparency(this_00,0x80,(uchar)param_1);
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__trda);
    if (pcVar1 != (char *)0x0) {
      objOBJ::SetStateRendYes(this_00,0x1000);
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__cc);
    if (pcVar1 != (char *)0x0) {
      iVar3 = sscanf(pcVar1,s__cc__x,&local_4);
      if (iVar3 == 1) {
        objOBJ::SetConstColor(this_00,(ulong)local_4,0,0);
      }
      else {
        apMsg(s_Cannot_read_constant_color_for_o,*(undefined4 *)(this_00 + 0x18));
      }
    }
    strstr(*(char **)(this_00 + 0x18),s__lt);
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__ln);
    if (pcVar1 != (char *)0x0) {
      *(uint *)this_00 = *(uint *)this_00 | 8;
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__vis);
    if (pcVar1 != (char *)0x0) {
      objOBJ::SetStateProcYes(this_00,0x20000,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    strstr(*(char **)(this_00 + 0x18),s__argb);
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__nf);
    if (pcVar1 != (char *)0x0) {
      *(uint *)this_00 = *(uint *)this_00 | 0x10;
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__ns);
    if (pcVar1 != (char *)0x0) {
      *(uint *)this_00 = *(uint *)this_00 | 0x20;
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__mmlod);
    if (pcVar1 != (char *)0x0) {
      *(uint *)this_00 = *(uint *)this_00 | 0x800;
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__fl);
    if (pcVar1 != (char *)0x0) {
      *(uint *)(this_00 + 0xc) = *(uint *)(this_00 + 0xc) | 1;
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s_kukla);
    if (pcVar1 != (char *)0x0) {
      *(uint *)this_00 = *(uint *)this_00 | 0x20;
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__bb);
    if (pcVar1 != (char *)0x0) {
      this_01 = (objMOD_BILLBOARD *)operator_new(0x9c);
      if (this_01 == (objMOD_BILLBOARD *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)objMOD_BILLBOARD::objMOD_BILLBOARD(this_01);
      }
      pcVar1 = strstr(*(char **)(this_00 + 0x18),s__bbv);
      if (pcVar1 != (char *)0x0) {
        piVar2[1] = piVar2[1] | 0x2000;
      }
      (**(code **)(*piVar2 + 4))(this_00);
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__ds);
    if (pcVar1 != (char *)0x0) {
      *(uint *)this_00 = *(uint *)this_00 | 4;
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__trf);
    if (pcVar1 != (char *)0x0) {
      objOBJ::SetStateRendYes(this_00,0x2000000);
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__trs);
    if (pcVar1 != (char *)0x0) {
      objOBJ::SetStateRendYes(this_00,0x4000000);
    }
    pcVar1 = strstr(*(char **)(this_00 + 0x18),s__trl);
    if (pcVar1 != (char *)0x0) {
      objOBJ::SetStateRendYes(this_00,0x8000000);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_level_init.cpp
   addr: 00520340 */

void __thiscall gsLVL_SYSTEM::SetTexAnimObjFlags(gsLVL_SYSTEM *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  char *pcVar2;
  int iVar3;
  objMOD_TEX_FRAME_ANIM *poVar4;
  objMOD_TEX_SCROLL *poVar5;
  int *piVar6;
  objMOD_BLINK_TRANSP *poVar7;
  float local_30;
  float local_2c;
  uint uStack_28;
  float local_24;
  float local_20;
  int local_1c;
  float fStack_18;
  float fStack_14;
  float local_10;
  int local_c;
  int local_8;
  float fStack_4;
  
  poVar1 = param_1;
  if (*(char **)(param_1 + 0x18) != (char *)0x0) {
    pcVar2 = strstr(*(char **)(param_1 + 0x18),s__atf);
    if (pcVar2 != (char *)0x0) {
      local_2c = 0.0;
      local_24 = -1.0;
      local_20 = -1.0;
      local_1c = -1;
      iVar3 = sscanf(pcVar2,s__atf__d__d__f__f__d__f__f,&local_8,&local_c,&local_10,&local_2c,
                     &local_1c,&local_20,&local_24);
      if (iVar3 < 3) {
        apMsg(s_Cannot_read_texture_animation_pa,*(undefined4 *)(poVar1 + 0x18));
      }
      else {
        poVar4 = (objMOD_TEX_FRAME_ANIM *)operator_new(0x4c);
        if (poVar4 == (objMOD_TEX_FRAME_ANIM *)0x0) {
          poVar4 = (objMOD_TEX_FRAME_ANIM *)0x0;
        }
        else {
          poVar4 = (objMOD_TEX_FRAME_ANIM *)objMOD_TEX_FRAME_ANIM::objMOD_TEX_FRAME_ANIM(poVar4,0);
        }
        objMOD_TEX_FRAME_ANIM::SetParams
                  (poVar4,local_8,local_c,local_10,local_2c,local_1c,local_20,local_24,1);
        (**(code **)(*(int *)poVar4 + 4))(poVar1);
      }
    }
    param_1 = (objOBJ *)0x0;
    local_30 = 0.0;
    pcVar2 = strstr(*(char **)(poVar1 + 0x18),s__atu);
    if ((pcVar2 != (char *)0x0) && (iVar3 = sscanf(pcVar2,s__atu__f,&local_30), iVar3 != 1)) {
      apMsg(s_Cannot_read_U_scorolling_perion_,*(undefined4 *)(poVar1 + 0x18));
    }
    pcVar2 = strstr(*(char **)(poVar1 + 0x18),s__atv);
    if ((pcVar2 != (char *)0x0) && (iVar3 = sscanf(pcVar2,s__atv__f,&param_1), iVar3 != 1)) {
      apMsg(s_Cannot_read_V_scorolling_perion_,*(undefined4 *)(poVar1 + 0x18));
    }
    uStack_28 = (uint)(ABS(local_30) < _DAT_005dcf44);
    if (((float)uStack_28 == ___real_00000000) ||
       (uStack_28 = (uint)(ABS((float)param_1) < _DAT_005dcf44),
       (float)uStack_28 == ___real_00000000)) {
      poVar5 = (objMOD_TEX_SCROLL *)operator_new(0x30);
      if (poVar5 == (objMOD_TEX_SCROLL *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)objMOD_TEX_SCROLL::objMOD_TEX_SCROLL(poVar5,0);
      }
      piVar6[10] = (int)local_30;
      piVar6[0xb] = (int)param_1;
      (**(code **)(*piVar6 + 4))(poVar1);
    }
    param_1 = (objOBJ *)0x0;
    local_30 = 0.0;
    pcVar2 = strstr(*(char **)(poVar1 + 0x18),s__atdu);
    if ((pcVar2 != (char *)0x0) && (iVar3 = sscanf(pcVar2,s__atdu__f,&local_30), iVar3 != 1)) {
      apMsg(s_Cannot_read_U_scorolling_perion_,*(undefined4 *)(poVar1 + 0x18));
    }
    pcVar2 = strstr(*(char **)(poVar1 + 0x18),s__atdv);
    if ((pcVar2 != (char *)0x0) && (iVar3 = sscanf(pcVar2,s__atdv__f,&param_1), iVar3 != 1)) {
      apMsg(s_Cannot_read_V_scorolling_perion_,*(undefined4 *)(poVar1 + 0x18));
    }
    uStack_28 = (uint)(ABS(local_30) < _DAT_005dcf44);
    if (((float)uStack_28 == ___real_00000000) ||
       (uStack_28 = (uint)(ABS((float)param_1) < _DAT_005dcf44),
       (float)uStack_28 == ___real_00000000)) {
      poVar5 = (objMOD_TEX_SCROLL *)operator_new(0x30);
      if (poVar5 == (objMOD_TEX_SCROLL *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)objMOD_TEX_SCROLL::objMOD_TEX_SCROLL(poVar5,2);
      }
      piVar6[10] = (int)local_30;
      piVar6[0xb] = (int)param_1;
      (**(code **)(*piVar6 + 4))(poVar1);
    }
    pcVar2 = strstr(*(char **)(poVar1 + 0x18),s__ab);
    if (pcVar2 != (char *)0x0) {
      fStack_14 = 0.0;
      fStack_18 = 0.0;
      local_2c = 0.0;
      iVar3 = sscanf(pcVar2,s__ab__f__f__f__f,&fStack_4,&fStack_14,&fStack_18,&local_2c);
      if (0 < iVar3) {
        poVar7 = (objMOD_BLINK_TRANSP *)operator_new(0x2c);
        if (poVar7 == (objMOD_BLINK_TRANSP *)0x0) {
          poVar7 = (objMOD_BLINK_TRANSP *)0x0;
        }
        else {
          poVar7 = (objMOD_BLINK_TRANSP *)objMOD_BLINK_TRANSP::objMOD_BLINK_TRANSP(poVar7);
        }
        objMOD_BLINK_TRANSP::SetParams(poVar7,fStack_4,fStack_14,fStack_18,local_2c);
        (**(code **)(*(int *)poVar7 + 4))(poVar1);
        return;
      }
      apMsg(s_Cannot_read_texture_animation_pa,*(undefined4 *)(poVar1 + 0x18));
    }
  }
  return;
}




/* from: gs:gs_level_init.cpp
   addr: 00520740 */

void __thiscall gsLVL_SYSTEM::AddExtraObjMtls(gsLVL_SYSTEM *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  objOBJ *poVar3;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    AddExtraObjMtls(this,param_1);
  }
  bVar2 = false;
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  for (poVar3 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar3 != poVar1))));
      poVar3 = *(objOBJ **)(poVar3 + 0x30)) {
    AddExtraObjMtls(this,poVar3);
    bVar2 = true;
  }
  return;
}




/* from: gs:gs_level_init.cpp
   addr: 005207B0 */

void __thiscall gsLVL_SYSTEM::AddExtraObjMtls(gsLVL_SYSTEM *this,objOBJ *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  objMTL *poVar5;
  objMTL_CTRL *poVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  objMTL *poVar10;
  objSPLIT_ENTRY *poVar11;
  objSPLIT_ENTRY *poVar12;
  objMTL *poVar13;
  gsLVL_SYSTEM *local_9c;
  int local_98;
  gsLVL_SYSTEM *local_94;
  int local_90;
  txmTEXTURE *local_84 [6];
  char local_6c;
  objMTL local_68 [25];
  objMTL local_4f [25];
  objMTL local_36 [50];
  short local_4;
  
  local_84[0] = (txmTEXTURE *)0x0;
  local_84[1] = (txmTEXTURE *)0x3f800000;
  local_84[2] = (txmTEXTURE *)0x3f800000;
  local_84[3] = (txmTEXTURE *)0x3f800000;
  local_6c = -1;
  poVar10 = local_68;
  iVar9 = 4;
  do {
    objMTL::objMTL(poVar10);
    poVar10 = poVar10 + 0x19;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_4 = 0;
  local_90 = 0;
  puVar8 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
  if (*puVar8 != 0) {
    local_9c = (gsLVL_SYSTEM *)0x0;
    do {
      poVar11 = (objSPLIT_ENTRY *)(*(int *)(puVar8 + 1) + (int)local_9c);
      poVar10 = objOBJ::GetSplitMtlRendMtl(param_1,poVar11,0);
      iVar9 = 0;
      if (0 < *(int *)(this + 0x714)) {
        local_94 = this + 0x718;
        do {
          if (*(int *)poVar10 != 0) {
            iVar4 = stricmp((char *)(*(int *)poVar10 + 8),(char *)local_94);
            if (iVar4 == 0) break;
          }
          iVar9 = iVar9 + 1;
          local_94 = local_94 + 0x88;
        } while (iVar9 < *(int *)(this + 0x714));
      }
      if (iVar9 < *(int *)(this + 0x714)) {
        poVar5 = objOBJ::GetSplitMtlRendMtl(param_1,poVar11,4);
        if (poVar5 == (objMTL *)0x0) {
          local_84[0] = txmMANAGER::Add(txmManager,(char *)(this + iVar9 * 0x88 + 0x758),0x100,1);
          if (local_84[0] == (txmTEXTURE *)0x0) goto LAB_00520a23;
          iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x18);
          poVar6 = objMTL_CTRL_TBL::FindMtlCtrl((objMTL_CTRL_TBL *)(iVar4 + 6),4);
          if (poVar6 == (objMTL_CTRL *)0x0) {
            *(short *)(iVar4 + 0x16) = *(short *)(iVar4 + 0x16) + 1;
            sVar3 = *(short *)(iVar4 + 0x16);
            *(undefined1 *)(iVar4 + 4 + sVar3 * 4) = 4;
            puVar2 = (undefined1 *)(iVar4 + 2 + sVar3 * 4);
            iVar7 = objOBJ::GetTCCoordIDRendMtl(param_1,0);
            puVar2[1] = (char)iVar7;
            iVar7 = objOBJ::GetTCIndIDRendMtl(param_1,0);
            *puVar2 = (char)iVar7;
            puVar2[3] = 0;
            *(undefined4 *)(iVar4 + 0x18) = 0x3ecccccd;
            *(undefined4 *)(iVar4 + 0x1c) = 0x3f800000;
          }
          local_4 = *(short *)(poVar11 + 100) + 1;
          local_6c = *(char *)(iVar4 + 0x16) + -1;
          local_84[3] = (txmTEXTURE *)*(undefined4 *)(this + iVar9 * 0x88 + 0x798);
          iVar4 = 2;
          local_84[4] = (txmTEXTURE *)*(undefined4 *)(this + (iVar9 + 1) * 0x88 + 0x714);
          poVar5 = (objMTL *)local_84;
          poVar13 = local_68;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(txmTEXTURE **)poVar13 = *(txmTEXTURE **)poVar5;
            poVar5 = poVar5 + 4;
            poVar13 = poVar13 + 4;
          }
          *poVar13 = *poVar5;
          poVar5 = poVar10;
          poVar13 = local_4f;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined4 *)poVar13 = *(undefined4 *)poVar5;
            poVar5 = poVar5 + 4;
            poVar13 = poVar13 + 4;
          }
          *poVar13 = *poVar5;
          if (*(int *)poVar10 != 0) {
            puVar1 = (uint *)(*(int *)poVar10 + 4);
            *puVar1 = *puVar1 | 0x30000;
          }
          poVar10 = objOBJ::GetSplitMtlRendMtl(param_1,poVar11,2);
          if ((poVar10 != (objMTL *)0x0) && (*(int *)poVar10 != 0)) {
            iVar4 = 3;
            poVar5 = local_36;
            for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined4 *)poVar5 = *(undefined4 *)poVar10;
              poVar10 = poVar10 + 4;
              poVar5 = poVar5 + 4;
            }
            *poVar5 = *poVar10;
          }
          poVar10 = objOBJ::GetSplitMtlRendMtl(param_1,poVar11,1);
          iVar9 = iVar4;
          if ((poVar10 != (objMTL *)0x0) && (*(int *)poVar10 != 0)) {
            iVar9 = iVar4 + 1;
            poVar5 = local_68 + iVar4 * 0x19;
            for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(undefined4 *)poVar5 = *(undefined4 *)poVar10;
              poVar10 = poVar10 + 4;
              poVar5 = poVar5 + 4;
            }
            *poVar5 = *poVar10;
          }
          local_4 = (short)iVar9;
          poVar10 = local_68;
          for (iVar9 = 0x19; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined4 *)poVar11 = *(undefined4 *)poVar10;
            poVar10 = poVar10 + 4;
            poVar11 = poVar11 + 4;
          }
          *(undefined2 *)poVar11 = *(undefined2 *)poVar10;
        }
        *(uint *)(*(int *)(param_1 + 0x28) + 0x66) =
             *(uint *)(*(int *)(param_1 + 0x28) + 0x66) | 0x100;
      }
LAB_00520a23:
      puVar8 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
      local_90 = local_90 + 1;
      local_9c = (gsLVL_SYSTEM *)((int)local_9c + 0x70);
    } while (local_90 < (int)(uint)*puVar8);
  }
  local_90 = 0;
  puVar8 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
  if (*puVar8 != 0) {
    local_98 = 0;
    do {
      poVar11 = (objSPLIT_ENTRY *)(*(int *)(puVar8 + 1) + local_98);
      poVar10 = objOBJ::GetSplitMtlRendMtl(param_1,poVar11,0);
      iVar9 = 0;
      if (0 < *(int *)(this + 0x21a8)) {
        local_9c = this + 0x21ac;
        do {
          if (*(int *)poVar10 != 0) {
            iVar4 = stricmp((char *)(*(int *)poVar10 + 8),(char *)local_9c);
            if (iVar4 == 0) break;
          }
          iVar9 = iVar9 + 1;
          local_9c = local_9c + 0x88;
        } while (iVar9 < *(int *)(this + 0x21a8));
      }
      if (iVar9 < *(int *)(this + 0x21a8)) {
        poVar10 = objOBJ::GetSplitMtlRendMtl(param_1,poVar11,5);
        if (poVar10 == (objMTL *)0x0) {
          local_84[0] = txmMANAGER::Add(txmManager,(char *)(this + iVar9 * 0x88 + 0x21ec),0x100,1);
          if (local_84[0] == (txmTEXTURE *)0x0) goto LAB_00520bce;
          iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x18);
          poVar6 = objMTL_CTRL_TBL::FindMtlCtrl((objMTL_CTRL_TBL *)(iVar4 + 6),5);
          if (poVar6 == (objMTL_CTRL *)0x0) {
            *(short *)(iVar4 + 0x16) = *(short *)(iVar4 + 0x16) + 1;
            sVar3 = *(short *)(iVar4 + 0x16);
            *(undefined1 *)(iVar4 + 4 + sVar3 * 4) = 5;
            puVar2 = (undefined1 *)(iVar4 + 2 + sVar3 * 4);
            iVar7 = objOBJ::GetTCCoordIDRendMtl(param_1,0);
            puVar2[1] = (char)iVar7;
            iVar7 = objOBJ::GetTCIndIDRendMtl(param_1,0);
            *puVar2 = (char)iVar7;
            puVar2[3] = 0;
            *(undefined4 *)(iVar4 + 0x20) = 0x3f000000;
          }
          *(short *)(poVar11 + 100) = *(short *)(poVar11 + 100) + 1;
          local_6c = *(char *)(iVar4 + 0x16) + -1;
          local_84[3] = (txmTEXTURE *)*(undefined4 *)(this + iVar9 * 0x88 + 0x222c);
          local_84[4] = (txmTEXTURE *)*(undefined4 *)(this + (iVar9 + 1) * 0x88 + 0x21a8);
          poVar12 = (objSPLIT_ENTRY *)local_84;
          poVar11 = poVar11 + *(short *)(poVar11 + 100) * 0x19 + -0x19;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(txmTEXTURE **)poVar11 = *(txmTEXTURE **)poVar12;
            poVar12 = poVar12 + 4;
            poVar11 = poVar11 + 4;
          }
          *poVar11 = *poVar12;
        }
        *(uint *)(*(int *)(param_1 + 0x28) + 0x66) =
             *(uint *)(*(int *)(param_1 + 0x28) + 0x66) | 0x100;
      }
LAB_00520bce:
      puVar8 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
      local_90 = local_90 + 1;
      local_98 = local_98 + 0x70;
    } while (local_90 < (int)(uint)*puVar8);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_level_init.cpp
   addr: 00520C10 */

void __thiscall gsLVL_SYSTEM::SetTplObjFlags(gsLVL_SYSTEM *this,objOBJ *param_1,animTPL *param_2)

{
  objOBJ *poVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  float local_1c;
  float local_18;
  float local_14;
  objOBJ *local_10;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  poVar1 = param_1;
  local_10 = param_1;
  objOBJ_ITER::Rewind((objOBJ_ITER *)&local_10);
  if (param_1 == (objOBJ *)0x0) {
    return;
  }
  if (((*(int *)(param_1 + 0x2c) == 0) ||
      (iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 0x2c), iVar3 == 0)) ||
     (*(int *)(iVar3 + 0x2c) == 0)) goto LAB_00520e63;
  if ((*(short *)(param_1 + 0x20) < 0) ||
     (((pbVar2 = (byte *)(*(short *)(param_1 + 0x20) * 0x40 + *(int *)(param_2 + 0xa0)),
       *(int *)(pbVar2 + 0x14) == 0 && (*(int *)(pbVar2 + 0x28) == 0)) &&
      (*(int *)(pbVar2 + 0x38) == 0)))) {
    if (*(short *)(param_1 + 0x22) == -1) {
      while (local_c != (objOBJ *)0x0) {
        if (((local_4 != 0) && (local_8 == local_c)) ||
           ((-1 < *(short *)(local_8 + 0x20) &&
            (((iVar3 = *(short *)(local_8 + 0x20) * 0x40 + *(int *)(param_2 + 0xa0),
              *(int *)(iVar3 + 0x14) != 0 || (*(int *)(iVar3 + 0x28) != 0)) ||
             (*(int *)(iVar3 + 0x38) != 0)))))) {
          if ((local_c != (objOBJ *)0x0) && ((local_4 == 0 || (local_8 != local_c))))
          goto LAB_00520e41;
          break;
        }
        local_4 = 1;
        local_8 = *(objOBJ **)(local_8 + 0x30);
      }
      objOBJ::FreezeModelMatr(param_1);
    }
LAB_00520e41:
    iVar3 = m3dIsEqualMatr_A((m3dMATR *)(param_1 + 0x7c),&m3dMatrIdentity,0.001,0.01);
    if (iVar3 == 0) goto LAB_00520e63;
    uVar4 = *(uint *)param_1 | 0x1000;
  }
  else {
    if (*(int *)(pbVar2 + 0x38) != 0) goto LAB_00520e63;
    if ((*pbVar2 & 1) == 0) {
      m3dMATR::GetScale((m3dMATR *)(param_1 + 0x7c),&local_1c,&local_18,&local_14);
    }
    else {
      local_1c = *(float *)(pbVar2 + 0x2c);
      local_18 = *(float *)(pbVar2 + 0x30);
      local_14 = *(float *)(pbVar2 + 0x34);
    }
    iVar3 = *(short *)(param_1 + 0x20) * 0x40 + *(int *)(param_2 + 0xa0);
    if (((*(int *)(iVar3 + 0x14) != 0) || (*(int *)(iVar3 + 0x38) != 0)) ||
       ((param_1 = (objOBJ *)(uint)(ABS(local_1c - ___real_3f800000) < _DAT_005dcf44),
        (float)(int)param_1 == ___real_00000000 ||
        ((param_1 = (objOBJ *)(uint)(ABS(local_18 - ___real_3f800000) < _DAT_005dcf44),
         (float)(int)param_1 == ___real_00000000 ||
         (param_1 = (objOBJ *)(uint)(ABS(local_14 - ___real_3f800000) < _DAT_005dcf44),
         (float)(int)param_1 == ___real_00000000)))))) goto LAB_00520e63;
    uVar4 = *(uint *)poVar1 | 0x400;
  }
  *(uint *)poVar1 = uVar4;
LAB_00520e63:
  local_c = (objOBJ *)0x0;
  if (local_10 != (objOBJ *)0x0) {
    local_4 = 0;
    local_c = *(objOBJ **)(local_10 + 0x38);
    local_8 = local_c;
  }
  for (; (local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    SetTplObjFlags(this,local_8,param_2);
    local_4 = 1;
  }
  return;
}




/* from: gs:gs_level_init.cpp
   addr: 00520ED0 */

int __thiscall objFILTER_FIND_CDT_OBJ::IsUse(objFILTER_FIND_CDT_OBJ *this,objOBJ *param_1)

{
  if ((0 < *(int *)(param_1 + 0x10)) && ((*(uint *)(param_1 + 8) & 0x40000) == 0)) {
    return 1;
  }
  return 0;
}

