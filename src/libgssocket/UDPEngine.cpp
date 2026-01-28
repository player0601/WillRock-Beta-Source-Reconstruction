
/* from: libgssocket:UDPEngine.cpp
   addr: 005C2DF0 */

clUDPEngine *
clUDPEngine::GetClientService
          (uint param_1,ushort *param_2,ushort *param_3,clBasicProtocol *param_4,uchar param_5)

{
  hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
  *phVar1;
  uchar uVar2;
  hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  *phVar3;
  hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this;
  clUDPEngine *pcVar4;
  hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  *local_34;
  clBasicProtocol *local_30;
  hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  *local_2c;
  undefined4 local_28;
  pair<unsigned_short_const_,class_clUDPEngine*> local_24 [12];
  pair<unsigned_short_const_,class_clUDPEngine*> local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cca0e;
  local_c = ExceptionList;
  pcVar4 = (clUDPEngine *)0x0;
  ExceptionList = &local_c;
  if (m_pInstanceMap ==
      (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
       *)0x0) {
    ExceptionList = &local_c;
    phVar3 = (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              *)ExtAlloc_Malloc_4(0x18);
    local_34 = phVar3;
    if (phVar3 == (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                   *)0x0) {
      m_pInstanceMap =
           (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
            *)0x0;
    }
    else {
      *(undefined1 **)(phVar3 + 0x14) =
           &ExtAlloc::
            hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
            ::_vbtable_;
      local_4 = 1;
      _STL::
      hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
      ::
      hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                (phVar3);
      m_pInstanceMap =
           (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
            *)phVar3;
    }
    if (m_pInstanceMap ==
        (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
         *)0x0) {
      ExceptionList = local_c;
      return (clUDPEngine *)0x0;
    }
  }
  local_4 = 0xffffffff;
  if (param_5 == '\0') {
    _STL::
    hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::begin((hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
             *)m_pInstanceMap);
    phVar3 = local_34;
    local_28 = local_30;
    while (local_2c = phVar3,
          local_2c !=
          (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
           *)0x0) {
      if (*(uint *)(*(int *)(local_2c + 8) + 0x30) < 0x7fff) goto LAB_005c2ea4;
      phVar3 = *(hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                 **)local_2c;
      if (*(hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
            **)local_2c ==
          (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
           *)0x0) {
        phVar3 = (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                  *)_STL::
                    _Hashtable_iterator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                    ::M_skip_to_next((_Hashtable_iterator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                                      *)&local_2c);
      }
    }
  }
  else {
    _STL::
    hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::find((hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
            *)m_pInstanceMap,(ushort *)&local_34);
    local_2c = local_34;
    local_28 = local_30;
LAB_005c2ea4:
    if (local_2c !=
        (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
         *)0x0) {
      uVar2 = GetClientID(*(clUDPEngine **)(local_2c + 8),param_3);
      if (uVar2 != '\0') {
        this = (hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)(*(int *)(local_2c + 8) + 0x20);
        _STL::
        hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
        ::resize(this,*(int *)(*(int *)(local_2c + 8) + 0x30) + 1);
        _STL::
        hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
        ::insert_unique_noresize
                  ((hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                    *)this,local_18);
        ExceptionList = local_c;
        return *(clUDPEngine **)(local_2c + 8);
      }
      goto LAB_005c3041;
    }
  }
  pcVar4 = (clUDPEngine *)ExtAlloc_Malloc_4(0x98);
  local_4 = 2;
  if (pcVar4 == (clUDPEngine *)0x0) {
    pcVar4 = (clUDPEngine *)0x0;
  }
  else {
    pcVar4 = (clUDPEngine *)clUDPEngine(pcVar4);
  }
  local_4 = 0xffffffff;
  if (((pcVar4 != (clUDPEngine *)0x0) &&
      (uVar2 = FindClientPort(pcVar4,param_1,param_2,param_5), uVar2 != '\0')) &&
     (uVar2 = GetClientID(pcVar4,param_3), uVar2 != '\0')) {
    local_30 = param_4;
    local_34._0_2_ = *param_3;
    _STL::
    hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::resize((hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)(pcVar4 + 0x20),*(int *)(pcVar4 + 0x30) + 1);
    _STL::
    hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::insert_unique_noresize
              ((hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *)(pcVar4 + 0x20),local_24);
    phVar1 = m_pInstanceMap;
    local_34 = (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *)CONCAT22(local_34._2_2_,*param_2);
    local_30 = (clBasicProtocol *)pcVar4;
    _STL::
    hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::resize((hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              *)m_pInstanceMap,*(int *)(m_pInstanceMap + 0x10) + 1);
    _STL::
    hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::insert_unique_noresize
              ((hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *)phVar1,local_24);
    *(ushort *)(pcVar4 + 4) = *param_2;
    ExceptionList = local_c;
    return pcVar4;
  }
LAB_005c3041:
  phVar1 = m_pInstanceMap;
  if (*(int *)(m_pInstanceMap + 0x10) == 0) {
    if (m_pInstanceMap !=
        (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
         *)0x0) {
      _STL::
      hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
      ::
      ~hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                ((hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                  *)m_pInstanceMap);
      ExtAlloc_Free_4(phVar1);
    }
    m_pInstanceMap =
         (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
          *)0x0;
  }
  if (pcVar4 != (clUDPEngine *)0x0) {
    ~clUDPEngine(pcVar4);
    ExtAlloc_Free_4(pcVar4);
  }
  ExceptionList = local_c;
  return (clUDPEngine *)0x0;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3090 */

uchar __thiscall clUDPEngine::GetClientID(clUDPEngine *this,ushort *param_1)

{
  int iVar1;
  
  if (((*(int *)(this + 0x84) - *(int *)(this + 0x74) >> 2) + -1) * 0x40 +
      (*(int *)(this + 0x78) - *(int *)(this + 0x7c) >> 1) +
      (*(int *)(this + 0x70) - (int)*(ushort **)(this + 0x68) >> 1) == 0) {
    if (0xfffff < *(int *)(this + 0x30) + 1U) {
      return '\0';
    }
    *param_1 = (ushort)(*(int *)(this + 0x30) + 1U);
    return '\x01';
  }
  *param_1 = **(ushort **)(this + 0x68);
  if (*(int *)(this + 0x68) != *(int *)(this + 0x70) + -2) {
    *(int *)(this + 0x68) = *(int *)(this + 0x68) + 2;
    return '\x01';
  }
  ExtAlloc_Free_4(*(undefined4 *)(this + 0x6c));
  iVar1 = *(int *)(this + 0x74);
  *(int **)(this + 0x74) = (int *)(iVar1 + 4);
  iVar1 = *(int *)(iVar1 + 4);
  *(int *)(this + 0x6c) = iVar1;
  *(int *)(this + 0x70) = iVar1 + 0x80;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x6c);
  return '\x01';
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3130 */

void __thiscall clUDPEngine::LeaveService(clUDPEngine *this,ushort param_1)

{
  uint uVar1;
  ushort *puVar2;
  hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
  *phVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(this + 0x30);
  uVar4 = _STL::
          hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
          ::erase((hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                   *)(this + 0x20),&param_1);
  if ((uVar1 != uVar4) && (param_1 != 0)) {
    puVar2 = *(ushort **)(this + 0x78);
    if (puVar2 == (ushort *)(*(int *)(this + 0x80) + -2)) {
      _STL::deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::M_push_back_aux_v
                ((deque<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *)(this + 0x68),
                 &param_1);
    }
    else {
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = param_1;
      }
      *(int *)(this + 0x78) = *(int *)(this + 0x78) + 2;
    }
  }
  if (*(int *)(this + 0x30) == 0) {
    _STL::
    hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    ::erase((hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
             *)m_pInstanceMap,(ushort *)(this + 4));
    ~clUDPEngine(this);
    ExtAlloc_Free_4(this);
    phVar3 = m_pInstanceMap;
    if (*(int *)(m_pInstanceMap + 0x10) == 0) {
      if (m_pInstanceMap !=
          (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
           *)0x0) {
        _STL::
        hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
        ::
        ~hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                  ((hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                    *)m_pInstanceMap);
        ExtAlloc_Free_4(phVar3);
      }
      m_pInstanceMap =
           (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
            *)0x0;
    }
  }
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C31D0
   addr: 005C31D0
   addr: 005C31D0 */

void __thiscall
_STL::
hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
::
~hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
          (hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
           *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(this + 8) - *(int *)(this + 4) >> 2 != 0) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(this + 4) + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar2;
        ExtAlloc_Free_4(puVar2);
        puVar2 = puVar1;
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(*(int *)(this + 4) + -4 + uVar3 * 4) = 0;
    } while (uVar3 < (uint)(*(int *)(this + 8) - *(int *)(this + 4) >> 2));
  }
  *(undefined4 *)(this + 0x10) = 0;
  if (*(int *)(this + 4) != 0) {
    ExtAlloc_Free_4(*(int *)(this + 4));
  }
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3230 */

clUDPEngine * __thiscall clUDPEngine::clUDPEngine(clUDPEngine *this)

