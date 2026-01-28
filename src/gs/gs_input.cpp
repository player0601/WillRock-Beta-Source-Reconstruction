
/* from: gs:gs_input.cpp
   addr: 00515F70 */

char * __thiscall gsiKEY_SEQ::Read(gsiKEY_SEQ *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  pcVar2 = strchr(param_1,0x7b);
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  *(undefined4 *)this = 0;
  while (((param_1 = pcVar2 + 1, param_1 != (char *)0x0 && (cVar1 = *param_1, cVar1 != '\0')) &&
         (cVar1 != '}'))) {
    while (cVar1 == ' ') {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    lVar3 = strtol(param_1,&param_1,0x10);
    *(long *)(this + *(int *)this * 4 + 4) = lVar3;
    pcVar2 = param_1;
    if ((0 < *(int *)(this + *(int *)this * 4 + 4)) &&
       (*(int *)(this + *(int *)this * 4 + 4) < 0x153)) {
      *(int *)this = *(int *)this + 1;
    }
  }
  return pcVar2 + 2;
}




/* from: gs:gs_input.cpp
   addr: 00515FF0 */

int __thiscall gsiCOMMAND::Read(gsiCOMMAND *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  gsiCOMMAND *pgVar3;
  int iVar4;
  gsiKEY_SEQ *this_00;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
LAB_00516023:
      this_00 = (gsiKEY_SEQ *)(this + 0x48);
      for (pcVar2 = gsiKEY_SEQ::Read(this_00,param_1); pcVar2 != (char *)0x0;
          pcVar2 = gsiKEY_SEQ::Read(this_00,pcVar2)) {
        this_00 = this_00 + 0x10;
        iVar5 = iVar5 + 1;
      }
      if (iVar5 < 5) {
        pgVar3 = this + iVar5 * 0x10 + 0x48;
        iVar4 = 5 - iVar5;
        do {
          *(undefined4 *)pgVar3 = 0;
          pgVar3 = pgVar3 + 0x10;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      return (uint)(0 < iVar5);
    }
    if (cVar1 == 'd') {
      param_1 = param_1 + iVar4 + 1;
      *(uint *)this = *(uint *)this | 0x20;
      goto LAB_00516023;
    }
    if (cVar1 == '{') {
      param_1 = param_1 + iVar4;
      goto LAB_00516023;
    }
    cVar1 = param_1[iVar4 + 1];
    iVar4 = iVar4 + 1;
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_input.cpp
   addr: 00516080 */

void __thiscall gsiCOMMAND::GetInput(gsiCOMMAND *this,inpINPUT *param_1,int param_2,int param_3)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  gsiCOMMAND *pgVar7;
  int local_34;
  uint local_30;
  float local_24 [3];
  int local_18 [6];
  
  if (((byte)*this & 1) != 0) {
    return;
  }
  pgVar7 = this + 0x48;
  local_34 = 0;
  do {
    bVar2 = false;
    if ((0 < *(int *)pgVar7) && (*(int *)pgVar7 == param_2)) {
      *(undefined4 *)(this + 0x44) = 0x3f800000;
      bVar3 = false;
      bVar4 = false;
      inpINPUT::GetMultipleKeyValue
                (param_1,param_2,(int *)(pgVar7 + 4),local_24,local_18 + 3,local_18);
      iVar6 = 0;
      if (0 < param_2) {
        do {
          if (local_18[iVar6] == 1) {
            bVar3 = true;
          }
          if (local_18[iVar6] == 2) {
            bVar4 = true;
          }
          if (local_18[iVar6 + 3] != 0) {
            bVar2 = true;
          }
          if (local_24[iVar6] < _DAT_005dcdac) {
            *(undefined4 *)(this + 0x44) = 0;
            break;
          }
          pfVar1 = local_24 + iVar6;
          iVar6 = iVar6 + 1;
          *(float *)(this + 0x44) = *pfVar1 * *(float *)(this + 0x44);
        } while (iVar6 < param_2);
        if (bVar2) {
          *(uint *)this = *(uint *)this | 2;
        }
      }
      local_30 = (uint)(ABS(*(float *)(this + 0x44)) < ___real_3a83126f);
      if ((float)local_30 == ___real_00000000) {
        uVar5 = *(uint *)this;
        *(uint *)this = uVar5 | 1;
        if (bVar3) {
          uVar5 = uVar5 | 5;
        }
        else if (bVar4) {
          uVar5 = uVar5 | 9;
        }
        else {
          uVar5 = uVar5 | 0x11;
        }
        *(uint *)this = uVar5;
        if (param_3 == 0) {
          return;
        }
        inpINPUT::ReleaseKey(param_1,param_2,(int *)(this + local_34 * 0x10 + 0x4c));
        return;
      }
    }
    pgVar7 = pgVar7 + 0x10;
    local_34 = local_34 + 1;
    if (4 < local_34) {
      return;
    }
  } while( true );
}




/* from: gs:gs_input.cpp
   addr: 005161F0 */

void __thiscall gsiCOMMAND::GetKSeq(gsiCOMMAND *this,int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  gsiCOMMAND *pgVar3;
  
  *param_2 = *(int *)(this + param_1 * 0x10 + 0x48);
  pgVar3 = this + param_1 * 0x10 + 0x4c;
  for (uVar1 = *(uint *)(this + param_1 * 0x10 + 0x48) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1)
  {
    *param_3 = *(undefined4 *)pgVar3;
    pgVar3 = pgVar3 + 4;
    param_3 = (int *)((int)param_3 + 4);
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(gsiCOMMAND *)param_3 = *pgVar3;
    pgVar3 = pgVar3 + 1;
    param_3 = (int *)((int)param_3 + 1);
  }
  return;
}




/* from: gs:gs_input.cpp
   addr: 00516230 */

void __thiscall gsiCOMMAND::SetKSeq(gsiCOMMAND *this,int param_1,int param_2,int *param_3)

{
  gsiCOMMAND *pgVar1;
  
  *(int *)(this + param_1 * 0x10 + 0x48) = param_2;
  if (0 < param_2) {
    pgVar1 = this + param_1 * 0x10 + 0x4c;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *(int *)pgVar1 = *param_3;
      param_3 = param_3 + 1;
      pgVar1 = pgVar1 + 4;
    }
  }
  return;
}




/* from: gs:gs_input.cpp
   addr: 00516260 */

int __thiscall gsiCOMMAND::FindKSeq(gsiCOMMAND *this,int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  gsiCOMMAND *pgVar3;
  gsiCOMMAND *pgVar4;
  int local_4;
  
  local_4 = 0;
  pgVar4 = this + 0x4c;
  do {
    if (*(int *)(pgVar4 + -4) == param_1) {
      bVar1 = false;
      iVar2 = 0;
      pgVar3 = pgVar4;
      if (param_1 < 1) {
        return local_4;
      }
      do {
        if (*(int *)pgVar3 != param_2[iVar2]) {
          bVar1 = true;
        }
        iVar2 = iVar2 + 1;
        pgVar3 = pgVar3 + 4;
      } while (iVar2 < param_1);
      if (!bVar1) {
        return local_4;
      }
    }
    pgVar4 = pgVar4 + 0x10;
    local_4 = local_4 + 1;
    if (4 < local_4) {
      return -1;
    }
  } while( true );
}




/* from: gs:gs_input.cpp
   addr: 005162D0 */

void __thiscall gsiCONTEXT::gsiCONTEXT(gsiCONTEXT *this,int param_1,int param_2)

{
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  return;
}




/* from: gs:gs_input.cpp
   addr: 005162F0 */

int __thiscall gsiCONTEXT::Init(gsiCONTEXT *this)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = apCalloc(*(int *)(this + 0xc) - *(int *)(this + 8),0x9c);
  *(void **)(this + 4) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  iVar2 = *(int *)(this + 8);
  if (iVar2 < *(int *)(this + 0xc)) {
    do {
      (**(code **)(*(int *)this + 0x14))
                (iVar2,*(int *)(this + 4) + 4 + (iVar2 - *(int *)(this + 8)) * 0x9c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xc));
  }
  return 1;
}




