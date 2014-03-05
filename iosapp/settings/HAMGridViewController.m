//
//  HAMGridViewController.m
//  iosapp
//
//  Created by 张 磊 on 13-12-3.
//  Copyright (c) 2013年 Droplings. All rights reserved.
//

#import "HAMGridViewController.h"

@interface HAMGridViewController ()

@end

@implementation HAMGridViewController

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
    // Do any additional setup after loading the view from its nib.
	[self.leftTopButton setImage:[UIImage imageNamed:@"backDOWN.png"] forState:UIControlStateHighlighted];
	[self.rightTopButton setImage:[UIImage imageNamed:@"addnewDOWN.png"] forState:UIControlStateHighlighted];
	self.collectionView.collectionViewLayout = [[HAMCollectionViewLayout alloc] init];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)leftTopButtonPressed:(id)sender {
	[self.navigationController popViewControllerAnimated:YES];
}

- (IBAction)rightTopButtonPressed:(id)sender {
	// to be overridden
}

- (IBAction)bottomButtonPressed:(id)sender {
	// to be overridden
}
@end
