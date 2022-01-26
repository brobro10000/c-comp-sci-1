
// Parses data, but only stores and prints names... BOO!!!

#include <stdlib.h> // Allows allocation
#include <stdio.h>
#include <string.h>

// Length of strings is 19 and +1 for null terminator
#define LEN (19 + 1)

// Defined strings for commands
#define DONE_STRING "Done"
#define ADD_STRING "Add"
#define LIKE_STRING "Like"

#define TRUE 1
#define FALSE 0


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
void deleteFriends(Friend **, int);

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
            
            int i;
            int numLs;
            int numDs;
            Friend * frPtr;
            
            // Allocate the memory for the friend
            friends[numFriends] = (Friend *) calloc(1, sizeof(Friend));
            frPtr = friends[numFriends];
            
            // Allocate memory for the name
            frPtr->name = (char *) calloc(LEN, sizeof(char));
            
            // Read in the name of the friend
            scanf("%s", frPtr->name);
            
            // Read in the number of things they like
            scanf("%d", &numLs);
            frPtr->numLike = numLs;
            
            // Allocate the 2d array for the like strings
            frPtr->likeStrings = 
                (char **) calloc(numLs, sizeof(char *));
                
            // Read in each string
            for (i = 0; i < numLs; i++)
            {
                // Allocate and read
                frPtr->likeStrings[i] = 
                    (char *) calloc(LEN, sizeof(char));
                scanf("%s", frPtr->likeStrings[i]); 
                
            }	
            
            // Read in the number of things they dislike
            scanf("%d", &numDs);
            frPtr->numDislike = numDs;
            
            // Allocate the 2d array for the like strings
            frPtr->dislikeStrings = 
                (char **) calloc(numDs, sizeof(char *));
                
            // Read in each string
            for (i = 0; i < numDs; i++)
            {
                // Allocate and read
                frPtr->dislikeStrings[i] = 
                    (char *) calloc(LEN, sizeof(char));
                scanf("%s", frPtr->dislikeStrings[i]); 
            }
            
            
            // Update the number of friends
            numFriends++;
        }
        else if (0 == strcmp(buf, LIKE_STRING))
        {
            // Print all the people that like a given animal
            char animal[LEN];
            
            int i, j;
            
            // Read in the name of the animal
            scanf("%s", animal);
            
            // Loop through all my friends!
            for (i = 0; i < numFriends; i++)
            {
                // Assume they don't have a strong opinion for the animal
                int likes = FALSE;
                
                // Look at all their likes
                for (j = 0; j < friends[i]->numLike; j++)
                {
                    if (0 == strcmp(animal, friends[i]->likeStrings[j]))
                    {
                        likes = TRUE;
                    }
                }
                
                if (likes == TRUE)
                {
                    printf("%s\n", friends[i]->name); 
                }
            }
            
            // Print an extra blank line for formatting
            printf("\n");
        }
        
        // Read in the next instruction
        scanf("%s", buf);
    }
    
    // Delete the friends
    deleteFriends(friends, numFriends);
    
    // Missed in clas
    return EXIT_SUCCESS;
}


void deleteFriends(Friend ** frs, int count)
{
    int i, j;
    
    // Loop through and destroy each friend
    for (i = 0; i < count; i++)
    {
        // -----------------Delete the name------------------------------
        free(frs[i]->name);
        
        // -----------------Delete the likes-----------------------------
        for (j = 0; j < frs[i]->numLike; j++)
        {
            // Free each string
            free(frs[i]->likeStrings[j]);
        }
        
        // Free the array of strings
        free(frs[i]->likeStrings);
        
        // ----------------Delete the dislikes---------------------------
        for (j = 0; j < frs[i]->numDislike; j++)
        {
            // Free each string
            free(frs[i]->dislikeStrings[j]);
        }
        
        // Free the array of strings
        free(frs[i]->dislikeStrings);
        
        // Free the friend
        free(frs[i]);
    }
    
    // Free the array of friends
    free(frs);
}
