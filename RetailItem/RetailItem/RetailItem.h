//RetailItem.h

#ifndef RETAILITEM_H
#define RETAILITEM_H

#include<iostream>
#include<string>

using namespace std;

class RetailItem{
    
    //Member valribles go here
    private :
    
	string description;
	int unitsOnHand;
	double price;
    
    //Constructor goes here
public:
	RetailItem(string, int, double);
    
    //Mutator functions go here
	void setDescription(string);
	void setUnitsOnHand(int);
	void setPrice(double);
    
    // Accessor functions
    
	string getDescription() const;
	int getUnitsOnHand() const;
	double getPrice() const;
    
};

#endif




