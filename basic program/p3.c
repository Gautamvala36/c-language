// write a program to accept age from user 

#include<stdio.h>

void main() 
{
	int age;

	printf("Enter your age\n");
	scanf("%d", &age);

    (age>=18) ?
    printf("Yes, you are eligible for voting!") :
    printf("You, you are not eligible for voting!");

	
}