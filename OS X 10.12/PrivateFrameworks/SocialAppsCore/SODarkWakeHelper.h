//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SODarkWakeHelperDelegate;

@interface SODarkWakeHelper : NSObject
{
    id <SODarkWakeHelperDelegate> _delegate;
    struct __CFRunLoopSource *_ioRunLoopSource;
}

+ (BOOL)screenShieldIsRaised;
@property(nonatomic) struct __CFRunLoopSource *ioRunLoopSource; // @synthesize ioRunLoopSource=_ioRunLoopSource;
@property __weak id <SODarkWakeHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

