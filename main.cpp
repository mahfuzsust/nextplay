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