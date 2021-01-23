#include <stdio.h>
int main() {
  // khai bao bien
  float a,b,c,x1,x2,delta;
  // Nhap so a,b,c  tu ban phim
  printf("Nhap so a : ");
  scanf("%f", &a);
  printf("Nhap so b : ");
  scanf("%f", &b);
  printf("Nhap so c : ");
  scanf("%f", &c);
  delta = b*b - 4*a*c;
  // Dieu kien
  if(delta < 0){
    x1=x2=0.0;
    printf("Phuong trinh vo nghiem");
  }
  else if(delta == 0){
    x1=x2= -b/(2*a);
    printf("Phuong trinh co nghiem kep:\nx1 : %.1f\nx2 : %.1f",x1,x2);
  }
  else{
    x1 = (float) (- b + delta) / (2*a);
    x2 = (float) (- b - delta) / (2*a);
    printf("Phuong trinh co 2 nghiem phan biet:\nx1 : %.1f\nx2 : %.1f",x1,x2);
  }
return 0;
}
