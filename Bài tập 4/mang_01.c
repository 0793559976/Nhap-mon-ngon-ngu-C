#include <stdio.h>

int main(void) {
  // Khai bao bien b kieu int
  int b[4] = {3,5,7,2};
  int i,Tong = 0;
  for(i = 0;i < 4;i++){
  	// Xuat ra man hinh day so tren tung mang
  	printf("Phan tu [%d] = %d\n",i,b[i]);
  }
  for(i = 0;i < 4;i++){
  	Tong = Tong + b[i];
  }
  // Xuat ra man hinh tong cac day so 
  printf("Tong cac day so = %d",Tong);
  return 0;
}
