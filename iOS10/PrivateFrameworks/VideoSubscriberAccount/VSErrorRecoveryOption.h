//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSErrorRecoveryOption : NSObject
{
    _Bool _destructive;
    NSString *_localizedAlertButtonTitle;
    CDUnknownBlockType _attemptHandler;
}

@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(copy, nonatomic) CDUnknownBlockType attemptHandler; // @synthesize attemptHandler=_attemptHandler;
@property(copy, nonatomic) NSString *localizedAlertButtonTitle; // @synthesize localizedAlertButtonTitle=_localizedAlertButtonTitle;
- (void).cxx_destruct;

@end

