#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  string ans;
  if(N <= 59) ans = "Bad";
  else if(60 <= N && N <= 89) ans = "Good";
  else if(90 <= N && N <= 99) ans = "Great";
  else ans = "Perfect";
  
  cout << ans << endl;
  
  return 0;
}
