// scope.cpp
// Accessing objects with equal names
// ---------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

int var = 0;

namespace Special { int var = 100; }

int main() {
  int var = 10;
  cout << setw(10) << var;
    {
    int var = 20;
    cout << setw(10) << var << endl;
      {
        ++var;
        cout << setw(10) << var;
        cout << setw(10) << ++ ::var;
        cout << setw(10) << Special::var * 2 << endl;
      }
    cout << setw(10) << var - ::var;
    }
  cout << setw(10) << var << endl;
  
  return 0;
  
}

/*
In general, you should use different names for different objects. However, if you define a name for an object within a code block and the 
name is also valid for another object, you will reference only the new object within the code block. 
The new declaration hides any object using the same name outside of the block. When you leave the code block, the original object 
once more becomes visible. The program below uses identical variable names in different blocks. What does the program output on screen? 
Run the program to test your guess.
(?)
*/
