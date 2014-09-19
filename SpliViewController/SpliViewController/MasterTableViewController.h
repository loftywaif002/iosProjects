//
//  MasterTableViewController.h
//  SpliViewController
//
//  Created by Manjula Jonnalagadda on 4/12/14.
//  Copyright (c) 2014 Manjula Jonnalagadda. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MasterTableViewControllerDelegate <NSObject>

-(void)showWebsite:(NSString *)url;

@end


@interface MasterTableViewController : UITableViewController

@property(nonatomic,weak)id<MasterTableViewControllerDelegate> delegate;

@end
