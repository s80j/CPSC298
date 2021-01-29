/* Name: Sadie Jones
* ID #: 2339622
* Email: sajones@chapman.edu
* Course: CPSC298-07 (C++)
* Assignment: The Basics -- Employee Pay
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  const float EMPLOYEE_PAY_RATE = 16.00;
  const float EMPLOYEE_OVERTIME_RATE = 24.00;
  const float SOCIAL_SECURITY_TAX = 0.06;
  const float FEDERAL_INCOME_TAX = 0.14;
  const float STATE_INCOME_TAX = 0.05;
  const float MEDICAL_INSURANCE_FEE = 10.00;

  float numHoursWorked;

  cout << "Number of hours worked in a week: ";
  cin >> numHoursWorked;

  float grossPay;

  if (numHoursWorked <= 40) // calculate grossPay
  {
    grossPay = numHoursWorked * EMPLOYEE_PAY_RATE;
  }
  else
  {
    grossPay = (40 * EMPLOYEE_PAY_RATE) + ((numHoursWorked - 40) * EMPLOYEE_OVERTIME_RATE);
  }

  float socialSecurityWithholding = grossPay * SOCIAL_SECURITY_TAX; // calculate withholdings
  float federalIncomeWithholding = grossPay * FEDERAL_INCOME_TAX;
  float stateIncomeWithholding = grossPay * STATE_INCOME_TAX;

  // calculate netPay
  float netPay = grossPay - (socialSecurityWithholding + federalIncomeWithholding + stateIncomeWithholding + MEDICAL_INSURANCE_FEE);

  cout << fixed << setprecision (2) << "Gross pay: $" << grossPay << endl; // output all the information
  cout << "Social security withholding: $" << socialSecurityWithholding << endl;
  cout << "Federal income withholding: $" << federalIncomeWithholding << endl;
  cout << "State income withholding: $" << stateIncomeWithholding << endl;
  cout << "Medical insurance withholding: $" << MEDICAL_INSURANCE_FEE << endl;
  cout << "Net pay: $" << netPay << endl;

  return 0;
}
