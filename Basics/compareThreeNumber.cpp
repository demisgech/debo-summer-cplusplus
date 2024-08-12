#include <iostream>

using namespace std;

int main() {

    double x,y,z;
    cout <<"Enter three different number :";
    cin >>x>>y>>z;

     if(x<y&&x<z)
        cout <<x;
     else if (y<x&&y<z)
        cout <<y;
     else
        cout <<z;
    return 0;
}
