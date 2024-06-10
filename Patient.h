#ifndef PATIENT
#define PATIENT

#include "Person.h"
#include "Medicament.h"
#include "Appointment.h"
#include "Expedient.h"
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
    vector <Medicament*> medicament;
    vector <Appointment*> appointment;
    Expedient expedient;
  public:
    Patient();
    Patient(string, string, int, string, float, float, string, string, int, vector<Medicament*>, vector <Appointment*>, Expedient);
    float getWeight();
    float getHeight();
    string getBloodType();
    string getIllness();
    int getRoom(); 
    int getNumMedicament();
    string printAppointments();
    vector <Appointment*> getAppointment();
    void addAppointment(Appointment*);

    string printInformation() override;
};

#endif