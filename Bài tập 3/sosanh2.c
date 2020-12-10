#include <stdio.h>

int main(){
	//khai bao bien a,b
	int a,b;
	printf ("nhap a =");
	scanf("%d",& a) ;
	printf ("nhap b =");
	scanf("%d",& b);
	if (a > 0){
		printf (" a > b", a);
		
	}else if (a == 0) {
		printf (" a = b", a);
		
	}else {
		printf (" a < b", a);
	
	}

	
  getchar();
  return 0;
}

