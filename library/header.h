/************************************************************************************/
/* ABOUT:                                                                           */
/*                                                                                  */
/* Name: NextPlay Game Engine                                                       */
/* Author: Md. Mahfuzur Rahman                                                      */
/* Language: C/C++                                                                  */
/* Inception: Feb. 25, 2013                                                         */
/* Copyright (C) May. 13, 2013, All rights reserved.                                */
/*                                                                                  */
/* This is a whole game engine library package                                      */
/* It contains all types of header it needed                                        */
/* All headers used here are used in the library and needed by the user             */
/* source code for more detailed information.                                       */
/*                                                                                  */
/*                                                                                  */
/************************************************************************************/
/*                                                                                  */
/* LICENSE:                                                                         */
/*                                                                                  */
/*                                                                                  */
/* This Game Engine ( NextPlay ) is fully free to use for personally and business.  */
/* You can use this default or by changing it as it is needed. But the naming and   */
/* the use should be under the name of NextPlay. It must be treated as the project  */
/* of Shahjalal University of Science & Technology, Bangladesh. Every               */
/* development or suggestion will be much more appreciated.                         */
/*                                                                                  */
/* This program is free software; you can redistribute it and/or modify             */
/* it under the terms of the GNU General Public License as published by             */
/* the Free Software Foundation; either version 2 of the License, or                */
/* (at your option) any later version.                                              */
/*                                                                                  */
/* This program is distributed in the hope that it will be useful,                  */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of                   */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                    */
/* GNU General Public License for more details.                                     */
/*                                                                                  */
/* You should have received a copy of the GNU General Public License                */
/* along with this program; if not, write to the Free Software                      */
/* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA       */
/*                                                                                  */
/* You should have received a copy of the OpenGL Public License                     */
/* along with this program; if not, Try to collect and maintain ther rules.         */
/*                                                                                  */
/*                                                                                  */
/************************************************************************************/
/*                                                                                  */
/* CONTACT:                                                                         */
/*                                                                                  */
/* Email: mahfuz@student.sust.edu                                                   */
/*	  mahfuz.sust001@gmail.com                                                  */
/*                                                                                  */
/* Institution: Shahjalal University of Science & Technology, Bangladesh            */
/*                                                                                  */
/************************************************************************************/
/*                                                                                  */
/* CHANGE LOG: ( Major )                                                            */
/*                                                                                  */
/* Rev.	  Date        Init.	Description                                         */
/* -------------------------------------------------------------------------------- */
/* 1.00   2012-08-25  WD	Initial version.                                    */
/* 1.00   2012-12-13  WD	Started to code in a very basic source              */
/* 1.00   2012-12-27  WD        Added object coloring on the library                */
/* 1.00   2013-02-23  WD        More simple speed optimizations, cleanup, bug fixes */
/* 1.00   2013-03-18  WD        Fix early recursion. Rewrite markup, subset and     */
/* 1.00   2013-04-20  WD        box-line interaction. Add movement procedure and    */
/* 1.00   2013-04-28  WD        Code the full cpp files separately                  */
/* 1.00   2013-05-06  WD        Added header on the library                         */
/*                                                                                  */
/************************************************************************************/


#ifndef HEADER_H
#define HEADER_H

/************************************************************************************/
/* Header definitions for the game engine library                                   */
/************************************************************************************/

/************************************************************************************/
/* Every default header needed to run                                               */
/************************************************************************************/

#include <windows.h>


/************************************************************************************/
/* Every default header for glut to run                                             */
/************************************************************************************/

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

/************************************************************************************/
/* Every default header needed to run                                               */
/************************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <map>
#include <string.h>
#include <set>
#include <math.h>
#include <mmsystem.h>
#include <iostream>
#include <fstream>
#include <conio.h>


/***********************************************************************************/
/* Every library header needed to run                                              */
/***********************************************************************************/


#include "draw.h"
#include "move.h"
#include "create_window.h"
#include "color.h"
#include "random.h"
#include "image.h"
#include "sound.h"


/***********************************************************************************/
/* Every definition that is needed for the user                                    */
/***********************************************************************************/

#define RED 1
#define GREEN 2
#define BLUE 3
#define YELLOW 4
#define MAGENTA 5
#define WHITE 6
#define CYAN 7
#define BLACK 8
#define pi 3.1416


#endif
