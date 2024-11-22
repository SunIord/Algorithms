#include <iostream>
#include <string>

using namespace std;

int main() {
  
  char ch;
  string word;
  
  cin >> ch;
  cout << "Let's go! Press the return key: " << ch << endl;

  cin >> word;
  cout << "Enter a word containing three characters at most: " << word << endl;
  
  cout << "Your input: " << ch << ", " << word << endl;

  return 0;
}
