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
    
    //Shift all the elements one position right
    int i = 1;
    while (i<size) {
        f = arr[i];
        arr[i] = f;
        i++;
    }
    
    //Put the last element in first position
    arr[0] = last;
    
    //Print the modified array
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

int array_missingnumber(int arr[], int n){
    
    //Sum of numbers from 1 to n
    int total = n*(n - 1)/2;
    
    //sum of all the array elements
    int sum = 0;
    int i = 0;
    
    while (i<sum) {
        sum = sum + arr[i];
        i++;
    }
    
    int missingNumber = total - sum ;
    return missingNumber;
}

void array_leaderis(int arr[], int n){

    int max = 0;
    int i =0 ; //Index
    
    //Check from Right side of array and put max element in max if some element is greater than max then its the leader
    while (i<n) {
        if (arr[n-1 -i] > max){
            max = arr[n -1-i];
            printf("%d ",max);
        }
        i++;
    }
    
}
