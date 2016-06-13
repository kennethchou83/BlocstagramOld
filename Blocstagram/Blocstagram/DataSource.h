//
//  DataSource.h
//  Blocstagram
//
//  Created by Kenneth Chou on 6/7/16.
//  Copyright © 2016 Kenneth Chou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;


@end
