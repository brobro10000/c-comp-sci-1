#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GREG "Greg"
#define STEVE "Steve"
#define MATT "Matt"

//Q1
typedef struct person
{
	char * name;
	struct person *likes;
	struct person *dislikes;
	
}person;
int main(void){
	person *Greg = (person *)calloc(1,sizeof(person));//createStructure Greg
	person *Matt = (person *)calloc(1,sizeof(person));
	person *Steve = (person *)calloc(1,sizeof(person));
		
	Greg->name = (char *)calloc(strlen(GREG)+1, sizeof(char));
	strcpy(Greg->name,GREG);
	Steve->name = (char *)calloc(strlen(STEVE)+1, sizeof(char));
	strcpy(Matt->name,MATT);
	Matt->name = (char *)calloc(strlen(MATT)+1, sizeof(char));	
	strcpy(Steve->name,STEVE);
	
	Greg->likes = NULL;
	Greg->dislikes = NULL;
	
	Matt->likes = Greg;
	Matt->dislikes = NULL;
	
	Steve->likes = Matt;
	Steve->dislikes = NULL;
	
	Steve->likes->likes->dislikes = Steve;
	
	


	
	//return EXIT_SUCCESS;
}
