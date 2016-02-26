#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string S;
  cin >> S;
 
  
  vector<char> num;
  vector<char> op;
  for(int i = 0; i < S.size() ; i++){
    if(i % 2 == 0) num.push_back(S[i]);
    else op.push_back(S[i]);
  }
  
  int c = 0;
  int s = 0;
  int e = 0;
  if(S.size() == 1){
    if(S[0] == '0') cout << 0 << endl;
    else cout << 1 << endl;
  }
  else{
  while(e <= op.size()){
    if(op[e] == '*') e++;
    else{
      bool frag = true;
      for(int i = s; i <= e; i++){
        if(num[i] == '0'){
          frag = false;
        }
      }
      e++;
      s = e;
      if(frag == true) c++;
    }
  }
 
  cout << c << endl;
  }
  
  return 0;
}
