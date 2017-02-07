//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSDocumentSerializationObject : NSObject
{
    BOOL _synchronous;
    CDUnknownBlockType _grantHandler;
    CDUnknownBlockType _workBlock;
    BOOL _accessGranted;
    BOOL _finished;
    BOOL _allowingEventsForUnblocker;
    NSMutableArray *_breadcrumbs;
}

@property(readonly) NSArray *breadcrumbs; // @synthesize breadcrumbs=_breadcrumbs;
@property BOOL allowingEventsForUnblocker; // @synthesize allowingEventsForUnblocker=_allowingEventsForUnblocker;
@property(getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(getter=isAccessGranted) BOOL accessGranted; // @synthesize accessGranted=_accessGranted;
@property(copy) CDUnknownBlockType workBlock; // @synthesize workBlock=_workBlock;
@property(copy) CDUnknownBlockType grantHandler; // @synthesize grantHandler=_grantHandler;
@property(getter=isSynchronous) BOOL synchronous; // @synthesize synchronous=_synchronous;
- (void)grant;
- (void)addBreadcrumb:(id)arg1;
- (void)dealloc;

@end
