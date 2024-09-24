#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person
{
    public:
        Person() = default;
        // Converting constructor
      explicit Person(int age);
      Person(const string& firstName,const string& lastName);
        ~Person();

        int getAge();
        void setAge(int age);

        string getFirstName();
        void setFirstName(const string& firstName);

        string getLastName();
        void setLastName(const string& lastName);

    private:
        int age;
        string firstName;
        string lastName;
};

#endif // PERSON_H