{
  undefined4 uVar1;
  hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  hStack00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005cca6f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (_hStack00000004 != 0) {
    ExceptionList = &local_c;
    *(undefined1 **)this = &_vbtable_;
  }
  clSocket::clSocket((clSocket *)(this + 8));
  *(undefined4 *)(this + 0x1c) = 0x20;
  *(undefined8 **)(this + 0x34) =
       &ExtAlloc::
        hash_map<unsigned_short,class_clBasicProtocol*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>_>
        ::_vbtable_;
  *(hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    *)(this + 0x20) = hStack00000004;
  *(hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    *)(this + 0x21) = hStack00000004;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    *)(this + 0x22) = hStack00000004;
  _STL::vector<char,class_ExtAlloc::Allocator<char>_>::vector<char,class_ExtAlloc::Allocator<char>_>
            ((vector<char,class_ExtAlloc::Allocator<char>_> *)(this + 0x24),
             (Allocator<char> *)&stack0x00000004);
  local_4._0_1_ = 2;
  _STL::
  _STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
  ::
  STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
            ((_STLP_alloc_proxy<struct__STL::_List_node<class_CConnection*>*,struct__STL::_List_node<class_CConnection*>,class_ExtAlloc::Allocator<class_CConnection*>_>
              *)(this + 0x30),(Allocator<class_CConnection*> *)&stack0x00000004,
             (_List_node<class_CConnection*> *)0x0);
  local_4._0_1_ = 3;
  _STL::
  hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::M_initialize_buckets
            ((hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)(this + 0x20),100);
  *(undefined8 **)(this + 100) = &clPointerDeque<class_clSegment*>::_vbtable_;
  local_4._0_1_ = 5;
  _STL::_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::
  Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>
            ((_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *)
             (this + 0x3c),(Allocator<class_clSegment*> *)&stack0x00000004,0);
  *(undefined ***)(this + 0x38) = &clPointerDeque<class_clSegment*>::_vftable_;
  *(undefined8 **)(this + 0x90) = &ExtAlloc::deque<unsigned_short>::_vbtable_;
  local_4 = CONCAT31(local_4._1_3_,7);
  _STL::_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::
  Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>
            ((_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *)(this + 0x68)
             ,(Allocator<unsigned_short> *)&stack0x00000004,0);
  uVar1 = ExtAlloc_Malloc_4(0x20);
  *(undefined4 *)(this + 0x94) = uVar1;
  ExceptionList = local_c;
  return this;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3360
   addr: 005C3360 */

void * __thiscall
clPointerDeque<class_clSegment*>::_scalar_deleting_destructor_
          (clPointerDeque<class_clSegment*> *this,uint param_1)

{
  ~clPointerDeque<class_clSegment*>(this);
  if ((param_1 & 1) != 0) {
    ExtAlloc_Free_4(this);
  }
  return this;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3380 */

void __thiscall clUDPEngine::~clUDPEngine(clUDPEngine *this)

{
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005ccae6;
  local_c = ExceptionList;
  local_4 = 0;
  local_38 = *(undefined4 *)(this + 0x94);
  local_3c = 0x5c33b5;
  ExceptionList = &local_c;
  ExtAlloc_Free_4();
  local_44 = *(undefined4 *)(this + 0x78);
  local_40 = *(undefined4 *)(this + 0x7c);
  local_4._0_1_ = 3;
  local_3c = *(undefined4 *)(this + 0x80);
  local_38 = *(undefined4 *)(this + 0x84);
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (a_Stack_54,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             (this + 0x68));
  _STL::Destroy();
  local_4._0_1_ = 2;
  local_38 = 0x5c3403;
  _STL::_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::
  ~_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>
            ((_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *)(this + 0x68)
            );
  *(undefined ***)(this + 0x38) = &clPointerDeque<class_clSegment*>::_vftable_;
  local_44 = *(undefined4 *)(this + 0x4c);
  local_40 = *(undefined4 *)(this + 0x50);
  local_4._0_1_ = 4;
  local_3c = *(undefined4 *)(this + 0x54);
  local_38 = *(undefined4 *)(this + 0x58);
  _STL::deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::begin
            ((deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *)(this + 0x3c));
  clPointerDeque<class_clSegment*>::erase
            ((clPointerDeque<class_clSegment*> *)(this + 0x38),local_1c);
  local_4._0_1_ = 1;
  local_38 = 0x5c3459;
  _STL::deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::
  ~deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>
            ((deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *)(this + 0x3c));
  local_4._0_1_ = 6;
  local_38 = 0x5c346c;
  _STL::
  hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::clear((hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
           *)(this + 0x20));
  local_4 = (uint)local_4._1_3_ << 8;
  local_38 = 0x5c3479;
  _STL::
  _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  ::
  ~_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
            ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
              *)(this + 0x24));
  local_4 = 0xffffffff;
  local_38 = 0x5c3489;
  m3dTerm2DMatr();
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C34A0 */

void __thiscall
ExtAlloc::deque<class_clSegment*>::~deque<class_clSegment*>(deque<class_clSegment*> *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_5c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_4c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_3c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_2c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ccaf8;
  local_c = ExceptionList;
  local_4 = 0;
  local_6c = *(undefined4 *)(this + 0x10);
  local_68 = *(undefined4 *)(this + 0x14);
  local_64 = *(undefined4 *)(this + 0x18);
  local_60 = *(undefined4 *)(this + 0x1c);
  ExceptionList = &local_c;
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_5c,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)this);
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_4c,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)&local_6c);
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_3c,local_5c);
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_2c,local_4c);
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_1c,local_3c);
  if (*(int *)(this + 0x20) != 0) {
    iVar1 = *(int *)(this + 0x1c);
    for (puVar2 = *(undefined4 **)(this + 0xc); puVar2 < (undefined4 *)(iVar1 + 4);
        puVar2 = puVar2 + 1) {
      ExtAlloc_Free_4(*puVar2);
    }
    ExtAlloc_Free_4(*(undefined4 *)(this + 0x20));
  }
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3570 */

uchar __thiscall clUDPEngine::SetMaxRecvSize(clUDPEngine *this,ushort param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)param_1;
  if (*(uint *)(this + 0x1c) <= uVar1) {
    ExtAlloc_Free_4(*(undefined4 *)(this + 0x94));
    if (0x1000 < param_1) {
      *(undefined4 *)(this + 0x1c) = 0x1000;
      uVar2 = ExtAlloc_Malloc_4(0x1000);
      *(undefined4 *)(this + 0x94) = uVar2;
      return '\0';
    }
    *(uint *)(this + 0x1c) = uVar1;
    uVar2 = ExtAlloc_Malloc_4(uVar1);
    *(undefined4 *)(this + 0x94) = uVar2;
  }
  return '\x01';
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C35D0 */

uchar __thiscall
clUDPEngine::FindClientPort(clUDPEngine *this,uint param_1,ushort *param_2,uchar param_3)

