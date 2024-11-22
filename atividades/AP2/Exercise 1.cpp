#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
  //Left-justify the number 0.123456 in an output field with a width of 15.
  cout << left << setw(15) << 0.123456 << endl;
  
  //Output the number 23.987 as a fixed point number rounded to two decimal places, right-justifying the output in a field with a width of 12.
  cout << right << setw(12) << fixed << setprecision(2) << 23.987 << endl;
  
  //Output the number –123.456 as an exponential and with four decimal spaces. How useful is a field width of 10?
  cout << setw(10) << scientific << setprecision(2) << -123.456 << endl;
  
  return 0;
}
