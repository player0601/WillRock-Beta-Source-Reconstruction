
/* from: sfx_water.cpp
   addr: 0047AAB0 */

int __fastcall wrsfxWaterInit(void)

{
  int iVar1;
  
  wrsfxWATER::pTexWater1 = txmMANAGER::Add(txmManager,s_sfx_water_1,0x40003,1);
  if (wrsfxWATER::pTexWater1 == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxWATER::pTexWater2 = txmMANAGER::Add(txmManager,s_sfx_water_2,0x40003,1);
  if (wrsfxWATER::pTexWater2 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_water_stream,0x24534658,0x50,wrsfxWATER::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_0060ead0);
  if (iVar1 == 0) {
    apMsg(s_Cannot_link_sound_data);
    return 0;
  }
  return 1;
}




/* from: sfx_water.cpp
   addr: 0047AB40 */

entENTITY * __fastcall wrsfxWATER::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x163);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_water.cpp
   addr: 0047AB90
   addr: 0047AB90 */

void * __thiscall wrsfxWATER::_scalar_deleting_destructor_(wrsfxWATER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_water.cpp
   addr: 0047ABC0 */

wrsfxWATER_STREAM_CLOUD_2 * __thiscall
wrsfxWATER_STREAM_CLOUD_2::wrsfxWATER_STREAM_CLOUD_2(wrsfxWATER_STREAM_CLOUD_2 *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,50.0,1.0);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,50.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.8,0.2);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f333333,param_1 * ___real_3e99999a,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(this_00,0,8,1);
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,187.68001);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)this_00);
  fVar2 = param_1 * ___real_3f000000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar3 = param_1 * ___real_3e800000;
  *(float *)(this + 0xb8) = fVar3;
  *(float *)(this + 0xc0) = fVar2;
  *(float *)(this + 0xc4) = fVar3;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.0,0.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxWATER::pTexWater1);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  *(uint *)(this + 4) = uVar1 | 0x8002408;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_water.cpp
   addr: 0047AD20 */

wrsfxWATER_STREAM_CLOUD_1 * __thiscall
wrsfxWATER_STREAM_CLOUD_1::wrsfxWATER_STREAM_CLOUD_1(wrsfxWATER_STREAM_CLOUD_1 *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,50.0,2.0);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,50.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.5,0.5);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,param_1 * ___real_3f418938);
  fVar2 = param_1 * ___real_3fc00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,fVar2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar4,1.0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.095,97.409996);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,180.0);
  fVar3 = param_1 * ___real_00000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xc0) = fVar2;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar3;
  *(float *)(this + 0xb8) = fVar3;
  *(float *)(this + 0xc4) = param_1 * ___real_3dcccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxWATER::pTexWater2);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  *(uint *)(this + 4) = uVar1 | 0x8002408;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_water.cpp
   addr: 0047AEF0 */

