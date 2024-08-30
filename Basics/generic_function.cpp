#include <iostream>

using namespace std;

// Generic programming


template<typename T> T largest(T x,T y) {
		return x >y ? x: y;
}

template<typename T> class Point{
	private:
		T x;
   public:
   	Point(T x) {
		   this->x = x;
	   }
};


/*
double largest(double x,double y) {
	return x > y ? x : y;
}

int largest(int x, int y) {
	return x >y ? x: y;
}

char largest(char x, char y) {
		return x >y ? x: y;
}
*/

int main() {

	Point<double> point1(90.9);

	double large = largest<double>(12.1,13.0);
	cout << large << endl;


	int l = largest<int>(10,9);
	cout << l << endl;

	char c = largest<char>('A','B');
	cout << c;

	return 0;
}
