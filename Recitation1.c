#include <stdio.h>
#include <stdlib.h>

//corrections

typedef struct author_t{
char name[20];
int birthYear;
int publishings;
}author_t;

typedef struct book_t{
	char name[20];
	int year;
	int numAuthors;
	author_t *authors;
}book_t;

int main(){
	int numBooks;
	scanf("%d", &numBooks);
	
	book_t * bookArr;
	bookArr = (book_t*)calloc(numBooks, sizeof(book_t));
	
	int i,j;
	for(i=0;i<numBooks;i++){
		scanf("%s", bookArr[i].name);
		scanf("%d", &bookArr[i].year);
		scanf("%d", &bookArr[i].numAuthors);
		
		bookArr[i].authors = (author_t *)calloc(bookArr[i].numAuthors, sizeof(author_t));
		
		for(j=0;j<bookArr[i].numAuthors;j++){
			scanf("%s", bookArr[i].authors[j].name);
			scanf("%s", &bookArr[i].authors[j].birthYear);
			scanf("%s", &bookArr[i].authors[j].publishings);		
		
		}
		
	}
	
	for(i=0 ;i<numBooks; i++){
		printf("%s\n", bookArr[i].name);
		for(j=0;j<bookArr[i].numAuthors;j++){
			printf("%s ", bookArr[i].authors[j].name);
		}
		printf("\n");
	}
	
	for(i=0;i<numBooks;i++){
		free(bookArr[i].authors);
		bookArr[i].authors = NULL;
	}
	free(bookArr);
	bookArr = NULL;
	return EXIT_SUCCESS;
}
