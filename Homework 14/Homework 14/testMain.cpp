//Updated by Linda DuHadway
//Apr. 7, 2016
#include<iostream>
#include<string>
#include "Date.h"
using namespace std;

//This function tests all the functions in the 
//Date class and all the functions
int main()
{

	//tests the default constructor
	Date goodIntention;

	//tests the get member functions
	cout<<"Test get member functions:\n";
	cout<<"Good intention year  with default constructor: "
		<<goodIntention.getYear()<<endl;
	cout<<"Good intention month with default constructor: "
		<<goodIntention.getMonth()<<endl;
	cout<<"Good intention day with default constructor: "
		<<goodIntention.getDay()<<endl;

	//test the setYear member function
	cout<<"\nTest setYear member function:\n";
	goodIntention.setYear(2012);
	cout<<"Good intention month day year after setyear(2012) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setYear(0);
	cout<<"Good intention month day year after setyear(0) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setYear(-2);
	cout<<"Good intention month day year after setyear(-2) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setYear(3000);
	cout<<"Good intention month day year after setyear(3000) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setYear(3001);
	cout<<"Good intention month day year after setyear(3001) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setYear(1892);
	cout<<"Good intention month day year after setyear(1892) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	
	//test the setMonth member function
	cout<<"\nTest setMonth member function:\n";
	goodIntention.setMonth(4);
	cout<<"Good intention month day year after setMonth(4) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setMonth(1);
	cout<<"Good intention month day year after setMonth(1) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setMonth(3);
	cout<<"Good intention month day year after setMonth(3) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setMonth(14);
	cout<<"Good intention month day year after setMonth(14) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setMonth(8);
	cout<<"Good intention month day year after setMonth(8) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setMonth(-2);
	cout<<"Good intention month day year after setMonth(-2) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setMonth(12);
	cout<<"Good intention month day year after setMonth(12) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setMonth(0);
	cout<<"Good intention month day year after setMonth(0) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;

	//test the setDay member function
	//This tests accuracy of setDay function on 1-4 of the 
	//list in the notes
	cout<<"\nTest setDay member function:\n";
	goodIntention.setMonth(4);
	goodIntention.setYear(2012);
	cout<<"Month is set to 4, Year is set to 2012.\n";
	goodIntention.setDay(14);
	cout<<"Good intention month day year after setDay(14) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setDay(30);
	cout<<"Good intention month day year after setDay(30) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setDay(31);	
	cout<<"Good intention month day year after setDay(31) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setDay(5);	
	cout<<"Good intention month day year after setDay(5) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setDay(-2);	
	cout<<"Good intention month day year after setDay(-2) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setDay(9);	
	cout<<"Good intention month day year after setDay(9) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setDay(45);	
	cout<<"Good intention month day year after setDay(45) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;

	goodIntention.setMonth(7);	
	cout<<"Month is set to 7, Year is set to 2012.\n";
	goodIntention.setDay(31);
	cout<<"Good intention month day year after setDay(31) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setDay(32);
	cout<<"Good intention month day year after setDay(32) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;

	goodIntention.setMonth(2);	
	goodIntention.setYear(2013);	
	cout<<"Month is set to 2, Year is set to 2013.\n";
	goodIntention.setDay(28);
	cout<<"Good intention month day year after setDay(28) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;
	goodIntention.setDay(29);
	cout<<"Good intention month day year after setDay(29) called: "
		<<goodIntention.getMonth()<<" "<<goodIntention.getDay()<<" "
		<<goodIntention.getYear()<<endl;

	//test that setMonth calls the setDay function
	cout<<"\n\nTest that setMonth calls the setDay function:\n";
	Date detailTest;
	detailTest.setMonth(5);
	detailTest.setDay(31);
	detailTest.setYear(2020);
	cout<<"detailTest when defined as (5, 31, 2020): "
		<<detailTest.getMonth()<<" "<<detailTest.getDay()<<" "
		<<detailTest.getYear()<<endl;
	detailTest.setMonth(9);	
	cout<<"detailTest when month is changed to 9: "
		<<detailTest.getMonth()<<" "<<detailTest.getDay()<<" "
		<<detailTest.getYear()<<endl;

	//variable to catch and print date
	string printDate;
	
	//test the getDateShort member function 
	cout << "\nTest getDateShort member function:\n";
	goodIntention.setMonth(4);
	goodIntention.setYear(2012);
	goodIntention.setDay(13);
	cout << "Month is set to 4, Year is set to 2012, Day is set to 13.\n";
	cout << "Good Intention date short: ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setMonth(4);
	goodIntention.setYear(0);
	goodIntention.setDay(13);
	cout << "Month is set to 4, Year is set to 0, Day is set to 13.\n";
	cout << "Good Intention date short: ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	
	//test the getDateLong member function
	cout << "\nTest getDateLong member function:\n";
	goodIntention.setMonth(4);
	goodIntention.setYear(2012);
	goodIntention.setDay(13);
	cout << "Month is set to 4, Year is set to 2012, Day is set to 13.\n";
	cout << "Good Intention date long: ";
	printDate = goodIntention.getDateLong();
	cout << printDate << endl;
	goodIntention.setMonth(4);
	goodIntention.setYear(0);
	goodIntention.setDay(13);
	cout << "Month is set to 4, Year is set to 0, Day is set to 13.\n";
	cout << "Good Intention date long: ";
	printDate = goodIntention.getDateLong();
	cout << printDate << endl;
	
	//test the setDate member function
	cout<<"\nTest setDate member function:\n";
	goodIntention.setDate(3,15,2015);
	cout<<"Good Intention after setDate(3,15,2015): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(2,28,2012);
	cout<<"Good Intention after setDate(2,28,2012): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(2,29,2012);
	cout<<"Good Intention after setDate(2,29,2012): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(2,29,2013);
	cout<<"Good Intention after setDate(2,29,2013): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(2,30,2012);
	cout<<"Good Intention after setDate(2,30,2012): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(2,28,2013);
	cout<<"Good Intention after setDate(2,28,2013): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(7,31,2012);
	cout<<"Good Intention after setDate(7,31,2012): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(7,32,2012);
	cout<<"Good Intention after setDate(7,32,2012): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(7,31,2012);
	cout<<"Good Intention after setDate(7,31,2012): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(7,-2,2012);
	cout<<"Good Intention after setDate(7,-2,2012): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(9,5);
	cout<<"Good Intention after setDate(9,5): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(3,15,2011);
	cout<<"Good Intention after setDate(3,15,2011): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(9,5,0);
	cout<<"Good Intention after setDate(9,5,0): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(9,5,-2);
	cout<<"Good Intention after setDate(9,5,-2): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(9,5,1743);
	cout<<"Good Intention after setDate(9,5,1743): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(9,5,3000);
	cout<<"Good Intention after setDate(9,5,3000): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(9,5,3001);
	cout<<"Good Intention after setDate(9,5,3001): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(9,5,1995);
	cout<<"Good Intention after setDate(9,5,1995): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(15,5,1995);
	cout<<"Good Intention after setDate(15,5,1995): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(9,5,1995);
	cout<<"Good Intention after setDate(9,5,1995): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(-2,5,1995);
	cout<<"Good Intention after setDate(-2,5,1995): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(9,5,3001);
	cout<<"Good Intention after setDate(9,5,3001): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(7,31,2009);
	cout<<"Good Intention after setDate(7,31,2009): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	goodIntention.setDate(6,31,2009);
	cout<<"Good Intention after setDate(6,31,2009): ";
	printDate = goodIntention.getDateShort();
	cout << printDate << endl;
	
	//tests the other constructor	
	cout<<"\nTest constructor that has 3 parameters:\n";
	Date graduation(5, 4, 2013);
	cout<<"graduation after Date graduation(5, 4, 2013); :";
	printDate = graduation.getDateShort();
	cout << printDate << endl;
	
	Date lastDay(12,31);
	cout<<"lastDay after Date lastDay(12,31); :";
	printDate = lastDay.getDateLong();
	cout << printDate << endl;
	Date test1(3,0,2013);
	cout<<"test1 after Date test1(3,0,2013); :";
	printDate = test1.getDateLong();
	cout << printDate << endl;
	Date test2(3,32,2013);
	cout<<"test2 after Date test2(3,32,2013); :";
	printDate = test2.getDateLong();
	cout << printDate << endl;
	Date test3(2,30,2013);
	cout<<"test3 after Date test3(2,30,2013); :";
	printDate = test3.getDateLong();
	cout << printDate << endl;
	Date test4(7,31,2013);
	cout<<"test4 after Date test4(7,31,2013); :";
	printDate = test4.getDateLong();
	cout << printDate << endl;
	Date test5(7,32,2013);
	cout<<"test5 after Date test5(7,32,2013); :";
	printDate = test5.getDateLong();
	cout << printDate << endl;
	Date test6(7,-2,2013);
	cout<<"test6 after Date test6(7,-2,2013); :";
	printDate = test6.getDateLong();
	cout << printDate << endl;
	Date test7(7,31,2012);
	cout<<"test7 after Date test7(7,31,2012); :";
	printDate = test7.getDateLong();
	cout << printDate << endl;	
	Date test8(0,31,2013);
	cout<<"test8 after Date test8(0,31,2013); :";
	printDate = test8.getDateLong();
	cout << printDate << endl;
	Date test9(15,31,2013);
	cout<<"test9 after Date test9(15,31,2013); :";
	printDate = test9.getDateLong();
	cout << printDate << endl;
	Date test10(6,14,3000);
	cout<<"test10 after Date test10(6,14,3000); :";
	printDate = test10.getDateLong();
	cout << printDate << endl;
	Date test11(6,14,3001);
	cout<<"test11 after Date test11(6,14,3001); :";
	printDate = test11.getDateLong();
	cout << printDate << endl;
	Date test12(6,14,0);
	cout<<"test12 after Date test12(6,14,0); :";
	printDate = test12.getDateLong();
	cout << printDate << endl;
	Date test13(6,14);
	cout<<"test13 after Date test13(6,14); :";
	printDate = test13.getDateLong();
	cout << printDate << endl;
	Date test14(-6,14,2011);
	cout<<"test14 after Date test14(-6,14,2011); :";
	printDate = test14.getDateLong();
	cout << printDate << endl;
	
	//create date using two arguments
	Date birthday(4,12);
	cout<<"Birthday: ";
	printDate = birthday.getDateLong();
	cout << printDate << endl;

	Date christmas(12,25);	
	cout<<"Christmas: ";
	printDate = christmas.getDateLong();
	cout << printDate << endl;

	//correct up to here
	
	//Test more accuracy of setDay function
	cout<<"\nMore accurate leap year testing:\n";
	cout<<"Testing year is divisible by 4:\n";
	Date leap1(2,28,2016);
	cout<<"leap1 after Date leap1(2,28,2016); :";
	printDate = leap1.getDateLong();
	cout << printDate << endl;	
	Date leap2(2,29,2016);
	cout<<"leap2 after Date leap2(2,29,2016); :";
	printDate = leap2.getDateLong();
	cout << printDate << endl;
	Date leap3(2,30,2016);
	cout<<"leap3 after Date leap3(2,30,2016); :";
	printDate = leap3.getDateLong();
	cout << printDate << endl;
	Date leap4(2,28,2013);
	cout<<"leap4 after Date leap4(2,28,2013); :";
	printDate = leap4.getDateLong();
	cout << printDate << endl;
	
	Date leap5(2,29,2013);
	cout<<"leap5 after Date leap5(2,29,2013); :";
	printDate = leap5.getDateLong();
	cout << printDate << endl;
	Date leap6(2,30,2013);
	cout<<"leap6 after Date leap5(2,30,2013); :";
	printDate = leap6.getDateLong();
	cout << printDate << endl;
	cout<<"Testing year is divisible by 100 but not divisible by 400:\n";
	leap3.setDay(29);
	leap3.setYear(2000);
	cout<<"leap3 after day is set to 29 and year to 2000 :";
	printDate = leap3.getDateLong();
	cout << printDate << endl;
	
	leap3.setYear(2100);
	cout<<"leap3 after year to 2100:";
	printDate = leap3.getDateLong();
	cout << printDate << endl;
	
	leap3.setYear(1900);
	cout<<"leap3 after year to 1900:";
	printDate = leap3.getDateLong();
	cout << printDate << endl;

	cout<<"\nTesting leap year for 200 years:\n"; 
	for(int year=1849; year<=2048; year++) {
		leap3.setYear(year);
		leap3.setDay(29);
		printDate = leap3.getDateLong();
		cout << printDate;
		cout<<"    ";
		if(year%4 == 0) {
			cout<<endl;
		}
	}
	
	//test that setYear calls the setDay function
	cout<<"\n\nTest that setYear calls the setDay function:\n";
	detailTest.setDay(29);
	detailTest.setMonth(2);
	cout<<"detailTest when day is set to 29 and month is set to 2: ";
	printDate = detailTest.getDateShort();
	cout << printDate << endl;

	detailTest.setYear(2018);	
	cout<<"detailTest when year is set to 2018: ";
	printDate = detailTest.getDateShort();
	cout << printDate << endl;

	//entire program tested and is correct
	return 0;
}
