// assignment 2 problem 2: 2darray
// Nayeli Castro
// Interterm 2020 CPSC 298-07

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  int a[4][5]; // the array

  cout << "This program will arrange 20 numbers into 4 rows of 5 numbers." << endl;
  cout << "Input 20 numbers: " << endl;


  for (int i = 0; i < 4; ++i){ //user input
    for (int j = 0; j < 5; ++j){
      cin >> a[i][j];
    }
  }

  cout << "Your array: " << endl;

  for (int i = 0; i < 4; ++i){ //prints out the array
    for (int j = 0; j < 5; ++j){
      cout << " " << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
