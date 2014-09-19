//
//  DetailViewController.h
//  SpliViewController
//
//  Created by Manjula Jonnalagadda on 4/12/14.
//  Copyright (c) 2014 Manjula Jonnalagadda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MasterTableViewController.h"

@interface DetailViewController : UIViewController<MasterTableViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property(nonatomic,strong)NSString *webSite;

@end
