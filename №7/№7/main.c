#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void LenghtCalc(int*, int*, int*, int*);
void OutputData(int*, int*);

int main(int argc, char **argv)
{
	int d, n, lenght = 0, countOfOperation = 0;
	n = atoi(argv[1]);
	d = atoi(argv[2]);
	LenghtCalc(&d, &n, &lenght, &countOfOperation);
	OutputData(&lenght, &countOfOperation);
	return 0;
}

void LenghtCalc(int *d, int *n, int *lenght, int *countOfOperation)//The complexity of the algorithm is O(2N)
{
	for (int i = *n; i > 0; i--)
	{
		*lenght += ((*d)*i);
		*countOfOperation+=2;
	}
}

void OutputData(int *lenght, int *countOfOperation)
{
	printf("Wire lenght: %d", *lenght);
	printf("\nCount of operation: %d", *countOfOperation);
}