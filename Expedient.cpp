#include "Expedient.h"

Expedient::Expedient(){
  noExpedient = 0;
  doctor = vector <Doctor*>();
  nurse = vector <Nurse*>();
}

Expedient::Expedient(int aNoExpedient, vector<Doctor*> aDoctor, vector<Nurse*> aNurse){
  noExpedient = aNoExpedient;
  doctor = aDoctor;
  nurse = aNurse;  
}

int Expedient::getNoExpedient(){
  return noExpedient;
}

string Expedient::printInformation(){
  string msg = "No Expedient: " + to_string(noExpedient) + "\n\n" + 
  "Hospital: \nName: Great Queen hospital \nDirection: Carrer de la Sagrada Família, 2, 0800-123-456\n\n" +
  "Doctors who treat the patient: \n";
    for(int i=0; i<doctor.size(); i++){
      if(doctor[i]->getSex() == "Male" || doctor[i]->getSex() == "Female"){
        msg += "Doctor: " + doctor[i]->printInformation() + "\n";
      } else if (doctor[i]->getSex() == "")
        msg += "Doctor: " + doctor[i]->printInformation(1) + "\n";
    }
  
    msg += "\nNurses who treat the patient: \n";
    for(int i=0; i<nurse.size(); i++){
      msg += "Nurse: " + nurse[i]->printInformation() + "\n";
    }
  
  return msg;
}