#include "vkParser.h"

using namespace std;

char * (*Dll_vk_version) ();// сдесь надо доделать, зависит от функции в библиотеке
byte * (*Dll_vk_init) ();
unsigned short * (*Dll_vk_search_news) (const char *zn);
int init_dll_parser()
{
    HINSTANCE hLib=LoadLibrary("libvkparser.DLL");// кинь библиотеку к exe файлу
    if(hLib==NULL) 
    {
       cout << "Unable to load library!" << endl;
    }
    Dll_vk_version=(char * (*)()) // сдесь надо доделать, зависит от функции в библиотеке
            GetProcAddress(hLib,"vk_version");
    Dll_vk_init=(byte * (*) ())
            GetProcAddress(hLib,"vk_init");
    if ((!Dll_vk_version)||(!Dll_vk_init))
  {
    cout<<"Ошибка! ";
  }
   //сдесь вызов функии
    
    /////////////////////
    /////////////////////
    //////////TEST///////
    /////////////////////
    Dll_vk_search_news=(unsigned short * (*) (const char *zn))
            GetProcAddress(hLib,"vk_search_news");
    
     if (!Dll_vk_search_news)
  {
    cout<<"Ошибка! ";
  }
    
    /////////////////////
    /////////////////////
    //////////TEST///////
    /////////////////////
    
    
    
    
   Dll_vk_search_news("test");
   cout<<Dll_vk_version();// или что то типо того
   Dll_vk_init();
   FreeLibrary(hLib);
}
