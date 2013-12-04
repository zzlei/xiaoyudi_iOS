//
//  HAMPopoverBackgroundView.h
//  iosapp
//
//  Created by 张 磊 on 13-12-4.
//  Copyright (c) 2013年 Droplings. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HAMPopoverBackgroundView : UIPopoverBackgroundView

@property (nonatomic, readwrite) CGFloat arrowOffset;
@property (nonatomic, readwrite) UIPopoverArrowDirection arrowDirection;
@property (strong, nonatomic) UIImageView *imageView;

@end