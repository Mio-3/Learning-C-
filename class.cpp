#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// クラス終了 3/26
// 次回　カプセル化

class Student {
  private:
    int num;
  public:
    void setNum(int x);
};

void Student::setNum(int x){
  num = x;
  cout << num << "\n";
}


int main(){
  Student hana;
  hana.setNum(100);
  return 0;
}