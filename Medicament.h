#ifndef MEDICAMENT
#define MEDICAMENT
#include <iostream>
using namespace std;

class Medicament{
  private:
    string name;
    string dosis;
  public:
    Medicament();
    Medicament(string, string);
    string getName();
    string getDosis();
    string printInformation();
};

#endif 