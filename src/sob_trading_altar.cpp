
/* from: sob_trading_altar.cpp
   addr: 0047F270 */

int __fastcall wrsobInitTradingAltar(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sob_tra_altar,0x2444594e,0x28,wrsobTRA_ALTAR::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sob_tra_button,0x4254544e,0x28,wrsobTRA_BUTTON::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sob_tra_camera,0x2444594e,0x28,wrsobTRA_CAMERA::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsobTRA_ALTAR::pTexPart = txmMANAGER::Add(txmManager,s_sfx_trading_altar_part,0x40003,1);
  if (wrsobTRA_ALTAR::pTexPart == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = wrsfxTradingAltarInit();
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_trading_altar.cpp
   addr: 0047F300 */

wrsfxTRADING_ALTAR_EMITTER * __thiscall
wrsfxTRADING_ALTAR_EMITTER::wrsfxTRADING_ALTAR_EMITTER
          (wrsfxTRADING_ALTAR_EMITTER *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,50.0,1.0);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.65,0.35);
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
  fVar2 = param_1 * ___real_40a00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,255.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsobTRA_ALTAR::pTexPart);
  fVar2 = param_1 * ___real_3e4ccccd;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_3dcccccd;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  *(uint *)(this + 4) = uVar1 | 0x100a409;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,0.1,1.0,0.1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}




/* from: sob_trading_altar.cpp
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0
   addr: 0047F4C0 */

void * __thiscall
pwpCRB_EXPL_FLAME::_vector_deleting_destructor_(pwpCRB_EXPL_FLAME *this,uint param_1)

{
  partEMITTER_PHYS::~partEMITTER_PHYS((partEMITTER_PHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_trading_altar.cpp
   addr: 0047F4E0 */

void __thiscall wrsobTRA_ALTAR::StartPowerup(wrsobTRA_ALTAR *this,wrsobTRA_BUTTON *param_1)

{
  objOBJ *this_00;
  undefined1 local_40;
  undefined1 local_3f;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  m3dV local_34 [12];
  m3dV local_28 [12];
  m3dV local_1c [12];
  m3dV local_10 [12];
  float local_4;
  
  local_40 = 0;
  local_3f = 0x40;
  local_3e = 0x40;
  local_3c = 0xc;
  *(wrsobTRA_BUTTON **)(this + 0x15b) = param_1;
  if (((byte)this[0x88] & 4) != 0) {
    local_38 = *(undefined4 *)(param_1 + 0x16b);
    local_4 = *(float *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90) + 0x50) *
              ___real_3a83126f;
    this_00 = *(objOBJ **)(param_1 + 0x15f);
    objOBJ::GetOrigin(this_00,local_1c);
    objOBJ::GetAxisZ(this_00,local_10);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_34);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_28);
    msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x163),0x40c,&local_40,(msgADDR *)this);
  }
  *(undefined4 *)(this + 0x14f) = 1;
  *(float *)(this + 0x153) =
       *(float *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x90) + 0x50) *
       ___real_3a83126f;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_trading_altar.cpp
   addr: 0047F5F0 */

