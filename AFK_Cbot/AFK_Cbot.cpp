// AFK_Cbot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "CBot/release/cbot.h"
#include<Windows.h>
#include <string>
#include <cstdio>


using namespace std;

void stealth() {
	HWND stealth;
	AllocConsole();
	stealth = FindWindowA("ConsoleWindowClass", NULL);
	if (stealth)
	{
		//cout << "Find AFK_Cbot" << endl;
		printf("Find ConsoleWindowClass");
	}
	else {
		//cout << "Couldn't Find AFK_Cbot" << endl;
		printf("Couldn't Find ConsoleWindowClass");

	}
	ShowWindow(stealth, 0);
}

int askForTime() {
	int output;
	cout << "Time to kick you: ";
	cin >> output;
	if (output < 5) {
		output = 5;
	}
	return 5;
}

int main(int argc, char** argv)
{
	if (argc > 2 && string(argv[2]) == "-silence")
	{
		stealth();
	}

	int time;
	if (argc > 1) {
		if (string(argv[1]) == "-silence") {
			cout << "Bad argument Syntex: [appname.exe] [time](optional)" << endl;
			return 0;
		}
		time = atoi(argv[1]);
	}
	else {
		time = askForTime();
	}

	time = time * 1000;

	CBot cbot;
	cbot.wait(1);
	while (true) {
		while (cbot.isAfk(time) != true){
			cout << "isAFK for " << time << "seconds" << endl;
		}
	}

	return 0;
}

