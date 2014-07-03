#include "vkParser.h"

using namespace std;


int Parser()
{
    HINSTANCE hLib=LoadLibrary("libvkparser.DLL");// кинь библиотеку к exe файлу
    if(hLib==NULL) 
    {
       cout << "Unable to load library!" << endl;
    }
    // я хз чё дальше, задолбался, дальше от функции зависит
    
}

