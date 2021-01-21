#include <stdio.h>

int main(void) {
  int n,Sochan=0,Sole=0,So_0=0;
  //nhap so phan tu cua mang a
  printf("Nhap n = ");
  scanf("%d",&n);
  int a[n];

  for(int i=0;i < n ;i++){
    printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d", &a[i]);
  }
    printf("Mang a: ");
  for(int i=0; i < n; i+=1){
      printf(" %d",a[i]);
      }
  printf("\nSo chan tu mang a: ");
        //vong lap tinh so chan cua mang a
  for(int i=0;i<n;i++){
        if(a[i] % 2==0 &&a[i]>0){
        printf("%d ",a[i]);
        Sochan+=1;
        }
  }
        printf("\nso le tu mang a: ");
        //vong lap tinh so le cua mang a
  for(int i=0;i<n;i++){
        if(a[i] % 2!=0){
        printf("%d ",a[i]);
        Sole+=1;
    }
    } 
    //vong lap tinh so luong so 0   
  for(int i=0;i<n;i++){
        if(a[i] ==0){
        So_0+=1;
    }
  }
  printf("\nSo chan :%d \nSo le : %d \nSo 0:%d",Sochan,Sole,So_0);
  
  return 0;
}
