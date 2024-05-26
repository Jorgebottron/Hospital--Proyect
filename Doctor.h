#ifndef DOCTOR
#define DOCTOR
#include "Person.h"
#include <iostream>
using namespace std;

class Doctor:public Person{
  private:
    string specialty;
  public:
    Doctor();
    Doctor(string, string, int, string, string);
    string getSpecialty();
    string printInformation() override;
};

#endif