//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Backup/NSAnimationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BU_TBlockAnimationDelegate : NSObject <NSAnimationDelegate>
{
    function_721cd517 _progressCallback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (id)initWithAnimation:(id)arg1 progressCallback:(function_721cd517)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
