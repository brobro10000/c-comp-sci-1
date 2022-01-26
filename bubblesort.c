#include <stdio.h>
#include <stdio.h>
#include <string.h>
#includ
#define LEN 20

int *bubbleSort(int * array, int len);
void isSorted(int * array, int len);
int main (void)
{
//	char arr[4] = {'3', '7', '3', '1'};
//	int i, temp=0,least=0;
//	i=0;
//	least = arr[0];
//	
//	for(i=4; i>0; i--)
//	{
//		
//		
//		printf("%c", arr[i-1]);
//
//	
int array[LEN];
int i;

srand(time(NULL));
for(i=0; i< LEN; i++)
{
	array[i] = rand() % 500;	
}

	return EXIT_SUCCESS;
	}

int *bubbleSort(int * array, int len)
{
	
	return sortedArray;
}
void isSorted(int * array, int len)
{
	int i; 
	for(i = 1 i< len; i++)
		if(array[i]< array[i-1])
		printf("Not Sorted!\n")
}
