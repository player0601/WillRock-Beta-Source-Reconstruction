
/* from: wr_iface.cpp
   addr: 00499C60 */

int __thiscall wrWND_MENU::ProcessAct(wrWND_MENU *this,gssAREA *param_1,int param_2,void *param_3)

{
  scnDOMAIN::ISectLSegBoundaryXZ((scnDOMAIN *)this,param_1,param_2,(m3dBOX *)param_3);
  if ((*(int *)(uiSystem + 4) != 0) && (param_2 == 7)) {
    (**(code **)(*(int *)uiSystem + 4))();
    (**(code **)(*(int *)uiSystem + 8))();
  }
  return 1;
}

