#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 10;
int x,y,fruitX, fruitY, score;
enum eDirection{STOP = 0,LEFT,RIGHT,UP,DOW};
eDirection dir;
void input()
{
	if(_kbhit())
	{
		switch (_getch())
		{
			case 'a':
				dir = LEFT;
			break;
			case 'd':
				dir = RIGHT;
			break;
			case 'w':
				dir = UP;
				break;
			case 's':
				dir = DOWN;
				break;
			case 'x':
				gameOver = true;
				break;
		}
	}
}
void Logic()
{
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X,prev2Y;
	tailX[0]=x;
	tailY[0]=y;
	for(int i=1;i<nTail;i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i]=prevX;
		tailY[i]=prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (dir)
	{
		case LEFT:
			x--;
			break;
		case RIGHT:
			x++;
		case UP:
			y--;			
			break;
		case DOWN;
			y++;
			break;
			
		default:
			break;
	}
//	if (x>width || x<0 || y>height || )
//		gameOver = true;
	if(x>=width) x=0;else if(x<0) x=width -1;
	if(y>=height) y=0;else if(y<0) y = heigh -1;
	for(int i=0;i<nTail;i++)
	if(tailX[i] == x && tailY[i] == y)
		gameOver = true;
	if(x==fruitx && y == fruity)
	{
		
		score += 1;
		fruitX = rand() % width;
		fruitY = rand() % height;
		nTail++;
	}
}
int main()
{
	
	return 0;
}
