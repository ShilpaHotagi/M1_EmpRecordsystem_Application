/**
 * @file fun_struct.h
 * @author  Shilpa Hotagi
 * @brief 
 * @version 0.1
 * @date 2022-02-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#include<string.h>

#ifndef __FUN_STRUCT_H
#define __FUN_STRUCT_H

struct employee         //STRUCTURE DECLARATION
{
    int id;
    char name[50];
    int age;
    float salary;
};

#endif
