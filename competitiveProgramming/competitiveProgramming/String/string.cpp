//
//  string.cpp
//  
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "string.hpp"


void string_permutations( char *ch){
    for (int i =0; i< strlen(ch); i++) {
        for (int j = i; j< strlen(ch); j++) {
            
        }
    }
}

void string_frequencyOfEvryChar(char *str){
    int frequency[26];
    char checker[26];
    int index = 0;
    char ch = 'a';

    //To initialize character array and respective frequency and store it in arrays
    while (index < 26) {
        checker[index] = ch;
        frequency[index] = 0;
        index++;
        ch = ch + 1;
    }
    
    index = 0;
    int index2 = 0;
    while (index< strlen(str)) {
        index2 = 0;
        while (index2 < 26) {
            if (str[index] == checker[index2]) {
                frequency[index2] = frequency[index2] + 1;
            }
            index2++;
        }
        index++;
    }
    
    //to print frequency of each character
    index = 0;
    while (index<26) {
        if (frequency[index] > 0) {
            printf("%c",checker[index]);
            printf("%d",frequency[index]);
            printf("\n");
        }
        index++;
    }
}

void string_adjacentDuplicate(char *str){
    int i = 0;
    while (i < strlen(str)) {
        printf("%c",str[i]);
        if (str[i] == str[i+1]) {
            i = i + 2;
        }else{
            i = i + 1;
        }
    }
}

void printStringUpto(char *str,int start, int upto);
void string_substringsAre(char *str,int start, int upto){
    if (upto == strlen(str)){
        printStringUpto(str,start,upto);
        return;
    }else{
        if (start == strlen(str)) {
            string_substringsAre(str ,0 ,upto+1);
        }else{
            string_substringsAre(str ,start + 1 ,upto);
            printStringUpto(str,start,upto);
        }
    }
}

void printStringUpto(char *str,int start, int upto){
    while (start <= upto) {
        printf("%c",str[start]);
        start++;
    }
    printf("\n");
}

void string_longestPalidromeSubstringIs(char *str){
    
}

void string_removeSpacesFromString(char str[]){
    int count = 0,i = 0;
    while (i<strlen(str)) {
        if (str[i] != ' '){
            str[count++] = str[i];
        }
        
        i++;
    }
    str[count] = '\0';
    printf("%s",str);
}

void string_checkIfPalindrome(char *str){
    int found = 0;
    int index = 0;
    int length = (int)strlen(str);
    while (index < length) {
        if (str[index] != str[length - 1 - index]) {
            found = 1;
            break;
        }
        index++;
    }
    printf("%d",found);
}

int string_minCharsTomakeItPalindrome(char *str){
    return 1;
}


void string_reverseArrayWithSpecialCharsFixed(char str[]){

}

void string_sentencePanagramOrNot(char *str){
    
}
