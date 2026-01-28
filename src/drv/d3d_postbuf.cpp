
/* from: drv:d3d_postbuf.cpp
   addr: 004B9E70 */

void __thiscall
_d3drPOST_ENTRY::SetEntryData
          (_d3drPOST_ENTRY *this,objOBJ *param_1,objSPLIT_ENTRY *param_2,int param_3,int param_4)

{
  *(objOBJ **)this = param_1;
  *(objSPLIT_ENTRY **)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  if (0 < param_4) {
    *(int *)(this + 0xd0) = DAT_006b3c80;
    *(int *)(&_d3drFaceDataBuf + DAT_006b3c80 * 0x1e4) = param_4;
  }
  *(undefined4 *)(this + 0xd8) = 0;
  return;
}

