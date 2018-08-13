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
    struct node *nextRight;  //To store information of it's right neighbour
};

//To create a new node
Node* newNode(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->nextRight = NULL;
    return  node;
}

//To create a test Binary tree with 7 nodes in it
Node* testBTreeCreation(){
    Node *root = newNode(1);
    root->left  = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    return root;
}

//To traverse the tree in PreOrder
void preOrder(Node *node){
    if (node == NULL){
        return;
    }
    printf("%d ",node->data);
    preOrder(node->left);
    preOrder(node->right);
}

//To traverse the tree in InOrder
void inOrder(Node *node){
    if (node == NULL){
        return;
    }
    inOrder(node->left);
    printf("%d ",node->data);
    inOrder(node->right);
}

//To traverse the tree in PostOrder
void postOrder(Node *node){
    if (node == NULL){
        return;
    }
    postOrder(node->left);
    postOrder(node->right);
    printf("%d ",node->data);
}

void levelOrderTraversal(Node *node,int count){
    queue <Node *> que;
    
    //Insert first node in Queue
    que.push(node);
    
    while (!que.empty()) {
        //To get the front element from Queue
        Node *val = que.front();
        //To Delete front element from Queue
        que.pop();
        
        printf("%d ",val->data);
        if (val->left != NULL ) {
            que.push(val->left);
        }
        if (val->right != NULL ) {
            que.push(val->right);
        }
    }
}

//Height of given tree
int calculateHeightofTheTree(Node *node){
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
int calculateLeafNodes(Node *node){
    if (node == NULL){
        return 0;
    }
    if (node->left == NULL && node->right == NULL){
        return 1;
    }
    return calculateLeafNodes(node->left) + calculateLeafNodes(node->right);
}

//Count Number of Non-Leaf or internal Nodes in given tree
int calculateInternalNodes(Node *node){
    if (node == NULL){
        return 0;
    }
    if (node->left == NULL && node->right == NULL){
        return 0;
    }
    return 1 + calculateInternalNodes(node->left) + calculateInternalNodes(node->right);
}

void leftViewOfBinaryTree(Node *node,int currentlevel,int maxLevel){
    if (node == NULL){
        return;
    }else{
        leftViewOfBinaryTree(node->left,0,0);
        printf("%d ",node->data);
    }
}

void bottomViewOfBinaryTree(Node *node){
    
}

void leftDepthTraversal(Node *node){
    if (node != NULL){
        leftDepthTraversal(node->left);
        printf("%d ",node->data);
    }
}

void rightBreadthTraversal(Node *node){
    if (node != NULL){
        printf("%d ",node->data);
        rightBreadthTraversal(node->right);
    }
}

void topViewOfBinaryTree(Node *node){
    if (node != NULL){
        leftDepthTraversal(node);
        rightBreadthTraversal(node->right);
    }
}

void verticalOrderBinaryTree(Node *node){

}

void checkIfGivenBinaryTreeisBST(Node *node){
    if (node == NULL){
        return;
    }else{
        if (node->left ==  NULL && node->right == NULL){
            return;
        }
        if (node->left->data <= node->data >= node->right->data  ){
            checkIfGivenBinaryTreeisBST(node->left);
            checkIfGivenBinaryTreeisBST(node->right);
            return;
        }else{
            printf("not BST");
            return;
        }
    }
}

void connectNodesAtSameLevel(Node *node){
    //To create a queue of Node Type
    queue <Node *> que;
    
    //To push first element in queue
    que.push(node);
    
    while (!que.empty()) {
        
        //To get the front most element from given Queue
        Node *val = que.front();
        que.pop();
        
    }
}

void convertGivenBinaryTreeToDoubleLinkedList(Node *root){
    if (root == NULL)
    {
        return;
    }else{
        convertGivenBinaryTreeToDoubleLinkedList(root->left);
        
        //logic to connect the intermediate nodes
        
        convertGivenBinaryTreeToDoubleLinkedList(root->right);
    }
}
