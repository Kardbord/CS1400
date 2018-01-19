//Tanner Kvarfordt
//A02052217

/*This program creates and tests a class called Car which has parameters for make, model, and current speed */

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	//member variable declarations
	int year, speed;
	string make;
public:
	//This is the default constructor.
	//It sets make to Model T, year to 1908, and speed to 0
	Car();

	//This is a constructor. It set year and make to the values sent, and speed to 0.
	Car(int, string);

	//This function sets the year of the car to the value sen
	//If the value sent is not between 1900 and 2030, year is set to 2013
	void setYear(int);

	//This function sets the make of the car to the value sent
	void setMake(string);

	//This function sets the speed of the car to the value sent
	//If the value sent is less than zero, speed is set to 0
	void setSpeed(int);

	//This function returns year
	int getYear() { return year; }

	//This function returns make
	string getMake() {	return make; }

	//This function returns speed
	int getSpeed() { return speed; }

	//This function adds five to speed
	void accelerate();

	//This function subtracts five from speed
	void brake();

};


void Car::setYear(int newYear) {
	if (newYear >= 1900 && newYear <= 2030) {
		year = newYear;
	}
	else {
		year = 2013;
	}
}


void Car::setMake(string newMake) {
	make = newMake;
}


void Car::setSpeed(int newSpeed) {
	if (newSpeed >= 0) {
		speed = newSpeed;
	}
	else{
		speed = 0;
	}
}

void Car::accelerate() {
	speed = getSpeed() + 5;
}


void Car::brake() {
	speed = getSpeed() - 5;
	
	if (speed < 0) {
		speed = 0;
	}
}


Car::Car(int aYear, string aMake) {
	setYear(aYear);
	setMake(aMake);
	setSpeed(0);
}


Car::Car() {
	setMake("Model T");
	setYear(1908);
	setSpeed(0);
}

int main() {
	Car car1;

	//car1 accelerating
	car1.accelerate();
	cout << "Current speed: " << car1.getSpeed() << " mph.\n";
	car1.accelerate();
	cout << "Current speed: " << car1.getSpeed() << " mph.\n";
	car1.accelerate();
	cout << "Current speed: " << car1.getSpeed() << " mph.\n";
	car1.accelerate();
	cout << "Current speed: " << car1.getSpeed() << " mph.\n";
	car1.accelerate();
	cout << "Current speed: " << car1.getSpeed() << " mph.\n\n";
	
	//car1 decelerating
	car1.brake();
	cout << "Model: " << car1.getMake() << endl;
	cout << "Year: " << car1.getYear() << endl;
	cout << "Current speed: " << car1.getSpeed() << " mph\n\n";
	car1.brake();
	cout << "Model: " << car1.getMake() << endl;
	cout << "Year: " << car1.getYear() << endl;
	cout << "Current speed: " << car1.getSpeed() << " mph\n\n";
	car1.brake();
	cout << "Model: " << car1.getMake() << endl;
	cout << "Year: " << car1.getYear() << endl;
	cout << "Current speed: " << car1.getSpeed() << " mph\n\n";
	car1.brake();
	cout << "Model: " << car1.getMake() << endl;
	cout << "Year: " << car1.getYear() << endl;
	cout << "Current speed: " << car1.getSpeed() << " mph\n\n";
	car1.brake();
	cout << "Model: " << car1.getMake() << endl;
	cout << "Year: " << car1.getYear() << endl;
	cout << "Current speed: " << car1.getSpeed() << " mph\n\n";
	car1.brake();
	cout << "Model: " << car1.getMake() << endl;
	cout << "Year: " << car1.getYear() << endl;
	cout << "Current speed: " << car1.getSpeed() << " mph\n\n";
	car1.brake();
	cout << "Model: " << car1.getMake() << endl;
	cout << "Year: " << car1.getYear() << endl;
	cout << "Current speed: " << car1.getSpeed() << " mph\n\n";

	//car1 redefined
	car1.setMake("Jeep");
	car1.setSpeed(75);
	car1.setYear(2009);
	cout << "Model: " << car1.getMake() << endl;
	cout << "Year: " << car1.getYear() << endl;
	cout << "Current speed: " << car1.getSpeed() << " mph\n\n";

	//New Car
	Car car2(1827, "Jetta");
	car2.setSpeed(-30);

	cout << "Model: " << car2.getMake() << endl;
	cout << "Year: " << car2.getYear() << endl;
	cout << "Current speed: " << car2.getSpeed() << " mph\n\n";

	return 0;
}