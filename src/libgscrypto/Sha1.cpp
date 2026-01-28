
/* from: libgscrypto:Sha1.cpp
   addr: 005BA850 */

SecureHashAlgorithm1 * __thiscall
SecureHashAlgorithm1::SecureHashAlgorithm1(SecureHashAlgorithm1 *this)

{
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005cc612;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_stack_00000004 != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)(this + 4) = &_vbtable_;
  }
  local_4 = 1;
  *(undefined ***)this = &_vftable_;
  SHAReset(this);
  ExceptionList = local_c;
  return this;
}




/* from: libgscrypto:Sha1.cpp
   addr: 005BA8C0
   addr: 005BA8C0 */

void * __thiscall
SecureHashAlgorithm1::_vector_deleting_destructor_(SecureHashAlgorithm1 *this,uint param_1)

{
  ~SecureHashAlgorithm1(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgscrypto:Sha1.cpp
   addr: 005BA8E0 */

void __thiscall SecureHashAlgorithm1::~SecureHashAlgorithm1(SecureHashAlgorithm1 *this)

{
  int iVar1;
  SecureHashAlgorithm1 *pSVar2;
  
  pSVar2 = this + 8;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar2 = 0;
    pSVar2 = pSVar2 + 4;
  }
  *(undefined ***)this = &clExtalloc_Override_Baseclass::_vftable_;
  return;
}




/* from: libgscrypto:Sha1.cpp
   addr: 005BA900 */

void __thiscall SecureHashAlgorithm1::SHAReset(SecureHashAlgorithm1 *this)

{
  int iVar1;
  SecureHashAlgorithm1 *pSVar2;
  
  pSVar2 = this + 8;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar2 = 0;
    pSVar2 = pSVar2 + 4;
  }
  *(undefined4 *)(this + 8) = 0x67452301;
  *(undefined4 *)(this + 0xc) = 0xefcdab89;
  *(undefined4 *)(this + 0x10) = 0x98badcfe;
  *(undefined4 *)(this + 0x14) = 0x10325476;
  *(undefined4 *)(this + 0x18) = 0xc3d2e1f0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}




/* from: libgscrypto:Sha1.cpp
   addr: 005BA940 */

void __thiscall
SecureHashAlgorithm1::SHAUpdate(SecureHashAlgorithm1 *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  SecureHashAlgorithm1 *pSVar5;
  uint *puVar6;
  SecureHashAlgorithm1 *pSVar7;
  uint local_4;
  
  uVar4 = *(uint *)(this + 0x1c);
  uVar1 = uVar4 + param_2 * 8;
  *(uint *)(this + 0x1c) = uVar1;
  if (uVar1 < uVar4) {
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  }
  uVar1 = uVar4 >> 3 & 0x3f;
  *(uint *)(this + 0x20) = *(int *)(this + 0x20) + (param_2 >> 0x1d);
  if (uVar1 != 0) {
    uVar4 = 0x40 - uVar1;
    if (param_2 < uVar4) {
      pSVar5 = this + uVar1 + 0x24;
      for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pSVar5 = *(undefined4 *)param_1;
        param_1 = (uchar *)((SecureHashAlgorithm1 *)param_1 + 4);
        pSVar5 = pSVar5 + 4;
      }
      for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *pSVar5 = (SecureHashAlgorithm1)*param_1;
        param_1 = (uchar *)((SecureHashAlgorithm1 *)param_1 + 1);
        pSVar5 = pSVar5 + 1;
      }
      return;
    }
    pSVar5 = (SecureHashAlgorithm1 *)param_1;
    pSVar7 = this + uVar1 + 0x24;
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pSVar7 = *(undefined4 *)pSVar5;
      pSVar5 = pSVar5 + 4;
      pSVar7 = pSVar7 + 4;
    }
    for (uVar1 = uVar4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pSVar7 = *pSVar5;
      pSVar5 = pSVar5 + 1;
      pSVar7 = pSVar7 + 1;
    }
    longReverse(this,(uint *)(this + 0x24),0x40);
    Transform(this,(uint *)(this + 8),(uint *)(this + 0x24));
    param_1 = param_1 + uVar4;
    param_2 = param_2 - uVar4;
  }
  if (0x3f < param_2) {
    pSVar5 = this + 0x24;
    local_4 = param_2 >> 6;
    do {
      puVar6 = (uint *)param_1;
      pSVar7 = pSVar5;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pSVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        pSVar7 = pSVar7 + 4;
      }
      longReverse(this,(uint *)pSVar5,0x40);
      Transform(this,(uint *)(this + 8),(uint *)pSVar5);
      param_1 = param_1 + 0x40;
      param_2 = param_2 - 0x40;
      local_4 = local_4 - 1;
    } while (local_4 != 0);
  }
  pSVar5 = this + 0x24;
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)pSVar5 = *(undefined4 *)param_1;
    param_1 = (uchar *)((SecureHashAlgorithm1 *)param_1 + 4);
    pSVar5 = pSVar5 + 4;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pSVar5 = (SecureHashAlgorithm1)*param_1;
    param_1 = (uchar *)((SecureHashAlgorithm1 *)param_1 + 1);
    pSVar5 = pSVar5 + 1;
  }
  return;
}




