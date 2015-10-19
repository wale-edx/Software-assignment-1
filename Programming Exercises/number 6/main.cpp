#include"iostream"
using namespace std;
class Move
{
private:
	double x;
	double y;
public:

	Move(double a = 0, double b = 0); // sets x, y to a,b
	void Move2(double a , double b ); // sets x, y to a,b

	double Xget();
	double Yget();
	void showmove() const; // shows current x, y values
	Move add(const Move & m) const;
	// this function adds x of m to x of invoking object to get new x,
	// adds y of m to y of invoking object to get new y , creates a new
	// move object initialized to new x, y values and returns it
	void reset(double a = 0, double b = 0); // resets x , y to	a , b
};
	Move::Move(double a , double b ) {
		x = a;
		y = b;
	}
	void Move::Move2(double a, double b) {
		x = a;
		y = b;
	}
	double Move::Xget() {
		return x;
	}
	double Move::Yget() {
		return y;
	}
	Move Move::add(const Move & m) const {
		double temp1, temp2, temp3, temp4;
		Move newobj =m ;
		temp1 = newobj.Xget();
		temp2 = newobj.Yget();
		temp3 = x + temp1;
		temp4 = y + temp2;
		newobj.Move2(temp3,temp4);
		return newobj;
		
	}

	void Move::showmove() const {
		cout << "X : " << x << endl;
		cout << "Y : " << y << endl;
	}
	void Move::reset(double a, double b) {
		x = a;
		y = b;
	}
		
void main() {

	Move one;
	one.showmove();
	Move two(5,6);
	two.showmove();
	one = one.add(two);
	one.showmove();

}