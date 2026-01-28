
/* from: drv:D3d_drv.cpp
   addr: 004AB3E0 */

d3dDRIVER * __thiscall d3dDRIVER::d3dDRIVER(d3dDRIVER *this)

{
  int iVar1;
  d3dDRIVER *pdVar2;
  
  vidDRIVER::vidDRIVER((vidDRIVER *)this,0x9c);
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x264) = 0;
  pdVar2 = this + 0x268;
  for (iVar1 = 0x5f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  pdVar2 = this + 0x3e4;
  for (iVar1 = 0x5f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  pdVar2 = this + 0x560;
  for (iVar1 = 0x3b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  this[0x64c] = (d3dDRIVER)0x0;
  *(undefined4 *)(this + 0x6cc) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x770) = 0;
  *(undefined4 *)(this + 0x774) = 0;
  *(undefined4 *)(this + 0x778) = 0;
  *(undefined4 *)(this + 0x77c) = 0;
  *(undefined4 *)(this + 0x780) = 0;
  *(undefined4 *)(this + 0x784) = 0;
  *(undefined4 *)(this + 0x788) = 0;
  *(undefined4 *)(this + 0xf84) = 0;
  *(undefined4 *)(this + 0xf88) = 0;
  pdVar2 = this + 0xf8c;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  pdVar2 = this + 0x1008;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  pdVar2 = this + 0x1084;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  *(undefined4 *)(this + 0x1118) = 0;
  pdVar2 = this + 0x111c;
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  pdVar2 = this + 0x171c;
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  pdVar2 = this + 0x1d1c;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  pdVar2 = this + 0x78c;
  for (iVar1 = 0x1fe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  pdVar2 = this + 0x6d0;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = pdVar2 + 4;
  }
  *(undefined4 *)(this + 0x1da0) = 0;
  *(undefined4 *)(this + 0x1d9c) = 0xffffffff;
  *(undefined4 *)(this + 0x1d98) = 0xffffffff;
  *(undefined4 *)(this + 0x1da4) = 0;
  *(undefined4 *)(this + 0x1da8) = 0;
  *(undefined4 *)(this + 0x1dac) = 0;
  *(undefined4 *)(this + 0x1db0) = 0;
  *(undefined4 *)(this + 0x1db4) = 0;
  *(undefined4 *)(this + 0x1db8) = 0;
  *(undefined4 *)(this + 0x1dbc) = 0;
  *(undefined4 *)(this + 0x1dc0) = 0;
  return this;
}




/* from: drv:D3d_drv.cpp
   addr: 004AB550
   addr: 004AB550 */

void * __thiscall d3dDRIVER::_vector_deleting_destructor_(d3dDRIVER *this,uint param_1)

{
  int *piVar1;
  
  *(undefined ***)this = &_vftable_;
  (*(code *)PTR_TermHW_005db5ac)();
  piVar1 = *(int **)(this + 0x778);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x774);
  *(undefined4 *)(this + 0x778) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(this + 0x774) = 0;
  vidDRIVER::~vidDRIVER((vidDRIVER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:D3d_drv.cpp
   addr: 004AB5B0 */

int __thiscall d3dDRIVER::InitDrv(d3dDRIVER *this)

{
  d3dDRIVER *pdVar1;
  d3dDRIVER *pdVar2;
  int iVar3;
  d3dDRIVER *pdVar4;
  
  apLog(s_Creating_Direct_draw_driver__s_,this + 8);
  pdVar1 = this + 0x774;
  iVar3 = DirectDrawCreateEx_16(*(undefined4 *)(this + 0x254),pdVar1,&_IID_IDirectDraw7,0);
  if (iVar3 == 0) {
    iVar3 = (**(code **)**(undefined4 **)pdVar1)
                      (*(undefined4 **)pdVar1,&_IID_IDirect3D7,this + 0x778);
    if (iVar3 == 0) {
      pdVar2 = this + 0x1d1c;
      pdVar4 = pdVar2;
      for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pdVar4 = 0;
        pdVar4 = pdVar4 + 4;
      }
      *(undefined4 *)pdVar2 = 0x7c;
      iVar3 = (**(code **)(**(int **)pdVar1 + 0x30))(*(int **)pdVar1,pdVar2);
      if (iVar3 == 0) {
        d3dDriver = this;
        iVar3 = vidDRIVER::InitDrv((vidDRIVER *)this);
        return iVar3;
      }
    }
  }
  (**(code **)(*(int *)this + 8))();
  return 0;
}




/* from: drv:D3d_drv.cpp
   addr: 004AB640 */

void __thiscall d3dDRIVER::TermDrv(d3dDRIVER *this)

{
  int *piVar1;
  
  (**(code **)(*(int *)this + 0x14))();
  piVar1 = *(int **)(this + 0x778);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(this + 0x774);
  *(undefined4 *)(this + 0x778) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(this + 0x774) = 0;
  return;
}




/* from: drv:D3d_drv.cpp
   addr: 004AB680 */

int __thiscall d3dDRIVER::AreCompressedFormatsAvialiable(d3dDRIVER *this)

{
  int iVar1;
  d3dDRIVER *pdVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0x1f;
  iVar4 = *(int *)(d3dDriver + 0xf84);
  if (0 < iVar4) {
    pdVar2 = d3dDriver + 0x794;
    do {
      if (((byte)pdVar2[-4] & 4) != 0) {
        iVar1 = *(int *)pdVar2;
        if (iVar1 == 0x31545844) {
          uVar3 = uVar3 & 0xfffffffe;
        }
        if (iVar1 == 0x32545844) {
          uVar3 = uVar3 & 0xfffffffd;
        }
        if (iVar1 == 0x33545844) {
          uVar3 = uVar3 & 0xfffffffb;
        }
        if (iVar1 == 0x34545844) {
          uVar3 = uVar3 & 0xfffffff7;
        }
        if (iVar1 == 0x35545844) {
          uVar3 = uVar3 & 0xffffffef;
        }
      }
      pdVar2 = pdVar2 + 0x44;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return (uint)(uVar3 == 0);
}




/* from: drv:D3d_drv.cpp
   addr: 004AB6F0 */

txmMANAGER * __thiscall d3dDRIVER::CreateTexManager(d3dDRIVER *this)

{
  txmMANAGER *this_00;
  
  this_00 = (txmMANAGER *)operator_new(0x1104);
  if (this_00 != (txmMANAGER *)0x0) {
    txmMANAGER::txmMANAGER(this_00);
    *(undefined4 *)(this_00 + 0x1100) = 0;
    *(undefined ***)this_00 = &txmD3D_MANAGER::_vftable_;
    return this_00;
  }
  return (txmMANAGER *)0x0;
}




/* from: drv:D3d_drv.cpp
   addr: 004AB730 */

int __thiscall d3dDRIVER::InitHW(d3dDRIVER *this)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  d3dDRIVER *pdVar5;
  d3dDRIVER *pdVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined4 auStack_88 [5];
  int iStack_74;
  int aiStack_40 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  
  if ((*(uint *)(this + 4) & 0x1000000) != 0) {
    return 1;
  }
  iVar2 = *(int *)(this + 0x210);
  if ((*(byte *)(iVar2 + 0x14) & 1) == 0) {
    apLog(s_Initialising_rendering_to_full_s,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc)
          ,*(undefined4 *)(iVar2 + 0x10));
    piVar9 = *(int **)(this + 0x774);
    iVar2 = (**(code **)(*piVar9 + 0x50))(piVar9,*(undefined4 *)(this + 0x214),0x1011);
    if (iVar2 != 0) goto LAB_004abddd;
    iVar2 = *(int *)(this + 0x210);
    apLog(s_Setting_display_mode__d____d____,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc)
          ,*(undefined4 *)(iVar2 + 0x10));
    iVar2 = *(int *)(this + 0x210);
    iVar2 = (**(code **)(**(int **)(this + 0x774) + 0x54))
                      (*(int **)(this + 0x774),*(undefined4 *)(iVar2 + 8),
                       *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                       *(undefined4 *)(iVar2 + 4),0);
    if (iVar2 != 0) goto LAB_004abddd;
    iVar2 = *(int *)(this + 0x210);
    if ((*(byte *)(iVar2 + 0x14) & 2) == 0) {
      apLog(s_Creating_a_flippable_primary_sur);
      puVar7 = auStack_88;
      for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      auStack_88[0] = 0x7c;
      auStack_88[1] = 0x21;
      uStack_20 = 0x2218;
      if ((*(byte *)(*(int *)(this + 0x210) + 0x14) & 0x20) != 0) {
        uStack_1c = uStack_1c | 0x100;
      }
      iStack_74 = ((*(byte *)(*(int *)(this + 0x210) + 0x14) & 4) != 0) + 1;
      iVar2 = (**(code **)(**(int **)(this + 0x774) + 0x18))
                        (*(int **)(this + 0x774),auStack_88,this + 0x780,0);
      if (iVar2 != 0) goto LAB_004abddd;
      puVar7 = auStack_88;
      for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      piVar3 = *(int **)(this + 0x780);
      auStack_88[0] = 0x7c;
      uStack_20 = 4;
      iVar2 = (**(code **)(*piVar3 + 0x30))(piVar3,&uStack_20,this + 0x784);
    }
    else {
      puVar7 = auStack_88;
      for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      auStack_88[0] = 0x7c;
      auStack_88[1] = 1;
      uStack_20 = 0x2200;
      if ((*(byte *)(iVar2 + 0x14) & 0x20) != 0) {
        uStack_1c = uStack_1c | 0x100;
      }
      iVar2 = (**(code **)(**(int **)(this + 0x774) + 0x18))
                        (*(int **)(this + 0x774),auStack_88,this + 0x780,0);
    }
  }
  else {
    apLog(s_Initialising_rendering_to_window);
    piVar9 = *(int **)(this + 0x774);
    iVar2 = (**(code **)(*piVar9 + 0x50))(piVar9,*(undefined4 *)(this + 0x214),0x1008);
    if (iVar2 != 0) goto LAB_004abddd;
    apLog(s_Creating_primary_surface_);
    puVar7 = auStack_88;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    auStack_88[0] = 0x7c;
    auStack_88[1] = 1;
    uStack_20 = 0x200;
    iVar2 = (**(code **)(**(int **)(this + 0x774) + 0x18))
                      (*(int **)(this + 0x774),auStack_88,this + 0x780,0);
    if (iVar2 != 0) goto LAB_004abddd;
    apLog(s_Creating_back_surface_);
    puVar7 = auStack_88;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    auStack_88[0] = 0x7c;
    auStack_88[1] = 7;
    uStack_20 = 0x2040;
    if (((byte)this[4] & 1) != 0) {
      uStack_20 = 0x6040;
    }
    iVar2 = *(int *)(this + 0x210);
    if ((*(byte *)(iVar2 + 0x14) & 0x20) != 0) {
      uStack_1c = uStack_1c | 0x100;
    }
    auStack_88[3] = *(undefined4 *)(iVar2 + 8);
    auStack_88[2] = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = (**(code **)(**(int **)(this + 0x774) + 0x18))
                      (*(int **)(this + 0x774),auStack_88,this + 0x784,0);
  }
  if (iVar2 == 0) {
    apLog(s_Geting_surfaces_description_for_);
    pdVar5 = this + 0xf8c;
    pdVar6 = pdVar5;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pdVar6 = 0;
      pdVar6 = pdVar6 + 4;
    }
    *(undefined4 *)pdVar5 = 0x7c;
    iVar2 = (**(code **)(**(int **)(this + 0x780) + 0x58))(*(int **)(this + 0x780),pdVar5);
    if (iVar2 == 0) {
      if ((*(byte *)(*(int *)(this + 0x210) + 0x14) & 2) == 0) {
        pdVar5 = this + 0x1008;
        pdVar6 = pdVar5;
        for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pdVar6 = 0;
          pdVar6 = pdVar6 + 4;
        }
        *(undefined4 *)pdVar5 = 0x7c;
        iVar2 = (**(code **)(**(int **)(this + 0x784) + 0x58))(*(int **)(this + 0x784),pdVar5);
        if (iVar2 != 0) goto LAB_004abddd;
      }
      while( true ) {
        apLog(s_Create_and_add_a_Z_buffer_);
        if ((-1 < (char)((uint)*(undefined4 *)(this + 0x5a4) >> 8)) ||
           ((*(byte *)(*(int *)(this + 0x210) + 0x14) & 8) != 0)) {
          puVar7 = auStack_88;
          for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          iVar2 = *(int *)(this + 0x210);
          auStack_88[0] = 0x7c;
          auStack_88[1] = 0x1007;
          uStack_20 = 0x22000;
          auStack_88[3] = *(undefined4 *)(iVar2 + 8);
          auStack_88[2] = *(undefined4 *)(iVar2 + 0xc);
          if (((byte)this[4] & 1) != 0) {
            uStack_20 = 0x26000;
          }
          if ((*(byte *)(iVar2 + 0x14) & 8) == 0) {
            iVar2 = *(int *)(iVar2 + 0x94);
          }
          else {
            iVar2 = *(int *)(iVar2 + 0x98);
          }
          piVar3 = *(int **)(this + 0x774);
          pdVar5 = this + iVar2 * 0x20 + 0x6d0;
          piVar8 = aiStack_40;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar8 = *(int *)pdVar5;
            pdVar5 = pdVar5 + 4;
            piVar8 = piVar8 + 1;
          }
          pdVar5 = this + 0x788;
          iVar2 = (**(code **)(*piVar3 + 0x18))(piVar3,auStack_88,pdVar5,0);
          if (iVar2 != 0) {
            piVar3 = *(int **)(this + 0x774);
            pdVar6 = this + *(int *)(*(int *)(this + 0x210) + 0x94) * 0x20 + 0x6d0;
            piVar8 = aiStack_40;
            for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar8 = *(int *)pdVar6;
              pdVar6 = pdVar6 + 4;
              piVar8 = piVar8 + 1;
            }
            iVar2 = (**(code **)(*piVar3 + 0x18))(piVar3,auStack_88,pdVar5,0);
            if (iVar2 != 0) goto LAB_004abddd;
            *(uint *)(*(int *)(this + 0x210) + 0x14) =
                 *(uint *)(*(int *)(this + 0x210) + 0x14) & 0xfffffff7;
          }
          if ((*(byte *)(*(int *)(this + 0x210) + 0x14) & 2) == 0) {
            piVar3 = *(int **)(this + 0x784);
          }
          else {
            piVar3 = *(int **)(this + 0x780);
          }
          iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)pdVar5);
          if (iVar2 != 0) goto LAB_004abddd;
          **(uint **)(this + 0x210) = **(uint **)(this + 0x210) & 0xffffffef;
          if (aiStack_40[3] == 0x10) {
            **(uint **)(this + 0x210) = **(uint **)(this + 0x210) | 0x10;
          }
        }
        apLog(s_Create_D3D_device_);
        piVar3 = *(int **)(this + 0x778);
        if ((*(byte *)(*(int *)(this + 0x210) + 0x14) & 2) != 0) break;
        iVar2 = (**(code **)(*piVar3 + 0x10))
                          (piVar3,this + 0x624,*(undefined4 *)(this + 0x784),this + 0x77c);
        if (iVar2 == 0) goto LAB_004abc9b;
        uVar1 = *(uint *)(*(int *)(this + 0x210) + 0x14);
        if ((uVar1 & 8) == 0) goto LAB_004abddd;
        *(uint *)(*(int *)(this + 0x210) + 0x14) = uVar1 & 0xfffffff7;
        iVar2 = (**(code **)(**(int **)(this + 0x784) + 0x20))
                          (*(int **)(this + 0x784),0,*(undefined4 *)(this + 0x788));
        if (iVar2 != 0) goto LAB_004abddd;
        piVar3 = *(int **)(this + 0x788);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        *(undefined4 *)(this + 0x788) = 0;
      }
      iVar2 = (**(code **)(*piVar3 + 0x10))
                        (piVar3,this + 0x624,*(undefined4 *)(this + 0x780),this + 0x77c);
      if (iVar2 == 0) {
LAB_004abc9b:
        apLog(s_Adjust_viewport_);
        *(undefined4 *)(this + 0x1100) = 0;
        *(undefined4 *)(this + 0x1104) = 0;
        *(undefined4 *)(this + 0x1108) = *(undefined4 *)(*(int *)(this + 0x210) + 8);
        *(undefined4 *)(this + 0x110c) = *(undefined4 *)(*(int *)(this + 0x210) + 0xc);
        *(undefined4 *)(this + 0x1110) = 0;
        *(undefined4 *)(this + 0x1114) = 0x3f800000;
        iVar2 = (**(code **)(**(int **)(this + 0x77c) + 0x34))
                          (*(int **)(this + 0x77c),this + 0x1100);
        if (iVar2 == 0) {
          (**(code **)(**(int **)(this + 0x774) + 0x5c))
                    (*(int **)(this + 0x774),&stack0xffffff68,0,&stack0xffffff64);
          *(int **)(this + 0xf88) = piVar9;
          apLog(s_Enumerating_texture_formats_);
          iVar2 = (**(code **)(**(int **)(this + 0x77c) + 0x10))
                            (*(int **)(this + 0x77c),d3dEnumTextureFormatsCB,this);
          if (iVar2 == 0) {
            if (*(int *)(this + 0xf84) != 0) {
              iVar2 = *(int *)(this + 0x210);
              uVar1 = *(uint *)(iVar2 + 0x14);
              if (((uVar1 & 0x10) != 0) &&
                 (iVar4 = AreCompressedFormatsAvialiable(d3dDriver), iVar4 == 0)) {
                *(uint *)(iVar2 + 0x14) = uVar1 & 0xffffffef;
              }
              if (((byte)this[4] & 0x40) != 0) {
                apLog(s_Creating_gamma_control_object_);
                (**(code **)**(undefined4 **)(this + 0x780))
                          (*(undefined4 **)(this + 0x780),&_IID_IDirectDrawGammaControl,
                           this + 0x1118);
                piVar9 = *(int **)(this + 0x1118);
                if ((piVar9 != (int *)0x0) &&
                   (iVar2 = (**(code **)(*piVar9 + 0xc))(piVar9,0,this + 0x111c), iVar2 != 0))
                goto LAB_004abddd;
              }
              apLog(s_Initialization_complete_successi);
              iVar2 = vidDRIVER::InitHW((vidDRIVER *)this);
              if (iVar2 != 0) {
                SetStartRenderingState(this);
                ClearSurfaces(this);
                return 1;
              }
              return 0;
            }
            apLog(s_Can_t_find_any_texture_format_);
          }
        }
      }
    }
  }
