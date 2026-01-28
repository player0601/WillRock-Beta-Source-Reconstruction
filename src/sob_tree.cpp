
/* from: sob_tree.cpp
   addr: 00480060 */

int __fastcall wrsobInitTree(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sob_tree,0x54524545,0x28,wrsobTREE::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: sob_tree.cpp
   addr: 00480090 */

void __thiscall wrsobTREE::InitLeaves(wrsobTREE *this,objOBJ *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  objMOD_BILLBOARD *this_00;
  int *piVar4;
  uint uVar5;
  objOBJ *local_10;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  local_10 = param_1;
  objOBJ_ITER::Rewind((objOBJ_ITER *)&local_10);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  do {
    if ((local_c == (objOBJ *)0x0) || ((local_4 != 0 && (local_8 == local_c)))) {
      return;
    }
    uVar5 = 0xffffffff;
    pcVar3 = s_leaves_root;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar2 = strncmp(*(char **)(local_8 + 0x18),s_leaves_root,~uVar5 - 1);
    if (iVar2 == 0) {
      pcVar3 = strstr(*(char **)(local_8 + 0x18),s__v);
      if (pcVar3 == (char *)0x0) {
        InitLeaves(this,local_8,0);
      }
      else {
        InitLeaves(this,local_8,1);
      }
    }
    else {
      this_00 = (objMOD_BILLBOARD *)operator_new(0x9c);
      if (this_00 == (objMOD_BILLBOARD *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)objMOD_BILLBOARD::objMOD_BILLBOARD(this_00);
      }
      piVar4[1] = piVar4[1] | 0x4000;
      (**(code **)(*piVar4 + 4))(local_8);
      if (param_2 != 0) {
        piVar4[1] = piVar4[1] | 0x2000;
      }
      objOBJ::SetStateProcYes(local_8,0x40000,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      *(uint *)local_8 = *(uint *)local_8 | 0x20;
      *(uint *)local_8 = *(uint *)local_8 | 4;
    }
    local_4 = 1;
    local_8 = *(objOBJ **)(local_8 + 0x30);
  } while( true );
}




/* from: sob_tree.cpp
   addr: 004801C0 */

void __thiscall wrsobTREE::InitLeavesRoot(wrsobTREE *this,objOBJ *param_1)

{
  char cVar1;
  objOBJ *poVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  objOBJ *poVar7;
  
  if (param_1 != (objOBJ *)0x0) {
    poVar2 = *(objOBJ **)(param_1 + 0x38);
    bVar3 = false;
    poVar7 = poVar2;
    if (*(char **)(param_1 + 0x18) != (char *)0x0) {
      uVar6 = 0xffffffff;
      pcVar5 = s_leaves_root;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = strncmp(*(char **)(param_1 + 0x18),s_leaves_root,~uVar6 - 1);
      if (iVar4 == 0) {
        pcVar5 = strstr(*(char **)(param_1 + 0x18),s__v);
        if (pcVar5 != (char *)0x0) {
          InitLeaves(this,param_1,1);
          return;
        }
        InitLeaves(this,param_1,0);
        return;
      }
    }
    for (; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (poVar7 != poVar2))));
        poVar7 = *(objOBJ **)(poVar7 + 0x30)) {
      InitLeavesRoot(this,poVar7);
      bVar3 = true;
    }
  }
  return;
}




/* from: sob_tree.cpp
   addr: 00480270 */

int __thiscall
wrsobTREE::ProcessMsg(wrsobTREE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == 1) {
    InitLeavesRoot(this,*(objOBJ **)(*(int *)(this + 0xbc) + 0x10));
    local_10 = 10;
    local_14 = 10;
    local_18 = 10;
    local_4 = 0x3f800000;
    local_8 = 0x3f800000;
    local_c = 0x3f800000;
    animINST::CDTInit(*(animINST **)(this + 0xbc),(m3dV *)&local_c,(m3dVINT *)&local_18,(char *)0x0,
                      0.0);
  }
  return 0;
}




/* from: sob_tree.cpp
   addr: 00480300 */

entENTITY * __fastcall wrsobTREE::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x14f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sob_tree.cpp
   addr: 00480330
   addr: 00480330 */

void * __thiscall wrsobTREE::_vector_deleting_destructor_(wrsobTREE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

