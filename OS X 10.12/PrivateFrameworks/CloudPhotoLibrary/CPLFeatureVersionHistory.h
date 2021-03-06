//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject
{
    NSMutableDictionary *_anchorToVersion;
    NSMutableDictionary *_versionToAnchor;
    long long _currentFeatureVersion;
}

@property(readonly, nonatomic) long long currentFeatureVersion; // @synthesize currentFeatureVersion=_currentFeatureVersion;
- (void).cxx_destruct;
- (void)enumerateHistoryWithBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (long long)featureVersionForSyncAnchor:(id)arg1;
- (id)syncAnchorForFeatureVersion:(long long)arg1;
- (void)addSyncAnchor:(id)arg1 forFeatureVersion:(long long)arg2;
- (id)initWithCurrentFeatureVersion:(long long)arg1;

@end

