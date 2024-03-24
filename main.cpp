#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// 12/26 セクション3-2文字と数値の出力まで
// 12/27 セクション3-6小数を扱う方法まで　次回セクション4変数
// 1/3 セクション4-7 複合代入演算子
// 1/3 セクション4終了　次回セクション5　条件分岐
// 1/7 セクション5、6終了　次回セクション7 関数
// 1/11 セクション7関数　終了　次回セクション8　配列
// 2/15 セクション8配列　終了　次回セクション9　ポインタ
// 3/23　セクション9ポインタ　終了　次回セクション10　構造体

typedef struct {
  int apple;
  int orange;
  int banana;
}Fruits;

int main(){
  Fruits store;
  store.apple = 1000;
  cout << "リンゴの金額:" << store.apple << "\n";
  return 0;
}

