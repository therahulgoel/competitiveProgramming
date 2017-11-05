//
//  string.hpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#ifndef string_hpp
#define string_hpp

#include <stdio.h>
#include <string>

//1. Number of characters in given string Time - O(n)
int string_numberOfchars(const char *str);

//2. Reverse of given string Time - O(n)
void string_reverseOfString(const char *str);

//3. Reverse of given sentence
void string_reverseOfSentence(char *str);

//4. Occurence/Frequency of every distinct character in given string
int string_frequencyOfEveryDistinctCharacter(char *str);

//5. Return maximum occuring character in given string
char string_maximumOccuringChar(char *str);

//6. To print all permutations of given string
void string_allPermutationsOf(char *str);

//7. Paranenthesis chacker : for given expression check if given expression is in correct order of { } ( ) [] Print Balanced if yes or print not Balanced
void string_paranthesisChecker(char *str);

//8. Reverse words of given sentence
void string_reverseWordsInGivenSentence(char *str);

//9. Remove all adjacent duplicates from given string with recursion
void string_removeAdjacentDuplicates(char *str);

//10. Longest common subsequence in given String
void string_lognestCommonSubsequence(char *str);

//11. Longest common Substring in given string
void string_longestCommonString(char *str);

//12. Remove all the duplicates from given string With order of characters same as original order.
void string_removeAllDuplicatesFrom(char *str);





#endif /* string_hpp */
