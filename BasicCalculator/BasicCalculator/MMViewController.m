//
//  MMViewController.m
//  BasicCalculator
//
//  Created by DIPRO on 4/3/14.
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

- (IBAction)buttons:(UIButton *)sender {
   
   //Hold the title that is given to the each button on the view
    NSString *number = sender.currentTitle;
    
    //Inititaly after staring the application
    //The self.userEntry is not true.
    
    if(self.userEntry)
    {
        self.display.text = [self.display.text stringByAppendingString:number];
    }
    else{
    
        self.display.text = number;
        self.userEntry = YES;
    
    }
    
}

- (IBAction)operations:(UIButton *)sender {

    //Set the userEntry variable to zero
    self.userEntry = NO;
    //Whatever number is on the screen, please
    //convert it to an integer and put it to the firstNumber
    self.firstNumber = [self.display.text intValue];
    //Now set the operation variable to the corresponding title of the corresponding button
    self.operation = [sender currentTitle];
}

- (IBAction)equalButton:(UIButton *)sender {
    
    self.userEntry = NO;
    self.secondNumber = [self.display.text intValue];
    
    float result = 0;
    
    if([self.operation isEqualToString:@"x"])
    {
        result  =self.firstNumber * self.secondNumber;
    }
    else if([self.operation isEqualToString:@"/"])
    {
        result  =self.firstNumber / self.secondNumber;
    }
    
    else if([self.operation isEqualToString:@"+"])
    {
        result  =self.firstNumber + self.secondNumber;
    }
    else if([self.operation isEqualToString:@"-"])
    {
        result  =self.firstNumber - self.secondNumber;
    }
    
    
    
    self.display.text = [NSString stringWithFormat:@"%.2f",result];
    
}

- (IBAction)clearButton:(UIButton *)sender {
    self.firstNumber = 0;
    self.secondNumber = 0;
    self.userEntry = NO;
    self.display.text = @"0";
    
}





@end















