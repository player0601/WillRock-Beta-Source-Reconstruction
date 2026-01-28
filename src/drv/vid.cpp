
/* from: drv:vid.cpp
   addr: 004A4E90 */

int __fastcall vidInit(void)

{
  int iVar1;
  
  DAT_00611fe0 = 0;
  iVar1 = d3dEnumDevices();
  if (iVar1 != 0) {
    iVar1 = d3dGetDrvList((vidDRIVER **)(&DAT_00611fe8 + DAT_00611fe0),1);
    DAT_00611fe0 = DAT_00611fe0 + iVar1;
  }
  return 1;
}




/* from: drv:vid.cpp
   addr: 004A4ED0 */

void __fastcall vidTerm(void)

{
  if (vidDriver != (vidDRIVER *)0x0) {
    (**(code **)(*(int *)vidDriver + 8))();
    vidDriver = (vidDRIVER *)0x0;
  }
  d3dDropDrvList();
  DAT_00611fe0 = 0;
  return;
}




/* from: drv:vid.cpp
   addr: 004A4F00 */

int __fastcall vidGetDriverList(vidDRIVER ***param_1)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0xc);
  ReleaseDC((HWND)0x0,hdc);
  iVar5 = 0;
  if (0 < (int)DAT_00611fe0) {
    piVar4 = &DAT_00611fe8;
    do {
      *(uint *)(*piVar4 + 4) = *(uint *)(*piVar4 + 4) & 0xfffffff7;
      iVar6 = 0;
      if (0 < *(int *)(*piVar4 + 0x244)) {
        do {
          iVar3 = *(int *)(*piVar4 + 0x248);
          iVar2 = *(int *)(*piVar4 + 0x240) * iVar6;
          *(uint *)(iVar2 + iVar3) = *(uint *)(iVar2 + iVar3) & 0xfffffffd;
          iVar3 = *piVar4;
          iVar2 = *(int *)(iVar3 + 0x248);
          if (*(int *)(*(int *)(iVar3 + 0x240) * iVar6 + 0x10 + iVar2) == iVar1) {
            iVar3 = *(int *)(iVar3 + 0x240) * iVar6;
            *(uint *)(iVar3 + iVar2) = *(uint *)(iVar3 + iVar2) | 2;
            *(uint *)(*piVar4 + 4) = *(uint *)(*piVar4 + 4) | 8;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(*piVar4 + 0x244));
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < (int)DAT_00611fe0);
  }
  qsort(&DAT_00611fe8,DAT_00611fe0,4,_vidCompDrv);
  *param_1 = (vidDRIVER **)&DAT_00611fe8;
  return DAT_00611fe0;
}




/* from: drv:vid.cpp
   addr: 004A4FF0 */

vidDRIVER * __fastcall vidFindBestDriver(void)

{
  return (vidDRIVER *)(-(uint)(DAT_00611fe0 != 0) & DAT_00611fe8);
}




/* from: drv:vid.cpp
   addr: 004A5010 */

vidDRIVER * __fastcall vidFindDriver(char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (0 < DAT_00611fe0) {
    do {
      pbVar2 = (byte *)((&DAT_00611fe8)[iVar5] + 8);
      pbVar4 = (byte *)param_1;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_004a5052:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_004a5057;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_004a5052;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_004a5057:
      if (iVar3 == 0) {
        return (vidDRIVER *)(&DAT_00611fe8)[iVar5];
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_00611fe0);
  }
  return (vidDRIVER *)0x0;
}




/* from: drv:vid.cpp
   addr: 004A5080 */

int __fastcall vidSelectDriver(vidDRIVER *param_1)

{
  int iVar1;
  
  if ((vidDriver != (vidDRIVER *)0x0) && (vidDriver != param_1)) {
    (**(code **)(*(int *)vidDriver + 8))();
    vidDriver = (vidDRIVER *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x004a50a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(int *)param_1 + 4))();
  return iVar1;
}




/* from: drv:vid.cpp
   addr: 004A50B0 */

void __thiscall vidDRIVER::vidDRIVER(vidDRIVER *this,int param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + 0x240) = param_1;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  this[8] = (vidDRIVER)0x0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x218) = 0x3e0f5c29;
  *(undefined4 *)(this + 0x21c) = 0x3f800000;
  *(undefined4 *)(this + 0x220) = 0x42c80000;
  *(undefined4 *)(this + 0x224) = 0x3f800000;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  return;
}




