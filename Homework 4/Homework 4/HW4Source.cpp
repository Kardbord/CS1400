//Tanner Kvarfordt
//A02052217

//This program will calculate the average of 6 test scores provided by a user

#include<iostream>
using namespace std;

int main() {

	//welcome
	cout << "\t\t Welcome to Average Test Score Calculator 1000\n\n"
		"\tSuck at doing math? Odds are your test scores reflect that, but we\n"
		"\there at ATSC take the difficulty out of finding out just how badly\n"
		"\tyou did on average! Just give us six of your scores, and we'll\n"
		"\taverage them for you!" << endl << endl << endl;

	//define variables
	const int NUM_SCORES = 6;
	int score1, score2, score3, score4, score5, score6;
	double avgscore;

	//Recieve input from user
	cout << "Please input your scores, rounded to the nearest whole number, and press enter\nafter each entry\n\n"
		"Score 1: ";
	cin >> score1;

	cout << "Score 2: ";
	cin >> score2;

	cout << "Score 3: ";
	cin >> score3;

	cout << "Score 4: ";
	cin >> score4;

	cout << "Score 5: ";
	cin >> score5;

	cout << "Score 6: ";
	cin >> score6;

	//calculate and display average
	avgscore = (score1 + score2 + score3 + score4 + score5 + score6) / static_cast<double>(NUM_SCORES); //fix to create real division

	cout << endl << "Your average test score (out of " << NUM_SCORES << " tests) was " << avgscore;
		
	cout << endl << endl << endl;
	return 0;
}