{
  clSocket *this_00;
  uchar uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  
  this_00 = (clSocket *)(this + 8);
  uVar1 = clSocket::CreateUDP(this_00);
  if ((uVar1 != '\0') && (uVar1 = clSocket::SetNonBlocking(this_00,'\x01'), uVar1 != '\0')) {
    if (param_3 == '\0') {
      uVar2 = *param_2;
      if (uVar2 < 0x400) {
        uVar2 = 0x400;
      }
      *param_2 = uVar2;
      uVar4 = 0xffff;
      if (0x3ff < uVar2) {
        uVar4 = uVar2 - 1;
      }
      do {
        uVar1 = clSocket::Bind(this_00,param_1,*param_2);
        if (uVar1 != '\0') {
          return '\x01';
        }
        if (*param_2 == 0xffff) {
          uVar2 = 0x400;
        }
        else {
          uVar2 = *param_2 + 1;
        }
        *param_2 = uVar2;
      } while (uVar2 != uVar4);
    }
    else {
      clSocket::Bind(this_00,0,*param_2);
    }
  }
  iVar3 = clSocket::GetLastError(this_00);
  *(int *)(this + 0x18) = iVar3;
  clSocket::Close(this_00);
  return '\0';
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C36A0 */

uchar __thiscall clUDPEngine::Send(clUDPEngine *this,clSegment *param_1)

{
  int iVar1;
  
  iVar1 = clSocket::SendTo((clSocket *)(this + 8),*(char **)(param_1 + 0x10),
                           *(int *)(param_1 + 0x14),*(uint *)(param_1 + 8),
                           *(ushort *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    iVar1 = clSocket::GetLastError((clSocket *)(this + 8));
    *(int *)(this + 0x18) = iVar1;
    return '\0';
  }
  return '\x01';
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C36F0 */

void __thiscall clUDPEngine::ReceiveAllData(clUDPEngine *this)

{
  int iVar1;
  _Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_> *p_Var2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  int local_18;
  undefined4 local_14;
  ushort local_10 [2];
  uint local_c;
  _Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_> *local_8;
  
  local_18 = 0;
  do {
    iVar1 = clSocket::ReceiveFrom
                      ((clSocket *)(this + 8),*(char **)(this + 0x94),*(int *)(this + 0x1c),&local_c
                       ,local_10,'\0');
    if (iVar1 < 1) {
      return;
    }
    if (7 < iVar1) {
      local_14 = CONCAT22(extraout_var,*(undefined2 *)(*(int *)(this + 0x94) + 2));
      p_Var2 = _STL::
               hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               ::M_find((hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                         *)(this + 0x20),(ushort *)&local_14);
      local_8 = p_Var2;
      if (p_Var2 != (_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>
                     *)0x0) {
        puVar3 = (undefined4 *)ExtAlloc_Malloc_4(0x1c);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          uVar4 = *(undefined4 *)(this + 0x94);
          puVar3[2] = local_c;
          puVar3[1] = &clSegment::_vbtable_;
          *(short *)(puVar3 + 3) = local_10[0];
          puVar3[4] = uVar4;
          puVar3[5] = iVar1;
          puVar3[6] = uVar4;
          *puVar3 = &clSegment::_vftable_;
          p_Var2 = local_8;
        }
        uVar4 = ExtAlloc_Malloc_4(*(undefined4 *)(this + 0x1c));
        *(undefined4 *)(this + 0x94) = uVar4;
        (**(code **)(**(int **)(p_Var2 + 8) + 4))(puVar3);
      }
    }
    local_18 = local_18 + 1;
  } while (local_18 < 1000);
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C37E0 */

void __thiscall
clPointerDeque<class_clSegment*>::~clPointerDeque<class_clSegment*>
          (clPointerDeque<class_clSegment*> *this)

{
  deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *this_00;
  int *piVar1;
  int iVar2;
  uint uVar3;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_a8 [16];
  int *local_98;
  undefined4 local_94;
  undefined4 local_90;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int *local_5c;
  undefined4 local_58;
  int *local_54;
  int local_50;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_4c [8];
  int *local_44;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_2c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ccb3f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &_vftable_;
  this_00 = (deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *)(this + 4);
  piVar1 = *(int **)(this + 0x14);
  local_4 = 0;
  local_68 = *(undefined4 *)(this + 0x18);
  local_64 = *(undefined4 *)(this + 0x1c);
  local_60 = *(undefined4 *)(this + 0x20);
  local_90 = 0x5c383e;
  _STL::deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::begin(this_00);
  local_44 = local_54;
  local_94 = local_68;
  while (local_68 = local_94, local_5c != piVar1) {
    local_38 = *(undefined4 *)(this + 0x18);
    local_34 = *(undefined4 *)(this + 0x1c);
    local_30 = *(undefined4 *)(this + 0x20);
    if (local_5c == *(int **)(this + 0x14)) break;
    if ((undefined4 *)*local_5c != (undefined4 *)0x0) {
      local_90 = 0x5c3885;
      (*(code *)**(undefined4 **)*local_5c)();
    }
    local_5c = local_5c + 1;
    local_94 = local_68;
    if (local_5c == local_44) {
      local_5c = *(int **)(local_50 + 4);
      local_50 = local_50 + 4;
      local_44 = local_5c + 0x20;
    }
  }
  local_98 = piVar1;
  local_90 = local_64;
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (a_Stack_a8,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &local_5c);
  _STL::deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::erase
            (this_00,a_Stack_2c);
  local_4 = 1;
  local_5c = *(int **)(this + 0x14);
  local_58 = *(undefined4 *)(this + 0x18);
  local_54 = *(int **)(this + 0x1c);
  local_50 = *(int *)(this + 0x20);
  local_90 = 0x5c3914;
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (a_Stack_3c,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             this_00);
  local_90 = 0x5c3922;
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (a_Stack_4c,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &local_5c);
  local_90 = 0x5c3930;
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (a_Stack_6c,a_Stack_3c);
  local_90 = 0x5c393e;
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (a_Stack_2c,a_Stack_4c);
  local_90 = 0x5c394c;
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (a_Stack_1c,a_Stack_6c);
  if (*(int *)(this + 0x24) != 0) {
    iVar2 = *(int *)(this + 0x20);
    for (uVar3 = *(uint *)(this + 0x10); uVar3 < iVar2 + 4U; uVar3 = uVar3 + 4) {
      local_90 = 0x5c3968;
      ExtAlloc_Free_4();
    }
    local_90 = 0x5c3978;
    ExtAlloc_Free_4();
  }
  ExceptionList = pvStack_c;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3990 */

void __thiscall
_STL::deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::
~deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>
          (deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_5c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_4c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_3c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_2c [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ccb58;
  local_c = ExceptionList;
  local_4 = 0;
  local_6c = *(undefined4 *)(this + 0x10);
  local_68 = *(undefined4 *)(this + 0x14);
  local_64 = *(undefined4 *)(this + 0x18);
  local_60 = *(undefined4 *)(this + 0x1c);
  ExceptionList = &local_c;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_5c,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)this);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_4c,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)&local_6c);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_3c,local_5c);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_2c,local_4c);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_1c,local_3c);
  if (*(int *)(this + 0x20) != 0) {
    iVar1 = *(int *)(this + 0x1c);
    for (puVar2 = *(undefined4 **)(this + 0xc); puVar2 < (undefined4 *)(iVar1 + 4);
        puVar2 = puVar2 + 1) {
      ExtAlloc_Free_4(*puVar2);
    }
    ExtAlloc_Free_4(*(undefined4 *)(this + 0x20));
  }
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3A70 */

