//
//  mathematical.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "mathematical.hpp"

void mathematical_gcd(int a, int b){
    
}

void mathematical_lcm(int a, int b){
    
}

void mathematical_hcf(int a, int b){
    
}

void mathematical_primeornot(int number){
    
}

void mathematical_fibonacciseries(int upto){
    
}

int mathematical_factorial(int number){
    int fact = 1;
    int i = 0 ; //Index
    
    while (i<number) {
        fact = fact * (number - i);
        i = i + 1;
    }
    
    
    return fact;
}

void mathematical_sumofnnumbers(int number){
    int sum = number*(number + 1)/2;
    printf("Sum : %d",sum);
}
