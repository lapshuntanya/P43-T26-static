#pragma once
#include <string>
#include <iostream>
using namespace std;

class CarNumber
{
	string number;

	static int counter;
	static char first;
	static char second;
public:
	CarNumber(string region);

	string getNumber()const;
	static void showStatic();
};

