// assignment 2 problem 5: conversion
// Nayeli Castro
// Interterm 2020 CPSC 298-07

#include <iostream>
using namespace std;

float calc(float feet, float inch, float &meter, float &cm) { //calculations function
  meter = (feet * 0.3048) + (inch * 0.0254);
  cm = (feet * 30.48) + (inch * 2.54);

  return 0;
}

void userinput(float &feet, float &inch) { //user input function
  cout << "Input feet: " << endl;
  cin >> feet;

  cout << "Input inches: " << endl;
  cin >> inch;
}

void output(float &meter, float &cm) { //output function
  cout << "Meters: " << meter << endl;
  cout << "Centimeters: " << cm << endl;
}

int main(int argc, char **argv) { //main
  float feet;
  float inch;
  float meter;
  float cm;

  cout << "This program will convert feet and inches to meters and cm." << endl;

  userinput(feet, inch);
  calc(feet, inch, meter, cm);
  output(meter, cm);

  return 0;

}
