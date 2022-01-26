#include <stdio.h>
#include <stdlib.h>

int findMin(int size, int * arr) 
{
	if(size == 1)// base case
	return arr[0];


int ans = findMin (size - 1,arr);//recursion
printf("%d\n",ans);
if(ans > arr[size -1])
	ans = arr[size-1];
return ans;
}

int main(void)
{
	int arr[] = {25,36,12,2};
	printf("%d\n", findMin(4,arr));
	return 0;
}
