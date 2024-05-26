#include "Doctor.h"
using namespace std;

Doctor::Doctor(){
  name = "";
  age = 0;
  sex = "";
  specialty = "";
}

Doctor::Doctor(string aName, string aLastName, int aAge, string aSex, string aSpecialty){
  name = aName;
  lastName = aLastName;
  age = aAge;
  sex = aSex;
  specialty = aSpecialty;
}

string Doctor::getSpecialty(){
  return specialty;
}

string Doctor::printInformation(){
  string msg = + "\nName: " + name + "\n" + "Last Name: " + lastName + "\n" + "Age: " + to_string(age) + "\n" + "Sex: " + sex + "\n" + "Specialty: " + specialty + "\n";
  return msg;
}
