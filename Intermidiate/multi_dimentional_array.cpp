#include <iostream>
#include <cstdlib>

 using namespace std;

int main() {

	int numbers[3][2] = {{12,45},{34,54},{67,68}};
	cout << numbers[1][0] << endl;
	for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++)
		 cout << numbers[i][j]  << " ";
        cout << endl;
	}

	int threeD[2][2][3] =
        {
            {
                {12,35,46},
                {23,43,56}
            },
	        {
	            {32,34,54},
	            {13,14,15}
            }
	    };

	    for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                for(int k = 0; k < 3; k++)
                    cout << threeD[i][j][k] << endl;
            }
	    }

    return 0;

}

