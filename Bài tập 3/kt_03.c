#include <stdio.h>

int main(){
int a;
printf("Viết chương trình in ra các số lẻ từ 1 đến 20 ngoại trừ các số 5, 11, 15 :\n");
for(a=1;a<=20;a++){
  if(a%2){
    switch (a){
      case 5:
      case 11:
      case 15:
        break;
      default:
        printf ("\n%d",a);
    }
  }
  
}

  return 0;
}


=============================================================================================


#include <stdio.h>

int main(){
int a=0;
printf("Viết chương trình in ra các số lẻ từ 1 đến 20 ngoại trừ các số 5, 11, 15 :\n");
while(a<=20){
  a++;
  if(a%2){
    switch (a){
      case 5:
      case 11:
      case 15:
      case 21:
        break;
      default:
        printf ("\n%d",a);
    }
  }
  
}

  return 0;
}







