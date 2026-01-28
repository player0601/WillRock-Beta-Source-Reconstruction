
/* from: sfx_mirrors.cpp
   addr: 00472210 */

int __fastcall wrsfxMirrorsInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_mirrors,0x24534658,0x50,wrsfxMIRRORS::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxMIRRORS::pTexPart = txmMANAGER::Add(txmManager,s_sfx_mirror_part,0x40003,1);
  return (uint)(wrsfxMIRRORS::pTexPart != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_mirrors.cpp
   addr: 00472260 */

wrsfxMIRRORS_EMITTER * __thiscall
wrsfxMIRRORS_EMITTER::wrsfxMIRRORS_EMITTER(wrsfxMIRRORS_EMITTER *this,float param_1)

{
  m3dSPL *pmVar1;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,30.0,1.5);
  *(undefined ***)this = &_vftable_;
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.033333335,30.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,30.0,(m3dSPL_LINEAR1D *)pmVar1);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.85,0.65);
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar1 + 4) = 0;
    *(undefined4 *)(pmVar1 + 8) = 0;
    *(undefined4 *)(pmVar1 + 0xc) = 0;
    *(undefined4 *)(pmVar1 + 0x14) = 8;
    *(undefined4 *)(pmVar1 + 0x18) = 8;
    *(undefined4 *)(pmVar1 + 0x1c) = 1;
    *(undefined4 *)(pmVar1 + 0x20) = 0;
    *(undefined4 *)(pmVar1 + 0x24) = 0;
    *(undefined4 *)(pmVar1 + 0x28) = 0;
    *(undefined4 *)(pmVar1 + 0x2c) = 0;
    *(undefined4 *)(pmVar1 + 0x30) = 0;
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,param_1 * ___real_00000000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,1.0,param_1 * ___real_42340000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_41f00000,0.0,(m3dSPL_LINEAR1D *)pmVar1,1.0);
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar1,0,8,1);
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,0.5,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar1);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxMIRRORS::pTexPart);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  return this;
}




/* from: sfx_mirrors.cpp
   addr: 00472460 */

int __thiscall
wrsfxMIRRORS::ProcessMsg(wrsfxMIRRORS *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  wrsfxMIRRORS_EMITTER *pwVar2;
  int iVar3;
  objOBJ *poVar4;
  uint uVar5;
  char *pcVar6;
  m3dV local_c [12];
  
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      if (*(int *)(this + 0x15b) != 0) {
        animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,0,(float *)0x0);
        return 0;
      }
    }
    else if (param_1 == 1) {
      animINST::Validate(*(animINST **)(this + 0xbc),4);
      pwVar2 = (wrsfxMIRRORS_EMITTER *)operator_new(0x2c0);
      if (pwVar2 == (wrsfxMIRRORS_EMITTER *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = wrsfxMIRRORS_EMITTER::wrsfxMIRRORS_EMITTER(pwVar2,0.21000001);
      }
      *(int *)(this + 0x14f) = iVar3;
      if (iVar3 != 0) {
        uVar5 = 0xffffffff;
        pcVar6 = s__mask_emitter;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__mask_emitter,~uVar5 - 1)
        ;
        if (poVar4 != (objOBJ *)0x0) {
          objOBJ::GetOrigin(poVar4,local_c);
          partEMITTER_PHYS::SetPosDirSpeed
                    (*(partEMITTER_PHYS **)(this + 0x14f),local_c,(m3dV *)0x0,(m3dV *)0x0);
          pwVar2 = (wrsfxMIRRORS_EMITTER *)operator_new(0x2c0);
          if (pwVar2 == (wrsfxMIRRORS_EMITTER *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = wrsfxMIRRORS_EMITTER::wrsfxMIRRORS_EMITTER(pwVar2,0.14);
          }
          *(int *)(this + 0x153) = iVar3;
          if (iVar3 != 0) {
            uVar5 = 0xffffffff;
            pcVar6 = s__mirror_emitter;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            poVar4 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__mirror_emitter,
                                  ~uVar5 - 1);
            if (poVar4 != (objOBJ *)0x0) {
              objOBJ::GetOrigin(poVar4,local_c);
              partEMITTER_PHYS::SetPosDirSpeed
                        (*(partEMITTER_PHYS **)(this + 0x153),local_c,(m3dV *)0x0,(m3dV *)0x0);
              *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
              *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
              *(undefined4 *)(this + 0x15b) = 0;
              return 0;
            }
          }
        }
      }
    }
    else if (param_1 == 2) {
      if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x153))(1);
        *(undefined4 *)(this + 0x153) = 0;
      }
      if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x14f))(1);
        *(undefined4 *)(this + 0x14f) = 0;
        return 0;
      }
    }
  }
  else if (param_1 == 0x3f8) {
    iVar3 = apNAME::IsName((apNAME *)((int)param_2 + 8),&s_LOCK);
    if (iVar3 == 0) {
      iVar3 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_UNLOCK);
      if ((iVar3 != 0) && (*(int *)(this + 0x15b) == 0)) {
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
        animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
        *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
        *(undefined4 *)(this + 0x15b) = 1;
      }
    }
    else if (*(int *)(this + 0x15b) != 0) {
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x14f));
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
      *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
      *(undefined4 *)(this + 0x15b) = 0;
      return 0;
    }
  }
  return 0;
}




/* from: sfx_mirrors.cpp
   addr: 00472720 */

entENTITY * __fastcall wrsfxMIRRORS::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x15f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_mirrors.cpp
   addr: 00472770
   addr: 00472770 */

void * __thiscall wrsfxMIRRORS::_vector_deleting_destructor_(wrsfxMIRRORS *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