void __thiscall
_STL::deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::begin
          (deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = *(undefined4 *)this;
  in_stack_00000004[1] = *(undefined4 *)(this + 4);
  in_stack_00000004[2] = *(undefined4 *)(this + 8);
  in_stack_00000004[3] = *(undefined4 *)(this + 0xc);
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3AA0
   addr: 005C3AA0 */

void __thiscall
_STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
          (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *this,
          _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3AD0 */

hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
* __thiscall
_STL::
hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
::
hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
          (hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
           *this)

{
  vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  *this_00;
  undefined **ppuVar1;
  undefined *puVar2;
  hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  local_19;
  undefined4 local_18;
  void *local_14;
  hash_map<unsigned_short,class_clUDPEngine*,struct__STL::hash<unsigned_short>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ccb8e;
  local_c = ExceptionList;
  this_00 = (vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
             *)(this + 4);
  ExceptionList = &local_c;
  *this = local_19;
  this[1] = local_19;
  this[2] = local_19;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  local_4 = 2;
  local_18 = 100;
  local_10 = this;
  ppuVar1 = (undefined **)
            lower_bound(&_Stl_prime<bool>::_M_list,&PTR__RTTI_Complete_Object_Locator__005e4058,
                        &local_18,this,0);
  puVar2 = (undefined *)0xfffffffb;
  if (ppuVar1 != &PTR__RTTI_Complete_Object_Locator__005e4058) {
    puVar2 = *ppuVar1;
  }
  vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  ::reserve(this_00,(uint)puVar2);
  local_14 = (void *)0x0;
  vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  ::M_fill_insert(this_00,*(void ***)(this + 8),(uint)puVar2,&local_14);
  *(undefined4 *)(this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3B90 */

void __thiscall
_STL::
hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
::begin(hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
        *this)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *in_stack_00000004;
  
  piVar1 = *(int **)(this + 4);
  uVar2 = 0;
  piVar3 = piVar1;
  if (*(int *)(this + 8) - (int)piVar1 >> 2 != 0) {
    do {
      if (*piVar3 != 0) {
        *in_stack_00000004 = piVar1[uVar2];
        in_stack_00000004[1] = (int)this;
        return;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < (uint)(*(int *)(this + 8) - *(int *)(this + 4) >> 2));
  }
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = (int)this;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3BF0 */

undefined4 * __thiscall
clPointerDeque<class_clSegment*>::erase
          (clPointerDeque<class_clSegment*> *this,undefined4 *param_2,clSegment **param_3,
          undefined4 param_4,clSegment **param_5,clSegment ***param_6,clSegment **param_7,
          undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  _Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *this_00;
  _Deque_iterator_base<class_clSegment*> *this_01;
  undefined4 uVar1;
  clSegment **ppcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  clSegment **ppcVar6;
  clSegment **ppcVar7;
  clSegment ***pppcVar8;
  undefined4 *puVar9;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_a4 [4];
  undefined4 uStack_a0;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_94 [4];
  undefined4 uStack_90;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_88 [4];
  clSegment **ppcStack_84;
  undefined4 uStack_80;
  clSegment **local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 uStack_4c;
  clSegment **ppcStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_30 [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_20 [4];
  undefined4 local_1c;
  undefined1 auStack_10 [16];
  
  ppcVar2 = param_7;
  local_1c = param_4;
  ppcVar6 = param_5;
  ppcVar7 = param_3;
  pppcVar8 = param_6;
  if (param_3 != param_7) {
    do {
      local_3c = *(undefined4 *)(this + 0x18);
      local_38 = *(undefined4 *)(this + 0x1c);
      local_34 = *(undefined4 *)(this + 0x20);
      if (ppcVar7 == *(clSegment ***)(this + 0x14)) break;
      if (*ppcVar7 != (clSegment *)0x0) {
        (*(code *)**(undefined4 **)*ppcVar7)();
      }
      ppcVar7 = ppcVar7 + 1;
      if (ppcVar7 == ppcVar6) {
        ppcVar7 = pppcVar8[1];
        pppcVar8 = pppcVar8 + 1;
        ppcVar6 = ppcVar7 + 0x20;
      }
    } while (ppcVar7 != ppcVar2);
  }
  local_5c = param_8;
  local_60 = ppcVar2;
  local_58 = param_9;
  local_54 = param_10;
  _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &local_50,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &param_3);
  this_00 = (_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *)(this + 4)
  ;
  if ((local_50 == *(int *)(this + 4)) && (ppcVar2 == *(clSegment ***)(this + 0x14))) {
    puVar9 = (undefined4 *)(*(int *)(this + 0x10) + 4);
    if (puVar9 < *(undefined4 **)(this + 0x20)) {
      do {
        uStack_80 = 0x5c3cce;
        _STL::
        _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
        ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                      *)(this + 0x28),
                     (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                      *)*puVar9,0x20);
        puVar9 = puVar9 + 1;
      } while (puVar9 < *(undefined4 **)(this + 0x20));
    }
    if (*(int *)(this + 0x10) != *(int *)(this + 0x20)) {
      uStack_80 = 0x5c3cf0;
      _STL::
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *)(this + 0x28),
                   *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                     **)(this + 0x18),0x20);
    }
    *(undefined4 *)(this + 0x14) = *(undefined4 *)this_00;
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x10);
    *param_2 = *(undefined4 *)this_00;
    param_2[1] = *(undefined4 *)(this + 8);
    param_2[2] = *(undefined4 *)(this + 0xc);
    param_2[3] = *(undefined4 *)(this + 0x10);
    return param_2;
  }
  iVar3 = _STL::_Deque_iterator_base<class_clSegment*>::M_subtract
                    ((_Deque_iterator_base<class_clSegment*> *)&local_60,
                     (_Deque_iterator_base<class_clSegment*> *)&local_50);
  iVar4 = _STL::_Deque_iterator_base<class_clSegment*>::M_subtract
                    ((_Deque_iterator_base<class_clSegment*> *)&local_50,
                     (_Deque_iterator_base<class_clSegment*> *)this_00);
  this_01 = (_Deque_iterator_base<class_clSegment*> *)(this + 0x14);
  param_7 = (clSegment **)iVar4;
  iVar5 = _STL::_Deque_iterator_base<class_clSegment*>::M_subtract
                    (this_01,(_Deque_iterator_base<class_clSegment*> *)this_00);
  if (iVar4 < (iVar5 - iVar3) / 2) {
    ppcStack_40 = local_60;
    local_3c = local_5c;
    local_34 = local_54;
    local_38 = local_58;
    _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_30,
               (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &local_50);
    _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_20,
               (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               this_00);
    param_3 = (clSegment **)CONCAT31(param_3._1_3_,param_2._0_1_);
    uStack_90 = 0x5c3dc3;
    _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_88,
               (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &ppcStack_40);
    uStack_a0 = 0x5c3dd2;
    _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &stack0xffffff68,a_Stack_30);
    _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &stack0xffffff58,a_Stack_20);
    _STL::copy_backward_aux(auStack_10);
    param_3 = *(clSegment ***)this_00;
    param_4 = *(undefined4 *)(this + 8);
    param_5 = *(clSegment ***)(this + 0xc);
    param_6 = *(clSegment ****)(this + 0x10);
    _STL::_Deque_iterator_base<class_clSegment*>::M_advance
              ((_Deque_iterator_base<class_clSegment*> *)&param_3,iVar3);
    pppcVar8 = param_6;
    uVar1 = param_4;
    ppcVar6 = param_3;
    ppcStack_84 = param_3;
    uStack_80 = param_4;
    _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_94,
               (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               this_00);
    _STL::Destroy();
    uStack_80 = 0x5c3e6c;
    _STL::_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::
    M_destroy_nodes(this_00,*(clSegment ****)(this + 0x10),pppcVar8);
    *(clSegment ***)this_00 = ppcVar6;
    *(undefined4 *)(this + 8) = uVar1;
    *(clSegment ***)(this + 0xc) = param_5;
    *(clSegment ****)(this + 0x10) = pppcVar8;
  }
  else {
    ppcStack_84 = (clSegment **)local_50;
    uStack_80 = uStack_4c;
    _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_94,
               (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               this_01);
    _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_a4,
               (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &local_60);
    _STL::copy();
    uStack_80 = 0x5c3ee0;
    _STL::_Deque_iterator<class_clSegment*,struct__STL::_Nonconst_traits<class_clSegment*>_>::
    operator-((_Deque_iterator<class_clSegment*,struct__STL::_Nonconst_traits<class_clSegment*>_> *)
              this_01,(int)&param_3);
    ppcStack_84 = *(clSegment ***)this_01;
    uStack_80 = *(undefined4 *)(this + 0x18);
    _STL::_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_94,
               (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &param_3);
    _STL::Destroy();
    uStack_80 = 0x5c3f2d;
    _STL::_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::
    M_destroy_nodes(this_00,param_6 + 1,(clSegment ***)(*(int *)(this + 0x20) + 4));
    *(clSegment ***)this_01 = param_3;
    *(undefined4 *)(this + 0x18) = param_4;
    *(clSegment ***)(this + 0x1c) = param_5;
    *(clSegment ****)(this + 0x20) = param_6;
  }
  uStack_80 = 0x5c3f5e;
  _STL::_Deque_iterator<class_clSegment*,struct__STL::_Nonconst_traits<class_clSegment*>_>::
  operator+((_Deque_iterator<class_clSegment*,struct__STL::_Nonconst_traits<class_clSegment*>_> *)
            this_00,(int)param_2);
  return param_2;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3F70 */

