#include <iostream>
#include <string>

using namespace std;

int main () {
  
  string s1 = "As time by ...";
  string s2 = "goes";
  
  cout << "Step 1: " << s1 << endl;
  
  size_t pos1 = s1.find("by");

  if (pos1 != string::npos) {
    s1.insert(pos1, s2 + " ");
    cout << "Step 2: " << s1 << endl;
    
    s1.erase(pos1 + 7);
    cout << "Step 3: " << s1 << endl;

  } 
  
  else {
    return 1;
  
  }
  
  size_t pos2 = s1.find("time");
  
  if (pos2 != string::npos) {
    s1.replace(pos2, 4, "Bill");
    cout << "Step 4: " << s1 << endl;
    
  }
  
  else {
    return 1;
    
  }


  return 0;

}

/*
Write a C++ program to initialize a string s1 with the string "As time by ..." and a second string s2 with the string "goes",
insert string s2 in front of "by" in string s1,
erase the remainder of string s1 after the substring "by",
replace the substring "time" in s1 with "Bill".

In each case, your program should determine the position of the substring. Output string s1 on screen at the beginning of the program and after every modification
*/
