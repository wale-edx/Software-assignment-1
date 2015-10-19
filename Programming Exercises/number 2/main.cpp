#include"iostream"
//#include"waleed.h"
#include"string"
using namespace std;

class Person {

private:
	
	static const int  LIMIT = 25;
	string lname; // Person’s last name
	//string fname;
	char fname[LIMIT]; // Person’s first name

public:

	Person() {lname = ""; fname[0] = '\0'; }              // #1
	Person(const string & ln , const char *fn = "hello"); // #2
	//the following methods display lname and fname
	void Show() const; // firstname lastname format
	void FormalShow() const; // lastname, firstnam	format
	
};
Person::Person(const string & ln, const char *fn ) {

	lname  =  ln   ;
	int len = strlen(fn);
	if (len < (LIMIT - 1)) {
		for (int i = 0;i < len;i++) {
			fname[i] = fn[i];
		}
		fname[strlen(fn)] = '\0';
	}
	else cout << "ERROR";
	
}
void Person::Show() const {
	
	cout << fname << " "<< lname ;
	cout << endl;

}
void Person::FormalShow() const {
	cout << lname << " " << fname;
	cout << endl;

}
void main() {

	cout << "hello world!"<<endl;
	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default	argument
	Person three("Dimwiddy", "Sam"); // use #2, nodefaults
	two.Show();
	three.Show();
	cout << endl;
	//one.FormalShow();

}