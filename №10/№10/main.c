#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main()
{
	int _ON,
		_COFFEE,
		_STEAM,
		_READY;
start:
	_ON=0, _COFFEE=0, _STEAM=0, _READY=0;
	printf("Press 1 for ON or 0 for OFF(current condition: ");
	if(_ON==0)
		printf("OFF)\n");
	else 
		printf("ON)\n");
	scanf_s("%d", &_ON);
	switch (_ON)
	{
	case 1:
		break;
	case 0:
		goto start;
		break;
	}

	coffee:
	printf("Choose the desired of coffee(Press 11 for Espresso, press 0 for OFF machine)\n");
	_COFFEE = 0, _STEAM = 0, _READY = 0;
	scanf_s("%d", &_COFFEE);
	switch (_COFFEE)
	{
	case 11:

		break;
	case 0:
		goto start;
		break;
	default:
		goto coffee;
		break;
	}

	printf("Do you want a steam?(press 111 for agree, press 110 for disagree, press 0 for OFF)\n");
	scanf_s("%d", &_STEAM);
	switch (_STEAM)
	{
	case 111: 
		_STEAM = 1;
		break;
	case 110:
		_STEAM = 0;
		break;
	case 0:
		goto start;
		break;
	}

	printf("You choosed: coffee ");
	switch (_COFFEE)
	{
	case 11:
		printf("Espresso ");
		break;
	}
	switch (_STEAM)
	{
	case 0:
		printf("without steam.");
		break;
	case 1:
		printf("with steam.");
		break;
	}

	printf("\nIf you want to change of your selection press 1110\nFor making coffee press 1111\nFor OFF machine press 0: ");
	scanf_s("%d", &_READY);
	switch (_READY)
	{
	case 1110:
		goto coffee;
		break;
	case 1111:
		printf("MAKING COFFEE -> ");
		for (int i = 0; i < 10; i++)
		{
			Sleep(500);
			printf("#");
		}
		printf("\nCoffee is ready!");
		break;
	case 0:
		goto start;
		break;
	}
	getch();
}