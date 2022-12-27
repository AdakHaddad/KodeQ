// Created by Fadhilah R.F.
// Github : https://github.com/Fadhilah16
// IG : fadhilahrizki

// Restart option added by Muhammad M.A.
// IG : muqtadaalhaddad

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
