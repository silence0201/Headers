//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVExternalDevice, MPPlayableContentManagerContext, NSMutableSet, NSOperationQueue;
@protocol MPPlayableContentDataSource, MPPlayableContentDelegate, OS_dispatch_queue;

@interface MPPlayableContentManager : NSObject
{
    NSMutableSet *_mutatedContentItems;
    NSMutableSet *_contentItemIdentifiersSentToMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_artworkUpdateQueue;
    _Bool _coalescingUpdates;
    _Bool _scheduledSupportedAPIsChange;
    AVExternalDevice *_externalDevice;
    id <MPPlayableContentDataSource> _dataSource;
    id <MPPlayableContentDelegate> _delegate;
    MPPlayableContentManagerContext *_context;
}

+ (_Bool)_deviceIsCarplayCapable;
+ (id)sharedContentManager;
@property(retain, nonatomic) MPPlayableContentManagerContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <MPPlayableContentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MPPlayableContentDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)_areContentLimitsEnforced;
- (_Bool)_musicListsLimited;
- (void)_scheduleUpdateSupportedAPIs;
- (void)_updateSupportedAPIs;
- (void)_browsableContentEndpointChanged:(id)arg1;
- (void)_limitedUIChanged:(id)arg1;
- (void)_markContentItemsAsSentToMediaRemote:(id)arg1;
- (_Bool)_onQueueContentItemWasSentToMediaRemote:(id)arg1;
- (_Bool)_contentItemWasSentToMediaRemote:(id)arg1;
- (void)_handlePlaybackInitializationCompletedWithContext:(id)arg1 error:(id)arg2;
- (void)_handleBeginLoadingCompletedAtIndexPath:(id)arg1 withError:(id)arg2;
- (void)_pushContentItemsUpdate;
- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (void)_tearDownMediaRemoteEndpoint;
- (void)_setupMediaRemoteEndpoint;
- (void)_enqueueArtworkUpdate:(id)arg1 forContentItem:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_contentItemChangedNotification:(id)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)reloadData;
- (void)dealloc;
- (id)init;
- (id)_init;

@end

