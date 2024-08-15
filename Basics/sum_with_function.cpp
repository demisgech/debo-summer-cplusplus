#include <iostream>

using namespace std;

int sum(int x) {
    int sum = 0;
    for(int i = 1; i <= x; i++)
        sum += i;
    return sum;
}

int evenSum(int x) {
    int sum = 0;
    for(int i = 1; i <= x; i++)
        if(i % 2 == 0)
            sum += i;
    return sum;
}

int oddSum(int x) {
    int sum = 0;
    for(int i = 1; i <= x; i++)
        if(i % 2 == 1)
            sum += i;
    return sum;
}


int main() {
    int s = sum(1000);
    cout << "Sum = " << s << endl;

    int e_sum = evenSum(100);
    cout << "Even sum = " << e_sum << endl;

    int o_sum = oddSum(100);
    cout << "Odd sum = " << o_sum << endl;
    return 0;
}
