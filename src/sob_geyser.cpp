
/* from: sob_geyser.cpp
   addr: 0047CC80 */

int __fastcall wrsobInitGeyser(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sob_geyser,0x2444594e,0x28,wrsobGEYSER::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsobGEYSER::pTexSmoke = txmMANAGER::Add(txmManager,s_sfx_geyser_smoke,0x40003,1);
  if (wrsobGEYSER::pTexSmoke == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsobGEYSER::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_geyser_glow,0x40003,1);
  return (uint)(wrsobGEYSER::pTexGlow != (txmTEXTURE *)0x0);
}




/* from: sob_geyser.cpp
   addr: 0047CCF0 */

entENTITY * __fastcall wrsobGEYSER::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x16f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined4 *)(this + 0x16b) = 0;
    *(undefined4 *)(this + 0x14f) = 0xffffffff;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sob_geyser.cpp
   addr: 0047CD50
   addr: 0047CD50 */

void * __thiscall wrsobGEYSER::_scalar_deleting_destructor_(wrsobGEYSER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_geyser.cpp
   addr: 0047CD80 */

wrsobGEYSER_SMOKE_IDLE * __thiscall
wrsobGEYSER_SMOKE_IDLE::wrsobGEYSER_SMOKE_IDLE(wrsobGEYSER_SMOKE_IDLE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,40.0,1.0);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.1,40.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,40.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.0,0.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_3f000000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_3e4ccccd);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.23,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsobGEYSER::pTexSmoke);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,60.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x41900000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = param_1 + param_1;
  *(float *)(this + 0xb8) = param_1 * ___real_3e800000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x8000408;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_geyser.cpp
   addr: 0047CF80 */

wrsobGEYSER_SMOKE_EXPLODE * __thiscall
wrsobGEYSER_SMOKE_EXPLODE::wrsobGEYSER_SMOKE_EXPLODE(wrsobGEYSER_SMOKE_EXPLODE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x11,100.0,0.7);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.16666667,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.2,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.6,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.6666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.5,0.2);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_3ecccccd);
  fVar2 = param_1 * ___real_3f4ccccd;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.5,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsobGEYSER::pTexSmoke);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,120.0);
  fVar2 = param_1 * ___real_3e99999a;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar2;
  fVar2 = param_1 * ___real_3f000000;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f000000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xb0) = 0x3f000000;
  *(float *)(this + 0xb8) = fVar2;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x4000418;
  *(uint *)(this + 4) = uVar1 | 0xc000418;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_geyser.cpp
   addr: 0047D1C0 */

wrsobGEYSER_GLOW_EXPLODE * __thiscall
wrsobGEYSER_GLOW_EXPLODE::wrsobGEYSER_GLOW_EXPLODE(wrsobGEYSER_GLOW_EXPLODE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,200.0,0.4);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.06666667,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.53333336,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.6333333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.25,0.15);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_00000000);
  fVar2 = param_1 * ___real_40800000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsobGEYSER::pTexGlow);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1000000;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,0.125,1.0,0.125);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0xa408;
  *(uint *)(this + 4) = uVar1 | 0x800a408;
  return this;
}




/* from: sob_geyser.cpp
   addr: 0047D3E0 */

void __thiscall wrsobGEYSER::UpdateState(wrsobGEYSER *this)

{
  float extraout_ECX;
  float extraout_EDX;
  float fVar1;
  m3dV local_c [12];
  
  if (*(int *)(this + 0x14f) == 1) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x157));
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x15f));
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x167));
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),1,0.0);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x163),local_c);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 0x15f),local_c,(m3dV *)0x0,(m3dV *)0x0);
    *(undefined4 *)(this + 0x14f) = 2;
    *(undefined4 *)(this + 0x153) = 0x3f2aaaab;
    return;
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
  *(undefined4 *)(this + 0x14f) = 1;
  fVar1 = m3dRandRange(extraout_ECX,extraout_EDX);
  *(float *)(this + 0x153) = fVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_geyser.cpp
   addr: 0047D4A0 */

