//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, UIImage, UIView, _UIFocusRegionMapSnapshotRequest;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionMapSnapshot : NSObject <NSCopying>
{
    _Bool _isFocusedRectEmpty;
    _Bool _didSetRegionClipFrame;
    struct CGRect _regionClipFrame;
    _Bool _committed;
    _Bool _privateSnaphot;
    _Bool _clipToSnapshotRect;
    UIImage *_visualRepresentation;
    _UIFocusRegionMapSnapshotRequest *_request;
    UIView *_rootView;
    NSArray *_sortedFocusContainerGuideMapEntries;
    NSMutableArray *_detectedFocusableViewMapEntries;
    NSMutableArray *_detectedFocusableGuideMapEntries;
    NSMutableArray *_detectedFocusContainerGuideMapEntries;
    NSMutableArray *_retainedPromiseRegions;
    unsigned long long _focusHeading;
    UIView *_focusableRegionAncestorView;
    NSArray *_finalFocusableRegionMapEntries;
    struct CGPoint _visualRepresentationScreenCenter;
    struct CGRect _mapEntriesFrame;
    struct CGRect _snapshottedRect;
    struct CGRect _focusedRect;
    struct CGRect _visualRepresentationMinimumArea;
}

+ (id)combinedVisualRepresentationForSnapshots:(id)arg1 scaleFactor:(double)arg2;
@property(copy, nonatomic) NSArray *finalFocusableRegionMapEntries; // @synthesize finalFocusableRegionMapEntries=_finalFocusableRegionMapEntries;
@property(nonatomic) struct CGPoint visualRepresentationScreenCenter; // @synthesize visualRepresentationScreenCenter=_visualRepresentationScreenCenter;
@property(nonatomic) __weak UIView *focusableRegionAncestorView; // @synthesize focusableRegionAncestorView=_focusableRegionAncestorView;
@property(nonatomic) struct CGRect visualRepresentationMinimumArea; // @synthesize visualRepresentationMinimumArea=_visualRepresentationMinimumArea;
@property(nonatomic) _Bool clipToSnapshotRect; // @synthesize clipToSnapshotRect=_clipToSnapshotRect;
@property(nonatomic) unsigned long long focusHeading; // @synthesize focusHeading=_focusHeading;
@property(nonatomic) struct CGRect focusedRect; // @synthesize focusedRect=_focusedRect;
@property(retain, nonatomic) NSMutableArray *retainedPromiseRegions; // @synthesize retainedPromiseRegions=_retainedPromiseRegions;
@property(retain, nonatomic) NSMutableArray *detectedFocusContainerGuideMapEntries; // @synthesize detectedFocusContainerGuideMapEntries=_detectedFocusContainerGuideMapEntries;
@property(retain, nonatomic) NSMutableArray *detectedFocusableGuideMapEntries; // @synthesize detectedFocusableGuideMapEntries=_detectedFocusableGuideMapEntries;
@property(retain, nonatomic) NSMutableArray *detectedFocusableViewMapEntries; // @synthesize detectedFocusableViewMapEntries=_detectedFocusableViewMapEntries;
@property(copy, nonatomic) NSArray *sortedFocusContainerGuideMapEntries; // @synthesize sortedFocusContainerGuideMapEntries=_sortedFocusContainerGuideMapEntries;
@property(nonatomic, getter=isPrivateSnapshot) _Bool privateSnaphot; // @synthesize privateSnaphot=_privateSnaphot;
@property(nonatomic, getter=isCommitted) _Bool committed; // @synthesize committed=_committed;
@property(readonly, nonatomic) struct CGRect snapshottedRect; // @synthesize snapshottedRect=_snapshottedRect;
@property(readonly, nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
@property(readonly, copy, nonatomic) _UIFocusRegionMapSnapshotRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)visualRepresentationWithMinimumArea:(struct CGRect)arg1;
@property(readonly, nonatomic) UIImage *visualRepresentation; // @synthesize visualRepresentation=_visualRepresentation;
@property(readonly, nonatomic) struct CGRect mapEntriesFrame; // @synthesize mapEntriesFrame=_mapEntriesFrame;
- (void)_didChooseFocusCandidateRegion:(id)arg1;
- (id)_snapshotByFulfillingPromiseFocusRegionEntry:(id)arg1;
- (id)focusableRegionMapEntriesLimitedByFocusContainerGuide:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allFocusableRegionMapEntries;
- (void)_commit;
- (void)_updateSortedFocusContainerGuideMapEntries;
- (void)_updateFinalFocusableRegionMapEntries;
- (id)_sortedEligibleFocusContainerGuidesInArray:(id)arg1;
- (id)_finalFocusableRegionMapEntriesFromViewMapEntries:(id)arg1 guideMapEntries:(id)arg2;
- (id)_finalFocusableRegionMapEntriesFromMapEntries:(id)arg1;
- (void)_punchHoleInMap:(id)arg1 atFrame:(struct CGRect)arg2;
- (void)_occludeFocusInFrame:(struct CGRect)arg1;
- (void)_addFocusContainerGuide:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)_addFocusableRegion:(id)arg1 isFocusGuide:(_Bool)arg2 withFrame:(struct CGRect)arg3;
- (struct CGRect)_clippedRegionFrame:(struct CGRect)arg1 isFocusGuide:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithRequest:(id)arg1;

@end

