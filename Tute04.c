/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int multiply(int x, int y);
int minimum(int no1,int no2);
int maximum(int no1,int no2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int multiply(int x, int y)
{
	int prod = x * y;
	
	return prod;
}

int minimum(int x, int y)
{
	int min;
	
	if(x > y)
	{
		min = y;
	}
	else
	{
		min = x;
	}
	
	return min;
}

int maximum(int x, int y)
{
	int max;
	
	if(x > y)
	{
		max = x;
	}
	else
	{
		max = y;
	}
	
	return max;
}
