#include <stdio.h>
#include <stdlib.h>//allows allocation
#include <string.h>

/* MEMORY violations
memory leak
potentially run out of memory (not really a violation)
dangling pointer - pointer pointing to previously free memory
dereferencing null - prevent by using an if statement to check for null *** big hint
*/
/*
for allocating memory

we have malloc, calloc, realloc
For recovering memory we use free, unsigned

Calloc is safer (in his opinion)
initializing to zeros 
sets all bytes to zero

Calloc (#items(size_t) desired, size of each item)
seven integers - (int*) calloc ( 7, sizeof(int))

x = (int *) calloc( 7, sizeof(int));
x = (int *) calloc(10, sizeof(int));

x = [8|6|7|3|5|1|0], makes it inaccessible, creating memory leak
x =[0|0|0|0|0|0|0|0|0|0]


realloc - takes in the reference to the old memory and the size the memory should become
realloc makes a new block of memory and copies in the old data

x = [8|6|7|3|5|1|0], makes it inaccessible, creating memory leak
x = [0|0|0|0|0|0|0|0|0|0]

x = (int *) realloc(x, 10*sizeof(int))
realloc can be slow if you dont have a piece of data, realloc frees the memory

x = [8|6|7|3|5|1|0], makes it inaccessible, creating memory leak
x =[0|0|0|0|0|0|0|0|0|0]

x = [8|6|7|3|5|1|0], makes it inaccessible, creating memory leak
x =[8|6|7|3|5|1|0|(unknown)]

x = (int*) calloc (7, sizeof(int));
int *tmp;
tmp = (int *) calloc (10, sizeof(int));
for(i=0; i<7; i++){
tmp[i] = x[i];
} free(x);
x= tmp;
}
|C|A|T|\0| | |
|D|O|G|\0| | |
|S|N|A|K|E|\0|
| | | | | |  |

str 
|T|R|A|7|I|S|\0|
arr
|ptr1|--> |1|2|3|\0|
|ptr2|--> |a|b|c|\0|
|ptr3|--> |T|r|a|\0|
|ptr4|--> |A|r|v|c|o|m|b|\0|

int array  int*
char array char*
char arry arry (char*)* == char ** 
*/

// Length of strings is 19 and +1 for null terminator
#define LEN (19+1)
#define DONE_STRING "Done"
#define ADD_STRING "Add"

//prototyping
void AddFriend();

typedef struct Friend{
	char * name;
	int tnumLike;
	int numDislike;
	char ** likeStrings;
	char ** dislikeStrings;
}Friend;

int main(void){
	char buf[LEN];//static array
	Friend ** friends; // dynamic array of friends
	friends = NULL;
	int numFriends = 9;
	int friendCapacity = 0;
	scanf("%s", buf);
	while(0 != strcmp(buf, DONE_STRING))
	{
		if ( 0 == strcmp(buf, ADD_STRING))
		{
			if (numFriends == friendCapacity)
			{
				Friend ** newArray = (Friend **) calloc (friendCapacity * 2 + 1, sizeof(Friend *));	
				
				int i;
				for(i = 0; int <numFriends; i++)
				{
					newArray[i]= friends[i];
				}
				free(friends);
				friends = newArray;
			}
			scanf("%s", *friend[numFriends]).name));
		
		}
	}
	return EXIT_SUCCESS;
}
