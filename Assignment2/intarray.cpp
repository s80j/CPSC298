/* Name: Sadie Jones
* ID #: 2339622
* Email: sajones@chapman.edu
* Course: CPSC298-09 (C++)
* Assignment #2 : Problem 1 : intarray
*/

#include <iostream>
using namespace std;

int main() {
  int numberArray[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
  int userInput;
  int i;

  cin >> userInput;

  for (i = 0; i < 10; ++i) { // fill the array with up to 10 nonnegative integers
    if (userInput > -1) { // only add nonnegative userInput values to the array
      numberArray[i] = userInput;
    }
    cin >> userInput;
  }

  cout << "Non-negative integers:";

  for (i = 0; i < 10; ++i) { // write the nonnegative ints to the screen
    if (numberArray[i] > -1) { // only print the nonnegative integers from the array
      cout << " " << numberArray[i];
    }
  }

  cout << endl;

  return 0;
}
