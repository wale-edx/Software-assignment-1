
#include <iostream>
#include <cstring>
#include "string"
#include"bank.h"
using namespace std;


/*
constructor called in this case copy constructor
void B(bank x){
cout<<"hello";
}

void B(bank x) {
	cout << "hello";
}*/
int main()
{
	cout << "Welcome"<<endl;
	bank waleed("waleed", "01005711010", 1000.0);
	B(waleed);
	
	waleed.displaydata();
	waleed.add(500.00);
	waleed.displaydata();
	waleed.withdraw(120.0);
	waleed.displaydata();
}
