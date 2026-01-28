
/* from: gs_shared:ai_ctrl_script.cpp
   addr: 00538970 */

int __thiscall aiNPC::GetStr(aiNPC *this,char *param_1,char *param_2,char *param_3,int param_4)

{
  psSHEET *ppVar1;
  int iVar2;
  
  if (*(int *)(this + 0x49f) != 0) {
    iVar2 = *(int *)(*(int *)(this + 0x49f) + 0xd8 + *(int *)(this + 0x4a3) * 4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -0x94;
    }
    ppVar1 = *(psSHEET **)(*(int *)(iVar2 + 200) + 0xf0);
    if (ppVar1 != (psSHEET *)0x0) {
      iVar2 = psSHEET::GetStr(ppVar1,param_1,param_2,param_3,param_4);
      if (iVar2 != 0) {
        return 1;
      }
    }
    ppVar1 = *(psSHEET **)(*(int *)(*(int *)(this + 0x49f) + 200) + 0xf0);
    if (ppVar1 != (psSHEET *)0x0) {
      iVar2 = psSHEET::GetStr(ppVar1,param_1,param_2,param_3,param_4);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  iVar2 = animINST::GetStr(*(animINST **)(this + 0xbc),param_1,param_2,param_3,param_4);
  return iVar2;
}




/* from: gs_shared:ai_ctrl_script.cpp
   addr: 00538A20 */

int __thiscall aiNPC::GetInt(aiNPC *this,char *param_1,char *param_2,int *param_3)

{
  psSHEET *ppVar1;
  int iVar2;
  
  if (*(int *)(this + 0x49f) != 0) {
    iVar2 = *(int *)(*(int *)(this + 0x49f) + 0xd8 + *(int *)(this + 0x4a3) * 4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -0x94;
    }
    ppVar1 = *(psSHEET **)(*(int *)(iVar2 + 200) + 0xf0);
    if (ppVar1 != (psSHEET *)0x0) {
      iVar2 = psSHEET::GetInt(ppVar1,param_1,param_2,param_3);
      if (iVar2 != 0) {
        return 1;
      }
    }
    ppVar1 = *(psSHEET **)(*(int *)(*(int *)(this + 0x49f) + 200) + 0xf0);
    if (ppVar1 != (psSHEET *)0x0) {
      iVar2 = psSHEET::GetInt(ppVar1,param_1,param_2,param_3);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  iVar2 = animINST::GetInt(*(animINST **)(this + 0xbc),param_1,param_2,param_3);
  return iVar2;
}




/* from: gs_shared:ai_ctrl_script.cpp
   addr: 00538AD0 */

int __thiscall aiNPC::GetFloat(aiNPC *this,char *param_1,char *param_2,float *param_3)

{
  psSHEET *ppVar1;
  int iVar2;
  
  if (*(int *)(this + 0x49f) != 0) {
    iVar2 = *(int *)(*(int *)(this + 0x49f) + 0xd8 + *(int *)(this + 0x4a3) * 4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -0x94;
    }
    ppVar1 = *(psSHEET **)(*(int *)(iVar2 + 200) + 0xf0);
    if (ppVar1 != (psSHEET *)0x0) {
      iVar2 = psSHEET::GetFloat(ppVar1,param_1,param_2,param_3);
      if (iVar2 != 0) {
        return 1;
      }
    }
    ppVar1 = *(psSHEET **)(*(int *)(*(int *)(this + 0x49f) + 200) + 0xf0);
    if (ppVar1 != (psSHEET *)0x0) {
      iVar2 = psSHEET::GetFloat(ppVar1,param_1,param_2,param_3);
      return iVar2;
    }
  }
  iVar2 = animINST::GetFloat(*(animINST **)(this + 0xbc),param_1,param_2,param_3);
  return iVar2;
}




/* from: gs_shared:ai_ctrl_script.cpp
   addr: 00538B70 */

int __thiscall aiNPC::GetBool(aiNPC *this,char *param_1,char *param_2,int *param_3)

{
  psSHEET *ppVar1;
  int iVar2;
  
  if (*(int *)(this + 0x49f) != 0) {
    iVar2 = *(int *)(*(int *)(this + 0x49f) + 0xd8 + *(int *)(this + 0x4a3) * 4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -0x94;
    }
    ppVar1 = *(psSHEET **)(*(int *)(iVar2 + 200) + 0xf0);
    if (ppVar1 != (psSHEET *)0x0) {
      iVar2 = psSHEET::GetBool(ppVar1,param_1,param_2,param_3);
      if (iVar2 != 0) {
        return 1;
      }
    }
    ppVar1 = *(psSHEET **)(*(int *)(*(int *)(this + 0x49f) + 200) + 0xf0);
    if (ppVar1 != (psSHEET *)0x0) {
      iVar2 = psSHEET::GetBool(ppVar1,param_1,param_2,param_3);
      return iVar2;
    }
  }
  iVar2 = animINST::GetBool(*(animINST **)(this + 0xbc),param_1,param_2,param_3);
  return iVar2;
}




/* from: gs_shared:ai_ctrl_script.cpp
   addr: 00538C10 */

char * __thiscall aiNPC::GetLogableName(aiNPC *this)

{
  char *pcVar1;
  
  if (((*(uint *)(this + 1099) & 0x100000) != 0) && (*(int *)(this + 0x49f) != 0)) {
    return (char *)(*(int *)(this + 0x49f) + 0x44);
  }
  pcVar1 = *(char **)(*(int *)(this + 0xbc) + 0x18);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_;
  }
  return pcVar1;
}