int __thiscall
wrsobTRA_ALTAR::ProcessMsg
          (wrsobTRA_ALTAR *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  undefined **ppuVar1;
  char cVar2;
  undefined4 uVar3;
  objOBJ *poVar4;
  wrsfxTRADING_ALTAR_EMITTER *this_00;
  int iVar5;
  uint uVar6;
  float extraout_EDX;
  undefined **ppuVar7;
  char *pcVar8;
  undefined1 local_154;
  undefined1 local_153;
  undefined2 local_152;
  undefined4 local_150;
  undefined4 local_14c;
  float local_148;
  float local_144;
  float local_140;
  m3dV local_13c [12];
  animCREATE_DATA local_130 [18];
  m3dMATR local_11e [134];
  animCREATE_DATA local_98 [152];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (param_1 < 4) {
    if (param_1 == 3) {
      if (*(void **)(this + 0x163) == param_2) {
        *(undefined4 *)(this + 0x163) = 0;
        return 0;
      }
    }
    else if (param_1 == 1) {
      uVar6 = 0xffffffff;
      pcVar8 = s_place_effect;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_place_effect,~uVar6 - 1);
      *(objOBJ **)(this + 0x15f) = poVar4;
      if (poVar4 != (objOBJ *)0x0) {
        animINST::Validate(*(animINST **)(this + 0xbc),4);
        this_00 = (wrsfxTRADING_ALTAR_EMITTER *)operator_new(0x2c0);
        if (this_00 == (wrsfxTRADING_ALTAR_EMITTER *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = wrsfxTRADING_ALTAR_EMITTER::wrsfxTRADING_ALTAR_EMITTER(this_00,DAT_005d885c);
        }
        *(int *)(this + 0x157) = iVar5;
        if (iVar5 != 0) {
          uVar6 = 0xffffffff;
          pcVar8 = s_emitter;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter,~uVar6 - 1);
          if (poVar4 != (objOBJ *)0x0) {
            objOBJ::SetStateProcYes(poVar4,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
            iVar5 = partSetAreaEmissionObj
                              (*(partEMITTER_PHYS **)(this + 0x157),poVar4,-1,(m3dV *)0x0);
            if (iVar5 != 0) {
              partEMITTER_PHYS::SetScaleCS
                        (*(partEMITTER_PHYS **)(this + 0x157),(m3dMATR *)(poVar4 + 0x3c));
              partAttachInst(*(partEMITTER_PHYS **)(this + 0x157),*(animINST **)(this + 0xbc));
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
              if (PTR_s_pSphere1_005f2994 != (undefined *)0x0) {
                ppuVar7 = &PTR_s_pSphere1_005f2994;
                do {
                  uVar6 = 0xffffffff;
                  pcVar8 = *ppuVar7;
                  do {
                    if (uVar6 == 0) break;
                    uVar6 = uVar6 - 1;
                    cVar2 = *pcVar8;
                    pcVar8 = pcVar8 + 1;
                  } while (cVar2 != '\0');
                  poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),*ppuVar7,
                                        ~uVar6 - 1);
                  if (poVar4 != (objOBJ *)0x0) {
                    *(uint *)poVar4 = *(uint *)poVar4 | 0x20;
                  }
                  ppuVar1 = ppuVar7 + 1;
                  ppuVar7 = ppuVar7 + 1;
                } while (*ppuVar1 != (undefined *)0x0);
              }
              *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
              return 0;
            }
          }
        }
      }
    }
    else if ((param_1 == 2) && (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)(this + 0x157))(1);
      *(undefined4 *)(this + 0x157) = 0;
      return 0;
    }
  }
  else if ((param_1 == 1000) && (*(int *)(this + 0x14f) != 0)) {
    iVar5 = m3dUpdateTimeField((float *)(this + 0x153),extraout_EDX);
    if (iVar5 != 0) {
      if (*(int *)(this + 0x14f) == 1) {
        uVar3 = *(undefined4 *)(*(int *)(this + 0x15b) + 0x16b);
        animCREATE_DATA::animCREATE_DATA(local_130);
        *(undefined4 *)(this + 0x14f) = 2;
        local_154 = 0;
        local_153 = 0x40;
        local_150 = 0x3f800000;
        local_14c = 0xffffffff;
        local_152 = 0xc;
        *(float *)(this + 0x153) = DAT_005d8860;
        objOBJ::GetOrigin(*(objOBJ **)(this + 0x15f),local_13c);
        objOBJ::GetAxisY(*(objOBJ **)(*(int *)(this + 0x15b) + 0x167),(m3dV *)&local_148);
        local_144 = 0.0;
        m3dNormalize((m3dV *)&local_148);
        local_148 = -local_148;
        local_144 = -local_144;
        local_140 = -local_140;
        m3dMATR::MakeLCS2WCS_VZ(local_11e,local_13c,(m3dV *)&local_148);
        local_150 = DAT_005d8864;
        local_14c = uVar3;
        entCreate(gsScenePtr,s_sfx_trading_altar,s_sfx_trading_altar,local_130,&local_154,0);
        return 0;
      }
      if (*(int *)(this + 0x14f) == 2) {
        local_154 = 0;
        local_153 = 0x40;
        local_150 = 0xd;
        local_152 = 0xc;
        *(undefined4 *)(this + 0x14f) = 0;
        if ((*(msgADDR **)(this + 0x163) != (msgADDR *)0x0) && (((byte)this[0x88] & 4) != 0)) {
          local_14c = *(undefined4 *)(*(int *)(this + 0x15b) + 0x16b);
          msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x163),0x40c,&local_154,(msgADDR *)this
                            );
          (**(code **)(**(int **)(this + 0x15b) + 0x68))(*(undefined4 *)(this + 0x163));
          iVar5 = *(int *)(this + 0x15b);
          *(undefined4 *)(iVar5 + 0x173) = _DAT_005d8868;
          *(undefined4 *)(iVar5 + 0x16f) = 1;
          *(undefined4 *)(this + 0x15b) = 0;
        }
        *(undefined4 *)(this + 0x163) = 0;
      }
    }
  }
  return 0;
}




