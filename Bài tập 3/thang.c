#include <stdio.h>

int main(){
int thang;

printf("vui long nhap thang:");
scanf("%d",&thang);
switch(thang)
    {   case 1:
            printf("31 ngay");
            break;

        case 2:
            printf("28 ngay");
            break;

        case 3:
            printf("31 ngay");
            break;
        case 4:
            printf("30 ngay");
            break;
        case 5:
            printf("31 ngay");    
            break;
        case 6:
            printf("30 ngay");
            break;
        case 7:
            printf("31 ngay");
            break;   
        case 8:
            printf("31 ngay");
            break;
        case 9:
            printf ("30 ngay");
            break;           
        case 10:  
           printf ("31 ngay");
           break;
        case 11:
            printf ("30 ngay");
            break;
        case 12:
            printf ("31 ngay");
            break;
         default:
         printf ("chi co 12 thang trong nam");
    }

 getchar();
  return 0;
}
