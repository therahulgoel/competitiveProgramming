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

//4. To print all elements in given array - Time - O(n)
void array_printelements(int arr[],int size);

//5.  Equilibrium point : In given array arr find position on which sum of all the left elements are equal to all the right elements if exists, if not return -1 Time - O(n)
int array_equilibriumpoint(int arr[], int n);

//6. Missing number in given array - consider array contain elements from 1 t0 n-1 except one number missing Time - O(n)
int array_missingnumber(int arr[], int n);

//7. Kadane's algorithm : For given array arr (with +ve and -ve values) find contiguous sub-array with max sum.


//8. Find contiguous sub array which adds to given number. (Array contains only positive numbers)


//9. Find contiguous sub array which adds to given number. (Array may contain negative numbers as well)


//10. Program to sort the given array with only 0,1,2 in ascending order. Or (Dutch National Flag Problem)


//11. Leaders in Array : an element is leader if it is greater than all elements to its right side. Rightmost element in array is always leader. Time O(n)
void array_leaderis(int arr[], int n);

//12. Find kth smallest element in given array of size n where k<n and all elements are distinct.
void array_kthSmallestElement(int arr[],int n);

//13. Find element that appears once in array, in which every other element appear thrice. Time - O(n)
int array_appearOnceOtherOccurThrice(int arr[],int n);

//14. For an array in which every other element appear twice, find element that appears once. - Time O(n)
int array_appearOnceOtherOccurTwice(int arr[],int n);


#endif /* array_hpp */
