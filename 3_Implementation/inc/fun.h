/**
 * @file fun.h
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
#include "fun_struct.h"

#ifndef __FUN_H
#define __FUN_H

struct employee e[100];

 
int addrecord();  // add record
int deleterecord(); // delete record
int searchrecord(); // search record
int displayrecord(); // display record
int modifyrecord(); // modify record

#endif