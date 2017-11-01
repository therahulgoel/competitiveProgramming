//
//  recursion.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "recursion.hpp"

int recursion_SumOfNumbersFromList(int *arr, int size){
    if (size <= 0){
        return arr[size];
    }else{
        return arr[size] + recursion_SumOfNumbersFromList(arr,size - 1);
    }
}


void recursion_SumOfNNaturalNumbers(){

}


int recursion_numberOfChars( char *str,int index){
    
    if (str[index] == '\0'){
        return 0;
    }
    else{
        return  1 + recursion_numberOfChars(str,++index);
    }
}

void recursion_reverseOfString(char *str, int index){
    if (str[index] == '\0'){
        return ;
    }else{
        recursion_reverseOfString(str, ++index);
        printf("%c",str[index]);
    }
}
