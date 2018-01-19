//Tanner Kvarfordt
//A02052217

/*This program uses input from a file to display the average high and low temperatures
over however many days are included in the file. It will also display how many days are
in the file and the number of days that the temperature was below 32 degrees Fahrenheit.*/

#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main() {

	//create input file variable and link it to weather.txt
	ifstream inputFile;
	inputFile.open("weather.txt");
	if (inputFile.fail()) {
		cout << "\aError opening weather.txt\n\n";
		return 1;
	}

	//declare any other necessary variables
	int entry = 0;
	int days = 0; //this will be our counter variable for number of days
	int coldDays = 0; //another counter variable for days below freezing
	double highTemp = 0, lowTemp = 0; //individual temps for each day
	double highTemps = 0, lowTemps = 0; //running totals of high and low temps
	double avgHighTemps, avgLowTemps;
	string day; //using this to read past the day of the week in the input file and check that weather.txt is formatted correctly

	//use a while loop to gather data from weather.txt
	while (inputFile >> day) {

		entry++;

		//check that we are reading days of the week
		if (day == "Saturday" || day == "saturday"
			|| day == "Sunday" || day == "sunday"
			|| day == "Monday" || day == "monday"
			|| day == "Tuesday" || day == "tuesday"
			|| day == "Wednesday" || day == "wednesday"
			|| day == "Thursday" || day == "thursday"
			|| day == "Friday" || day == "friday") {

			inputFile >> highTemp;
			inputFile >> lowTemp;

			//check that the high temp is greater than the low temp
			if (highTemp < lowTemp) {
				cout << "\aWarning! weather.txt is not formatted correctly.\n"
					"High and low temperatures are reversed for entry number " << entry << ". \n"
					"Entry number " << entry << " will be skipped.\n\n";
			}
			else {
				days++;

				highTemps += highTemp;

				lowTemps += lowTemp;

				//if statement to test for temperatures below freezing
				if (highTemp <= 32 || lowTemp <= 32) {
					coldDays++;
				}
			}
		}
		else {
			cout << "\aWarning! weather.txt is not formatted correctly.\n"
				"Entry number " << entry << " is not a valid day (" << day << ") and will be skipped.\n\n";

		}
	}

	//close the file
	inputFile.close();

	//processing to get the average high and low temps
	avgHighTemps = highTemps / days;
	avgLowTemps = lowTemps / days;

	//display output
	cout << "Total number of days: " << days << endl;
	cout << "Total number of days below freezing: " << coldDays << endl;
	cout << setprecision(2) << fixed;
	cout << "Average low temperature: " << avgLowTemps << " degrees Fahrenheit." << endl;
	cout << "Average high temperature: " << avgHighTemps << " degrees Fahrenheit." << endl;

	cout << endl << endl;
	return 0;
}