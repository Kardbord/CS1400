//Tanner Kvarfordt
//A02052217

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*This program gets the weight of a package and
the distance it is to be shipped. Then it computes
the shipping charges for that package.
*/
int main(){
	const int DISTANCE_UNIT = 500;
	double rate = 0, shippingCost;
	int weight, distance, distanceUnits;

	cout << setprecision(2) << fixed;

	cout << "How much does the package weigh (in Kilograms)? ";
	cin >> weight;

	//add code to verify weight is allowed
	if (weight <= 0) {
		cout << "\nPackages cannot have zero or negative weight.\n"
			"You entered a weight of " << weight << " kg.\n\n";
		return 0;
	}
	else if (weight > 20) {
		cout << "\nSorry, we do not ship packages weighing more than 20 kg."
			"\nYour package weighs " << weight << " kg.\n" << endl << endl;
		return 0;
	}

	cout << "How far will the package be going (in whole miles)? ";
	cin >> distance;

	//add code to verify distance is allowed
	if (distance < 10) {
		cout << "\nSorry, we do not ship packages travelling less than 10 miles.\n"
			"You entered a distance of " << distance << " miles.\n\n";
		return 0;
	}
	else if (distance > 3000) {
		cout << "\nSorry, we do not ship packages travelling more than 3000 miles.\n"
			"You entered a distance of " << distance << " miles.\n\n";
		return 0;
	}


	//add code to gather the name of who the package is being shipped to
	//Be sure to add any header files needed
	string receiver;
	cin.ignore();
	cout << "\nEnter the full name of the person your package is being shipped to:\n";
	getline(cin, receiver);

	//add code to output the name of who the package is being shipped to
	cout << "\nYour package will ship to " << receiver << ".\n";

	distanceUnits = distance / DISTANCE_UNIT;
	if (distance%DISTANCE_UNIT != 0)
		distanceUnits += 1;

	//deteremine rate using if/else if with 
	//complex conditions that use 
	//logical operators to identify ranges
	if (weight <= 2) {
		rate = 1.1;
	}
	else if (weight > 2 && weight <= 6) {
		rate = 2.2;
	}
	else if (weight > 6 && weight <= 10) {
		rate = 3.7;
	}
	else if (weight > 10 && weight <= 20) {
		rate = 4.8;
	}

	shippingCost = distanceUnits * rate;


	cout << "\nUsing logical operators to identify ranges:\n"
		<< "The cost to ship a package that weighs " << weight
		<< " Kilograms\nfor a distance of " << distance
		<< " miles is $" << shippingCost << endl << endl;

	//determine rate using if/else if with simple conditions
	//using order to correctly separate the options
	if (weight <= 2) {
		rate = 1.1;
	}
	else if (weight > 2) {
		if (weight <= 6) {
			rate = 2.2;
		}
		else if (weight <= 10) {
			rate = 3.7;
		}
		else if (weight <= 20) {
			rate = 4.8;
		}
	}



	shippingCost = distanceUnits * rate;


	cout << "Using the order of the if/else if statement:\n"
		<< "The cost to ship a package that weighs " << weight
		<< " Kilograms\nfor a distance of " << distance
		<< " miles is $" << shippingCost << endl << endl;

	return 0;
}