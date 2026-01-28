
/* from: gs:gs_demo.cpp
   addr: 00529400 */

int __thiscall gsDEMO::Init(gsDEMO *this)

{
  int local_8;
  int local_4;
  
  _apCfgReadBool((void **)0x0,s_Multiplayer,s_DemoPlay,&local_8);
  _apCfgReadBool((void **)0x0,s_Multiplayer,s_DemoRecord,&local_4);
  *(undefined4 *)(this + 0x524) = 0;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_demo.cpp
   addr: 00529450 */

void __thiscall gsDEMO::Term(gsDEMO *this)

{
  int iVar1;
  
  if ((gsAppState & 0x400U) != 0) {
    iVar1 = DAT_0095d094[0x44];
    _DAT_0095d0a8 = gsElapsedTime;
    (**(code **)(*DAT_0095d094 + 0xc))(DAT_0095d09c,1);
    (**(code **)(*DAT_0095d094 + 0x18))(&DAT_0095d0a0,0x10,1);
    (**(code **)(*DAT_0095d094 + 0xc))(iVar1,1);
    DAT_0095d09c = DAT_0095d094[0x44];
    _DAT_0095d0a0 = 0x53444646;
    DAT_0095d0a4 = 0;
    _DAT_0095d0ac = DAT_008b6a88;
    (**(code **)(*DAT_0095d094 + 0x18))(&DAT_0095d0a0,0x10,1);
    (**(code **)(*DAT_0095d094 + 8))();
    DAT_0095d094 = (int *)0x0;
    (**(code **)(*(int *)gsSysServer + 0x24))(0xfffffffe);
    gsAppState = gsAppState & 0xfffffbff;
  }
  if ((gsAppState & 0x800U) != 0) {
    (**(code **)(*DAT_0095d094 + 8))();
    DAT_0095d094 = (int *)0x0;
    gsAppState = gsAppState & 0xfffff7ff;
  }
  if (gsDemoServer != (gsDEMO_SERVER *)0x0) {
    msgSYSTEM::RemoveAddr(&msgSystem,(msgADDR *)gsDemoServer);
    if (gsDemoServer != (gsDEMO_SERVER *)0x0) {
      (*(code *)**(undefined4 **)gsDemoServer)(1);
    }
    gsDemoServer = (gsDEMO_SERVER *)0x0;
  }
  if (gsDemoClient != (gsDEMO_CLIENT *)0x0) {
    msgSYSTEM::RemoveAddr(&msgSystem,(msgADDR *)gsDemoClient);
    if (gsDemoClient != (gsDEMO_CLIENT *)0x0) {
      (*(code *)**(undefined4 **)gsDemoClient)(1);
    }
    gsDemoClient = (gsDEMO_CLIENT *)0x0;
  }
  return;
}




/* from: gs:gs_demo.cpp
   addr: 00529590 */

int __thiscall gsDEMO::Record_Start(gsDEMO *this)

{
  gsDEMO *pgVar1;
  gsMP_CONNECTION *pgVar2;
  gsDEMO gVar3;
  gsMP_CLIENT *this_00;
  char **ppcVar4;
  entIACTIVE_OBJ *peVar5;
  int iVar6;
  char *pcVar7;
  entIACTIVE_OBJ *peVar8;
  gsMSG_MP_SYNC agStack_18c [4];
  undefined4 uStack_188;
  undefined4 local_184;
  undefined2 local_180;
  undefined2 local_17e;
  undefined2 uStack_17c;
  undefined4 local_17a;
  gsMSG_MP_PTR local_174 [2];
  undefined2 local_172;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_15c;
  undefined1 local_dc;
  undefined4 local_9c;
  animCREATE_DATA local_98 [152];
  
  gsMSG_MP_PTR::gsMSG_MP_PTR(local_174);
  local_16c = 0xffffffff;
  local_168 = 0xfffffffd;
  local_164 = 0;
  local_9c = 0xffffffff;
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_15c = 0;
  local_dc = 0;
  *(uint *)this = *(uint *)this | 1;
  local_172 = 0x172;
  local_184 = 0xffffffff;
  local_180 = 0xffff;
  local_17e = 0xfffd;
  uStack_17c = 0xffff;
  local_17a = 0;
  if (gsDemoClient == (gsDEMO_CLIENT *)0x0) {
    this_00 = (gsMP_CLIENT *)operator_new(0x510);
    if (this_00 == (gsMP_CLIENT *)0x0) {
      this_00 = (gsMP_CLIENT *)0x0;
    }
    else {
      gsMP_CLIENT::gsMP_CLIENT(this_00);
      *(undefined ***)this_00 = &gsDEMO_CLIENT::_vftable_;
    }
    gsDemoClient = (gsDEMO_CLIENT *)this_00;
    *(undefined4 *)((gsDEMO_CLIENT *)this_00 + 0x14) = 0x47444d43;
    *(undefined4 *)(gsDemoClient + 0x1c) = 0x14;
    msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)gsDemoClient,0x24535953,0);
    (**(code **)(*(int *)gsSysServer + 0x20))();
  }
  ppcVar4 = &gsSceneFullName;
  do {
    gVar3 = *(gsDEMO *)ppcVar4;
    (this + -0x9480f8)[(int)ppcVar4] = gVar3;
    ppcVar4 = (char **)((int)ppcVar4 + 1);
  } while (gVar3 != (gsDEMO)0x0);
  (**(code **)(**(int **)(this + 4) + 0x18))(this + 0x20,0x104);
  pgVar1 = this + 0x10;
  iVar6 = (*(int **)(this + 4))[0x44];
  *(undefined4 *)pgVar1 = 0x53444646;
  *(int *)(this + 0xc) = iVar6;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = DAT_008b6a88;
  (**(code **)(**(int **)(this + 4) + 0x18))(pgVar1,0x10,1);
  for (peVar5 = (entIACTIVE_OBJ *)entFindNext((entENTITY *)0x0); peVar5 != (entIACTIVE_OBJ *)0x0;
      peVar5 = (entIACTIVE_OBJ *)entFindNext((entENTITY *)peVar5)) {
    peVar8 = peVar5;
    iVar6 = gsMP_SERVER::CreateSyncInfo(gsSysServer,peVar5,agStack_18c);
    if ((iVar6 != 0) &&
       (gsMP_COMM::PrepareMsgWrap
                  ((gsMP_COMM *)gsSysServer,(gsMSG_MP_WRAP *)&stack0xfffffe64,(entIACTIVE_OBJ *)0x0,
                   0x403,(msgDATA *)agStack_18c), ((byte)*this & 1) != 0)) {
      gsMP_COMM::PrepareConn((gsMP_COMM *)gsSysServer,(gsMSG_MP_WRAP *)&stack0xfffffe64);
      pgVar2 = (gsMP_CONNECTION *)(gsSysServer + 0x68);
      gsMP_CONNECTION::GetBufferSize(pgVar2);
      (**(code **)(**(int **)(this + 4) + 0x18))(&stack0xfffffe60,4,1);
      iVar6 = gsMP_CONNECTION::GetBufferSize(pgVar2);
      pcVar7 = gsMP_CONNECTION::GetBuffer(pgVar2);
      peVar5 = peVar8;
      (**(code **)(**(int **)(this + 4) + 0x18))(pcVar7,iVar6,1);
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
    }
  }
  local_180 = 0xffff;
  local_17e = 0xffff;
  uStack_188 = 0;
  gsMP_COMM::PrepareMsgWrap
            ((gsMP_COMM *)gsSysServer,(gsMSG_MP_WRAP *)&stack0xfffffe64,(entIACTIVE_OBJ *)0x0,0x403,
             (msgDATA *)agStack_18c);
  if (((byte)*this & 1) != 0) {
    gsMP_COMM::PrepareConn((gsMP_COMM *)gsSysServer,(gsMSG_MP_WRAP *)&stack0xfffffe64);
    pgVar2 = (gsMP_CONNECTION *)(gsSysServer + 0x68);
    gsMP_CONNECTION::GetBufferSize(pgVar2);
    (**(code **)(**(int **)(this + 4) + 0x18))(&stack0xfffffe60,4,1);
    iVar6 = gsMP_CONNECTION::GetBufferSize(pgVar2);
    pcVar7 = gsMP_CONNECTION::GetBuffer(pgVar2);
    (**(code **)(**(int **)(this + 4) + 0x18))(pcVar7,iVar6,1);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  iVar6 = (*(int **)(this + 4))[0x44];
  *(float *)(this + 0x18) = gsElapsedTime;
  (**(code **)(**(int **)(this + 4) + 0xc))(*(undefined4 *)(this + 0xc),1);
  (**(code **)(**(int **)(this + 4) + 0x18))(pgVar1,0x10,1);
  (**(code **)(**(int **)(this + 4) + 0xc))(iVar6,1);
  iVar6 = (*(int **)(this + 4))[0x44];
  *(undefined4 *)pgVar1 = 0x53444646;
  *(int *)(this + 0xc) = iVar6;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = DAT_008b6a88;
  (**(code **)(**(int **)(this + 4) + 0x18))(pgVar1,0x10,1);
  return 1;
}