LAB_004abddd:
  apLog(s_FATAL__Initialization_failed_);
  (**(code **)(*(int *)this + 0x14))();
  return 0;
}




/* from: drv:D3d_drv.cpp
   addr: 004ABE60 */

void __thiscall d3dDRIVER::TermHW(d3dDRIVER *this)

{
  int *piVar1;
  
  if ((*(uint *)(this + 4) & 0x1000000) != 0) {
    if ((*(byte *)(*(int *)(this + 0x210) + 0x14) & 1) == 0) {
      (**(code **)(**(int **)(this + 0x774) + 0x4c))(*(int **)(this + 0x774));
    }
    else {
      piVar1 = *(int **)(this + 0x1118);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1,0,this + 0x111c);
      }
    }
    (**(code **)(**(int **)(this + 0x774) + 0x50))(*(int **)(this + 0x774),0,8);
    piVar1 = *(int **)(this + 0x77c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(this + 0x788);
    *(undefined4 *)(this + 0x77c) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(this + 0x784);
    *(undefined4 *)(this + 0x788) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(this + 0x1118);
    *(undefined4 *)(this + 0x784) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(this + 0x780);
    *(undefined4 *)(this + 0x1118) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(this + 0x780) = 0;
    vidDRIVER::TermHW((vidDRIVER *)this);
    return;
  }
  return;
}




