#include<stdio.h>
 // khoi khai bao
int a,b,c;
int SoLonNhat();
// khoi ham main
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
// khoi dinh nghia ham
int SoLonNhat(){
  // Dieu kien
  if(a>b &&a>c){
   printf("So a lon nhat : %d",a);// Xuat ra man hinh so lon nhat
  }else if (b>a&& b>c){
    printf("So b lon nhat : %d",b);

  }else {
   printf("So c lon nhat : %d",c);
  }
 return 0;
}