/* from: gs:gs_input.cpp
   addr: 00516350 */

void __thiscall gsiCONTEXT::Term(gsiCONTEXT *this)

{
  apFree(*(void **)(this + 4));
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}




/* from: gs:gs_input.cpp
   addr: 00516370 */

void __thiscall gsiCONTEXT::Clear(gsiCONTEXT *this)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 8);
  if (iVar2 < *(int *)(this + 0xc)) {
    do {
      puVar1 = (uint *)(*(int *)(this + 4) + (iVar2 - *(int *)(this + 8)) * 0x9c);
      puVar1[0x11] = 0;
      iVar2 = iVar2 + 1;
      *puVar1 = *puVar1 & 0x60;
    } while (iVar2 < *(int *)(this + 0xc));
  }
  return;
}




/* from: gs:gs_input.cpp
   addr: 005163D0 */

int __thiscall gsiCONTEXT::LoadLayout(gsiCONTEXT *this)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  char acStack_12c [300];
  
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  pcVar1 = (char *)(**(code **)(*(int *)this + 0x18))();
  iVar2 = psSHEET::Load((psSHEET *)&local_13c,pcVar1);
  if (iVar2 == 0) {
    psSHEET::Empty((psSHEET *)&local_13c);
    return 0;
  }
  iVar2 = *(int *)(this + 8);
  if (iVar2 < *(int *)(this + 0xc)) {
    do {
      pcVar4 = acStack_12c;
      iVar5 = 300;
      acStack_12c[0] = '\0';
      pcVar1 = (char *)(*(int *)(this + 4) + 4 + (iVar2 - *(int *)(this + 8)) * 0x9c);
      pcVar3 = (char *)(**(code **)(*(int *)this + 0x1c))();
      iVar5 = psSHEET::GetStr((psSHEET *)&local_13c,pcVar3,pcVar1,pcVar4,iVar5);
      if (iVar5 != 0) {
        gsiCOMMAND::Read((gsiCOMMAND *)(*(int *)(this + 4) + (iVar2 - *(int *)(this + 8)) * 0x9c),
                         acStack_12c);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xc));
  }
  psSHEET::Empty((psSHEET *)&local_13c);
  return 1;
}




