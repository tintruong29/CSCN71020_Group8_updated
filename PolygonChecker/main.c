#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "main.h"
#include "triangleSolver.h"

int side = 0;

int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			printf_s("! %d\n", triangleSidesPtr[0]);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("%s\n", result);

			double triangleAngles[3] = { 0,0,0 };
			getTriangleAngles(triangleSides, triangleAngles);

			break;
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
			printf_s("Enter the three sides of the triangle: ");
			scannedValues = scanf_s("%d", &triangleSides[i]);
			int buf;
			while ((buf = getchar()) != '\n' && buf != EOF);
		} 
		while (scannedValues != 1);
			
	} return triangleSides;
	
	
}



// Part 1. Add features

// Modify getTriangleSides function to accept any input given by the user
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

