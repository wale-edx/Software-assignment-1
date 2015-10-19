#include <iostream>
#include <cstring>
#include "string"
#include"bank.h"
using namespace std;

bank::bank(string name, string number , double setbalance ) {
	 username = name;
	 accountnumber=number;
	 balance = setbalance;	
}
string bank::getname() {
	return username;

}
string bank::getaccountnumber() {
	return accountnumber;
}
double bank::getbalance() {

	return balance;
}
void bank::displaydata() {

	cout << "name: " << username<<endl;
	cout << "account number : " << accountnumber << endl;
	cout << "Your balance : " << balance << endl;

}
void bank::add(double a) {

	if (a > 0) {

		balance += a;

	}
	else {
		cout << "Invalid value !!" << endl;
	}
}
void bank::withdraw(double a) {
	if (a > 0) {

		balance -= a;

	}
	else {
		cout << "Invalid value !!" << endl;
	}


}