/* from: drv:vid.cpp
   addr: 004A5120
   addr: 004A5120 */

void * __thiscall vidDRIVER::_scalar_deleting_destructor_(vidDRIVER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x248));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:vid.cpp
   addr: 004A5150 */

void __thiscall vidDRIVER::~vidDRIVER(vidDRIVER *this)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x248));
  return;
}




/* from: drv:vid.cpp
   addr: 004A5170 */

vidMODE * __thiscall vidDRIVER::AddMode(vidDRIVER *this)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = apRealloc(*(void **)(this + 0x248),(*(int *)(this + 0x244) + 1) * *(int *)(this + 0x240))
  ;
  if (pvVar2 == (void *)0x0) {
    return (vidMODE *)0x0;
  }
  iVar1 = *(int *)(this + 0x244);
  *(void **)(this + 0x248) = pvVar2;
  *(int *)(this + 0x244) = iVar1 + 1;
  *(undefined4 *)(iVar1 * *(int *)(this + 0x240) + (int)pvVar2) = 0;
  *(undefined4 *)
   ((*(int *)(this + 0x244) + -1) * *(int *)(this + 0x240) + 4 + *(int *)(this + 0x248)) = 0;
  *(undefined4 *)
   ((*(int *)(this + 0x244) + -1) * *(int *)(this + 0x240) + 8 + *(int *)(this + 0x248)) = 0;
  *(undefined4 *)
   ((*(int *)(this + 0x244) + -1) * *(int *)(this + 0x240) + 0xc + *(int *)(this + 0x248)) = 0;
  *(undefined4 *)
   ((*(int *)(this + 0x244) + -1) * *(int *)(this + 0x240) + 0x10 + *(int *)(this + 0x248)) = 0;
  *(undefined4 *)
   ((*(int *)(this + 0x244) + -1) * *(int *)(this + 0x240) + 0x14 + *(int *)(this + 0x248)) = 0;
  return (vidMODE *)
         ((*(int *)(this + 0x244) + -1) * *(int *)(this + 0x240) + *(int *)(this + 0x248));
}




/* from: drv:vid.cpp
   addr: 004A5250 */

vidMODE * __thiscall vidDRIVER::operator[](vidDRIVER *this,int param_1)

{
  return (vidMODE *)(*(int *)(this + 0x240) * param_1 + *(int *)(this + 0x248));
}




/* from: drv:vid.cpp
   addr: 004A5270 */

vidMODE * __thiscall vidDRIVER::FindMode(vidDRIVER *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x244)) {
    piVar1 = (int *)(*(int *)(this + 0x248) + 0xc);
    do {
      if (((piVar1[-1] == param_1) && (*piVar1 == param_2)) && (piVar1[1] == param_3)) {
        return (vidMODE *)(*(int *)(this + 0x240) * iVar2 + *(int *)(this + 0x248));
      }
      iVar2 = iVar2 + 1;
      piVar1 = (int *)((int)piVar1 + *(int *)(this + 0x240));
    } while (iVar2 < *(int *)(this + 0x244));
  }
  return (vidMODE *)0x0;
}




/* from: drv:vid.cpp
   addr: 004A52F0 */

