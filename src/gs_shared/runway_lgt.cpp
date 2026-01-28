
/* from: gs_shared:runway_lgt.cpp
   addr: 00548C50 */

int __fastcall rwlInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_runway_light,0x2452574c,0x28,rwlLIGHT::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: gs_shared:runway_lgt.cpp
   addr: 00548C80 */

entENTITY * __fastcall rwlLIGHT::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x17f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x173) = 0;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: gs_shared:runway_lgt.cpp
   addr: 00548CF0 */

int __thiscall rwlLIGHT::ProcessINIT(rwlLIGHT *this)

{
  flrFLARE *this_00;
  objOBJ *poVar1;
  char *pcVar2;
  m3dSPL *pmVar3;
  pteSPOT *this_01;
  pteSHADER *this_02;
  entENTITY *peVar4;
  
  animINST::Validate(*(animINST **)(this + 0xbc),0x200);
  poVar1 = objFind(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),objIsNVert,(void *)0x0);
  if (poVar1 == (objOBJ *)0x0) {
    pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x18);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    apMsg(s_Cannot_find_runway_lights_path_s,pcVar2);
    return 0;
  }
  pmVar3 = objConvertSpl(poVar1);
  *(m3dSPL **)(this + 0x157) = pmVar3;
  if (pmVar3 == (m3dSPL *)0x0) {
    pcVar2 = *(char **)(*(int *)(this + 0xbc) + 0x18);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_;
    }
    apMsg(s_Cannot_convert_path_spline__spli,pcVar2);
    return 0;
  }
  this_01 = (pteSPOT *)operator_new(0xf8);
  if (this_01 == (pteSPOT *)0x0) {
    this_02 = (pteSHADER *)0x0;
  }
  else {
    this_02 = (pteSHADER *)pteSPOT::pteSPOT(this_01,1);
  }
  *(pteSHADER **)(this + 0x14f) = this_02;
  pteSHADER::SetSheet(this_02,*(psSHEET **)(*(int *)(this + 0xbc) + 0x134),(char *)0x0);
  pteSHADER::Register(*(pteSHADER **)(this + 0x14f));
  *(undefined4 *)(this + 0x16b) = *(undefined4 *)(*(int *)(this + 0x14f) + 200);
  peVar4 = entCreate(gsScenePtr,s_flare,s_,(animCREATE_DATA *)0x0,(void *)0x0,0);
  *(entENTITY **)(this + 0x153) = peVar4;
  (**(code **)(*(int *)peVar4 + 0x6c))(*(undefined4 *)(this + 0xbc));
  this_00 = *(flrFLARE **)(this + 0x153);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(this_00 + 0x163);
  *(undefined4 *)(this + 0x173) = *(undefined4 *)(this_00 + 0x167);
  *(undefined4 *)(this + 0x177) = *(undefined4 *)(this_00 + 0x16b);
  *(undefined4 *)(this + 0x17b) = *(undefined4 *)(this_00 + 0x16f);
  flrFLARE::EnableShine(this_00,1);
  flrFLARE::EnableAnim(*(flrFLARE **)(this + 0x153),4,0);
  (**(code **)(**(int **)(this + 0x14f) + 4))(1);
  *(float *)(this + 0x15b) = 0.5;
  animINST::GetFloat(*(animINST **)(this + 0xbc),s_RUNWAY_LIGHT,s_timeOn,(float *)(this + 0x15b));
  *(int *)(this + 0x167) = 10;
  animINST::GetInt(*(animINST **)(this + 0xbc),s_RUNWAY_LIGHT,s_nLight,(int *)(this + 0x167));
  *(undefined4 *)(this + 0x15f) = 0;
  *(undefined4 *)(this + 0x163) = 0;
  return 1;
}




/* from: gs_shared:runway_lgt.cpp
   addr: 00548EB0 */

void __thiscall rwlLIGHT::ProcessTERM(rwlLIGHT *this)

{
  if (*(int **)(this + 0x157) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x157) + 4))(1);
  }
  if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x14f))(1);
  }
  entDestroy(*(entENTITY **)(this + 0x153));
  *(undefined4 *)(this + 0x14f) = 0;
  *(undefined4 *)(this + 0x153) = 0;
  return;
}




/* from: gs_shared:runway_lgt.cpp
   addr: 00548F00 */

