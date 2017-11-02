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

//1. To create a test Single Linked List with four nodes in it
struct list_node* linkedlist_testcreate();

//2. To print all the elements in given single lineked list - O(n) Time
void linkedlist_print(struct list_node *base);

//3. To count the number of nodes in given single linked list - O(n) Time
int linkedlist_countnodes(struct list_node *base);

//4. To insert a node on given position pos
int linkedlist_insert(struct list_node *base,int pos,int data);

//5. To delete a node from given position pos
void linkedlist_delete(struct list_node *base, int pos);

//6. To check if given linked list has cycle or not
int linkedlist_checkIfCycle(struct list_node *base);

//7. Reverse of given linked list
struct list_node*  linkedlist_reverse(struct list_node *base);

//8. Search given element in Linked List if exists return true otherwise no
bool linkedlist_searchElement(struct list_node *base, int number);

//9. Swap two nodes in linked list, without swapping data but with address as Swapping data of nodes may be expensive in many situations when data contains many fields
void linkedlist_swapTwoNodes(struct list_node *base, int val1, int val2);

//10. Get data in nth node from given linked list
int linkedlist_getNthNode(struct list_node *base,int n);

//11. Find middle of given linked list
int linkedlist_middleIs(struct list_node *base);





#endif /* linked_list_hpp */
