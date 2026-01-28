
/* from: sfx_flare.cpp
   addr: 00469F10 */

int __fastcall wrsfxFlareInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_flare,0x24464c52,0x55,wrsfxFLARE::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: sfx_flare.cpp
   addr: 00469F40 */

entENTITY * __fastcall wrsfxFLARE::Create(animINST *param_1)

{
  txmTEXTURE *ptVar1;
  flrFLARE *this;
  int iVar2;
  
  iVar2 = 0;
  do {
    ptVar1 = txmMANAGER::Add(txmManager,*(char **)((int)&PTR_s_flare_0_005f2008 + iVar2),0x40000,1);
    *(txmTEXTURE **)((int)&DAT_0060e708 + iVar2) = ptVar1;
    if (ptVar1 == (txmTEXTURE *)0x0) {
      apMsg(s_Cannot_load_default_texture___s_,*(undefined4 *)((int)&PTR_s_flare_0_005f2008 + iVar2)
           );
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x48);
  this = (flrFLARE *)operator_new(0x3c3);
  if (this != (flrFLARE *)0x0) {
    flrFLARE::flrFLARE(this);
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_flare.cpp
   addr: 00469FB0 */

void __thiscall wrsfxFLARE::SetupDefault(wrsfxFLARE *this)

{
  *(undefined4 *)(this + 0x15f) = 0x3e59b13c;
  *(undefined4 *)(this + 0x17b) = DAT_0060e74c;
  *(undefined4 *)(this + 0x163) = 0x437f0000;
  *(undefined4 *)(this + 0x167) = 0x437f0000;
  *(undefined4 *)(this + 0x16b) = 0x437f0000;
  *(undefined4 *)(this + 0x16f) = 0x437f0000;
  flrFLARE::EnableShine((flrFLARE *)this,1);
  flrFLARE::EnableAnim((flrFLARE *)this,4,1);
  *(undefined4 *)(this + 0x177) = 0x40;
  *(undefined4 *)(this + 0x17f) = 0x3f0d8000;
  *(undefined4 *)(this + 0x183) = 0x3f0d8000;
  *(undefined4 *)(this + 0x157) = 0x447a0000;
  *(undefined4 *)(this + 0x15b) = 0x44898000;
  flrFLARE::EnableFlare((flrFLARE *)this,1);
  *(undefined4 *)(this + 0x18b) = 0x40;
  *(undefined4 *)(this + 399) = 0x11;
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,0,0x3d70f0f1,0x3e8b0000,DAT_0060e708,0x437f0000,0x437f0000,0x437f0000,
             0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,1,0x3e169697,0x3ea30000,DAT_0060e70c,0x437f0000,0x437f0000,0x437f0000,
             0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,2,0x3e52d2d3,0x3e440000,DAT_0060e710,0x437f0000,0x437f0000,0x437f0000,
             0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,3,0x3e70f0f1,0x3d940000,DAT_0060e714,0x437f0000,0x437f0000,0x437f0000,
             0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,4,0x3e969697,0x3de00000,DAT_0060e718,0x437f0000,0x437f0000,0x437f0000,
             0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,5,0x3eb4b4b5,0x3df40000,DAT_0060e71c,0x437f0000,0x437f0000,0x437f0000,
             0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,6,0x3ef0f0f1,0x3d080000,DAT_0060e720,0x437f0000,0x437f0000,0x437f0000,
             0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,7,0x3f000000,0x3d500000,DAT_0060e724,0x437f0000,0x437f0000,0x437f0000,
             0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,8,0x3f078788,0x3dfc0000,DAT_0060e728,0x437f0000,0x437f0000,0x437f0000,
             0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,9,0x3ed2d2d3,0x3e7c0000,DAT_0060e72c,0x437f0000,0x437f0000,0x437f0000,
             0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,10,0x3f25a5a6,0x3eaa0000,DAT_0060e730,0x437f0000,0x437f0000,0x437f0000
             ,0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,0xb,0x3f34b4b5,0x3e380000,DAT_0060e734,0x437f0000,0x437f0000,
             0x437f0000,0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,0xc,0x3f43c3c4,0x3d940000,DAT_0060e738,0x437f0000,0x437f0000,
             0x437f0000,0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,0xd,0x3f52d2d3,0x3e080000,DAT_0060e73c,0x437f0000,0x437f0000,
             0x437f0000,0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,0xe,0x3f61e1e2,0x3d580000,DAT_0060e740,0x437f0000,0x437f0000,
             0x437f0000,0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,0xf,0x3f70f0f1,0x3f040000,DAT_0060e744,0x437f0000,0x437f0000,
             0x437f0000,0x437f0000);
  flrFLARE::ConfigureFlare
            ((flrFLARE *)this,0x10,0x3f800000,0x3f038000,DAT_0060e748,0x437f0000,0x437f0000,
             0x437f0000,0x437f0000);
  return;
}