/* from: sob_trading_altar.cpp
   addr: 0047F9B0 */

int __thiscall wrsobTRA_BUTTON::IsCanPush(wrsobTRA_BUTTON *this,plgsACTION *param_1)

{
  int iVar1;
  m3dV amStack_20 [8];
  undefined1 local_18 [4];
  m3dV amStack_14 [20];
  
  if (*(int *)(this + 0x16f) != 0) {
    return 0;
  }
  if ((*(int *)(this + 0x16b) == 2) && (*(int *)(wrSysGO + 0x94) == 2)) {
    return 0;
  }
  if (*(int *)(*(int *)(*(int *)(this + 0x163) + 0x13c) + 0x163) != 0) {
    return 0;
  }
  if ((*(int *)(this + 0x30) < 1) &&
     (((*(uint *)(this + 0x14f) & 0x10) == 0 || ((*(uint *)(this + 0x14f) & 0x20) == 0)))) {
    (**(code **)(*(int *)param_1 + 0x68))(local_18);
    (**(code **)(*(int *)param_1 + 0x70))(&stack0xffffffd8);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x167),amStack_14);
    iVar1 = m3dIsBelongPointCone(amStack_14,amStack_20,(m3dV *)&stack0xffffffd4,2.0,0.0,90.0);
    return (uint)(iVar1 != 0);
  }
  return 0;
}




/* from: sob_trading_altar.cpp
   addr: 0047FAB0 */

int __thiscall wrsobTRA_BUTTON::Toggle(wrsobTRA_BUTTON *this,plgsACTION *param_1)

{
  wrsobTRA_ALTAR *this_00;
  int iVar1;
  
  if (((byte)this[0x14f] & 4) != 0) {
    this_00 = *(wrsobTRA_ALTAR **)(*(int *)(this + 0x163) + 0x13c);
    *(plgsACTION **)(this_00 + 0x163) = param_1;
    wrsobTRA_ALTAR::StartPowerup(this_00,this);
  }
  iVar1 = bttnBUTTON::Toggle((bttnBUTTON *)this,param_1);
  return iVar1;
}




/* from: sob_trading_altar.cpp
   addr: 0047FAF0 */

