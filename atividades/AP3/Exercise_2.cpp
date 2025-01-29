#include <iostream>
#include <string>

using namespace std;

bool isPalindrome (const string& word) {
  int left = 0;
  int right = word.length() - 1;
  
  while (left < right) {
    if (tolower(word[left]) != (tolower(word[right]))) {
      return false;
      
    }
    left++;
    right--;
    
  }
  
  return true;
  
}

int main() {
  int n_words;
  cin >> n_words;
  
  for (int i = 0; i < n_words; ++i) {
    string word;
    cin >> word;
    
    if (isPalindrome(word)) {
      cout << "É um palíndromo" << endl;
      
    } else {
      cout << "Não é um palíndromo" << endl;
      
    }
    
  }
  
  return 0;
  
}
