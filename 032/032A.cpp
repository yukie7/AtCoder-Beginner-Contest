#include <bits/stdc++.h>
using namespace std;

int 
gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}
 
int main() {
  int a, b, n;
  cin >> a >> b >> n;

  // gcd(a,b) = 最大公約数
  int g = gcd(a,b);;
  // 最小公倍数
  // 12 = 2 * 6 , 18 = 3 * 6
  // g = 6 , l = 2 * 3 * 6 = 36
  // g * l = 2 * 3 * 6 * 6 = a * b
  // l = a * b / g
  int l = a * b / g;;

  // (a / b 切り上げ) = (a+b-1)/b
  // a = 8 , b = 3
  // (8 / 3 切り上げ) = (int)(10 / 3) = 3 , 
  cout << l * (int)((n+l-1)/l) << endl;
  
  return 0;
}
