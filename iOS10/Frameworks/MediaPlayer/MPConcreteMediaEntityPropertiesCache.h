//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol MPMediaLibraryDataProvider, OS_dispatch_queue;

@interface MPConcreteMediaEntityPropertiesCache : NSObject
{
    Class _dataProviderEntityClass;
    long long _identifier;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_valuePersistenceBlocks;
    NSObject<OS_dispatch_queue> *_propertiesQueue;
    id <MPMediaLibraryDataProvider> _dataProvider;
}

@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) Class dataProviderEntityClass; // @synthesize dataProviderEntityClass=_dataProviderEntityClass;
@property(readonly, nonatomic) __weak id <MPMediaLibraryDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)delete;
- (void)cacheValue:(id)arg1 forProperty:(id)arg2 persistValueInBackgroundBlock:(CDUnknownBlockType)arg3;
- (void)cachePropertyValues:(id)arg1 forProperties:(id)arg2 persistValueInBackgroundBlock:(CDUnknownBlockType)arg3;
- (void)_onBarrierCacheValues:(id)arg1 persistValueInBackgroundBlock:(CDUnknownBlockType)arg2;
- (id)valueForProperty:(id)arg1 isCached:(_Bool *)arg2;
- (id)initWithLibraryDataProvider:(id)arg1 dataProviderEntityClass:(Class)arg2 identifier:(long long)arg3;

@end

