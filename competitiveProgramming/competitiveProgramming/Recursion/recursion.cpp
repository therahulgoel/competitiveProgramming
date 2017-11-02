//
//  recursion.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "recursion.hpp"

//As Its not suggestable to return local variable outside the function So use this array in case you need to return Array or list of elements
static int *arrayTmp;

void getWordAndAddItToArray(char *str,int length);

int recursion_SumOfNumbersFromList(int *arr, int size){
    if (size <= 0){
        return arr[size];
    }else{
        return arr[size] + recursion_SumOfNumbersFromList(arr,size - 1);
    }
}


int recursion_SumOfNNaturalNumbers(int upto){
    if (upto <= 0){
        return 0;
    }else{
        return upto + recursion_SumOfNNaturalNumbers(upto - 1);
    }
}


int recursion_numberOfChars( char *str){
    
    if (*str == '\0'){
        return 0;
    }
    else{
        return  1 + recursion_numberOfChars(str + 1);
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

int recursion_power(int number, int power){
    if (power <= 0){ //In Case pow(number,0) = 1
        return 1;
    }else{
        return number*recursion_power(number, power-1);
    }
}


void recursion_getAllWordsFromSentence(char *str,char *ptr){
    
    //In case sentence ends
    if (*ptr == '\0'){
        //To calculate length of word
        int length = int(ptr - str);
        getWordAndAddItToArray(str,length);
        printf("\n");
        str = ptr+1;
        return ;
    }else{
    
        //In case of Space
        if (*ptr == ' '){
            
            //To calculate length of word
            int length = int(ptr - str);
            getWordAndAddItToArray(str,length);
            printf("\n");
            str = ptr+1;
        }
        return recursion_getAllWordsFromSentence(str ,ptr+1);
    }
}

void getWordAndAddItToArray(char *str,int length){
        int index = 0;
        while (index < length) {
        printf("%c",*str);
        str = str + 1;
        index++;
    }
    
}


