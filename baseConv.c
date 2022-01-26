#include <stdio.h>
#include <stdlib.h>

void baseConv(int value, int base);

int main(void)
{
	int i;
	for (i=0; i<=17; i++)
	{
		baseConv(i,2);
		printf("\n");
	}
	return EXIT_SUCCESS;
}

void baseConv(int value, int base)
{
	
	//base case
	if(value < base)
	{
		printf("%d",value);
		return;
	}
	
	//recursive step
//	printf("%d", value % base);
	baseConv(((value - (value %base))/ base),base);
	printf("%d", value % base);
}
