#ifndef APPOINTMENT
#define APPOINTMENT
#include <iostream>
using namespace std;

class Appointment{
  private:
    int noAppointment;
    string date;
    string time;

  public:
    Appointment();
    Appointment(int, string, string);
    int getNoAppointment();
    string getDate();
    string getTime();
    string printInformation();
};

#endif