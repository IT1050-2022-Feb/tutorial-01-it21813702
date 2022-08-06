/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int num; 
	int i; //count
	
	printf("enter number: ");
	scanf("%d", &num);
	
	while(num != 0) //so that entering 0 will terminate program.
	{
		int sum = 0;
		
		if(num < 0){
			num = num * -10;
		}
		
		for(i=1; i<=num ; i++)
		{
			sum = sum + i;
		}
		
		printf("sum is: %d\n", sum);
		
		printf("enter number: ");
		scanf("%d", &num);
		
	}
	
	printf("number invalid!\n");
  
  return 0;
}

