
/* from: sob_katapult.cpp
   addr: 0047D800 */

int __fastcall wrsobInitKatapult(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sob_katapult,0x54524d50,0x28,wrsobKATAPULT::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: sob_katapult.cpp
   addr: 0047D830 */

int __thiscall
wrsobKATAPULT::ProcessMsg
          (wrsobKATAPULT *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  animINST *this_00;
  objOBJ *poVar2;
  char local_40 [64];
  
  dynDYNAMIC::ProcessMsg((dynDYNAMIC *)this,param_1,param_2,param_3,param_4);
  if (param_1 == 1) {
    *(float *)(this + 0x17b) = 20.0;
    animINST::GetFloat(*(animINST **)(this + 0xbc),s_KATAPULT,s_height,(float *)(this + 0x17b));
    iVar1 = animINST::GetStr(*(animINST **)(this + 0xbc),s_KATAPULT,s_target,local_40,0x40);
    if ((iVar1 != 0) &&
       (this_00 = scnSCENE::FindInstName(gsScenePtr,local_40), this_00 != (animINST *)0x0)) {
      animINST::GetPos(this_00,(m3dV *)(this + 0x17f));
    }
    poVar2 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_chasha,6);
    *(objOBJ **)(this + 0x177) = poVar2;
  }
  else if (((param_1 == 1000) && (*(int *)(this + 0x177) != 0)) &&
          (iVar1 = *(int *)(this + 0xbc), *(int *)(iVar1 + 0xe0) == 1)) {
    if ((*(byte *)(iVar1 + 0x28) & 1) != 0) {
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x10;
      iVar1 = (**(code **)(*(int *)plgsPlayer + 0xa0))(*(undefined4 *)(this + 0xbc));
      if (iVar1 == 0) {
        return 0;
      }
      (**(code **)(*(int *)plgsPlayer + 0x68))(&stack0xffffff9c);
      cgmGetThrowSpeed_H((m3dV *)&stack0xffffff98,(m3dV *)(this + 0x17f),*(float *)(this + 0x17b),
                         -30.0,(m3dV *)&stack0xffffffa4);
      (**(code **)(*(int *)plgsPlayer + 0xa4))(&stack0xffffffa4,0);
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
    }
    iVar1 = *(int *)(this + 0xbc);
    if ((*(byte *)(iVar1 + 0x28) & 2) != 0) {
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffffef;
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sob_katapult.cpp
   addr: 0047D9F0 */

entENTITY * __fastcall wrsobKATAPULT::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x18b);
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
    *(undefined ***)this = &dynDYNAMIC::_vftable_;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = _m3dVUndef;
    *(undefined4 *)(this + 0x183) = DAT_0096374c;
    uVar1 = DAT_00963750;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x187) = uVar1;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sob_katapult.cpp
   addr: 0047DAA0
   addr: 0047DAA0 */

void * __thiscall wrsobKATAPULT::_scalar_deleting_destructor_(wrsobKATAPULT *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

