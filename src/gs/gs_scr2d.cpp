
/* from: gs:gs_scr2d.cpp
   addr: 0051F250 */

int __fastcall gssInit(void)

{
  DAT_0095cd44 = (msgADDR *)operator_new(0x28);
  if (DAT_0095cd44 == (msgADDR *)0x0) {
    DAT_0095cd44 = (msgADDR *)0x0;
    return 0;
  }
  *(undefined4 *)(DAT_0095cd44 + 4) = 0;
  *(undefined4 *)(DAT_0095cd44 + 8) = 0;
  *(undefined4 *)(DAT_0095cd44 + 0xc) = 0;
  *(undefined4 *)(DAT_0095cd44 + 0x10) = 0x4d414452;
  *(undefined4 *)(DAT_0095cd44 + 0x14) = 0x24574950;
  *(undefined4 *)(DAT_0095cd44 + 0x18) = 0;
  *(undefined4 *)(DAT_0095cd44 + 0x1c) = 0x1e;
  *(undefined4 *)(DAT_0095cd44 + 0x20) = 0;
  *(undefined4 *)(DAT_0095cd44 + 0x24) = 0;
  *(undefined ***)DAT_0095cd44 = &gssINP_SYSTEM::_vftable_;
  msgSYSTEM::InsertAddr(&msgSystem,DAT_0095cd44,0,0);
  DAT_0095cd3c = (msgADDR *)operator_new(0x28);
  if (DAT_0095cd3c != (msgADDR *)0x0) {
    *(undefined4 *)(DAT_0095cd3c + 4) = 0;
    *(undefined4 *)(DAT_0095cd3c + 8) = 0;
    *(undefined4 *)(DAT_0095cd3c + 0xc) = 0;
    *(undefined4 *)(DAT_0095cd3c + 0x10) = 0x4d414452;
    *(undefined4 *)(DAT_0095cd3c + 0x14) = 0x24575244;
    *(undefined4 *)(DAT_0095cd3c + 0x18) = 0;
    *(undefined4 *)(DAT_0095cd3c + 0x1c) = 0x5a;
    *(undefined4 *)(DAT_0095cd3c + 0x20) = 0;
    *(undefined4 *)(DAT_0095cd3c + 0x24) = 0;
    *(undefined ***)DAT_0095cd3c = &gssREND_SYSTEM::_vftable_;
    msgSYSTEM::InsertAddr(&msgSystem,DAT_0095cd3c,0,0);
    return 1;
  }
  DAT_0095cd3c = (msgADDR *)0x0;
  return 0;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F310
   addr: 0051F310
   addr: 0051F310
   addr: 0051F310
   addr: 0051F310
   addr: 0051F310 */

void * __thiscall gspPLAY_SYSTEM::_vector_deleting_destructor_(gspPLAY_SYSTEM *this,uint param_1)

{
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F330 */

void __fastcall gssTerm(void)

{
  msgSYSTEM::DestroyAddr(&msgSystem,DAT_0095cd44);
  msgSYSTEM::DestroyAddr(&msgSystem,DAT_0095cd3c);
  return;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F360 */

void __fastcall gssResize(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  gssScreenDX = param_1;
  gssScreenDY = param_2;
  if (0 < DAT_0095cd40) {
    do {
      (**(code **)(*(int *)(&DAT_0095cc4c)[iVar1] + 4))(0,6,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0095cd40);
  }
  return;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F3A0 */

int __thiscall
gssINP_SYSTEM::ProcessMsg
          (gssINP_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (param_1 != 2) {
    if (param_1 == 1000) {
      ProcessInput(this);
    }
    return 0;
  }
  return 1;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F3D0 */

int __thiscall
gssREND_SYSTEM::ProcessMsg
          (gssREND_SYSTEM *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 < 0x3f5) {
    if (param_1 == 0x3f4) {
      if (((gsAppState & 0x40000U) != 0) && (iVar1 = 0, 0 < DAT_0095cd40)) {
        do {
          (**(code **)(*(int *)(&DAT_0095cc4c)[iVar1] + 4))(0,2,0);
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_0095cd40);
        return 0;
      }
    }
    else {
      if (param_1 == 2) {
        return 1;
      }
      if ((param_1 == 1000) && ((gsAppState & 0x40000U) != 0)) {
        (**(code **)(*(int *)gsSysRender + 0x14))();
        iVar1 = 0;
        if (0 < DAT_0095cd40) {
          do {
            if ((*(byte *)((int *)(&DAT_0095cc4c)[iVar1] + 1) & 2) != 0) {
              (**(code **)(*(int *)(&DAT_0095cc4c)[iVar1] + 4))(0,7,0);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < DAT_0095cd40);
        }
        if ((gsAppState & 0x1000U) == 0) {
          gscCURSOR::Draw(&gscCursor,gsCameraPtr);
        }
        (**(code **)(*(int *)gsSysRender + 0x18))(1);
        return 0;
      }
    }
  }
  else if (((param_1 == 0x3f5) && ((gsAppState & 0x40000U) != 0)) && (iVar1 = 0, 0 < DAT_0095cd40))
  {
    do {
      (**(code **)(*(int *)(&DAT_0095cc4c)[iVar1] + 4))(0,3,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0095cd40);
  }
  return 0;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F500 */

void __thiscall gssWND::gssWND(gssWND *this,gssRECT *param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0xc);
  return;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F550
   addr: 0051F550 */

void * __thiscall gssWND::_scalar_deleting_destructor_(gssWND *this,uint param_1)

{
  ~gssWND(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F570 */

void __thiscall gssWND::~gssWND(gssWND *this)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *(undefined ***)this = &_vftable_;
  if (*(int *)(this + 0x14) != 0) {
    iVar4 = 0;
    if (0 < *(int *)(this + 0x10)) {
      do {
        puVar3 = *(undefined4 **)(*(int *)(this + 0x14) + iVar4 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0x10));
    }
    apFree(*(void **)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
  }
  iVar2 = *(int *)(this + 0x1c);
  iVar4 = DAT_0095cd40 + -1;
  if (iVar2 < iVar4) {
    puVar3 = &DAT_0095cc50 + iVar2;
    puVar5 = &DAT_0095cc4c + iVar2;
    for (uVar1 = (DAT_0095cd40 - iVar2) * 4 - 4U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  iVar2 = 0;
  DAT_0095cd40 = iVar4;
  if (0 < iVar4) {
    do {
      *(int *)((&DAT_0095cc4c)[iVar2] + 0x1c) = iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0095cd40);
  }
  return;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F610 */

int __thiscall gssWND::Register(gssWND *this)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  *(int *)(this + 0x1c) = DAT_0095cd40;
  (&DAT_0095cc4c)[DAT_0095cd40] = this;
  DAT_0095cd40 = DAT_0095cd40 + 1;
  (**(code **)(*(int *)this + 4))(0,0,0);
  (**(code **)(*(int *)this + 4))(0,6,0);
  return 1;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F660 */

void __thiscall gssWND::Unregister(gssWND *this)

{
  (**(code **)(*(int *)this + 4))(0,1,0);
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffe;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_scr2d.cpp
   addr: 0051F680 */

gssAREA * __thiscall gssWND::CreateAreaObj(gssWND *this,gssRECT *param_1,int param_2,char *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  objOBJ *poVar4;
  gssAREA *pgVar5;
  char *pcVar6;
  float unaff_EBP;
  float fVar7;
  float *unaff_retaddr;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  poVar4 = gsIFACE_SYSTEM::FindObj(gsSysIFace,param_3);
  if (poVar4 == (objOBJ *)0x0) {
    return (gssAREA *)0x0;
  }
  pgVar5 = (gssAREA *)(**(code **)(*(int *)this + 0xc))(param_2);
  gsIFACE_SYSTEM::GetRectObj(gsSysIFace,poVar4,(gssRECT *)&stack0xffffffec);
  fVar2 = ___real_3f800000 / unaff_retaddr[2];
  fVar7 = *unaff_retaddr;
  fVar3 = ___real_3f800000 / unaff_retaddr[3];
  fVar1 = unaff_retaddr[1];
  if ((param_2 < 0) || (*(int *)(this + 0x10) <= param_2)) {
    apMsg(s_Invalid_area_ID);
  }
  else {
    *(gssAREA **)(*(int *)(this + 0x14) + param_2 * 4) = pgVar5;
    *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
    *(float *)(pgVar5 + 8) = (unaff_EBP - fVar7) * fVar2;
    *(float *)(pgVar5 + 0xc) = (fStack_10 - fVar1) * fVar3;
    *(float *)(pgVar5 + 0x10) = fVar2 * fStack_c;
    *(int *)(pgVar5 + 0x18) = param_2;
    *(undefined4 *)(pgVar5 + 0x28) = 0;
    *(float *)(pgVar5 + 0x14) = fVar3 * fStack_8;
    *(gssWND **)(pgVar5 + 0x2c) = this;
    *(undefined4 *)(pgVar5 + 0x7c) = 0xffffffff;
  }
  *(objOBJ **)(pgVar5 + 0x20) = poVar4;
  pcVar6 = strstr((char *)param_2,s__level);
  if (pcVar6 != (char *)0x0) {
    *(uint *)(pgVar5 + 4) = *(uint *)(pgVar5 + 4) | 0x10;
    pcVar6 = strstr((char *)param_2,s__level_gyr);
    if (pcVar6 != (char *)0x0) {
      *(uint *)(pgVar5 + 4) = *(uint *)(pgVar5 + 4) | 0x28;
    }
    fVar7 = m3dRandom();
    *(float *)(pgVar5 + 0x80) = fVar7;
  }
  pcVar6 = strstr((char *)param_2,s__hilite);
  if (pcVar6 != (char *)0x0) {
    objOBJ::SetStateRendNo(*(objOBJ **)(pgVar5 + 0x20),0x80);
    objOBJ::SetStateRendYes(*(objOBJ **)(pgVar5 + 0x20),0x40);
  }
  return pgVar5;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F7E0 */

void __thiscall gssWND::Show(gssWND *this)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) | 2;
  (**(code **)(*(int *)this + 4))(0,4,0);
  return;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F800 */

void __thiscall gssAREA::gssAREA(gssAREA *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (gssAREA)0x0;
  *(undefined4 *)(this + 0x74) = 0xff00fa00;
  *(undefined4 *)(this + 0x7c) = 1;
  return;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051F850
   addr: 0051F850 */

void * __thiscall gssAREA::_scalar_deleting_destructor_(gssAREA *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_scr2d.cpp
   addr: 0051F8A0 */

void __thiscall gssINP_SYSTEM::ProcessInput(gssINP_SYSTEM *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float local_1c;
  float local_18;
  
  gscCURSOR::UpdatePosMouse(&gscCursor);
  fVar4 = (float)gssScreenDX;
  local_1c = 0.0;
  local_18 = 1.0;
  fVar2 = ___real_00000000;
  if (fVar4 < ___real_00000000) {
    local_18 = 0.0;
    local_1c = fVar4;
    fVar2 = ___real_3f800000;
    fVar4 = ___real_00000000;
  }
  fVar3 = local_18 - fVar2;
  fVar1 = DAT_00948384 - local_1c;
  local_18 = 1.0;
  fVar4 = fVar4 - local_1c;
  local_1c = 0.0;
  fVar2 = (fVar1 * fVar3) / fVar4 + fVar2;
  fVar1 = (float)gssScreenDY;
  fVar4 = ___real_00000000;
  if (fVar1 < ___real_00000000) {
    local_18 = 0.0;
    local_1c = fVar1;
    fVar4 = ___real_3f800000;
    fVar1 = ___real_00000000;
  }
  fVar4 = ((local_18 - fVar4) * (DAT_00948388 - local_1c)) / (fVar1 - local_1c) + fVar4;
  iVar6 = DAT_0095cd40;
  if ((_DAT_0095cd48 & 3) == 0) {
    do {
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) break;
      DAT_0095cc48 = (int *)(&DAT_0095cc4c)[iVar6];
    } while ((((((DAT_0095cc48[1] & 2U) == 0) || ((DAT_0095cc48[1] & 4U) != 0)) ||
              ((float)DAT_0095cc48[8] < fVar2 == ((float)DAT_0095cc48[8] == fVar2))) ||
             (((float)DAT_0095cc48[10] + (float)DAT_0095cc48[8] < fVar2 ||
              ((float)DAT_0095cc48[9] < fVar4 == ((float)DAT_0095cc48[9] == fVar4))))) ||
            ((float)DAT_0095cc48[0xb] + (float)DAT_0095cc48[9] < fVar4));
    if (iVar6 == -1) {
      _DAT_00948380 = iVar6;
      return;
    }
    fVar3 = (float)DAT_0095cc48[10] + (float)DAT_0095cc48[8];
    local_18 = 1.0;
    fVar1 = (float)DAT_0095cc48[8];
    local_1c = fVar3;
    fVar5 = ___real_00000000;
    if (fVar3 < fVar1) {
      local_18 = 0.0;
      local_1c = fVar1;
      fVar1 = fVar3;
      fVar5 = ___real_3f800000;
    }
    fVar3 = local_18 - fVar5;
    local_18 = 1.0;
    fVar5 = ((fVar2 - fVar1) * fVar3) / (local_1c - fVar1) + fVar5;
    fVar1 = (float)DAT_0095cc48[0xb] + (float)DAT_0095cc48[9];
    fVar2 = (float)DAT_0095cc48[9];
    local_1c = fVar1;
    fVar3 = ___real_00000000;
    if (fVar1 < fVar2) {
      local_18 = 0.0;
      local_1c = fVar2;
      fVar2 = fVar1;
      fVar3 = ___real_3f800000;
    }
    iVar6 = DAT_0095cc48[4];
    fVar3 = ((local_18 - fVar3) * (fVar4 - fVar2)) / (local_1c - fVar2) + fVar3;
    do {
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) break;
      DAT_0095cd4c = *(int *)(DAT_0095cc48[5] + iVar6 * 4);
    } while (((*(float *)(DAT_0095cd4c + 8) < fVar5 == (*(float *)(DAT_0095cd4c + 8) == fVar5)) ||
             (*(float *)(DAT_0095cd4c + 0x10) + *(float *)(DAT_0095cd4c + 8) < fVar5)) ||
            ((*(float *)(DAT_0095cd4c + 0xc) < fVar3 == (*(float *)(DAT_0095cd4c + 0xc) == fVar3) ||
             (*(float *)(DAT_0095cd4c + 0x14) + *(float *)(DAT_0095cd4c + 0xc) < fVar3))));
    if (iVar6 == -1) {
      DAT_0095cd4c = 0;
    }
  }
  _DAT_0095cd48 = _DAT_0095cd48 & 0xfffffffe;
  if (((byte)gsSysInput[0x28] & 1) != 0) {
    (**(code **)(*DAT_0095cc48 + 4))(DAT_0095cd4c,9,0);
    _DAT_0095cd48 = _DAT_0095cd48 | 1;
  }
  _DAT_009483a0 = 0xffffffff;
  (**(code **)(*DAT_0095cc48 + 4))(DAT_0095cd4c,8,0);
  _DAT_00948380 = DAT_0095cc48[6];
  return;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051FBD0 */

void __fastcall gssURect2SRect(gssRECT *param_1,gssRECT *param_2)

{
  *(float *)param_2 = (float)gssScreenDX * *(float *)param_1;
  *(float *)(param_2 + 4) = (float)gssScreenDY * *(float *)(param_1 + 4);
  *(float *)(param_2 + 8) = (float)gssScreenDX * *(float *)(param_1 + 8);
  *(float *)(param_2 + 0xc) = (float)gssScreenDY * *(float *)(param_1 + 0xc);
  return;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051FC00 */

void __fastcall gssUCoord2SCoord(m2dV *param_1,m2dV *param_2)

{
  *(float *)param_2 = (float)gssScreenDX * *(float *)param_1;
  *(float *)(param_2 + 4) = (float)gssScreenDY * *(float *)(param_1 + 4);
  return;
}




/* from: gs:gs_scr2d.cpp
   addr: 0051FC20 */

void __fastcall gssURectWnd2URect(gssWND *param_1,gssRECT *param_2,gssRECT *param_3)

{
  *(float *)param_3 =
       *(float *)param_2 *
       ((*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x20)) - *(float *)(param_1 + 0x20)) +
       *(float *)(param_1 + 0x20);
  *(float *)(param_3 + 4) =
       *(float *)(param_2 + 4) *
       ((*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x24)) - *(float *)(param_1 + 0x24)) +
       *(float *)(param_1 + 0x24);
  *(float *)(param_3 + 8) = *(float *)(param_1 + 0x28) * *(float *)(param_2 + 8);
  *(float *)(param_3 + 0xc) = *(float *)(param_1 + 0x2c) * *(float *)(param_2 + 0xc);
  return;
}

