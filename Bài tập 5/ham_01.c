// khoi khai bao
#include <stdio.h>
int sum(int a,int b,int c);// khai bao ham sum
// khoi ham main 
int main() {
int x,y,z;
printf("Nhap 3 so nguyen tu ban phim:\n");
printf("x = ");
scanf("%d",&x);// nhap x

printf("y = ");
scanf("%d",&y);// nhap y

printf("z = ");
scanf("%d",&z);// nhap z

printf("x + y + z = %d",sum(x,y,z));

  return 0;
}
// khoi dinh nghia ham
int sum(int a,int b,int c){
  return a + b + c;
}





// khoi khai bao
#include <stdio.h>
void sum(int a,int b,int c);// khai bao ham sum
// khoi ham main 
int main() {
int x,y,z;
printf("Nhap 3 so nguyen tu ban phim:\n");
printf("x = ");
scanf("%d",&x);// nhap x

printf("y = ");
scanf("%d",&y);// nhap y

printf("z = ");
scanf("%d",&z);// nhap z

sum(x,y,z);

  return 0;
}
// khoi dinh nghia ham
void sum(int a,int b,int c){
int d = a + b + c;
printf("x + y + z = %d",d);
   
}





















