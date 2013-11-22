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
/* Load the image for the given filename                                            */
/*                                                                                  */
/************************************************************************************/

GLuint LoadTexture( const char * filename )
{
    GLuint texture;

    int width, height;
    unsigned char * data;

    FILE * file;
    file = fopen( filename, "rb" );

    if ( file == NULL ) return 0;
    width = 1024;
    height = 512;
    data = (unsigned char *)malloc( width * height * 3 );
  //int size = fseek(file,);
    fread( data, width * height * 3, 1, file );
    fclose( file );

    for(int i = 0; i < width * height ; ++i)
    {
        int index = i*3;
        unsigned char B,R;
        B = data[index];
        R = data[index+2];

        data[index] = R;
        data[index+2] = B;

    }


    glGenTextures( 1, &texture );
    glBindTexture( GL_TEXTURE_2D, texture );
    glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE,GL_MODULATE );
    glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_NEAREST );


    glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,GL_LINEAR );
    glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S,GL_REPEAT );
    glTexParameterf( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T,GL_REPEAT );
    gluBuild2DMipmaps( GL_TEXTURE_2D, 3, width, height,GL_RGB, GL_UNSIGNED_BYTE, data );
    free( data );

    return texture;
}

/************************************************************************************/
/*                                                                                  */
/* Add image to the existing window of the file f if the file is exist.             */
/* Return type of the method is void.                                               */
/*                                                                                  */
/************************************************************************************/

void load_image(char str[100])
{
    GLuint texture;
    texture= LoadTexture(str);
    glBindTexture (GL_TEXTURE_2D, texture);
}
