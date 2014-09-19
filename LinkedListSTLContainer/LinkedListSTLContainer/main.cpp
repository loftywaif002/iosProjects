//
//  main.cpp
//  LinkedListSTLContainer
//
//  Created by DIPRO on 4/15/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"
#include<string>
using namespace std;

int main()
{

    string string1 = "INSERTING";
    
    LinkedList list;
    
   
    cout<<"INSERTING NODES"<<endl;
    list.pop_back(5);
    list.pop_back(4);

    

    list.displayList();
    
    cout<<"POP_FRONT REMOVES THE FIRST ELEMENT OF THE NODE"<<endl;

    list.pop_front(5);
    
 
    list.displayList();
    
    
    cout<<"PUSH_BACK INSERTS THE ELEMENT WITH VALUE X AT THE END OF THE LIST"<<endl;
    list.push_back(9);
    

    
    list.displayList();
    
    cout<<"PUSH_FRONT INSTERTS AN ELEMENTS WITH VALUE X IN FRONT OF THE LIST"<<endl;

    list.push_front(9);
    
    cout<<"Displaying the list again"<<endl;
    list.displayList();
    
   ;
    return 0;
}

