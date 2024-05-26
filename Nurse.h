#ifndef NURSE
#define NURSE
#include "Person.h"
#include <iostream>
using namespace std;

class Nurse:public Person{
  public:
    Nurse();
    Nurse(string, string, int, string);
    string printInformation() override;
};

#endif