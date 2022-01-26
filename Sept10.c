#include <stdio.h>
#include <stdlib.h>

double recursion(int);

int main(){
	printf("%lf\n", recursion(21));
	printf("%lf\n", recursion(1));
	printf("%lf\n", recursion(2));
	
	return EXIT_SUCCESS;
}

double recursion(int x)
{
	// recursion stop when
	// base case
	if (x<1)
	{
		if (x==0)
		{
			//hit my target
			return 1.0;
		}
		else
		{
			//no way to hit target
			return 0.0;
		}
	}
	//store answer for getting a vlue of x
	double answer = 0.0;
	int i;
	// 2 through 10
	for (i=2; i<=10; i++)
	{
	answer += (1.0/13) * recursion(x- i);	
	}
	
	// JQK
	answer += (3.0/13) * recursion(x-10);
	
	return answer;
	
}