/* from: libgscrypto:Sha1.cpp
   addr: 005BAA50 */

void __thiscall SecureHashAlgorithm1::SHAFinal(SecureHashAlgorithm1 *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  SecureHashAlgorithm1 *pSVar4;
  
  uVar1 = *(int *)(this + 0x1c) >> 3 & 0x3f;
  iVar3 = -uVar1;
  uVar2 = iVar3 + 0x3f;
  pSVar4 = this + uVar1 + 0x24;
  *pSVar4 = (SecureHashAlgorithm1)0x80;
  if ((int)uVar2 < 8) {
    pSVar4 = pSVar4 + 1;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)pSVar4 = 0;
      pSVar4 = pSVar4 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pSVar4 = (SecureHashAlgorithm1)0x0;
      pSVar4 = pSVar4 + 1;
    }
    pSVar4 = this + 0x24;
    longReverse(this,(uint *)pSVar4,0x40);
    Transform(this,(uint *)(this + 8),(uint *)pSVar4);
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pSVar4 = 0;
      pSVar4 = pSVar4 + 4;
    }
  }
  else {
    uVar2 = iVar3 + 0x37;
    pSVar4 = pSVar4 + 1;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)pSVar4 = 0;
      pSVar4 = pSVar4 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pSVar4 = (SecureHashAlgorithm1)0x0;
      pSVar4 = pSVar4 + 1;
    }
  }
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(this + 0x20);
  longReverse(this,(uint *)(this + 0x24),0x38);
  pSVar4 = this + 8;
  Transform(this,(uint *)pSVar4,(uint *)(this + 0x24));
  SHAtoByte(this,param_1,(uint *)pSVar4,0x14);
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pSVar4 = 0;
    pSVar4 = pSVar4 + 4;
  }
  return;
}




/* from: libgscrypto:Sha1.cpp
   addr: 005BAB00 */

