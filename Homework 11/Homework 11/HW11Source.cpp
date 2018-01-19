//Tanner Kvarfordt
//A02052217

//This program prints out a range of multiplication tables determined by the user

#include<iostream>
#include<iomanip>
using namespace std;

//function prototype(s)
void printTable(int);

int main() {

	//declare necessary variables
	int startTable, endTable;

	//title
	cout << "\t\t\tMultiplication Tables\n\n";

	//obtain and verify user input
	cout << "Please enter the range of multiplication tables you want.\n\n"
		<< "First table (enter an integer): ";

	cin >> startTable;

	cout << "Last table (enter an integer): ";
	cin >> endTable;
	cout << endl;

	while (endTable < startTable) {
		cout << "\aError! Last table must be greater than or equal to first table (" << startTable << "). \n"
			<< "Please enter a valid integer for last table: ";
		
		cin >> endTable;
		
		cout << endl;
	}

	//loop to produce all desired tables
	for (startTable; startTable <= endTable; startTable++) {

		printTable(startTable);
		cout << endl;
	}


	cout << endl << endl;
	return 0;
}


void printTable(int multiplier) {

	int result, width;

	//format output
	if (multiplier * 12 >= 100000 || multiplier * 12 <= -100000) {
		width = 6;
		if (multiplier * 12 <= -100000) {
			width = 7;
		}
	}
	else if (multiplier * 12 >= 10000 || multiplier * 12 <= -1000) {
		width = 5;
		if (multiplier * 12 <= -10000) {
			width = 6;
		}
	}
	else if (multiplier * 12 >= 1000 || multiplier * 12 <= -1000) {
		width = 4;
		if (multiplier * 12 <= -1000) {
			width = 5;
		}
	}
	else if (multiplier * 12 >= 100 || multiplier * 12 <= -100) {
		width = 3;
		if (multiplier * 12 <= -100) {
			width = 4;
		}
	}
	else if (multiplier * 12 >= 10 || multiplier * 12 <= -10) {
		width = 2;
		if (multiplier * 12 <= -10) {
			width = 3;
		}
	}
	else {
		width = 1;
		if (multiplier * 12 <= -1) {
			width = 2;
		}
	}

	//output
	cout << "The multiplication table for " << multiplier << endl;

	for (int count = 0; count <= 12; count++) {

		result = multiplier * count;

		cout << multiplier << " x " << setw(2) << right << count << " = " << setw(width) << result << endl;
	}

	return;
}