/* from: gs:gs_input.cpp
   addr: 005164A0 */

int __thiscall gsiCONTEXT::SaveLayout(gsiCONTEXT *this)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int *piStack_144;
  int iStack_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  char acStack_12c [300];
  
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  pcVar1 = (char *)(**(code **)(*(int *)this + 0x18))();
  iVar2 = psSHEET::Load((psSHEET *)&local_13c,pcVar1);
  if (iVar2 != 0) {
    iVar2 = *(int *)(this + 8);
    if (iVar2 < *(int *)(this + 0xc)) {
      do {
        pcVar1 = acStack_12c;
        if ((*(byte *)(*(int *)(this + 4) + (iVar2 - *(int *)(this + 8)) * 0x9c) & 0x20) != 0) {
          acStack_12c[0] = 'd';
          acStack_12c[1] = 0x20;
          acStack_12c[2] = 0;
          pcVar1 = acStack_12c + 2;
        }
        piVar6 = (int *)(*(int *)(this + 4) + (iVar2 - *(int *)(this + 8)) * 0x9c + 0x48);
        iStack_140 = 5;
        do {
          iVar3 = sprintf(pcVar1,s___);
          iVar7 = 0;
          piStack_144 = piVar6;
          if (0 < *piVar6) {
            do {
              piStack_144 = piStack_144 + 1;
              iVar4 = sprintf(pcVar1 + iVar3,s__0x_X,*piStack_144);
              iVar3 = iVar3 + iVar4;
              iVar7 = iVar7 + 1;
            } while (iVar7 < *piVar6);
          }
          iVar7 = sprintf(pcVar1 + iVar3,s___);
          pcVar1 = pcVar1 + iVar7 + iVar3;
          piVar6 = piVar6 + 4;
          iStack_140 = iStack_140 + -1;
        } while (iStack_140 != 0);
        pcVar8 = acStack_12c;
        pcVar1 = (char *)(*(int *)(this + 4) + 4 + (iVar2 - *(int *)(this + 8)) * 0x9c);
        pcVar5 = (char *)(**(code **)(*(int *)this + 0x1c))();
        psSHEET::SetStr((psSHEET *)&local_13c,pcVar5,pcVar1,pcVar8);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0xc));
    }
    pcVar1 = (char *)(**(code **)(*(int *)this + 0x18))();
    psSHEET::Save((psSHEET *)&local_13c,pcVar1);
    psSHEET::Empty((psSHEET *)&local_13c);
    return 1;
  }
  psSHEET::Empty((psSHEET *)&local_13c);
  return 0;
}




/* from: gs:gs_input.cpp
   addr: 00516640 */

void __thiscall
gsiCONTEXT_CINEMATIC::GetCmdName(gsiCONTEXT_CINEMATIC *this,int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = s_ABORT_CIN;
    do {
      cVar1 = *pcVar2;
      (param_2 + -0x5f7984)[(int)pcVar2] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}




/* from: gs:gs_input.cpp
   addr: 00516660 */

int __thiscall gsiCONTEXT_CINEMATIC::LoadLayout(gsiCONTEXT_CINEMATIC *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4) + *(int *)(this + 8) * -0x9c;
  *(undefined4 *)(iVar1 + 0x48) = 1;
  *(undefined4 *)(iVar1 + 0x4c) = 1;
  *(undefined4 *)(iVar1 + 0x58) = 1;
  *(undefined4 *)(iVar1 + 0x5c) = 0x39;
  return 1;
}




/* from: gs:gs_input.cpp
   addr: 005166A0 */

gsINP_SYSTEM * __thiscall gsINP_SYSTEM::gsINP_SYSTEM(gsINP_SYSTEM *this)

{
  int iVar1;
  gsINP_SYSTEM *pgVar2;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x4d414452;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x1c) = 0xf;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  pgVar2 = this + 0x44;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pgVar2 = 0;
    pgVar2 = pgVar2 + 4;
  }
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  return this;
}




/* from: gs:gs_input.cpp
   addr: 00516700
   addr: 00516700 */

