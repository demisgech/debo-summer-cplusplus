#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
    public:
        Student() = default;
        Student(const string& firstName,const string& lastName);

        string getFirstName();
        void setFirstName(const string& firstName);

        string getLastName();
        void setLastName(const string& lastName);
    private:
        string firstName;
        string lastName;
};

#endif // STUDENT_H
