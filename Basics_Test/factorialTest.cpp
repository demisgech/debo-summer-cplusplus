#include <iostream>
using namespace std;

int factorial(int numberLimit) {

    if(numberLimit < 0)
        return numberLimit;

    else {
        int fact = 1;
        if (numberLimit == 1 || numberLimit == 0)
            fact = 1;
        else
            for (int i = 2; i <= numberLimit; i++)
                fact *= i;
        return fact;
    }
}

int main()
{
    cout << "Number: ";
    int number;
    cin >> number;
    int fact = factorial(number);
    cout << number << "! = " << fact << endl;
    return 0;
}

