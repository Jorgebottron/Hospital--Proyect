#include "Expedient.h"

Expedient::Expedient(){
  noExpedient = 0;
}

Expedient::Expedient(int aNoExpedient,Patient aPatient, Doctor aDoctor, Nurse aNurse){
  noExpedient = aNoExpedient;
  patient = aPatient;
  doctor = aDoctor;
  nurse = aNurse;  
}

int Expedient::getNoExpedient(){
  return noExpedient;
}

string Expedient::printInformation(){
  string msg = "\nNo Expedient: " + to_string(noExpedient) + "\n\n" + 
  "Hospital: \nName: Great Queen hospital \nDirection: Carrer de la Sagrada Família, 2, 0800-123-456\n\n" +
  "Patient: " + patient.printInformation() + "\n" +  
  "Doctors: " + doctor.printInformation() + "\n" +   
  "Nurses: " + nurse.printInformation() + "\n";
  
  return msg;
}