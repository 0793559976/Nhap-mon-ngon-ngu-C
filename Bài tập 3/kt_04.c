#include <stdio.h>

int main(void) {

  int n=123;
  int s=0;
  scanf("%d",&n);

  // Buoc 1
  s = s + n%10;// s = s + 3
  n = n/10;// n = 12
  // Buoc 2
  s = s + n%10;// s = 3 + 2 = 5
  n = n/10;// n = 1
  //Buoc 3
  s = s + n%10;// s = 5 + 1 = 6
  n = n/10;// n = 0

  n = 123;
  for(;n!=0;n=n/10)
     
   s = s + n%10;

  while(n!=0){
    s = s + n%10;
    n = n/10;
  }

  printf("s = %d",s);
  return 0;
}
