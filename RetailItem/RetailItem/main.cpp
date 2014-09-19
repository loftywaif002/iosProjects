#include "RetailItem.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	
    //The first object using constructor
    
    RetailItem one("Jacket",12,59.95);
    
    //The second object using constructor
    
    RetailItem two("Designer Jeans",40,34.95);
    
    //The third object using constructor
    
    RetailItem three("shirt",20,24.95);
    
    //Diplay the items in a chart here
    
    cout<<"-------------------------------------------------------------------"<<endl;
    
    cout<<setw(23)<<"Description"<<setw(22)<<"Units On Hand"<<setw(10)<<"Price"<<endl;
    
    cout<<left<<setw(12)<<"Item#1"<<setw(20)<< one.getDescription()<<setw(18)<<one.getUnitsOnHand()<<setw(15)<<one.getPrice()<<endl;
    cout<<left<<setw(12)<<"Item#2"<<setw(20)<< two.getDescription()<<setw(18)<<two.getUnitsOnHand()<<setw(15)<<two.getPrice()<<endl;
    cout<<left<<setw(12)<<"Item#3"<<setw(20)<< three.getDescription()<<setw(18)<<three.getUnitsOnHand()<<setw(15)<<three.getPrice()<<endl;
    
}