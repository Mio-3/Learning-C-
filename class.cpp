#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// クラス終了 3/26 次回　カプセル化
// 3/30　カプセル化　終了　次回　コンストラクタ

class Student{
  public:
    int num;
    Student();
};

Student::Student(){
  num = 10;

}

int main(){
  Student Tarou;
  cout << Tarou.num << "\n";
  return 0;
}