#include <bits/stdc++.h>
using namespace std;

// 再帰関数
void pass(int rest, string s){
  if(rest == 0){
    cout << s << endl;
  }
  else{
    // 文字列で for って回せるんだね
    // s[N] + s[N-1] + ... + s[1] + s[0]
    // rest でどんどん減らして前の文字列を再利用
    for(char c = 'a'; c <= 'c'; c++) pass(rest - 1, s + c);
  }
}
  
// 解説見た
int main(){
  int N;
  cin >> N;

  pass(N, "");
  return 0;
}
