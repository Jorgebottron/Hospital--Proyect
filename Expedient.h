#ifndef EXPEDIENT
#define EXPEDIENT
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"
#include "Medicament.h"
#include "Hospital.h"
#include <iostream>
using namespace std;


class Expedient{
  private:
    int noExpedient;
    Hospital hospital;
    Patient patient;
  
  public:
    Expedient();
    Expedient(int, Hospital);
    int getNoExpedient();
    string printInformation();
};

#endif