void * __thiscall gsINP_SYSTEM::_scalar_deleting_destructor_(gsINP_SYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_input.cpp
   addr: 00516740 */

int __thiscall
gsINP_SYSTEM::ProcessMsg(gsINP_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (param_1 != 2) {
    if (param_1 == 1000) {
      (**(code **)(*(int *)this + 0x18))();
    }
    return 0;
  }
  return 1;
}




/* from: gs:gs_input.cpp
   addr: 00516770 */

int __thiscall gsINP_SYSTEM::Init(gsINP_SYSTEM *this)

{
  inpINPUT *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  gsINP_SYSTEM *pgVar5;
  gsINP_SYSTEM *pgVar6;
  byte bStack_c;
  int local_8 [2];
  
  piVar1 = inpINPUT::Make();
  *(inpINPUT **)(this + 0x3c) = piVar1;
  if (piVar1 != (inpINPUT *)0x0) {
    (**(code **)(*(int *)piVar1 + 4))();
    if (((bStack_c & 1) != 0) && ((bStack_c & 2) != 0)) {
      iVar2 = _apCfgReadBool((void **)0x0,s_Input,s_HideMouse,local_8);
      if ((iVar2 == 0) || (local_8[0] == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
      }
      (**(code **)(**(int **)(this + 0x3c) + 0x10))(_apHMainWindow);
      pgVar6 = this + 0x44;
      pgVar5 = pgVar6;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(int *)pgVar5 = 0;
        pgVar5 = pgVar5 + 4;
      }
      (**(code **)(*(int *)this + 0x24))();
      iVar3 = 8;
      pgVar5 = pgVar6;
      do {
        if (*(int **)pgVar5 != (int *)0x0) {
          (**(code **)(**(int **)pgVar5 + 4))();
        }
        pgVar5 = pgVar5 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar4 = 0;
      do {
        if (*(int **)pgVar6 != (int *)0x0) {
          iVar3 = (**(code **)(**(int **)pgVar6 + 0x20))();
          if (iVar3 == 0) break;
        }
        uVar4 = uVar4 + 1;
        pgVar6 = pgVar6 + 4;
      } while (uVar4 < 8);
      uVar4 = 3;
      iVar3 = _apCfgReadBool((void **)0x0,s_Input,s_SyncState,(int *)&stack0xffffffe8);
      if ((iVar3 != 0) && (iVar2 != 0)) {
        uVar4 = 0x23;
      }
      iVar3 = _apCfgReadBool((void **)0x0,s_Input,s_UseJoy,(int *)&stack0xffffffe8);
      if ((iVar3 != 0) && (iVar2 != 0)) {
        uVar4 = uVar4 | 4;
      }
      *(uint *)(*(int *)(this + 0x3c) + 4) = uVar4;
      ApplyMouseSettings(this);
      msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)this,0x24494e50,0);
      (**(code **)(*(int *)this + 0x20))();
      return 1;
    }
  }
  return 0;
}




/* from: gs:gs_input.cpp
   addr: 005168C0 */

void __thiscall gsINP_SYSTEM::Term(gsINP_SYSTEM *this)

{
  int iVar1;
  gsINP_SYSTEM *pgVar2;
  
  msgSYSTEM::RemoveAddr(&msgSystem,(msgADDR *)this);
  pgVar2 = this + 0x44;
  iVar1 = 8;
  do {
    if (*(int *)pgVar2 != 0) {
      (**(code **)(*(int *)this + 0x28))(*(int *)pgVar2);
      *(int *)pgVar2 = 0;
    }
    pgVar2 = pgVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (**(code **)(**(int **)(this + 0x3c) + 8))();
  if (*(undefined4 **)(this + 0x3c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x3c))(1);
  }
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}




/* from: gs:gs_input.cpp
   addr: 00516920 */

gsiCONTEXT * __thiscall gsINP_SYSTEM::GetCtxByName(gsINP_SYSTEM *this,char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  gsINP_SYSTEM *pgVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = 0;
  pgVar4 = this + 0x44;
  do {
    if (*(int **)pgVar4 != (int *)0x0) {
      pbVar2 = (byte *)(**(code **)(**(int **)pgVar4 + 0x10))();
      pbVar5 = (byte *)param_1;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00516964:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00516969;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00516964;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00516969:
      if (iVar3 == 0) {
        return *(gsiCONTEXT **)(this + uVar6 * 4 + 0x44);
      }
    }
    uVar6 = uVar6 + 1;
    pgVar4 = pgVar4 + 4;
    if (7 < uVar6) {
      return (gsiCONTEXT *)0x0;
    }
  } while( true );
}




/* from: gs:gs_input.cpp
   addr: 00516990 */

void __thiscall gsINP_SYSTEM::SetCurCtx(gsINP_SYSTEM *this,gsiCONTEXT *param_1)

{
  uint uVar1;
  gsINP_SYSTEM *pgVar2;
  
  uVar1 = 0;
  pgVar2 = this + 0x44;
  do {
    if (*(gsiCONTEXT **)pgVar2 == param_1) break;
    uVar1 = uVar1 + 1;
    pgVar2 = pgVar2 + 4;
  } while (uVar1 < 8);
  if (uVar1 != 8) {
    if (*(int **)(this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x40) + 0xc))();
    }
    *(gsiCONTEXT **)(this + 0x40) = param_1;
    if (param_1 != (gsiCONTEXT *)0x0) {
      (**(code **)(*(int *)param_1 + 0xc))();
    }
  }
  return;
}




