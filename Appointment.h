#ifndef APPOINTMENT
#define APPOINTMENT
#include <iostream>
using namespace std;

class Appointment{
  private:
    int noAppointment;
    string date;
    int hour;
    int minute;

  public:
    Appointment();
    Appointment(int, string, int, int);
    int getNoAppointment();
    string getDate();
    int getHour();
    void setHour(int hour);
    int getMinute();
    void setMinute(int minute);
    string printInformation();
    Appointment operator +(const Appointment &val);
    Appointment operator -(const Appointment &val);
};

#endif