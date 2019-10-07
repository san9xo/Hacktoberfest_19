#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
  for(int j=2;j<n;j++) {
      int i=2;
    while(i<j) {
        if(j%i==0)
        break;
       
        
    
    ++i;
   
    }
     if (i==j)
    cout << j <<" ";
  }
}
    
    
    
