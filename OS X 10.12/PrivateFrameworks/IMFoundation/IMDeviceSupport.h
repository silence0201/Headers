//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString;

@interface IMDeviceSupport : NSObject
{
    NSString *_model;
    NSString *_productName;
    NSString *_productVersion;
    NSString *_buildVersion;
    NSRecursiveLock *_lock;
}

+ (id)marketingNameForModel:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *deviceInformationString;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *userAgentString;
- (void)_generateProductInformation;
@property(readonly, nonatomic) NSString *model;
- (void)dealloc;
- (id)init;

@end

