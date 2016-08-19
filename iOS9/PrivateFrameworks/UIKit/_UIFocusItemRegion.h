//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIFocusRegion-Protocol.h>

@class NSString;
@protocol UIFocusContainer;

@interface _UIFocusItemRegion : NSObject <_UIFocusRegion>
{
    id <UIFocusContainer> _focusRegionItem;
    struct CGRect _focusRegionFrame;
}

@property(nonatomic) __weak id <UIFocusContainer> focusRegionItem; // @synthesize focusRegionItem=_focusRegionItem;
@property(nonatomic) struct CGRect focusRegionFrame; // @synthesize focusRegionFrame=_focusRegionFrame;
- (void).cxx_destruct;
- (id)_focusDebugOverlayParentView;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (_Bool)_isTransparentFocusRegion;
- (id)_fulfillPromisedFocusRegion;
- (_Bool)_isPromiseFocusRegion;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1;
- (id)_childFocusRegions;
- (id)_focusRegionItem;
- (_Bool)_focusRegionCanBecomeFocused;
- (_Bool)_focusRegionIsEligibleForFocus;
- (struct CGRect)_focusRegionFrame;
- (id)initWithFocusItem:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithFocusItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

