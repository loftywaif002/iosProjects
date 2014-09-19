//
//  LinkedList.h
//  LinkedListSTLContainer
//
//  Created by DIPRO on 4/15/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#ifndef __LinkedListSTLContainer__LinkedList__
#define __LinkedListSTLContainer__LinkedList__

#include <iostream>

class LinkedList{

private:
    //Decale a structure fot the list
    struct ListNode{
    
        int value;   // To hold values
        ListNode *next; // To point to the next Node
    };
         ListNode *head;  //To poin tot eh first element of the LisnkedLists

public:
        //Constructor
    LinkedList(){
        head = NULL;}
    //Member functions
    
    //POP_BACK INSERT ELEMETN THE LAST ELEMENT OF THE NODE
    void pop_back(int);
    //POP_FRONT REMOVES THE FIRST ELEMENT OF THE NODE
    void pop_front(int);
    //PUSH_BACK INSERTS THE ELEMENT WITH VALUE X AT THE END OF THE LIST
    void push_back(int);
    //PUSH_FRONT INSTERTS AN ELEMENTS WITH VALUE X IN FRONT OF THE LIST
    void push_front(int);

   //THIS FUNCTION DISPLAYS THE ELEMENTS IN THE LIST
    void displayList()const;
};


#endif /* defined(__LinkedListSTLContainer__LinkedList__) */
