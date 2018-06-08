#include <stdio.h>
#include <stdbool.h>

void InputArr(int*, int*);
void CalcAmountOfWater(int*, int*);
int SearchMax(int*, int*);

int main()
{
	int *arr, n;
	printf("Enter the size of the array: ");
	scanf_s("%d", &n);
	arr = malloc(n * sizeof(int));
	InputArr(arr, &n);
	CalcAmountOfWater(arr, &n);
	getch();
	return 0;
}

void InputArr(int *arr, int *n)
{
	for (int i = 0; i < *n; i++)
	{
		printf("Enter of the element %d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}
}

void CalcAmountOfWater(int *arr, int *n)
{
	int currCount = 0, allCount = 0, curr = 0, max;
	max = SearchMax(arr, n);
	for (int tmp = 1; tmp <= max; tmp++)
		for (int i = 0; i < *n; i++)
			if (arr[i] == tmp)
			{
				currCount = 0;
				for (int j = i; j < *n; j++)
				{
					if (arr[i] > arr[j])
						currCount++;
					if (arr[j] >= arr[i])
					{
						allCount += currCount;
						currCount = 0;
					}
				}
				break;
			}
	printf("Amount of water: %d", allCount);
}

int SearchMax(int *arr, int *n)
{
	int max = arr[0];
	for (int i = 0; i < *n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}