/* from: gs:gs_input.cpp
   addr: 005169D0 */

void __thiscall gsINP_SYSTEM::SetDefCtx(gsINP_SYSTEM *this)

{
  int *piVar1;
  uint uVar2;
  gsINP_SYSTEM *pgVar3;
  gsINP_SYSTEM *pgVar4;
  
  uVar2 = 0;
  pgVar3 = this + 0x44;
  pgVar4 = pgVar3;
  do {
    if (*(int *)pgVar4 != 0) break;
    uVar2 = uVar2 + 1;
    pgVar4 = pgVar4 + 4;
  } while (uVar2 < 8);
  piVar1 = *(int **)(this + uVar2 * 4 + 0x44);
  uVar2 = 0;
  do {
    if (*(int **)pgVar3 == piVar1) break;
    uVar2 = uVar2 + 1;
    pgVar3 = pgVar3 + 4;
  } while (uVar2 < 8);
  if (uVar2 != 8) {
    if (*(int **)(this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x40) + 0xc))();
    }
    *(int **)(this + 0x40) = piVar1;
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00516a1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0xc))();
      return;
    }
  }
  return;
}




/* from: gs:gs_input.cpp
   addr: 00516A20 */

void __thiscall gsINP_SYSTEM::AddCtxes(gsINP_SYSTEM *this)

{
  uint uVar1;
  undefined4 *puVar2;
  gsINP_SYSTEM *pgVar3;
  
  uVar1 = 0;
  pgVar3 = this + 0x44;
  do {
    if (*(int *)pgVar3 == 0) goto LAB_00516a3a;
    uVar1 = uVar1 + 1;
    pgVar3 = pgVar3 + 4;
  } while (uVar1 < 8);
  uVar1 = 0xffffffff;
LAB_00516a3a:
  puVar2 = (undefined4 *)operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(this + uVar1 * 4 + 0x44) = 0;
    return;
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 1;
  *puVar2 = &gsiCONTEXT_CINEMATIC::_vftable_;
  *(undefined4 **)(this + uVar1 * 4 + 0x44) = puVar2;
  return;
}




/* from: gs:gs_input.cpp
   addr: 00516A80 */

void __thiscall gsINP_SYSTEM::DestroyCtx(gsINP_SYSTEM *this,gsiCONTEXT *param_1)

{
  gsiCONTEXT *pgVar1;
  uint uVar2;
  gsINP_SYSTEM *pgVar3;
  gsINP_SYSTEM *pgVar4;
  
  if (param_1 != (gsiCONTEXT *)0x0) {
    pgVar4 = this + 0x44;
    uVar2 = 0;
    pgVar3 = pgVar4;
    while (param_1 != *(gsiCONTEXT **)pgVar3) {
      uVar2 = uVar2 + 1;
      pgVar3 = pgVar3 + 4;
      if (7 < uVar2) {
        return;
      }
    }
    *(undefined4 *)(this + uVar2 * 4 + 0x44) = 0;
    pgVar1 = *(gsiCONTEXT **)(this + 0x40);
    if (pgVar1 == param_1) {
      uVar2 = 0;
      do {
        if (*(int *)pgVar4 == 0) break;
        uVar2 = uVar2 + 1;
        pgVar4 = pgVar4 + 4;
      } while (uVar2 < 8);
      if (uVar2 != 8) {
        if (pgVar1 != (gsiCONTEXT *)0x0) {
          (**(code **)(*(int *)pgVar1 + 0xc))();
        }
        *(undefined4 *)(this + 0x40) = 0;
      }
    }
    (**(code **)(*(int *)param_1 + 8))();
    (*(code *)**(undefined4 **)param_1)(1);
  }
  return;
}




/* from: gs:gs_input.cpp
   addr: 00516AF0 */

int __thiscall gsINP_SYSTEM::FindFreeCtxIdx(gsINP_SYSTEM *this)

{
  uint uVar1;
  gsINP_SYSTEM *pgVar2;
  
  uVar1 = 0;
  pgVar2 = this + 0x44;
  do {
    if (*(int *)pgVar2 == 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    pgVar2 = pgVar2 + 4;
  } while (uVar1 < 8);
  return -1;
}




/* from: gs:gs_input.cpp
   addr: 00516B10 */

int __thiscall gsINP_SYSTEM::SaveLayout(gsINP_SYSTEM *this)

{
  int iVar1;
  gsINP_SYSTEM *pgVar2;
  uint uVar3;
  
  uVar3 = 0;
  pgVar2 = this + 0x44;
  do {
    if (*(int **)pgVar2 != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)pgVar2 + 0x24))();
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = uVar3 + 1;
    pgVar2 = pgVar2 + 4;
  } while (uVar3 < 8);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_input.cpp
   addr: 00516B40 */

