/*
 * Function to take a matrix as input and print the values
 */

#include <stdio.h>

// preprocessor directive
// whenever your program gets compiled
// first of all these directives are taken care
// #define x 3, all occurrences of x will be replaced by 3
// before your program is executed
#define COLS 3

void printMatrix(int mat[][COLS], int rows, int cols) {
	printf("Printing the input matrix: \n");
	for (int i = 0; i < rows; i ++) {
		for (int j = 0; j < cols; j ++) {
			printf("%d ", mat[i][j]);
		}
		// end of row
		printf("\n");
	}
}

int main () {

	int mat[3][3];
	printf("Please enter a 3x3 matrix values: \n");
	for (int i = 0; i < 3; i ++) {
		for (int j = 0; j < 3; j ++) {
			scanf("%d", &mat[i][j]);
		}
	}
	printMatrix(mat, 3, 3);

	// initializing a 2D array
	int mat2[][3] = {
		{1, 2},
		{4, 5, 6},
		{7, 8, 9}
	};
	printMatrix(mat2, 3, 3);
	return 0;
}