/* from: drv:D3d_drv.cpp
   addr: 004ABF30 */

void __thiscall d3dDRIVER::BeginScene(d3dDRIVER *this)

{
  if ((*(uint *)(this + 4) & 0x1000000) != 0) {
    (**(code **)(**(int **)(this + 0x77c) + 0x14))(*(int **)(this + 0x77c));
    vidDRIVER::BeginScene((vidDRIVER *)this);
    return;
  }
  return;
}




/* from: drv:D3d_drv.cpp
   addr: 004ABF60 */

void __thiscall d3dDRIVER::EndScene(d3dDRIVER *this)

{
  int iVar1;
  
  if ((*(uint *)(this + 4) & 0x1000000) != 0) {
    iVar1 = RestoreSurfaces(this);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(this + 0x77c) + 0x18))(*(int **)(this + 0x77c));
      m3dTerm2DMatr();
      return;
    }
  }
  return;
}




/* from: drv:D3d_drv.cpp
   addr: 004ABF90 */

void __thiscall d3dDRIVER::SwapBuffers(d3dDRIVER *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  tagPOINT local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((*(uint *)(this + 4) & 0x1000000) != 0) {
    iVar1 = *(int *)(this + 0x210);
    if ((*(uint *)(iVar1 + 0x14) & 1) != 0) {
      local_c = 0;
      local_10 = 0;
      local_8 = *(int *)(iVar1 + 8);
      local_4 = *(int *)(iVar1 + 0xc);
      local_18.y = 0;
      local_18.x = 0;
      ClientToScreen(*(HWND *)(this + 0x214),&local_18);
      local_10 = (local_18.x + local_10 & (local_18.x + local_10 < 1) - 1) - local_18.x;
      iVar1 = local_8 + local_18.x;
      if (*(int *)(this + 0x1d28) <= local_8 + local_18.x) {
        iVar1 = *(int *)(this + 0x1d28);
      }
      local_8 = iVar1 - local_18.x;
      local_c = ((local_18.y + local_c < 1) - 1 & local_18.y + local_c) - local_18.y;
      iVar1 = local_4 + local_18.y;
      if (*(int *)(this + 0x1d24) <= local_4 + local_18.y) {
        iVar1 = *(int *)(this + 0x1d24);
      }
      local_4 = iVar1 - local_18.y;
      local_18.x = (local_18.x < 0) - 1 & local_18.x;
      local_18.y = (local_18.y < 0) - 1 & local_18.y;
      uVar2 = 0;
      if (param_2 != 0) {
        while (iVar1 = (**(code **)(**(int **)(this + 0x780) + 0x34))(*(int **)(this + 0x780),2),
              iVar1 == -0x7789fde4) {
          Sleep(0);
        }
        uVar2 = 0x10;
      }
      (**(code **)(**(int **)(this + 0x780) + 0x1c))
                (*(int **)(this + 0x780),local_18.x,local_18.y,*(undefined4 *)(this + 0x784),
                 &local_10,uVar2);
      d3dREND_DRIVER::DiscardDynVBufAll((d3dREND_DRIVER *)rendDrv);
      return;
    }
    uVar3 = 0;
    if (param_1 == 0) {
      uVar3 = 8;
    }
    if ((*(uint *)(iVar1 + 0x14) & 2) == 0) {
      if (param_2 != 0) {
        while (iVar1 = (**(code **)(**(int **)(this + 0x780) + 0x48))(*(int **)(this + 0x780),2),
              iVar1 == -0x7789fde4) {
          Sleep(0);
        }
        (**(code **)(**(int **)(this + 0x780) + 0x2c))(*(int **)(this + 0x780),0,uVar3 | 1);
        d3dREND_DRIVER::DiscardDynVBufAll((d3dREND_DRIVER *)rendDrv);
        return;
      }
      (**(code **)(**(int **)(this + 0x780) + 0x2c))(*(int **)(this + 0x780),0,uVar3);
    }
    d3dREND_DRIVER::DiscardDynVBufAll((d3dREND_DRIVER *)rendDrv);
  }
  return;
}




