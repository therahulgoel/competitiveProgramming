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
void linkedlist_countnodes(struct list_node *base);

#endif /* linked_list_hpp */
