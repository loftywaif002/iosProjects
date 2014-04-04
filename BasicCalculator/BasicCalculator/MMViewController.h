//
//  MMViewController.h
//  BasicCalculator
//
//  Created by DIPRO on 4/3/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MMViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *display;

@property (nonatomic) BOOL userEntry;
@property(nonatomic) float firstNumber;
@property (nonatomic) float secondNumber;
@property (nonatomic) NSString *operation;

- (IBAction)buttons:(UIButton *)sender;
- (IBAction)operations:(UIButton *)sender;
- (IBAction)equalButton:(UIButton *)sender;
- (IBAction)clearButton:(UIButton *)sender;


@end
