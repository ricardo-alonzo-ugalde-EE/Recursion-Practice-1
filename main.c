/*
Intro to recursive statements
n! = {n*(n-1)! if  n=> 1} 1 Otherwise if n = 0
*/


#include <stdio.h>

// C version of mathematical expression: n! = {n*(n-1)! if  n=> 1} 1 Otherwise if n = 0
int factorial(int n)
{
	if (n >= 1)
	{
		return n * factorial(n - 1);
		
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n = 5;
	int result;
	result = factorial(n);
	printf("The result of the recursion is %d:", result);
}