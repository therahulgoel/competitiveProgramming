//
//  tree.hpp
//  cplusplus
//
//  Created by Rahul Goel on 6/19/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

//Tree Based Data Structure

#ifndef tree_hpp
#define tree_hpp

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include "tree_utility.hpp"

using namespace std;

//To create a test Binary tree with seven nodes in it
struct node* testBTreeCreation();

//Depth First Traversal
void preOrder(struct node *node);  // - O(n) Time
void inOrder(struct node *node);   // - O(n) Time
void postOrder(struct node *node); // - O(n) Time

//Breadth First Traversal 
void levelOrderTraversal(struct node *node);

//Height of given tree
int calculateHeightofTheTree(struct node *node); // - O(n) Time

//Count Number of Leaf Nodes in given tree
int calculateLeafNodes(struct node *node); // - O(n) Time

//Count Number of Non-Leaf or internal Nodes in given tree // - O(n) Time
int calculateInternalNodes(struct node *node);

#endif /* tree_hpp */
