#include "GetLength.h"
#include <stdio.h>
#include <math.h>

double GetLength(POINT A, POINT B)
{
	double Length = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));

	return Length;
}