wrsfxWATER_STREAM * __thiscall
wrsfxWATER_STREAM::wrsfxWATER_STREAM
          (wrsfxWATER_STREAM *this,float param_1,m3dV *param_2,m3dV *param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  m3dSPL *this_00;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,1.3);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,100.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.1,0.1);
  fVar2 = param_1 * ___real_3dcccccd;
  *(undefined4 *)(this + 0xe8) = 0x3d4ccccd;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,param_1,fVar2,(m3dSPL_LINEAR1D *)0x0,1.0);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(this_00,0,8,1);
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.145,33.66);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,1.0,191.76);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,0.0,0.0,0.0);
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,0.25,0.0,1.0,0.0);
  fVar2 = param_1 * ___real_40400000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100004;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc1200000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_3f4ccccd;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb8) = fVar2;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxWATER::pTexWater2);
  uVar1 = *(uint *)(this + 4);
  local_18 = 0;
  *(uint *)(this + 4) = uVar1 | 0x400;
  local_10 = 0;
  *(uint *)(this + 4) = uVar1 | 0x408;
  local_14 = *(float *)(param_2 + 4) - param_4;
  local_c = _m3dVUnitY;
  local_4 = DAT_005f9998;
  local_8 = DAT_005f9994;
  partEMITTER_PHYS::SetCDTPlane((partEMITTER_PHYS *)this,1,0,(m3dPLANE *)&local_18);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x30000;
  partEMITTER_PHYS::SetPosDirSpeed((partEMITTER_PHYS *)this,param_2,param_3,(m3dV *)0x0);
  partEMITTER_PHYS::PredictCDT((partEMITTER_PHYS *)this,(m3dV *)(this + 0x2c0),(float *)0x0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_water.cpp
   addr: 0047B110 */

int __thiscall
wrsfxWATER::ProcessMsg(wrsfxWATER *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  undefined4 uVar1;
  wrsfxWATER_STREAM *this_00;
  int iVar2;
  objOBJ *this_01;
  wrsfxWATER_STREAM_CLOUD_1 *this_02;
  wrsfxWATER_STREAM_CLOUD_2 *this_03;
  sncCHANNEL *this_04;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  if (param_1 == 1) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_18);
    local_28 = 1.0;
    animINST::GetFloat(*(animINST **)(this + 0xbc),s_WATER,s_height,&local_28);
    param_1 = 0x3f800000;
    animINST::GetFloat(*(animINST **)(this + 0xbc),s_WATER,s_size,(float *)&param_1);
    this_00 = (wrsfxWATER_STREAM *)operator_new(0x2cc);
    if (this_00 == (wrsfxWATER_STREAM *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxWATER_STREAM::wrsfxWATER_STREAM(this_00,(float)param_1,local_c,local_18,local_28)
      ;
    }
    *(int *)(this + 0x153) = iVar2;
    if (iVar2 != 0) {
      local_24 = *(undefined4 *)(iVar2 + 0x2c0);
      local_20 = *(float *)(iVar2 + 0x2c4) + ___real_3e19999a;
      local_1c = *(undefined4 *)(iVar2 + 0x2c8);
      m3dMATR::MakeLCS2WCS_VY
                ((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),(m3dV *)&local_24,&m3dVUnitY);
      animINST::Invalidate(*(animINST **)(this + 0xbc),0x80);
      this_01 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
      *(objOBJ **)(this + 0x14f) = this_01;
      if (this_01 != (objOBJ *)0x0) {
        objOBJ::SetStateProcYes(this_01,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
        *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
        this_02 = (wrsfxWATER_STREAM_CLOUD_1 *)operator_new(0x2c0);
        if (this_02 == (wrsfxWATER_STREAM_CLOUD_1 *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = wrsfxWATER_STREAM_CLOUD_1::wrsfxWATER_STREAM_CLOUD_1(this_02,(float)param_1);
        }
        *(int *)(this + 0x157) = iVar2;
        if (iVar2 != 0) {
          this_03 = (wrsfxWATER_STREAM_CLOUD_2 *)operator_new(0x2c0);
          if (this_03 == (wrsfxWATER_STREAM_CLOUD_2 *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = wrsfxWATER_STREAM_CLOUD_2::wrsfxWATER_STREAM_CLOUD_2(this_03,(float)param_1);
          }
          *(int *)(this + 0x15b) = iVar2;
          if (iVar2 != 0) {
            iVar2 = partSetAreaEmissionObj
                              (*(partEMITTER_PHYS **)(this + 0x157),*(objOBJ **)(this + 0x14f),-1,
                               (m3dV *)0x0);
            if (iVar2 != 0) {
              iVar2 = partSetAreaEmissionObj
                                (*(partEMITTER_PHYS **)(this + 0x15b),*(objOBJ **)(this + 0x14f),-1,
                                 (m3dV *)0x0);
              if (iVar2 != 0) {
                partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
                partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
                partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x15b));
                partAttachInst(*(partEMITTER_PHYS **)(this + 0x153),*(animINST **)(this + 0xbc));
                *(uint *)(*(int *)(this + 0x153) + 4) =
                     *(uint *)(*(int *)(this + 0x153) + 4) | 0x20000000;
                partAttachInst(*(partEMITTER_PHYS **)(this + 0x157),*(animINST **)(this + 0xbc));
                *(uint *)(*(int *)(this + 0x157) + 4) =
                     *(uint *)(*(int *)(this + 0x157) + 4) | 0x20000000;
                partAttachInst(*(partEMITTER_PHYS **)(this + 0x15b),*(animINST **)(this + 0xbc));
                *(uint *)(*(int *)(this + 0x15b) + 4) =
                     *(uint *)(*(int *)(this + 0x15b) + 4) | 0x20000000;
                this_04 = (sncCHANNEL *)operator_new(0xbc);
                if (this_04 == (sncCHANNEL *)0x0) {
                  this_04 = (sncCHANNEL *)0x0;
                }
                else {
                  sncCHANNEL::sncCHANNEL(this_04);
                  *(undefined4 *)(this_04 + 0x74) = _m3dVZero;
                  *(undefined4 *)(this_04 + 0x78) = DAT_00963740;
                  uVar1 = DAT_00963744;
                  *(undefined4 *)(this_04 + 0x80) = 0;
                  *(undefined ***)this_04 = &sncCHANNEL_3D::_vftable_;
                  *(undefined4 *)(this_04 + 0x7c) = uVar1;
                  *(undefined4 *)(this_04 + 0x84) = 0x41700000;
                  *(undefined4 *)(this_04 + 0x88) = 0x42200000;
                  *(undefined4 *)(this_04 + 0x8c) = 0x43b40000;
                  *(undefined4 *)(this_04 + 0x90) = 0x43b40000;
                  *(undefined4 *)(this_04 + 0x94) = 0;
                  *(undefined4 *)(this_04 + 0x98) = _m3dVZero;
                  *(undefined4 *)(this_04 + 0x9c) = DAT_00963740;
                  *(undefined4 *)(this_04 + 0xa0) = DAT_00963744;
                  *(undefined4 *)(this_04 + 0xa4) = _m3dVZero;
                  *(undefined4 *)(this_04 + 0xa8) = DAT_00963740;
                  *(undefined4 *)(this_04 + 0xac) = DAT_00963744;
                  *(undefined4 *)(this_04 + 0xb0) = _m3dVUnitZ;
                  *(undefined4 *)(this_04 + 0xb4) = DAT_005f99a0;
                  uVar1 = DAT_005f99a4;
                  *(undefined ***)this_04 = &sncCHANNEL_SPH::_vftable_;
                  *(undefined4 *)(this_04 + 0xb8) = uVar1;
                }
                *(sncCHANNEL **)(this + 0x15f) = this_04;
                if (this_04 != (sncCHANNEL *)0x0) {
                  gsSND_SYSTEM::AddChannel(gsSysSound,this_04,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
                  (**(code **)(**(int **)(this + 0x15f) + 4))(&DAT_0060ead0,0);
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 2) {
    if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x153))(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
    if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x157))(1);
    }
    *(undefined4 *)(this + 0x157) = 0;
    if (*(undefined4 **)(this + 0x15b) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x15b))(1);
    }
    *(undefined4 *)(this + 0x15b) = 0;
    return 0;
  }
  return 0;
}