int __thiscall
rwlLIGHT::ProcessMsg(rwlLIGHT *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 < 4) {
    if (param_1 == 3) {
      puVar1 = *(undefined4 **)(this + 0x14f);
      if ((undefined4 *)param_2 == puVar1) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(this + 0x14f) = 0;
      }
      if ((entENTITY *)param_2 == *(entENTITY **)(this + 0x153)) {
        entDestroy(*(entENTITY **)(this + 0x153));
        *(undefined4 *)(this + 0x153) = 0;
        return 0;
      }
    }
    else {
      if (param_1 == 1) {
        iVar2 = (**(code **)(*(int *)this + 0x68))();
        *param_4 = iVar2;
        return 0;
      }
      if (param_1 == 2) {
        (**(code **)(*(int *)this + 0x6c))();
        return 0;
      }
    }
  }
  else if (param_1 == 1000) {
    Update(this);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:runway_lgt.cpp
   addr: 00548F90 */

void __thiscall rwlLIGHT::Update(rwlLIGHT *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [8];
  int local_20;
  undefined1 local_1c [28];
  
  fVar3 = gsElapsedTime + *(float *)(this + 0x15f);
  *(float *)(this + 0x15f) = fVar3;
  if (*(float *)(this + 0x15b) < fVar3) {
    *(float *)(this + 0x15f) = *(float *)(this + 0x15f) - *(float *)(this + 0x15b);
    *(int *)(this + 0x163) = (*(int *)(this + 0x163) + 1) % *(int *)(this + 0x167);
  }
  local_20 = (*(int **)(this + 0x157))[3] + -1;
  fVar3 = ((float)local_20 * (float)*(int *)(this + 0x163)) / (float)*(int *)(this + 0x167);
  (**(code **)(**(int **)(this + 0x157) + 0x10))(fVar3,local_1c,0);
  fVar7 = *(float *)(this + 0x15b) * ___real_3e19999a;
  if (fVar7 <= *(float *)(this + 0x15f)) {
    fVar7 = *(float *)(this + 0x15b) * ___real_3d4ccccd;
    if (*(float *)(this + 0x15f) <= fVar7) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = *(float *)(this + 0x15b);
      fVar1 = *(float *)(this + 0x15f);
      fStack_38 = 0.01;
      fVar4 = 1.0;
      fStack_30 = fVar5;
      if (fVar5 < fVar7) {
        fVar4 = 0.01;
        fStack_38 = 1.0;
        fStack_30 = fVar7;
        fVar7 = fVar5;
      }
      fVar5 = fVar4;
      if ((fVar7 <= fVar1) && (fVar5 = fStack_38, fVar1 <= fStack_30)) {
        fStack_2c = fStack_38;
        fVar6 = fVar7;
        fVar5 = fVar4;
        if (fStack_30 < fVar7) {
          fVar6 = fStack_30;
          fVar5 = fStack_38;
          fStack_30 = fVar7;
          fStack_2c = fVar4;
        }
        fVar5 = ((fVar1 - fVar6) * (fStack_2c - fVar5)) / (fStack_30 - fVar6) + fVar5;
      }
    }
  }
  else {
    fVar1 = *(float *)(this + 0x15f);
    fVar8 = 1.0;
    fStack_38 = 0.01;
    fVar4 = fVar7;
    fVar6 = 0.0;
    if (fVar7 < ___real_00000000) {
      fVar4 = 0.0;
      fStack_38 = 1.0;
      fVar8 = 0.01;
      fVar6 = fVar7;
    }
    fVar5 = fStack_38;
    if ((fVar6 <= fVar1) && (fVar5 = fVar8, fVar1 <= fVar4)) {
      fVar7 = fVar6;
      fStack_30 = fVar8;
      fStack_2c = fVar4;
      if (fVar4 < fVar6) {
        fStack_30 = fStack_38;
        fVar7 = fVar4;
        fStack_38 = fVar8;
        fStack_2c = fVar6;
      }
      fVar5 = ((fVar1 - fVar7) * (fStack_30 - fStack_38)) / (fStack_2c - fVar7) + fStack_38;
    }
  }
  pteSPOT::SetRadius(*(pteSPOT **)(this + 0x14f),fVar5 * *(float *)(this + 0x16b));
  (**(code **)(**(int **)(this + 0x14f) + 0x14))(auStack_28);
  flrFLARE::SetPos(*(flrFLARE **)(this + 0x153),(m3dV *)&fStack_2c);
  fVar7 = *(float *)(this + 0x173);
  fVar5 = *(float *)(this + 0x177);
  iVar2 = *(int *)(this + 0x153);
  *(float *)(iVar2 + 0x163) = *(float *)(this + 0x16f) * fVar3;
  *(float *)(iVar2 + 0x167) = fVar7 * fVar3;
  *(float *)(iVar2 + 0x16b) = fVar5 * fVar3;
  *(undefined4 *)(iVar2 + 0x16f) = 0x437f0000;
  return;
}




/* from: gs_shared:runway_lgt.cpp
   addr: 00549320
   addr: 00549320 */

void * __thiscall rwlLIGHT::_vector_deleting_destructor_(rwlLIGHT *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

