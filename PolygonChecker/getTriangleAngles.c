#include "getTriangleAngles.h"
#include <math.h>
#include<stdio.h>
#define PI 3.142857

double* getTriangleAngles (int* triangleSides, double* triangleAngles)
{
	double a = triangleSides[0];
	double b = triangleSides[1];
	double c = triangleSides[2];
	
	double cosA = (b*b + c*c - a*a) / (2 * b * c);
	double cosB = (a*a + c*c - b*b) / (2 * a * c);
	double cosC = (a*a + b*b - c*c) / (2 * a * b);

	triangleAngles[0] = acos(cosA) * 180 / PI;
	triangleAngles[1] = acos(cosB) * 180 / PI;
	triangleAngles[2] = acos(cosC) * 180 / PI;

	return triangleAngles;
}