/* from: drv:D3d_drv.cpp
   addr: 004AC170 */

void __thiscall d3dDRIVER::ClearBuffers(d3dDRIVER *this,vidCLEAR *param_1)

{
  int *piVar1;
  vidCLEAR *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pvVar2 = param_1;
  if (((*(uint *)(this + 4) & 0x1000000) != 0) && (iVar3 = RestoreSurfaces(this), iVar3 != 0)) {
    uVar5 = *(uint *)param_1;
    if ((uVar5 & 8) == 0) {
      local_c = 0;
      local_10 = 0;
      local_8 = *(undefined4 *)(*(int *)(this + 0x210) + 8);
      local_4 = *(undefined4 *)(*(int *)(this + 0x210) + 0xc);
    }
    else {
      local_10 = *(undefined4 *)(param_1 + 0x18);
      local_c = *(undefined4 *)(param_1 + 0x1c);
      local_8 = *(undefined4 *)(param_1 + 0x20);
      local_4 = *(undefined4 *)(param_1 + 0x24);
    }
    bVar8 = (uVar5 & 1) != 0;
    param_1 = (vidCLEAR *)(uint)bVar8;
    if ((uVar5 & 2) != 0) {
      param_1 = (vidCLEAR *)(bVar8 | 2);
    }
    if (((uVar5 & 4) != 0) && ((*(byte *)(*(int *)(this + 0x210) + 0x14) & 8) != 0)) {
      param_1 = (vidCLEAR *)((uint)param_1 | 4);
    }
    piVar1 = *(int **)(this + 0x77c);
    iVar3 = *piVar1;
    iVar4 = ftol(0x3f800000,*(undefined4 *)(pvVar2 + 0x14));
    uVar5 = ftol();
    uVar6 = ftol();
    uVar7 = ftol();
    (**(code **)(iVar3 + 0x28))
              (piVar1,1,&local_10,param_1,
               ((iVar4 << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff);
  }
  return;
}




/* from: drv:D3d_drv.cpp
   addr: 004AC280 */

int __thiscall d3dDRIVER::ReadBuffer(d3dDRIVER *this,int param_1,pctPICTURE *param_2)

{
  void *pvVar1;
  int iVar2;
  d3dDRIVER *pdVar3;
  _DDSURFACEDESC2 *p_Var4;
  _DDSURFACEDESC2 local_7c [8];
  int local_74;
  int local_70;
  int local_6c;
  uchar *local_58;
  uint local_28;
  ulong local_24;
  ulong local_20;
  ulong local_1c;
  ulong local_18;
  
  if ((*(uint *)(this + 4) & 0x1000000) != 0) {
    pdVar3 = this + 0x1008;
    p_Var4 = local_7c;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)p_Var4 = *(undefined4 *)pdVar3;
      pdVar3 = pdVar3 + 4;
      p_Var4 = p_Var4 + 4;
    }
    pvVar1 = d3dReadLock(*(IDirectDrawSurface7 **)(this + 0x784),local_7c);
    if (pvVar1 == (void *)0x0) {
      d3dUnlock(*(IDirectDrawSurface7 **)(this + 0x784));
      return 0;
    }
    pctGetFromBuf(local_70,local_74,local_28 >> 3,local_6c - (local_28 * local_70 >> 3),local_24,
                  local_20,local_1c,local_18,local_58,param_2);
    d3dUnlock(*(IDirectDrawSurface7 **)(this + 0x784));
  }
  return 1;
}




