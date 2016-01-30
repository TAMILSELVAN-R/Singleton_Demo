//
//  HTTPServerClass.h
//  DemoShare
//
//  Created by Dvios on 29/01/16.
//  Copyright © 2016 Dvois. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@interface HTTPServerClass : NSObject<NSURLSessionDataDelegate,NSURLSessionDelegate>
{
    NSString *someProperty;
    NSArray *ServerDataArray;
    NSArray *PaidUserServerDataArray;
}

@property (nonatomic, retain) NSString *someProperty;
@property (nonatomic, retain) NSArray *ServerDataArray;
@property (nonatomic, retain) NSArray *PaidUserServerDataArray;

+ (id)sharedManager;
-(void)HTTPServerCall:(NSString *)urlstring ServerCallsequenceNumber:(NSInteger)sequenceNumber;
-(NSArray *)Getserverdata:(NSInteger)sequenceNumber;

@end
