//
//  BBProductViewController.h
//  BirchBox
//
//  Created by Steven on 2/20/16.
//  Copyright © 2016 Steven. All rights reserved.
//

#import "BBBaseViewController.h"

@interface BBProductViewController : BBBaseViewController
@property(nonatomic, copy) NSString *productId;

- (void)configureWithProductId:(NSString*)productId;

@end
