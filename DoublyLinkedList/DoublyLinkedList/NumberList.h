//
//  NumberList.h
//  Linked Lists
//
//  Created by DIPRO on 3/22/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#ifndef __Linked_Lists__NumberList__
#define __Linked_Lists__NumberList__

#include <iostream>
using namespace std;

class NumberList{
    
private:
    
    struct ListNode{
        
        double value;
        ListNode *next;
        ListNode *previous;
        
    };
    
    ListNode *head;  //points to the head of the list
    
public:
    
    //Constructor
    NumberList(){
        
        head = NULL;
    }
    
    
    //Copy constructor
    NumberList(const NumberList& otherList);
    
    
    //Destructor
    //  ~LinkedList();
    
    
    //ListList operations
    void appendNode(double);
    
    void displayList()const;
    //This is a method to reverse elemetns in the list
    void reverse();
  
    void deleteAt(int);
};

#endif /* defined(__Linked_Lists__NumberList__) */
