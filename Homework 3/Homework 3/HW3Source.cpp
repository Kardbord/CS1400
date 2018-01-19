/* 
Tanner Kvarfordt
A02052217 
Homework 3
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	//assign variables
	unsigned int passengers = 115, vans, van_size = 14, remaining_seats;
	double fare=12.50, tax=0.0675, fares_tot, tax_tot, total;

	//calculate unknowns
	vans = (passengers / van_size) + 1; 
	remaining_seats = van_size - (passengers % van_size);
	fares_tot = passengers * fare;
	tax_tot = tax * fares_tot; 
	total = tax_tot + fares_tot;

	//output
	cout << "Number of passengers: " << passengers << endl << endl;
	cout << "Vans needed: " << vans << endl << endl;
	cout << "Seats left available: " << remaining_seats << endl << endl;
	cout << "Fare before tax: $" << fares_tot << endl << endl;
	cout << "Total sales tax: $" << tax_tot << endl << endl;
	cout << "Total cost: $" << total << endl << endl;

	return 0;
}