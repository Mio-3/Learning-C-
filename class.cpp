#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// クラス終了 3/26
// 次回　カプセル化

class Student {
  public:
    int num;
};

void show(Student x){
  cout << x.num << "\n";
}

int main(){
  Student kazuma;
  kazuma.num = 10;
  Student *p;
  p = &kazuma;
  cout << p->num << "\n";
  return 0;
}