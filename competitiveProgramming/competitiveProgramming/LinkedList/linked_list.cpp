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

int linkedlist_countnodes(struct list_node *base){
    int count = 0;
    while (base != NULL) {
        count++;
        base = base->address;
    }
    printf("Number of Nodes are : %d",count);
    printf("\n");
    return count;
}

int linkedlist_insert(struct list_node *base,int pos,int data){
    
    //Get the count of Nodes
    int nodesCount = linkedlist_countnodes(base);
    
    int index = 0;
    int inserted = -1;
    
    //store address of
    struct list_node *ptrprev = base; // Just one element before
    struct list_node *ptrnext = base->address; // Just one element after
    
    if (pos <= nodesCount || pos == (nodesCount + 1)){ //Check if pos is inside or at the end of linked list
        
        while (index < pos) {
            if (index == pos - 1 ){
                //new node creation
                struct list_node *nodeToInsert = newNode_(data);
                ptrprev->address = nodeToInsert;
                nodeToInsert->address = ptrnext;
            }
            
            //In case its end of the list
            if (ptrnext != NULL || ptrnext != NULL){
                ptrprev = ptrprev->address;
                ptrnext = ptrnext->address;
            }
            index = index + 1;
        }
    }else{
        //Can not insert pos is outside linkedlist
        inserted = -1;
        printf("\nOops ! pos is outside linkedlist  \n");
    }
    
    return inserted;
}

void linkedlist_delete(struct list_node *base, int pos){
    
}

int linkedlist_checkIfCycle(struct list_node *base){
    int exists = -1;
    struct list_node *ptrprev = base;
    struct list_node *ptrnext = base->address;
    
    while (ptrnext != NULL) {
        if (ptrprev->address == ptrnext->address){
            exists = 1;
            break;
        }
        if (ptrprev != NULL || ptrnext != NULL){
            ptrprev = ptrprev->address; //Increment by 1 location
            ptrnext = ptrnext->address->address; //Increment by 2 locations
        }
    }
    
    return exists;
}

struct list_node*  linkedlist_reverse(struct list_node *base){
    struct list_node *node = base;
    return node;
}

bool linkedlist_searchElement(struct list_node *base, int number){
    bool result;
    
    if (base == NULL){
        return result;
    }else{
        if (base != NULL && base->data == number){
            result = true;
            return result;
        }
        return linkedlist_searchElement(base->address , number);
    }
}



