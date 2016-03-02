#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[5];
  for(int i = 0; i < 5; i++) cin >> a[i];

  // 降順 set
  set<int, greater<int> > s;
  for(int i = 0; i < 5; i++){
    for(int j = i + 1; j < 5; j++){
      for(int k = j + 1; k < 5; k++) s.insert(a[i]+a[j]+a[k]);
    }
  }

  // itr = s の 0 番目
  std::set<int, greater<int> >::iterator itr = s.begin();

  // itr = s の 2 番目
  for(int i = 0 ; i < 2; i++) itr++;

  // 今の itr を指す
  cout << *itr << endl;

  
  // debug
  // for(itr; itr != s.end(); ++itr) {
  //   std::cout << *itr << endl;
  // }
  
  return 0;
}
