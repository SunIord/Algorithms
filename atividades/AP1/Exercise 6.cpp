#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int sum = 0; 
  
  for (int i = 0; i < n; ++i) {
    int num;
    cin >> num; 
    sum += num; 
  
  }
  
  int average = (sum + n / 2) / n;
  cout << "Average = " << average << endl;

  return 0;
}

/*
Sample Input
4
1
2     3 
   10

Sample Output
Average = 4 
*/
