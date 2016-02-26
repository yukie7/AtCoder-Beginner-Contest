#include <bits/stdc++.h>
using namespace std;

int main(){
  
  // N = A to B num
  // M = B to A num
  // X = A to B time
  // Y = B to A time
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;

  int a[N];
  for(int i = 0; i < N ; i++) cin >> a[i];
  int b[M];
  for(int i = 0; i < M ; i++) cin >> b[i];

  // ans = 往復回数
  int ans = 0;
  // tkhs = 合計時間
  int tkhs = 0;
  int a_count = 0, b_count = 0;
  bool frag = true;

  while(a_count < N && b_count < M){
    
    // 空港A
    if(frag == true){
      // 空港 A で待つ
      for(int i = a_count; i < N ; i++){
        a_count++;
        // 行けるとき
        if(tkhs <= a[i]){
          tkhs = a[i] + X;
          frag = false;
          break;
        }
        else continue;
      }
    }

    // 空港B
    if(frag == false){
      // 空港 B で待つ
      for(int i = b_count; i < M ; i++){
        b_count++;
        // 帰れるとき
        if(tkhs <= b[i]){
          ans++;
          tkhs = b[i] + Y;
          frag = true;
          break;
        }
        else continue;
      }
    }
    
  }

  cout << ans << endl;
  
  return 0;
}
