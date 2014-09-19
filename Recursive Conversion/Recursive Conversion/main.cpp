//
//  main.cpp
//  Recursive Conversion
//
//  Created by DIPRO on 4/23/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#include <iostream>
using namespace std;

void sign(int);
int main()
{

    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    
    sign(num);
    
    
    return 0;
}

void sign(int n){

    
    if (n>0)
    {
        cout<<"No parking"<<endl;
        sign(n-1);
    }
    


}