#include <iostream>

using namespace std;

int main() {
  
  int i = -2;
  int x = -4 * i++ - 6 % 4;
  
  cout << "Value of x: " << x;
  
  return 0;
}

/*
Assuming that i has a value of -2, what value will be assigned to the variable x after evaluating the following expression? Write a C++ program to check your answer.

x = –4 * i++ – 6 % 4;
*/