void __thiscall gsINP_SYSTEM::ProcessInput(gsINP_SYSTEM *this)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fStack_4;
  
  iVar6 = *(int *)(this + 0x40);
  iVar5 = *(int *)(iVar6 + 8);
  if (iVar5 < *(int *)(iVar6 + 0xc)) {
    do {
      puVar1 = (uint *)(*(int *)(iVar6 + 4) + (iVar5 - *(int *)(iVar6 + 8)) * 0x9c);
      puVar1[0x11] = 0;
      iVar5 = iVar5 + 1;
      *puVar1 = *puVar1 & 0x60;
      iVar6 = *(int *)(this + 0x40);
    } while (iVar5 < *(int *)(iVar6 + 0xc));
  }
  inpINPUT::GetInput(*(inpINPUT **)(this + 0x3c));
  iVar6 = 3;
  do {
    iVar5 = *(int *)(this + 0x40);
    iVar7 = *(int *)(iVar5 + 8);
    if (iVar7 < *(int *)(iVar5 + 0xc)) {
      do {
        if ((*(byte *)(*(int *)(iVar5 + 4) + (iVar7 - *(int *)(iVar5 + 8)) * 0x9c) & 0x60) == 0) {
          gsiCOMMAND::GetInput
                    ((gsiCOMMAND *)(*(int *)(iVar5 + 4) + (iVar7 - *(int *)(iVar5 + 8)) * 0x9c),
                     *(inpINPUT **)(this + 0x3c),iVar6,1);
        }
        iVar5 = *(int *)(this + 0x40);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar5 + 0xc));
    }
    iVar5 = *(int *)(this + 0x40);
    iVar7 = *(int *)(iVar5 + 8);
    if (iVar7 < *(int *)(iVar5 + 0xc)) {
      do {
        if ((*(byte *)(*(int *)(iVar5 + 4) + (iVar7 - *(int *)(iVar5 + 8)) * 0x9c) & 0x60) != 0) {
          gsiCOMMAND::GetInput
                    ((gsiCOMMAND *)(*(int *)(iVar5 + 4) + (iVar7 - *(int *)(iVar5 + 8)) * 0x9c),
                     *(inpINPUT **)(this + 0x3c),iVar6,1);
        }
        iVar5 = *(int *)(this + 0x40);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar5 + 0xc));
    }
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  uVar2 = *(uint *)(this + 0x28);
  *(uint *)(this + 0x28) = uVar2 & 0xfffffffd;
  *(uint *)(this + 0x28) = uVar2 & 0xfffffffc;
  iVar6 = (**(code **)(**(int **)(this + 0x40) + 0x30))();
  if ((iVar6 == -1) || (iVar6 = (**(code **)(**(int **)(this + 0x40) + 0x2c))(), iVar6 == -1)) {
LAB_00516cef:
    *(undefined4 *)(this + 0x34) = 0;
  }
  else {
    iVar6 = (**(code **)(**(int **)(this + 0x40) + 0x30))();
    piVar8 = *(int **)(this + 0x40);
    if ((iVar6 < piVar8[2]) ||
       ((piVar8[3] <= iVar6 || ((*(uint *)(piVar8[1] + (iVar6 - piVar8[2]) * 0x9c) & 1) == 0)))) {
      iVar6 = (**(code **)(*piVar8 + 0x2c))();
      piVar8 = *(int **)(this + 0x40);
      if ((iVar6 < piVar8[2]) ||
         ((piVar8[3] <= iVar6 || ((*(uint *)(piVar8[1] + (iVar6 - piVar8[2]) * 0x9c) & 1) == 0)))) {
        iVar6 = (**(code **)(*piVar8 + 0x3c))();
        if (*(int *)(this + 0x68) < iVar6) {
          *(undefined4 *)(this + 0x2c) = 0x3f000000;
          *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
        }
        goto LAB_00516cef;
      }
    }
    iVar6 = (**(code **)(*piVar8 + 0x30))();
    if ((*(byte *)(piVar8[1] + (iVar6 - piVar8[2]) * 0x9c) & 8) == 0) {
      piVar8 = *(int **)(this + 0x40);
      iVar6 = (**(code **)(*piVar8 + 0x2c))();
      if ((*(byte *)(piVar8[1] + (iVar6 - piVar8[2]) * 0x9c) & 8) == 0) {
        iVar6 = (**(code **)(**(int **)(this + 0x40) + 0x30))();
        piVar8 = *(int **)(this + 0x40);
        if ((iVar6 < piVar8[2]) || (piVar8[3] <= iVar6)) {
          fStack_4 = 0.0;
        }
        else {
          fStack_4 = *(float *)(piVar8[1] + 0x44 + (iVar6 - piVar8[2]) * 0x9c);
        }
        iVar5 = (**(code **)(*piVar8 + 0x2c))();
        iVar6 = *(int *)(this + 0x40);
        fVar4 = ___real_00000000;
        if ((*(int *)(iVar6 + 8) <= iVar5) && (iVar5 < *(int *)(iVar6 + 0xc))) {
          fVar4 = *(float *)(*(int *)(iVar6 + 4) + 0x44 + (iVar5 - *(int *)(iVar6 + 8)) * 0x9c);
        }
        fStack_4 = ___real_3f800000 - fStack_4;
        *(undefined4 *)(this + 0x34) = 0;
        *(float *)(this + 0x2c) = (fStack_4 + fVar4) * ___real_3f000000;
        *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
        *(undefined4 *)(this + 0x68) = 0;
        goto LAB_00516cf6;
      }
    }
    iVar6 = (**(code **)(**(int **)(this + 0x40) + 0x30))();
    piVar8 = *(int **)(this + 0x40);
    if ((iVar6 < piVar8[2]) || (piVar8[3] <= iVar6)) {
      fStack_4 = 0.0;
    }
    else {
      fStack_4 = *(float *)(piVar8[1] + 0x44 + (iVar6 - piVar8[2]) * 0x9c);
    }
    iVar5 = (**(code **)(*piVar8 + 0x2c))();
    iVar6 = *(int *)(this + 0x40);
    fVar4 = ___real_00000000;
    if ((*(int *)(iVar6 + 8) <= iVar5) && (iVar5 < *(int *)(iVar6 + 0xc))) {
      fVar4 = *(float *)(*(int *)(iVar6 + 4) + 0x44 + (iVar5 - *(int *)(iVar6 + 8)) * 0x9c);
    }
    *(float *)(this + 0x34) = fVar4 - fStack_4;
    fVar4 = (fVar4 - fStack_4) + *(float *)(this + 0x2c);
    bVar3 = ___real_00000000 <= fVar4;
    *(float *)(this + 0x2c) = fVar4;
    if (bVar3) {
      if (___real_3f800000 < fVar4) {
        fVar4 = ___real_3f800000;
      }
      *(float *)(this + 0x2c) = fVar4;
    }
    else {
      *(float *)(this + 0x2c) = ___real_00000000;
    }
  }
