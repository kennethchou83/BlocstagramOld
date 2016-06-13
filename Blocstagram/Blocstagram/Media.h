//
//  Media.h
//  Blocstagram
//
//  Created by Kenneth Chou on 6/3/16.
//  Copyright © 2016 Kenneth Chou. All rights reserved.
//

#import <UIkit/UIkit.h>
@class User;


@interface Media : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) User *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSArray *comments;

@end
