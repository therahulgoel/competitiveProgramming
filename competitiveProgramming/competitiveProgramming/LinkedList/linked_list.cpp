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
singleLinkedListNode* newNode_(int data){
    singleLinkedListNode *node = (singleLinkedListNode *)malloc(sizeof(singleLinkedListNode));
    node->data = data;
    node->address = NULL;
    return node;
}

//To print all the nodes in given linked list
void linkedlist_print(singleLinkedListNode *base){
    printf("Single Linked List is \n");
    while (base != NULL) {
        printf("%d ",base->data);
        base = base->address;
    }
    printf("\n");
}

singleLinkedListNode* linkedlist_testcreate(){
    singleLinkedListNode *base = newNode_(1);
    base->address = newNode_(2);
    base->address->address = newNode_(3);
    base->address->address->address = newNode_(4);
    return base;
}

int linkedlist_countnodes(singleLinkedListNode *base){
    int count = 0;
    while (base != NULL) {
        count++;
        base = base->address;
    }
    printf("Number of Nodes are : %d",count);
    printf("\n");
    return count;
}

int linkedlist_insert(singleLinkedListNode *base,int pos,int data){
    
    //Get the count of Nodes
    int nodesCount = linkedlist_countnodes(base);
    
    int index = 0;
    int inserted = -1;
    
    //store address of
    singleLinkedListNode *ptrprev = base; // Just one element before
    singleLinkedListNode *ptrnext = base->address; // Just one element after
    
    if (pos <= nodesCount || pos == (nodesCount + 1)){ //Check if pos is inside or at the end of linked list
        
        while (index < pos) {
            if (index == pos - 1 ){
                //new node creation
                singleLinkedListNode *nodeToInsert = newNode_(data);
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

int linkedlist_checkIfCycle(singleLinkedListNode *base){
    int exists = -1;
    singleLinkedListNode *ptrprev = base;
    singleLinkedListNode *ptrnext = base->address;
    
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

bool linkedlist_searchElement(singleLinkedListNode *base, int number){
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

int linkedlist_getNthNode(singleLinkedListNode *base,int n){
    int result = 0 ; //In case position is out of linked list return zero
    
    //To get length of given linked list
    int length = linkedlist_countnodes(base);
    int index = 1; //Iterator
    
    //In case N is more than length of linked list
    if (n> length) {
        return result;
    }
    
    //Iterate till n-1 th term
    while (index < n) {
        base = base->address;
        index++;
    }
    return base->data;
}



