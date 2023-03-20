#include "RectangleSolver.h"
#include <stdio.h>
#include <math.h>

char* RectangleSolver(double AB, double AC, double AD, double BC, double BD, double CD)
{
	char* result = "";
	if (AB > AC&& AB > AD)
	{
		if ((AB*AB) == (CD*CD) && AB == sqrt(AC*AC + AD*AD) && AB == sqrt(BC*BC + BD*BD))
		{
			result = "This is a rectangle";

		}
		else
		{
			result = "This is not a rectangle";
		}
		
	}
	else if (AC > AB && AC > AD)
	{
		if ((AC*AC) == (BD*BD) && AC == sqrt(AB*AB + AD*AD) && AC == sqrt(BC*BC + CD*CD))
		{
			result = "This is a rectangle";
		}
		else
		{
			result = "This is not a rectangle";
		}
	}

	else if (AD > AB && AD > AC)
	{
		if ((AD*AD) == (BC*BC) && AD == sqrt(AB*AB + AC*AC) && AD == sqrt(BD*BD + CD*CD))
		{
			result = "This is a rectangle";
		}
		else
		{
			result = "This is not a rectangle";
		}
	}

	return result;
}

double GetPerimeterForShapeNotRec(double num1, double num2, double num3, double num4)
{
	double Perimeter = num1 + num2 + num3 + num4;
	return Perimeter;
}

double GetRecPerimeter(double length, double width)
{
	double RecPerimeter = length *2 + width *2;
	return RecPerimeter;
}

double GetRecArea(double length, double width)
{
	double RecArea = length * width;
	return RecArea;
}