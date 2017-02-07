//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPAVItem, NSString;

@interface MPArrayQueueItem : NSObject
{
    MPAVItem *_item;
    NSString *_path;
    double _startTime;
    double _stopTime;
}

@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) MPAVItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithMPAVItem:(id)arg1;
- (id)init;

@end

