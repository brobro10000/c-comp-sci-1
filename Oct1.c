#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Thing{
	int value;
	struct Thing * next;
}Thing;

Thing * createThing(int);
int main(void)
{
	Thing * firstElement;
	
	firstElement = NULL;
	//73421559
	firstElement = createThing(7, firstElement);
		firstElement = createThing(3, firstElement);
	firstElement = createThing(4, firstElement);
	firstElement = createThing(2, firstElement);
	firstElement = createThing(1, firstElement);
	firstElement = createThing(5, firstElement);
	firstElement = createThing(5, firstElement);
	firstElement = createThing(9, firstElement);

	
	
	//dynamic memory review
//	int *arr1;
//	int *arr2;
//	
//	arr1 = (int *) calloc(10, sizeof(int*));
//	arr2 = (int *) calloc(20, sizeof(int*));
//	
//	arr1=NULL;
//	arr1=arr2;
//	
//	free(arr1);
//	
//	int *arr;
//	int *b;
//	
//	arr=(int*)calloc(10,sizeof(int));
//	b=arr;
//	
//	free(arr);
//	arr=NULL;
//	free(b); //Doublefree
//	b = NULL;
	

	return EXIT_SUCCESS;
}
Thing * createThing(int value, Thing * nextItem){
	Thing * ret;
	ret = (Thing *)calloc(1, sizeof(Thing));
	if(ret == NULL){//check for failed allocation
		return ret;
	}
	//initialize the return value with the passed parameters
	ret -> value = value;
	ret -> next = nextItem;
	
	return ret;
}
