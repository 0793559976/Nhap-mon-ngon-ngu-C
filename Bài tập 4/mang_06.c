#include <stdio.h>

int main() {
  
  int n,i,m,l=0,phantu=0;
  printf("Nhap n : ");
  scanf("%d", &n);
  
  int a[n];
  for(i = 0;i < n;i++){
  	printf("Phan tu o mang a [%d]: ",i);
    scanf("%d", &a[i]);
  }
  printf("Cac phan tu o mang a : ");
  for(i = 0;i < n;i++){
  	printf(" %d",a[i]);
  }
  printf("\nNhap m  : ");
  scanf("%d", &m);
    for(n=0;n<i;n++){
    if(a[n]==m){
    l += 1;
    break;}
    }
    if (l > 0){
		printf("Co ton tai");
     
  printf("\n");
  //Dem cac gia tri trong mang a
  for(i = 0;i < n;i++){
    if(a[i] == m ){
      phantu +=1;
    }
  }
  printf("so phan tu co gia tri %d : %d",m,phantu);
  printf("\n");
  //Hien thi chi so cac phan tu
  printf("Chi so cac phan tu tren : ");
  for(i = 0; i < n;i++  ){
    if(a[i]==m){
      printf("%d ",i);
  }
  }}
  else(printf("Khong ton tai"));
  return 0;
}
