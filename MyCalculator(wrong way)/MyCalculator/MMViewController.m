//
//  MMViewController.m
//  MyCalculator
//
//  Created by DIPRO on 4/2/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#import "MMViewController.h"

@interface MMViewController ()

@end

@implementation MMViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)btnClear:(UIButton *)sender {
    
    firstNumber = 0;
    number = 0;
    total = 0;
    self.resLabel.text = @"0";
}

- (IBAction)btn0:(UIButton *)sender {
    
    firstNumber = firstNumber * multiplier;
    firstNumber = firstNumber + 0;
    self.resLabel.text = [NSString stringWithFormat:@"%i",firstNumber];
}

- (IBAction)btnResult:(UIButton *)sender {
    
    if (total == 0) {
        total = firstNumber;
    }
    else{
        
        switch(number){
                
            case 1:
                total = total * firstNumber;
                break;
            case 2:
                total = total / firstNumber;
                break;
            case 3:
                total = total - firstNumber;
                break;
            case 4:
                total = total + firstNumber;
                break;
            default:
                break;
                
        }
        
        
    }
    
    firstNumber = 0;
    number = 0;
    self.resLabel.text = [NSString stringWithFormat:@"%0.2f",total];
    
}

- (IBAction)btn1:(UIButton *)sender {
    
    firstNumber = firstNumber * multiplier;
    firstNumber = firstNumber + 1;
    self.resLabel.text = [NSString stringWithFormat:@"%i",firstNumber];
    
}

- (IBAction)btn2:(UIButton *)sender {

    firstNumber = firstNumber * multiplier;
    firstNumber = firstNumber + 2;
    self.resLabel.text = [NSString stringWithFormat:@"%i",firstNumber];
}

- (IBAction)btn3:(UIButton *)sender {
    
    firstNumber = firstNumber * multiplier;
    firstNumber = firstNumber + 3;
    self.resLabel.text = [NSString stringWithFormat:@"%i",firstNumber];
    
   
    
}

- (IBAction)btn4:(UIButton *)sender {
    
    
    firstNumber = firstNumber * multiplier;
    firstNumber = firstNumber + 4;
    self.resLabel.text = [NSString stringWithFormat:@"%i",firstNumber];
    
    
}

- (IBAction)btn5:(UIButton *)sender {
    
    
    firstNumber = firstNumber * multiplier;
    firstNumber = firstNumber + 5;
    self.resLabel.text = [NSString stringWithFormat:@"%i",firstNumber];
    
}

- (IBAction)btn6:(UIButton *)sender {
    
    
    firstNumber = firstNumber * multiplier;
    firstNumber = firstNumber + 6;
    self.resLabel.text = [NSString stringWithFormat:@"%i",firstNumber];
   
}

- (IBAction)btn7:(UIButton *)sender {
    
    firstNumber = firstNumber * multiplier;
    firstNumber = firstNumber + 7;
    self.resLabel.text = [NSString stringWithFormat:@"%i",firstNumber];
}

- (IBAction)btn8:(UIButton *)sender {
    
    firstNumber = firstNumber * multiplier;
    firstNumber = firstNumber + 8;
    self.resLabel.text = [NSString stringWithFormat:@"%i",firstNumber];
    
}

- (IBAction)btn9:(UIButton *)sender {
    
    
    firstNumber = firstNumber * multiplier;
    firstNumber = firstNumber + 9;
    self.resLabel.text = [NSString stringWithFormat:@"%i",firstNumber];
}

- (IBAction)multiply:(UIButton *)sender {
    
//We are checking if total is equal to zero because
    //Golbal variables, in objectiv-C, C, C++ are always automatically initialized to "0"
    //SO when we first run out app, it will
    
    if (total == 0) {
        total = firstNumber;
    }
    else{
    
        switch(number){
        
            case 1:
                total = total * firstNumber;
                break;
            case 2:
                total = total / firstNumber;
                break;
            case 3:
                total = total - firstNumber;
                break;
            case 4:
                total = total + firstNumber;
                break;
            default:
                break;
        
        }
    
    
    }
    number = 1;
    firstNumber = 0;
    
}

- (IBAction)divide:(UIButton *)sender {
    
    
    if (total == 0) {
        total = firstNumber;
    }
    else{
        
        switch(number){
                
            case 1:
                total = total * firstNumber;
                break;
            case 2:
                total = total / firstNumber;
                break;
            case 3:
                total = total - firstNumber;
                break;
            case 4:
                total = total + firstNumber;
                break;
            default:
                break;
                
        }
        
        
    }
    number = 2;
    firstNumber = 0;
    
}

- (IBAction)subtraction:(UIButton *)sender {
    
    
    
    if (total == 0) {
        total = firstNumber;
    }
    else{
        
        switch(number){
                
            case 1:
                total = total * firstNumber;
                break;
            case 2:
                total = total / firstNumber;
                break;
            case 3:
                total = total - firstNumber;
                break;
            case 4:
                total = total + firstNumber;
                break;
            default:
                break;
                
        }
        
        
    }
    number = 3;
    firstNumber = 0;

}

- (IBAction)addition:(UIButton *)sender {
    
   
    
    if (total == 0) {
        total = firstNumber;
    }
    else{
        
        switch(number){
                
            case 1:
                total = total * firstNumber;
                break;
            case 2:
                total = total / firstNumber;
                break;
            case 3:
                total = total - firstNumber;
                break;
            case 4:
                total = total + firstNumber;
                break;
            default:
                break;
                
        }
        
        
    }
    number = 4;
    firstNumber = 0;
    
    
}



@end
