//
//  MMViewController.m
//  Pictures
//
//  Created by DIPRO on 5/10/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#import "MMViewController.h"

@interface MMViewController ()
- (IBAction)button:(id)sender;


@property (strong, nonatomic) IBOutlet UIImageView *imageFetcher;

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

- (IBAction)button:(id)sender {
    
    UIImagePickerController *picker = [[UIImagePickerController alloc] init];
    
    picker.sourceType =  UIImagePickerControllerSourceTypePhotoLibrary;
    
    picker.delegate = self;
    
    [self presentViewController:picker animated:YES completion:NULL];
    
}



-(void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info{

           UIImage *image = info[UIImagePickerControllerOriginalImage];
    self.imageFetcher.image= image;
    [picker dismissViewControllerAnimated:YES completion:NULL];

}


@end
