#include "Medicament.h"

Medicament::Medicament(){
  name = "";
  dosis = "";
}

Medicament::Medicament(string aName, string aDosis){
  name = aName;
  dosis = aDosis;
}

string Medicament::getName(){
  return name;
}
string Medicament::getDosis(){
  return dosis;
}

string Medicament::printInformation(){
  string msg = "\n  Name: " + name + "\n" + "  Dosis: " + dosis + "\n";
  return msg;
}