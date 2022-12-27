#include <iostream>
#include <conio.h>
#include "Robot.h"
using namespace std;

class Labirin
{
private:
	int robotPosition[2] = {0, 1};
	Robot *robot;
	bool nabrak = false;
	bool finish = false;
	bool labirinShape[9][16] = {{1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
								{1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
								{1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1},
								{1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1},
								{1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1},
								{1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1},
								{1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1},
								{1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
								{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1}};
	bool *getLabirinShape()
	{
		return reinterpret_cast<bool *>(labirinShape);
	}

public:
	Labirin(Robot *robot)
	{
		this->robot = robot;
	}
	Robot *getRobot()
	{
		return this->robot;
	}

	bool checkWall(int x, int y)
	{
		if (labirinShape[robotPosition[0] + x][robotPosition[1] + y] == 1)
		{
			return true;
		}
		return false;
	}

	void updateRobotPos()
	{
		int *robotMovePos = robot->getMovePos();
		if (!checkWall(*(robotMovePos), *(robotMovePos + 1)))
		{

			robotPosition[0] = robotPosition[0] + *(robotMovePos);
			robotPosition[1] = robotPosition[1] + *(robotMovePos + 1);
			nabrak = false;
		}
		else
		{
			nabrak = true;
		}

		if (robotPosition[0] == 9 && robotPosition[1] == 12)
		{
			finish = true;
		}
		robot->setMovePos(0, 0);
	}
	void printLabirin()
	{

		updateRobotPos();
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 16; j++)
			{

				if (i == robotPosition[0] && j == robotPosition[1])
				{
					cout << "o ";
				}
				else
				{
					if (labirinShape[i][j] == 1)
					{
						cout << "* ";
					}
					else if (labirinShape[i][j] == 0)
					{
						cout << "  ";
					}
				}
			}
			cout << endl;
		}
		cout << "posisi robot x : " << robotPosition[0] << endl;
		cout << "posisi robot y : " << robotPosition[1] << endl;

		if (finish)
		{
			cout << "\nUDAH FINISHH !!!" << endl;
			cout << "Restart kh? (y/N)" << endl;
			char restart;
			cin >> restart;
			if (restart == 'y')
			{
				robotPosition[0] = 0;
				robotPosition[1] = 1;
				finish = false;
			}
			else
			{
				exit(0);
			}
		}
		else if (nabrak)
		{
			cerr << "\nNABRAK COOOO !!!" << endl;
		}
	}
};
