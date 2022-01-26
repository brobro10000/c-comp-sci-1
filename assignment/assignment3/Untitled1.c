#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRMAX 20
//description of each stuff at said location
typedef struct Specs
{
    int cost; //cost of item m
    int weight;// weight of item w
    char type[STRMAX]; //name of item
    struct Specs * nextSpecs; //description of next item limited by dropped off item
}Specs;

//amount of stuff inside above location
typedef struct Stuff
{
    int amount; //number of bags n
    struct Stuff * nextStuff; //creation of item stacks
    struct Specs * nextSpecs;
}Stuff;

//location of dropped item struct
typedef struct Location
{
    int value; //drop off location k
    struct Location * next; //creation of next locale
    struct Stuff * amount;
}Location;

//output prototype (some test code within)
void printLocale(Location * start);
void printStuff(Stuff * start);
void printSpecs(Specs * start);
//linked list prototype
Location * createLocation(int, Location *);
Stuff * createStuff(int, Stuff *);
Specs * createSpecs(int,int,char[],Specs *);
//deleting from location
Location * nullCheck(int, Location * curNode);

int main(void){
	
	//initilizations of locations to NULL in referencing to structs
	Location * firstLocation;
    firstLocation = NULL;
	Stuff * firstStuff;
    firstStuff = NULL;
    Specs * firstSpecs;
    firstSpecs = NULL;
    //variables
	int input,i;//input and loops
	int locale,amount,cost,weight;//variables
	char item[STRMAX];//string
	scanf("%d", &input);//initial input
	//While loop for directives
	while(input!=0)
	{
	//adding to the list
	 if(input == 1)
		 {
	 	scanf("%d %d", &locale, &amount);//scans location and amount linked list 
	 	firstLocation = createLocation(locale, firstLocation);
	 	firstStuff = createStuff(amount, firstStuff);
		for(i=0; i<amount; i++)//scans for each iteration of amount
		{
		scanf("%d %d %s", &cost, &weight, item);
	 	firstSpecs = createSpecs(cost,weight, item, firstSpecs);
	 	}
	 	scanf("%d", &input);
		}
	 if(input == -1)
	 {
	 	scanf("%d %d %d", &locale, &cost, &weight);
	 	nullCheck(locale,firstLocation);
	 	//printf("%d %d %d", locale, cost, weight);
	 	scanf("%d", &input);
	}
		
	//removing from list
	}
	
	//test for outputs 
	    printLocale(firstLocation);
	    printStuff(firstStuff);
	    printSpecs(firstSpecs);
	return EXIT_SUCCESS;
}
//location linked list
Location * createLocation(int value, Location * nextLocation)
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
//stuff quantity link list
Stuff * createStuff(int amount, Stuff * nextStuff)
{
    Stuff * ret;

    ret = (Stuff *)calloc(1, sizeof(Stuff));

    if (ret == NULL) // Check for failed allocation
        return ret;
    // Initialize the return value with the passed parameters
    ret->amount = amount;
    ret->nextStuff = nextStuff;
    // Return the create value
    return ret;
}
//stuff content link list creation
Specs * createSpecs(int cost,int weight, char item[], Specs * nextSpecs)
{
    Specs * ret;
	int i;
    ret = (Specs *)calloc(1, sizeof(Specs));

    if (ret == NULL) // Check for failed allocation
        return ret;
    // Initialize the return value with the passed parameters
    ret->cost = cost;
    ret->weight = weight;
    strcpy(ret->type, item);
	ret->nextSpecs = nextSpecs;
	

    // Return the create value
    return ret;
}
//location null check
Location * nullCheck(int value, Location * curNode)
{
	if(curNode == NULL)
	{
		printf("0\n");
	}
	 if (curNode->value == value)
    {
        if (curNode->next != NULL)
            curNode->next = curNode->value;
        free(curNode);
        return NULL;
    }
    else 
    {
        return nullCheck(value, curNode->next);
    }
	
}




//output for location(test)
void printLocale(Location * start)
{
    while (start != NULL)
    {
        printf("%d ->  ", start->value);
        start = start->next;
    }
    
    printf("NULL\n");
}

//output for amount(test)
void printStuff(Stuff * start)
{
    while (start != NULL)
    {
        printf("%d ->  ", start->amount);
        start = start->nextStuff;
    }
    
    printf("NULL\n");
}

//output for specs(test)
void printSpecs(Specs * start)
{
    while (start != NULL)
    {
        printf("%d %d %s ->  ", start->cost , start->weight, start->type);
        start = start->nextSpecs;
    }
    
    printf("NULL\n");
}

