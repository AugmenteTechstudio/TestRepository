//
//  DetailViewController.h
//  ControllingSource
//
//  Created by AUGMENTe on 10/17/14.
//  Copyright (c) 2014 AUGMENTe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

