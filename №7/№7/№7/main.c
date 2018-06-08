#include <stdio.h>

void InputData(int*, int*);
void LenghtCalc(int*, int*, int*, int*);
void OutputData(int*, int*);

int main()
{
	int d, n, lenght = 0, countOfOperation = 0;
	InputData(&d, &n);
	LenghtCalc(&d, &n, &lenght, &countOfOperation);
	OutputData(&lenght, &countOfOperation);
	getch();
	return 0;
}

void InputData(int *d, int *n)
{
	printf("Input the lenght between the sensors: ");
	scanf_s("%i", d);
	printf("Input the number of sensors: ");
	scanf_s("%i", n);
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
	printf("Wire lenght: %i", *lenght);
	printf("\nCount of operation: %i", *countOfOperation);
}