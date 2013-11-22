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



#ifndef DRAW_H
#define DRAW_H



/************************************************************************************/
/*                                                                                  */
/* In this method we draw a line by getting the vertex of x ,  y and x1 ,           */
/* y1. Return type of this method is void.                                          */
/*                                                                                  */
/************************************************************************************/

void DrawLine(int x,int y,int x1,int y1);

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a line by getting the vertex of x ,  y and x1 ,  y1.      */
/* Return type of this method is void.                                              */
/*                                                                                  */
/************************************************************************************/

void DrawPolyLine(int x, int y, int x1, int y1);

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a Triangle  by using DrawLine  () method.  Return         */
/* type of this method is void.                                                     */
/*                                                                                  */
/************************************************************************************/

void DrawTriangle(int x1,int y1,int x2,int y2,int x3,int y3);

/************************************************************************************/
/*                                                                                  */
/* In this method we fill a Triangle by using DrawLine  () method we use            */
/* GL_TRIANGLES to fill the triangle. Return type of this method is void.           */
/*                                                                                  */
/************************************************************************************/

void DrawTriangle_fill(int x1,int y1,int x2,int y2,int x3,int y3);

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a quadratic shape by using 4 DrawLine  () method.         */
/* Return type of this method is void.                                              */
/*                                                                                  */
/************************************************************************************/

void DrawQuadri(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4);

/************************************************************************************/
/*                                                                                  */
/* In this method we fill a quadratic shape by using DrawLine () method we use      */
/* GL_QUADSto fill the square. Return type of this method is void.                  */
/*                                                                                  */
/************************************************************************************/

void DrawQuadri_fill(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4);

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a polygon by setting a loop and call the                  */
/* DrawLine() method. Return type of this method is void.                           */
/*                                                                                  */
/************************************************************************************/

void DrawPolygon_fill(int x[],int y[],int n);

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a polygon  fill   by setting a loop and call              */
/* the DrawLine  () method. Return type of this method is void.                     */
/*                                                                                  */
/************************************************************************************/

void DrawPolygon(int x[],int y[],int n);

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a rectangle by using DrawLine () method.                  */
/* Return type of this method is void.                                              */
/*                                                                                  */
/************************************************************************************/

void DrawRectangle(int x,int y,int x1,int y1);

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a rectangle by using DrawLine () method.                  */
/* Return type of this method is void.                                              */
/*                                                                                  */
/************************************************************************************/

void DrawRectangle_fill(int x,int y,int x1,int y1);

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a circle by using angle and x and y direction.  We set    */
/* the radius and set a loop from the angle. Return type of this method is void.    */
/*                                                                                  */
/************************************************************************************/

void DrawCircle(float x1, float y1,float radius);

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a circle by using angle and x and y direction.  We set    */
/* the radius and set a loop from the angle. Return type of this method is void.    */
/*                                                                                  */
/************************************************************************************/

void DrawCircle_fill(float x1, float y1, float radius);

#endif

