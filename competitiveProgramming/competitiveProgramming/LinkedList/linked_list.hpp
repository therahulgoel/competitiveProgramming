//
//  linked_list.hpp
//  DS
//
//  Created by Rahul Goel on 7/26/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#ifndef linked_list_hpp
#define linked_list_hpp

#include <stdio.h>
#include <stdlib.h>

//To create a test Single Linked List with four nodes in it
struct list_node* linkedlist_testcreate();

//To print all the elements in given single lineked list - O(n) Time
void linkedlist_print(struct list_node *base);

//To count the number of nodes in given single linked list - O(n) Time
int linkedlist_countnodes(struct list_node *base);

//To insert a node on given position pos
int linkedlist_insert(struct list_node *base,int pos,int data);

//To delete a node from given position pos
void linkedlist_delete(struct list_node *base, int pos);

//To check if given linked list has cycle or not
int linkedlist_checkIfCycle(struct list_node *base);

//Reverse of given linked list
struct list_node*  linkedlist_reverse(struct list_node *base);

#endif /* linked_list_hpp */
