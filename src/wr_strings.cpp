
/* from: wr_strings.cpp
   addr: 004A0770 */

int __thiscall wrSTRINGS::Init(wrSTRINGS *this)

{
  char cVar1;
  int iVar2;
  char local_100 [256];
  
  iVar2 = _apCfgReadString((void **)0x0,s_Language,s_fileTexts,local_100,0x100);
  if (iVar2 == 0) {
    do {
      cVar1 = s____texts_strings_str[iVar2];
      local_100[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    apCfgWriteString(s_Language,s_fileTexts,s____texts_strings_str);
  }
  iVar2 = gsSTRINGS::LoadStringsTable((gsSTRINGS *)this,local_100);
  return (uint)(iVar2 == 0);
}