LAB_00516cf6:
  iVar6 = (**(code **)(**(int **)(this + 0x40) + 0x38))();
  if ((iVar6 == -1) || (iVar6 = (**(code **)(**(int **)(this + 0x40) + 0x34))(), iVar6 == -1)) {
LAB_00517093:
    *(undefined4 *)(this + 0x38) = 0;
  }
  else {
    iVar6 = (**(code **)(**(int **)(this + 0x40) + 0x38))();
    piVar8 = *(int **)(this + 0x40);
    if ((iVar6 < piVar8[2]) ||
       ((piVar8[3] <= iVar6 || ((*(uint *)(piVar8[1] + (iVar6 - piVar8[2]) * 0x9c) & 1) == 0)))) {
      iVar6 = (**(code **)(*piVar8 + 0x34))();
      piVar8 = *(int **)(this + 0x40);
      if ((iVar6 < piVar8[2]) ||
         ((piVar8[3] <= iVar6 || ((*(uint *)(piVar8[1] + (iVar6 - piVar8[2]) * 0x9c) & 1) == 0)))) {
        iVar6 = (**(code **)(*piVar8 + 0x3c))();
        if (*(int *)(this + 0x6c) < iVar6) {
          *(undefined4 *)(this + 0x30) = 0x3f000000;
          *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
        }
        goto LAB_00517093;
      }
    }
    iVar6 = (**(code **)(*piVar8 + 0x38))();
    if ((*(byte *)(piVar8[1] + (iVar6 - piVar8[2]) * 0x9c) & 8) == 0) {
      piVar8 = *(int **)(this + 0x40);
      iVar6 = (**(code **)(*piVar8 + 0x34))();
      if ((*(byte *)(piVar8[1] + (iVar6 - piVar8[2]) * 0x9c) & 8) == 0) {
        iVar6 = (**(code **)(**(int **)(this + 0x40) + 0x38))();
        piVar8 = *(int **)(this + 0x40);
        if ((iVar6 < piVar8[2]) || (piVar8[3] <= iVar6)) {
          fStack_4 = 0.0;
        }
        else {
          fStack_4 = *(float *)(piVar8[1] + 0x44 + (iVar6 - piVar8[2]) * 0x9c);
        }
        iVar5 = (**(code **)(*piVar8 + 0x34))();
        iVar6 = *(int *)(this + 0x40);
        fVar4 = ___real_00000000;
        if ((*(int *)(iVar6 + 8) <= iVar5) && (iVar5 < *(int *)(iVar6 + 0xc))) {
          fVar4 = *(float *)(*(int *)(iVar6 + 4) + 0x44 + (iVar5 - *(int *)(iVar6 + 8)) * 0x9c);
        }
        fStack_4 = ___real_3f800000 - fStack_4;
        *(undefined4 *)(this + 0x38) = 0;
        *(float *)(this + 0x30) = (fStack_4 + fVar4) * ___real_3f000000;
        *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
        *(undefined4 *)(this + 0x6c) = 0;
        goto LAB_0051709a;
      }
    }
    iVar6 = (**(code **)(**(int **)(this + 0x40) + 0x38))();
    piVar8 = *(int **)(this + 0x40);
    if ((iVar6 < piVar8[2]) || (piVar8[3] <= iVar6)) {
      fStack_4 = 0.0;
    }
    else {
      fStack_4 = *(float *)(piVar8[1] + 0x44 + (iVar6 - piVar8[2]) * 0x9c);
    }
    iVar5 = (**(code **)(*piVar8 + 0x34))();
    iVar6 = *(int *)(this + 0x40);
    fVar4 = ___real_00000000;
    if ((*(int *)(iVar6 + 8) <= iVar5) && (iVar5 < *(int *)(iVar6 + 0xc))) {
      fVar4 = *(float *)(*(int *)(iVar6 + 4) + 0x44 + (iVar5 - *(int *)(iVar6 + 8)) * 0x9c);
    }
    *(float *)(this + 0x38) = fVar4 - fStack_4;
    fVar4 = (fVar4 - fStack_4) + *(float *)(this + 0x30);
    bVar3 = ___real_00000000 <= fVar4;
    *(float *)(this + 0x30) = fVar4;
    if (bVar3) {
      if (___real_3f800000 < fVar4) {
        fVar4 = ___real_3f800000;
      }
      *(float *)(this + 0x30) = fVar4;
    }
    else {
      *(float *)(this + 0x30) = ___real_00000000;
    }
  }
