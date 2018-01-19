//Tanner Kvarfordt
//A02052217

/*This program calculates the square footage of a room,
the cost of carpet for the room, and the cost of installing
carpet in the room.*/

#include<iostream>
#include<string> //I use this in zeroOverride
#include<iomanip>
using namespace std;

//Function prototypes
void getInput(int&, int&, double&);
double zeroOverride(); //Threw this one in for fun
double computeArea(int, int);
void computeCosts(double, double, double&, double&);

//Declare any global constants
const double laborRate = 5.75;

int main() {

	//Title
	cout << "\t\t\tCarpet Price Calculator 1000\n\n";

	//Declare necessary variables
	int length, width;
	double price, laborCharge, cost, area; //where price = price per sqr foot and cost = price * area

	//Receive user input
	getInput(length, width, price);

	//Compute the area
	area = computeArea(length, width);

	//Compute installation fees and carpet costs
	computeCosts(area, price, laborCharge, cost);

	//Display output
	cout << setprecision(2) << fixed;
	cout << "Size of room being carpeted: " << area << " square feet\n"
		<< "Cost of new carpet: $" << cost << endl
		<< "Cost to install new carpet: $" << laborCharge << endl << endl;

	return 0;
}

//Receives: nothing
//Returns: length, width, price
void getInput(int & length, int & width, double & price) {

	//Get length from user and validate
	cout << "Please enter the length of the room in whole inches: ";
	cin >> length;
	cout << endl;

	while (length <= 0) {
		cout << "Length must be greater than zero.\n"
			<< "Please input a valid length: ";
		cin >> length;
		cout << endl;
	}

	//Get width from user and validate
	cout << "Please enter the width of the room in whole inches: ";
	cin >> width;
	cout << endl;

	while (width <= 0) {
		cout << "Width must be greater than zero.\n"
			<< "Please input a valid width: ";
		cin >> width;
		cout << endl;
	}

	//Get price per sqrft for carpet and validate
	cout << "Please enter the price per square foot of carpet: $";
	cin >> price;
	cout << endl;

	while (price < 0) {
			cout << "The price must be greater than zero dollars.\n"
				<< "Please enter a valid price: $";
			cin >> price;
			cout << endl;
		}
	if (price == 0) {
		price = zeroOverride();
	}
}

//Receives: nothing
//Returns: price
double zeroOverride() {

	//Declare necessary local variables
	double price;
	string password;

	//Request and validate password
	//Set price = 0 if correct, make user enter new price if incorrect
	cout << "You must enter the manager password to charge zero dollars.\n"
		<< "Please enter the manager password (no spaces): ";
	cin >> password;
	cout << endl;

	if (password == "ShagCarpetRules") {
		cout << "Price per square foot set to $0.00\n\n";
		price = 0;
	}
	else{
		cout << "\aIncorrect password!\n"
			<< "Please enter a price per square foot greater than zero: $";
		cin >> price;
		cout << endl;

		if (price < 0) {
			while (price < 0) {
				cout << "The price must be greater than zero dollars.\n"
					<< "Please enter a valid price: $";
				cin >> price;
				cout << endl;
			}
		}

		if (price == 0){
			zeroOverride();
		}
	}

	return price;
}

//Receives: length, width
//Returns: area
double computeArea(int length, int width) {

	//Declare necessary local variables
	double ftLength, ftWidth, area;

	//Processing
	ftLength = length / static_cast<double>(12);
	ftWidth = width / static_cast<double>(12);
	area = ftLength * ftWidth;

	return area;
}

//Receives: area, price
//Returns: laborCharge, cost
void computeCosts(double area, double price, double & laborCharge, double & cost) {

	//Processing
	laborCharge = laborRate * area;
	cost = price * area;

}