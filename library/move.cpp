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



#include "header.h"

/************************************************************************************/
/*                                                                                  */
/* Move the line right from its previous position by changing the x
/* position by changing the unit or pixel.
/*                                                                                  */
/************************************************************************************/

void Move_Line_Right(int x,int y, int x1,int y1,int unit)
{
    DrawLine(x+unit,y,x1+unit,y1);
}


/************************************************************************************/
/*                                                                                  */
/* Move the line left from its previous position by changing the x
/* positionby changing the unit
/*                                                                                  */
/************************************************************************************/

void Move_Line_Left(int x,int y, int x1,int y1,int unit)
{
    DrawLine(x-unit,y,x1-unit,y1);
}

/************************************************************************************/
/*                                                                                  */
/* Move the line up from its previous position by changing the y
/* position by changing the unit.
/*                                                                                  */
/************************************************************************************/

void Move_Line_Up(int x,int y, int x1,int y1,int unit)
{
    DrawLine(x,y-unit,x1,y1-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the line down from its previous position by changing the y
/* position by changing the unit.
/*                                                                                  */
/************************************************************************************/


void Move_Line_Down(int x,int y, int x1,int y1,int unit)
{
    DrawLine(x,y+unit,x1,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the line from its previous position and change the x and y
/* position by changing the pixel.
/*                                                                                  */
/************************************************************************************/

void Move_Line_Coordinate(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    DrawLine(x3,y3,x4,y4);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle into right corner down from its previous position by changing
/* the unit with respect to x co-ordinate position and change it to upper limit and
/* in y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Line_Corner_Right_Down(int x,int y, int x1,int y1,int unit)
{
    DrawLine(x+unit,y+unit,x1+unit,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle into left corner up from its previous position by changing
/* the unit with respect to x co-ordinate position and change it to lower limit
/* and in y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Line_Corner_Left_Up(int x,int y, int x1,int y1,int unit)
{
    DrawLine(x-unit,y-unit,x1-unit,y1-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the line corner left down from its previous position by changing the x
/* co-ordinate position by changing the unit to lower limit and y co-ordinate
/* position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Line_Corner_Left_Down(int x,int y, int x1,int y1,int unit)
{
    DrawLine(x-unit,y+unit,x1-unit,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the line corner left up from its previous position by changing the x
/* co-ordinate position by changing the unit to upper limit and y co-ordinate
/* position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Line_Corner_Right_Up(int x,int y, int x1,int y1,int unit)
{
    DrawLine(x+unit,y-unit,x1+unit,y1-unit);
}


/************************************************************************************/
/*                                                                                  */
/* Move the Triangle to right from its previous position by changing the x
/* co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_Right(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1+unit,y1,x2+unit,y2,x3+unit,y3);
}


/************************************************************************************/
/*                                                                                  */
/* Move the Triangle to left from its previous position by changing the x
/* co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_Left(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1-unit,y1,x2-unit,y2,x3-unit,y3);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle to up from its previous position by changing the x
/* co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_Up(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1,y1-unit,x2,y2-unit,x3,y3-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle to down from its previous position by changing the y
/* co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_Down(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1,y1+unit,x2,y2+unit,x3,y3+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle into right corner down from its previous position by
/* changing the x co-ordinate position by changing the unit to upper limit and
/* y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_Corner_Right_Down(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1+unit,y1+unit,x2+unit,y2+unit,x3+unit,y3+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle into left corner up from its previous position by changing
/* the x co-ordinate position by changing the unit to lower limit and y
/* co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_Corner_Left_Up(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1-unit,y1-unit,x2-unit,y2-unit,x3-unit,y3-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle into left corner down from its previous position by changing
/* the x co-ordinate position by changing the unit to lower limit and y
/* co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_Corner_Left_Down(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1-unit,y1+unit,x2-unit,y2+unit,x3-unit,y3+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle into right corner up from its previous position by changing
/* the x co-ordinate position by changing the unit to upper limit and y co-ordinate
/* position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_Corner_Right_Up(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1+unit,y1-unit,x2+unit,y2-unit,x3+unit,y3-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle co-ordinate by changing x and y co-ordinate
/* position by changing the pixels.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_Coordinate(int x1,int y1,int x2,int y2,int x3,int y3, int px1,int py1,int px2,int py2,int px3,int py3)
{
    DrawTriangle(px1,py1,px2,py2,px3,py3);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle_fill into right from its previous position by changing
/* the x co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/



void Move_Triangle_fill_Right(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle_fill(x1+unit,y1,x2+unit,y2,x3+unit,y3);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle_fill into left from its previous position by changing
/* the x co-ordinate position by changing the unit to lower limit.                                                                                    */
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_fill_Left(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle_fill(x1-unit,y1,x2-unit,y2,x3-unit,y3);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle_fill into up from its previous position by changing the
/* triangle_fills y co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_fill_Up(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle_fill(x1,y1-unit,x2,y2-unit,x3,y3-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle_fill into down from its previous position by changing the
/* triangle_fills y co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_fill_Down(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle_fill(x1,y1+unit,x2,y2+unit,x3,y3+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle fill into right corner down from its previous position by
/* changing the x co-ordinate position by changing the unit to upper limit and
/* y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_fill_Corner_Right_Down(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1+unit,y1+unit,x2+unit,y2+unit,x3+unit,y3+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle fill into left corner up from its previous position by
/* changing the x co-ordinate position by changing the unit to lower limit and
/* y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Triangle_fill_Corner_Left_Up(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1-unit,y1-unit,x2-unit,y2-unit,x3-unit,y3-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle fill into left corner down from its previous position by
/* changing the x co-ordinate position by changing the unit to lower limit and
/* y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Triangle_fill_Corner_Left_Down(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1-unit,y1+unit,x2-unit,y2+unit,x3-unit,y3+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle into right corner up from its previous position by changing
/* the x co-ordinate position by changing the unit to lower limit and y
/* co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Triangle_fill_Corner_Right_Up(int x1,int y1,int x2,int y2,int x3,int y3, int unit)
{
    DrawTriangle(x1+unit,y1-unit,x2+unit,y2-unit,x3+unit,y3-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Triangle fill co-ordinate by changing x and y co-ordinate position
/* by changing the pixels.
/*                                                                                  */
/************************************************************************************/

void Move_Triangle_fill_Coordinate(int x1,int y1,int x2,int y2,int x3,int y3, int px1,int py1,int px2,int py2,int px3,int py3)
{
    DrawTriangle(px1,py1,px2,py2,px3,py3);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral fill into right from its previous position by changing the
/* x co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Quadri_fill_Right(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri_fill(x1+unit,y1,x2+unit,y2,x3+unit,y3,x4+unit,y4);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral fill into left from its previous position by changing
/* the x co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_fill_Left(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri_fill(x1-unit,y1,x2-unit,y2,x3-unit,y3,x4-unit,y4);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral fill into up from its previous position by changing
/* the y co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Quadri_fill_Up(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri_fill(x1,y1-unit,x2,y2-unit,x3,y3-unit,x4,y4-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Qualdrilateral into down from its previous position by changing
/* the y co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_fill_Down(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri_fill(x1,y1+unit,x2,y2+unit,x3,y3+unit,x4,y4+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral fill into right corner down from its previous position
/* by changing the x co-ordinate position by changing the unit to upper limit
/* and y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_fill_Corner_Right_Down(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri_fill(x1+unit,y1+unit,x2+unit,y2+unit,x3+unit,y3+unit,x4+unit,y4+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral fill into left corner up from its previous position by
/* changing the x co-ordinate position by changing the unit to lower limit
/* and y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_fill_Corner_Left_Up(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri_fill(x1-unit,y1-unit,x2-unit,y2-unit,x3-unit,y3-unit,x4-unit,y4-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral fill into left corner down from its previous position
/* by changing the x co-ordinate position by changing the unit to lower limit
/* and y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_fill_Corner_Left_Down(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri_fill(x1-unit,y1+unit,x2-unit,y2+unit,x3-unit,y3+unit,x4-unit,y4+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral fill into right corner up from its previous position
/* by changing the x co-ordinate position by changing the unit to upper limit
/* and y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_fill_Corner_Right_Up(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri_fill(x1+unit,y1-unit,x2+unit,y2-unit,x3+unit,y3-unit,x4+unit,y4-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral fill co-ordinate by changing x and y co-ordinate
/* position by changing the pixels.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_fill_Coordinate(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,  int px1,int py1,int px2,int py2,int px3,int py3,int px4,int py4)
{
    DrawQuadri_fill(px1,py1,px2,py2,px3,py3,px4,py4);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral into right from its previous position by changing
/* the x co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_Right(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri(x1+unit,y1,x2+unit,y2,x3+unit,y3,x4+unit,y4);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral into left from its previous position by changing
/* the x co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/


void Move_Quadri_Left(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri(x1-unit,y1,x2-unit,y2,x3-unit,y3,x4-unit,y4);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral into up from its previous position by changing
/* the y co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Quadri_Up(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri(x1,y1-unit,x2,y2-unit,x3,y3-unit,x4,y4-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral into down from its previous position by changing
/* the y co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_Down(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri(x1,y1+unit,x2,y2+unit,x3,y3+unit,x4,y4+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral into right corner down from its previous position
/* by changing the x co-ordinate position by changing the unit to upper
/* limit and y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_Corner_Right_Down(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri(x1+unit,y1+unit,x2+unit,y2+unit,x3+unit,y3+unit,x4+unit,y4+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral into left corner up from its previous position by
/* changing the x co-ordinate position by changing the unit to lower limit
/* and y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_Corner_Left_Up(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri(x1-unit,y1-unit,x2-unit,y2-unit,x3-unit,y3-unit,x4-unit,y4-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral into left corner down from its previous position by
/* changing the x co-ordinate position by changing the unit to lower limit
/* and y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_Corner_Left_Down(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri(x1-unit,y1+unit,x2-unit,y2+unit,x3-unit,y3+unit,x4-unit,y4+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral into right corner up from its previous position by
/* changing the x co-ordinate position by changing the unit to upper limit
/* and y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_Corner_Right_Up(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int unit)
{
    DrawQuadri(x1+unit,y1-unit,x2+unit,y2-unit,x3+unit,y3-unit,x4+unit,y4-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the Quadrilateral co-ordinate by changing x and y co-ordinate
/* position by changing the pixels.
/*                                                                                  */
/************************************************************************************/

void Move_Quadri_Coordinate(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,  int px1,int py1,int px2,int py2,int px3,int py3,int px4,int py4)
{
    DrawQuadri(px1,py1,px2,py2,px3,py3,px4,py4);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle into right from its previous position by changing
/* the x co-ordinate position by changing the unit to upper limit and
/* also change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_Right(float x,float y,float radius, int unit)
{
    DrawCircle(x+unit,y,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle into left from its previous position by changing
/* the x co-ordinate position by changing the unit to lower limit and
/*  also change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_Left(float x,float y, float radius, int unit)
{
    DrawCircle(x-unit,y,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle into up from its previous position by changing the
/* y co-ordinate position by changing the unit to upper limit and also
/* change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_Up(float x,float y, float radius, int unit)
{
    DrawCircle(x,y-unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle into down from its previous position by changing
/* the y co-ordinate position by changing the unit to lower limit and
/* also change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_Down(float x,float y, float radius, int unit)
{
    DrawCircle(x,y+unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle co-ordinate by changing x and y co-ordinate position
/* by changing the  x and y position and also change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_Coordinate(float x1,float y1, float radius, float x2,float y2)
{
    DrawCircle(x2,y2,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle into right corner down from its previous position by
/* changing the x co-ordinate position by changing the unit to upper limit
/* and y co-ordinate position by changing unit into lower limit and also
/* change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_Corner_Right_Down(float x,float y, float radius, int unit)
{
    DrawCircle(x+unit,y+unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle into left corner up from its previous position by
/* changing the x co-ordinate position by changing the unit to lower limit
/* and y co-ordinate position by changing unit into upper limit and also
/* change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_Corner_Left_Up(float x,float y, float radius, int unit)
{
    DrawCircle(x-unit,y-unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle into left corner down from its previous position by
/* changing the x co-ordinate position by changing the unit to lower limit
/* and y co-ordinate position by changing unit into lower limit and also
/* change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_Corner_Left_Down(float x,float y, float radius, int unit)
{
    DrawCircle(x-unit,y+unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle into right corner up from its previous position by
/* changing the x co-ordinate position by changing the unit to upper
/* limit and y co-ordinate position by changing unit into upper limit
/* and also change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_Corner_Right_Up(float x,float y, float radius, int unit)
{
    DrawCircle(x+unit,y-unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle fill into right from its previous position by changing
/* the x co-ordinate position by changing the unit to upper limit and also
/* change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_fill_Right(float x,float y,float radius, int unit)
{
    DrawCircle_fill(x+unit,y,radius);
}


/************************************************************************************/
/*                                                                                  */
/* Move the circle fill into left from its previous position by changing
/* the x co-ordinate position by changing the unit to lower limit and also
/* change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_fill_Left(float x,float y, float radius, int unit)
{
    DrawCircle_fill(x-unit,y,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle fill into up from its previous position by changing the
/* y co-ordinate position by changing the unit to upper limit and also
/* change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_fill_Up(float x,float y, float radius, int unit)
{
    DrawCircle_fill(x,y-unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle fill into down from its previous position by changing
/* the y co-ordinate position by changing the unit to lower limit and also
/* change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_fill_Down(float x,float y, float radius, int unit)
{
    DrawCircle_fill(x,y+unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle fill co-ordinate by changing x and y co-ordinate position
/* by changing the  x and y position and also change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_fill_Coordinate(float x1,float y1, float radius, float x2,float y2)
{
    DrawCircle_fill(x2,y2,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle fill into right corner down from its previous position
/* by changing the x co-ordinate position by changing the unit to upper limit
/* and y co-ordinate position by changing unit into lower limit and
/* also change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_fill_Corner_Right_Down(float x,float y, float radius, int unit)
{
    DrawCircle_fill(x+unit,y+unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle fill into left corner up from its previous position by
/* changing the x co-ordinate position by changing the unit to lower limit
/* and y co-ordinate position by changing unit into upper limit and
/* also change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_fill_Corner_Left_Up(float x,float y, float radius, int unit)
{
    DrawCircle_fill(x-unit,y-unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle fill into left corner down from its previous position
/* by changing the x co-ordinate position by changing the unit to lower
/* limit and y co-ordinate position by changing unit into lower limit
/* and also change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_fill_Corner_Left_Down(float x,float y, float radius, int unit)
{
    DrawCircle_fill(x-unit,y+unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the circle fill into right corner up from its previous position
/* by changing the x co-ordinate position by changing the unit to upper
/* limit and y co-ordinate position by changing unit into upper limit
/* and also change the position of the radius.
/*                                                                                  */
/************************************************************************************/

void Move_Circle_fill_Corner_Right_Up(float x,float y, float radius, int unit)
{
    DrawCircle_fill(x+unit,y-unit,radius);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle into right from its previous position by changing
/* the x co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Rectangle_Right(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle(x+unit,y,x1+unit,y1);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle into left from its previous position by changing
/* the x co-ordinate position with changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_Left(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle(x-unit,y,x1-unit,y1);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle into up from its previous position by changing the
/* y co-ordinate position with changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_Up(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle(x,y-unit,x1,y1-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle into down from its previous position by changing
/* the y co-ordinate position with changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_Down(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle(x,y+unit,x1,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle co-ordinate by changing x and y co-ordinate
/* position with changing the pixels.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_Coordinate(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    DrawRectangle(x3,y3,x4,y4);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle into right corner down from its previous position
/* by changing the x co-ordinate position with changing the unit to upper
/* limit and y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_Corner_Right_Down(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle(x+unit,y+unit,x1+unit,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle into left corner up from its previous position by
/* changing the x co-ordinate position with changing the unit to lower limit
/* and y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_Corner_Left_Up(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle(x-unit,y-unit,x1-unit,y1-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle into left corner down from its previous position by
/* changing the unit with respect to x co-ordinate position and change it to
/* lower limit and in y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_Corner_Left_Down(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle(x-unit,y+unit,x1-unit,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle into right corner up from its previous position by
/* changing its x co-ordinate position by changing the unit to upper limit
/* and y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_Corner_Right_Up(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle(x+unit,y-unit,x1+unit,y1-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle fill into right from its previous position by changing
/* its x co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/



void Move_Rectangle_fill_Right(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle(x+unit,y,x1+unit,y1);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle fill into left from its previous position by changing
/* its x co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_fill_Left(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle_fill(x-unit,y,x1-unit,y1);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle fill into up from its previous position by changing its
/* y co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_fill_Up(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle_fill(x,y-unit,x1,y1-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle fill into down from its previous position by changing its
/* y co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_fill_Down(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle_fill(x,y+unit,x1,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle co-ordinate by changing x and y co-ordinate
/* position by changing the pixels.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_fill_Coordinate(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    DrawRectangle_fill(x3,y3,x4,y4);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectanglefill into right corner down from its previous position
/* by changing the unit with respect to x co-ordinate position and change it
/* to upper limit and in y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_fill_Corner_Right_Down(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle_fill(x+unit,y+unit,x1+unit,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle fill into right corner up from its previous position by
/* changing the unit with respect to x co-ordinate position and change it to
/* lower limit and in y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_fill_Corner_Left_Up(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle_fill(x-unit,y-unit,x1-unit,y1-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectangle fill into left corner down from its previous position
/* by changing the unit with respect to x co-ordinate position and change it
/* to lower limit and in y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_fill_Corner_Left_Down(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle_fill(x-unit,y+unit,x1-unit,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the rectanglefill into right corner up from its previous position
/* by changing the unit with respect to x co-ordinate position and change it
/* to upper limit and in y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Rectangle_fill_Corner_Right_Up(int x,int y, int x1,int y1,int unit)
{
    DrawRectangle_fill(x+unit,y-unit,x1+unit,y1-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the poly line into right from its previous position by draw
/* its x co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/


void Move_Poly_Line_Right(int x,int y, int x1,int y1,int unit)
{
    DrawPolyLine(x+unit,y,x1+unit,y1);
}

/************************************************************************************/
/*                                                                                  */
/* Move the poly line into left from its previous position by draw
/* its x co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Poly_Line_Left(int x,int y, int x1,int y1,int unit)
{
    DrawPolyLine(x-unit,y,x1-unit,y1);
}

/************************************************************************************/
/*                                                                                  */
/* Move the poly line into up from its previous position by draw
/* its y co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Poly_Line_Up(int x,int y, int x1,int y1,int unit)
{
    DrawPolyLine(x,y-unit,x1,y1-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the poly line into down from its previous position by draw
/* its y co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Poly_Line_Down(int x,int y, int x1,int y1,int unit)
{
    DrawPolyLine(x,y+unit,x1,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the poly line co-ordinate by changing x and y
/* co-ordinate position by changing the pixels.
/*                                                                                  */
/************************************************************************************/

void Move_Poly_Line_Coordinate(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    DrawPolyLine(x3,y3,x4,y4);
}

/************************************************************************************/
/*                                                                                  */
/* Move the poly line into right corner down from its previous position
/* by changing the unit with respect to x co-ordinate position and
/* change it to upper limit and in y co-ordinate position by changing
/* unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Poly_Line_Corner_Right_Down(int x,int y, int x1,int y1,int unit)
{
    DrawPolyLine(x+unit,y+unit,x1+unit,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the poly line into left corner up from its previous position
/* by changing the unit with respect to x co-ordinate position
/* and change it to lower limit and in y co-ordinate position by
/* changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Poly_Line_Corner_Left_Up(int x,int y, int x1,int y1,int unit)
{
    DrawPolyLine(x-unit,y-unit,x1-unit,y1-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the poly line into left corner down from its previous position
/* by changing the unit with respect to x co-ordinate position
/* and change it to lower limit and in y co-ordinate position by
/* changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Poly_Line_Corner_Left_Down(int x,int y, int x1,int y1,int unit)
{
    DrawPolyLine(x-unit,y+unit,x1-unit,y1+unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the poly line into right corner up from its previous position
/* by changing the unit with respect to x co-ordinate position and
/* change it to upper limit and in y co-ordinate position by
/* changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Poly_Line_Corner_Right_Up(int x,int y, int x1,int y1,int unit)
{
    DrawPolyLine(x+unit,y-unit,x1+unit,y1-unit);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon into right from its previous position by
/* draw its x co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_Right(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        x[i] = x[i] + unit;
    }
    DrawPolygon(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon into left from its previous position by
/* draw its x co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_Left(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        x[i] = x[i] - unit;
    }
    DrawPolygon(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon into up from its previous position by draw
/* its y co-ordinate position by changing the unit to upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_Up(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] - unit;
    }
    DrawPolygon(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon into down from its previous position by draw
/* its y co-ordinate position by changing the unit to lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_Down(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] + unit;
    }
    DrawPolygon(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygonco-ordinate by draw new x and y
/* co-ordinate position by changing the pixels.
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_Coordinate(int x[],int y[],int n, int px[],int py[])
{
    DrawPolygon(px,py,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygoninto right corner down from its previous position by
/* changing the unit with respect to x co-ordinate position and change it
/* to upper limit and in y co-ordinate position by changing unit into lower limit.
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_Corner_Right_Down(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] + unit;
        x[i] = x[i] + unit;
    }
    DrawPolygon(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygoninto left corner down from its previous position by
/* changing the unit with respect to x co-ordinate position and change it
/* to lower limit and in y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_Corner_Left_Up(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] - unit;
        x[i] = x[i] - unit;
    }
    DrawPolygon(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygoninto left corner down from its previous position by
/* changing the unit with respect to x co-ordinate position and change it
/* to lower limit and in y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_Corner_Left_Down(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] + unit;
        x[i] = x[i] - unit;
    }
    DrawPolygon(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygoninto right corner up from its previous position by changing
/* the unit with respect to x co-ordinate position and change it to upper limit
/* and in y co-ordinate position by changing unit into upper limit.
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_Corner_Right_Up(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] - unit;
        x[i] = x[i] + unit;
    }
    DrawPolygon(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon into right from its previous position by draw its               */
/* x co-ordinate position by changing the unit to upper limit.                      */
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_fill_Right(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        x[i] = x[i] + unit;
    }
    DrawPolygon_fill(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon into left from its previous position by draw                    */
/* its x co-ordinate position by changing the unit to lower limit.                  */
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_fill_Left(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        x[i] = x[i] - unit;
    }
    DrawPolygon_fill(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon into up from its previous position by draw its                  */
/* y co-ordinate position by changing the unit to upper limit.                      */
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_fill_Up(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] - unit;
    }
    DrawPolygon_fill(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon into down from its previous position by draw its                */
/* y co-ordinate position by changing the unit to lower limit.                      */
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_fill_Down(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] + unit;
    }
    DrawPolygon_fill(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon co-ordinate by draw new x and y                                 */
/* co-ordinate position by changing the pixels.                                     */
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_fill_Coordinate(int x[],int y[],int n, int px[],int py[])
{
    DrawPolygon_fill(px,py,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon fillinto right corner down from its previous position           */
/* by changing the unit with respect to x co-ordinate position and change it        */
/* to upper limit and in y co-ordinate position by changing unit into lower limit.  */
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_fill_Corner_Right_Down(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] + unit;
        x[i] = x[i] + unit;
    }
    DrawPolygon_fill(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon fillleft corner up from its previous position by changing       */
/* the unit with respect to x co-ordinate position and change it to lower limit     */
/* and in y co-ordinate position by changing unit into upper limit.                 */
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_fill_Corner_Left_Up(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] - unit;
        x[i] = x[i] - unit;
    }
    DrawPolygon_fill(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon fillinto left corner down from its previous position by         */
/* changing the unit with respect to x co-ordinate position and change it to        */
/* lower limit and in y co-ordinate position by changing unit into lower limit.     */
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_fill_Corner_Left_Down(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] + unit;
        x[i] = x[i] - unit;
    }
    DrawPolygon_fill(x,y,n);
}

/************************************************************************************/
/*                                                                                  */
/* Move the polygon fillinto right corner up from its previous position by          */
/* changing the unit with respect to x co-ordinate position and change it           */
/* to upper limit and in y co-ordinate position by changing unit into upper limit.  */
/*                                                                                  */
/************************************************************************************/

void Move_Polygon_fill_Corner_Right_Up(int x[],int y[],int n, int unit)
{
    for(int i=0;i<n;i++)
    {
        y[i] = y[i] - unit;
        x[i] = x[i] + unit;
    }
    DrawPolygon_fill(x,y,n);
}
