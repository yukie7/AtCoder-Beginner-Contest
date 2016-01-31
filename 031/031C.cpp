#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int S[N];
  for(int i = 0; i < N; i++) cin >> S[i];

  int min_sum = -50 * N;
  int ans = min_sum;
  // 全探索
  for(int i = 0; i < N; i++){// tkhs 選択
    // aok の処理終わり次第 max を min_sum に戻す
    int max_aok = min_sum;
    int max_tkhs = min_sum;
    
    for(int j = 0; j < N; j++){// aok 選択
      if(i == j) continue;
      int tkhs = 0, aok = 0;
      int s = min(i,j);
      int e = max(i,j);
      
      // 数列 T を作らず、偶奇で合計を足していく。
      for(int k = s; k <= e; k++){
        if((k-s) % 2 == 0) tkhs += S[k];
        else aok += S[k];
      }
      // 今回の最大値を記録
      if(max_aok < aok){
        max_aok = aok;
        max_tkhs = tkhs;
      }
    }
    // tkhsの最大値を記録しておき、i++
    ans = max(ans,max_tkhs);
  }
  
  cout << ans << endl;
  return 0;
}
