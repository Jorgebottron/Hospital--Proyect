#ifndef EXPEDIENT
#define EXPEDIENT
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"
#include <iostream>
using namespace std;


class Expedient{
  private:
    int noExpedient;
    Patient patient;
    Doctor doctor;
    Nurse nurse;

  public:
    Expedient();
    Expedient(int, Patient, Doctor, Nurse);
    int getNoExpedient();
    string printInformation();
};


#endif