//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeltaHierarchy, DeltaSnapshotInfo, NSString, SpotlightLiveIndexer;

@interface SpotlightLiveIndexOperation : NSObject
{
    SpotlightLiveIndexer *_spotlightIndexer;
    NSString *_pathToBeIndexed;
    NSString *_pathWhereSpotlightStoreResides;
    BOOL _isCreation;
    DeltaHierarchy *_deltaHierarchy;
    DeltaSnapshotInfo *_snapshot;
    int _thisOperation;
}

@property int thisOperation; // @synthesize thisOperation=_thisOperation;
@property(retain, nonatomic) DeltaSnapshotInfo *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) DeltaHierarchy *deltaHierarchy; // @synthesize deltaHierarchy=_deltaHierarchy;
@property BOOL isCreation; // @synthesize isCreation=_isCreation;
@property(retain, nonatomic) NSString *pathWhereSpotlightStoreResides; // @synthesize pathWhereSpotlightStoreResides=_pathWhereSpotlightStoreResides;
@property(retain, nonatomic) NSString *pathToBeIndexed; // @synthesize pathToBeIndexed=_pathToBeIndexed;
@property(retain, nonatomic) SpotlightLiveIndexer *spotlightIndexer; // @synthesize spotlightIndexer=_spotlightIndexer;
- (void)dealloc;
- (void)main;
- (void)handleFileIndex;
- (id)initToAtomicEndBeginWithIndexer:(id)arg1;
- (id)initToEndWithIndexer:(id)arg1;
- (id)initToBeginWithIndexer:(id)arg1;
- (id)initToIndexWithIndexer:(id)arg1 delta:(id)arg2 path:(id)arg3 spotlightStorePath:(id)arg4 inSnapshot:(id)arg5 isCreation:(BOOL)arg6;

@end
