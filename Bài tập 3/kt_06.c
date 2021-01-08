#include <stdio.h>

int main(){
int a;

printf("a = %d",a);
scanf("%d",&a);
switch(a){
case 1:
  printf("*");
  break;
case 2:
    printf(" * \n");
    printf("***");
    break;
case 3:
    printf("     * \n");
    printf("   * * * \n");
    printf(" * * * * * \n");
    break;
default:
    printf("       * \n");
    printf("     * * * \n");
    printf("   * * * * * \n");
    printf(" * * * * * * *  \n");
    break;

  
}

  return 0;
}
