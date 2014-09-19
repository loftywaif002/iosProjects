//
//  MMViewController.m
//  Recordaudio
//
//  Created by DIPRO on 5/10/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#import "MMViewController.h"

@interface MMViewController (){

    AVAudioPlayer *_player;
    AVAudioRecorder *_recorder;
    

}
@end

@implementation MMViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    AVAudioSession *session = [AVAudioSession sharedInstance];
    [session setCategory:AVAudioSessionCategoryPlayAndRecord error:nil];
    
    NSArray *pathcomponents = @[[NSSearchPathForDirectoriesInDomains(NSDocumentationDirectory,NSUserDomainMask, YES) lastObject],@"test.m4a"];
    
    NSURL *outputFileURL = [NSURL fileURLWithPathComponents:pathcomponents];
    
    NSDictionary *options = @{AVFormatIDKey:[NSNumber numberWithInt:kAudioFormatMPEG4AAC],AVSampleRateKey:@44100.0,AVNumberOfChannelsKey:@2};
    
    _recorder = [[AVAudioRecorder alloc] initWithURL:outputFileURL settings:options error:nil];
    
    _recorder.delegate = self;
    
    [_recorder prepareToRecord];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)record:(UIButton *)sender {
    
    
    if (_recorder.isRecording || _player.isPlaying) {
        return;
    }
    
    AVAudioSession *session = [AVAudioSession sharedInstance];
    [session setActive:YES error:nil];
    
    [_recorder record];
    
}


- (IBAction)play:(id)sender {
    
    if (!_player) {
        return;
    }
    
    if (_player.isPlaying) {
        
        return;
    }
    
    [_player play];
}



- (IBAction)stop:(UIButton *)sender {
    
    if (_recorder.isRecording) {
        
        
        AVAudioSession *session = [AVAudioSession sharedInstance];
        [session setActive:YES error:nil];
        
        [_recorder stop];
    }
    
    if (!_player) {
        return;
    }
    if (_player.isPlaying) {
        
        [_player stop];
    }
    
    
    
}


-(void)audioRecorderDidFinishRecording:(AVAudioRecorder *)recorder successfully:(BOOL)flag{

    if (flag) {
        _player = [[AVAudioPlayer alloc]initWithContentsOfURL:_recorder.url error:nil];
        
        [_player prepareToPlay];
    }


}

@end
