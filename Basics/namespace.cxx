#include <iostream>
#include <cmath>
using namespace std;

namespace Math {
	void sin(double x) {
		cout << "x = " << x << endl;
	}
	
	void cos(double x) {
		cout << "x = " << x << endl;
	}
}

string username = "@outername";
namespace Messaging {
	string username;
	void greet(const string& post) {
		
		cout << ::username << endl;
		cout << post << endl;
		cout << username << endl;
	}
}

int main(int argc, char** argv){
	/*
	int numbers[] = {1,2,3,4,5};
	for(int number: numbers)
		cout << number << endl;
	*/
	
	//using namespace Messaging;
	
	Math::sin(90);
	Math::cos(90);
	
	Messaging::username = "@demisgech";
	Messaging::greet("Hey everybody how are you doing?");
	return 0;
}