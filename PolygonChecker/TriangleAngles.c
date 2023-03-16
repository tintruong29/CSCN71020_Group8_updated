#include "TriangleAngles.h"
#include <stdio.h>
#include <math.h>	

#define M_PI 3.14159265358979323846  /* pi */


//int* getTriangleSides(int* triangleSides)
//{
//	int scannedValues;
//
//	for (int i = 0; i < 3; i++)
//	{
//		do
//		{
//			printf_s("Enter the three sides of the triangle: ");
//			scannedValues = scanf_s("%d", &triangleSides[i]);
//			int buf;
//			while ((buf = getchar()) != '\n' && buf != EOF);
//		} while (scannedValues != 1);
//
//	} return triangleSides;
//
//
//}



double* getTriangleAngles(int* triangleSides, double* triangleAngles)
{

	double a = triangleSides[0];
	double b = triangleSides[1];
	double c = triangleSides[2];

	double cosA = (b * b + c * c - a * a) / (2 * b * c);
	double cosB = (c * c + a * a - b * b) / (2 * c * a);
	double cosC = (a * a + b * b - c * c) / (2 * a * b);
	

	triangleAngles[0] = acos(cosA) * (180 / M_PI);
	triangleAngles[1] = acos(cosB) * (180 / M_PI);
	triangleAngles[2] = acos(cosC) * (180 / M_PI);
	
	return triangleAngles;
}