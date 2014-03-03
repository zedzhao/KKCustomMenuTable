//
//  kkDetailViewController.h
//  KKCustomMenuTable
//
//  Created by Kun on 14-3-3.
//  Copyright (c) 2014年 Kun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface kkDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
