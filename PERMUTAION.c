#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PHRASE "adeflr"
#define FALSE 0
#define TRUE 1

void perm(char *original, char *current, int *used,int len, int pos);

int count;
int main(void){
	
	
//	int n = 5;
//	
//	for(i=n; n!=0; n--)
//	printf("%s", PHRASE);	
//

char *orig;
char *cur;
char *used;
int len = strlen(PHRASE);
orig = (char *) calloc(len, sizeof(char));
cur = (char *) calloc(len, sizeof(char));
used = (int *) calloc(len, sizeof(int));

int i;
for(i=0; i<len;i++)
{
	orig[i]= (PHRASE)[i];
	used[i] = FALSE;
	cur[i]= '\0';
}
	perm(orig,cur,used,len,0);
	return EXIT_SUCCESS;
}

void perm(char *original, char *current, int *used,int len, int pos)
{
	if(len == pos) 
	{
		printf("%d. ", ++count);
		int i;
		for( i =0; i <len; i++) printf("%c", current[i]);
		printf("\n");
	}
	int i;
	for (i = 0 ; i<len; i++)
	{
		if (used[i]==FALSE)
		{
			used[i] = TRUE;
			current[pos] = original[i];
			perm(original, current, used, len, pos+1);
			used[i] = FALSE;
			current[pos] = '\0';
		}
	}
}
