/*
Final is in regular classroom, Wednesday May 4th 11:30
*/

//including everything I can remember here for study purposes, not necessarily for coding purposes
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;

int main() {

	//fun random number stuff
	int num, seed;
	num = rand();
	cout << "Unseeded rand: " << num;
	
	seed = static_cast<int>(time(0));
	srand(seed);
	num = rand();
	cout << "\n\nRandom Number Based on ctime: " << num;

	num = (5 % 11) + 70; //(rand() % amtofnumsinrange) + shifttodesiredrange
	cout << "\n\nRandom number between 70 and 80 inclusive: " << num;

	cout << endl << endl;
	return 0;
}