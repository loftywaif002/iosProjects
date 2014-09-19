//RetailItem.cpp
//Implementation of the class RetailItem.h

#include <iostream>
#include <string>

#include "RetailItem.h"

using namespace std;

// Implementation of the constructor

RetailItem::RetailItem (string ss, int bb , double cc){
	
    description = ss;
    
    unitsOnHand = bb;
    
    price = cc;
    
}

// Implementation of mutators

void RetailItem::setDescription(string newDescription){
    
	description = newDescription;
}

void RetailItem::setUnitsOnHand(int newUnitsOnHand){
    
	unitsOnHand = newUnitsOnHand;
    
}
void RetailItem::setPrice(double newPrice){
    
    price =  newPrice;
    
}

//Implementation of accessors

string RetailItem::getDescription() const{
    
	return description;
}


int RetailItem::getUnitsOnHand() const {
    
	return unitsOnHand;
}


double RetailItem::getPrice() const{
    
	return price;
}



