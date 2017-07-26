//
//  sorting.hpp
//  DS
//
//  Created by Rahul Goel on 6/20/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#ifndef sorting_hpp
#define sorting_hpp

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>

//1. Bubble Or Sinking Sort - O(n^n) Time
void sort_bubble();

//2. Heap Sort - O(n^log(n)) Time
void sort_heap();

//3. Selection Sort - O(n^n) Time
void sort_selection();

//4. Insertion Sort   - O(n^n) Time
void sort_insertion();

//5. Quick Sort   - O(n^n) Time
void sort_quick();

//6. Merge Sort
void sort_merge();

//7. Radix Sort
void sort_radix();


void sort_printArrayElements();

#endif /* sorting_hpp */
