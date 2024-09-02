#include <iostream>
using namespace std;

enum FileFormat:char {
    Pdf = 'A',
    Doc,
    Ppt,
};

enum Size {
    small = 1,
    medium = 2,
    large = 3,
};

// strongly typed enum
enum class ScreenSize {
    small = 1,
    medium = 2,
    large = 3,
};
int main() {
    const char format = 'A';
    if(format == FileFormat::Pdf)
        cout << "pdf format...";
    else if(format == FileFormat::Doc)
        cout << "doc format...";

    const int medium = Size::medium;
    cout << medium << endl;
    return 0;
}
