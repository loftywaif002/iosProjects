//
//  main.cpp
//  BinaryTree to Linked List
//
//  Created by ASHFAQ H CHOWDHURY on 5/21/14.
//  OHLONE COLLEGE ID:- 0399486
//  COURSE:CS124 Data Structure
//  INSTRUCTOR: PROFESSOR X.FANG
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#include <iostream>
using namespace std;

// Creating a Binary tree named Treenode
struct Treenode
{
    int value;
    Treenode* left;
    Treenode* right;
};

//***********************************************************
//This is recursive function to convert a given Binary tree
//To doubly Linked List
//***********************************************************

void binaryToDoubly(Treenode *root, Treenode **head)
{
    // Initialize root node as NULL
    if (root == NULL)
        return;
    
    // Initialize node as NULL
    
    static Treenode* prev = NULL;
    
    //********************************************
    // Now convert left subtree
    //********************************************
    binaryToDoubly(root->left, head);
    
    // Now convert this node
    if (prev == NULL)
        *head = root;
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    
    //********************************************
    // Now convert right subtree recursively
    //********************************************
    
    binaryToDoubly(root->right, head);
}

//This is a helper function will help to
//insert nodes

Treenode* insert(int num)
{
    //Create a newNode and store num in it
    Treenode* newNode = new Treenode;
    newNode->value = num;
    newNode->left = newNode->right = NULL;
    return (newNode);
}




// Function to print nodes in the doubly linked list
void showOutput(Treenode *node)
{
    cout<<"The Converted Doubly Linked List is shown Below"<<endl;
    while (node!=NULL)
    {
        
        cout << node->value << " ";    //To print the values side-by-side (No-Endl)
        node = node->right;             //*******************************
    }
}





//****************************************************
//This is the main function
//
//****************************************************

int main()
{
    
    //Creating the tree by inserting nodes using insert function
    Treenode *tree     = insert(10);
    tree->left        = insert(12);
    tree->right       = insert(15);
    tree->left->left  = insert(25);
    tree->left->right = insert(30);
    tree->right->left = insert(36);
    
    //*************************************
    //Now  Converting to doubly Linked List
    //*************************************
    Treenode *head = NULL;
    
    
    //************************************
    //Calling the conversion function
    //***********************************
    binaryToDoubly(tree, &head);
    
    
    
    
    
    //Shoe output of the converted linked list
    showOutput(head);
    
    return 0;
}

