#include <stdio.h>
#include <stdbool.h>
#include "getTriangleAngles.h"
#include "main.h"
#include "triangleSolver.h"
#include "RectangleSolver.h"

int side = 0;

int main() {
	bool continueProgram = true;
	while (continueProgram) 
	{
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
			case 1:
				{
					printf_s("Triangle selected.\n");
					int triangleSides[3]= { 0, 0, 0 };
					int* triangleSidesPtr = getTriangleSides(triangleSides);
					//printf_s("! %d\n", triangleSidesPtr[0]);
					char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
					printf_s("\n%s\n", result);

					if (result != "Not a triangle") 
					{
						double triangleAngles[3] = { 0, 0, 0 };
						getTriangleAngles(triangleSides, triangleAngles);
						printf("\nAngle 1:\t%.2lf\nAngle 2:\t%.2lf\nAngle 3:\t%.2lf\n", triangleAngles[0], triangleAngles[1], triangleAngles[2]);
					}
			
					break;
				}

			case 2:
				{
				POINT A = { 0, 0 };
				A = GetPoint(A);
				printf("\nPoint A (%.2lf, %.2lf)\n", A.x, A.y);

				POINT B = { 0, 0 };
				B = GetPoint(B);
				printf("\nPoint B (%.2lf, %.2lf)\n", B.x, B.y);

				POINT C = { 0, 0 };
				C = GetPoint(C);
				printf("\nPoint C (%.2lf, %.2lf)\n", C.x, C.y);

				POINT D = { 0, 0 };
				D = GetPoint(D);
				printf("\nPoint D (%.2lf, %.2lf)\n", D.x, D.y);

				double AB = GetLength(A, B);
				//printf("\n%.2lf\n", AB);
				double AC = GetLength(A, C);
				//printf("\n%.2lf\n", AC);
				double AD = GetLength(A, D);
				//printf("\n%.2lf\n", AD);
				double BC = GetLength(B, C);
				//printf("\n%.2lf\n", BC);
				double BD = GetLength(B, D);
				//printf("\n%.2lf\n", BD);
				double CD = GetLength(C, D);
				//printf("\n%.2lf\n", CD);

				char* result = RectangleSolver(AB, AC, AD, BC, BD, CD);
				printf_s("\n%s\n", result);

				if (result != "This is a rectangle")
				{
					double P = GetPerimeterForShapeNotRec(AB, BC, CD, AD);
					printf("\nThe perimeter of this shape is %.2lf\n", P);
				}
				else if (result == "This is a rectangle")
				{
					if (AB > AC && AB > AD)
					{
						double perimeter = GetRecPerimeter(AC, AD);
						printf("\nThe perimeter of this rectangle is %.2lf\n", perimeter);
						double area = GetRecArea(AC, AD);
						printf("\nThe area of this rectangle is %.2lf\n", area);
					}
					else if (AC > AB && AC > AD)
					{
						double perimeter = GetRecPerimeter(AB, AD);
						printf("\nThe perimeter of this rectangle is %.2lf\n", perimeter);
						double area = GetRecArea(AB, AD);
						printf("\nThe area of this rectangle is %.2lf\n", area);

					}
					else if (AD > AB && AD > AC)
					{
						double perimeter = GetRecPerimeter(AB, AC);
						printf("\nThe perimeter of this rectangle is %.2lf\n", perimeter);
						double area = GetRecArea(AB, AC);
						printf("\nThe area of this rectangle is %.2lf\n", area);
					}
				}
				
				break;
				}
			

			case 0:
				continueProgram = false;
				break;

			default:
				printf_s("Invalid value entered.\n");
				break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("1. Triangle\n");
	printf_s("2. Rectangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides)
{
	int scannedValues;

	for (int i = 0; i < 3; i++)
	{
		do
		{
			printf_s("Enter a side of the triangle: ");
			scannedValues = scanf_s("%d", &triangleSides[i]);
			int buf;
			while ((buf = getchar()) != '\n' && buf != EOF);
		} while (scannedValues != 1);

	} 
	return triangleSides;
}

// Part 1. Add features

// Modify this function to accept any input given by the user
// Check is it a number? => Check if the numbers given can form a triangle
// Output the three inside angles of the triangle

// Write a function accept four points. Ask the user to enter the x and y one at a time
// Validation input
// Generate four lines and determine if those form a rectangle
// Report the shape's perimeter, and if it is a rectangle also report is area.

 // Part 2. Test

// 1. Type of triangle functionality
// 2. Triangle inside angle functionality
// 3. 4 points functionality

 // Part 3. Test Report

