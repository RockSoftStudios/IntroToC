/*
Author: Ciro Salcedo and Brin Brody
Course: Intro to C
Instructor:Gilbert Pajela
Assignment:

This program
*/

#include <stdio.h>
int main()
{
	unsigned int n,k;
	printf("n: ");
	scanf("%i", &n);
	k=n+1;
	while(k>n){
		printf("Enter a value for k that is less than or equal to n: ");
		scanf("%i", &k);
	}
	int final = 1;
	for(int i = 1; i<n +1; i++)
	{
		final *= i;
	}
	int factn = final;
	printf("%i\n", factn);
	final = 1;
	for(int i = 1; i<k +1; i++)
	{
		final *= i;
	}
	int factk = final;
	printf("%i\n", factk);
	final = 1;
	for(int i = 1; i<(n-k) +1; i++)
	{
		final *= i;
	}
	int factnk = final;
	printf("%i\n", factnk);
	int result = factn/(factk*factnk);
	printf("%i\n", result);
	return 0;
}
