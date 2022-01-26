#include <stdlib.h>
#include <stdio.h>


double recursion(int);

int main()
{
    printf("%lf\n", recursion(1));
    printf("%lf\n", recursion(2));
    printf("%lf\n", recursion(21));
    
    return EXIT_SUCCESS;
}

double recursion(int x)
{
    // recursion should stop when...
    if (x < 1)
    {
        if (x == 0)
        {
            // Hit my target w00t
            return 1.0;
        }
        else
        {
            // No way to hit my target :(
            return 0.0;
        }
    }
    
    // Store the answer for getting a value of x
    double answer = 0.0;
    
    // Our countin variable (not neccessary)
    int i;
    
    // A and 2 through 10
    for (i = 1; i <= 10; i++)
    {
        answer += (1.0 / 13) * recursion(x - i);
    }
    
    // J Q K
    answer += (3.0 / 13) * recursion(x - 10);
    
    // We merged our answers together now we return them.
    return answer;
}
