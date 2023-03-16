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



void getTriangleAngles(int* triangleSides, double* triangleAngles)
{
	// a = 2, b = 6, c = 5

	double cosA, cosB, cosC;
	double A, B, C;
	double a = triangleSides[0];
	double b = triangleSides[1];
	double c = triangleSides[2];

	cosA = (b * b + c * c - a * a) / (2 * b * c);
	cosB = (c * c + a * a - b * b) / (2 * c * a);
	cosC = (a * a + b * b - c * c) / (2 * a * b);
	

	A = acos(cosA) * (180 / M_PI);
	B = acos(cosB) * (180 / M_PI);
	C = 180 - (A + B);

	printf("angle A is: %lf\n angle B is: %lf\n angle C is: %lf\n", A, B, C);
	// correct

	
}