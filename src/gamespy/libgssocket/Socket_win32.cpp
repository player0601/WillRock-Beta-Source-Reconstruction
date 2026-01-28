
/* from: libgssocket:Socket_win32.cpp
   addr: 005854C0 */

IP_RANGE * __thiscall IP_RANGE::IP_RANGE(IP_RANGE *this,char *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = IPDotToDecimal(param_1);
  *(uint *)this = uVar1;
  *(uint *)(this + 4) = param_2;
  return this;
}




/* from: libgssocket:Socket_win32.cpp
   addr: 005854E0 */

undefined4 InitializeSockets_4(char *param_1)

{
  int iVar1;
  hostent *phVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  size_t _Count;
  char acStack_290 [256];
  WSADATA local_190;
  
  iVar1 = WSAStartup(2,&local_190);
  if (iVar1 == 0) {
    if (param_1 == (char *)0x0) {
      iVar1 = gethostname(acStack_290,0x100);
      if (iVar1 == 0) {
        phVar2 = gethostbyname(acStack_290);
        if (phVar2 != (hostent *)0x0) {
          g_stLocalSockAddr.S_un =
               (_union_1226)
               (_union_1226)*(_union_1226 *)&((_union_1226 *)*phVar2->h_addr_list)->S_un_b;
          return 1;
        }
      }
    }
    else {
      iVar1 = 1;
      bVar5 = true;
      pcVar3 = param_1;
      pcVar4 = s_;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *pcVar3 == *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        iVar1 = gethostname(acStack_290,0x100);
        if (iVar1 == 0) {
          phVar2 = gethostbyname(acStack_290);
          if (phVar2 != (hostent *)0x0) {
            g_stLocalSockAddr.S_un =
                 (_union_1226)*(_union_1226 *)&((_union_1226 *)*phVar2->h_addr_list)->S_un_b;
            goto LAB_00585536;
          }
        }
      }
      else {
        phVar2 = gethostbyname(param_1);
        if (phVar2 != (hostent *)0x0) {
          g_stLocalSockAddr.S_un =
               (_union_1226)*(_union_1226 *)&((_union_1226 *)*phVar2->h_addr_list)->S_un_b;
LAB_00585536:
          _Count = 0x81;
          pcVar3 = inet_ntoa(g_stLocalSockAddr);
          strncpy(param_1,pcVar3,_Count);
          return 1;
        }
      }
    }
  }
  return 0;
}




/* from: libgssocket:Socket_win32.cpp
   addr: 005855F0 */

uint IPDotToDecimal(char *param_1)

