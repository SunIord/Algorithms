# include <iostream>
#include <string>
# include <stdlib.h>

using namespace std;

int main() {
  
  string message = "\nLearn from your mistakes!";
  cout << message << endl;
  
  int len = message.length();
  cout << "Length of the string: " << len << endl;

  int srand(12);
  
  int b = rand();
  
  cout << "\nRandom number: " << b << endl;
  
  return 0;
}