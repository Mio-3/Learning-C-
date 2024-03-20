#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
// 12/26 セクション3-2文字と数値の出力まで
// 12/27 セクション3-6小数を扱う方法まで　次回セクション4変数
// 1/3 セクション4-7 複合代入演算子
// 1/3 セクション4終了　次回セクション5　条件分岐
// 1/7 セクション5、6終了　次回セクション7 関数
// 1/11 セクション7関数　終了　次回セクション8　配列
// 2/15 セクション8配列　終了　次回セクション9　ポインタ

int main(void){
  int apple = 10;
  int *p;
  p = &apple;
  printf("%d\n",*p);
  return 0;
}

int sample(){
  string s;
  cin >> s;
  int count = 0;
  if(s[0] == '1')
    count++;
  if(s[1] == '1')
    count++;
  if(s[2] == '1')
    count++;
  cout << count << "\n";
  return 0;
}