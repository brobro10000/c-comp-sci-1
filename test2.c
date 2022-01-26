#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 20

int main(void){
	int i=0, j=0,k=0; 
	int temp;
	printf("\n");
	int array[LEN];
	
	srand (time(NULL));
	for(i=0; i<LEN; i++)
	{
		array[i] = rand() % 500;
		printf("%d ", array[i]);
	}
	
	for(j = 1; j < LEN; j++)
	{
		
		for(k=0; k<LEN-j; k++)
		{
			if(array[k]> array[k+1])
			{
			temp = array[k];
			array[k] = array[k+1];
			array[k+1] = temp;	
			}
		}
	}
	printf("\n");
		for(i=0; i<LEN; i++)
	{
	
		printf("%d ", array[i]);
	}
	
	return EXIT_SUCCESS;
}
