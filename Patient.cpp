#include "Patient.h"

Patient::Patient(){
  name = "";
  age = 0;
  sex = "";
  weight = 0.0;
  illness = "";
  room = 0;
}

Patient::Patient(string aName, string aLastName, int aAge, string aSex, float aWeight, float aHeight, string aBloodType, string aIllness, int aRoom, Medicament aMedicament){
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

string Patient::printInformation(){
  string msg = "\nName: " + name + "\n" + "Last Name: " + lastName + "\n" + "Age: " + to_string(age) + "\n" + "Sex: " + sex + "\n" + "Weight: " + to_string(weight) + "kg\n" + "Height: " + to_string(height) + "cm\n" + "Blood Type: " + bloodType + "\n" +"Illness: " + illness + "\n" + "Room: " + to_string(room) + "\n" + "Medicament: " + " " + medicament.printInformation() + "\n";
  return msg;
}