_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> * __thiscall
_STL::_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::
Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>
          (_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *this,
          Allocator<class_clSegment*> *param_1,uint param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ccbb6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  local_4 = 1;
  M_initialize_map(this,param_2);
  ExceptionList = local_c;
  return this;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C3FE0 */

int __thiscall
_STL::_Deque_iterator_base<class_clSegment*>::M_subtract
          (_Deque_iterator_base<class_clSegment*> *this,
          _Deque_iterator_base<class_clSegment*> *param_1)

{
  return (*(int *)(this + 0xc) - *(int *)(param_1 + 0xc) >> 2) * 0x20 +
         (*(int *)this - *(int *)(this + 4) >> 2) + -0x20 +
         (*(int *)(param_1 + 8) - *(int *)param_1 >> 2);
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4020 */

void __thiscall
_STL::
hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
::M_initialize_buckets
          (hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
           *this,uint param_1)

{
  vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_00;
  int iVar1;
  void **ppvVar2;
  uint *puVar3;
  int iVar4;
  uint **ppuVar5;
  void **ppvVar6;
  uint *puVar7;
  void **ppvVar8;
  void *local_4;
  
  ppuVar5 = &_Stl_prime<bool>::_M_list;
  iVar4 = 0x1c;
  do {
    iVar1 = iVar4 >> 1;
    if (ppuVar5[iVar1] < param_1) {
      ppuVar5 = ppuVar5 + iVar1 + 1;
      iVar1 = iVar4 + (-1 - iVar1);
    }
    iVar4 = iVar1;
  } while (0 < iVar1);
  puVar7 = (uint *)0xfffffffb;
  if (ppuVar5 != (uint **)&PTR__RTTI_Complete_Object_Locator__005e4058) {
    puVar7 = *ppuVar5;
  }
  ppvVar6 = *(void ***)(this + 4);
  this_00 = (vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
             *)(this + 4);
  if ((uint *)(*(int *)(this + 0xc) - (int)ppvVar6 >> 2) < puVar7) {
    ppvVar8 = *(void ***)(this + 8);
    if (ppvVar6 == (void **)0x0) {
      ppvVar2 = (void **)ExtAlloc_Malloc_4((int)puVar7 * 4);
    }
    else {
      ppvVar2 = vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                ::M_allocate_and_copy(this_00,(uint)puVar7,ppvVar6,ppvVar8);
      ExtAlloc_Free_4(*(undefined4 *)this_00);
    }
    *(void ***)this_00 = ppvVar2;
    *(void ***)(this + 8) = ppvVar2 + ((int)ppvVar8 - (int)ppvVar6 >> 2);
    *(void ***)(this + 0xc) = ppvVar2 + (int)puVar7;
  }
  ppvVar6 = *(void ***)(this + 8);
  local_4 = (void *)0x0;
  if (puVar7 != (uint *)0x0) {
    if ((uint *)(*(int *)(this + 0xc) - *(int *)(this + 8) >> 2) < puVar7) {
      vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
      ::M_insert_overflow(this_00,ppvVar6,&local_4,(__true_type *)&param_1,(uint)puVar7,false);
      *(undefined4 *)(this + 0x10) = 0;
      return;
    }
    ppvVar8 = *(void ***)(this + 8);
    puVar3 = (uint *)(*(int *)(this + 8) - (int)ppvVar6 >> 2);
    if (puVar7 < puVar3) {
      copy_aux(ppvVar8 + -(int)puVar7,ppvVar8,ppvVar8,(__true_type *)&param_1);
      *(int *)(this + 8) = *(int *)(this + 8) + (int)puVar7 * 4;
      copy_trivial_backward(ppvVar6,ppvVar8 + -(int)puVar7,ppvVar8);
      ppvVar8 = ppvVar6 + (int)puVar7;
      if (ppvVar6 != ppvVar8) {
        do {
          *ppvVar6 = (void *)0x0;
          ppvVar6 = ppvVar6 + 1;
        } while (ppvVar6 != ppvVar8);
        *(undefined4 *)(this + 0x10) = 0;
        return;
      }
    }
    else {
      iVar1 = (int)puVar7 - (int)puVar3;
      iVar4 = iVar1;
      ppvVar2 = ppvVar8;
      if (iVar1 != 0) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppvVar2 = (void *)0x0;
          ppvVar2 = ppvVar2 + 1;
        }
      }
      ppvVar2 = (void **)(*(int *)(this + 8) + iVar1 * 4);
      *(void ***)(this + 8) = ppvVar2;
      copy_aux(ppvVar6,ppvVar8,ppvVar2,(__true_type *)&param_1);
      *(int *)(this + 8) = *(int *)(this + 8) + (int)puVar3 * 4;
      if (ppvVar6 == ppvVar8) {
        *(undefined4 *)(this + 0x10) = 0;
        return;
      }
      do {
        *ppvVar6 = (void *)0x0;
        ppvVar6 = ppvVar6 + 1;
      } while (ppvVar6 != ppvVar8);
    }
    *(undefined4 *)(this + 0x10) = 0;
    return;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4210 */

void * _STL::copy_trivial_backward(void *param_1,void *param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (int)param_2 - (int)param_1;
  if (0 < (int)_Size) {
    pvVar1 = memmove((void *)((int)param_3 - _Size),param_1,_Size);
    return pvVar1;
  }
  return param_3;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4250
   addr: 005C4250 */

uint __thiscall
_STL::
hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
::erase(hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
        *this,ushort *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)*param_1 % (uint)(*(int *)(this + 8) - *(int *)(this + 4) >> 2);
  uVar5 = 0;
  puVar1 = *(undefined4 **)(*(int *)(this + 4) + uVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    puVar2 = (undefined4 *)*puVar1;
    while (puVar2 != (undefined4 *)0x0) {
      if (*(ushort *)(puVar2 + 1) == *param_1) {
        *puVar3 = *puVar2;
        ExtAlloc_Free_4(puVar2);
        puVar2 = (undefined4 *)*puVar3;
        uVar5 = uVar5 + 1;
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (undefined4 *)*puVar2;
      }
    }
    if (*(ushort *)(puVar1 + 1) == *param_1) {
      *(undefined4 *)(*(int *)(this + 4) + uVar4 * 4) = *puVar1;
      ExtAlloc_Free_4(puVar1);
      uVar5 = uVar5 + 1;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
    }
  }
  return uVar5;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C42E0 */

void __thiscall
_STL::
hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
::resize(hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
         *this,uint param_1)

{
  animSYSTEM *this_00;
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_> *pAVar5;
  void **ppvVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined *puVar10;
  uint local_24;
  void *local_20;
  void **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ccbd0;
  local_c = ExceptionList;
  this_00 = (animSYSTEM *)(this + 4);
  puVar7 = (undefined *)(*(int *)(this + 8) - *(int *)this_00 >> 2);
  if (puVar7 < param_1) {
    local_24 = param_1;
    puVar10 = (undefined *)0x0;
    ExceptionList = &local_c;
    ppuVar4 = (undefined **)
              lower_bound(&_Stl_prime<bool>::_M_list,&PTR__RTTI_Complete_Object_Locator__005e4058,
                          &local_24,param_1,0);
    puVar8 = (undefined *)0xfffffffb;
    if (ppuVar4 != &PTR__RTTI_Complete_Object_Locator__005e4058) {
      puVar8 = *ppuVar4;
    }
    if (puVar7 < puVar8) {
      local_20 = (void *)0x0;
      pAVar5 = (Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_> *)
               animSYSTEM::GetBaseSeqNmb(this_00);
      _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
      ::
      Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                  *)&local_1c,(uint)puVar8,pAVar5);
      local_4 = 0;
      ppvVar6 = uninitialized_fill_n(local_1c,(uint)puVar8,&local_20);
      if (puVar7 != (undefined *)0x0) {
        iVar9 = *(int *)this_00;
        do {
          puVar2 = *(undefined4 **)(iVar9 + (int)puVar10 * 4);
          while (puVar2 != (undefined4 *)0x0) {
            uVar1 = *(ushort *)(puVar2 + 1);
            *(undefined4 *)(iVar9 + (int)puVar10 * 4) = *puVar2;
            *puVar2 = local_1c[(uint)uVar1 % (uint)puVar8];
            local_1c[(uint)uVar1 % (uint)puVar8] = puVar2;
            iVar9 = *(int *)this_00;
            puVar2 = *(undefined4 **)(iVar9 + (int)puVar10 * 4);
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 < puVar7);
      }
      iVar9 = *(int *)this_00;
      *(void ***)this_00 = local_1c;
      local_18 = *(undefined4 *)(this + 8);
      *(void ***)(this + 8) = ppvVar6;
      uVar3 = *(undefined4 *)(this + 0xc);
      *(undefined4 *)(this + 0xc) = local_14;
      if (iVar9 != 0) {
        local_1c = (void **)iVar9;
        local_14 = uVar3;
        ExtAlloc_Free_4(iVar9);
      }
    }
  }
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4410 */

void __thiscall
_STL::
hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
::clear(hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
        *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(this + 8) - *(int *)(this + 4) >> 2 != 0) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(this + 4) + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar2;
        ExtAlloc_Free_4(puVar2);
        puVar2 = puVar1;
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(*(int *)(this + 4) + -4 + uVar3 * 4) = 0;
    } while (uVar3 < (uint)(*(int *)(this + 8) - *(int *)(this + 4) >> 2));
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4460 */

void __thiscall
_STL::_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::M_initialize_map
          (_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *this,
          uint param_1)

{
  ushort **ppuVar1;
  ushort **ppuVar2;
  uint uVar3;
  ushort *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ccbe0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  iVar7 = (param_1 >> 5) + 1;
  local_18 = (param_1 >> 5) + 3;
  local_1c = 8;
  puVar5 = &local_18;
  if (local_18 < 9) {
    puVar5 = &local_1c;
  }
  uVar3 = *puVar5;
  ExceptionList = &local_10;
  *(uint *)(this + 0x24) = uVar3;
  iVar6 = ExtAlloc_Malloc_4(uVar3 << 2);
  *(int *)(this + 0x20) = iVar6;
  local_8 = 0;
  ppuVar1 = (ushort **)(iVar6 + ((uint)(*(int *)(this + 0x24) - iVar7) >> 1) * 4);
  ppuVar2 = ppuVar1 + iVar7;
  _Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::M_create_nodes
            ((_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *)this,ppuVar1,
             ppuVar2);
  *(ushort ***)(this + 0xc) = ppuVar1;
  puVar4 = *ppuVar1;
  *(ushort **)(this + 4) = puVar4;
  *(ushort **)(this + 8) = puVar4 + 0x40;
  *(ushort ***)(this + 0x1c) = ppuVar2 + -1;
  puVar4 = ppuVar2[-1];
  *(ushort **)(this + 0x14) = puVar4;
  *(ushort **)(this + 0x18) = puVar4 + 0x40;
  *(undefined4 *)this = *(undefined4 *)(this + 4);
  *(uint *)(this + 0x10) = *(int *)(this + 0x14) + (param_1 & 0x1f) * 4;
  ExceptionList = local_10;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4540 */

void __thiscall
_STL::deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::erase
          (deque<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *this,
          undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,uint param_6,
          int param_7,undefined4 param_8,undefined4 param_9,uint param_10)

{
  _Deque_iterator_base<class_clSegment*> *this_00;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_78 [8];
  undefined4 uStack_70;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_68 [8];
  undefined4 uStack_60;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> a_Stack_58 [8];
  undefined4 uStack_50;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_20 [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_10 [16];
  
  iVar1 = param_3;
  if ((param_3 == *(int *)this) && (param_7 == *(int *)(this + 0x10))) {
    puVar7 = (undefined4 *)(*(int *)(this + 0xc) + 4);
    if (puVar7 < *(undefined4 **)(this + 0x1c)) {
      do {
        uStack_50 = 0x5c457c;
        _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
        ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                      *)(this + 0x24),
                     (_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                      *)*puVar7,0x20);
        puVar7 = puVar7 + 1;
      } while (puVar7 < *(undefined4 **)(this + 0x1c));
    }
    if (*(int *)(this + 0xc) != *(int *)(this + 0x1c)) {
      uStack_50 = 0x5c459e;
      _STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
      ::deallocate((_STLP_alloc_proxy<struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>*,struct__STL::_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>,class_ExtAlloc::Allocator<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>_>
                    *)(this + 0x24),
                   *(_Rb_tree_node<class__STL::basic_string<char,class__STL::char_traits<char>,class_ExtAlloc::Allocator<char>_>_>
                     **)(this + 0x14),0x20);
    }
    *(undefined4 *)(this + 0x10) = *(undefined4 *)this;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 4);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0xc);
    *param_2 = *(undefined4 *)this;
    param_2[1] = *(undefined4 *)(this + 4);
    param_2[2] = *(undefined4 *)(this + 8);
    param_2[3] = *(undefined4 *)(this + 0xc);
    return;
  }
  iVar4 = _Deque_iterator_base<class_clSegment*>::M_subtract
                    ((_Deque_iterator_base<class_clSegment*> *)&param_7,
                     (_Deque_iterator_base<class_clSegment*> *)&param_3);
  iVar5 = _Deque_iterator_base<class_clSegment*>::M_subtract
                    ((_Deque_iterator_base<class_clSegment*> *)&param_3,
                     (_Deque_iterator_base<class_clSegment*> *)this);
  this_00 = (_Deque_iterator_base<class_clSegment*> *)(this + 0x10);
  iVar6 = _Deque_iterator_base<class_clSegment*>::M_subtract
                    (this_00,(_Deque_iterator_base<class_clSegment*> *)this);
  if (iVar5 < (iVar6 - iVar4) / 2) {
    local_30 = param_7;
    local_2c = param_8;
    local_24 = param_10;
    local_28 = param_9;
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &param_7,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                         *)&param_3);
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (local_20,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                         *)this);
    param_3 = CONCAT31(param_3._1_3_,param_2._0_1_);
    uStack_60 = 0x5c466d;
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_58,
               (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &local_30);
    uStack_70 = 0x5c467f;
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_68,
               (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &param_7);
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_78,local_20);
    copy_backward_aux(local_10);
    param_3 = *(int *)this;
    param_4 = *(undefined4 *)(this + 4);
    param_5 = *(undefined4 *)(this + 8);
    param_6 = *(uint *)(this + 0xc);
    _Deque_iterator_base<class_clSegment*>::M_advance
              ((_Deque_iterator_base<class_clSegment*> *)&param_3,iVar4);
    uVar3 = param_6;
    uVar2 = param_3;
    param_8 = param_4;
    param_7 = param_3;
    param_9 = param_5;
    param_10 = param_6;
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (local_20,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                         *)this);
    uStack_60 = 0x5c46fa;
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_58,
               (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &param_7);
    uStack_70 = 0x5c4709;
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_68,local_20);
    destroy();
    for (uVar8 = *(uint *)(this + 0xc); uVar8 < uVar3; uVar8 = uVar8 + 4) {
      ExtAlloc_Free_4();
    }
    *(undefined4 *)this = uVar2;
    *(undefined4 *)(this + 4) = param_4;
    *(undefined4 *)(this + 8) = param_5;
    *(uint *)(this + 0xc) = uVar3;
  }
  else {
    local_2c = param_4;
    local_30 = iVar1;
    local_28 = param_5;
    local_24 = param_6;
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (local_20,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                         *)this_00);
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (local_10,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                         *)&param_7);
    param_3 = CONCAT31(param_3._1_3_,param_2._0_1_);
    uStack_60 = 0x5c478e;
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_58,
               (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &local_30);
    uStack_70 = 0x5c479d;
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_68,local_20);
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (a_Stack_78,local_10);
    copy_aux(&param_7);
    param_3 = *(int *)this_00;
    param_4 = *(undefined4 *)(this + 0x14);
    param_5 = *(undefined4 *)(this + 0x18);
    param_6 = *(uint *)(this + 0x1c);
    _Deque_iterator_base<class_clSegment*>::M_advance
              ((_Deque_iterator_base<class_clSegment*> *)&param_3,-iVar4);
    uVar8 = param_6;
    param_7 = param_3;
    param_8 = param_4;
    param_9 = param_5;
    local_30 = *(int *)this_00;
    param_10 = param_6;
    local_2c = *(undefined4 *)(this + 0x14);
    local_28 = *(undefined4 *)(this + 0x18);
    local_24 = *(undefined4 *)(this + 0x1c);
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (local_10,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                         *)&param_7);
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &param_7,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                         *)&local_30);
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>(local_20,local_10)
    ;
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              (local_10,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                         *)&param_7);
    _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
    Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
              ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
               &param_7,local_20);
    iVar1 = *(int *)(this + 0x1c);
    while (uVar8 = uVar8 + 4, uVar8 < iVar1 + 4U) {
      ExtAlloc_Free_4();
    }
    *(int *)this_00 = param_3;
    *(undefined4 *)(this + 0x14) = param_4;
    *(undefined4 *)(this + 0x18) = param_5;
    *(uint *)(this + 0x1c) = param_6;
  }
  param_4 = *(undefined4 *)(this + 4);
  param_3 = *(int *)this;
  param_5 = *(undefined4 *)(this + 8);
  param_6 = *(uint *)(this + 0xc);
  _Deque_iterator_base<class_clSegment*>::M_advance
            ((_Deque_iterator_base<class_clSegment*> *)&param_3,iVar5);
  *param_2 = param_3;
  param_2[1] = param_4;
  param_2[2] = param_5;
  param_2[3] = param_6;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4900 */

