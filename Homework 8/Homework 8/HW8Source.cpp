//Tanner Kvarfordt
//A02052217

//This program calculates the cost of a group's choice of activity
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {

	//Welcome
	cout << "\t\t\tWelcome to your local fun house!\n\n";

	//Create necessary variables
	int partySize;
	int choice; //choice will be used to store a selection number in a menu
	double rate, totalFee; //rate is the dollar amount per individual for an activity
	string game; //game is the name of the activity that the user selects

	//Obtain and store group size
	cout << "Please enter the number of people in your party: ";
	cin >> partySize;
	while (partySize < 1) {
		cout << "\nPlease enter a party size greater than zero: ";
		cin >> partySize;
	}

	//Create Menu
	cout << endl << "Here are your options for entertainment!\n\n"
		"1. Laser Tag\n"
		"2. Bowling\n"
		"3. Ice Skating\n"
		"4. Rock Climbing\n\n"
		"Please enter the number of your selection: ";
	cin >> choice;
	while (choice != 1 && choice != 2 && choice != 3 && choice != 4) { //thought maybe this would defend against non-integers/non-digits. I was wrong. :(
		cout << "\nPlease enter a valid selection number: ";
		cin >> choice;
	}
	if (choice == 1) {
		rate = 18.75, game = "Laser Tag";
		cout << endl << endl << "You have selected Laser Tag!\n";
	}
	else if (choice == 2) {
		rate = 6.5, game = "Bowling";
		cout << endl << endl << "You have selected Bowling!\n";
	}
	else if (choice == 3) {
		rate = 8.25, game = "Ice Skating";
		cout << endl << endl << "You have selected Ice Skating!\n";
	}
	else if (choice == 4) {
		rate = 16.5, game = "Rock Climbing";
		cout << endl << endl << "You have selected Rock Climbing!\n";
	}

	//Processing
	totalFee = rate * partySize;

	//Final output
	cout << setprecision(2) << fixed;
	cout << "It will cost $" << totalFee << " for all " << partySize << " of you to participate in " << game << ".";

	cout << endl << endl << endl;
	return 0;
}