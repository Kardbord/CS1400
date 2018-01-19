//Tanner Kvarfordt
//A02052217


/*This program recieves the name and interval arrival times from a user and calculates the time between each interval,
average speed of the racer between each interval, and average speed of the racer over the whole course*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {

	//define variables

	string rider;
	const int check1 = 44, check2 = 87, check3 = 128, check4 = 165, check5 = 207; //mile at which each checkpoint is located
	int time1, time2, time3, time4, time5;

	//Receive input

	cout << "Input rider's first name: ";
	cin >> rider;

	cout << "\nInput the time (in whole minutes) that " << rider << " arrived at checkpoint 1: ";
	cin >> time1;

	cout << "Input the time (in whole minutes) that " << rider << " arrived at checkpoint 2: ";
	cin >> time2;

	cout << "Input the time (in whole minutes) that " << rider << " arrived at checkpoint 3: ";
	cin >> time3;

	cout << "Input the time (in whole minutes) that " << rider << " arrived at checkpoint 4: ";
	cin >> time4;

	cout << "Input the time (in whole minutes) that " << rider << " arrived at the finish line: ";
	cin >> time5;

	//define additional variables needed for processing

		//time between each checkpoint
			int interval1 = time1,
				interval2 = time2 - time1,
				interval3 = time3 - time2,
				interval4 = time4 - time3,
				interval5 = time5 - time4;

		//mph calculations
			const int MIN_IN_HOUR = 60;

			int dist1 = check1,			//distance between checkpoints
				dist2 = check2 - check1,
				dist3 = check3 - check2,
				dist4 = check4 - check3,
				dist5 = check5 - check4;

			double mph1 = static_cast<double>(dist1) / interval1 * MIN_IN_HOUR, //average mph over each interval
				mph2 = static_cast<double> (dist2) / interval2 * MIN_IN_HOUR,
				mph3 = static_cast<double>(dist3) / interval3 * MIN_IN_HOUR,
				mph4 = static_cast<double>(dist4) / interval4 * MIN_IN_HOUR,
				mph5 = static_cast<double>(dist5) / interval5 * MIN_IN_HOUR;

			double avgspeed = static_cast<double>(check5) / time5 * 60; // average speed in mph over the entire course

	//display outputs

	cout << "\n\nLOTOJA After Action Review for " << rider << endl << endl;

	cout << "\tInterval Details" << endl << endl;

	const int WIDTH1 = 18, WIDTH2 = 5, WIDTH3 = 14, WIDTH4=12;

	cout << setprecision(3)
		<< fixed
		<< setw(12) << "Location" << setw(14) << "Distance" << setw(11) << "Time" << setw(12) << "Speed" << endl
		<< left << setfill('.') << setw(WIDTH1) << "Interval 1" << setfill(' ') << right << setw(WIDTH2) << dist1 << setw(WIDTH3) << interval1 << setw(WIDTH4) << mph1 << endl
		<< left << setfill('.') << setw(WIDTH1) << "Interval 2" << setfill(' ') << right << setw(WIDTH2) << dist2 << setw(WIDTH3) << interval2 << setw(WIDTH4) << mph2 << endl
		<< left << setfill('.') << setw(WIDTH1) << "Interval 3" << setfill(' ') << right << setw(WIDTH2) << dist3 << setw(WIDTH3) << interval3 << setw(WIDTH4) << mph3 << endl
		<< left << setfill('.') << setw(WIDTH1) << "Interval 4" << setfill(' ') << right << setw(WIDTH2) << dist4 << setw(WIDTH3) << interval4 << setw(WIDTH4) << mph4 << endl
		<< left << setfill('.') << setw(WIDTH1) << "Interval 5" << setfill(' ') << right << setw(WIDTH2) << dist5 << setw(WIDTH3) << interval5 << setw(WIDTH4) << mph5 << endl;

	cout << endl << rider << "'s average speed over the entire course was " << avgspeed << " mph.";

	cout << endl << endl;
	return 0;
}