void __thiscall
_STL::
vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
::reserve(vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
          *this,uint param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  
  ppvVar1 = *(void ***)this;
  if ((uint)(*(int *)(this + 8) - (int)ppvVar1 >> 2) < param_1) {
    ppvVar2 = *(void ***)(this + 4);
    if (ppvVar1 == (void **)0x0) {
      ppvVar3 = (void **)ExtAlloc_Malloc_4(param_1 * 4);
    }
    else {
      ppvVar3 = vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                ::M_allocate_and_copy
                          ((vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                            *)this,param_1,ppvVar1,ppvVar2);
      ExtAlloc_Free_4(*(undefined4 *)this);
    }
    *(void ***)this = ppvVar3;
    *(void ***)(this + 4) = ppvVar3 + ((int)ppvVar2 - (int)ppvVar1 >> 2);
    *(void ***)(this + 8) = ppvVar3 + param_1;
  }
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4960 */

void __thiscall
_STL::
vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
::M_fill_insert(vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                *this,void **param_1,uint param_2,void **param_3)

{
  uint uVar1;
  void **ppvVar2;
  undefined4 *_Dst;
  int iVar3;
  int iVar4;
  vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  **ppvVar5;
  size_t sVar6;
  void **ppvVar7;
  void *pvVar8;
  uint uVar9;
  vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
  *local_4;
  
  uVar9 = param_2;
  if (param_2 != 0) {
    iVar4 = *(int *)(this + 4);
    if ((uint)(*(int *)(this + 8) - iVar4 >> 2) < param_2) {
      ppvVar5 = (vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                 **)&param_2;
      local_4 = (vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                 *)(iVar4 - *(int *)this >> 2);
      if (param_2 <= local_4) {
        ppvVar5 = &local_4;
      }
      local_4 = (vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                 *)((int)(*ppvVar5 + (int)local_4) * 4);
      _Dst = (undefined4 *)ExtAlloc_Malloc_4(local_4);
      ppvVar2 = *(void ***)this;
      param_2 = (uint)_Dst;
      if (param_1 != ppvVar2) {
        pvVar8 = memmove(_Dst,ppvVar2,(int)param_1 - (int)ppvVar2);
        _Dst = (undefined4 *)((int)pvVar8 + ((int)param_1 - (int)ppvVar2));
      }
      if (uVar9 != 0) {
        do {
          *_Dst = *param_3;
          _Dst = _Dst + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (*(void ***)(this + 4) != param_1) {
        sVar6 = (int)*(void ***)(this + 4) - (int)param_1;
        pvVar8 = memmove(_Dst,param_1,sVar6);
        _Dst = (undefined4 *)((int)pvVar8 + sVar6);
      }
      ExtAlloc_Free_4(*(undefined4 *)this);
      *(uint *)this = param_2;
      *(undefined4 **)(this + 4) = _Dst;
      *(vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
        **)(this + 8) = local_4 + param_2;
    }
    else {
      ppvVar2 = *(void ***)(this + 4);
      param_3 = (void **)*param_3;
      uVar1 = iVar4 - (int)param_1 >> 2;
      local_4 = this;
      if (param_2 < uVar1) {
        iVar4 = param_2 * 4;
        ppvVar7 = ppvVar2 + -param_2;
        param_2 = uVar1;
        if (ppvVar2 != ppvVar7) {
          memmove(ppvVar2,ppvVar7,(int)ppvVar2 - (int)ppvVar7);
        }
        sVar6 = (int)ppvVar7 - (int)param_1;
        *(int *)(this + 4) = *(int *)(this + 4) + iVar4;
        if (0 < (int)sVar6) {
          memmove((void *)((int)ppvVar2 - sVar6),param_1,sVar6);
        }
        ppvVar2 = param_1 + uVar9;
        if (param_1 != ppvVar2) {
          do {
            *param_1 = param_3;
            param_1 = param_1 + 1;
          } while (param_1 != ppvVar2);
          return;
        }
      }
      else {
        iVar3 = param_2 - uVar1;
        iVar4 = iVar3;
        ppvVar7 = ppvVar2;
        if (iVar3 != 0) {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *ppvVar7 = param_3;
            ppvVar7 = ppvVar7 + 1;
          }
        }
        pvVar8 = (void *)(*(int *)(this + 4) + iVar3 * 4);
        *(void **)(this + 4) = pvVar8;
        param_2 = uVar1;
        if (ppvVar2 != param_1) {
          memmove(pvVar8,param_1,(int)ppvVar2 - (int)param_1);
        }
        *(uint *)(this + 4) = *(int *)(this + 4) + param_2 * 4;
        if (param_1 != ppvVar2) {
          do {
            *param_1 = param_3;
            param_1 = param_1 + 1;
          } while (param_1 != ppvVar2);
          return;
        }
      }
    }
  }
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4B20 */

_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_> * __thiscall
_STL::
_Hashtable_iterator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
::M_skip_to_next(_Hashtable_iterator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                 *this)

{
  int iVar1;
  _Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_> *p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 4);
  uVar3 = (uint)*(ushort *)(*(int *)this + 4) %
          (uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2);
  p_Var2 = (_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_> *)0x0;
  do {
    uVar3 = uVar3 + 1;
    if ((uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2) <= uVar3) {
      return p_Var2;
    }
    p_Var2 = *(_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_> **)
              (*(int *)(iVar1 + 4) + uVar3 * 4);
  } while (p_Var2 == (_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>
                      *)0x0);
  return p_Var2;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4B60
   addr: 005C4B60 */

pair<unsigned_short_const_,class_clUDPEngine*> * __thiscall
_STL::
hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
::insert_unique_noresize
          (hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
           *this,pair<unsigned_short_const_,class_clUDPEngine*> *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  _Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_> *p_Var3;
  uint uVar4;
  pair<unsigned_short_const_,class_clBasicProtocol*> *in_stack_00000008;
  
  uVar4 = (uint)*(ushort *)in_stack_00000008 % (uint)(*(int *)(this + 8) - *(int *)(this + 4) >> 2);
  puVar1 = *(undefined4 **)(*(int *)(this + 4) + uVar4 * 4);
  puVar2 = puVar1;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      p_Var3 = hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
               ::M_new_node((hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                             *)this,in_stack_00000008);
      *(undefined4 **)p_Var3 = puVar1;
      *(_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_> **)
       (*(int *)(this + 4) + uVar4 * 4) = p_Var3;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      *(hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
        **)(param_1 + 4) = this;
      *(_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_> **)param_1
           = p_Var3;
      param_1[8] = (pair<unsigned_short_const_,class_clUDPEngine*>)0x1;
      return param_1;
    }
    if (*(ushort *)(puVar2 + 1) == *(ushort *)in_stack_00000008) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  *(hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    **)(param_1 + 4) = this;
  *(undefined4 **)param_1 = puVar2;
  param_1[8] = (pair<unsigned_short_const_,class_clUDPEngine*>)0x0;
  return param_1;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4BF0 */

void __thiscall
_STL::
hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
::resize(hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
         *this,uint param_1)

{
  animSYSTEM *this_00;
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_> *pAVar5;
  void **ppvVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined *puVar10;
  uint local_24;
  void *local_20;
  void **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ccc00;
  local_c = ExceptionList;
  this_00 = (animSYSTEM *)(this + 4);
  puVar7 = (undefined *)(*(int *)(this + 8) - *(int *)this_00 >> 2);
  if (puVar7 < param_1) {
    local_24 = param_1;
    puVar10 = (undefined *)0x0;
    ExceptionList = &local_c;
    ppuVar4 = (undefined **)
              lower_bound(&_Stl_prime<bool>::_M_list,&PTR__RTTI_Complete_Object_Locator__005e4058,
                          &local_24,param_1,0);
    puVar8 = (undefined *)0xfffffffb;
    if (ppuVar4 != &PTR__RTTI_Complete_Object_Locator__005e4058) {
      puVar8 = *ppuVar4;
    }
    if (puVar7 < puVar8) {
      local_20 = (void *)0x0;
      pAVar5 = (Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_> *)
               animSYSTEM::GetBaseSeqNmb(this_00);
      _Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
      ::
      Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                ((_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
                  *)&local_1c,(uint)puVar8,pAVar5);
      local_4 = 0;
      ppvVar6 = uninitialized_fill_n(local_1c,(uint)puVar8,&local_20);
      if (puVar7 != (undefined *)0x0) {
        iVar9 = *(int *)this_00;
        do {
          puVar2 = *(undefined4 **)(iVar9 + (int)puVar10 * 4);
          while (puVar2 != (undefined4 *)0x0) {
            uVar1 = *(ushort *)(puVar2 + 1);
            *(undefined4 *)(iVar9 + (int)puVar10 * 4) = *puVar2;
            *puVar2 = local_1c[(uint)uVar1 % (uint)puVar8];
            local_1c[(uint)uVar1 % (uint)puVar8] = puVar2;
            iVar9 = *(int *)this_00;
            puVar2 = *(undefined4 **)(iVar9 + (int)puVar10 * 4);
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 < puVar7);
      }
      iVar9 = *(int *)this_00;
      *(void ***)this_00 = local_1c;
      local_18 = *(undefined4 *)(this + 8);
      *(void ***)(this + 8) = ppvVar6;
      uVar3 = *(undefined4 *)(this + 0xc);
      *(undefined4 *)(this + 0xc) = local_14;
      if (iVar9 != 0) {
        local_1c = (void **)iVar9;
        local_14 = uVar3;
        ExtAlloc_Free_4(iVar9);
      }
    }
  }
  ExceptionList = local_c;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4D20
   addr: 005C4D20 */

void _STL::Destroy(void)

{
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_10 [16];
  
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_10,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)&stack0x00000014);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000014,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000004);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000004,local_10);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000004,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000014);
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4D70 */

void __thiscall
_STL::
hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
::find(hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
       *this,ushort *param_1)

{
  undefined4 *puVar1;
  ushort *in_stack_00000008;
  
  for (puVar1 = *(undefined4 **)
                 (*(int *)(this + 4) +
                 ((uint)*in_stack_00000008 % (uint)(*(int *)(this + 8) - *(int *)(this + 4) >> 2)) *
                 4);
      (puVar1 != (undefined4 *)0x0 && (*(ushort *)(puVar1 + 1) != *in_stack_00000008));
      puVar1 = (undefined4 *)*puVar1) {
  }
  *(undefined4 **)param_1 = puVar1;
  *(hashtable<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
    **)(param_1 + 2) = this;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4DC0 */

void __thiscall
_STL::
vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
::M_insert_overflow(vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                    *this,void **param_1,void **param_2,__true_type *param_3,uint param_4,
                   bool param_5)

{
  void **_Src;
  uint uVar1;
  undefined4 **ppuVar2;
  undefined4 *_Dst;
  void *pvVar3;
  undefined4 *_Dst_00;
  size_t _Size;
  undefined4 *local_8;
  int local_4;
  
  uVar1 = param_4;
  local_8 = (undefined4 *)(*(int *)(this + 4) - *(int *)this >> 2);
  ppuVar2 = (undefined4 **)&param_4;
  if (param_4 <= local_8) {
    ppuVar2 = &local_8;
  }
  local_4 = ((int)*ppuVar2 + (int)local_8) * 4;
  _Dst = (undefined4 *)ExtAlloc_Malloc_4(local_4);
  _Src = *(void ***)this;
  _Dst_00 = _Dst;
  local_8 = _Dst;
  if (param_1 != _Src) {
    pvVar3 = memmove(_Dst,_Src,(int)param_1 - (int)_Src);
    _Dst_00 = (undefined4 *)((int)pvVar3 + ((int)param_1 - (int)_Src));
    uVar1 = param_4;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *_Dst_00 = *param_2;
    _Dst_00 = _Dst_00 + 1;
  }
  if ((param_5 == false) && (*(void ***)(this + 4) != param_1)) {
    _Size = (int)*(void ***)(this + 4) - (int)param_1;
    pvVar3 = memmove(_Dst_00,param_1,_Size);
    _Dst_00 = (undefined4 *)((int)pvVar3 + _Size);
    _Dst = local_8;
  }
  ExtAlloc_Free_4(*(undefined4 *)this);
  *(undefined4 **)this = _Dst;
  *(undefined4 **)(this + 4) = _Dst_00;
  *(int *)(this + 8) = local_4 + (int)_Dst;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4E80 */

void __thiscall
_STL::_Deque_iterator<class_clSegment*,struct__STL::_Nonconst_traits<class_clSegment*>_>::operator+
          (_Deque_iterator<class_clSegment*,struct__STL::_Nonconst_traits<class_clSegment*>_> *this,
          int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000008;
  
  iVar3 = *(int *)(this + 4);
  iVar4 = *(int *)(this + 0xc);
  iVar5 = *(int *)(this + 8);
  iVar2 = (*(int *)this - iVar3 >> 2) + in_stack_00000008;
  if ((iVar2 < 0) || (0x1f < iVar2)) {
    if (iVar2 < 1) {
      iVar1 = ((int)(iVar2 + 1 + (iVar2 + 1 >> 0x1f & 0x1fU)) >> 5) + -1;
    }
    else {
      iVar1 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
    }
    iVar3 = *(int *)(iVar4 + iVar1 * 4);
    iVar4 = iVar4 + iVar1 * 4;
    iVar5 = iVar3 + 0x80;
    iVar2 = iVar3 + (iVar2 + iVar1 * -0x20) * 4;
  }
  else {
    iVar2 = *(int *)this + in_stack_00000008 * 4;
  }
  *(int *)param_1 = iVar2;
  *(int *)(param_1 + 4) = iVar3;
  *(int *)(param_1 + 8) = iVar5;
  *(int *)(param_1 + 0xc) = iVar4;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4EF0 */

void __thiscall
_STL::_Deque_iterator<class_clSegment*,struct__STL::_Nonconst_traits<class_clSegment*>_>::operator-
          (_Deque_iterator<class_clSegment*,struct__STL::_Nonconst_traits<class_clSegment*>_> *this,
          int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000008;
  
  iVar3 = *(int *)(this + 4);
  iVar4 = *(int *)(this + 8);
  iVar5 = *(int *)(this + 0xc);
  iVar2 = (*(int *)this - iVar3 >> 2) - in_stack_00000008;
  if ((iVar2 < 0) || (0x1f < iVar2)) {
    if (iVar2 < 1) {
      iVar1 = ((int)(iVar2 + 1 + (iVar2 + 1 >> 0x1f & 0x1fU)) >> 5) + -1;
    }
    else {
      iVar1 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
    }
    iVar3 = *(int *)(iVar5 + iVar1 * 4);
    iVar5 = iVar5 + iVar1 * 4;
    iVar4 = iVar3 + 0x80;
    iVar2 = iVar3 + (iVar2 + iVar1 * -0x20) * 4;
  }
  else {
    iVar2 = *(int *)this + in_stack_00000008 * -4;
  }
  *(int *)param_1 = iVar2;
  *(int *)(param_1 + 4) = iVar3;
  *(int *)(param_1 + 8) = iVar4;
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4F70
   addr: 005C4F70 */

_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_> * __thiscall
_STL::
hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
::M_new_node(hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
             *this,pair<unsigned_short_const_,class_clBasicProtocol*> *param_1)

{
  _Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_> *p_Var1;
  
  p_Var1 = (_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_> *)
           ExtAlloc_Malloc_4(0xc);
  *(undefined4 *)p_Var1 = 0;
  if (p_Var1 + 4 !=
      (_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_> *)0x0) {
    *(undefined2 *)(p_Var1 + 4) = *(undefined2 *)param_1;
    *(undefined4 *)(p_Var1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  return p_Var1;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4FA0
   addr: 005C4FA0 */

_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
* __thiscall
_STL::
_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
::
Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
          (_Vector_base<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_>_>
           *this,uint param_1,
          Allocator<struct__STL::pair<unsigned_short_const_,class_clUDPEngine*>_> *param_2)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  iVar1 = ExtAlloc_Malloc_4(param_1 * 4);
  *(int *)this = iVar1;
  *(int *)(this + 4) = iVar1;
  *(uint *)(this + 8) = param_1 * 4 + iVar1;
  return this;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C4FD0 */

void __thiscall
_STL::_Deque_iterator_base<class_clSegment*>::M_advance
          (_Deque_iterator_base<class_clSegment*> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (*(int *)this - *(int *)(this + 4) >> 2) + param_1;
  if ((-1 < iVar4) && (iVar4 < 0x20)) {
    *(int *)this = *(int *)this + param_1 * 4;
    return;
  }
  if (iVar4 < 1) {
    iVar3 = ((int)(iVar4 + 1 + (iVar4 + 1 >> 0x1f & 0x1fU)) >> 5) + -1;
  }
  else {
    iVar3 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
  }
  piVar1 = (int *)(*(int *)(this + 0xc) + iVar3 * 4);
  *(int **)(this + 0xc) = piVar1;
  iVar2 = *piVar1;
  *(int *)(this + 4) = iVar2;
  *(int *)(this + 8) = iVar2 + 0x80;
  *(int *)this = *(int *)(this + 4) + (iVar4 + iVar3 * -0x20) * 4;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C5040
   addr: 005C5040 */

void ** __thiscall
_STL::
vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
::M_allocate_and_copy
          (vector<void*,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
           *this,uint param_1,void **param_2,void **param_3)

{
  void **_Dst;
  
  _Dst = (void **)ExtAlloc_Malloc_4(param_1 * 4);
  if (param_3 != param_2) {
    memmove(_Dst,param_2,(int)param_3 - (int)param_2);
  }
  return _Dst;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C5080 */

void ** _STL::uninitialized_fill_n(void **param_1,uint param_2,void **param_3)

{
  if (param_2 != 0) {
    do {
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return param_1;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C50A0 */

uint * _STL::lower_bound(uint *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 - (int)param_1 >> 2;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 >> 1;
      if (param_1[iVar1] < *param_3) {
        param_1 = param_1 + iVar1 + 1;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return param_1;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C50E0
   addr: 005C50E0 */

void __thiscall
_STL::_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_>::M_create_nodes
          (_Deque_base<unsigned_short,class_ExtAlloc::Allocator<unsigned_short>_> *this,
          ushort **param_1,ushort **param_2)

{
  ushort *puVar1;
  
  if (param_1 < param_2) {
    do {
      puVar1 = (ushort *)ExtAlloc_Malloc_4(0x80);
      *param_1 = puVar1;
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C5110 */

void __thiscall
_STL::_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_>::M_destroy_nodes
          (_Deque_base<class_clSegment*,class_ExtAlloc::Allocator<class_clSegment*>_> *this,
          clSegment ***param_1,clSegment ***param_2)

{
  if (param_1 < param_2) {
    do {
      ExtAlloc_Free_4(*param_1);
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C5140 */

void _STL::copy(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 *param_6,undefined4 param_7,undefined4 *param_8,undefined4 *param_9,
               undefined4 *param_10,undefined4 *param_11,undefined4 *param_12,undefined4 *param_13)

{
  int iVar1;
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_30 [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_20 [16];
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_10 [16];
  
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_30,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)&param_10);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_20,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)&param_6);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_10,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)&param_2);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &param_10,local_30);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &param_2,local_20);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &param_6,local_10);
  iVar1 = (param_5 - (int)param_9 >> 2) * 0x20 + ((int)param_8 - (int)param_6 >> 2) + -0x20 +
          (param_2 - param_3 >> 2);
  if (0 < iVar1) {
    do {
      *param_10 = *param_6;
      param_6 = param_6 + 1;
      if (param_6 == param_8) {
        param_9 = param_9 + 1;
        param_6 = (undefined4 *)*param_9;
        param_8 = param_6 + 0x20;
      }
      param_10 = param_10 + 1;
      if (param_10 == param_12) {
        param_13 = param_13 + 1;
        param_10 = (undefined4 *)*param_13;
        param_12 = param_10 + 0x20;
        param_11 = param_10;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *param_1 = param_10;
  param_1[1] = param_11;
  param_1[2] = param_12;
  param_1[3] = param_13;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C5270 */

_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_> * __thiscall
_STL::
hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
::M_find(hashtable<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>,unsigned_short,struct__STL::hash<unsigned_short>,struct__STL::_Select1st<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,struct__STL::equal_to<unsigned_short>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
         *this,ushort *param_1)

{
  _Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_> *p_Var1;
  
  for (p_Var1 = *(_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>
                  **)(*(int *)(this + 4) +
                     ((uint)*param_1 % (uint)(*(int *)(this + 8) - *(int *)(this + 4) >> 2)) * 4);
      (p_Var1 != (_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>
                  *)0x0 && (*(ushort *)(p_Var1 + 4) != *param_1));
      p_Var1 = *(_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>
                 **)p_Var1) {
  }
  return p_Var1;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C52B0 */

void _STL::destroy(void)

{
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> local_10 [16];
  
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            (local_10,(_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
                       *)&stack0x00000014);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000014,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000004);
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C52E0 */

void _STL::copy_backward_aux(undefined4 *param_1)

{
  int iVar1;
  int in_stack_00000018;
  int in_stack_00000020;
  int in_stack_00000024;
  undefined4 *in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 in_stack_00000030;
  int *in_stack_00000034;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  int *local_4;
  
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &local_10,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000028);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000028,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000018);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000018,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000008);
  iVar1 = ((int)in_stack_00000034 - in_stack_00000024 >> 2) * 0x20 +
          (in_stack_00000020 - in_stack_00000018 >> 2) + -0x20 +
          ((int)in_stack_00000028 - (int)in_stack_0000002c >> 2);
  if (0 < iVar1) {
    do {
      if (in_stack_00000028 == in_stack_0000002c) {
        in_stack_00000034 = in_stack_00000034 + -1;
        in_stack_0000002c = (undefined4 *)*in_stack_00000034;
        in_stack_00000028 = in_stack_0000002c + 0x20;
      }
      in_stack_00000028 = in_stack_00000028 + -1;
      if (local_10 == local_c) {
        local_4 = local_4 + -1;
        local_c = (undefined4 *)*local_4;
        local_10 = local_c + 0x20;
        local_8 = local_10;
      }
      local_10 = local_10 + -1;
      iVar1 = iVar1 + -1;
      *local_10 = *in_stack_00000028;
    } while (iVar1 != 0);
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}




/* from: libgssocket:UDPEngine.cpp
   addr: 005C53D0 */

void _STL::copy_aux(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 *in_stack_00000030;
  undefined4 *in_stack_00000034;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  int local_4;
  
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &local_20,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000028);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &local_10,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000018);
  _Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>::
  Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_>
            ((_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000028,
             (_Deque_iterator<unsigned_short,struct__STL::_Nonconst_traits<unsigned_short>_> *)
             &stack0x00000008);
  iVar1 = (local_4 - (int)in_stack_00000034 >> 2) * 0x20 +
          ((int)in_stack_00000030 - (int)in_stack_00000028 >> 2) + -0x20 + (local_10 - local_c >> 2)
  ;
  if (0 < iVar1) {
    do {
      *local_20 = *in_stack_00000028;
      in_stack_00000028 = in_stack_00000028 + 1;
      if (in_stack_00000028 == in_stack_00000030) {
        in_stack_00000034 = in_stack_00000034 + 1;
        in_stack_00000028 = (undefined4 *)*in_stack_00000034;
        in_stack_00000030 = in_stack_00000028 + 0x20;
      }
      local_20 = local_20 + 1;
      if (local_20 == local_18) {
        local_14 = local_14 + 1;
        local_20 = (undefined4 *)*local_14;
        local_18 = local_20 + 0x20;
        local_1c = local_20;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return;
}

