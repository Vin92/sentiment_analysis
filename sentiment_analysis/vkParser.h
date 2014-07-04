#ifndef _DLLVKPARSER_H_
#define _DLLVKPARSER_H_

#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>     
#include <strings.h>
#include <string.h>
#include <conio.h>
#include <windows.h>


int init_dll_parser();
int free_dll_parser();
  
int vk_init(); 
int vk_free();
std::string vk_version();
int vk_result_count();
int vk_search_news(std::string);
int vk_results_save(std::string);
std::string vk_get_post(int);
int vk_search_wall(std::string, std::string);
int vk_post_load(std::string zn);

#endif