#include <bits/stdc++.h>
using namespace std;
// paizaラーニングの問題を解いた。

int main(){
  int n;
  cin >> n;
  for(int i = 1;i <= n;i++){
    for(int j = 1;j <= n;j++){
      cout << i * j;
      if(j != n)
        cout << " ";
      else  
        cout << "\n";
    }
  }
  return 0;
}