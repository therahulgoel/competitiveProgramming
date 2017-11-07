//
//  string.hpp
//  
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#ifndef string_hpp
#define string_hpp
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
using namespace std;


//1. Permutation
void string_permutations( char *ch);

//2. Remove adjacent duplicate
void string_adjacentDuplicate(char *str);

//3. Frequency of every distinct character with char
void string_frequencyOfEvryChar(char *str);

//4. Check if given two strings are anagram
void string_anagramOrNot(char *str1,char *str2);

//5. Print all substrings of given string
void string_substringsAre(char *str, int start, int upto);

//6. Check if given string is Palindrome or not
void string_checkIfPalindrome(char *str);

//7. For given string find min number of characters to be inserted to convert it to palindrome.
int string_minCharsTomakeItPalindrome(char *str);

//8. For given string S, find longest palindrome sub-string
void string_longestPalidromeSubstringIs(char *str);

//9. Remove spaces from given string and return it
void string_removeSpacesFromString(char str[]);

//10. For given string, that contains special characters together with alphabets (a to z and A to Z), Reverse it with out affecting special characters
void string_reverseArrayWithSpecialCharsFixed(char str[]);

//11. Check if given sentence is Panagram (sentence containing all the characters from English alphabet) of not.
void string_sentencePanagramOrNot(char *str);


//Dynamic Progamming :


//1. Longest Common SubString
//Given two strings X and Y , find length of longest common substring.


//2. Longest Common Subsequence
//Given two strings X and Y , find length of longest common subsequence.


#endif /* string_hpp */


