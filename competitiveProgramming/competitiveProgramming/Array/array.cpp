//
//  array.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "array.hpp"

void array_rotateLeftBydElements(int arr[],int size,int d){
    
}

void array_rotateCyclicallyby1(int arr[],int size){
    //To store last element seprately
    int last = arr[size -1];
    int f = arr[0];
    
    int i = 1;
    while (i<size) {
        f = arr[i];
        arr[i] = f;
        i++;
    }
    
    arr[0] = last;
    
    array_printelements(arr, size);
}

void array_searchInSortedAndRotatedarray(int arr[],int size, int d){
    
}

void array_printelements(int arr[], int size){
    int i =0;
    printf("Array is : \n");
    while (i<size) {
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}
