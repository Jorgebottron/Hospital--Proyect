#ifndef EXPEDIENT
#define EXPEDIENT
#include "Doctor.h"
#include "Nurse.h"
#include <iostream>
using namespace std;


class Expedient{
  private:
    int noExpedient;
    vector <Doctor*> doctor;
    vector <Nurse*> nurse;

  public:
    Expedient();
    Expedient(int, vector<Doctor*>, vector<Nurse*>);
    int getNoExpedient();
    string printInformation();
    
};


#endif