#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// クラス終了 3/26
// 次回　カプセル化
// 3/30　カプセル化　終了　次回　コンストラクタ

class Student {
  private:
    int num;
  public:
    void setNum(int x);
    int getNum();
};

void Student::setNum(int x){
  if(x > 0 && x < 100){
    num = x;
  } else {
    num = 0;
  }
}

int Student::getNum(){
  return num;
}

int main(){
  Student hana;
  hana.setNum(15);
  cout << hana.getNum() << "\n";
  return 0;
}