int __thiscall
wrsobGEYSER::ProcessMsg(wrsobGEYSER *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  objOBJ *poVar3;
  wrsobGEYSER_SMOKE_IDLE *this_00;
  wrsobGEYSER_SMOKE_EXPLODE *this_01;
  wrsobGEYSER_GLOW_EXPLODE *this_02;
  partEMITTER_PHYS *this_03;
  uint uVar4;
  char *pcVar5;
  m3dV local_18 [12];
  float local_c;
  float local_8;
  float local_4;
  
  if (param_1 == 1) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    uVar4 = 0xffffffff;
    pcVar5 = s__effect_root;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    poVar3 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__effect_root,~uVar4 - 1);
    if (poVar3 != (objOBJ *)0x0) {
      m3dMATR::GetScale((m3dMATR *)(poVar3 + 0x3c),(float *)&param_1,(float *)&param_1,
                        (float *)&param_1);
      this_00 = (wrsobGEYSER_SMOKE_IDLE *)operator_new(0x2c0);
      if (this_00 == (wrsobGEYSER_SMOKE_IDLE *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = wrsobGEYSER_SMOKE_IDLE::wrsobGEYSER_SMOKE_IDLE(this_00,(float)param_1);
      }
      *(int *)(this + 0x157) = iVar2;
      if (iVar2 != 0) {
        uVar4 = 0xffffffff;
        pcVar5 = s__idle_smoke_emitter;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        poVar3 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__idle_smoke_emitter,
                              ~uVar4 - 1);
        *(objOBJ **)(this + 0x15b) = poVar3;
        if (poVar3 != (objOBJ *)0x0) {
          objOBJ::GetOrigin(poVar3,local_18);
          partEMITTER_PHYS::SetPosDirSpeed
                    (*(partEMITTER_PHYS **)(this + 0x157),local_18,&m3dVUnitY,(m3dV *)0x0);
          this_01 = (wrsobGEYSER_SMOKE_EXPLODE *)operator_new(0x2c0);
          if (this_01 == (wrsobGEYSER_SMOKE_EXPLODE *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = wrsobGEYSER_SMOKE_EXPLODE::wrsobGEYSER_SMOKE_EXPLODE(this_01,(float)param_1);
          }
          *(int *)(this + 0x15f) = iVar2;
          if (iVar2 != 0) {
            uVar4 = 0xffffffff;
            pcVar5 = s__expl_smoke_emitter;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            poVar3 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__expl_smoke_emitter,
                                  ~uVar4 - 1);
            *(objOBJ **)(this + 0x163) = poVar3;
            if (poVar3 != (objOBJ *)0x0) {
              local_c = _m3dVUnitY * ___real_40c00000;
              local_8 = DAT_005f9994 * ___real_40c00000;
              local_4 = DAT_005f9998 * ___real_40c00000;
              partEMITTER_PHYS::SetPosDirSpeed
                        (*(partEMITTER_PHYS **)(this + 0x15f),(m3dV *)0x0,(m3dV *)0x0,
                         (m3dV *)&local_c);
              this_02 = (wrsobGEYSER_GLOW_EXPLODE *)operator_new(0x2c0);
              if (this_02 == (wrsobGEYSER_GLOW_EXPLODE *)0x0) {
                iVar2 = 0;
              }
              else {
                iVar2 = wrsobGEYSER_GLOW_EXPLODE::wrsobGEYSER_GLOW_EXPLODE(this_02,(float)param_1);
              }
              *(int *)(this + 0x167) = iVar2;
              if (iVar2 != 0) {
                uVar4 = 0xffffffff;
                pcVar5 = s__expl_glow_emitter;
                do {
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  cVar1 = *pcVar5;
                  pcVar5 = pcVar5 + 1;
                } while (cVar1 != '\0');
                poVar3 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),
                                      s__expl_glow_emitter,~uVar4 - 1);
                *(objOBJ **)(this + 0x16b) = poVar3;
                if (poVar3 != (objOBJ *)0x0) {
                  objOBJ::SetStateProcYes(poVar3,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
                  iVar2 = partSetAreaEmissionObj
                                    (*(partEMITTER_PHYS **)(this + 0x167),*(objOBJ **)(this + 0x16b)
                                     ,-1,(m3dV *)0x0);
                  if (iVar2 != 0) {
                    partEMITTER_PHYS::SetScaleCS
                              (*(partEMITTER_PHYS **)(this + 0x167),
                               (m3dMATR *)(*(int *)(this + 0x16b) + 0x3c));
                    UpdateState(this);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 2) {
    if (*(undefined4 **)(this + 0x167) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x167))(1);
      *(undefined4 *)(this + 0x167) = 0;
    }
    if (*(undefined4 **)(this + 0x15f) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x15f))(1);
      *(undefined4 *)(this + 0x15f) = 0;
    }
    if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x157))(1);
      *(undefined4 *)(this + 0x157) = 0;
      return 0;
    }
  }
  else if (param_1 == 1000) {
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,0,(float *)0x0);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    if (*(int *)(this + 0x14f) == 1) {
      objOBJ::GetOrigin(*(objOBJ **)(this + 0x15b),local_18);
      this_03 = *(partEMITTER_PHYS **)(this + 0x157);
    }
    else {
      objOBJ::GetOrigin(*(objOBJ **)(this + 0x163),local_18);
      this_03 = *(partEMITTER_PHYS **)(this + 0x15f);
    }
    partEMITTER_PHYS::SetPosDirSpeed(this_03,local_18,(m3dV *)0x0,(m3dV *)0x0);
    iVar2 = m3dUpdateTimeField((float *)(this + 0x153),gsElapsedTime);
    if (iVar2 != 0) {
      UpdateState(this);
      return 0;
    }
  }
  return 0;
}

