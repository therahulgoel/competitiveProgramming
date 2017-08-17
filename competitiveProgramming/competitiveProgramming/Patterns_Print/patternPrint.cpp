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



