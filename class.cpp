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
    int getNum();
};

void Student::setNum(int x){
  num = x;
}

int Student::getNum(){
  return num;
}

int main(){
  Student hana;
  hana.setNum(25);
  int result = hana.getNum();
  cout << result << "\n";
  return 0;
}