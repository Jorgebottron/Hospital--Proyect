#include <iostream>
#include <vector>
#include "Person.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"
#include "Medicament.h"
#include "Hospital.h"
#include "Expedient.h"

int main() {
  Hospital hospital("Great Queen Hospital", "Carrer de la Sagrada Família, 2, 0800-123-456");
  Expedient expedient1(1, hospital);
  cout << expedient1.printInformation() << endl;
  
  return 0;
  }

