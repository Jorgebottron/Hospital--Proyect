#include "Patient.h"

Patient::Patient(){
  name = "";
  age = 0;
  sex = "";
  weight = 0.0;
  illness = "";
  room = 0;
  medicament = vector <Medicament*>();
  appointment = vector <Appointment*>();
}

Patient::Patient(string aName, string aLastName, int aAge, string aSex, float aWeight, float aHeight, string aBloodType, string aIllness, int aRoom, vector<Medicament*> aMedicament, vector<Appointment*> aAppointment){  
  name = aName;
  lastName = aLastName;
  age = aAge;
  sex = aSex;
  weight = aWeight;
  height = aHeight;
  bloodType = aBloodType;
  illness = aIllness;
  room = aRoom;
  medicament = aMedicament;
  appointment = aAppointment;
}

float Patient::getWeight(){
  return weight;
}
float Patient::getHeight(){
  return height;
}
string Patient::getBloodType(){
  return bloodType;
}
string Patient::getIllness(){
  return illness;
}
int Patient::getRoom(){
  return room;
}
int Patient::getNumMedicament(){
  return medicament.size();
}
int Patient::getNumAppointment(){
  return appointment.size();
}

string Patient::printInformation(){
  string msg = "\nName: " + name + "\n" + "Last Name: " + lastName + "\n" + "Age: " + to_string(age) + "\n" + "Sex: " + sex + "\n" + "Weight: " + to_string(weight) + "kg\n" + "Height: " + to_string(height) + "cm\n" + "Blood Type: " + bloodType + "\n" +"Illness: " + illness + "\n" + "Room: " + to_string(room) + "\n";
  
  msg += "\nMedicaments: " + to_string(getNumMedicament()) + " medicament(s): \n";
  for(int i=0; i< getNumMedicament(); i++){
    msg += "Medicament: " + medicament[i]->printInformation() + "\n";
  }
  
  msg += "\nAppointments: " + to_string(getNumAppointment()) + " appointment(s): \n";
  for(int i=0; i< getNumAppointment(); i++){
    msg += "Appointments: " + appointment[i]->printInformation() + "\n";
  }
  
  return msg;
}
