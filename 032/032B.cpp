#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  int k;
  cin >> s >> k;
  int count = s.size() - k + 1;
  int c = 0;
 
  if(s.size() < k) cout << 0 << endl;
  else{
    set<string> s1;
    for(int i = 0 ; i < count ; i++) s1.insert(s.substr(i,k));
    cout << s1.size() << endl;
  }
  return 0;
}
