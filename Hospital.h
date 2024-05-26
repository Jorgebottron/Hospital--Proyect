#ifndef HOSPITAL
#define HOSPITAL
#include <iostream>
using namespace std;

class Hospital{
  private:
    string name;
    string direction;
  public:
    Hospital();
    Hospital(string, string);
    string getName();
    string getDirection();
    string printInformation();
};

#endif 