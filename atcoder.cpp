#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int res = 0;
  if(s[0] == '1')
    res++;
  if(s[1] == '1')
    res++;
  if(s[2] == '1')
    res++;
  return 0;
  cout << res << "\n";
  return 0;
}