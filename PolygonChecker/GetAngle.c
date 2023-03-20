#include "GetAngle.h"
#include <stdio.h>
#include <math.h>
#define PI 3.142857

double GetAngle(double Side1, double Side2, double Side3)
{
	double Angle = acos((Side2 * Side2 + Side3 * Side3 - Side1 * Side1) / (2 * Side2 * Side2)) * 180 / PI;
	return Angle;
}