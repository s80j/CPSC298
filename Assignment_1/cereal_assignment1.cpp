/* Name: Sadie Jones
* ID #: 2339622
* Email: sajones@chapman.edu
* Course: CPSC298-07 (C++)
* Assignment: The Basics -- Cereal
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double cerealWeightOunces;
  double cerealWeightTons;
  int numBoxesForTon;
  const double OUNCES_IN_TON = 35273.92;

  cin >> cerealWeightOunces;

  // conversion from ounces to metric tons
  cerealWeightTons = cerealWeightOunces / OUNCES_IN_TON;

  // how many boxes needed to make one ton?
  double x;
  x = OUNCES_IN_TON / cerealWeightOunces;
  numBoxesForTon = ceil(x);

  // output metric ton conversion
  cout << "Cereal weight in metric tons: ";
  cout << cerealWeightTons << endl;

  // output boxes needed to make one ton
  cout << "Number of boxes of cereal needed to yield one metric ton of cereal: " << numBoxesForTon << endl;

  return 0;
}
