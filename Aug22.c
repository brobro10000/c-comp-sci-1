#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Homework Assignment Criteria
docs.microsoft.com/en-us/windows/wsl/install-win10
*/

/*
    Dynamic Memory 		vs   	Static Memory
	ex. Pointers				ex Array, int x[10]
	
	calloc,malloc,				int n;
	realloc, free*				scanf("%d", &n);
	*(stops memory leaks)		int arr[n];
	
	malloc, stdlib.h, returns void *(pointers)
	void * will create a block of memory on the heap
	molloc (unsigned long int); (size((_t)))  ((_t)) reserved 
	
	
	type def
	struct point{
	int x;
	int y;
	}
	if you create a point you type -  struct point p;
	
	When you want to access memory in a point
	char * name;
	
	name --> 19	
	name = (char*) malloc((size+1) *sizeof(char));
	
	x[5] is the same as *(x+5);
	
	to access the first spot *x returns it
	
	dangling pointer issues when using free
	can result in 2 errors
	1. use after free
	2. double free
	
	other problems include dereferencing null
	dont change static memory
*/

typedef struct Student
{
	int grade;
	char (*name);
} Student;
int main(void)
{
	
	struct Student s1; //with no typedef
	char buf[20];
	strcpy(buf, "Glenn");
	s1.grade = 100;
	s1.name = (char *) malloc((strlen(buf)+1) * sizeof(char));
	strcpy(s1.name, buf);
	
	
	Student s2; // with typedef
	s2.grade = 99;
	strcpy(buf, "Bob");
	s2.name = (char *) malloc((strlen(buf)+1) * sizeof(char));
	strcpy(s2.name, buf);
	
	printf("%d %d\n", s1.grade, s2.grade);
	printf("%s %s\n", s1.name, s2.name);
	
	//Dereference is the process of removing the reference (*)
	//Usually to refer to a vlue is to use the address. (&)
	//Derefencing a null is very bad, (using * without having any data in the array)
	printf("%c %c\n", *(s1.name), *(s2.name));
	
	return EXIT_SUCCESS;
}
