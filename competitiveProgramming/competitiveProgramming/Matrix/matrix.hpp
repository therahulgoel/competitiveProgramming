//
//  matrix.hpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//


#include <stdio.h>

//Matrix to be used for test purposes
static int matrixTest[][3] =  {{1,2,3},
    {4,5,6},
    {7,8,9}};

#define row 3
#define col 3


//1. To Print given 2D matrix of size 3*3 Time - O(row*col)
void matrix_2Dprint(int mat[row][col]);

//2. Search given element x, in a row wise and column wise sorted matrix of size n*n - Time- O(row+col)
int matrix_searchInRowAndColumnWiseSorted(int element, int mat[row][col]);
//3. Rotate given n*n matrix by 90 degree
void matrix_2DRotate90Degree();

//4. Print given matrix in spiral form
void matrix_spiralForm(int mat[][col]);

