#include<stdio.h>
 // khai bao bien a,b,c,SoLonNhat
int a,b,c;
int SoLonNhat();
int main(){
  printf("Nhap so a = ");
  scanf("%d",&a);//nhap a tu ban phim

  printf("Nhap so b = ");
  scanf("%d",&b);//nhap b tu ban phim

  printf("Nhap so c = ");
  scanf("%d",&c);//nhap c tu ban phim
  SoLonNhat();

  return 0;
}
int SoLonNhat(){
  // Xuat ra man hinh so lon nhat
  if(a>b &&a>c)
   printf("So a lon nhat : %d",a);
  if (b>a&& b>c)
    printf("So b lon nhat : %d",b);

  if (c>a&&c>b)
   printf("So c lon nhat : %d",c);
 return 0;
}
