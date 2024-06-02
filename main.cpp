#include <iostream>
#include <vector>
#include "Person.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"
#include "Medicament.h"
#include "Expedient.h"
#include "Appointment.h"

int main() {

  Medicament medicament1("Paracetamol", "500mg c/ 8hr");
  Medicament medicament2("Aspirin", "500mg c/ 6hr");
  vector <Medicament*> medicamentPatient1;
  medicamentPatient1.push_back(&medicament1);
  medicamentPatient1.push_back(&medicament2);

  Appointment appointment1(1, "12/06/20214", "10:00");
  Appointment appointment2(2, "16/06/20214", "11:00");
  vector <Appointment*> appointmentPatient1;
  appointmentPatient1.push_back(&appointment1);
  appointmentPatient1.push_back(&appointment2);
  
  Doctor doctor1("Jonh",  "Morris", 45, "Male", "Pediatrician");
  Nurse nurse1("Jane",  "Doe", 32, "Female");
  Patient patient1("Michelle",  "Jones", 16, "Female", 50, 155, "A+", "Appendicitis", 2, medicamentPatient1, appointmentPatient1);
  Expedient expedient(1,patient1,doctor1,nurse1);
  
  cout << expedient.printInformation();
  
  
  return 0;
  }

