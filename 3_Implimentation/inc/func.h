/**
 * @file func.h
 * @author Shilpa Hotagi
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __FUNC_H
#define __FUNC_H
#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#include<string.h>
struct employee         //STRUCTURE DECLARATION
{
    int id;
    char name[50];
    int age;
    float salary;
};
struct employee e[100];
int key=0;

 
int addrecord();  // add record
int deleterecord(); // delete record
int searchrecord(); // search record
int displayrecord(); // display record
int modifyrecord(); // modify record

#endif