//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVPlayerItemAccessLogInternal, NSArray;

@interface AVPlayerItemAccessLog : NSObject <NSCopying>
{
    AVPlayerItemAccessLogInternal *_playerItemAccessLog;
}

- (id)_accessLogArray;
@property(readonly, nonatomic) NSArray *events;
@property(readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
- (id)extendedLogData;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithLogArray:(id)arg1;
- (id)init;
- (id)_common_init;

@end

