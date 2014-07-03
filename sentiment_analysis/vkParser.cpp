#include "vkParser.h"

using namespace std;
char * (*DllFunc) ();// сдесь надо доделать, зависит от функции в библиотеке

int Parser()
{
    HINSTANCE hLib=LoadLibrary("libvkparser.DLL");// кинь библиотеку к exe файлу
    if(hLib==NULL) 
    {
       cout << "Unable to load library!" << endl;
    }
    DllFunc=(char * (*)()) // сдесь надо доделать, зависит от функции в библиотеке
            GetProcAddress(hLib,"vk_version");
    if (!DllFunc)
  {
    cout<<"Ошибка! ";
  }
   //сдесь вызов функии
   std::cout<<DllFunc();// или что то типо того
   FreeLibrary(hLib);
}

