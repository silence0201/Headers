//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/TUCallProviderManagerDataSourceDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, TUCallProvider;
@protocol OS_dispatch_queue, TUCallProviderManagerDataSource;

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate>
{
    NSMapTable *_delegateToQueue;
    NSObject<OS_dispatch_queue> *_queue;
    id <TUCallProviderManagerDataSource> _dataSource;
}

+ (int)serviceForProvider:(id)arg1 video:(_Bool)arg2;
+ (id)defaultProviders;
@property(readonly, nonatomic) id <TUCallProviderManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
- (void).cxx_destruct;
- (void)providersChangedForDataSource:(id)arg1;
- (id)providerForFavoritesEntryActionBundleIdentifier:(id)arg1;
- (id)providerForFavoritesEntry:(id)arg1;
- (id)providerForRecentCall:(id)arg1;
- (id)providersPassingTest:(CDUnknownBlockType)arg1;
- (id)providerWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *providers;
@property(readonly, nonatomic) TUCallProvider *emergencyProvider;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)providerWithService:(int)arg1 video:(_Bool *)arg2;
@property(readonly, nonatomic) TUCallProvider *faceTimeProvider;
@property(readonly, nonatomic) TUCallProvider *telephonyProvider;
@property(readonly, nonatomic) TUCallProvider *voicemailProvider;
@property(readonly, nonatomic) TUCallProvider *defaultProvider;
- (void)dealloc;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithDataSource:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

