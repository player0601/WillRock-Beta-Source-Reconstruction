
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid_ball.cpp
   addr: 00512300 */

void __thiscall rgdRIGID_BALL::HullInit(rgdRIGID_BALL *this,m3dBOX *param_1)

{
  (**(code **)(*(int *)param_1 + 0x1c))(this + 0x65f);
  *(float *)(this + 0x673) = *(float *)(this + 0x673) * ___real_3f358f6f;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid_ball.cpp
   addr: 00512330 */

float __thiscall rgdRIGID_BALL::CalcMass(rgdRIGID_BALL *this,float param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x673);
  return _DAT_005dcc98 * fVar1 * fVar1 * fVar1 * param_1 * ___real_3faaaaab;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid_ball.cpp
   addr: 00512350 */

void __thiscall rgdRIGID_BALL::CalcInertiaTensor(rgdRIGID_BALL *this)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x673);
  m3dMATR::Identity((m3dMATR *)(this + 0x15b));
  fVar1 = ___real_3f800000 / (fVar1 * fVar1);
  *(float *)(this + 0x15b) = fVar1 * *(float *)(this + 0x157) * ___real_40200000;
  *(float *)(this + 0x16f) = fVar1 * *(float *)(this + 0x157) * ___real_40200000;
  *(float *)(this + 0x183) = fVar1 * *(float *)(this + 0x157) * ___real_40200000;
  return;
}




/* from: gs:phys_rigid_ball.cpp
   addr: 005123C0 */

void __thiscall rgdRIGID_BALL::CalcFrictPointList(rgdRIGID_BALL *this)

{
  if (*(int *)(this + 0xaa7) == 0) {
    *(undefined4 *)(this + 0xcdb) = 0;
    return;
  }
  *(undefined4 *)(this + 0xcdb) = 1;
  *(undefined4 *)(this + 0xab7) = *(undefined4 *)(this + 0x6a7);
  *(undefined4 *)(this + 0xabb) = *(undefined4 *)(this + 0x6ab);
  *(undefined4 *)(this + 0xabf) = *(undefined4 *)(this + 0x6af);
  *(undefined4 *)(this + 0xaab) = *(undefined4 *)(this + 0x69b);
  *(undefined4 *)(this + 0xaaf) = *(undefined4 *)(this + 0x69f);
  *(undefined4 *)(this + 0xab3) = *(undefined4 *)(this + 0x6a3);
  *(undefined4 *)(this + 0xac3) = *(undefined4 *)(this + 0x6b3);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:phys_rigid_ball.cpp
   addr: 00512430 */

int __thiscall rgdRIGID_BALL::CheckForCollisions(rgdRIGID_BALL *this,int param_1)

{
  int iVar1;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  rgdRIGID::CalcPointWCS((rgdRIGID *)this,(rgdCFG *)(this + 0xd8f),(m3dV *)(this + 0x667),local_c);
  iVar1 = rgdRIGID::GetClosestPoint
                    ((rgdRIGID *)this,local_c,*(float *)(this + 0x673) + ___real_3cf5c28f,
                     (m3dV *)&local_24,(m3dV *)&local_18,&local_28);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0xaa7) = 0;
    return 0;
  }
  local_28 = local_28 - *(float *)(this + 0x673);
  if (___real_3cf5c28f < local_28) {
    *(undefined4 *)(this + 0xaa7) = 0;
    return 0;
  }
  *(undefined4 *)(this + 0x6b7) = 0xffffffff;
  *(undefined4 *)(this + 0x6bb) = 0xffffffff;
  *(undefined4 *)(this + 0x6a7) = local_24;
  *(float *)(this + 0x6b3) = local_28;
  *(undefined4 *)(this + 0x6ab) = local_20;
  *(undefined4 *)(this + 0xaa7) = 1;
  *(undefined4 *)(this + 0x6af) = local_1c;
  *(undefined4 *)(this + 0x69b) = local_18;
  *(undefined4 *)(this + 0x69f) = local_14;
  *(undefined4 *)(this + 0x6a3) = local_10;
  if (local_28 < _DAT_005dcc90) {
    *(undefined4 *)(this + 0x697) = 2;
    return 1;
  }
  *(undefined4 *)(this + 0x697) = 1;
  return 1;
}

