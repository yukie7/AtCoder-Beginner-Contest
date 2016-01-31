#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b, n;
  cin >> a >> b >> n;
  
  for(int i = n ; ; i++){
    if(i % a == 0 && i % b == 0){
      cout << i;
      break;
    }
  }
  cout << endl;
  
  return 0;
}
