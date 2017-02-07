//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIScreen, _UIFocusMapSearchInfo, _UIFocusedItemRegion;
@protocol _UIFocusMapDelegate, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMap : NSObject
{
    _Bool _minimumSearchAreaIsEmpty;
    _Bool _trackingSearchInfo;
    _Bool _needsSearchInfo;
    _UIFocusedItemRegion *_focusedRegion;
    UIScreen *_screen;
    id <_UIFocusRegionContainer> _rootContainer;
    long long _focusMovementStyle;
    id <_UIFocusMapDelegate> _delegate;
    _UIFocusMapSearchInfo *_defaultItemSearchInfo;
    _UIFocusMapSearchInfo *_focusMovementSearchInfo;
    struct CGRect _minimumSearchArea;
}

@property(readonly, nonatomic, getter=_focusMovementSearchContext) _UIFocusMapSearchInfo *focusMovementSearchInfo; // @synthesize focusMovementSearchInfo=_focusMovementSearchInfo;
@property(readonly, nonatomic, getter=_defaultItemSearchContext) _UIFocusMapSearchInfo *defaultItemSearchInfo; // @synthesize defaultItemSearchInfo=_defaultItemSearchInfo;
@property(nonatomic, getter=_delegate, setter=_setDelegate:) __weak id <_UIFocusMapDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long focusMovementStyle; // @synthesize focusMovementStyle=_focusMovementStyle;
@property(nonatomic, getter=_minimumSearchArea, setter=_setMinimumSearchArea:) struct CGRect minimumSearchArea; // @synthesize minimumSearchArea=_minimumSearchArea;
@property(nonatomic, getter=_rootContainer, setter=_setRootContainer:) __weak id <_UIFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;
@property(readonly, nonatomic, getter=_screen) __weak UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, copy, nonatomic) _UIFocusedItemRegion *focusedRegion; // @synthesize focusedRegion=_focusedRegion;
- (void).cxx_destruct;
- (void)_trackExternalSnapshot:(id)arg1;
- (void)_beginTrackingFocusMovementSearchInfoIfNecessary;
- (void)_beginTrackingDefaultItemSearchInfoIfNecessary;
- (id)_stopTrackingSearches;
- (void)_beginTrackingSearches;
- (id)_findAllDefaultFocusableRegionsWithOptions:(id)arg1;
- (id)_allDefaultFocusableRegionsInContainer:(id)arg1 intersectingRegion:(id)arg2;
- (id)_allDefaultFocusableRegionsInContainer:(id)arg1;
- (id)_destinationItemForFocusMovement:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3;
- (id)_destinationItemForFocusMovement:(id)arg1 startingFromRegion:(id)arg2;
- (id)_destinationItemForFocusMovement:(id)arg1;
- (id)_defaultFocusItemInEnvironment:(id)arg1 limitScopeUsingFocusPreferences:(_Bool)arg2;
- (id)_defaultFocusItemInEnvironment:(id)arg1;
- (id)_allFocusableItemsInEnvironment:(id)arg1;
- (id)_defaultMapSnapshotOptions;
- (_Bool)_isValidFocusMap;
- (id)_initWithScreen:(id)arg1 focusedRegion:(id)arg2;
- (id)_initWithScreen:(id)arg1 focusedItem:(id)arg2;
- (id)_initWithScreen:(id)arg1;
- (id)init;

@end

