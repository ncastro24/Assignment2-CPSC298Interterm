// assignment 2 problem 3: zeroboth
// Nayeli Castro
// Interterm 2020 CPSC 298-07

#include <iostream>
using namespace std;

void zeroBoth(int &x, int &y){ // void function
  x = 0;
  y = 0;
}

int main(int argc, char **argv) { // main function
  int input;
  int input2;

  cout << "Input 2 numbers: " << endl;
  cin >> input;
  cin >> input2;

  zeroBoth(input, input2); // calling zeroboth

  cout << "Voided numbers: " << endl;
  cout << input << " " << input2 << endl;

  return 0;
}
