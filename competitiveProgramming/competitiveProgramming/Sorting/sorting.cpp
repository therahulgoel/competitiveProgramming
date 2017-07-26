//
//  sorting.cpp
//  DS
//
//  Created by Rahul Goel on 6/20/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "sorting.hpp"
#define SIZE 5

//Test Array for Sorting Purposes
int arr[] = {8,1,4,2,5};


/*After every pass one element will be its right position i.e. the highest will be in the end after first pass 
 So no need to compare those last elements
 if there is no swap at all means things are already sorted so we can Break
 */
void sort_bubble(){
    int tmp = 0,swappedOnce= 0;
    for (int i=0; i<SIZE; i++) {
        swappedOnce = 0;
        for (int j=0; j<SIZE - i - 1; j++) {
            if (arr[j] > arr[j+1]){
                //To swap the both 
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swappedOnce = 1;
            }
        }
        
        //If no element is swapped in inner loop then Break
        if (swappedOnce == 0){
            break;
        }
    }
}

/*
works the way we sort playing cards in our hands
 
 */
void sort_insertion(){
    int tmp = 0,swappedOnce= 0,item = 0;
    for (int i=0; i<SIZE; i++) {
        item = arr[i];
        for (int j=0; j< i+1; j++) {
            if (arr[j] > item){
                
                
            }
        }
        
        //If no element is swapped in inner loop then Break
        if (swappedOnce == 0){
            break;
        }
    }
}

void sort_printArrayElements(){
    for (int i=0; i<SIZE; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
