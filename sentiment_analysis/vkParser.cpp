#include "vkParser.h"

using namespace std;
void (*DllFunc) ();// сдесь надо доделать, зависит от функции в библиотеке

int Parser()
{
    HINSTANCE hLib=LoadLibrary("libvkparser.DLL");// кинь библиотеку к exe файлу
    if(hLib==NULL) 
    {
       cout << "Unable to load library!" << endl;
    }
    DllFunc=(void (*)()) // сдесь надо доделать, зависит от функции в библиотеке
            GetProcAddress(hLib,"version");
    if (!DllFunc)
  {
    cout<<"Ошибка! ";
  }
   //сдесь вызов вункии
   //DllFunc(); или что то типо того
    
   FreeLibrary(hLib);
}

