//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AVAssetCollectionFactory : NSObject
{
    struct dispatch_queue_s *_collectionsQ;
    NSMutableDictionary *_collectionsByURLString;
}

+ (id)sharedAVAssetCollectionFactory;
- (void)forgetCollectionWithURL:(id)arg1;
- (id)collectionWithURL:(id)arg1 options:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (void)_cleanUpUncollectables;
- (id)init;

@end
