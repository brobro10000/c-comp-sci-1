#include <stdlib.h>
#include <stdio.h>


double recursion(int);

int main()
{
    printf("%lf\n", recursion(1));
    printf("%lf\n", recursion(2));
    printf("%lf\n", recursion(31));
    
    return EXIT_SUCCESS;
}

double recursion(int x)
{
    // recursion should stop when...
    if (x < 1)
    {
        if (x == 0)
        {
        //	printf("Depth is %d\n", depth);
            // Hit my target w00t
            return 1.0;
        }
        else
        {
        //	printf("Depth is %d\n", depth);
            // No way to hit my target :(
            return 0.0;
        }
    }
    
    // Store the answer for getting a value of x
    double answer = 0.0;
    
    // Our countin variable (not neccessary)
    int i;
    
    // A and 2 through 10
    
        answer += (1.0 / 13) * recursion(x - 2);
        answer += (1.0 / 13) * recursion(x - 3);
        answer += (1.0 / 13) * recursion(x - 4);
        answer += (1.0 / 13) * recursion(x - 5);
        answer += (1.0 / 13) * recursion(x - 6);
        answer += (1.0 / 13) * recursion(x - 7);
        answer += (1.0 / 13) * recursion(x - 8);
        answer += (1.0 / 13) * recursion(x - 9);
        answer += (1.0 / 13) * recursion(x - 10);
        answer += (1.0 / 13) * recursion(x - 1);
        
    
    
    // J Q K
    answer += (1.0 / 13) * recursion(x - 10);
      answer += (1.0 / 13) * recursion(x - 10);
        answer += (1.0 / 13) * recursion(x - 10);
    
    // We merged our answers together now we return them.
    return answer;
}
