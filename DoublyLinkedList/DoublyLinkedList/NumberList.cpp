//
//  NumberList.cpp
//  DoublyLinkedList
//
//  Created by DIPRO on 4/9/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#include "NumberList.h"

void NumberList::appendNode(double num){
    
    ListNode *newNode;              //To point to a new node
    ListNode *nodePtr;              //To move through the list
    
    //Allocate a new node and store num here
    
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = NULL;
    
    
    //If there are no node in the List make newNode the first node
    
    if(!head)
        head = newNode;
    else // Otherwise, newNode at the end
    {
        nodePtr = head;
        while(nodePtr->next)
            nodePtr = nodePtr->next;
        
        //Insert newNode as the last node
        
        nodePtr->next = newNode;
    }
    
}
