
/* from: libgshttp:GSHttpInterface.cpp
   addr: 00589430 */

void GSHttpUninitialize_4(void *param_1)

{
  if (param_1 != (void *)0x0) {
    HttpAlgorithmInterface::DestroyHttpHandle(param_1);
    return;
  }
  HttpAlgorithmInterface::DestroyAllHttpHandle();
  return;
}




/* from: libgshttp:GSHttpInterface.cpp
   addr: 00589450 */

uchar GSHttpEngine_8(void *param_1,uint param_2)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
  uVar1 = HttpAlgorithmInterface::GSHttpEngine(param_1,param_2);
  return uVar1;
}




/* from: libgshttp:GSHttpInterface.cpp
   addr: 00589470 */

void GSHttpSave_24(void *param_1,char *param_2,char *param_3,uchar param_4,
                  _func_void_uint_GSHTTPResult_char_ptr_uint_uchar_void_ptr *param_5,void *param_6)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  HttpAlgorithmInterface::GSHttpSave(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




/* from: libgshttp:GSHttpInterface.cpp
   addr: 00589490 */

uchar GSHttpCancelRequest_8(void *param_1,uint param_2)

{
  uchar uVar1;
  
  if (param_1 == (void *)0x0) {
    return '\0';
  }
  uVar1 = HttpAlgorithmInterface::GSHttpCancelRequest(param_1,param_2);
  return uVar1;
}