int __thiscall vidDRIVER::SetMode(vidDRIVER *this,vidMODE *param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  
  if (0x100 < param_3) {
    return 0;
  }
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 & 0x1000000) != 0) {
    return 0;
  }
  if (((*(vidMODE **)(this + 0x210) != param_1) || (*(void **)(this + 0x214) != param_2)) ||
     ((char)*(undefined4 *)(*(vidMODE **)(this + 0x210) + 0x14) != (char)param_3)) {
    if (((uVar1 & 0x2000000) != 0) && ((uVar1 & 0x100) == 0)) {
      return 0;
    }
    if (((param_3 & 1) != 0) && (((uVar1 & 4) == 0 || (((byte)*param_1 & 2) == 0)))) {
      param_3 = param_3 & 0xfffffffe;
    }
    if (((param_3 & 2) != 0) && ((param_3 & 1) != 0)) {
      param_3 = param_3 & 0xfffffffd;
    }
    if (((param_3 & 4) != 0) && (((byte)*param_1 & 8) == 0)) {
      param_3 = param_3 & 0xfffffffb;
    }
    if (((param_3 & 8) != 0) && ((uVar1 & 0x200) == 0)) {
      param_3 = param_3 & 0xfffffff7;
    }
    if (((param_3 & 0x20) != 0) && (((uVar1 & 0x10000) == 0 || (((byte)*param_1 & 4) == 0)))) {
      param_3 = param_3 & 0xffffffdf;
    }
    *(ulong *)(param_1 + 0x14) = param_3;
    *(vidMODE **)(this + 0x210) = param_1;
    *(void **)(this + 0x214) = param_2;
    *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2000000;
  }
  return 1;
}




/* from: drv:vid.cpp
   addr: 004A53C0 */

void __thiscall vidDRIVER::SetNTexStageUse(vidDRIVER *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x234);
  if ((0 < param_1) && (param_1 < iVar1)) {
    iVar1 = param_1;
  }
  *(int *)(this + 0x238) = iVar1;
  return;
}




/* from: drv:vid.cpp
   addr: 004A53E0 */

int __thiscall vidDRIVER::InitHW(vidDRIVER *this)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1000000;
  return 1;
}




/* from: drv:vid.cpp
   addr: 004A5420 */

