#include <bits/stdc++.h>
using namespace std;
struct Test{
  char name[32];
  int math;
  int english;
  int science;
};
struct Test student[3] = {
  {"池田", 70,85,15},
  {"鈴木",80,0,80},
  {"鳥羽",70,70,70}
}; 

void line();
void show();

int main(){
  printf("%8s %10s %10s %10s\n","名前","数学","英語","化学");
  line();
  show();
  line();

}

void line(){
  int i;
  for(i = 0; i < 50; i++){
    printf("-");
  }
  printf("\n");
}

void show(){
  int i;
  for(i = 0; i < 3; i++){
    printf("%8s %8d %8d %8d\n",
    student[i].name, student[i].math, student[i].english, student[i].science);
  }
  return;
}