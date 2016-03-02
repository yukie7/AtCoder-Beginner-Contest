#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int c = 0;
  
  for(int i = 0; i < 12; i++){
    string S;
    cin >> S;
    for(int j = 0; j < S.size(); j++){
      if(S[j] == 'r'){
        c++;
        break;
      }
      else continue;
    }
  }
  cout << c << endl;
  return 0;
}
