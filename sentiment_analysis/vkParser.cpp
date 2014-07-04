#include "vkParser.h"

typedef byte (WINAPI*cfunc)();

typedef char *(WINAPI*cfunc2)();

typedef unsigned short int(WINAPI*cfunc3)();

typedef unsigned short int(WINAPI*cfunc4)(const char *);

typedef byte (WINAPI*cfunc5)(const char *);

typedef char *(WINAPI*cfunc6)(unsigned short int);

typedef unsigned short int(WINAPI*cfunc7)(const char *, const char *);

cfunc dll_vk_init, dll_vk_free;
cfunc2 dll_vk_version;
cfunc3 dll_vk_result_count;
cfunc4 dll_vk_search_news;
cfunc5 dll_vk_results_save;
cfunc6 dll_vk_get_post;
cfunc7 dll_vk_search_wall;

HMODULE _hDll;

int init_dll_parser(){
    _hDll = LoadLibrary(".\\libvkparser.dll"); 
    if(_hDll == NULL) return -1;
    
    dll_vk_init=(cfunc)GetProcAddress((HMODULE)_hDll, "vk_init");
    if (dll_vk_init == NULL) return -2;
    
    dll_vk_free=(cfunc)GetProcAddress((HMODULE)_hDll, "vk_free");
    if (dll_vk_free == NULL) return -3;
    
    dll_vk_version=(cfunc2)GetProcAddress((HMODULE)_hDll, "vk_version");
    if (dll_vk_version == NULL) return -4;
    
    dll_vk_result_count=(cfunc3)GetProcAddress((HMODULE)_hDll, "vk_result_count");
    if (dll_vk_result_count == NULL) return -5;
    
    dll_vk_search_news=(cfunc4)GetProcAddress((HMODULE)_hDll, "vk_search_news");
    if (dll_vk_search_news == NULL) return -6;
    
    dll_vk_results_save=(cfunc5)GetProcAddress((HMODULE)_hDll, "vk_results_save");
    if (dll_vk_results_save == NULL) return -7;
    
    dll_vk_get_post=(cfunc6)GetProcAddress((HMODULE)_hDll, "vk_get_post");
    if (dll_vk_get_post == NULL) return -8;
    
    dll_vk_search_wall=(cfunc7)GetProcAddress((HMODULE)_hDll, "vk_search_wall");
    if (dll_vk_search_wall == NULL) return -9;
      
   return 0;
}

int free_dll_parser(){
    if(_hDll != NULL){
        FreeLibrary(_hDll);
        return 0;
    }
    return 1; 
    
}


int vk_init(){
    return (int)dll_vk_init();
}


int vk_free(){
    return (int)dll_vk_free();
}


std::string vk_version(){
    return (std::string)dll_vk_version();
}


int vk_result_count(){ 
    return (int)dll_vk_result_count();
}


int vk_search_news(std::string zn){
    return (int)dll_vk_search_news(zn.c_str());
}


int vk_results_save(std::string zn){
    return (int)dll_vk_results_save(zn.c_str());
}


std::string vk_get_post(int zn){
    return (std::string)dll_vk_get_post((unsigned short int)zn);
}


int vk_search_wall(std::string zn0, std::string zn1){
    return (int)dll_vk_search_wall(zn0.c_str(), zn1.c_str());
}