
/* from: gs:gs_mp_conn.cpp
   addr: 00529F00 */

gsMP_CONNECTION * __thiscall gsMP_CONNECTION::gsMP_CONNECTION(gsMP_CONNECTION *this)

{
  undefined4 *puVar1;
  
  *(undefined ***)this = &_vftable_;
  puVar1 = (undefined4 *)operator_new(300);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    puVar1[0x4a] = 0;
    *puVar1 = &fioFILE_MEM::_vftable_;
    *(undefined4 **)(this + 0x404) = puVar1;
    return this;
  }
  *(undefined4 *)(this + 0x404) = 0;
  return this;
}




/* from: gs:gs_mp_conn.cpp
   addr: 00529F70
   addr: 00529F70 */

void * __thiscall gsMP_CONNECTION::_scalar_deleting_destructor_(gsMP_CONNECTION *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x404) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x404))(1);
  }
  *(undefined4 *)(this + 0x404) = 0;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_mp_conn.cpp
   addr: 00529FB0 */

void __thiscall gsMP_CONNECTION::~gsMP_CONNECTION(gsMP_CONNECTION *this)

{
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x404) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x404))(1);
  }
  *(undefined4 *)(this + 0x404) = 0;
  return;
}




/* from: gs:gs_mp_conn.cpp
   addr: 00529FE0 */

void __thiscall gsMP_CONNECTION::Pack(gsMP_CONNECTION *this,gsMSG_MP_WRAP *param_1)

{
  gsMP_CONNECTION *pgVar1;
  
  pgVar1 = this + 4;
  (**(code **)(**(int **)(this + 0x404) + 0x1c))(pgVar1,0x400,0x12);
  (**(code **)(**(int **)(this + 0x404) + 0x18))(&DAT_005f89e4,1,1);
  (**(code **)(**(int **)(this + 0x404) + 0x18))(pgVar1 + 4,2,2);
  (**(code **)(**(int **)(this + 0x404) + 0x18))(pgVar1,4,4);
  msgSYSTEM::Pack(&msgSystem,*(fioFILE_MEM **)(this + 0x404),*(msgDATA **)(pgVar1 + 10));
  (**(code **)(**(int **)(this + 0x404) + 0x18))(&DAT_005f89e5,1,1);
  (**(code **)(**(int **)(this + 0x404) + 8))();
  return;
}




/* from: gs:gs_mp_conn.cpp
   addr: 0052A070 */

void __thiscall
gsMP_CONNECTION::UnPack(gsMP_CONNECTION *this,gsMSG_MP_WRAP *param_1,void *param_2,int param_3)

{
  msgDATA *pmVar1;
  undefined4 uStack_24;
  
  (**(code **)(**(int **)(this + 0x404) + 0x1c))();
  uStack_24 = 0x52a0a9;
  (**(code **)(**(int **)(this + 0x404) + 0x14))();
  uStack_24 = 2;
  (**(code **)(**(int **)(this + 0x404) + 0x14))((int)param_2 + 4,2);
  (**(code **)(**(int **)(this + 0x404) + 0x14))(param_2,4,4);
  pmVar1 = msgSYSTEM::UnPack(&msgSystem,*(fioFILE_MEM **)(this + 0x404));
  *(msgDATA **)((int)param_2 + 10) = pmVar1;
  (**(code **)(**(int **)(this + 0x404) + 0x14))(&uStack_24,1,1);
  (**(code **)(**(int **)(this + 0x404) + 8))();
  return;
}




/* from: gs:gs_mp_conn.cpp
   addr: 0052A130 */

void __thiscall
gsMP_COMM::PrepareMsgWrap
          (gsMP_COMM *this,gsMSG_MP_WRAP *param_1,entIACTIVE_OBJ *param_2,int param_3,
          msgDATA *param_4)

{
  *(undefined2 *)(param_1 + 4) = (undefined2)param_3;
  *(msgDATA **)(param_1 + 10) = param_4;
  if (param_2 == (entIACTIVE_OBJ *)0x0) {
    *(undefined4 *)param_1 = 0xfffffffe;
    return;
  }
  *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x8c);
  return;
}




/* from: gs:gs_mp_conn.cpp
   addr: 0052A160 */

void __thiscall gsMP_COMM::PrepareConn(gsMP_COMM *this,gsMSG_MP_WRAP *param_1)

{
  gsMP_COMM *pgVar1;
  
  pgVar1 = this + 0x6c;
  (**(code **)(**(int **)(this + 0x46c) + 0x1c))(pgVar1,0x400,0x12);
  (**(code **)(**(int **)(this + 0x46c) + 0x18))(&DAT_005f89e4,1,1);
  (**(code **)(**(int **)(this + 0x46c) + 0x18))(pgVar1 + 4,2,2);
  (**(code **)(**(int **)(this + 0x46c) + 0x18))(pgVar1,4,4);
  msgSYSTEM::Pack(&msgSystem,*(fioFILE_MEM **)(this + 0x46c),*(msgDATA **)(pgVar1 + 10));
  (**(code **)(**(int **)(this + 0x46c) + 0x18))(&DAT_005f89e5,1,1);
  (**(code **)(**(int **)(this + 0x46c) + 8))();
  return;
}

