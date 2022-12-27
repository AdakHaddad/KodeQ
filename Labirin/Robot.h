#include <iostream>
#include <conio.h>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

class Robot
{
private:
	string name;
	int movePos[2] = {0, 0};

	void moveUp()
	{
		setMovePos(-1, 0);
	}

	void moveLeft()
	{
		setMovePos(0, -1);
	}

	void moveDown()
	{
		setMovePos(1, 0);
	}

	void moveRight()
	{
		setMovePos(0, 1);
	}

public:
	Robot(string name)
	{
		this->name = name;
	}

	void checkMove(int direction)
	{
		system("CLS");
		switch (direction)
		{
		case KEY_UP:
			moveUp();
			break;
		case KEY_LEFT:
			moveLeft();
			break;
		case KEY_DOWN:
			moveDown();
			break;
		case KEY_RIGHT:
			moveRight();
			break;
		default:
			break;
		}
	}

	string getName()
	{
		return this->name;
	}

	int *getMovePos()
	{
		return movePos;
	}

	void setMovePos(int x, int y)
	{
		this->movePos[0] = x;
		this->movePos[1] = y;
	}

	void printMovePos()
	{
		cout << " x : " << movePos[0];
		cout << " y : " << movePos[1];
	}
};
