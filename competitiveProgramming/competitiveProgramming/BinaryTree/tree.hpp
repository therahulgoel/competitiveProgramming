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
#include <queue>

using namespace std;

/*
 Tree Terminology:
    Edge – connection between one node to another.
    Path – a sequence of nodes and edges connecting a node with a descendant.
    Height of node – The height of a node is the number of edges on the longest downward path between that node and a leaf.
    Depth –The depth of a node is the number of edges from the node to the tree's root node.
    Level – The level of a node is defined by 1 + the number of connections between the node and the root.
 */


//Binary Tree Node
typedef struct node Node;

//1. To create a test Binary tree with seven btNodes in it
struct node* testBTreeCreation();

//2. Depth First Traversal (DFT)
void preOrder(Node *node);  // - O(n) Time
void inOrder(Node *node);   // - O(n) Time
void postOrder(Node *node); // - O(n) Time

//3. Breadth First Traversal (BFT)
void levelOrderTraversal(Node *node,int count);

//4. Height of given tree
int calculateHeightofTheTree(struct node *node); // - O(n) Time

//5. Count Number of Leaf Nodes in given tree
int calculateLeafNodes(Node *node); // - O(n) Time

//6. Count Number of Non-Leaf or internal Nodes in given tree // - O(n) Time
int calculateInternalNodes(Node *node);

//7. To print Left view of given Binary Tree i.e. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side.
void leftViewOfBinaryTree(Node *node,int currentlevel,int maxLevel);

//8. To print Bottom view of given Binary Tree
void bottomViewOfBinaryTree(Node *node);

//9. To print Top view of given Binart Tree
void topViewOfBinaryTree(Node *node);

//10. To check if given Binary Tree is BST or not.
void checkIfGivenBinaryTreeisBST(Node *node);

//11. To print Binary tree in vertical order
void verticalOrderBinaryTree(Node *node);

//12. To connect all the nodes at same level
void connectNodesAtSameLevel(Node *node);

//13. check if given two trees are identical or not
void checkIfGivenTreesAreIdentical(Node *tree1, Node *tree2);

//14. convert given binary tree to double linked list
void convertGivenBinaryTreeToDoubleLinkedList(Node *root);

//15. level order traversal in spiral form
void levelOrderTraversalInSpiralForm(Node *root);

//16. To find Diameter of given Binary Tree : The diameter of a tree is the number of nodes on the longest path between two leaves in the tree.
void diameterOfgivenBinaryTree(Node *root);

//17. Serialize and Deserialize a Binary Tree Serialization is to store a tree in an array so that it can be later restored and Deserialization is reading tree back from the array. The structure of tree must be maintained.
void serializeAndSerializeBinaryTree(Node *root);

#endif /* tree_hpp */
