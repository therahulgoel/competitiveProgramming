//
//  matrix.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "matrix.hpp"

void matrix_test2DCreate(){
    for (int i =0; i<3; i++) {
        for (int j =0; j<3; j++) {
            printf("%d ",matrixTest[i][j]);
        }
        printf("\n");
    }
}

int matrix_searchInRowAndColumnWiseSorted(int row, int col, int mat[][col],int element){
    int found = 0;
    int index = 0;
    while (index < (row + col)) {
        if (element < mat[row][col]){
            col --;
        }
        if (element > mat[row][col]){
            row++;
        }
        if (element == mat[row][col]){
            found  = 1;
            break;
        }
        index++;
    }
    
    printf("%d",found);
    return found;
}

void matrix_2Dprint(int row, int col, int mat[][col]){
    for (int i =0; i<row; i++) {
        for (int j =0; j<col; j++) {
            printf("%d ",matrixTest[i][j]);
        }
        printf("\n");
    }
}
