//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTouchBar.h>

#import <ViewBridge/TouchBarsAndItems-Protocol.h>

@class NSString;

@interface NSTouchBar (ViewBridge) <TouchBarsAndItems>
+ (id)touchBarForIdentifier:(id)arg1;
- (id)viewServiceTouchBarControllerDescription;
- (void)removeViewServiceTouchBarControllerObservers;
- (void)addViewServiceTouchBarControllerObservers;
@property(copy) NSString *viewServiceTouchBarControllerIdentifier;
- (void)swizzledDealloc;
@end

