/*
Author: Ciro Salcedo
Course: Intro to C
Instructor:Gilbert Pajela
Assignment:

This program sorts three number in descending value
*/

#include <stdio.h>
void sort(double num1, double num2, double num3);
void check();

double in1, in2, in3;
int main()
{
	printf("Please give me three numbers to sort: ");
	scanf("%d %d %d", &in1, &in, &in3);
	sort(in1, in2, in3);
	return 0;
}

double sort(double num1, double num2, double num3)
{
	
}

void check()
{
	if(in1 < in2 && in2 < in3)
	{
		printf("%d %d %d", in1, in2, in3);
	}	
}


