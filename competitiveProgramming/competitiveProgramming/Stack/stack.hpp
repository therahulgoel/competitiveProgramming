//
//  stack.hpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>

//To create stack with five elements pushed in it
void stack_testcreate();

//To insert or push element in stack  - O(1) Time
void stack_push(int data);

//To delete or pop element from stack - O(1) Time
void stack_pop();

//To count number of elemets in stack - O(n) Time
void stack_countelements();

#endif /* stack_hpp */
