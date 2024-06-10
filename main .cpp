#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "Person.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"
#include "Medicament.h"
#include "Expedient.h"
#include "Appointment.h"
using namespace std;

int main() {
  
  Medicament medicament1("Paracetamol", "500mg c/ 8hr");
  Medicament medicament2("Aspirin", "500mg c/ 6hr");
  vector <Medicament*> medicamentPatient1;
  medicamentPatient1.push_back(&medicament1);
  medicamentPatient1.push_back(&medicament2);

  Appointment appointment1(1, "12/06/2014", 10, 00);
  Appointment appointment2(2, "16/06/2014", 11, 00);
  vector <Appointment*> appointmentPatient1;
  appointmentPatient1.push_back(&appointment1);
  appointmentPatient1.push_back(&appointment2);

  vector <Person*> persons;
  persons.push_back(new Doctor("Jonh",  "Morris", 45, "Male", "Pediatrician"));
  persons.push_back(new Nurse("Jane",  "Doe", 32, "Female"));
  persons.push_back(new Doctor("Jenkins", "Hide", "Pediatrician"));
  
  vector <Doctor*> doctors;
  doctors.push_back(dynamic_cast<Doctor*>(persons[0]));
  doctors.push_back(dynamic_cast<Doctor*>(persons[2]));
  vector <Nurse*> nurses;
  nurses.push_back(dynamic_cast<Nurse*>(persons[1]));

  Expedient expedient(1, doctors,nurses);

  vector <Person*> patients;
  patients.push_back(new Patient("Michelle",  "Jones", 16, "Female", 50, 155, "A+", "Appendicitis", 2, medicamentPatient1, appointmentPatient1, expedient));


  
  string action;
  cout << "Welcome, write any number and press enter to start" << endl;
  cin >> action;
  
while(action != "n"){
  cout << "What do you want to do?" << endl;
  cout << "1. Search a patient" << endl;
  cout << "2. Add an appointment for a patient" << endl;
  cout << "3. Print patients" << endl;
  cout << "4. Edit a patient's hour appointment" << endl;
  cin >> action;
  if(action == "1"){
        cout << "Insert the name of the patient" << endl;
        string namePatient;
        string lastNamePatient;
        cin >> namePatient;
        cout << "Insert the last name of the patient" << endl;
        cin >> lastNamePatient;
        int countName = 0;
        string pNameFound = "";
        string msgName = "";
        for(int i=0; i<patients.size(); i++){
          if(patients[i]->getName() == namePatient){
            if (patients[i]->getLastName() == lastNamePatient){
              countName += 1;
              pNameFound += patients[i]->getName() + " " + patients[i]->getLastName() + "\n" +  patients[i]->printInformation() + "\n";
            } else {
               cout << "Patient not found" << endl;
               cout << "Want to do something else? (y/n)" << endl;
               cin >> action;
            }
            
          }
          
        }
          msgName = "\nPatients found: " + to_string(countName) + "\n" + pNameFound + "\n";
          cout << msgName << endl;
          cout << "Want to do something else? (y/n)" << endl;
          cin >> action;
        
  } else if (action == "2"){
      string namePatient;
      string lastNamePatient;
      string appDate;
      int appHour;
      int appMinute;
      cout << "Insert the name of the patient" << endl;
      cin >> namePatient;
      cout << "Insert the last name of the patient" << endl;
      cin >> lastNamePatient;
      cout << "Insert the new date of the appointment (dd/mm/yyyy)" << endl;
      cin >> appDate;
      cout << "Insert the new hour of the appointment (hh:00)" << endl;
      cin >> appHour;
      cout << "Insert the new minute of the appointment (00:mm)" << endl;
      cin >> appMinute;
      for(int i=0; i<patients.size(); i++){
        if(patients[i]->getName() == namePatient && patients[i]->getLastName() == lastNamePatient){
          Patient* patient = dynamic_cast<Patient*>(persons[i]);
          int numAppointments = patient -> getAppointment().size();
          Appointment* appointment = new Appointment(numAppointments++, appDate, appHour, appMinute);
          patient -> addAppointment(appointment);        
          }
                     
      }
      cout << "New appointment stored!!" << endl;
      cout << "Want to do something else? (y/n)" << endl;
      cin >> action;
  } else if(action == "3"){
    string msgPatients = "";
    int patientsCounter = 0;
    for(int i=0; i<patients.size(); i++){
      patientsCounter += 1;
      msgPatients = "\n";
      msgPatients += patients[i]->getName() + " " + patients[i]->getLastName() + "\n";
    }
    cout << "\nNo. of patients: " << patientsCounter  << msgPatients << endl;
    cout << "Want to do something else? (y/n)" << endl;
    cin >> action;
    
  } else if(action == "4"){
    string namePatient;
    string lastNamePatient;
    int appHour = 0;
    int appMinute = 0;
    int valueHours = 0;
    int valueMinutes = 0;
    int index;
    string operation;
    int newHour;
    int newMinute;
    cout << "Insert the name of the patient" << endl;
    cin >> namePatient;
    cout << "Insert the last name of the patient" << endl;
    cin >> lastNamePatient;
    cout << "Which appointment do you want to edit?" << endl;
    cin >> index;
    cout << "It will be an addition or a  substarction of time? (a/s)" << endl;
    cin >> operation;
    for(int i=0; i<patients.size(); i++){
      if(patients[i]->getName() == namePatient && patients[i]->getLastName() == lastNamePatient){
        Patient* patient = dynamic_cast<Patient*>(persons[i]);        
        if(operation == "a"){
          cout << "Insert the add of hour for the appointment (hh:00)" << endl;
          cin >> appHour;
          cout << "Insert the add of minute for the appointment (00:mm)" << endl;
          cin >> appMinute;


          valueHours = patient -> getAppointment()[index]-> getHour();
          valueMinutes = patient -> getAppointment()[index]-> getMinute();
          newHour = valueHours + appHour;
          newMinute = valueMinutes + appMinute;
          patient -> getAppointment()[index]-> setHour(newHour);
          patient -> getAppointment()[index]-> setMinute(newMinute);  
          cout << "New appointment hour has been set" << endl;
          cout << "Want to do something else? (y/n)" << endl;
          cin >> action;
        } else if (operation == "s"){
          cout << "Insert the substraction of hour for the appointment (hh:00)" << endl;
          cin >> appHour;
          cout << "Insert the substraction of minute for the appointment (00:mm)" << endl;
          cin >> appMinute;
          valueHours = patient -> getAppointment()[index]-> getHour();
          valueMinutes = patient -> getAppointment()[index]-> getMinute();
          newHour = valueHours - appHour;
          newMinute = valueMinutes - appMinute;
          patient -> getAppointment()[index]-> setHour(newHour);
          patient -> getAppointment()[index]-> setMinute(newMinute);
          cout << "New appointment hour has been set" << endl;
          cout << "Want to do something else? (y/n)" << endl;
          cin >> action;
        } else{
          cout << "Invalid operation" << endl;
        }
        } else {
            cout << "Patient not found" << endl;
            cout << "Want to do something else? (y/n)" << endl;
            cin >> action;
        }
    } 
  } 
  cout << "\nGoodbye!!" << endl;
  return 0;
  
  }
}
