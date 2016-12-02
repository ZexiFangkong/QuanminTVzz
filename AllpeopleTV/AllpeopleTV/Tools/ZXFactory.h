//
//  ZXFactory.h
//  AllpeopleTV
//
//  Created by tarena on 16/12/2.
//  Copyright © 2016年 Zx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZXFactory : NSObject
+ (void)addBackItemToVC:(UIViewController*)vc;

@property(nonatomic) void(^function)() ;

- (void)createWithBlock:(void(^)())block andItemToVc:(UIViewController*)vc;

+ (void)addSearchItemToVC:(UIViewController *)vc action:(void(^)())handler;

@end