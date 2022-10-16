#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* More headers goes here*/

/* betty sty doc for main fuction goes here*/

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
		printf("%ld is positive", &n);
	}
	else if (n == 0){
		printf("%ld is zero", &n);
	}
	else if(n < 0){
		printf("%ld is negetive", &n);
	}

	return (0);
	

}
