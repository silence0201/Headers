//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CDBDataProtectionObserver;

@interface EKDataProtectionObserver : NSObject
{
    CDUnknownBlockType _stateChangedCallback;
    CDBDataProtectionObserver *_dataProtectionObserver;
}

+ (id)stateChangedNotificationName;
@property(retain, nonatomic) CDBDataProtectionObserver *dataProtectionObserver; // @synthesize dataProtectionObserver=_dataProtectionObserver;
@property(copy, nonatomic) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool dataIsAccessible;
- (void)_dataProtectionStateChanged;
- (id)init;

@end

