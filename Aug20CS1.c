#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	// hello_there_cop3502
	int x;
	int i;
	
	char str[20]; // char * str

	
	str[0] = 'T';
	str[1] = 'r';
	str[2] = 'a';
	str[3] = 'v';
	str[4] = 'i';
	str[5] = 's';
	
	scanf(" %d", &x); //need ampersand by referance
	scanf(" %s", str); //does not need ampersand because you are already scanning by reference in str
	
	//strcat(str, " no");
	//strcpy(str, " no");
	
	/* str "yes";
	str [y,e,s,\0]
	strcpy(str, "n")
	str [n,\0,s,\0]
	strlen(str) return 1;
	
	strlen(str+2);	
	skips 2 spots in the array
	[s,\0]
	*/
	
	//bad practice and yeah, dont print this way
	for( i = 0; i < strlen(str); i++) //strlen(str) runtime = n^2, strlen looks for the first instance of the null terminator \0
	{
		printf("%c", str[i]);
	}
	
	//int str cmp
	//void str cat means insert
	//void str cpy copy 
	printf("\n");
	
	printf("%s", str); //best way to run it
	
	printf("\n");
	
	printf("%d\n", strlen(str));
	printf("%d\n", strlen(str+2));
	printf("%s\n", str);
	printf("%s\n", str + 5);
	strcpy(str+6, "Travis");
	printf("%s\n", str);
	return EXIT_SUCCESS;
}
