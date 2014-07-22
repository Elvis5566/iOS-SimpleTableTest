//
//  SimpleTableCell.h
//  SimpleTable
//
//  Created by Elvis Lee on 7/22/14.
//  Copyright (c) 2014 Elvis Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *prepTimeLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;

@end
