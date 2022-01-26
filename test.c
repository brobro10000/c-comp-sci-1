#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LEN 10


int *bubbleSort(int * array);

int main(void){
	srand (time(NULL));
	int array[LEN]; 
	int i=0,j=0;
	
	for(i=0; i<LEN; i++)
	{
		array[i] = rand() % 500;
		printf("%d ", array[i]);
	}
	bubbleSort(array);
	
	for(j=0; j<LEN; j++)
	{
	
		printf("%d ", array[j]);
	}
	return EXIT_SUCCESS;
}

int *bubbleSort(int * array)
{
	int i=0, j=0; 
	int temp;
	printf("\n");
	
	for(i = 1; i < LEN; i++)
	{
		for(j=0; j<LEN-i; j++)
		{
			
			if(array[j]> array[j+1])
			{
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;	
			}
		}
	}
}


