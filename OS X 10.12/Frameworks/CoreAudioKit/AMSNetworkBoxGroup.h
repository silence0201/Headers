//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreAudioKit/NSCopying-Protocol.h>

@class NSArray, TransportInfo;

__attribute__((visibility("hidden")))
@interface AMSNetworkBoxGroup : NSObject <NSCopying>
{
    TransportInfo *info;
    NSArray *boxList;
}

@property(copy) NSArray *boxList; // @synthesize boxList;
@property(copy) TransportInfo *info; // @synthesize info;
- (void)sortBoxListWithSortDescriptors:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInfo:(id)arg1 boxList:(id)arg2;

@end

