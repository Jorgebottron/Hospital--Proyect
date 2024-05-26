#include "Nurse.h"
using namespace std;

Nurse::Nurse(){
  name = "";
  age = 0;
  sex = "";
}

Nurse::Nurse(string aName, string aLastName, int aAge, string aSex){
  name = aName;
  lastName = aLastName;
  age = aAge;
  sex = aSex;
}

string Nurse::printInformation(){
  string msg = "\nName: " + name + "\n" + "Last Name: " + lastName + "\n" + "Age: " + to_string(age) + "\n" + "Sex: " + sex + "\n";
  return msg;
}