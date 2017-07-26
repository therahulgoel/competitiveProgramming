//
//  linked_list.cpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "linked_list.hpp"

struct list_node{
    int data;
    struct list_node *address;
};

//To create a single node
struct list_node* newNode_(int data){
    struct list_node *node = (struct list_node *)malloc(sizeof(struct list_node));
    node->data = data;
    node->address = NULL;
    return node;
}

//To print all the nodes in given linked list
void linkedlist_print(struct list_node *base){
    printf("Single Linked List is \n");
    while (base != NULL) {
        printf("%d ",base->data);
        base = base->address;
    }
    printf("\n");
}

struct list_node* linkedlist_testcreate(){
    struct list_node *base = newNode_(1);
    base->address = newNode_(2);
    base->address->address = newNode_(3);
    base->address->address->address = newNode_(4);
    return base;
}

void linkedlist_countnodes(struct list_node *base){
    int count = 0;
    while (base != NULL) {
        count++;
        base = base->address;
    }
    printf("Number of Nodes are : %d",count);
    printf("\n");
}




