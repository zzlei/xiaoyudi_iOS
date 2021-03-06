//
//  HAMViewController.h
//  iosapp
//
//  Created by daiyue on 13-7-9.
//  Copyright (c) 2013年 Droplings. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "HAMGridViewTool.h"
#import "HAMConfig.h"
#import "HAMCoursewareManager.h"
#import "HAMAnimation.h"
#import "HAMUnlockGuideViewController.h"

@interface HAMViewController : UIViewController <AVAudioPlayerDelegate,HAMGifAnimationDelegate, HAMUnlockGuideViewControllerDelegate> {
}

@property (strong, nonatomic) NSString *activeUserName;
@property (strong, nonatomic) AVAudioPlayer *audioPlayer;
@property (strong, nonatomic) HAMGridViewTool* gridViewTool;
@property (strong, nonatomic) HAMGridViewTool* inCatGridViewTool;
@property (strong, nonatomic) HAMConfig* config;
@property (strong, nonatomic) HAMCoursewareManager* userManager;
@property (strong, nonatomic) NSString* currentUUID;
@property BOOL inCategory;

@property (weak, nonatomic) IBOutlet UIImageView *pressHintImageView1;
@property (weak, nonatomic) IBOutlet UIImageView *pressHintImageView2;
@property (weak, nonatomic) IBOutlet UIImageView *pressHintImageView3;

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView_;

@property (weak, nonatomic) IBOutlet UIView *inCatView;
@property (weak, nonatomic) IBOutlet UIImageView *blurBgImageView;
@property (weak, nonatomic) IBOutlet UIImageView *inCatBgImageView;
@property (weak, nonatomic) IBOutlet UIButton *backButton;
@property (weak, nonatomic) IBOutlet UIScrollView *inCatScrollView;

- (IBAction)backButtonClicked:(UIButton *)sender;

- (IBAction)touchDownEnterEditButton:(UIButton *)sender;
- (IBAction)touchUpEnterEditButton:(UIButton *)sender;
- (IBAction)unlockButtonPressed:(id)sender;

@end