int __thiscall vidDRIVER::ToggleModeParam(vidDRIVER *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = *(uint *)(this + 4);
  if (((uVar2 & 0x1000000) != 0) && (iVar4 = *(int *)(this + 0x210), iVar4 != 0)) {
    uVar1 = *(uint *)(iVar4 + 0x14);
    if (((param_1 & 0x100U) != 0) && (-1 < (char)uVar2)) {
      param_1 = param_1 & 0xfffffeff;
    }
    if (*(int *)(this + 0x234) < *(int *)(this + 0x238)) {
      *(int *)(this + 0x238) = *(int *)(this + 0x234);
    }
    if (((param_1 & 0x1000U) != 0) && ((uVar2 & 0x10) == 0)) {
      param_1 = param_1 & 0xffffefff;
    }
    if (((param_1 & 0x20000000U) != 0) && ((uVar2 & 0x80000) == 0)) {
      param_1 = param_1 & 0xdfffffff;
    }
    if ((param_1 & 0x100U) != 0) {
      if (param_2 == 0) {
        uVar2 = *(uint *)(iVar4 + 0x14) & 0xfffffeff;
      }
      else {
        uVar2 = *(uint *)(iVar4 + 0x14) | 0x100;
      }
      *(uint *)(iVar4 + 0x14) = uVar2;
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14) & 0x100;
      if (((uVar2 != 0) && ((uVar1 & 0x100) == 0)) || (((uVar1 & 0x100) != 0 && (uVar2 == 0)))) {
        (**(code **)(*(int *)this + 0x70))(param_2);
      }
    }
    if ((param_1 & 0x200U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xfffffdff;
      }
      else {
        uVar2 = uVar2 | 0x200;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14) & 0x200;
      if (((uVar2 != 0) && ((uVar1 & 0x200) == 0)) || (((uVar1 & 0x200) != 0 && (uVar2 == 0)))) {
        (**(code **)(*(int *)this + 0x58))(param_2);
      }
    }
    if ((param_1 & 0x400U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xfffffbff;
      }
      else {
        uVar2 = uVar2 | 0x400;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14) & 0x400;
      if (((uVar2 != 0) && ((uVar1 & 0x400) == 0)) || (((uVar1 & 0x400) != 0 && (uVar2 == 0)))) {
        (**(code **)(*(int *)this + 0x5c))(param_2);
      }
    }
    if ((param_1 & 0x20000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xfffdffff;
      }
      else {
        uVar2 = uVar2 | 0x20000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14) & 0x20000;
      if (((uVar2 != 0) && ((uVar1 & 0x20000) == 0)) || (((uVar1 & 0x20000) != 0 && (uVar2 == 0))))
      {
        (**(code **)(*(int *)this + 0x60))(param_2);
      }
    }
    if ((param_1 & 0x800U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xfffff7ff;
      }
      else {
        uVar2 = uVar2 | 0x800;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14) & 0x800;
      if (((uVar2 != 0) && ((uVar1 & 0x800) == 0)) || (((uVar1 & 0x800) != 0 && (uVar2 == 0)))) {
        (**(code **)(*(int *)this + 0x68))(param_2);
      }
    }
    if ((param_1 & 0x1000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xffffefff;
      }
      else {
        uVar2 = uVar2 | 0x1000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14) & 0x1000;
      if (((uVar2 != 0) && ((uVar1 & 0x1000) == 0)) || (((uVar1 & 0x1000) != 0 && (uVar2 == 0)))) {
        if (((*(uint *)(*(int *)(this + 0x210) + 0x14) & 0x2000) == 0) || (uVar2 == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        (**(code **)(*(int *)this + 100))(uVar3);
      }
    }
    if ((param_1 & 0x2000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xffffdfff;
      }
      else {
        uVar2 = uVar2 | 0x2000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14) & 0x2000;
      if (((uVar2 != 0) && ((uVar1 & 0x2000) == 0)) || (((uVar1 & 0x2000) != 0 && (uVar2 == 0)))) {
        if ((uVar2 == 0) || ((*(uint *)(*(int *)(this + 0x210) + 0x14) & 0x1000) == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        (**(code **)(*(int *)this + 100))(uVar3);
      }
    }
    if ((param_1 & 0x4000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xffffbfff;
      }
      else {
        uVar2 = uVar2 | 0x4000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((char)((uint)param_1 >> 8) < '\0') {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xffff7fff;
      }
      else {
        uVar2 = uVar2 | 0x8000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x80000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xfff7ffff;
      }
      else {
        uVar2 = uVar2 | 0x80000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x8000000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xf7ffffff;
      }
      else {
        uVar2 = uVar2 | 0x8000000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x200000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xffdfffff;
      }
      else {
        uVar2 = uVar2 | 0x200000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x1000000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xfeffffff;
      }
      else {
        uVar2 = uVar2 | 0x1000000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x2000000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xfdffffff;
      }
      else {
        uVar2 = uVar2 | 0x2000000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x4000000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xfbffffff;
      }
      else {
        uVar2 = uVar2 | 0x4000000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x800000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xff7fffff;
      }
      else {
        uVar2 = uVar2 | 0x800000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x400000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xffbfffff;
      }
      else {
        uVar2 = uVar2 | 0x400000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x10000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xfffeffff;
      }
      else {
        uVar2 = uVar2 | 0x10000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x40000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xfffbffff;
      }
      else {
        uVar2 = uVar2 | 0x40000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14) & 0x40000;
      if (((uVar2 != 0) && ((uVar1 & 0x40000) == 0)) || (((uVar1 & 0x40000) != 0 && (uVar2 == 0))))
      {
        (**(code **)(*(int *)this + 0x6c))(param_2);
      }
    }
    if ((param_1 & 0x100000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xffefffff;
      }
      else {
        uVar2 = uVar2 | 0x100000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14) & 0x100000;
      if (((uVar2 != 0) && ((uVar1 & 0x100000) == 0)) || (((uVar1 & 0x100000) != 0 && (uVar2 == 0)))
         ) {
        (**(code **)(*(int *)this + 0x74))(param_2);
      }
    }
    if ((param_1 & 0x10000000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xefffffff;
      }
      else {
        uVar2 = uVar2 | 0x10000000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x20000000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xdfffffff;
      }
      else {
        uVar2 = uVar2 | 0x20000000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if ((param_1 & 0x40000000U) != 0) {
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14);
      if (param_2 == 0) {
        uVar2 = uVar2 & 0xbfffffff;
      }
      else {
        uVar2 = uVar2 | 0x40000000;
      }
      *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar2;
    }
    if (param_1 < 0) {
      if (((param_2 == 0) || ((param_1 & 0x20U) == 0)) || ((*(uint *)(this + 4) & 0x10000) == 0)) {
        iVar4 = *(int *)(this + 0x210);
        uVar2 = *(uint *)(iVar4 + 0x14) & 0x7fffffff;
      }
      else {
        iVar4 = *(int *)(this + 0x210);
        uVar2 = *(uint *)(iVar4 + 0x14) | 0x80000000;
      }
      *(uint *)(iVar4 + 0x14) = uVar2;
      uVar2 = *(uint *)(*(int *)(this + 0x210) + 0x14) & 0x80000000;
      if (((uVar2 != 0) && (-1 < (int)uVar1)) || (((int)uVar1 < 0 && (uVar2 == 0)))) {
        (**(code **)(*(int *)this + 0x78))(param_2);
      }
    }
    return 1;
  }
  return 0;
}




/* from: drv:vid.cpp
   addr: 004A5A00 */

void __thiscall vidDRIVER::SetNearFarZValue(vidDRIVER *this,float param_1,float param_2)

{
  *(float *)(this + 0x21c) = param_1;
  *(float *)(this + 0x220) = param_2;
  return;
}




/* from: drv:vid.cpp
   addr: 004A5A20 */

void __thiscall vidDRIVER::GetNearFarZValue(vidDRIVER *this,float *param_1,float *param_2)

{
  if (param_1 != (float *)0x0) {
    *param_1 = *(float *)(this + 0x21c);
  }
  if (param_2 != (float *)0x0) {
    *param_2 = *(float *)(this + 0x220);
  }
  return;
}




/* from: drv:vid.cpp
   addr: 004A5A60 */

int __thiscall vidDRIVER::GetGamma(vidDRIVER *this,float *param_1)

{
  if (((byte)this[4] & 0x40) == 0) {
    return 0;
  }
  *param_1 = *(float *)(this + 0x218);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:vid.cpp
   addr: 004A5A80 */

int __thiscall vidDRIVER::SetGamma(vidDRIVER *this,float param_1)

{
  if (((((byte)this[4] & 0x40) != 0) && (_DAT_005db1b4 <= param_1)) && (param_1 <= ___real_41a00000)
     ) {
    *(float *)(this + 0x218) = param_1;
    return 1;
  }
  return 0;
}




/* from: drv:vid.cpp
   addr: 004A5AD0 */

int __cdecl _vidCompDrv(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *param_1;
                    /* WARNING: Load size is inaccurate */
  iVar2 = *param_2;
  if (*(int *)(iVar2 + 0x234) < *(int *)(iVar1 + 0x234)) {
    return -1;
  }
  if (*(int *)(iVar1 + 0x234) < *(int *)(iVar2 + 0x234)) {
    return 1;
  }
  if (*(int *)(iVar2 + 0x23c) < *(int *)(iVar1 + 0x23c)) {
    return -1;
  }
  if (*(int *)(iVar1 + 0x23c) < *(int *)(iVar2 + 0x23c)) {
    return 1;
  }
  pcVar3 = strstr((char *)(iVar1 + 8),s_rimary);
  if (pcVar3 != (char *)0x0) {
    return -1;
  }
  pcVar3 = strstr((char *)(iVar2 + 8),s_rimary);
  return (uint)(pcVar3 != (char *)0x0);
}

