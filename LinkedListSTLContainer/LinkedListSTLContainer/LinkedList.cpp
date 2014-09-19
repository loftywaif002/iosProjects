//
//  LinkedList.cpp
//  LinkedListSTLContainer
//
//  Created by DIPRO on 4/15/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"
using namespace std;



//*****************************************************
//
//THIS FUNCTION PUT AN ELEMENT AT THE END OF THE LIST
//
//*****************************************************
void LinkedList::pop_back(int num){
    
    ListNode *newNode; // To point to a newnode
    ListNode *nodePtr; // To move through the list
    
    //Allocate a newnode and store num there
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = NULL;
    
    //If there are no nodes in the list make new node the first node
    if(!head)
        head =  newNode;
    else
    {
     //Initialize nodePrt to the head of the list
        nodePtr = head;
        //Find the last node in the list
        while(nodePtr->next)
            nodePtr = nodePtr->next;
        //Insert newnNode as the last node
        nodePtr->next = newNode;
    
    }
    
}


//*****************************************************
//
//THIS FUNCTION REMOVES ELEMENT AT THE FRONT OF THE LIST
//
//*****************************************************
void LinkedList::pop_front(int num){
        
        ListNode* nodePtr;     //To traverse throught the list
        ListNode* previousNode = nullptr; //To point to the prvious node.
        
        //If the list is empty, do nothing
        if(!head)
            return;
        
        //Determine if the first node is the one
        if(head->value == num)
        {
            nodePtr = head->next;
            delete head;
            head = nodePtr;
        }
        
        else
        {
            //Initiate nodePtr to head of list
            nodePtr = head;
            
            //skip all nodes whose value number is not equal to num
            
            while(nodePtr != NULL and nodePtr->value !=num)
            {
                previousNode = nodePtr;
                nodePtr = nodePtr->next;
                
            }
            //If nodePtr is not at the end of the list
            //link the previousNode to the node after
            //nodePtr, then delete nodePtr
            
            if(nodePtr)
            {
                previousNode->next = nodePtr->next;
                delete nodePtr;
                
            }
            
        }
        
        
    }


void LinkedList::push_back(int num){

    ListNode *newNode; // To point to a newnode
    ListNode *nodePtr; // To move through the list
    
    //Allocate a newnode and store num there
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = NULL;
    
    //If there are no nodes in the list make new node the first node
    if(!head)
        head =  newNode;
        else
        {
            //Initialize nodePrt to the head of the list
            nodePtr = head;
            //Find the last node in the list
            while(nodePtr->next)
                nodePtr = nodePtr->next;
                //Insert newnNode as the last node
                nodePtr->next = newNode;
                
                }
    



}



void LinkedList::push_front(int num){

    ListNode *nodePtr;     //To traverse throught the list
    ListNode *previousNode = nullptr; //To point to the prvious node.
    
    //If the list is empty, do nothing
    if(!head)
        return;
    
    //Determine if the first node is the one
    if(head->value == num)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    
    else
    {
        //Initiate nodePtr to head of list
        nodePtr = head;
        
        //skip all nodes whose value number is not equal to num
        
        while(nodePtr != NULL and nodePtr->value !=num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
            
        }
        //If nodePtr is not at the end of the list
        //link the previousNode to the node after
        //nodePtr, then delete nodePtr
        
        if(nodePtr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
            
        }
        
    }
    
}

void LinkedList::displayList()const{
    
    ListNode *nodePtr;  //To move through the List
    
    nodePtr = head;
    
    while(nodePtr){
        
        
        cout<<nodePtr->value<<endl;
        
        //Move to the next node
        //nodePtr will point, whatever nodePtr->next is pointing to.
        nodePtr = nodePtr->next;
    }
}














