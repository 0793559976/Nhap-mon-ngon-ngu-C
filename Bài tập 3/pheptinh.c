#include <stdio.h>

int main(){
  //khai bao bien a va b
int a = 5, b = 2;
char pt;
printf("vui long nhap phep tinh");
scanf("%c",&pt);
switch(pt)
    {
        case '+':
            printf("a + b = %d",a + b);
            break;

        case '-':
            printf("a - b = %d",a - b);
            break;
          
         default:
         printf ("loi! toan tu khong dung");
    }

 getchar();
  return 0;
}
