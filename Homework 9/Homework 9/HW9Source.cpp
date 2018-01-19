//Tanner Kvarfordt
//A02052217

/*This program gathers monthly precipitation info from a file,
computes the total annual rainfall for each weather station,
and prints the new info to .txt file in the form of a report.*/

#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

int main() {
	//create necessary variables
	string weatherStation;
	int elevation;
	double precip;
	double totalPrecip; 

	//create input file variable and link it to our file
	ifstream inputFile;
	inputFile.open("monthlyPrecipitation.txt");
	if (inputFile.fail()) {
		cout << "Error opening monthlyPrecipitation.txt\n\n";
		return 1;
	}

	//create output file variable and use it to create an output file
	ofstream outputFile;
	outputFile.open("annualPrecipitation.txt");

	//format outputFile to be an organized report
	const int WIDTH1 = 25, WIDTH3 = 19;
	int width2 = 14; //didn't make this a constant b/c I change it later for formatting purposes
	outputFile << "\t\t\t\tAnnual Precipitation Report\n\n";
	outputFile << setw(WIDTH1) << left << "Weather Station" << right << setw(width2) << "Elevation" << setw(WIDTH3) << "Precipitation" << endl;

	//create for loop to gather info from all 78 stations
	for (int station = 1; station <= 78; station++) {

		totalPrecip = 0; //resetting totalPrecip to 0 for addition
		
		//obtain and display weather station name
		getline(inputFile, weatherStation, '\t');
		outputFile << left << setw(WIDTH1) << weatherStation << right; 

		//obtain and display weather station elevation
		inputFile >> elevation;
		outputFile << setw(width2) << elevation;

		//nested for loop to gather monthly precipitation from each station
		for (int month = 1; month <= 12; month++) {
			inputFile >> precip;
			totalPrecip += precip;
		}
		outputFile << setw(WIDTH3) << totalPrecip << endl;
		inputFile.ignore();
	}
	inputFile.close();
	outputFile.close();

	cout << "Program Complete!";
	cout << endl << endl;
	return 0;
}