#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int N;
  cin >> N;
 
  int sum = 0;
  vector<pair<string, int> > vp(N);
  for(int i = 0 ; i < N ; i++){
    string s;
    int n;
    cin >> s >> n;
    vp[i] = make_pair(s,n);
    sum += n;
  }
  
  float half = sum / 2;
  string ans = "atcoder";
  
  for(int i = 0; i < N ; i++){
    pair<string, int> p = vp[i];
    if(p.second > half) ans = p.first;
  }
 
  cout << ans << endl;
  return 0;
}
