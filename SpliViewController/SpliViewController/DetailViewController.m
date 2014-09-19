//
//  DetailViewController.m
//  SpliViewController
//
//  Created by Manjula Jonnalagadda on 4/12/14.
//  Copyright (c) 2014 Manjula Jonnalagadda. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    if (self.webSite) {
        
        NSURLRequest *request=[NSURLRequest requestWithURL:[NSURL URLWithString:self.webSite]];
        [self.webView loadRequest:request];
    }
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)setWebSite:(NSString *)webSite{
    
    
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

#pragma mark - MasterTableViewControllerDelegate

-(void)showWebsite:(NSString *)url{
    
    self.webSite=url;
    NSURLRequest *request=[NSURLRequest requestWithURL:[NSURL URLWithString:self.webSite]];
    [self.webView loadRequest:request];
}


@end
