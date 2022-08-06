/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1, m2 = 0;
	float avg;
	int tot;
	
	printf("Enter two marks:");
	scanf("%d %d", &m1, &m2);
	
	tot= m1 + m2;
	avg = (float)tot / 2;
	
	printf("Average is: %.2f\n",avg);
  
  return 0;
}

