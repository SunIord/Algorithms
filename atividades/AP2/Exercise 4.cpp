#include <iostream>

using namespace std;

int main() {
  
  cout << "\t";
  int col;
  for (col = 1; col <= 10; col++) {
    cout << col << "\t";
 
  }
  cout << endl;
  
  int row;
  for (row = 1; row <= 10; row++) {
    cout << row << "\t";
    for (col = 1; col <= 10; col++) {
      cout << row * col << "\t";  
    
    }
    cout << endl;
    
  }
  
  return 0;
}

/*
Write a C++ program that outputs a complete multiplication table (from 1 to 10) on screen.

	1	2	3	…	10
1	1	2	3	…	10
2	2	4	6	…	20
3	3	6	9	…	30
…	…	…	…	…	…
10	10	20	30	…	100
*/
