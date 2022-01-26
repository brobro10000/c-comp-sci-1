#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// code suff
/* 2d dynamic array
int (*x) [20]; 20 pointers of x, adviced against
grid of integers, 10x15 (RXC)
row major <- row dimension first
x = (int**) calloc(10, sizeof(int *)); a single dimension of a two dimensional arraay
x->	|_|
	|_|
	|_|
	|_|
	|_|
	|_|
	
for (i=0; i<10; i++)
{
x[i] = (int *) calloc (15, sizeof(int));
}

freeing things

free(x);
for(i=0; i<10; i++){  DONT DO THIS	|
	free(x[i]);						|
}									|

for (i = 0; i<10; i++){
	free(x[i]);
	x[i] = NULL;
}
free(x);
x = NULL;

calling functions

valgrind not built into windows
	friend **
	
	|_|	-> 	|_|   you can change what the * is pointing to 
			|_|	
			|_|
*/


/*
standard binary search, divide in the middle change parameters, repeat
Interpolation Search
	number - 86
	0 - 100
	50 number total
	50 * 86/ 100 == 43
	
	find 89 <- not hte best cutoff (maybe)
	On well distributed data, the interpolation, log(log(n)) performance, better run time 
	20 vs 4, 4 is worst to code
Ternary Search
breaks into 3, and compares the tail ends with the middle

math analysis
1. Summation
2. Order analysis
	
*/
int main(void)
{
	return EXIT_SUCCESS;
}
