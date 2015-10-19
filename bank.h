#ifndef bankaccount_H
#define bankaccount_H

	#include <iostream>
	#include <cstring>
	#include "string"
	using namespace std;

class bank {
private:
	string username;
	string accountnumber;
	double balance;

public:
	bank(string name , string number = "unset", double setbalance = 0);
	string getname();
	string getaccountnumber();
	double getbalance();
	void displaydata();
	void add(double a);
	void withdraw(double a);

};


#endif
