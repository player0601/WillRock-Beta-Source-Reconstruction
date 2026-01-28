
/* from: drv:d3d_misc.cpp
   addr: 004B3340 */

void * __fastcall d3dReadLock(IDirectDrawSurface7 *param_1,_DDSURFACEDESC2 *param_2)

{
  int iVar1;
  _DDSURFACEDESC2 *p_Var2;
  
  if ((param_1 != (IDirectDrawSurface7 *)0x0) && (param_2 != (_DDSURFACEDESC2 *)0x0)) {
    p_Var2 = param_2;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)p_Var2 = 0;
      p_Var2 = p_Var2 + 4;
    }
    *(undefined4 *)param_2 = 0x7c;
    iVar1 = (**(code **)(*(int *)param_1 + 100))(param_1,0,param_2,0x11,0);
    if (iVar1 == 0) {
      return *(void **)(param_2 + 0x24);
    }
    (**(code **)(*(int *)param_1 + 0x80))(param_1,0);
  }
  return (void *)0x0;
}




/* from: drv:d3d_misc.cpp
   addr: 004B3390 */

int __fastcall d3dUnlock(IDirectDrawSurface7 *param_1)

{
  int iVar1;
  
  if (param_1 == (IDirectDrawSurface7 *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0x80))(param_1,0);
  return (uint)(iVar1 == 0);
}

