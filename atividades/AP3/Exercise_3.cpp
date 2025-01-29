#include <iostream>
#include <iomanip>

using namespace std;

//calculated using a loop
long double factorialLoop(unsigned int n) {
  long double result = 1;
  for (unsigned int i = 1; i <= n; ++i) {
    result *= i;
    
  }
  
  return result;
  
}

//calculated recursively
long double factorialRecursive(unsigned int n) {
  if (n == 0) {
    return 1;
    
  }
  
  return n * factorialRecursive(n - 1);
  
}

int main() {
  cout << fixed << setprecision(0);
  
  for (unsigned int i = 0; i <= 20; ++i) {
    cout << "Fatorial de " << i << " (Loop): " << factorialLoop(i) << endl;
    cout << "Fatorial de " << i << " (Recursivo): " << factorialRecursive(i) << endl;
    
  }
  
  return 0;
  
}
