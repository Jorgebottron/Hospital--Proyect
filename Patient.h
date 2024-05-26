#ifndef PATIENT
#define PATIENT
#include "Person.h"
#include "Medicament.h"
#include <iostream>
#include <vector>
using namespace std;

class Patient:public Person{
  private:
    float weight;
    float height;
    string bloodType;
    string illness;
    int room;
    Medicament medicament;
  public:
    Patient();
    Patient(string, string, int, string, float, float, string, string, int, Medicament);
    float getWeight();
    float getHeight();
    string getBloodType();
    string getIllness();
    int getRoom();    
    string printInformation() override;
};

#endif