{
  ulong uVar1;
  
  uVar1 = inet_addr(param_1);
  return -(uint)(uVar1 != 0xffffffff) & uVar1;
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585610 */

uchar IPIsInRange(uint param_1,uint param_2,int param_3)

{
  uint hostlong;
  u_long uVar1;
  int iVar2;
  
  hostlong = 0;
  if (0 < param_3) {
    iVar2 = 0x20 - param_3;
    do {
      hostlong = hostlong | 1 << ((byte)iVar2 & 0x1f);
      iVar2 = iVar2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  uVar1 = htonl(hostlong);
  return (param_2 & uVar1) == (uVar1 & param_1);
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585650 */

uchar GetNetInterface(char *param_1,char *param_2,INTERFACE_TYPE param_3,uint param_4)

{
  undefined4 uVar1;
  bool bVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  IP_RANGE **ppIVar6;
  uint uVar7;
  bool bVar8;
  int iStack_9a8;
  undefined4 *puStack_9a4;
  uint *puStack_9a0;
  undefined1 uStack_99c;
  undefined1 uStack_99b;
  undefined1 uStack_99a;
  undefined1 uStack_999;
  uint uStack_994;
  uint uStack_990;
  undefined1 uStack_98c;
  undefined1 uStack_98b;
  undefined1 uStack_98a;
  undefined1 uStack_989;
  SOCKET SStack_984;
  undefined1 auStack_980 [8];
  uint auStack_978 [12];
  undefined4 auStack_948 [594];
  
  bVar2 = true;
  SStack_984 = socket(2,2,0);
  if (SStack_984 != 0xffffffff) {
    uStack_994 = 0;
    iVar4 = WSAIoctl(SStack_984,0x4004747f,0,0,auStack_980,0x980,&uStack_994,0,0);
    if (iVar4 == 0) {
      iStack_9a8 = 0;
      uStack_990 = uStack_994 / 0x4c;
      if (uStack_990 == 0) {
        uVar5 = CONCAT13(uStack_999,CONCAT12(uStack_99a,CONCAT11(uStack_99b,uStack_99c)));
LAB_00585843:
        bVar2 = false;
      }
      else {
        puStack_9a4 = auStack_948;
        puStack_9a0 = auStack_978;
        do {
          uVar5 = *puStack_9a0;
          uVar1 = *puStack_9a4;
          uStack_99b = (undefined1)(uVar5 >> 8);
          uStack_99a = (undefined1)(uVar5 >> 0x10);
          uStack_999 = (undefined1)(uVar5 >> 0x18);
          uStack_98c = (undefined1)uVar1;
          uStack_98b = (undefined1)((uint)uVar1 >> 8);
          uStack_98a = (undefined1)((uint)uVar1 >> 0x10);
          uStack_989 = (undefined1)((uint)uVar1 >> 0x18);
          if ((uVar5 != 0x100007f) && (uVar5 != 0)) {
            bVar8 = false;
            ppIVar6 = &unroutable_ip;
            uVar7 = 0;
            do {
              uVar3 = IPIsInRange(uVar5,*ppIVar6,ppIVar6[1]);
              if (uVar3 != '\0') {
                bVar8 = true;
                break;
              }
              uVar7 = uVar7 + 8;
              ppIVar6 = ppIVar6 + 2;
            } while (uVar7 < 0xe8);
            if (param_3 == 0) {
LAB_00585746:
              if (!bVar8) goto LAB_00585762;
            }
            else if (param_3 == 1) {
              bVar8 = !bVar8;
              goto LAB_00585746;
            }
            if (param_4 == 0) {
              if (iStack_9a8 < (int)uStack_990) goto LAB_005857a5;
              goto LAB_00585843;
            }
            param_4 = param_4 - 1;
          }
LAB_00585762:
          puStack_9a0 = puStack_9a0 + 0x13;
          puStack_9a4 = puStack_9a4 + 0x13;
          iStack_9a8 = iStack_9a8 + 1;
        } while (iStack_9a8 < (int)uStack_990);
        bVar2 = false;
      }
    }
    else {
      uVar5 = CONCAT13(uStack_999,CONCAT12(uStack_99a,CONCAT11(uStack_99b,uStack_99c)));
      bVar2 = false;
    }
LAB_005857a5:
    closesocket(SStack_984);
    if (bVar2) {
      sprintf(param_1,s__d__d__d__d,uVar5 & 0xff,
              CONCAT12(uStack_999,CONCAT11(uStack_99a,uStack_99b)) & 0xff,
              CONCAT11(uStack_999,uStack_99a) & 0xff,uStack_999);
      sprintf(param_2,s__d__d__d__d,CONCAT12(uStack_98a,CONCAT11(uStack_98b,uStack_98c)) & 0xff,
              CONCAT12(uStack_989,CONCAT11(uStack_98a,uStack_98b)) & 0xff,
              CONCAT11(uStack_989,uStack_98a) & 0xff,uStack_989);
      return '\x01';
    }
  }
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585870 */

void GetFamily(char param_1,char *param_2)

{
  if (('\0' < param_1) && (param_1 < '\x03')) {
    *param_2 = '\x02';
  }
  return;
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585890 */

uchar MakeSocketAddress(char param_1,char *param_2,ushort param_3,sockaddr **param_4,int *param_5)

{
  char *name;
  sockaddr **ppsVar1;
  u_short uVar2;
  sockaddr *psVar3;
  hostent *phVar4;
  undefined3 in_stack_00000005;
  undefined2 in_stack_0000000e;
  
  GetFamily(param_1,&param_1);
  name = param_2;
  *param_5 = 0x10;
  psVar3 = (sockaddr *)ExtAlloc_Malloc_4(0x10);
  ppsVar1 = param_4;
  *param_4 = psVar3;
  psVar3->sa_family = 0;
  psVar3->sa_data[0] = '\0';
  psVar3->sa_data[1] = '\0';
  psVar3->sa_data[2] = '\0';
  psVar3->sa_data[3] = '\0';
  psVar3->sa_data[4] = '\0';
  psVar3->sa_data[5] = '\0';
  psVar3->sa_data[6] = '\0';
  psVar3->sa_data[7] = '\0';
  psVar3->sa_data[8] = '\0';
  psVar3->sa_data[9] = '\0';
  psVar3->sa_data[10] = '\0';
  psVar3->sa_data[0xb] = '\0';
  psVar3->sa_data[0xc] = '\0';
  psVar3->sa_data[0xd] = '\0';
  if (name == (char *)0x0) {
    ((_union_1226 *)((*param_4)->sa_data + 2))->S_un_b = (_struct_1227)g_stLocalSockAddr.S_un;
    (*param_4)->sa_family = (short)param_1;
    uVar2 = htons((u_short)_param_3);
    *(u_short *)(*ppsVar1)->sa_data = uVar2;
    return '\x01';
  }
  (*param_4)->sa_family = (short)param_1;
  uVar2 = htons((u_short)_param_3);
  *(u_short *)(*ppsVar1)->sa_data = uVar2;
  phVar4 = gethostbyname(name);
  if (phVar4 != (hostent *)0x0) {
    *(undefined4 *)((*ppsVar1)->sa_data + 2) = *(undefined4 *)*phVar4->h_addr_list;
    return '\x01';
  }
  ExtAlloc_Free_4(*ppsVar1);
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585950 */

uchar MakeSocketAddress(uint param_1,ushort param_2,sockaddr_in *param_3)

{
  u_short uVar1;
  
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined2 *)param_3 = 2;
  uVar1 = htons(param_2);
  *(u_short *)(param_3 + 2) = uVar1;
  if (param_1 == 0) {
    param_1 = (uint)g_stLocalSockAddr;
  }
  ((_union_1226 *)(param_3 + 4))->S_addr = param_1;
  return '\x01';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585990 */

void __thiscall clSocket::clSocket(clSocket *this)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    *(undefined1 **)this = &_vbtable_;
  }
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (clSocket)0x0;
  return;
}




/* from: libgssocket:Socket_win32.cpp
   addr: 005859C0 */

uchar clSocket::AddrToInt(char *param_1,uint *param_2)

{
  hostent *phVar1;
  char *_Source;
  ulong uVar2;
  size_t _Count;
  char acStack_84 [132];
  
  phVar1 = gethostbyname(param_1);
  if (phVar1 != (hostent *)0x0) {
    _Count = 0x81;
    _Source = inet_ntoa((in_addr)((_union_1226 *)*phVar1->h_addr_list)->S_un_b);
    strncpy(acStack_84,_Source,_Count);
    uVar2 = inet_addr(acStack_84);
    *param_2 = uVar2;
    return '\x01';
  }
  uVar2 = inet_addr(param_1);
  *param_2 = uVar2;
  return uVar2 != 0xffffffff;
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585A40 */

uchar __thiscall clSocket::CreateTCP(clSocket *this)

{
  SOCKET SVar1;
  int iVar2;
  
  SVar1 = socket(2,1,0);
  *(SOCKET *)(this + 4) = SVar1;
  if (SVar1 == 0xffffffff) {
    iVar2 = WSAGetLastError();
    *(int *)(this + 8) = iVar2;
    return '\0';
  }
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (clSocket)0x1;
  return '\x01';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585A80 */

uchar __thiscall clSocket::CreateUDP(clSocket *this)

{
  SOCKET SVar1;
  int iVar2;
  
  SVar1 = socket(2,2,0);
  *(SOCKET *)(this + 4) = SVar1;
  if (SVar1 == 0xffffffff) {
    iVar2 = WSAGetLastError();
    *(int *)(this + 8) = iVar2;
    return '\0';
  }
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (clSocket)0x2;
  return '\x01';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585AC0 */

uchar __thiscall clSocket::Bind(clSocket *this,uint param_1,ushort param_2)

{
  uchar uVar1;
  int iVar2;
  sockaddr local_10;
  
  uVar1 = MakeSocketAddress(param_1,param_2,(sockaddr_in *)&local_10);
  if (uVar1 != '\0') {
    iVar2 = bind(*(SOCKET *)(this + 4),&local_10,0x10);
    if (iVar2 != -1) {
      *(undefined4 *)(this + 8) = 0;
      return '\x01';
    }
  }
  iVar2 = WSAGetLastError();
  *(int *)(this + 8) = iVar2;
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585B20 */

uchar __thiscall clSocket::Connect(clSocket *this,char *param_1,ushort param_2)

{
  long lVar1;
  uchar uVar2;
  int iVar3;
  char cStack_111;
  int local_110;
  timeval local_10c;
  fd_set fStack_104;
  
  local_10c.tv_sec = 0;
  uVar2 = MakeSocketAddress((char)this[0xc],param_1,param_2,(sockaddr **)&local_10c,&local_110);
  lVar1 = local_10c.tv_sec;
  if (uVar2 == '\0') {
    iVar3 = WSAGetLastError();
    *(int *)(this + 8) = iVar3;
    return '\0';
  }
  iVar3 = connect(*(SOCKET *)(this + 4),(sockaddr *)local_10c.tv_sec,local_110);
  if (iVar3 != 0) {
    iVar3 = WSAGetLastError();
    *(int *)(this + 8) = iVar3;
    if (iVar3 != 0x2733) {
      ExtAlloc_Free_4(lVar1);
      return '\0';
    }
    fStack_104.fd_array[0] = *(SOCKET *)(this + 4);
    fStack_104.fd_count = 1;
    local_10c.tv_sec = g_iOnConnectTimeOut;
    local_10c.tv_usec = 0;
    iVar3 = select(0x40,(fd_set *)0x0,&fStack_104,(fd_set *)0x0,&local_10c);
    if ((iVar3 == 1) && (iVar3 = WSAFDIsSet_8(*(SOCKET *)(this + 4),&fStack_104), iVar3 != 0)) {
      local_110 = 4;
      getsockopt(*(SOCKET *)(this + 4),0xffff,0x1007,&cStack_111,&local_110);
      if (cStack_111 == '\0') {
        ExtAlloc_Free_4(lVar1);
        *(undefined4 *)(this + 8) = 0;
        return '\x01';
      }
    }
    ExtAlloc_Free_4(lVar1);
    iVar3 = WSAGetLastError();
    *(int *)(this + 8) = iVar3;
    return '\0';
  }
  ExtAlloc_Free_4(lVar1);
  *(undefined4 *)(this + 8) = 0;
  return '\x01';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585C80 */

uchar __thiscall clSocket::Connect(clSocket *this,uint param_1,ushort param_2)

{
  uchar uVar1;
  int iVar2;
  char cStack_121;
  int iStack_120;
  timeval tStack_11c;
  sockaddr local_114;
  fd_set fStack_104;
  
  uVar1 = MakeSocketAddress(param_1,param_2,(sockaddr_in *)&local_114);
  if (uVar1 == '\0') {
    iVar2 = WSAGetLastError();
    *(int *)(this + 8) = iVar2;
  }
  else {
    iVar2 = connect(*(SOCKET *)(this + 4),&local_114,0x10);
    if (iVar2 == 0) {
LAB_00585d53:
      *(undefined4 *)(this + 8) = 0;
      return '\x01';
    }
    iVar2 = WSAGetLastError();
    *(int *)(this + 8) = iVar2;
    if (iVar2 == 0x2733) {
      fStack_104.fd_array[0] = *(SOCKET *)(this + 4);
      fStack_104.fd_count = 1;
      tStack_11c.tv_sec = g_iOnConnectTimeOut;
      tStack_11c.tv_usec = 0;
      iVar2 = select(0x40,(fd_set *)0x0,&fStack_104,(fd_set *)0x0,&tStack_11c);
      if (iVar2 == 1) {
        iVar2 = WSAFDIsSet_8(*(SOCKET *)(this + 4),&fStack_104);
        if (iVar2 != 0) {
          iStack_120 = 4;
          getsockopt(*(SOCKET *)(this + 4),0xffff,0x1007,&cStack_121,&iStack_120);
          if (cStack_121 == '\0') goto LAB_00585d53;
        }
      }
      iVar2 = WSAGetLastError();
      *(int *)(this + 8) = iVar2;
      return '\0';
    }
  }
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585D90 */

int __thiscall clSocket::Send(clSocket *this,char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = send(*(SOCKET *)(this + 4),param_1,param_2,0);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    *(int *)(this + 8) = iVar1;
    return -1;
  }
  *(undefined4 *)(this + 8) = 0;
  return iVar1;
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585DD0 */

int __thiscall
clSocket::SendTo(clSocket *this,char *param_1,int param_2,uint param_3,ushort param_4)

{
  uchar uVar1;
  int iVar2;
  sockaddr local_10;
  
  uVar1 = MakeSocketAddress(param_3,param_4,(sockaddr_in *)&local_10);
  if (uVar1 == '\0') {
    iVar2 = WSAGetLastError();
    *(int *)(this + 8) = iVar2;
    return -1;
  }
  iVar2 = sendto(*(SOCKET *)(this + 4),param_1,param_2,0,&local_10,0x10);
  if (iVar2 == -1) {
    iVar2 = WSAGetLastError();
    *(int *)(this + 8) = iVar2;
    return -1;
  }
  *(undefined4 *)(this + 8) = 0;
  return iVar2;
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585E50 */

int __thiscall clSocket::Receive(clSocket *this,char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = recv(*(SOCKET *)(this + 4),param_1,param_2,0);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    *(int *)(this + 8) = iVar1;
    if (iVar1 != 0x2733) {
      return -1;
    }
    iVar1 = 0;
  }
  else if (iVar1 == 0) {
    *(undefined4 *)(this + 8) = 0xffffffff;
    return -1;
  }
  *(undefined4 *)(this + 8) = 0;
  return iVar1;
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00585EA0 */

int __thiscall
clSocket::ReceiveFrom(clSocket *this,char **param_1,int param_2,uint *param_3,ushort *param_4)

{
  u_short uVar1;
  int iVar2;
  char *buf;
  int local_18;
  int local_14;
  sockaddr local_10;
  
  local_18 = 0x10;
  local_14 = 0;
  iVar2 = recvfrom(*(SOCKET *)(this + 4),*param_1,param_2,2,&local_10,&local_18);
  if (iVar2 != -1) {
    iVar2 = recvfrom(*(SOCKET *)(this + 4),*param_1,param_2,0,&local_10,&local_18);
    *param_3 = CONCAT22(local_10.sa_data._4_2_,local_10.sa_data._2_2_);
    uVar1 = ntohs(local_10.sa_data._0_2_);
    *param_4 = uVar1;
    *(undefined4 *)(this + 8) = 0;
    return iVar2;
  }
  iVar2 = WSAGetLastError();
  *(int *)(this + 8) = iVar2;
  while( true ) {
    if ((iVar2 != 0x2738) || (0x18 < local_14)) {
      if (*(int *)(this + 8) != 0x2733) {
        return -1;
      }
      *(undefined4 *)(this + 8) = 0;
      return 0;
    }
    local_14 = local_14 + 1;
    param_2 = param_2 * 2;
    if (*param_1 != (char *)0x0) {
      ExtAlloc_Free_4(*param_1);
    }
    buf = (char *)ExtAlloc_Malloc_4(param_2);
    *param_1 = buf;
    iVar2 = recvfrom(*(SOCKET *)(this + 4),buf,param_2,2,&local_10,&local_18);
    if (iVar2 != -1) break;
    iVar2 = WSAGetLastError();
    *(int *)(this + 8) = iVar2;
  }
  iVar2 = recvfrom(*(SOCKET *)(this + 4),*param_1,param_2,0,&local_10,&local_18);
  *param_3 = CONCAT22(local_10.sa_data._4_2_,local_10.sa_data._2_2_);
  uVar1 = ntohs(local_10.sa_data._0_2_);
  *param_4 = uVar1;
  *(undefined4 *)(this + 8) = 0;
  return iVar2;
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00586000 */

int __thiscall
clSocket::ReceiveFrom
          (clSocket *this,char *param_1,int param_2,uint *param_3,ushort *param_4,uchar param_5)

{
  u_short uVar1;
  int iVar2;
  int local_14;
  sockaddr local_10;
  
  local_14 = 0x10;
  iVar2 = recvfrom(*(SOCKET *)(this + 4),param_1,param_2,-(uint)(param_5 != '\0') & 2,&local_10,
                   &local_14);
  if (iVar2 != -1) {
    *param_3 = CONCAT22(local_10.sa_data._4_2_,local_10.sa_data._2_2_);
    uVar1 = ntohs(local_10.sa_data._0_2_);
    *param_4 = uVar1;
    *(undefined4 *)(this + 8) = 0;
    return iVar2;
  }
  if (*(int *)(this + 8) == 0x2733) {
    *(undefined4 *)(this + 8) = 0;
    return 0;
  }
  return -1;
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00586090 */

uchar __thiscall clSocket::GetPeerAddress(clSocket *this,uint *param_1,ushort *param_2)

{
  u_short uVar1;
  int iVar2;
  int local_14;
  sockaddr local_10;
  
  local_14 = 0x10;
  iVar2 = getpeername(*(SOCKET *)(this + 4),&local_10,&local_14);
  if (iVar2 == 0) {
    *param_1 = CONCAT22(local_10.sa_data._4_2_,local_10.sa_data._2_2_);
    uVar1 = ntohs(local_10.sa_data._0_2_);
    *param_2 = uVar1;
    *(undefined4 *)(this + 8) = 0;
    return '\x01';
  }
  iVar2 = WSAGetLastError();
  *(int *)(this + 8) = iVar2;
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00586100 */

uchar __thiscall clSocket::GetLocalAddress(clSocket *this,char *param_1,ushort *param_2)

{
  in_addr in;
  u_short uVar1;
  int iVar2;
  char *_Source;
  size_t _Count;
  int local_14;
  sockaddr local_10;
  
  local_14 = 0x10;
  iVar2 = getsockname(*(SOCKET *)(this + 4),&local_10,&local_14);
  if (iVar2 == 0) {
    in.S_un._2_1_ = local_10.sa_data[4];
    in.S_un._3_1_ = local_10.sa_data[5];
    in.S_un._0_1_ = local_10.sa_data[2];
    in.S_un._1_1_ = local_10.sa_data[3];
    _Count = 0x81;
    _Source = inet_ntoa(in);
    strncpy(param_1,_Source,_Count);
    uVar1 = ntohs(local_10.sa_data._0_2_);
    *param_2 = uVar1;
    *(undefined4 *)(this + 8) = 0;
    return '\x01';
  }
  iVar2 = WSAGetLastError();
  *(int *)(this + 8) = iVar2;
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00586180 */

uchar __thiscall clSocket::Close(clSocket *this)

{
  int iVar1;
  
  iVar1 = closesocket(*(SOCKET *)(this + 4));
  if (iVar1 == 0) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    *(undefined4 *)(this + 8) = 0;
    return '\x01';
  }
  iVar1 = WSAGetLastError();
  *(int *)(this + 8) = iVar1;
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 005861B0 */

uchar __thiscall clSocket::SetNonBlocking(clSocket *this,uchar param_1)

{
  int iVar1;
  
  _param_1 = (uint)param_1;
  iVar1 = ioctlsocket(*(SOCKET *)(this + 4),-0x7ffb9982,(u_long *)&param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 8) = 0;
    return '\x01';
  }
  iVar1 = WSAGetLastError();
  *(int *)(this + 8) = iVar1;
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 005861F0 */

uchar __thiscall clSocket::SetRemoveNagle(clSocket *this,uchar param_1)

{
  int iVar1;
  
  _param_1 = (uint)param_1;
  iVar1 = setsockopt(*(SOCKET *)(this + 4),6,1,(char *)&param_1,4);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 8) = 0;
    return '\x01';
  }
  iVar1 = WSAGetLastError();
  *(int *)(this + 8) = iVar1;
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00586240 */

uchar __thiscall clSocket::SetReUseAddr(clSocket *this,uchar param_1)

{
  int iVar1;
  
  _param_1 = (uint)param_1;
  iVar1 = setsockopt(*(SOCKET *)(this + 4),0xffff,4,(char *)&param_1,4);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 8) = 0;
    return '\x01';
  }
  iVar1 = WSAGetLastError();
  *(int *)(this + 8) = iVar1;
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00586290 */

uchar __thiscall clSocket::SetBroadcast(clSocket *this,uchar param_1)

{
  int iVar1;
  
  _param_1 = (uint)param_1;
  iVar1 = setsockopt(*(SOCKET *)(this + 4),0xffff,0x20,(char *)&param_1,4);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 8) = 0;
    return '\x01';
  }
  iVar1 = WSAGetLastError();
  *(int *)(this + 8) = iVar1;
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 005862E0 */

uchar __thiscall clSocket::SetSendBuffer(clSocket *this,int param_1)

{
  int iVar1;
  
  iVar1 = setsockopt(*(SOCKET *)(this + 4),0xffff,0x1001,(char *)&param_1,4);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 8) = 0;
    return '\x01';
  }
  iVar1 = WSAGetLastError();
  *(int *)(this + 8) = iVar1;
  return '\0';
}




/* from: libgssocket:Socket_win32.cpp
   addr: 00586320 */

uchar __thiscall clSocket::SetRcvBuffer(clSocket *this,int param_1)

{
  int iVar1;
  
  iVar1 = setsockopt(*(SOCKET *)(this + 4),0xffff,0x1002,(char *)&param_1,4);
  if (iVar1 == 0) {
    *(undefined4 *)(this + 8) = 0;
    return '\x01';
  }
  iVar1 = WSAGetLastError();
  *(int *)(this + 8) = iVar1;
  return '\0';
}

