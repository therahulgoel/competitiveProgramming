//
//  stack.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "stack.hpp"
#include <stack>

//to create stack with size as 100 elements
#define size 100
int stack[size];
int top = -1; // pointer to keep track of stack top element

void stack_testcreate(){
    stack_push(1);
    stack_push(2);
    stack_push(3);
    stack_push(4);
    stack_push(5);
}

void stack_push(int data){
    //to check overflow first
    if (top == size - 1) {
        return;
    }else{
        top = top + 1;
        stack[top] = data; //insert the data
    }
}

void stack_pop(){
    //to check for underflow first
    if (top == -1){
        return;
    }else{
        printf("%d is deleted \n",stack[top]);
        top = top - 1;
    }
}

void stack_countelements(){
    if (top == -1){
        printf("Stack is Empty");
    }else{
        printf("Total : %d\n ",top+1);
    }
}
