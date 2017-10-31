//
//  recursion.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "recursion.hpp"

void recursion_SumOfNumbersFromList(){

}


void recursion_SumOfNNaturalNumbers(){

}


int recursion_numberOfChars(const char *str,int index){
    
    if (str[index] == '\0'){
        return 0;
    }
    else{
        return 1 + recursion_numberOfChars(str,++index);
    }
}