/* from: gs:gs_demo.cpp
   addr: 00529870
   addr: 00529870
   addr: 00529870
   addr: 00529870 */

void * __thiscall gsMP_CLIENT::_vector_deleting_destructor_(gsMP_CLIENT *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsMP_CONNECTION::~gsMP_CONNECTION((gsMP_CONNECTION *)(this + 0x68));
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_demo.cpp
   addr: 005298A0 */

void __thiscall gsDEMO::Record_SaveMsg(gsDEMO *this,gsMSG_MP_WRAP *param_1)

{
  gsMP_CONNECTION *this_00;
  int iVar1;
  char *pcVar2;
  
  if (((byte)*this & 1) != 0) {
    gsMP_COMM::PrepareConn((gsMP_COMM *)gsSysServer,param_1);
    this_00 = (gsMP_CONNECTION *)(gsSysServer + 0x68);
    param_1 = (gsMSG_MP_WRAP *)gsMP_CONNECTION::GetBufferSize(this_00);
    (**(code **)(**(int **)(this + 4) + 0x18))(&param_1,4,1);
    iVar1 = gsMP_CONNECTION::GetBufferSize(this_00);
    pcVar2 = gsMP_CONNECTION::GetBuffer(this_00);
    (**(code **)(**(int **)(this + 4) + 0x18))(pcVar2,iVar1,1);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  return;
}




/* from: gs:gs_demo.cpp
   addr: 00529910 */

int __thiscall gsDEMO::Play_Start(gsDEMO *this,char *param_1)

{
  char cVar1;
  gsMP_SERVER *this_00;
  int iVar2;
  int *piVar3;
  char acStack_130 [64];
  char acStack_f0 [64];
  undefined4 uStack_b0;
  animCREATE_DATA aaStack_ac [172];
  
  if (gsDemoServer == (gsDEMO_SERVER *)0x0) {
    this_00 = (gsMP_SERVER *)operator_new(0xa00);
    if (this_00 == (gsMP_SERVER *)0x0) {
      this_00 = (gsMP_SERVER *)0x0;
    }
    else {
      gsMP_SERVER::gsMP_SERVER(this_00);
      *(undefined ***)this_00 = &gsDEMO_SERVER::_vftable_;
    }
    gsDemoServer = (gsDEMO_SERVER *)this_00;
    *(undefined4 *)((gsDEMO_SERVER *)this_00 + 0x14) = 0x47444d53;
    *(undefined4 *)(gsDemoServer + 0x1c) = 0x14;
    msgSYSTEM::InsertAddr(&msgSystem,(msgADDR *)gsDemoServer,0x24535953,0);
  }
  if ((param_1 == (char *)0x0) &&
     (iVar2 = _apCfgReadString((void **)0x0,s_Multiplayer,s_DemoFile,(char *)&apBuffer,0x40),
     iVar2 == 0)) {
    return 0;
  }
  piVar3 = (int *)operator_new(0x124);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[1] = 0;
    piVar3[0x43] = 0;
    piVar3[0x44] = 0;
    piVar3[0x45] = 0;
    piVar3[0x46] = 0;
    piVar3[0x47] = 0;
    *(undefined1 *)(piVar3 + 2) = 0;
    piVar3[0x48] = 0;
    *piVar3 = (int)&fioFILE_DISK::_vftable_;
  }
  *(int **)(this + 4) = piVar3;
  iVar2 = (**(code **)(*piVar3 + 4))();
  if (iVar2 != 0) {
    (**(code **)(**(int **)(this + 4) + 0x14))(this + 0x20,0x104,1);
    gsAppState = gsAppState | 0x800;
    gsMSG_MP_PTR::gsMSG_MP_PTR((gsMSG_MP_PTR *)&stack0xfffffe84);
    uStack_b0 = 0xffffffff;
    animCREATE_DATA::animCREATE_DATA(aaStack_ac);
    acStack_130[0] = '\0';
    acStack_f0[0] = '\0';
    iVar2 = 0;
    do {
      cVar1 = s_player[iVar2];
      acStack_130[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    iVar2 = 0;
    do {
      cVar1 = s_player[iVar2];
      acStack_f0[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*(int *)gsSysClient + 0x2c))(0,0x401,&stack0xfffffe84,1);
    (**(code **)(*(int *)gsSysClient + 0x2c))(0,0x405,0,1);
    return 1;
  }
  return 0;
}




/* from: gs:gs_demo.cpp
   addr: 00529AD0
   addr: 00529AD0 */

void * __thiscall gsDEMO_SERVER::_vector_deleting_destructor_(gsDEMO_SERVER *this,uint param_1)

{
  gsMP_SERVER::~gsMP_SERVER((gsMP_SERVER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_demo.cpp
   addr: 00529AF0 */

void __thiscall gsDEMO::Play_DispatchFrame(gsDEMO *this)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 uVar5;
  uint uStack_238;
  ushort uStack_216;
  undefined1 local_214 [4];
  char acStack_210 [260];
  char acStack_10c [268];
  
  iVar4 = 0;
  uStack_238 = 1;
  (**(code **)(**(int **)(this + 4) + 0x14))(local_214,0x10);
  iVar1 = (**(code **)(**(int **)(this + 4) + 0x10))();
  if (iVar1 == 0) {
    DVar2 = timeGetTime();
    do {
      DVar3 = timeGetTime();
      uStack_238 = DVar3 - DVar2;
    } while ((float)uStack_238 * ___real_3a83126f + gsElapsedTime <=
             (float)((uint)uStack_216 << 0x10));
    gsElapsedTime = (float)((uint)uStack_216 << 0x10);
    if ((float)((uint)uStack_216 << 0x10) < ___real_38d1b717) {
      gsElapsedTime = 0.001;
    }
    do {
      uVar5 = 4;
      (**(code **)(*DAT_0095d094 + 0x14))(&uStack_238,4,4);
      (**(code **)(*DAT_0095d094 + 0x14))(&DAT_0095d1b4,uVar5,1);
      gsMP_CONNECTION::UnPack
                ((gsMP_CONNECTION *)(gsSysServer + 0x68),(gsMSG_MP_WRAP *)&stack0xfffffdd0,
                 &DAT_0095d1b4,uStack_238);
      msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsSysClient,0x3ff,&stack0xfffffdd0,
                         (msgADDR *)gsDemoServer);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xffff);
  }
  else {
    if ((gsAppState & 0x800U) != 0) {
      (**(code **)(**(int **)(this + 4) + 8))();
      *(undefined4 *)(this + 4) = 0;
      gsAppState = gsAppState & 0xfffff7ff;
    }
    iVar1 = *(int *)(this + 0x524) + 1;
    *(int *)(this + 0x524) = iVar1;
    if (iVar1 != 0) {
      sprintf(acStack_10c,s_DemoFile_d,iVar1);
      iVar1 = _apCfgReadString((void **)0x0,s_Multiplayer,acStack_10c,acStack_210,0x40);
      if (iVar1 != 0) goto LAB_00529bca;
      *(undefined4 *)(this + 0x524) = 0;
    }
    iVar1 = _apCfgReadString((void **)0x0,s_Multiplayer,s_DemoFile,acStack_210,0x40);
    if (iVar1 != 0) {
LAB_00529bca:
      Play_Start(this,acStack_210);
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_demo.cpp
   addr: 00529CC0 */

int __thiscall
gsDEMO_CLIENT::ProcessMsg
          (gsDEMO_CLIENT *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  gsMP_CONNECTION *this_00;
  int iVar1;
  char *pcVar2;
  
  if (param_1 == 0x3ff) {
    if (((byte)gsDemo & 1) != 0) {
      gsMP_COMM::PrepareConn((gsMP_COMM *)gsSysServer,(gsMSG_MP_WRAP *)param_2);
      this_00 = (gsMP_CONNECTION *)(gsSysServer + 0x68);
      param_1 = gsMP_CONNECTION::GetBufferSize(this_00);
      (**(code **)(*DAT_0095d094 + 0x18))(&param_1,4,1);
      iVar1 = gsMP_CONNECTION::GetBufferSize(this_00);
      pcVar2 = gsMP_CONNECTION::GetBuffer(this_00);
      (**(code **)(*DAT_0095d094 + 0x18))(pcVar2,iVar1,1);
      DAT_0095d0a4 = DAT_0095d0a4 + 1;
      return 1;
    }
  }
  else if (param_1 == 1000) {
    iVar1 = DAT_0095d094[0x44];
    _DAT_0095d0a8 = gsElapsedTime;
    (**(code **)(*DAT_0095d094 + 0xc))(DAT_0095d09c,1);
    (**(code **)(*DAT_0095d094 + 0x18))(&DAT_0095d0a0,0x10,1);
    (**(code **)(*DAT_0095d094 + 0xc))(iVar1,1);
    DAT_0095d09c = DAT_0095d094[0x44];
    _DAT_0095d0a0 = 0x53444646;
    DAT_0095d0a4 = 0;
    _DAT_0095d0ac = DAT_008b6a88;
    (**(code **)(*DAT_0095d094 + 0x18))(&DAT_0095d0a0,0x10,1);
  }
  return 1;
}




/* from: gs:gs_demo.cpp
   addr: 00529DF0 */

int __thiscall
gsDEMO_SERVER::ProcessMsg
          (gsDEMO_SERVER *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  entIACTIVE_OBJ *peVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_154;
  undefined1 local_153;
  undefined2 local_152;
  char local_150 [260];
  undefined1 local_4c;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = 0xffffffff;
  if (param_1 == 0x3ff) {
                    /* WARNING: Load size is inaccurate */
    uVar4 = *(undefined4 *)((int)param_2 + 6);
    if (*param_2 != -2) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*param_2,4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)peVar2,(int)*(short *)((int)param_2 + 4),
                           *(void **)((int)param_2 + 10),(msgADDR *)this);
      }
      return 1;
    }
    param_1 = (int)*(short *)((int)param_2 + 4);
  }
  if (param_1 != 1000) {
    if (param_1 != 0x401) {
      return 0;
    }
    local_153 = 0x40;
    local_154 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_150[0] = '\0';
    local_4c = 0;
    local_152 = 0x154;
    iVar3 = 0;
    do {
      cVar1 = (&DAT_0095d0b0)[iVar3];
      local_150[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*(int *)this + 0x30))(uVar4,0,0x3ec,&local_154,1);
  }
  gsDEMO::Play_DispatchFrame(&gsDemo);
  return 0;
}

