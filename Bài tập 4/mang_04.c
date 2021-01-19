#include <stdio.h>

int main() {
  // Khai bao bien kieu n,i,Tong=0
  int n;
  int i,Tong=0;
  printf("Nhap n : ");
  scanf("%d", &n);
  // Tao mang a kich thuoc n
  int a[n];
  // Nhap n phan tu cua mang a tu ban phim
  for(i = 0;i < n;i++){
  	printf("Phan tu o mang a : ");
    scanf("%d", &a[i]);
  }
  // Xuat ra man hinh cac phan tu cua mang a
  printf("Cac phan tu o mang a : ");
  for(i = 0;i < n;i++){
  	printf(" %d",a[i]);
  }
  // Tinh tong cac phan tu trong mang a
  for(i = 0;i < n;i++){
  	Tong = Tong + a[i];
  }
  // Xuat ra man hinh tong cac phan tu trong mang a
  printf("\nTong cac phan tu tu mang a = %d",Tong);
  return 0;
}
