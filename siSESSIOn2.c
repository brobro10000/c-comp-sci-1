#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
	/* binary search
	searching for
	
	 the number by cutting up into pieces.
	Take a guess , if its bigger guess above, if less guess half 
	
	State: has to be in order (sorted)
	3 important pieces, start, end and middle(guess)
	
	guesses taken right in the middle (50%) ((answer/2)) (halfway through then cut out half that
	*/
	
int binarySearch(int key,int *array, int len)
{
	int lo = 0, mid, hi = array[len-1];
	mid = (len-1)/2;
	
	while(lo != hi)
	{
		if(array[mid]<key)
		{
			array[lo] = array[mid]+1;
		}
		else if(array[mid]>key)
		{
			array[hi] = array[mid];
		}
		else if(array[mid]==key)
		{
			printf("Hooray! We found out key!\n");
			return mid; //position of guess
		}
		
		mid = (hi + lo)/2;
	}
	printf("Oh no! we didnt find the key \n");
	return -1;
}
int main(void){
	int arr[]= {1,2,3,4,5,6,7,8,9};
	
	printf("%d is at position %d\n", 4, binarySearch (7 ,arr, 9));
	
	
	
	return EXIT_SUCCESS;
}
