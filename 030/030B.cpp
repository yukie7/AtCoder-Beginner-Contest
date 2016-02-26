#include <bits/stdc++.h>
using namespace std;
 
int main(){
  double n, m;
  cin >> n >> m;
  if(n >= 12) n = n - 12;
 
  double na = n * 30 + 0.5 * m;
  double ma = 6 * m;
  double sa = abs(na - ma);
 
  if(sa <= 180) cout << sa << endl;
  else cout << 360 - sa << endl;
 
  return 0;
}
