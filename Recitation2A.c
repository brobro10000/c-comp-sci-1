#include <stdlib.h>
#include <stdio.h>
#include <string.h> 
//checks a string and define a length to determine how many characters max to check to 
//check for forbidden char
//input parameters
//L1 string
//L2 max length
// letters to forbid with spacpes.
int main (void){
	
	//My attempt
	/*
	int x; //max considerations
	char arr[100];
	int i=0;
	
	
	scanf(" %s", arr);
	scanf(" %d", &x);
	printf("%s",arr);
	char test[x];
	while(test[i] != NULL)
	for(i=0; i<strlen(test); i++){
		
	} 
	*/
	
	char orig[101];
	scanf("%s", orig);
	int ln =strlen(orig);
	
	int num;
	scanf("%d", &num);
	char forbid[num];
	
	int i;
	for(i=0;i<num;i++)
	{
		scanf("% ");//gets rid of white spaces
		scanf("%c", &forbid[i]);
	}
	
	int j;
	
	for(i=0;i<ln;i++)
	{
		int okay = 1;
		for(j=0; j<num;j++)
		{
			if(orig[i] == forbid[j]) okay = 0; //sets flag as zero so that character wont print
			
		}
		if (okay) printf("%c", orig[i]);
	}
	return EXIT_SUCCESS;
}
