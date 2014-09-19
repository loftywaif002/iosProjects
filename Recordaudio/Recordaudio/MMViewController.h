//
//  MMViewController.h
//  Recordaudio
//
//  Created by DIPRO on 5/10/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface MMViewController : UIViewController<AVAudioRecorderDelegate>



- (IBAction)record:(UIButton *)sender;
- (IBAction)play:(UIButton *)sender;
- (IBAction)stop:(UIButton *)sender;


@end
