#include "Patient.h"

Patient::Patient(){
  name = "";
  lastName = "";
  age = 0;
  sex = "";
  weight = 0.0;
  height = 0.0;
  bloodType = "";
  illness = "";
  room = 0;
  medicament = vector <Medicament*>();
  appointment = vector <Appointment*>();
  expedient = Expedient();

}

Patient::Patient(string aName, string aLastName, int aAge, string aSex, float aWeight, float aHeight, string aBloodType, string aIllness, int aRoom, vector<Medicament*> aMedicament, vector<Appointment*> aAppointment, Expedient aExpedient){  
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
  expedient = aExpedient;
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
string Patient::printAppointments(){
  string msg = "No Appointment: " + to_string(appointment.size()) + "\n";
  for(int i = 0; i < appointment.size(); i++){
    msg += appointment[i]->printInformation();
  }
  return msg;
}

vector <Appointment*> Patient::getAppointment(){
  return appointment;
}

string Patient::printInformation(){
  string msg = name + " " + lastName + " expedient: \n\nName: " + name + "\n" + "Last Name: " + lastName + "\n" + "Age: " + to_string(age) + "\n" + "Sex: " + sex + "\n" + "Weight: " + to_string(weight) + "kg\n" + "Height: " + to_string(height) + "cm\n" + "Blood Type: " + bloodType + "\n" +"Illness: " + illness + "\n" + "Room: " + to_string(room) + "\n";
  
  msg += "\nMedicaments: " + to_string(getNumMedicament()) + " medicament(s): \n";
  for(int i=0; i< getNumMedicament(); i++){
    msg += "Medicament: " + medicament[i]->printInformation() + "\n";
  }
  
  msg += "\nAppointments: " + printAppointments() + "\n";
  msg += expedient.printInformation() + "\n";
  return msg;
}

void Patient::addAppointment(Appointment* aAppointment){
  appointment.push_back(aAppointment);
}