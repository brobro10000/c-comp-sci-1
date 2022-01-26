#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5
//prototype for first sort method of class
void sort1_rec(int * arr, int size, int counter);
void printArr(int * arr, int size);

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
//	}

int * vals;
vals = (int *) calloc(SIZE, 2*sizeof(int));
int i;
for(i=0; i<SIZE; i++)
{
	vals[i] = rand() % 20+5;
	
	printArr(vals, SIZE);
}
	return EXIT_SUCCESS;
}

void sort1_rec(int * arr, int size,int counter)
{
	//base case
		if(counter == size)
			return /*nothing is here*/;
		
	//recursion step
	int i;
	int index = counter;//store the index for the smallest value so far
	for(i=counter+1; i < size; i++)
	{
		if (arr[i]<arr[index])
		{
			//save swap for the end by..
			index = i;
		}
	}
	
	//swap the value
	int tmp = arr[index];
	arr[index] = arr[counter];
	arr[counter]= tmp;
	
	//recursive
	sort1_rec(arr, size, counter+1);
	//return
	return; //not necessary for void functions
}

void printArr(int * arr, int size)
{
	int i;
	for (i=0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}
