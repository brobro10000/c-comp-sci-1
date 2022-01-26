#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct txt
{
	char input[20];
	struct txt * nextTxt;
}txt;
txt * createTxt(char, txt *);
int main(void){
	
	char test[20];
	txt * firstTxt;
	firstTxt = NULL;
	
	
 	scanf("%s", test);
 	printf("%s", test);
	
	
	
	
	return EXIT_SUCCESS;
}
txt * createTxt(char txt[20], txt * nextTxt)
{
    Location * ret;

    ret = (Location *)calloc(1, sizeof(Location));

    if (ret == NULL) // Check for failed allocation
        return ret;
    // Initialize the return value with the passed parameters
    ret->value = value;
    ret->next = nextLocation;
    // Return the create value
    return ret;
}
