//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNSceneDatabase : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_db;
}

+ (_Bool)supportsSecureCoding;
+ (id)lookUpKeyForObjectNamed:(id)arg1 class:(Class)arg2;
+ (id)sceneDatabase;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addInstance:(id)arg1 withName:(id)arg2 class:(Class)arg3;
- (void)dealloc;
- (id)init;

@end

