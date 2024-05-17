/*Author: Francisco Bumanglag
Project: Distance Traveled
Assignment: Module 7 Project 5
Course: C++ Santa Ana College
Class: CMPR120 Dr. Tahir Aziz
Date: March 30, 2024*/

#include <iostream>

using namespace std;

int main()

{
	//declare variables 
	int speed;
	int hours; 

	//dispaly message to user & user enters MPH of vehicle
	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed; 

	//check for negative number
	while (speed < 0) {
		cout << "Invalid input. Please enter a non-negative number for speed: ";
		cin >> speed;
	}

	//display message to user & user enters the # of hrs traveled
	cout << "How many hours has it traveled? ";
	cin >> hours;

	//check for hours less than 1
	while (hours < 1) {
		cout << "Invalid input. Please enter a number greater than 0 for hours: ";
		cin >> hours;
	}

	//display the header and output 
	cout << endl <<  "Hour   Distance Traveled\n------------------------\n";

	//create loop and calculate the hours and distance traveled
		for (int hour = 1; hour <= hours; hour++)
		{
			int distance = speed * hour;
			cout << " " << hour << "          " << distance << endl;

		}

	system("pause");  

}

