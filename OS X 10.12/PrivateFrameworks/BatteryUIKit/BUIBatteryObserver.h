//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUIViewController;

@interface BUIBatteryObserver : NSObject
{
    BUIViewController *_viewController;
    CDUnknownBlockType _observerBlock;
    struct __CFRunLoopSource *_runLoopSourceRef;
}

+ (id)createPMObserverWithBlock:(CDUnknownBlockType)arg1;
@property struct __CFRunLoopSource *runLoopSourceRef; // @synthesize runLoopSourceRef=_runLoopSourceRef;
@property(copy) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property(retain) BUIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)_update:(BOOL)arg1;
- (id)_menuBarStringWithSourceState:(struct BUIPowerSourceTypeStruct)arg1;
- (void)refreshUI;
- (void)dealloc;

@end
