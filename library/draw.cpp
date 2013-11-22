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
/* In this method we draw a line by getting the vertex of x ,  y and x1 ,           */
/* y1. Return type of this method is void.                                          */
/*                                                                                  */
/************************************************************************************/

void DrawLine(int x,int y,int x1,int y1)
{
    glBegin(GL_LINES);
    glVertex2f(x,y);
    glVertex2f(x1,y1);
    glEnd();
}

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a line by getting the vertex of x ,  y and x1 ,  y1.      */
/* Return type of this method is void.                                              */
/*                                                                                  */
/************************************************************************************/

void DrawPolyLine(int x, int y, int x1, int y1)
{
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    glVertex2f(x1,y1);
    glEnd();

}

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a Triangle  by using DrawLine  () method.  Return         */
/* type of this method is void.                                                     */
/*                                                                                  */
/************************************************************************************/

void DrawTriangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
    DrawLine(x1,y1,x2,y2);
    DrawLine(x2,y2,x3,y3);
    DrawLine(x1,y1,x3,y3);
}

/************************************************************************************/
/*                                                                                  */
/* In this method we fill a Triangle by using DrawLine  () method we use            */
/* GL_TRIANGLES to fill the triangle. Return type of this method is void.           */
/*                                                                                  */
/************************************************************************************/

void DrawTriangle_fill(int x1,int y1,int x2,int y2,int x3,int y3)
{
    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();
}

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a quadratic shape by using 4 DrawLine  () method.         */
/* Return type of this method is void.                                              */
/*                                                                                  */
/************************************************************************************/

void DrawQuadri(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    DrawLine(x1,y1,x2,y2);
    DrawLine(x2,y2,x3,y3);
    DrawLine(x4,y4,x3,y3);
    DrawLine(x1,y1,x4,y4);
}

/************************************************************************************/
/*                                                                                  */
/* In this method we fill a quadratic shape by using DrawLine () method we use      */
/* GL_QUADSto fill the square. Return type of this method is void.                  */
/*                                                                                  */
/************************************************************************************/

void DrawQuadri_fill(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    glBegin(GL_QUADS);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glVertex2f(x4,y4);
    glEnd();
}

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a polygon by setting a loop and call the                  */
/* DrawLine() method. Return type of this method is void.                           */
/*                                                                                  */
/************************************************************************************/

void DrawPolygon(int x[],int y[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        DrawLine(x[i],y[i],x[i+1],y[i+1]);
    }
}

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a polygon  fill   by setting a loop and call              */
/* the DrawLine  () method. Return type of this method is void.                     */
/*                                                                                  */
/************************************************************************************/

void DrawPolygon_fill(int x[],int y[],int n)
{
    glBegin(GL_QUADS);
    for(int i = 0; i<n;i++)
    {
        glVertex2f(x[i],y[i]);
    }
    glEnd();
}

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a rectangle by using DrawLine () method.                  */
/* Return type of this method is void.                                              */
/*                                                                                  */
/************************************************************************************/

void DrawRectangle(int x,int y,int x1,int y1)
{
    DrawLine(x,y,x1,y);
    DrawLine(x1,y,x1,y1);
    DrawLine(x1,y1,x,y1);
    DrawLine(x,y1,x,y);
}

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a rectangle by using DrawLine () method.                  */
/* Return type of this method is void.                                              */
/*                                                                                  */
/************************************************************************************/

void DrawRectangle_fill(int x,int y,int x1,int y1)
{
    glBegin(GL_QUADS);
    glVertex2f(x,y);
    glVertex2f(x1,y);
    glVertex2f(x1,y1);
    glVertex2f(x,y1);
    glEnd();
}

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a circle by using angle and x and y direction.  We set    */
/* the radius and set a loop from the angle. Return type of this method is void.    */
/*                                                                                  */
/************************************************************************************/

void DrawCircle(float x1, float y1, float radius)
{
    float angle = 0;
    float x2,y2,cx,cy,fx,fy;
    int cache = 0;
    glBegin(GL_LINES);
    for (angle = 0; angle < 360; angle+=1.0)
    {
        float rad_angle = angle * 3.14 / 180;
        x2 = x1+radius * sin((double)rad_angle);
        y2 = y1+radius * cos((double)rad_angle);
        if (cache)
        {
            glVertex2f(cx,cy);
            glVertex2f(x2,y2);
        }
        else
        {
            fx = x2;
            fy = y2;
        }
        cache = 1;
        cx = x2;
        cy = y2;
    }
    glVertex2f(x2,y2);
    glVertex2f(fx,fy);

    glEnd();
}

/************************************************************************************/
/*                                                                                  */
/* In this method we draw a circle by using angle and x and y direction.  We set    */
/* the radius and set a loop from the angle. Return type of this method is void.    */
/*                                                                                  */
/************************************************************************************/

void DrawCircle_fill(float x1, float y1, float radius)
{
    float angle = 0;
    float x2,y2,cx,cy,fx,fy;
    int cache = 0;
    glBegin(GL_POLYGON);
    for (angle = 0; angle < 360; angle+=1.0)
    {
        float rad_angle = angle * 3.14 / 180;
        x2 = x1+radius * sin((double)rad_angle);
        y2 = y1+radius * cos((double)rad_angle);
        if (cache)
        {
            glVertex2f(cx,cy);
            glVertex2f(x2,y2);
        }
        else
        {
            fx = x2;
            fy = y2;
        }
        cache = 1;
        cx = x2;
        cy = y2;
    }
    glVertex2f(x2,y2);
    glVertex2f(fx,fy);

    glEnd();
}
