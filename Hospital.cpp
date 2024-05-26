#include "Hospital.h"

Hospital::Hospital(){
  name = "";
  direction = "";
}

Hospital::Hospital(string aName, string aDirection){
  name = aName;
  direction = aDirection;
}

string Hospital::getName(){
  return name;
}
string Hospital::getDirection(){
  return direction;
}

string Hospital::printInformation(){
  string msg = "\n  Name: " + name + "\n" + "  Direction: " + direction + "\n";
  return msg;
}