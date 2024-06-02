#include "Appointment.h"

Appointment::Appointment(){
  noAppointment = 0;
  date = "";
  time = "";
}

Appointment::Appointment(int aNoAppointment, string aDate, string aTime){
  noAppointment = aNoAppointment;
  date = aDate;
  time = aTime;
}

int Appointment::getNoAppointment(){
  return noAppointment;
}
string Appointment::getDate(){
  return date;
}
string Appointment::getTime(){
  return time;
}

string Appointment::printInformation(){
  string msg = "No Appointment: " + to_string(noAppointment) + "\n" + "Date: " + date + "\n" + "Time: " + time + "\n";
  return msg;
}
