/*
Author: Ciro Salcedo
Course: Intro to C
Instructor:Gilbert Pajela
Assignment:

This program repetively adds digits to recieve a single digit number
*/

#include <stdio.h>


int singledigit(int number);
int answer, input;
int main()
{
	printf("insert any non-negative integer\n");
	scanf("%i", &input);

	answer = singledigit(input);

	if(answer >= 10)
	{
		answer = singledigit(answer);
  	
	}
	printf("%i\n", answer);	
	return 0;
}

int singledigit(int number)
{
	int sum = 0;
	int digit;
	int original = number;
	int loopnumber = 1;
	do//loop until the input is a single digit number
	{ 	
		digit = number%10;
		number = (number - digit)/10;
		sum = sum + digit;//set the number to the sum so the loop continues with the right number
		loopnumber = loopnumber*10;
	}while (original - loopnumber > 0 || number > 9);
	number = sum;
}

