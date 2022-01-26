
// This program test the strlen() and strcpy() methods in string.h

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // includes the strlen(), strcpy(), strcat(), and strcmp() functions


int main(void)
{
    char str1[20];
    char str2[20];
    
    // Read in a string from standard input
    // Try typing into standard input "Hello_there_COP3503"
    scanf("%s", str1);
    
    // Read in a second string from standard input
    // Try typing in your name
    scanf("%s", str2);
    
    // Print the length of the strings
    printf("\"%s\" has a length of %ld\n", str1, strlen(str1));
    printf("\"%s\" has a length of %ld\n", str2, strlen(str2));
    
    // Write into str1 the contents of str2 note this might leave the bounds of str1
    // we offset the write by 6 characters
    strcpy(str1 + 6, str2); // Note this is not the same as strcpyt(str1, str2 - 6);
    
    // Print the new version of str1
    printf("%s\n", str1);
    
    
    // Testing strcat
    strcpy(str1, "hot");
    strcpy(str2, "dog");
    strcat(str1, str2);
    
    // Print after 1 concatenation
    printf("1 %s makes %s\n", str2, str1);
    strcat(str1, str2);
    
    // Print after 2 concatenations
    printf("2 %s makes %s\n", str2, str1);
    
    // Most important part of the program
    return EXIT_SUCCESS; // this is defined in <strlib.h>
}
