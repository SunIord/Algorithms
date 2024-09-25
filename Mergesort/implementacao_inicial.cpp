#include <iostream>

using namespace std;

void Merge (int A[], int l, int r) {
  
  int temp[r - l + 1];
  
  for (int i = l; i <= r; i++) {
    temp[i] = A[i];
    
  }
  
  int m = (l + r) / 2;
  int i1 = l; 
  int i2 = m + 1;
  int curr;
  
  for (curr = l; curr <= r; curr++) {
    if (i1 == m + 1) {
      A[curr] = temp[i2++];
      
    }
    
    else if (i2 > r) {
      A[curr] = temp[i1++];
      
    }
    
    else if (temp[i1] <= temp[i2]) {
      A[curr] = temp[i1++];
      
    }
    
    else {
      A[curr] = temp[i2++];
      
    }
    
  }
  
}

void Mergesort (int A[], int l, int r) {
  
  if (l < r) {
    int m = (l + r) / 2;
    
    Mergesort(A, l, m);
    Mergesort(A, m + 1, r); 
    Merge(A, l, r);
  
  }
  
}

int main () {
  
  
  
  return 0;
  
}