LAB_0051709a:
  *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
  *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
  iVar6 = (**(code **)(**(int **)(this + 0x40) + 0x28))();
  if (iVar6 != -1) {
    iVar5 = (**(code **)(**(int **)(this + 0x40) + 0x28))();
    iVar6 = *(int *)(this + 0x40);
    if (((((*(int *)(iVar6 + 8) <= iVar5) && (iVar5 < *(int *)(iVar6 + 0xc))) &&
         (*(int *)(iVar6 + 8) <= iVar5)) &&
        ((iVar5 < *(int *)(iVar6 + 0xc) &&
         ((*(uint *)(*(int *)(iVar6 + 4) + (iVar5 - *(int *)(iVar6 + 8)) * 0x9c) & 1) != 0)))) &&
       ((*(int *)(iVar6 + 8) <= iVar5 &&
        ((iVar5 < *(int *)(iVar6 + 0xc) &&
         ((*(uint *)(*(int *)(iVar6 + 4) + (iVar5 - *(int *)(iVar6 + 8)) * 0x9c) & 2) != 0)))))) {
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
    }
  }
  return;
}




/* from: gs:gs_input.cpp
   addr: 00517140 */

void __thiscall gsINP_SYSTEM::ApplyMouseSettings(gsINP_SYSTEM *this)

{
  int iVar1;
  char *pcVar2;
  float local_8;
  int local_4;
  
  if (*(int *)(this + 100) == 0) {
    pcVar2 = s_MouseSens;
  }
  else {
    pcVar2 = s_MouseSensIface;
  }
  iVar1 = _apCfgReadFloat((void **)0x0,s_Input,pcVar2,&local_8);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(this + 0x3c) + 0x14))(local_8);
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Input,s_InvertMouse,&local_4);
  if (((iVar1 != 0) && (local_4 != 0)) && (*(int *)(this + 100) == 0)) {
    *(uint *)(*(int *)(this + 0x3c) + 4) = *(uint *)(*(int *)(this + 0x3c) + 4) | 0x80;
    return;
  }
  *(uint *)(*(int *)(this + 0x3c) + 4) = *(uint *)(*(int *)(this + 0x3c) + 4) & 0xffffff7f;
  return;
}




/* from: gs:gs_input.cpp
   addr: 005171E0 */

int __thiscall gsINP_SYSTEM::ApplySettings(gsINP_SYSTEM *this)

{
  int iVar1;
  gsINP_SYSTEM *pgVar2;
  uint uVar3;
  gsINP_SYSTEM *pgStack_4;
  
  uVar3 = 0;
  pgVar2 = this + 0x44;
  pgStack_4 = this;
  do {
    if (*(int **)pgVar2 != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)pgVar2 + 0x20))();
      if (iVar1 == 0) break;
    }
    uVar3 = uVar3 + 1;
    pgVar2 = pgVar2 + 4;
  } while (uVar3 < 8);
  uVar3 = 3;
  iVar1 = _apCfgReadBool((void **)0x0,s_Input,s_SyncState,(int *)&pgStack_4);
  if ((iVar1 != 0) && (pgStack_4 != (gsINP_SYSTEM *)0x0)) {
    uVar3 = 0x23;
  }
  iVar1 = _apCfgReadBool((void **)0x0,s_Input,s_UseJoy,(int *)&pgStack_4);
  if ((iVar1 != 0) && (pgStack_4 != (gsINP_SYSTEM *)0x0)) {
    uVar3 = uVar3 | 4;
  }
  *(uint *)(*(int *)(this + 0x3c) + 4) = uVar3;
  ApplyMouseSettings(this);
  return 1;
}