int __thiscall
wrsobTRA_BUTTON::ProcessMsg
          (wrsobTRA_BUTTON *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  objOBJ *poVar3;
  animINST *this_00;
  char *pcVar4;
  uint uVar5;
  float extraout_EDX;
  ulonglong uVar6;
  undefined8 extraout_MM1;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  char local_40 [64];
  
  bttnBUTTON::ProcessMsg((bttnBUTTON *)this,param_1,param_2,param_3,param_4);
  if (param_1 == 1) {
    uVar5 = 0xffffffff;
    pcVar4 = s_player_pos;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    poVar3 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_player_pos,~uVar5 - 1);
    *(objOBJ **)(this + 0x15f) = poVar3;
    if (poVar3 != (objOBJ *)0x0) {
      poVar3 = objFind(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),objIsNFace,(void *)0x0);
      *(objOBJ **)(this + 0x167) = poVar3;
      if (poVar3 != (objOBJ *)0x0) {
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x40;
        *(undefined4 *)(this + 0x163) = 0;
        objOBJ::GetOrigin(*(objOBJ **)(this + 0x167),(m3dV *)&local_4c);
        param_3 = DAT_005d8858;
        for (this_00 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0);
            this_00 != (animINST *)0x0; this_00 = scnSCENE::FindNextInst(gsScenePtr,this_00)) {
          pcVar4 = *(char **)(this_00 + 0x1c);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = s_;
          }
          iVar2 = stricmp(pcVar4,s_sob_tra_altar);
          if (iVar2 == 0) {
            animINST::GetPos(this_00,(m3dV *)&local_58);
            fVar9 = (local_58 - local_4c) * (local_58 - local_4c) +
                    (local_54 - local_48) * (local_54 - local_48) +
                    (local_50 - local_44) * (local_50 - local_44);
            if (m3dSimdType == 0) {
              fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
              fVar10 = auVar11._0_4_;
              param_4 = (int *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                                (`float___cdecl_m3dSqrt(float)'::__l2::three -
                                fVar9 * fVar10 * fVar10) * fVar9);
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar6 = (ulonglong)(uint)fVar9;
              uVar7 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar6);
              uVar8 = PackedFloatingMUL(uVar7,uVar7);
              uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
              uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
              uVar7 = PackedFloatingMUL(uVar7,uVar6);
              param_4 = (int *)uVar7;
              FastExitMediaState();
            }
            else {
              param_4 = (int *)SQRT(fVar9);
            }
            if ((*(int *)(this + 0x163) == 0) || ((float)param_4 <= (float)param_3)) {
              param_3 = (msgADDR *)param_4;
              *(animINST **)(this + 0x163) = this_00;
            }
          }
        }
        if ((*(int *)(this + 0x163) != 0) &&
           (iVar2 = animINST::GetStr(*(animINST **)(this + 0xbc),s_TRA_BUTTON,s_nameEffect,local_40,
                                     0x40), iVar2 != 0)) {
          iVar2 = stricmp(local_40,s_quad_damage);
          if (iVar2 == 0) {
            *(undefined4 *)(this + 0x16b) = 0;
            *(undefined4 *)(this + 0x94) = 1000;
            return 0;
          }
          iVar2 = stricmp(local_40,s_unholy_armor);
          if (iVar2 == 0) {
            *(undefined4 *)(this + 0x16b) = 1;
            *(undefined4 *)(this + 0x94) = 0x3e9;
            return 0;
          }
          iVar2 = stricmp(local_40,s_slow_motion);
          if (iVar2 == 0) {
            *(undefined4 *)(this + 0x16b) = 2;
            *(undefined4 *)(this + 0x94) = 0x3ea;
          }
        }
      }
    }
  }
  else if (((param_1 == 1000) && (*(int *)(this + 0x16f) != 0)) &&
          (iVar2 = m3dUpdateTimeField((float *)(this + 0x173),extraout_EDX), iVar2 != 0)) {
    *(undefined4 *)(this + 0x16f) = 0;
    return 0;
  }
  return 0;
}




/* from: sob_trading_altar.cpp
   addr: 0047FDF0 */

int __thiscall wrsobTRA_CAMERA::ProcessINIT(wrsobTRA_CAMERA *this,void *param_1)

{
  int iVar1;
  objOBJ *poVar2;
  wrsobTRA_CAMERA *pwVar3;
  undefined **ppuVar4;
  
  iVar1 = dynDYNAMIC::ProcessINIT((dynDYNAMIC *)this,param_1);
  if (iVar1 != 0) {
    ppuVar4 = &PTR_s_camera_qd_005f2988;
    pwVar3 = this + 0x177;
    do {
      poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),*ppuVar4);
      *(objOBJ **)pwVar3 = poVar2;
      if (poVar2 == (objOBJ *)0x0) {
        return 0;
      }
      ppuVar4 = ppuVar4 + 1;
      pwVar3 = pwVar3 + 4;
    } while ((int)ppuVar4 < 0x5f2994);
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
    *(uint *)(this + 0xb4) = *(uint *)(this + 0xb4) | 4;
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  }
  return 0;
}




/* from: sob_trading_altar.cpp
   addr: 0047FE70 */

entENTITY * __fastcall wrsobTRA_BUTTON::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x177);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0xffffffff;
    *(undefined4 *)(this + 0x157) = 0xffffffff;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x94) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x173) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sob_trading_altar.cpp
   addr: 0047FEF0
   addr: 0047FEF0 */

void * __thiscall wrsobTRA_BUTTON::_scalar_deleting_destructor_(wrsobTRA_BUTTON *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_trading_altar.cpp
   addr: 0047FF20 */

entENTITY * __fastcall wrsobTRA_CAMERA::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x183);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = _m3dVZero;
    *(undefined4 *)(this + 0x167) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x16b) = uVar1;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sob_trading_altar.cpp
   addr: 0047FFA0
   addr: 0047FFA0 */

void * __thiscall wrsobTRA_CAMERA::_scalar_deleting_destructor_(wrsobTRA_CAMERA *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sob_trading_altar.cpp
   addr: 0047FFD0 */

entENTITY * __fastcall wrsobTRA_ALTAR::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x167);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sob_trading_altar.cpp
   addr: 00480030
   addr: 00480030 */

void * __thiscall wrsobTRA_ALTAR::_scalar_deleting_destructor_(wrsobTRA_ALTAR *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

