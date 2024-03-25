#include<iostream>
#include<string>
#include "iGraphics.h"
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int cx = 0;
int BX = 1200;
int BY = 20;
bool b;
bool x1 = true;
bool x2 = true;
bool x3 = true;
bool x4 = true;
bool x5 = true;
bool x6 = true;
bool x7 = true;
bool x8 = true;
bool x9 = true;
bool x10= true;
bool x11= true;
bool s= true;

void iDraw()
{
	iClear();
	iSetColor(255, 255, 255);

	iFilledRectangle(0, 0, 1900, 1000);
	if (s)
		iShowImage(550, 0, 720, 1000, iLoadImage("image\\cover.png"));
	else{
		iSetColor(135, 206, 235);
		iShowImage(550, 0, 720, 1000, iLoadImage("image\\bg.png"));
		iSetColor(0, 0, 0);
		iFilledRectangle(550, 0, 720, 20);

		//iShowImage(550+cx, 50, 300, 350, iLoadImage("image\\cloud.png"));
		//	iShowImage(1000 - cx, 350, 300, 350, iLoadImage("image\\cloud.png"));
		//	iShowImage(550 + cx, 650, 300, 350, iLoadImage("image\\cloud.png"));

		iShowImage(550, 935, 60, 60, iLoadImage("image\\Red.png"));
		iShowImage(615, 935, 60, 60, iLoadImage("image\\Blue.png"));
		iShowImage(680, 935, 60, 60, iLoadImage("image\\Black.png"));
		iShowImage(745, 935, 60, 60, iLoadImage("image\\Yellow.png"));
		iShowImage(810, 935, 60, 60, iLoadImage("image\\Purple.png"));
		iShowImage(875, 935, 60, 60, iLoadImage("image\\Green.png"));
		iShowImage(940, 935, 60, 60, iLoadImage("image\\Red.png"));
		iShowImage(1005, 935, 60, 60, iLoadImage("image\\Blue.png"));
		iShowImage(1070, 935, 60, 60, iLoadImage("image\\Black.png"));
		iShowImage(1135, 935, 60, 60, iLoadImage("image\\Yellow.png"));
		iShowImage(1200, 935, 60, 60, iLoadImage("image\\Purple.png"));
		iShowImage(550, 870, 60, 60, iLoadImage("image\\Green.png"));
		iShowImage(615, 870, 60, 60, iLoadImage("image\\Red.png"));
		iShowImage(680, 870, 60, 60, iLoadImage("image\\Blue.png"));
		iShowImage(745, 870, 60, 60, iLoadImage("image\\Black.png"));
		iShowImage(810, 870, 60, 60, iLoadImage("image\\Yellow.png"));
		iShowImage(875, 870, 60, 60, iLoadImage("image\\Purple.png"));
		iShowImage(940, 870, 60, 60, iLoadImage("image\\Green.png"));
		iShowImage(1005, 870, 60, 60, iLoadImage("image\\Red.png"));
		iShowImage(1070, 870, 60, 60, iLoadImage("image\\Blue.png"));
		iShowImage(1135, 870, 60, 60, iLoadImage("image\\Black.png"));
		iShowImage(1200, 870, 60, 60, iLoadImage("image\\Yellow.png"));
		if (x1)
			iShowImage(550, 805, 60, 60, iLoadImage("image\\Purple.png"));
		if (BY >= 710 && BX == 550)
			x1 = false;
		if (x2)
			iShowImage(615, 805, 60, 60, iLoadImage("image\\Green.png"));
		if (BY >= 710 && BX == 615)
			x2 = false;
		if (x3)
			iShowImage(680, 805, 60, 60, iLoadImage("image\\Red.png"));
		if (BY >= 710 && BX == 680)
			x3 = false;
		if (x4)
			iShowImage(745, 805, 60, 60, iLoadImage("image\\Blue.png"));
		if (BY >= 710 && BX == 745)
			x4 = false;
		if (x5)
			iShowImage(810, 805, 60, 60, iLoadImage("image\\Black.png"));
		if (BY >= 710 && BX == 810)
			x5 = false;
		if (x6)
			iShowImage(875, 805, 60, 60, iLoadImage("image\\Yellow.png"));
		if (BY >= 710 && BX == 875)
			x6 = false;
		if (x7)
			iShowImage(940, 805, 60, 60, iLoadImage("image\\Purple.png"));
		if (BY >= 710 && BX == 940)
			x7 = false;
		if (x8)
			iShowImage(1005, 805, 60, 60, iLoadImage("image\\Green.png"));
		if (BY >= 710 && BX == 1005)
			x8 = false;
		if (x9)
			iShowImage(1070, 805, 60, 60, iLoadImage("image\\Red.png"));
		if (BY >= 710 && BX == 1070)
			x9 = false;
		if (x10)
			iShowImage(1135, 805, 60, 60, iLoadImage("image\\Blue.png"));
		if (BY >= 710 && BX == 1135)
			x10 = false;
		if (x11)
			iShowImage(1200, 805, 60, 60, iLoadImage("image\\Black.png"));

		if (BY >= 710 && BX == 1200)
			x11 = false;

		iShowImage(BX, BY, 80, 80, iLoadImage("image\\fb.png"));
		iShowImage(BX - 50, 20, 150, 150, iLoadImage("image\\canon.png"));
		if (b)
		{
			BY = BY + 30;


		}
		if (BY >= 770)
		{
			b = false;
			BY = 20;
		}
	}
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == ' ')
	{
		b = true;
	}
	if (key == 's')
	{
		s = false;
	}
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
		BX = BX + 65;
		if (BX == 1200)
			BX = 1200;
	}
	if (key == GLUT_KEY_LEFT)
	{
		BX = BX - 65;
		if (BX == 550)
			BX = 550;
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}
void change()
{
	cx+=2;
	if (cx == 720)cx = 550;
}

int main()
{
	iSetTimer(.00000000000000000001, change);
	///srand((unsigned)time(NULL));
	iInitialize(1900, 1000, "Bubble Shoot");
	///updated see the documentations
	iStart();
	return 0;
}