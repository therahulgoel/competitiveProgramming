//
//  search.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "search.hpp"

int search_linear(int arr[],int e, int size){
    //To Return positon of element if found else return -1
    int position = -1;
    for (int i = 0; i<size; i++) {
        if (arr[i] == e){
            position = i;
            break;
        }
    }
    return position;
}

void search_binary(int arr[], int e, int size){
    
}
