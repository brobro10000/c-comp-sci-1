#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int b;
	int * a;
	b = 20;
	a=&b;
	
	//dereferencing 
	printf("%d", *a);
	
	a = (int *) malloc(sizeof(a));	
	*a = 20;
	free(a);
	a= NULL;
	
	a = (int*)malloc(4*sizeof(int));
	
	*(a+0)= 0;
	*(a+1) = 20;
	
		printf("%d", a[1]);
	return EXIT_SUCCESS;
}
