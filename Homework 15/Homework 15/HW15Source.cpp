//Tanner Kvarfordt
//A02052217

/*This program reads the population and name of all fifty states plus the District of Columbia
and prints them to the screen. It also prints the total population, the name and population
of the state with the largest population, the name and state of the population with the smallest
population, and the average population of the nation.*/

#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

int main() {

	ifstream fin("statePopulation.txt");
	if (fin.fail()) {
		cout << "\aError opening input file!" << endl;
		return 1;
	}

	const int SIZE = 51;
	int population[SIZE];
	string state[SIZE];

	for (int index = 0; index < SIZE; index++) {
		fin >> population[index];
		getline(fin, state[index]);
	}

	for (int index = 0; index < SIZE; index++) {
		if (state[index] == " District of Columbia") {
			cout << "District of Columbia" << endl
				<< "Population: " << population[index] << endl << endl;
		}
		else {
			cout << "State:" << state[index] << endl
				<< "Population: " << population[index] << endl << endl;
		}
	}

	//calculate and display total population
	int totalPop = 0;
	for (int index = 0; index < SIZE; index++) {
		totalPop += population[index];
	}
	cout << "Total Population: " << totalPop << endl << endl;

	//calculate and display the state with the largest population
	int largest = population[0];
	string largeState;
	for (int index = 0; index < SIZE; index++) {
		if (population[index] >= largest) {
			largest = population[index];
			largeState = state[index];
		}
	}
	cout << "Most Populated State:" << largeState << endl
		<< "Population: " << largest << endl << endl;

	//calculate and display the state with the smallest population
	int smallest = population[0];
	string smallState;
	for (int index = 0; index < SIZE; index++) {
		if (population[index] <= smallest) {
			smallest = population[index];
			smallState = state[index];
		}
	}
	cout << "Least Populated State:" << smallState << endl
		<< "Population: " << smallest << endl << endl;

	//calculate and display the average population
	double avgPop = static_cast<double>(totalPop) / SIZE;
	cout << "Average State Population: " << fixed << setprecision(2) << avgPop << endl << endl;

	fin.close();

	return 0;
}