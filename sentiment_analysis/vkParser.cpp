#include "vkParser.h"

using namespace std;
char * (*Dll_vk_version) ();// сдесь надо доделать, зависит от функции в библиотеке

int init_dll_parser()
{
    HINSTANCE hLib=LoadLibrary("libvkparser.DLL");// кинь библиотеку к exe файлу
    if(hLib==NULL) 
    {
       cout << "Unable to load library!" << endl;
    }
    Dll_vk_version=(char * (*)()) // сдесь надо доделать, зависит от функции в библиотеке
            GetProcAddress(hLib,"vk_version");
    if (!Dll_vk_version)
  {
    cout<<"Ошибка! ";
  }
   //сдесь вызов функии
   cout<<Dll_vk_version();// или что то типо того
   FreeLibrary(hLib);
}
