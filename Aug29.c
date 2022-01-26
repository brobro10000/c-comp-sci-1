#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Better to exchange the whole pointer rather than blocks of data , good for the ship thingy
// frPtr -> name pointer to friend (Friend*frPtr)
// (*frPtr).name == frPtr->name == frPtr[0].name dereferncing pointer
// frPtr[0].name


int main(void){
	int number = 0;
	int guess =-1;
	int max = -1;
	int count = 0;
	scanf("%d", &max);
	if(max<=0)
	{
		printf("Error Number was not positive.\n");
		
		return EXIT_FAILURE;
	}
	
	srand(time(0));
	number = rand() % (max+1);
	
	int low = 0;
	int high = max;
	while(number != guess)
	{
		guess = (low + high) / 2;
		//scanf("%d", &guess);
		printf("The guess was %d\n", guess);
		if(guess < number)
		{
			printf("Guess is too low\n");
			low = guess + 1;
		}
		if (guess > number)
		{
			printf("Guess is too high\n");
			high = guess - 1;
		}
		
		count++;
	}
	printf("The number of guesses were %d\n", count);
	printf("The number was %d\n",number);
	return EXIT_SUCCESS;
}
