#include<stdio.h>

int main (){
// khai bao bien
int n, S = 0;
// Nhap n tu ban phim
printf("nhap n = ");
scanf("%d", &n);
// Tong m
for(int i = 1; i <= n; i++){
S += i;
}
// xuat ra man hinh tong m
printf("S = 1 + 2 +.....+ %d = %d",n,S);

  return 0;
  }
