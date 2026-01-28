
/* from: atlas_ball.cpp
   addr: 0042F860 */

int __fastcall atlasBallInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_atlas_ball,0x41544c42,0x37,atlasBALL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_00609bc0);
  return (uint)(iVar1 != 0);
}




/* from: atlas_ball.cpp
   addr: 0042F8A0 */

int __thiscall atlasBALL::ProcessINIT(atlasBALL *this,rgdINIT_PARAMS *param_1)

{
  int iVar1;
  
  iVar1 = rgdRIGID::ProcessINIT((rgdRIGID *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0xf1b) = 3;
  *(undefined4 *)(this + 0xf1f) = 0;
  *(undefined4 *)(this + 0xf23) = 0;
  *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 4;
  *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) | 0x100;
  this[0xfc] = (atlasBALL)0xf;
  gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
  if (*(objOBJ **)(*(int *)(this + 0xbc) + 0x10) != (objOBJ *)0x0) {
    objOBJ::SetTransparency(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0,0xff);
  }
  msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,30.0);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: atlas_ball.cpp
   addr: 0042F940 */

void __thiscall atlasBALL::ProcessFRAME(atlasBALL *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  float fVar6;
  msgDATA local_b0;
  undefined1 local_af;
  undefined2 local_ae;
  undefined4 local_ac;
  undefined **local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  m3dV local_9c [16];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  m3dV local_80 [4];
  float local_7c;
  m3dV local_5c [12];
  scnAOBJ local_50 [80];
  
  local_a4 = 0;
  local_a0 = 0;
  local_a8 = &cdtREFINE::_vftable_;
  if (((byte)this[0x88] & 4) != 0) {
    rgdRIGID::ProcessFRAME((rgdRIGID *)this);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_9c);
    iVar3 = scnSCENE::MakeAnimList
                      (gsScenePtr,local_9c,local_9c,1.5,(cdtREFINE *)&local_a8,local_50,10);
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar1 = *(int *)(local_50 + iVar5 * 8);
        if (((iVar1 != *(int *)(this + 0xbc)) &&
            (iVar2 = *(int *)(iVar1 + 0x13c), iVar2 != *(int *)(this + 0xf17))) &&
           ((*(int *)(iVar2 + 0x14) != 0x244e5043 ||
            ((((iVar2 = *(int *)(iVar2 + 0x94), iVar2 != 0xd && (iVar2 != 0xe)) && (iVar2 != 0xf))
             && (iVar2 != 0x10)))))) {
          pcVar4 = *(char **)(iVar1 + 0x1c);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = s_;
          }
          pcVar4 = strstr(pcVar4,s_atlas_ball);
          if ((pcVar4 == (char *)0x0) &&
             ((*(byte *)(*(int *)(*(int *)(local_50 + iVar5 * 8) + 0x13c) + 0xb8) & 4) != 0)) {
            animINST::GetPos(*(animINST **)(this + 0xbc),local_80);
            local_7c = local_7c - *(float *)(this + 0x673);
            local_8c = _m3dVUnitY;
            local_88 = DAT_005f9994;
            local_84 = DAT_005f9998;
            *(undefined4 *)(this + 0xf13) = *(undefined4 *)(this + 0xf1b);
            *(undefined4 *)(this + 0xf1f) = 0;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    fVar6 = entENTITY::GetDistToClosestPlayer((entENTITY *)this,1.5,local_5c,(plgsACTION **)0x0);
    if (fVar6 < ___real_3fc00000) {
      animINST::GetPos(*(animINST **)(this + 0xbc),local_80);
      local_7c = local_7c - *(float *)(this + 0x673);
      local_8c = _m3dVUnitY;
      local_88 = DAT_005f9994;
      local_84 = DAT_005f9998;
      *(undefined4 *)(this + 0xf13) = *(undefined4 *)(this + 0xf1b);
      *(undefined4 *)(this + 0xf1f) = 0;
    }
    if ((*(int *)(this + 0xf1b) <= *(int *)(this + 0xf13)) &&
       (fVar6 = *(float *)(this + 0xf1f) - gsElapsedTime, *(float *)(this + 0xf1f) = fVar6,
       fVar6 < ___real_00000000)) {
      local_b0 = (msgDATA)0x0;
      local_af = 0x40;
      local_ac = 0;
      local_ae = 8;
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_b0,0xa0000,0xfffffffd,0xfffffffd);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: atlas_ball.cpp
   addr: 0042FB70 */

void __thiscall atlasBALL::Explode(atlasBALL *this)

{
  int iVar1;
  entENTITY *this_00;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined **local_4c;
  undefined4 local_48;
  animINST *local_44;
  m3dMATR local_40 [64];
  
  if (*(int *)(this + 0xf23) == 0) {
    local_5c = _m3dVZero;
    local_58 = DAT_00963740;
    local_44 = *(animINST **)(this + 0xbc);
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_54 = DAT_00963744;
    local_50 = 0;
    local_4c = &cdtREFINE::_vftable_;
    local_48 = 2;
    *(undefined4 *)(this + 0xf23) = 1;
    animINST::GetPos(local_44,(m3dV *)&local_84);
    iVar1 = scnSCENE::GetClosestPoint
                      (gsScenePtr,(m3dV *)&local_84,*(float *)(this + 0x673) * ___real_3fc00000,0,
                       (cdtREFINE *)&local_4c,(cdtINFO *)&local_6c);
    if (iVar1 == 0) {
      local_78 = _m3dVUnitY;
      local_74 = DAT_005f9994;
      local_70 = DAT_005f9998;
    }
    else {
      local_84 = local_5c;
      local_80 = local_58;
      local_7c = local_54;
      scnSCENE::GetCDTFace(gsScenePtr,(cdtINFO *)&local_6c,(m3dPOLY *)0x0,(m3dV *)&local_78);
    }
    gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_00609bc0,(m3dV *)&local_84);
    this_00 = entCreate(gsScenePtr,s_sfx_atlas_globe_land,s_sfx_atlas_globe_land,
                        (animCREATE_DATA *)0x0,(void *)0x0,0);
    if (this_00 != (entENTITY *)0x0) {
      m3dMATR::MakeLCS2WCS_VZ(local_40,(m3dV *)&local_84,(m3dV *)&local_78);
      wrsfxATLAS_GLOBE_LAND::Start((wrsfxATLAS_GLOBE_LAND *)this_00,local_40);
    }
    if (((byte)this[0x88] & 4) != 0) {
      dmgDispatchExplosDamage
                ((entENTITY *)this,(m3dV *)&local_84,20.0,6.0,3,-1,(cdtINFO *)0x0,0xffffffff,
                 (dmgDISPATCHER *)0x0);
    }
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
  }
  return;
}




/* from: atlas_ball.cpp
   addr: 0042FD00 */

int __thiscall
atlasBALL::ProcessMsg(atlasBALL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  msgDATA local_8;
  undefined1 local_7;
  undefined2 local_6;
  undefined4 local_4;
  
  if (param_1 == 0x40c) {
    if (*(int *)((int)param_2 + 4) == 0) {
      Explode(this);
    }
  }
  else if ((param_1 == 0x4c5) && (((byte)this[0x88] & 4) != 0)) {
    local_8 = (msgDATA)0x0;
    local_4 = 0;
    local_7 = 0x40;
    local_6 = 8;
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_8,0xa0000,0xfffffffd,0xfffffffd);
  }
  iVar1 = rgdRIGID::ProcessMsg((rgdRIGID *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: atlas_ball.cpp
   addr: 0042FDB0 */

entENTITY * __fastcall atlasBALL::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0xf27);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x1a3) = 0;
    *(undefined4 *)(this + 0x387) = 0;
    *(undefined4 *)(this + 0x663) = 3;
    *(undefined ***)(this + 0x65f) = &m3dSPHERE::_vftable_;
    *(undefined4 *)(this + 0x67b) = 1;
    *(undefined ***)(this + 0x677) = &m3dBOX::_vftable_;
    *(undefined4 *)(this + 0xeff) = 0;
    *(undefined4 *)(this + 0xf17) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: atlas_ball.cpp
   addr: 0042FE20
   addr: 0042FE20
   addr: 0042FE20
   addr: 0042FE20
   addr: 0042FE20
   addr: 0042FE20 */

void * __thiscall nchRIGID::_vector_deleting_destructor_(nchRIGID *this,uint param_1)

{
  *(undefined ***)(this + 0x677) = &m3dVOL::_vftable_;
  *(undefined ***)(this + 0x65f) = &m3dVOL::_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

