
/* from: libgsmsclient:MSClientLogin.cpp
   addr: 0058E4C0 */

void __thiscall
clMSClientClass::LoginRcv_PlayerInfo
          (clMSClientClass *this,uchar param_1,char *param_2,char *param_3,char *param_4,
          char *param_5,char *param_6,char *param_7,char *param_8,int param_9)

{
  if (param_1 == '&') {
    strncpy((char *)(this + 0x14),param_2,0x10);
    if (this[0x23] != (clMSClientClass)0x0) {
      this[0x23] = (clMSClientClass)0x0;
    }
    (**(code **)(*(int *)this + 0x2c))(0,this + 0x14);
    return;
  }
  (**(code **)(*(int *)this + 0x2c))(param_9,s_);
  return;
}




/* from: libgsmsclient:MSClientLogin.cpp
   addr: 0058E510 */

void __thiscall
clMSClientClass::LoginRcv_JoinWaitModuleResult
          (clMSClientClass *this,uchar param_1,char *param_2,ushort param_3,int param_4)

{
  uchar uVar1;
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  *this_00;
  
  if (param_1 == '&') {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)this);
    uVar1 = clGLClient::LoginSend_Connect((clGLClient *)this,param_2,param_3);
    if (uVar1 != '\0') {
      _STL::
      _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
      ::
      ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                (this_00);
      clGLClient::LoginSend_LoginWaitModule((clGLClient *)this,(char *)(this + 0x14));
      return;
    }
  }
  else {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)this);
    (**(code **)(*(int *)this + 0x2c))(param_4,s_);
  }
  return;
}




/* from: libgsmsclient:MSClientLogin.cpp
   addr: 0058E580 */

void __thiscall
clMSClientClass::LoginRcv_LoginRouterResult(clMSClientClass *this,uchar param_1,int param_2)

{
  if (param_1 == '&') {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)this);
    clGLClient::LoginSend_JoinWaitModule((clGLClient *)this);
    return;
  }
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)this);
  (**(code **)(*(int *)this + 0x2c))(param_2,s_);
  return;
}




/* from: libgsmsclient:MSClientLogin.cpp
   addr: 0058E5D0 */

void __thiscall
clMSClientClass::LoginRcv_LoginWaitModuleResult(clMSClientClass *this,uchar param_1,int param_2)

{
  if (param_1 == '&') {
    _STL::
    _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
    ::
    ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
                *)this);
    clGLClient::LoginSend_PlayerInfo((clGLClient *)this,(char *)(this + 0x14));
    return;
  }
  _STL::
  _STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
  ::
  ~_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
            ((_STLP_alloc_proxy<unsigned_int,struct__STL::_Hashtable_node<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>,class_ExtAlloc::Allocator<struct__STL::pair<unsigned_short_const_,class_clBasicProtocol*>_>_>
              *)this);
  (**(code **)(*(int *)this + 0x2c))(param_2,s_);
  return;
}




/* from: libgsmsclient:MSClientLogin.cpp
   addr: 0058E630 */

uchar __thiscall clMSClientClass::StartLogin(clMSClientClass *this)

{
  uchar uVar1;
  
  uVar1 = clGLClient::LoginSend_Connect
                    ((clGLClient *)this,(char *)(this + 0x56),*(ushort *)(this + 0xd8));
  if (uVar1 == '\0') {
    return '\0';
  }
  uVar1 = clGLClient::LoginSend_LoginRouter
                    ((clGLClient *)this,(char *)(this + 0x14),(char *)(this + 0x24),
                     (char *)(this + 0x35),'\x01');
  return uVar1 != '\0';
}

