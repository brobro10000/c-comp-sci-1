#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int parasols(int *arr, int LEN, int stands);

int main(void){
	
	int n,k,i,j;
	int *arr;
	scanf("%d %d", &n,&k);
	
	arr = (int *)calloc(n, sizeof(int));
	
	for (i=0; i<n;i++) 
	{
		scanf("%d", &arr[i]);
	}	
	parasols(arr, n, k);
	return EXIT_SUCCESS;
}

//parasols function
int parasols(int *arr, int LEN, int stands)
	{
	int i,j,k;
	//initialized second array
	int *arr2;
	int *arr3;
	//creates second array lenths of max value
	arr2 = (int *)calloc(arr[LEN-1], sizeof(int));

	//output for arr test 
//	for (j=0; j<LEN;j++) 
//	{
//	printf("%d \n", arr[j]);
//	}
//	
	// strlen is the max value of arr
	int strLEN = arr[LEN-1];

	//creates second array in respective spots
	for(j=0; j<LEN; j++)
	{
	for (i=0; i<strLEN;i++) 
	{
		if(arr[j] == (i+1))
		{
			arr2[i] = arr[j];
		}
	}
	}
	//more variables
	int count = 0;
	int chair = 0;
	int space = 0;
	int min = 0;
	int width = 1;
	//max parasol width based on stands
	double max = (double)strLEN/stands;
	//array of possible parasol width
	arr3 = (int *)calloc((int)max, sizeof(int));
	int hold=0;
	//binary search for width
	for(i=0; i<strLEN; i++)
	{
		{
		if(arr2[i] != 0)
			{	
			chair++;
			} else {
			space++;
			}
		if(chair+space > width && chair+space <= max)
			{
			count = chair+space;
			if(i <= (int)max)
				{
				arr3[i-1] = count;
				}		
			}
		}	
	}
	
	//parameters for best width
for(i=0; i<LEN-1; i++)
{
	for(j=0;j<((int)max-width);j++){
	if(arr[i+1]-arr[i]> arr3[j]){
		if(arr3[j]%2==0){
			min=arr3[j+1];
		}
		if(arr3[j]%2==1){
			min=arr3[j+1]+1;
		}
		
		}
	}
}
printf("%d", min);
}
//testing different code below

//if(arr3[0] % 2 == 0)
//{
//	printf("This is even");
//} else {
//	printf("This is odd");	
//}

//printf("%d", min);
//for(i=0;i<((int)max-width);i++){
//	
//	if(arr3[i]%2==0){
//	printf("%d ", arr3[i]);
//	}
//	if(arr3[i]%2==1){
//	printf("%d ", arr3[i]);
//	}
//	
//	}
//	
//}
	//prints count
	
	//prints arr2
//	for(i=0; i<strLEN; i++){
//		printf("%d \n", arr2[i]);
//	}


