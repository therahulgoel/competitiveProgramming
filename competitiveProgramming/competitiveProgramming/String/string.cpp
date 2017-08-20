//
//  string.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "string.hpp"


int string_numberOfchars(char *str){
    int count =0;
    while (*str != '\0') {
        count = count + 1;
        str = str + 1;
    }
    return count;
}

void string_reverseOfSentence(char *str){
}

void string_reverseOfString(char *str){
    int count = string_numberOfchars(str);
    int index = 0;
    while (index < count) {
    
        
        str = str + 1;
        index = index + 1;
    }
}


int string_frequencyOfEveryDistinctCharacter(char *str){
    int freq =0;
    return freq;
}

char string_maximumOccuringChar(char *str){
    char ch;
    return ch;
}

void string_allPermutationsOf(char *str){

}

