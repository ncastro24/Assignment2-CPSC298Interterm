// assignment 2 problem 1: intarray
// Nayeli Castro
// Interterm 2020 CPSC 298-07

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  int numberArray[9]; // the array
  int numbers; // the numbers
  int j = 0; // for the while loop

  cout << "Input 10 nonengative numbers: " << endl;

  while (j != 10) { //while loop to prompt the user for the numbers
    cin >> numbers;
    if (numbers < 0) { // check to see if number is negative
      cout << "That number is negative, input a new one." << endl;
    }
    else {
      numberArray[j] = numbers;
      ++j;
    }
  }

  cout << "Your numbers from the array: " << endl;

  for (int i = 0; i < 10; ++i) { // for loop to print the array
    cout << numberArray[i] << " ";
  }

  cout << endl;

  return 0;

}