void __thiscall
SecureHashAlgorithm1::Transform(SecureHashAlgorithm1 *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  
  uVar29 = *param_1;
  uVar2 = param_1[1];
  uVar27 = ((param_1[3] ^ param_1[2]) & uVar2 ^ param_1[3]) +
           param_1[4] + (uVar29 >> 0x1b | uVar29 << 5) + 0x5a827999 + *param_2;
  uVar2 = uVar2 << 0x1e | uVar2 >> 2;
  uVar29 = param_1[3] + 0x5a827999 +
           ((param_1[2] ^ uVar2) & uVar29 ^ param_1[2]) +
           param_2[1] + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar25 = *param_1 << 0x1e | *param_1 >> 2;
  uVar28 = param_2[2];
  uVar3 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar15 = param_2[3];
  uVar27 = param_1[2] + 0x5a827999 +
           ((uVar2 ^ uVar25) & uVar27 ^ uVar2) + uVar28 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar2 = uVar2 + 0x5a827999 +
          ((uVar3 ^ uVar25) & uVar29 ^ uVar25) + uVar15 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar1 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar16 = param_2[4];
  uVar4 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar17 = param_2[5];
  uVar27 = uVar25 + 0x5a827999 +
           ((uVar3 ^ uVar1) & uVar27 ^ uVar3) + uVar16 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar5 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar25 = param_2[6];
  uVar29 = uVar3 + 0x5a827999 +
           ((uVar1 ^ uVar4) & uVar2 ^ uVar1) + uVar17 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar2 = uVar1 + 0x5a827999 +
          ((uVar4 ^ uVar5) & uVar27 ^ uVar4) + uVar25 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar6 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar1 = param_2[7];
  uVar7 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar3 = param_2[8];
  uVar27 = uVar4 + 0x5a827999 +
           ((uVar5 ^ uVar6) & uVar29 ^ uVar5) + uVar1 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar29 = uVar5 + 0x5a827999 +
           ((uVar7 ^ uVar6) & uVar2 ^ uVar6) + uVar3 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar2 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar4 = param_2[9];
  uVar8 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar5 = param_2[10];
  uVar27 = uVar6 + 0x5a827999 +
           ((uVar7 ^ uVar2) & uVar27 ^ uVar7) + uVar4 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar9 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar6 = param_2[0xb];
  uVar29 = uVar7 + 0x5a827999 +
           ((uVar2 ^ uVar8) & uVar29 ^ uVar2) + uVar5 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar10 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar7 = param_2[0xc];
  uVar27 = uVar2 + 0x5a827999 +
           ((uVar8 ^ uVar9) & uVar27 ^ uVar8) + uVar6 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar11 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar24 = param_2[0xd];
  uVar29 = uVar8 + 0x5a827999 +
           ((uVar9 ^ uVar10) & uVar29 ^ uVar9) + uVar7 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar2 = uVar9 + 0x5a827999 +
          ((uVar11 ^ uVar10) & uVar27 ^ uVar10) + uVar24 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar12 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar8 = param_2[0xe];
  uVar9 = param_2[0xf];
  uVar27 = uVar10 + 0x5a827999 +
           ((uVar11 ^ uVar12) & uVar29 ^ uVar11) + uVar8 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar13 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar11 + 0x5a827999 +
           ((uVar12 ^ uVar13) & uVar2 ^ uVar12) + uVar9 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar26 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar24 ^ uVar3 ^ uVar28 ^ *param_2;
  uVar10 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar12 + 0x5a827999 +
          ((uVar13 ^ uVar26) & uVar27 ^ uVar13) + uVar10 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar14 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar8 ^ uVar4 ^ uVar15 ^ param_2[1];
  uVar11 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar13 + 0x5a827999 +
           ((uVar26 ^ uVar14) & uVar29 ^ uVar26) + uVar11 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar13 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar28 = uVar9 ^ uVar5 ^ uVar16 ^ uVar28;
  uVar12 = uVar28 >> 0x1f | uVar28 * 2;
  uVar29 = uVar26 + 0x5a827999 +
           ((uVar13 ^ uVar14) & uVar2 ^ uVar14) + uVar12 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar28 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar6 ^ uVar17 ^ uVar15 ^ uVar10;
  uVar26 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar14 + 0x5a827999 +
          ((uVar13 ^ uVar28) & uVar27 ^ uVar13) + uVar26 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar15 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar7 ^ uVar25 ^ uVar16 ^ uVar11;
  uVar14 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar13 + 0x6ed9eba1 +
           (uVar28 ^ uVar15 ^ uVar29) + uVar14 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar16 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar24 ^ uVar1 ^ uVar17 ^ uVar12;
  uVar13 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar28 + 0x6ed9eba1 +
           (uVar15 ^ uVar16 ^ uVar2) + uVar13 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar28 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar8 ^ uVar3 ^ uVar25 ^ uVar26;
  uVar17 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar15 + 0x6ed9eba1 +
          (uVar27 ^ uVar16 ^ uVar28) + uVar17 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar15 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar9 ^ uVar4 ^ uVar1 ^ uVar14;
  uVar18 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar16 + 0x6ed9eba1 +
           (uVar15 ^ uVar29 ^ uVar28) + uVar18 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar16 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar5 ^ uVar3 ^ uVar13 ^ uVar10;
  uVar19 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar28 + 0x6ed9eba1 +
           (uVar15 ^ uVar16 ^ uVar2) + uVar19 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar28 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar6 ^ uVar4 ^ uVar17 ^ uVar11;
  uVar20 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar15 + 0x6ed9eba1 +
          (uVar16 ^ uVar28 ^ uVar27) + uVar20 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar15 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar7 ^ uVar5 ^ uVar18 ^ uVar12;
  uVar21 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar16 + 0x6ed9eba1 +
           (uVar28 ^ uVar15 ^ uVar29) + uVar21 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar16 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar24 ^ uVar6 ^ uVar19 ^ uVar26;
  uVar3 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar28 + 0x6ed9eba1 +
           (uVar2 ^ uVar15 ^ uVar16) + uVar3 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar28 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar8 ^ uVar7 ^ uVar20 ^ uVar14;
  uVar22 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar15 + 0x6ed9eba1 +
          (uVar28 ^ uVar27 ^ uVar16) + uVar22 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar15 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar9 ^ uVar24 ^ uVar21 ^ uVar13;
  uVar23 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar16 + 0x6ed9eba1 +
           (uVar28 ^ uVar15 ^ uVar29) + uVar23 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar25 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar8 ^ uVar3 ^ uVar17 ^ uVar10;
  uVar16 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar28 + 0x6ed9eba1 +
           (uVar15 ^ uVar25 ^ uVar2) + uVar16 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar1 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar9 ^ uVar22 ^ uVar18 ^ uVar11;
  uVar28 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar15 + 0x6ed9eba1 +
          (uVar25 ^ uVar1 ^ uVar27) + uVar28 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar4 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar10 = uVar23 ^ uVar19 ^ uVar12 ^ uVar10;
  uVar7 = uVar10 >> 0x1f | uVar10 * 2;
  uVar27 = uVar25 + 0x6ed9eba1 + (uVar29 ^ uVar1 ^ uVar4) + uVar7 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar25 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar11 = uVar16 ^ uVar20 ^ uVar26 ^ uVar11;
  uVar24 = uVar11 >> 0x1f | uVar11 * 2;
  uVar29 = uVar1 + 0x6ed9eba1 + (uVar25 ^ uVar2 ^ uVar4) + uVar24 + (uVar27 >> 0x1b | uVar27 * 0x20)
  ;
  uVar1 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar12 = uVar28 ^ uVar21 ^ uVar14 ^ uVar12;
  uVar15 = uVar12 >> 0x1f | uVar12 * 2;
  uVar2 = uVar4 + 0x6ed9eba1 + (uVar25 ^ uVar1 ^ uVar27) + uVar15 + (uVar29 >> 0x1b | uVar29 * 0x20)
  ;
  uVar4 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar3 ^ uVar13 ^ uVar26 ^ uVar7;
  uVar8 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar25 + 0x6ed9eba1 + (uVar1 ^ uVar4 ^ uVar29) + uVar8 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar25 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar22 ^ uVar17 ^ uVar14 ^ uVar24;
  uVar9 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar1 + 0x6ed9eba1 + (uVar4 ^ uVar25 ^ uVar2) + uVar9 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar1 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar23 ^ uVar18 ^ uVar13 ^ uVar15;
  uVar5 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar4 + 0x6ed9eba1 + (uVar27 ^ uVar25 ^ uVar1) + uVar5 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar4 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar16 ^ uVar19 ^ uVar17 ^ uVar8;
  uVar10 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar25 + 0x6ed9eba1 + (uVar4 ^ uVar29 ^ uVar1) + uVar10 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar6 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar28 ^ uVar20 ^ uVar18 ^ uVar9;
  uVar11 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar1 + 0x6ed9eba1 + (uVar4 ^ uVar6 ^ uVar2) + uVar11 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar17 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar21 ^ uVar19 ^ uVar5 ^ uVar7;
  uVar12 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar4 + 0x8f1bbcdc +
          (uVar29 >> 0x1b | uVar29 * 0x20) + uVar12 + ((uVar17 | uVar27) & uVar6 | uVar17 & uVar27);
  uVar25 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar3 ^ uVar20 ^ uVar10 ^ uVar24;
  uVar13 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar6 + 0x8f1bbcdc +
           (uVar2 >> 0x1b | uVar2 * 0x20) + uVar13 + ((uVar25 | uVar29) & uVar17 | uVar25 & uVar29);
  uVar1 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar22 ^ uVar21 ^ uVar11 ^ uVar15;
  uVar14 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar17 + 0x8f1bbcdc +
           (uVar27 >> 0x1b | uVar27 * 0x20) + uVar14 + ((uVar2 | uVar1) & uVar25 | uVar2 & uVar1);
  uVar17 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar23 ^ uVar3 ^ uVar12 ^ uVar8;
  uVar26 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar25 + 0x8f1bbcdc +
          (uVar29 >> 0x1b | uVar29 * 0x20) + uVar26 + ((uVar17 | uVar27) & uVar1 | uVar17 & uVar27);
  uVar25 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar16 ^ uVar22 ^ uVar13 ^ uVar9;
  uVar18 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar1 + 0x8f1bbcdc +
           (uVar2 >> 0x1b | uVar2 * 0x20) + uVar18 + ((uVar25 | uVar29) & uVar17 | uVar25 & uVar29);
  uVar1 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar28 ^ uVar23 ^ uVar14 ^ uVar5;
  uVar19 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar17 + 0x8f1bbcdc +
           (uVar27 >> 0x1b | uVar27 * 0x20) + uVar19 + ((uVar1 | uVar2) & uVar25 | uVar1 & uVar2);
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar16 ^ uVar26 ^ uVar10 ^ uVar7;
  uVar3 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar25 + 0x8f1bbcdc +
          (uVar29 >> 0x1b | uVar29 * 0x20) + uVar3 + ((uVar4 | uVar27) & uVar1 | uVar4 & uVar27);
  uVar6 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar28 ^ uVar18 ^ uVar11 ^ uVar24;
  uVar16 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar1 + 0x8f1bbcdc +
           (uVar2 >> 0x1b | uVar2 * 0x20) + uVar16 + ((uVar29 | uVar6) & uVar4 | uVar29 & uVar6);
  uVar28 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar7 = uVar19 ^ uVar12 ^ uVar15 ^ uVar7;
  uVar17 = uVar7 >> 0x1f | uVar7 * 2;
  uVar29 = uVar4 + 0x8f1bbcdc +
           (uVar27 >> 0x1b | uVar27 * 0x20) + uVar17 + ((uVar28 | uVar2) & uVar6 | uVar28 & uVar2);
  uVar20 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar24 = uVar3 ^ uVar13 ^ uVar8 ^ uVar24;
  uVar25 = uVar24 >> 0x1f | uVar24 * 2;
  uVar4 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar6 + 0x8f1bbcdc +
           (uVar29 >> 0x1b | uVar29 * 0x20) +
           uVar25 + ((uVar20 | uVar27) & uVar28 | uVar20 & uVar27);
  uVar15 = uVar16 ^ uVar14 ^ uVar9 ^ uVar15;
  uVar1 = uVar15 >> 0x1f | uVar15 * 2;
  uVar2 = uVar28 + 0x8f1bbcdc +
          (uVar27 >> 0x1b | uVar27 * 0x20) + uVar1 + ((uVar4 | uVar29) & uVar20 | uVar4 & uVar29);
  uVar28 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar26 ^ uVar5 ^ uVar8 ^ uVar17;
  uVar7 = uVar29 >> 0x1f | uVar29 * 2;
  uVar15 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar20 + 0x8f1bbcdc +
           (uVar2 >> 0x1b | uVar2 * 0x20) + uVar7 + ((uVar28 | uVar27) & uVar4 | uVar28 & uVar27);
  uVar29 = uVar18 ^ uVar10 ^ uVar9 ^ uVar25;
  uVar24 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar4 + 0x8f1bbcdc +
           (uVar27 >> 0x1b | uVar27 * 0x20) + uVar24 + ((uVar2 | uVar15) & uVar28 | uVar2 & uVar15);
  uVar6 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar19 ^ uVar11 ^ uVar5 ^ uVar1;
  uVar8 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar28 + 0x8f1bbcdc +
          (uVar29 >> 0x1b | uVar29 * 0x20) + uVar8 + ((uVar6 | uVar27) & uVar15 | uVar6 & uVar27);
  uVar4 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar3 ^ uVar12 ^ uVar10 ^ uVar7;
  uVar9 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar15 + 0x8f1bbcdc +
           (uVar2 >> 0x1b | uVar2 * 0x20) + uVar9 + ((uVar4 | uVar29) & uVar6 | uVar4 & uVar29);
  uVar28 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar16 ^ uVar13 ^ uVar11 ^ uVar24;
  uVar10 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar6 + 0x8f1bbcdc +
           (uVar27 >> 0x1b | uVar27 * 0x20) + uVar10 + ((uVar28 | uVar2) & uVar4 | uVar28 & uVar2);
  uVar15 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar14 ^ uVar12 ^ uVar8 ^ uVar17;
  uVar11 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar4 + 0x8f1bbcdc +
          (uVar29 >> 0x1b | uVar29 * 0x20) + uVar11 + ((uVar15 | uVar27) & uVar28 | uVar15 & uVar27)
  ;
  uVar5 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar26 ^ uVar13 ^ uVar9 ^ uVar25;
  uVar12 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar28 + 0x8f1bbcdc +
           (uVar2 >> 0x1b | uVar2 * 0x20) + uVar12 + ((uVar29 | uVar5) & uVar15 | uVar29 & uVar5);
  uVar4 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar18 ^ uVar14 ^ uVar10 ^ uVar1;
  uVar13 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar15 + 0x8f1bbcdc +
           (uVar27 >> 0x1b | uVar27 * 0x20) + uVar13 + ((uVar4 | uVar2) & uVar5 | uVar4 & uVar2);
  uVar28 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar19 ^ uVar26 ^ uVar11 ^ uVar7;
  uVar14 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar5 + 0x8f1bbcdc +
          (uVar29 >> 0x1b | uVar29 * 0x20) + uVar14 + ((uVar28 | uVar27) & uVar4 | uVar28 & uVar27);
  uVar15 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar3 ^ uVar18 ^ uVar12 ^ uVar24;
  uVar18 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar4 + 0xca62c1d6 + (uVar28 ^ uVar15 ^ uVar29) + uVar18 + (uVar2 >> 0x1b | uVar2 * 0x20)
  ;
  uVar4 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar16 ^ uVar19 ^ uVar13 ^ uVar8;
  uVar26 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar28 + 0xca62c1d6 +
           (uVar15 ^ uVar4 ^ uVar2) + uVar26 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar5 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar3 ^ uVar14 ^ uVar9 ^ uVar17;
  uVar28 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar15 + 0xca62c1d6 + (uVar27 ^ uVar4 ^ uVar5) + uVar28 + (uVar29 >> 0x1b | uVar29 * 0x20)
  ;
  uVar6 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar16 ^ uVar18 ^ uVar10 ^ uVar25;
  uVar3 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar4 + 0xca62c1d6 + (uVar6 ^ uVar29 ^ uVar5) + uVar3 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar4 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar17 = uVar26 ^ uVar11 ^ uVar1 ^ uVar17;
  uVar15 = uVar17 >> 0x1f | uVar17 * 2;
  uVar29 = uVar5 + 0xca62c1d6 + (uVar6 ^ uVar4 ^ uVar2) + uVar15 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar5 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar25 = uVar28 ^ uVar12 ^ uVar7 ^ uVar25;
  uVar25 = uVar25 >> 0x1f | uVar25 * 2;
  uVar2 = uVar6 + 0xca62c1d6 + (uVar4 ^ uVar5 ^ uVar27) + uVar25 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar6 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar1 = uVar3 ^ uVar13 ^ uVar24 ^ uVar1;
  uVar16 = uVar1 >> 0x1f | uVar1 * 2;
  uVar27 = uVar4 + 0xca62c1d6 + (uVar5 ^ uVar6 ^ uVar29) + uVar16 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar1 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar14 ^ uVar8 ^ uVar7 ^ uVar15;
  uVar17 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar5 + 0xca62c1d6 + (uVar2 ^ uVar6 ^ uVar1) + uVar17 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar18 ^ uVar9 ^ uVar24 ^ uVar25;
  uVar7 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar6 + 0xca62c1d6 + (uVar4 ^ uVar27 ^ uVar1) + uVar7 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar5 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar26 ^ uVar10 ^ uVar8 ^ uVar16;
  uVar24 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar1 + 0xca62c1d6 + (uVar4 ^ uVar5 ^ uVar29) + uVar24 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar1 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar28 ^ uVar11 ^ uVar9 ^ uVar17;
  uVar8 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar4 + 0xca62c1d6 + (uVar5 ^ uVar1 ^ uVar2) + uVar8 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = uVar3 ^ uVar12 ^ uVar10 ^ uVar7;
  uVar9 = uVar2 >> 0x1f | uVar2 * 2;
  uVar2 = uVar5 + 0xca62c1d6 + (uVar1 ^ uVar4 ^ uVar27) + uVar9 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar5 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar13 ^ uVar11 ^ uVar24 ^ uVar15;
  uVar6 = uVar27 >> 0x1f | uVar27 * 2;
  uVar27 = uVar1 + 0xca62c1d6 + (uVar29 ^ uVar4 ^ uVar5) + uVar6 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar1 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar29 = uVar14 ^ uVar12 ^ uVar8 ^ uVar25;
  uVar10 = uVar29 >> 0x1f | uVar29 * 2;
  uVar29 = uVar4 + 0xca62c1d6 + (uVar1 ^ uVar2 ^ uVar5) + uVar10 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar16 = uVar18 ^ uVar13 ^ uVar9 ^ uVar16;
  uVar11 = uVar16 >> 0x1f | uVar16 * 2;
  uVar2 = uVar5 + 0xca62c1d6 + (uVar1 ^ uVar4 ^ uVar27) + uVar11 + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar16 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar17 = uVar26 ^ uVar14 ^ uVar6 ^ uVar17;
  uVar5 = uVar17 >> 0x1f | uVar17 * 2;
  uVar27 = uVar1 + 0xca62c1d6 + (uVar4 ^ uVar16 ^ uVar29) + uVar5 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar6 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar7 = uVar28 ^ uVar18 ^ uVar10 ^ uVar7;
  uVar7 = uVar7 >> 0x1f | uVar7 * 2;
  uVar29 = uVar4 + 0xca62c1d6 + (uVar16 ^ uVar6 ^ uVar2) + uVar7 + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar17 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar24 = uVar3 ^ uVar26 ^ uVar11 ^ uVar24;
  uVar1 = uVar27 * 0x40000000 | uVar27 >> 2;
  uVar27 = uVar16 + 0xca62c1d6 +
           (uVar27 ^ uVar6 ^ uVar17) +
           (uVar24 >> 0x1f | uVar24 * 2) + (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar15 = uVar28 ^ uVar5 ^ uVar8 ^ uVar15;
  uVar2 = uVar6 + 0xca62c1d6 +
          (uVar1 ^ uVar29 ^ uVar17) +
          (uVar15 >> 0x1f | uVar15 * 2) + (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar29 = uVar29 * 0x40000000 | uVar29 >> 2;
  uVar25 = uVar3 ^ uVar7 ^ uVar9 ^ uVar25;
  *param_1 = *param_1 +
             uVar17 + 0xca62c1d6 +
             (uVar1 ^ uVar29 ^ uVar27) +
             (uVar25 >> 0x1f | uVar25 * 2) + (uVar2 >> 0x1b | uVar2 * 0x20);
  param_1[1] = param_1[1] + uVar2;
  param_1[2] = (uVar27 * 0x40000000 | uVar27 >> 2) + param_1[2];
  param_1[3] = param_1[3] + uVar29;
  param_1[4] = param_1[4] + uVar1;
  return;
}




/* from: libgscrypto:Sha1.cpp
   addr: 005BC810 */

void __thiscall
SecureHashAlgorithm1::longReverse(SecureHashAlgorithm1 *this,uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar1 = *param_1 << 8;
    uVar1 = (*param_1 >> 8 ^ uVar1) & 0xff00ff ^ uVar1;
    *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
    param_1 = param_1 + 1;
  }
  return;
}




/* from: libgscrypto:Sha1.cpp
   addr: 005BC850 */

void __thiscall
SecureHashAlgorithm1::SHAtoByte
          (SecureHashAlgorithm1 *this,uchar *param_1,uint *param_2,uint param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (param_3 != 0) {
    puVar1 = param_1 + 2;
    puVar2 = (uchar *)((int)param_2 + 2);
    do {
      puVar1[1] = puVar2[-2];
      *puVar1 = puVar2[-1];
      puVar1[-1] = *puVar2;
      puVar1[-2] = puVar2[1];
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar1 + (-2 - (int)param_1) < param_3);
  }
  return;
}

