
/* from: ai_pjl.cpp
   addr: 0044C960 */

int __thiscall pjlSFX_TRAIL::StartSFX(pjlSFX_TRAIL *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  wrsfxPJL_TRAIL *this_00;
  int iVar1;
  objOBJ *poVar2;
  m3dV local_c [12];
  
  this_00 = (wrsfxPJL_TRAIL *)operator_new(0x2c0);
  if (this_00 == (wrsfxPJL_TRAIL *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = wrsfxPJL_TRAIL::wrsfxPJL_TRAIL(this_00,0.07);
  }
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(param_1 + 0xbc) + 0x10),s_trail_emitter);
  *(objOBJ **)(this + 4) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  if (*(int *)this != 0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 4),local_c);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)(param_1 + 0xe0));
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  return 1;
}




/* from: ai_pjl.cpp
   addr: 0044CA10
   addr: 0044CA10 */

void __thiscall pjlMACE_SFX::UpdateSFX(pjlMACE_SFX *this,physPHYS *param_1)

{
  m3dV local_c [12];
  
  if (*(int *)this != 0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 4),local_c);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)(param_1 + 0xe0));
  }
  return;
}

