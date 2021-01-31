/* Name: Sadie Jones
* ID #: 2339622
* Email: sajones@chapman.edu
* Course: CPSC298-09 (C++)
* Assignment #2 : Problem 4 : conversion
*/

#include <iostream>
using namespace std;

void getUserInput(float& userFeet, float& userInches) {
  cout << "Enter a length in feet and inches: " << endl;
  cout << ">>>> ";
  cin >> userFeet;
  cout << ">>>> ";
  cin >> userInches;
}

int feetToInches(int feetVal, int inchVal) {
  int totalInches;

  totalInches = feetVal * 12;
  totalInches = totalInches + inchVal;

  return totalInches;
}

float inchesToCm(int feetVal, int inchVal) {
  const float CM_PER_IN = 2.54;
  int totalInches = feetToInches(feetVal, inchVal);

  float cmVal = totalInches * CM_PER_IN;
  return cmVal;
}

void cmToMeters(float& totalCm, float& totalMeters) {
  const int CM_PER_M = 100;

  while (totalCm >= CM_PER_M) {
    totalCm = totalCm - 100;
    totalMeters = totalMeters + 1;
  }
}

void outputResults(float totalCm, float totalMeters) {
  cout << "Converted measurement: ";
  cout << totalMeters << " meters and " << totalCm << " centimeters." << endl;
}

int main() {
  float inputFeet;
  float inputInches;
  string userString = "";

  while (userString != "exit") {
    float totalCentimeters = 0.0;
    float totalMeters = 0.0;

    getUserInput(inputFeet, inputInches);

    totalCentimeters = inchesToCm(inputFeet, inputInches); // convert feet to inches, inches to cm, then cm to meters & cm
    cmToMeters(totalCentimeters, totalMeters);

    outputResults(totalCentimeters, totalMeters);

    cout << "Continue converting, or exit? ";
    cin >> userString;
  }

  return 0;
}
