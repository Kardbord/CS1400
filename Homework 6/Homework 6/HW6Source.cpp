//Tanner Kvarfordt
//A02052217

#include<iostream>
#include<string>
#include<ctime>
using namespace std;


//This program will "forecast" the snowfall over the weekend at any given resort based on a range provided by the user
//It doesn't really forecast anything. I feel like it's obvious but should also be pointed out.
//All it does is generate random numbers within a range
int main() {

	//welcome
	cout << "This program will forecast* the amount of snowfall this weekend\nat any given resort based on a range you provide.\n\n\n";

	// define variables
	string resort;
	int seed, max, min,
		fri_snow, sat_snow, sun_snow;

	// receive input from user
	cout << "Input in inches the minimum amount of snow that will fall in one day: ";
	cin >> min;
	cout << "Input in inches the maximum amount of snow that will fall in one day: ";
	cin >> max;

	if (max < min || max < 0 || min < 0) {
		cout << "\n\nThe maximum possible snowfall entered is less than the minimum\npossible snowfall entered"
			" or one of the numbers was negative.\n\nNo snowfall reported.\n\n";
		return 1;
	}

	cout << "Please enter the name of the resort (do not include spaces): "; //left it in because I already had it written
	cin >> resort;
	
	//processing
	
	seed = static_cast<int>(time(0));
	srand(seed);
	fri_snow = rand() % (max - min) + min;
	sat_snow = rand() % (max - min) + min;
	sun_snow = rand() % (max - min) + min;
	
	//display outputs
	cout << "\nThe forecast for snowfall at " << resort << " this weekend:\n\n"
		<< "Friday: " << fri_snow << " inches\n"
		<< "Saturday: " << sat_snow << " inches\n"
		<< "Sunday: " << sun_snow << " inches\n\n"
		<< "Happy Skiing!\n\n\n"
		<< "*forecast not guaranteed or even likely to be accurate.";

	cout << endl << endl;
	return 0;
}