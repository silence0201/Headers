//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXPeopleDataSource.h>

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSArray, NSObject, NSString, PXPeopleDetailsContext;
@protocol OS_dispatch_queue;

@interface PXPeopleWidgetDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver>
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    _Bool _containsSocialGroups;
    _Bool _isForOneUp;
    _Bool _prefetchingStarted;
    PXPeopleDetailsContext *_context;
}

@property(nonatomic) _Bool prefetchingStarted; // @synthesize prefetchingStarted=_prefetchingStarted;
@property(nonatomic) _Bool isForOneUp; // @synthesize isForOneUp=_isForOneUp;
@property(retain, nonatomic) PXPeopleDetailsContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool containsSocialGroups; // @synthesize containsSocialGroups=_containsSocialGroups;
- (void).cxx_destruct;
- (id)_socialGroupsForIdentifiers:(id)arg1;
- (void)loadMembersWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_updateMembers;
- (void)prefetchThumbnailsForTargetSize:(struct CGSize)arg1 maxFetchCount:(unsigned long long)arg2;
- (id)titleAtIndex:(unsigned long long)arg1;
- (void)imageCacheDidChanged:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)stopListeningForChanges;
- (void)startListeningForChanges;
- (void)dealloc;
- (id)initWithName:(id)arg1 objectsReloadBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *members; // @dynamic members;
@property(readonly) Class superclass;

@end
