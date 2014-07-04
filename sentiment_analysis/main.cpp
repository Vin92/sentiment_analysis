/* 
 * File:   main.cpp
 * Author: Vin92,Kirikspb
 *
 * Created on 2 Июль 2014 г., 21:50
 */

#include <cstdlib>
#include <iostream>
#include "vkParser.h"
using namespace std;

int main(int argc, char** argv) {

    cout<<"Destroy word!"<<endl<<"Kill them all!"<<endl<<endl;
    int err = init_dll_parser();
    cout<<"init_dll_parser "<<err<<endl;
    
    std::cout<<"init "<<vk_init()<<std::endl;
    std::cout<<"vk_version "<<vk_version()<<std::endl;
    std::cout<<"vk_result_count "<<vk_result_count()<<std::endl;
    std::cout<<"vk_search_news "<<vk_search_news("Я")<<std::endl;
    std::cout<<"vk_result_count "<<vk_result_count()<<std::endl;
    std::cout<<"vk_results_save "<<vk_results_save("search_rez.txt")<<std::endl;
    std::cout<<"vk_get_post0 "<<vk_get_post(0)<<std::endl;
    std::cout<<"vk_get_post1 "<<vk_get_post(1)<<std::endl;
    std::cout<<"vk_get_post2 "<<vk_get_post(2)<<std::endl;
    std::cout<<"vk_search_wall "<<vk_search_wall("-58741668", "ГУАП")<<std::endl;
    std::cout<<"vk_results_save "<<vk_results_save("search_rez2.txt")<<std::endl;
    std::cout<<"vk_get_post0 "<<vk_get_post(0)<<std::endl;
    std::cout<<"vk_get_post1 "<<vk_get_post(1)<<std::endl;
    std::cout<<"vk_get_post2 "<<vk_get_post(2)<<std::endl;
    std::cout<<"vk_get_post3 "<<vk_get_post(3)<<std::endl;
    std::cout<<"vk_get_post4 "<<vk_get_post(4)<<std::endl;
    std::cout<<"vk_get_post5 "<<vk_get_post(5)<<std::endl;
    std::cout<<"vk_result_count "<<vk_result_count()<<std::endl;
    std::cout<<"vk_post_load "<<vk_post_load("search_rez.txt")<<std::endl;
    std::cout<<"vk_get_post3 "<<vk_get_post(3)<<std::endl;
    std::cout<<"vk_get_post4 "<<vk_get_post(4)<<std::endl;
    std::cout<<"vk_get_post5 "<<vk_get_post(5)<<std::endl;
    std::cout<<"vk_free "<<vk_free()<<std::endl;
    
    err=free_dll_parser();
    cout<<"free_dll_parser "<<err<<endl;
    
    
    return 0;
}