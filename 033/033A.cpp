#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string N;
  cin >> N;
  
  if(N[0] == N[1] && N[1] == N[2] && N[2] == N[3]) cout << "SAME" << endl;
  else cout << "DIFFERENT" << endl;
  
  return 0;
}
