NextPlay
========
About
------

* NextPlay is an open source Game Engine. It is developed in C++ and in basic C. It is very much easy to understand and easy to update.

* This game engine is developed as 4th year thesis topic of Shahjalal University of Science & Technology, Bangladesh.

* NextPlay is working correctly and Users can develop game any time s/he wish.

* Any update and development should be under the license of Shahjalal University of Science & Technology, Bangladesh.


Key Features:
-------------
* Easy Coding
It is developed by simple coding so it is easy to understand and implement.

* Using OpenGL
Using OpenGL make comfortable for everyone to use it as their wish. They can also have the OpenGL source code if they wish. And that feature make it robust.

* KidZ game development
The whole game engine is developed in a goal that if a kid can define the game logic s/he can make or develop a game.

* Render Manager
The game engine only consists of the graphics render manager. It's a intention of developing this in future. 


Platform: 
---------

* Windows 2000/XP/Vista/7 (32-bit and 64-bit)

* Apple


How to:
--------
1. Setup the glut on the computer.
2. Create a glut project.
3. Copy the library in the existing project and add the files on the project.
4. In "main.cpp" write the following code:

	#include “header.h”
	Void key (unsigned char key , int x , int y)
	{
		switch (key)
		{
			case ‘q’:
				exit (0);
				break;
		}
	}
	Void Special_key (unsigned char key , int x , int y)
	{
		switch  (key)
		{
			case GLUT_KEY_UP:
			exit (0);
			break;
		}
	}
	Void display ()
	{
		Clear_display();
		draw_circle(20,20,30)
		//Write code to display something here
	}
	int main (int argc ,  char *argv[])
	{
		char Title[80] = "Your game name";
		create_window (argc , argv , 300 , 300 , 50 , 50 , Title);
		return EXIT_SUCCESS;
	}


5. If there is a circle in your window, then the setup is complete.
6. Now implement you game logic and make games as you wish. 
7. Happy coding(gaming) and Have a nice day :)


Contact:
--------

If you face any problem and wish to know anything, direct contact with me. Any suggestion and opinion will be appreciated with honor.

Email: mahfuz@student.sust.edu
       mahfuz.sust001@gmail.com

Website: http://www.mahfuzsust.info
