//
//  search.hpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#ifndef search_hpp
#define search_hpp

#include <stdio.h>

//1. Linear Search "To search an element e in given array arr of size n" - O(n) Time
int search_linear(int arr[],int e,int size);

//2. Binary Search  - O(log(n)) Time
void search_binary(int arr[], int e, int size);

#endif /* search_hpp */
