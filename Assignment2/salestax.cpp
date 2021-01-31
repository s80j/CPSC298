/* Name: Sadie Jones
* ID #: 2339622
* Email: sajones@chapman.edu
* Course: CPSC298-09 (C++)
* Assignment #2 : Problem 3 : salestax
*/

#include <iostream>
#include <iomanip>
using namespace std;

float addTax(float taxRate, float itemBaseCost) {
  float taxValue;
  float itemTotalCost;

  taxValue = (taxRate / 100) * itemBaseCost;
  itemTotalCost = itemBaseCost + taxValue;

  return itemTotalCost;
}

int main() {
  float inputTaxRate;
  float inputCost;
  float totalCost;

  cout << "Enter the cost of your item: ";
  cin >> inputCost;
  cout << "Enter the tax rate of your item: ";
  cin >> inputTaxRate;

  totalCost = addTax(inputTaxRate, inputCost);

  cout << "The total cost of your item is $";
  cout << fixed << setprecision(2) << totalCost << endl;

  return 0;
}
