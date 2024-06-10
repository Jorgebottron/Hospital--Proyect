#include "Appointment.h"

Appointment::Appointment(){
  noAppointment = 0;
  date = "";
  hour = 0;
  minute = 0;
}

Appointment::Appointment(int aNoAppointment, string aDate, int aHour, int aMinute){
  noAppointment = aNoAppointment;
  date = aDate;
  hour = aHour;
  minute = aMinute;
}

int Appointment::getNoAppointment(){
  return noAppointment;
}
string Appointment::getDate(){
  return date;
}
int Appointment::getHour(){
  return hour;
}
void Appointment::setHour(int aHour){
  hour = aHour;
}
int Appointment::getMinute(){
  return minute;
}
void Appointment::setMinute(int aMinute){
  minute = aMinute;
}

string Appointment::printInformation(){
  string msg = "No. Appointments: " + to_string(noAppointment) + "\n" + "  Date: " + date + "\n" + "  Time: " + to_string(hour) + ":" + to_string(minute) + "\n\n";
  return msg;
}

Appointment Appointment::operator +(const Appointment &val){
  Appointment sum;
  sum.hour = hour + val.hour;
  sum.minute = minute + val.minute;
  return sum;
}

Appointment Appointment::operator -(const Appointment &val){
  Appointment sub;
  sub.hour = hour - val.hour;
  sub.minute = minute - val.minute;
  return sub;
}
