#include <iostream>
#include <string>

using namespace std;

int main() {

  string message = "I have learned something new again!";
  
  int len = message.length();
  cout << "Length of the string: " << len << endl;
  
  string line1, line2;
  
  cin >> line1 >> line2;
  cout << line1 << " * " << line2 << endl;
  
  return 0;
}
