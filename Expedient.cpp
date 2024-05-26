#include "Expedient.h"
#include <vector>

Expedient::Expedient(){
  noExpedient = 0;
}

Expedient::Expedient(int aNoExpedient, Hospital aHospital){
  noExpedient = aNoExpedient;
  hospital = aHospital;
}

int Expedient::getNoExpedient(){
  return noExpedient;
}

string Expedient::printInformation(){
  Doctor doctor("Jonh",  "Morris", 45, "Male", "Pediatrician");
  Nurse nurse("Jane",  "Doe", 32, "Female");
  Patient patient("Michelle",  "Jones", 16, "Female", 50, 155, "A+", "Appendicitis", 2, Medicament("Paracetamol", "500mg c/ 8hr"));
  
  string msg = "\nNo Expedient: " + to_string(noExpedient) + "\n" + 
  "Hospital: " + hospital.printInformation() + "\n" +
  "Patient: " + patient.printInformation() + "\n" +
  "Doctors: " + doctor.printInformation() + "\n" + 
  "Nurses: " + nurse.printInformation() + "\n";
  return msg;
}