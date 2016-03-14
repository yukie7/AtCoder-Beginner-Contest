#include <bits/stdc++.h>
using namespace std;

template < typename T > std::string to_string( const T& n )
{
  std::ostringstream stm;
  stm << n;
  return stm.str();
}

int main(){
  string s;
  cin >> s;

  string AF = "ABCDEF";
  
  int c[6];
  // count(s.begin(), s.end(), 'A')
  // s の中の 'A' の数え上げ
  for(int i = 0 ; i < 6 ; i++){
    c[i] = count(s.begin(), s.end(), AF[i]);
  }

  string result = to_string(c[0]);
  for(int i = 1; i < 6; i++){
    result += " " + to_string(c[i]);
  }

  cout << result << endl;
  
  return 0;
}
