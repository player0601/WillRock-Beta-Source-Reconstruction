
/* from: engine:obj_mod_anim.cpp
   addr: 004D2430 */

objMOD_BILLBOARD * __thiscall objMOD_BILLBOARD::objMOD_BILLBOARD(objMOD_BILLBOARD *this)

{
  objMODIFIER::objMODIFIER((objMODIFIER *)this,0x424c4244,0x5a);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x10) = 0x10004;
  *(undefined4 *)(this + 0x14) = 0x10000;
  m3dMATR::Identity((m3dMATR *)(this + 0x1c));
  m3dMATR::Identity((m3dMATR *)(this + 0x5c));
  return this;
}




/* from: engine:obj_mod_anim.cpp
   addr: 004D2470
   addr: 004D2470 */

void * __thiscall
objMOD_BILLBOARD::_scalar_deleting_destructor_(objMOD_BILLBOARD *this,uint param_1)

{
  objMODIFIER::~objMODIFIER((objMODIFIER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:obj_mod_anim.cpp
   addr: 004D2490 */

int __thiscall objMOD_BILLBOARD::AddObj(objMOD_BILLBOARD *this,objOBJ *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  m3dMATR *pmVar3;
  
  iVar1 = objMODIFIER::AddObj((objMODIFIER *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(uint *)(this + 4) & 0x4000) != 0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x2c) + 0x3c);
    pmVar3 = (m3dMATR *)(this + 0x1c);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pmVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      pmVar3 = pmVar3 + 4;
    }
    m3dMATR::Invert((m3dMATR *)(this + 0x1c),(m3dMATR *)(this + 0x5c));
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod_anim.cpp
   addr: 004D24E0 */

int __thiscall objMOD_BILLBOARD::Modify(objMOD_BILLBOARD *this)

{
  int iVar1;
  undefined4 *puVar2;
  m3dMATR *pmVar3;
  float10 fVar4;
  float fVar5;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  m3dV local_4c [4];
  undefined4 local_48;
  m3dMATR local_40 [64];
  
  if ((DAT_00934484 & 1) == 0) {
    DAT_00934484 = DAT_00934484 | 1;
    fVar4 = (float10)fcos((float10)_DAT_005dbd90 * (float10)___real_3de38e39);
    _DAT_0093447c = (float)fVar4;
  }
  m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x18) + 0x3c),(m3dV *)&local_58);
  m3dMATR::GetAxisZ((m3dMATR *)(*(int *)(this + 0x18) + 0x3c),local_4c);
  local_64 = _viewPos - local_58;
  local_60 = _DAT_0093446c - local_54;
  local_5c = _DAT_00934470 - local_50;
  fVar5 = m3dAngleVector_COS(local_4c,(m3dV *)&local_64);
  if (_DAT_0093447c < fVar5) {
    return 1;
  }
  if ((*(uint *)(this + 4) & 0x2000) != 0) {
    local_60 = 0.0;
    local_48 = 0;
  }
  m3dMATR::MakeRot(local_40,(m3dV *)&local_58,local_4c,(m3dV *)&local_64);
  m3dMATR::Transform((m3dMATR *)(*(int *)(this + 0x18) + 0x3c),local_40,2);
  if (*(int *)(*(int *)(this + 0x18) + 0x2c) != 0) {
    if (((*(uint *)(this + 4) & 0x4000) == 0) ||
       (iVar1 = m3dIsEqualMatr_A((m3dMATR *)(*(int *)(*(int *)(this + 0x18) + 0x2c) + 0x3c),
                                 (m3dMATR *)(this + 0x1c),DAT_005dbd8c,DAT_005dbd8c), iVar1 == 0)) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(this + 0x18) + 0x2c) + 0x3c);
      pmVar3 = (m3dMATR *)(this + 0x1c);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pmVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        pmVar3 = pmVar3 + 4;
      }
      m3dMATR::Invert((m3dMATR *)(this + 0x1c),(m3dMATR *)(this + 0x5c));
    }
    m3dMultiplyMatr((m3dMATR *)(*(int *)(this + 0x18) + 0x3c),(m3dMATR *)(this + 0x5c),
                    (m3dMATR *)(*(int *)(this + 0x18) + 0x7c));
    return 1;
  }
  return 1;
}

