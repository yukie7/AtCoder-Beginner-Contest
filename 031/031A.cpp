#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int A, D;
  cin >> A >> D;
 
  int mulA = (A + 1) * D;
  int mulD = A * (D + 1);
 
  if(mulA >= mulD) cout << mulA << endl;
  else cout << mulD << endl;
  
  return 0;
}
