#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;

  int ans[6];
  for(int i = 0 ; i < 6 ; i++) ans[i] = 0;
  
  for(int i = 0; i < S.size() ; i++){
    char ch = S[i];
    if(ch == 'A') ans[0]++;
    else if(ch == 'B') ans[1]++;
    else if(ch == 'C') ans[2]++;
    else if(ch == 'D') ans[3]++;
    else if(ch == 'E') ans[4]++;
    else ans[5]++;
  }

  for(int i = 0 ; i < 6 ; i++){
    if(i == 5) cout << ans[i] << endl;
    else cout << ans[i] << " ";
  }
  
  return 0;
}
