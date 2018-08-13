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

typedef struct list_node singleLinkedListNode;

//1. To create a test Single Linked List with four nodes in it
singleLinkedListNode* linkedlist_testcreate();

//2. To print all the elements in given single lineked list - O(n) Time
void linkedlist_print(singleLinkedListNode *base);

//3. To count the number of nodes in given single linked list - O(n) Time
int linkedlist_countnodes(singleLinkedListNode *base);

//4. To insert a node on given position pos
int linkedlist_insert(singleLinkedListNode *base,int pos,int data);

//5. To delete a node from given position pos
void linkedlist_delete(singleLinkedListNode *base, int pos);

//6. To check if given linked list has cycle or not
int linkedlist_checkIfCycle(singleLinkedListNode *base);

//7. Reverse of given linked list
singleLinkedListNode*  linkedlist_reverse(singleLinkedListNode *base);

//8. Search given element in Linked List if exists return true otherwise no
bool linkedlist_searchElement(singleLinkedListNode *base, int number);

//9. Swap two nodes in linked list, without swapping data but with address as Swapping data of nodes may be expensive in many situations when data contains many fields
void linkedlist_swapTwoNodes(singleLinkedListNode *base, int val1, int val2);

//10. Get data in nth node from given linked list
int linkedlist_getNthNode(singleLinkedListNode *base,int n);

//11. Find middle of given linked list
int linkedlist_middleIs(singleLinkedListNode *base);

//12. To remove Loop in given Linked List
void linkedlist_removeLoop();

//13. merge two sorted linked list
void linkedlist_mergeSortedLinkedList(singleLinkedListNode *head1, singleLinkedListNode  *head2);

#endif /* linked_list_hpp */
