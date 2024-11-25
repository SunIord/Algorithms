#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  unsigned int seed;
  cin >> seed;
  if (seed > 0 && seed < 65535) {
    srand(seed);
    for (int i = 0; i < 20; i++) {
      int randomNumber = 1 + rand() % 100;
      cout << randomNumber << " ";
      
    }

  } 
  else {
    return 1;
  
  }

  return 0;
}

/*
Write a C++ program that reads an integer between 0 and 65535 from the keyboard and uses it to seed a random number generator.
Then output 20 random numbers between 1 and 100 on screen.
*/
