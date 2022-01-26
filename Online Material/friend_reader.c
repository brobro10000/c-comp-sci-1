
// Parses data, but only stores and prints names... BOO!!!

#include <stdlib.h> // Allows allocation
#include <stdio.h>
#include <string.h>

// Length of strings is 19 and +1 for null terminator
#define LEN (19 + 1)

// Defined strings for commands
#define DONE_STRING "Done"
#define ADD_STRING "Add"


// Struct to store my friends
typedef struct Friend
{
    char * name;
    int numLike;
    int numDislike;
    char ** likeStrings;
    char ** dislikeStrings;
}Friend ;

void AddFriend();

int main(void)
{
    char buf[LEN]; // static array
    
    Friend ** friends; // dynamic array of friends
    friends = NULL;
    
    int numFriends = 0;
    int friendCapacity = 0;
    
    scanf("%s", buf);
    
    while (0 != strcmp(buf, DONE_STRING))
    {
        if (0 == strcmp(buf, ADD_STRING))
        {
            if (numFriends == friendCapacity)
            {
                Friend ** newArray = 
                   (Friend **) calloc(friendCapacity * 2 + 1, sizeof(Friend *));
                
                int i;
                for (i = 0; i < numFriends; i++)
                {
                    newArray[i] = friends[i];
                }
                
                free(friends);
                friends = newArray;
                
                // Update the size of the list
                friendCapacity = friendCapacity * 2 + 1; // missed this in class too
            }
            
            // Allocate the memory for the friend (and for the name too)
            // Missed this in class
            friends[numFriends] = (Friend *) calloc(1, sizeof(Friend));
            (*friends[numFriends]).name = (char *) calloc(LEN, sizeof(char));
            
            int i;
            
            // Read in the name of the friend
            scanf("%s", (*friends[numFriends]).name);
            
            // Read in the number of things they like
            scanf("%d", &(*friends[numFriends]).numLike);
            
            // TODO: Read in each thing they like
            for (i = 0; i < (*friends[numFriends]).numLike; i++)
                scanf("%s", buf); // Sent to oblivion for now
            
            // Read in the number of things they dislike
            scanf("%d", &(*friends[numFriends]).numDislike);
            
            // TODO: Read in their dislike
            for (i = 0; i < (*friends[numFriends]).numDislike; i++)
                scanf("%s", buf); // Sent to oblivion for now
            
            // Print the name for no
            printf("%s\n", (*friends[numFriends]).name);

            
            // Update the number of friends
            numFriends++;
        }
        
        // Read in the next instruction
        scanf("%s", buf);
    }
    
    // TODO: Need to free the memory
    
    
    // Missed in clas
    return EXIT_SUCCESS;
}
