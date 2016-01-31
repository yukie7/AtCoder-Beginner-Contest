#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main(){
  int N;
  lli K;
  cin >> N >> K;
 
  lli s[N];
  for(int i = 0; i < N ; i++){
    lli n;
    cin >> n;
    if(n == 0){
      cout << N << endl;
      return 0;
    } 
    else s[i] = n;
  }
 
  int ans = 0;
  lli mulS = 1;
  int start = 0, end = 0;
  while(end < N){
    mulS *= s[end];
 
    if(mulS <= K){
      ans = max(ans, end-start+1);
    }
    else{
      while(mulS > K && start < end){
        mulS /= s[start];
        start++;
      }
    }
 
    end++;
  }
  cout << ans << endl;
  return 0;
}
