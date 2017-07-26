//
//  array.hpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#ifndef array_hpp
#define array_hpp

#include <stdio.h>

//1. To Left - Rotate given array of size n by d elements With Different methods - O(n) Time
void array_rotateLeftBydElements(int arr[],int size,int d);

//2. To cyclically Right- Rotate given array arr by one-element with size n - O(n) Time
void array_rotateCyclicallyby1(int arr[],int size);

//3. Search an element d in a sorted and rotated array arr with size n - O(log(n)) Time
void array_searchInSortedAndRotatedarray(int arr[],int size, int d);

//4. To print all elements in given array
void array_printelements(int arr[],int size);

#endif /* array_hpp */
