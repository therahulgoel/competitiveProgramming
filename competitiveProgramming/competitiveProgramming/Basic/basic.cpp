//
//  basic.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "basic.hpp"

void basic_printHello(){
    printf("Hello World");
}

void basic_countNumberOfDigits(int number){
    int count = 0;
    while (number > 0) {
        count = count + 1;
        number = number/10;
    }
    printf("Number of digits : %d \n",count);
}

void basic_armstrongOrNot(int number){
    
}
