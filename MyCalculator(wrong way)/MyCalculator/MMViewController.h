//
//  MMViewController.h
//  MyCalculator
//
//  Created by DIPRO on 4/2/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#import <UIKit/UIKit.h>

int firstNumber;
int number;
int multiplier = 10;

float total;


@interface MMViewController : UIViewController
@property (weak,nonatomic) IBOutlet UILabel *resLabel;


- (IBAction)btnClear:(UIButton *)sender;
- (IBAction)btn0:(UIButton *)sender;
- (IBAction)btnResult:(UIButton *)sender;
- (IBAction)btn1:(UIButton *)sender;
- (IBAction)btn2:(UIButton *)sender;
- (IBAction)btn3:(UIButton *)sender;
- (IBAction)btn4:(UIButton *)sender;
- (IBAction)btn5:(UIButton *)sender;
- (IBAction)btn6:(UIButton *)sender;
- (IBAction)btn7:(UIButton *)sender;
- (IBAction)btn8:(UIButton *)sender;
- (IBAction)btn9:(UIButton *)sender;
- (IBAction)multiply:(UIButton *)sender;
- (IBAction)divide:(UIButton *)sender;
- (IBAction)subtraction:(UIButton *)sender;
- (IBAction)addition:(UIButton *)sender;

@end
