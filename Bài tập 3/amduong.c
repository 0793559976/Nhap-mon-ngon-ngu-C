#include <stdio.h>

int main(){
	int a = -1;
	if (a > 0){
		printf ("%d duong", a);
		scanf ("%d", &a);
	}else if (a == 0) {
		printf ("a = 0", a);
		scanf ("%d", &a);
	}else {
		printf ("%d am", a);
		scanf ("%d", &a);
	}

	
  getchar();
  return 0;
}

