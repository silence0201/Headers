//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class QTTrack;

__attribute__((visibility("hidden")))
@interface QTStreamEnumerator : NSEnumerator
{
    QTTrack *_track;
    unsigned int _index;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
}

+ (id)streamEnumeratorWithTrack:(id)arg1;
- (id)nextObject;
- (void)dealloc;
- (id)initWithTrack:(id)arg1;
- (void)setTrack:(id)arg1;

@end
