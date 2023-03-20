#include "GetPoint.h"
#include <stdio.h>

POINT GetPoint(POINT P)
{
	int scannedValues;

	do
	{
		printf("\nPlease enter the x coordinate: ");
		scannedValues = scanf_s("%lf", &(P.x));
		int buf;
		while ((buf = getchar()) != '\n' && buf != EOF);
	} while (scannedValues != 1);

	do
	{
		printf("\nPlease enter the y coordinate: ");
		scannedValues = scanf_s("%lf", &(P.y));
		int buf;
		while ((buf = getchar()) != '\n' && buf != EOF);
	} while (scannedValues != 1);
	
	return P;
}


