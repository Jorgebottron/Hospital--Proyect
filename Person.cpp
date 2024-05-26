#include "Person.h"

Person::Person(){
  name = "";
  age = 0;
  sex = "";
}

Person::Person(string aName, string aLastName, int aAge, string aSex){
  name = aName;
  age = aAge;
  sex = aSex;
}

string Person::getName(){
  return name;
}
string Person::getLastName(){
  return lastName;
}
int Person::getAge(){
  return age;
}
string Person::getSex(){
  return sex;
}

string Person::printInformation(){
  string msg = "Name: " + name + "\n" + "Last Name: " + lastName + "\n" +"Age: " + to_string(age) + "\n" + "Sex: " + sex;
  return msg;
}