//
//  patternPrint.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "patternPrint.hpp"

void pattern_1(int n){
    for (int i=0; i<n; i++) {
        for (int j =0; j<n; j++) {
            printf("*");
        }
        printf("\n");
    }
}


void pattern_2(int n){
    for (int i =0; i<n; i++) {
        for (int j=0; j< i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern_3(int n){
    for (int i =0; i<n; i++) {
        for (int j=0; j< n; j++) {
            if ( j < n- i -1){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}

void pattern_4(int n){
    for (int i =0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (j < n-i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pattern_5(int n){
    for (int i =0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (j < i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}

void pattern_6(int n){
    

}

void pattern_7(int n){
    pattern_2(n);
    pattern_4(n-1);
}


void pattern_8(int n){
    pattern_3(n);
    for (int i =0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (j< i +1){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}
