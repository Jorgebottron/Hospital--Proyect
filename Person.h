#ifndef PERSONAL
#define PERSONAL
#include <iostream>
using namespace std;

class Person{
  protected:
    string name;
    string lastName;
    int age;
    string sex;
  public:
    Person();
    Person(string, string, int, string);
    string getName();
    string getLastName();
    int getAge();
    string getSex();
    virtual string printInformation() = 0;
};

#endif