#include <stdlib.h>
#include <stdio.h>
#include <string.h> 
#define LEN 1000

//checks the substance of 2 strings and compares how many consecutive
//characters appear in both , and outputs the number
int main (void){
	char fir[LEN+1];
	char sec[LEN+1];
	
	scanf("%s", fir);
	scanf("%s", sec);
	
	int n = strlen(fir);
	int m = strlen(sec);
	
	int ans = 0;
	int i,j,k;
	
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k+i<n && k+j<m; k++)
			{
					if(fir[i+k] != sec[j+k]) break;
					}
					if (k>ans) ans = k;		
					}
	}
	printf("%d\n", ans);
	return EXIT_SUCCESS;
}
