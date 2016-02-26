#include <bits/stdc++.h>
using namespace std;
 
int main(){
  float A, B, C, D;
  cin >> A >> B >> C >> D;
 
  float tkhs = B / A;
  float aok  = D / C;
 
  if(tkhs == aok) cout << "DRAW" << endl;
  else if(tkhs > aok) cout << "TAKAHASHI" << endl;
  else cout << "AOKI" << endl;
 
  return 0;
}
