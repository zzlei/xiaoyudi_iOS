//
//  HAMCardEditorViewController.h
//  iosapp
//
//  Created by 张 磊 on 13-11-15.
//  Copyright (c) 2013年 Droplings. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HAMRecorderViewController.h"
#import "HAMCard.h"
#import "HAMConfig.h"
#import "HAMConstants.h"
#import "HAMImageCropperViewController.h"
#import "MobClick.h"

@class HAMCardEditorViewController;
@protocol HAMCardEditorViewControllerDelegate <NSObject>

- (void)cardEditorDidEndEditing:(HAMCardEditorViewController*)cardEditor;

@end


@interface HAMCardEditorViewController : UIViewController <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextFieldDelegate, HAMImageCropperViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, HAMRecorderViewControllerDelegate>

@property (strong, nonatomic) NSString *cardID;
@property (strong, nonatomic) NSString *categoryID;
@property (strong, nonatomic, getter = theNewCategoryID) NSString *newCategoryID;
@property (strong, nonatomic) NSArray *categoryIDs;
@property (weak, nonatomic) HAMConfig *config;
@property (weak, nonatomic) UIPopoverController *popover;
@property (strong, nonatomic) UIPopoverController *popoverForCategories;
@property (weak, nonatomic) id<HAMCardEditorViewControllerDelegate> delegate;

@property (strong, nonatomic) HAMCard *tempCard;

@property (nonatomic, strong) HAMRecorderViewController *recorder;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UITextField *cardNameField;
@property (weak, nonatomic) IBOutlet UIButton *deleteCardButton;
@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UIButton *shootImageButton;
@property (weak, nonatomic) IBOutlet UILabel *categoryNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *cardNameLabel;
@property (weak, nonatomic) IBOutlet UIButton *chooseCategoryButton;
@property (weak, nonatomic) IBOutlet UIImageView *editCardTitleView;

- (IBAction)recordButtonTapped:(id)sender;
- (IBAction)shootImageButtonPressed:(id)sender;
- (IBAction)pickImageButtonPressed:(id)sender;
- (IBAction)deleteCardButtonTapped:(id)sender;
- (IBAction)cancelButtonTapped:(id)sender;
- (IBAction)chooseCategoryButtonPressed:(id)sender;

@end
