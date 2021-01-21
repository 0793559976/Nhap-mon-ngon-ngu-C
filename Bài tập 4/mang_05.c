#include <stdio.h>

int main() {
  
  int n,i;
  printf("Nhap n : ");
  scanf("%d", &n);
  
  int a[n];
  
  for(i = 0;i < n;i++){
  	printf("Phan tu o mang a [%d]: ",i+1);
    scanf("%d", &a[i]);
  }
  
  printf("Cac phan tu o mang a : ");
  
  for(i = 0;i < n;i++){
  	printf(" %d",a[i]);
  }
  
  int m,l=0;
  printf("\nNhap m  : ");
  scanf("%d", &m);
    for(n=0;n<i;n++){
    if(a[n]==m){
    l += 1;}
    }
    if (l > 0){
		printf("Co ton tai");
	    }
	    else{
		printf("Khong ton tai");
	  }
  }
