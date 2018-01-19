//Tanner Kvarfordt
//A02052217

/*This program reads in from a file the average monthly precipitation for eight
years and prints them out to the screen. It also calculates the total precipitation
for the third year, and the total precipitation in May for all of the years.*/

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

//Define global constants
const int YEARS = 8, MONTHS = 12;

//Function prototypes
void readIn(int[], double[][MONTHS]);
void display(const int[], const double[][MONTHS]);

int main() {
	//declare arrays
	int year[YEARS];
	double precip[YEARS][MONTHS];

	//obtain input
	readIn(year, precip);

	//print data to screen
	display(year, precip);

	//compute and display total precipitation for the third year
	double yearThreeTotal = 0;
	for (int col = 0; col < MONTHS; col++) {
		yearThreeTotal += precip[2][col];
	}
	cout << "\nTotal precipitation in " << year[2] << ": " << yearThreeTotal << " inches";

	//compute and display the total precipitation for the month of May over the years
	double mayTotal = 0;
	for (int row = 0; row < YEARS; row++) {
		mayTotal += precip[row][4];
	}
	cout << "\n\nTotal precipitation in the month of May from " << year[0] << " to " << year[YEARS - 1] << ": " << mayTotal;

	cout << endl << endl;
	return 0;
}

//This function reads input into 2 arrays from a file
//Recieves: an array and a 2D array
//Returns: nothing
void readIn(int rowTitle[], double data[][MONTHS]) {
	ifstream fin("rainfall.txt");
	if (fin.fail()) {
		cout << "\aError opening input file. Shutting down...\n";
		exit(0);
	}

	for (int index = 0; index < YEARS; index++) {
		fin >> rowTitle[index];
		for (int col = 0; col < MONTHS; col++) {
			fin >> data[index][col];
		}
	}

	fin.close();
	return;
}

//This function prints out two parallel arrays to the screen
//Receives: an array and a 2D array
//Returns: nothing
void display(const int rowTitle[], const double data[][MONTHS]) {
	const int WIDTH1 = 4, WIDTH2 = 6, PRECISION = 1;
	cout << setw(WIDTH1) << "Year" << setw(WIDTH2) << "Jan" << setw(WIDTH2) << "Feb" << setw(WIDTH2) << "Mar"
		<< setw(WIDTH2) << "Apr" << setw(WIDTH2) << "May" << setw(WIDTH2) << "Jun" << setw(WIDTH2) << "Jul"
		<< setw(WIDTH2) << "Aug" << setw(WIDTH2) << "Sep" << setw(WIDTH2) << "Oct"
		<< setw(WIDTH2) << "Nov" << setw(WIDTH2) << "Dec" << endl << endl;
	for (int index = 0; index < YEARS; index++) {
		cout << setprecision(PRECISION) << fixed << setw(WIDTH1) << rowTitle[index];
		for (int col = 0; col < MONTHS; col++) {
			cout << setw(WIDTH2) << data[index][col];
		}
		cout << endl;
	}
	return;
}