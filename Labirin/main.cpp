// created by Fadhilah R.F.
// github : https://github.com/Fadhilah16
// ig : fadhilahrizki

#include <iostream>
#include <conio.h>
#include "Labirin.h"
using namespace std;

void play()
{

	Robot *robot = new Robot("alfa");
	Labirin *labirin = new Labirin(robot);
	int move = 0;
	while (true)
	{
		labirin->printLabirin();
		move = getch();
		robot->checkMove(move);
	}
}

int main()
{
	play();

	return 0;
}
