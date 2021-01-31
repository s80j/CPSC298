/* Name: Sadie Jones
* ID #: 2339622
* Email: sajones@chapman.edu
* Course: CPSC298-09 (C++)
* Assignment #2 : Problem 2 : zeroboth
*/

#include <iostream>
using namespace std;

void zeroBoth(int& value1, int& value2) { // '&' = pass by reference parameter
  value1 = 0;
  value2 = 0;
}

int main() {
  int userValue1;
  int userValue2;

  cout << "Enter 2 integer values: " << endl;
  cin >> userValue1;
  cin >> userValue2;

  zeroBoth(userValue1, userValue2);

  cout << "Your values are now " << userValue1 << " and " << userValue2 << endl;

  return 0;
}
