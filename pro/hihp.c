// Hollow Inverted Half Pyramid
// 1 2 3 4 5
// 2     5
// 3   5
// 4 5
// 5
#include <stdio.h>

void main()
{
	int count = 0, space = 0, n = 5, tamp = 0,mypri = 2;

	for (count = 0; count < n; count++)
	{
		printf("%d ", count + 1);
	}
	printf("\n");

	for (tamp = n-1; tamp > 0; tamp--)
	{
		for (count = n; count < tamp; count++)
		{
			printf(" ");
		}
		printf("%d",mypri);
		mypri++;
		for (space = 0; space <= tamp; space++)
		{
			printf(" ");
		}
		printf("5");
		printf("\n");
	}
}