/* from: drv:D3d_drv.cpp
   addr: 004AC340 */

int __thiscall
d3dDRIVER::CopyBuffer(d3dDRIVER *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  tagPOINT local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((*(uint *)(this + 4) & 0x1000000) != 0) {
    local_8 = param_4;
    local_4 = param_5;
    local_10 = param_2;
    local_c = param_3;
    local_18.y = 0;
    local_18.x = 0;
    if ((*(byte *)(*(int *)(this + 0x210) + 0x14) & 1) != 0) {
      ClientToScreen(*(HWND *)(this + 0x214),&local_18);
    }
    if (param_1 == 0) {
      local_10 = local_10 + local_18.x;
      local_c = local_c + local_18.y;
      local_8 = local_8 + local_18.x;
      local_4 = local_4 + local_18.y;
      iVar1 = (**(code **)(**(int **)(this + 0x784) + 0x1c))
                        (*(int **)(this + 0x784),param_2,param_3,*(undefined4 *)(this + 0x780),
                         &local_10,0x10);
    }
    else {
      iVar1 = (**(code **)(**(int **)(this + 0x780) + 0x1c))
                        (*(int **)(this + 0x780),local_18.x + param_2,local_18.y + param_3,
                         *(undefined4 *)(this + 0x784),&local_10);
    }
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}




/* from: drv:D3d_drv.cpp
   addr: 004AC440 */

int __thiscall d3dDRIVER::ClearSurfaces(d3dDRIVER *this)

{
  int iVar1;
  undefined4 *puVar2;
  tagPOINT local_7c;
  tagRECT tStack_74;
  undefined4 local_64 [25];
  
  if ((*(uint *)(this + 4) & 0x1000000) != 0) {
    local_7c.y = 0;
    local_7c.x = 0;
    if ((*(byte *)(*(int *)(this + 0x210) + 0x14) & 1) != 0) {
      ClientToScreen(*(HWND *)(this + 0x214),&local_7c);
    }
    puVar2 = local_64;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_64[0] = 100;
    SetRect(&tStack_74,local_7c.x,local_7c.y,*(int *)(*(int *)(this + 0x210) + 8),
            *(int *)(*(int *)(this + 0x210) + 0xc));
    iVar1 = (**(code **)(**(int **)(this + 0x780) + 0x14))(*(int **)(this + 0x780),&tStack_74,0,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = *(int *)(this + 0x210);
    if ((*(byte *)(iVar1 + 0x14) & 2) == 0) {
      SetRect((LPRECT)&stack0xffffff74,0,0,*(int *)(iVar1 + 8),*(int *)(iVar1 + 0xc));
      iVar1 = (**(code **)(**(int **)(this + 0x784) + 0x14))
                        (*(int **)(this + 0x784),&stack0xffffff74,0,0,0x1000400,&local_7c);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}




/* from: drv:D3d_drv.cpp
   addr: 004AC540 */

int __thiscall d3dDRIVER::RestoreSurfaces(d3dDRIVER *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(this + 0x780);
  if (((piVar1 != (int *)0x0) &&
      (iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1), iVar2 == -0x7789fe3e)) &&
     (iVar2 = (**(code **)(**(int **)(this + 0x780) + 0x6c))(*(int **)(this + 0x780)), iVar2 != 0))
  {
    return 0;
  }
  piVar1 = *(int **)(this + 0x784);
  if (((piVar1 != (int *)0x0) &&
      (iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1), iVar2 == -0x7789fe3e)) &&
     (iVar2 = (**(code **)(**(int **)(this + 0x784) + 0x6c))(*(int **)(this + 0x784)), iVar2 != 0))
  {
    return 0;
  }
  piVar1 = *(int **)(this + 0x788);
  if (((piVar1 != (int *)0x0) &&
      (iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1), iVar2 == -0x7789fe3e)) &&
     (iVar2 = (**(code **)(**(int **)(this + 0x788) + 0x6c))(*(int **)(this + 0x788)), iVar2 != 0))
  {
    return 0;
  }
  return 1;
}




/* from: drv:D3d_drv.cpp
   addr: 004AC5D0 */

void __thiscall d3dDRIVER::InvalidateSignatureCFG(d3dDRIVER *this)

{
  *(undefined4 *)(this + 0x1d9c) = 0xffffffff;
  *(undefined4 *)(this + 0x1d98) = 0xffffffff;
  return;
}




/* from: drv:D3d_drv.cpp
   addr: 004AC5E0 */

txmTEXTURE * __thiscall txmD3D_MANAGER::MakeTex(txmD3D_MANAGER *this,char *param_1,int param_2)

{
  txmD3D_TEX *this_00;
  txmTEXTURE *ptVar1;
  
  this_00 = (txmD3D_TEX *)operator_new(0xa4);
  if (this_00 != (txmD3D_TEX *)0x0) {
    ptVar1 = (txmTEXTURE *)txmD3D_TEX::txmD3D_TEX(this_00,param_1,param_2);
    return ptVar1;
  }
  return (txmTEXTURE *)0x0;
}




/* from: drv:D3d_drv.cpp
   addr: 004AC600 */

txmTEXTURE * __thiscall txmD3D_MANAGER::MakeTexLayer(txmD3D_MANAGER *this,char *param_1,int param_2)

{
  txmD3D_TEX_LAY *this_00;
  txmTEXTURE *ptVar1;
  
  this_00 = (txmD3D_TEX_LAY *)operator_new(0x254);
  if (this_00 != (txmD3D_TEX_LAY *)0x0) {
    ptVar1 = (txmTEXTURE *)txmD3D_TEX_LAY::txmD3D_TEX_LAY(this_00,param_1,param_2);
    return ptVar1;
  }
  return (txmTEXTURE *)0x0;
}




/* from: drv:D3d_drv.cpp
   addr: 004AC620
   addr: 004AC620 */

void * __thiscall txmD3D_MANAGER::_scalar_deleting_destructor_(txmD3D_MANAGER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  txmMANAGER::~txmMANAGER((txmMANAGER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

