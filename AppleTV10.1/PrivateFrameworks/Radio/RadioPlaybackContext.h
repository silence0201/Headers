//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>
#import <Radio/NSMutableCopying-Protocol.h>

@class NSArray;

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying>
{
    long long _numberOfSkipsUsed;
    NSArray *_trackPlaybackDescriptorQueue;
}

@property(readonly, copy, nonatomic) NSArray *trackPlaybackDescriptorQueue; // @synthesize trackPlaybackDescriptorQueue=_trackPlaybackDescriptorQueue;
@property(readonly, nonatomic) long long numberOfSkipsUsed; // @synthesize numberOfSkipsUsed=_numberOfSkipsUsed;
- (void).cxx_destruct;
- (id)playbackContextDictionary;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
