//
//  tree.cpp
//  cplusplus
//
//  Created by Rahul Goel on 6/19/17.
//  Copyright © 2017 Rahul Goel. All rights reserved.
//

#include "tree.hpp"

//ADT for representing single node in Binary Tree
struct node {
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node Node;

//To create a new node
struct node* newNode(int data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return  node;
}

//To create a test Binary tree with 7 nodes in it
struct node* testBTreeCreation(){
    struct node *root = newNode(1);
    root->left  = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    return root;
}

//To traverse the tree in PreOrder
void preOrder(struct node *node){
    if (node == NULL){
        return;
    }
    printf("%d ",node->data);
    preOrder(node->left);
    preOrder(node->right);
}

//To traverse the tree in InOrder
void inOrder(struct node *node){
    if (node == NULL){
        return;
    }
    inOrder(node->left);
    printf("%d ",node->data);
    inOrder(node->right);
}

//To traverse the tree in PostOrder
void postOrder(struct node *node){
    if (node == NULL){
        return;
    }
    postOrder(node->left);
    postOrder(node->right);
    printf("%d ",node->data);
}

void levelOrderTraversal(struct node *node){
    //Temporary Node to hold the address for root node
    
}

//Height of given tree
int calculateHeightofTheTree(struct node *node){
    int left,right ;
    if (node == NULL){
        return 0;
    }
    if (node->left == NULL && node->right == NULL){
        return 0;
    }
    left = 1 + calculateHeightofTheTree(node->left);
    right = 1 + calculateHeightofTheTree(node->right);
    return (max(left,right));
}

//Count Number of Leaf Nodes in given tree
int calculateLeafNodes(struct node *node){
    if (node == NULL){
        return 0;
    }
    if (node->left == NULL && node->right == NULL){
        return 1;
    }
    return calculateLeafNodes(node->left) + calculateLeafNodes(node->right);
}

//Count Number of Non-Leaf or internal Nodes in given tree
int calculateInternalNodes(struct node *node){
    if (node == NULL){
        return 0;
    }
    if (node->left == NULL && node->right == NULL){
        return 0;
    }
    return 1 + calculateInternalNodes(node->left) + calculateInternalNodes(node->right);
}

