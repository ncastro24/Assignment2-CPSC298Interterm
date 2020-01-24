// assignment 2 problem 4: salestax
// Nayeli Castro
// Interterm 2020 CPSC 298-07

#include <iostream>
using namespace std;

float addTax(float taxRate, float cost) { // addTax function

  cost = (taxRate * .01)*cost; // calculation (*.01 to turn percent into fraction)

  return cost; // returns the cost
}

int main(int argc, char **argv) { // main function
  float costinput;
  float taxinput;

  cout << "Enter the cost of an item: " << endl;
  cin >> costinput;

  cout << "Enter the tax rate of an item as a percent: " << endl;
  cin >> taxinput;

  cout << "$" << addTax(taxinput, costinput) << " is the final price." << endl;

  return 0;

}
