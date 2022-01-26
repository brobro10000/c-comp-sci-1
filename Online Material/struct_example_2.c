

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    int grade;
    char (*name);
} Student;

int main(void)
{
    // Store a student on the stack
    Student s1;
    
    // Create a string buffer for names
    char buf[20];
    
    // Write to the string buffer the first student's name
    strcpy(buf, "Glenn");
    
    // Assign a grade to the student
    s1.grade = 100;
    
    // DYNAMICALLY allocate memory for the first student's name
    s1.name = (char *) malloc((strlen(buf) + 1) * sizeof(char));
    
    // Copy the name in the buffer to the student's name string
    strcpy(s1.name, buf);
    
    // Create (on the stack a second student)
    Student s2;
    
    // Fill in his/her grade and put into the buffer his/her name
    s2.grade = 99;
    strcpy(buf, "Travis");
    
    // DYNAMICALLY allocate the memory for his/her name
    s2.name = (char *) malloc((strlen(buf) + 1) * sizeof(char));
   
    // Check the allocation was successfuly
    if (s2.name == NULL)
    {
        // Prevent memory leaks
        free(s1.name);
        
        // Prevent dangling pointers
        s1.name = NULL;
        
        // Return the program failed
        return EXIT_FAILURE;
    }
    
    // Copy the buffer's string into the name DYNAMICALLY allocated
    strcpy(s2.name, buf);
    
    // Print the grade for both students
    printf("%d %d\n", s1.grade, s2.grade);
    
    // Note about dereference
    // Dereference is the process of removing the reference (*)
    // Usually to refer to a value is to use the address. (&)
    
    // Print the name of the students
    printf("%s %s\n", (s1.name), (s2.name));
    
    // Prevent memory leaks
    free(s1.name);
    free(s2.name);
    
    // Remove dangling pointers
    s1.name = NULL;
    s2.name = NULL;
    
    // Return a success
    return EXIT_SUCCESS;
}