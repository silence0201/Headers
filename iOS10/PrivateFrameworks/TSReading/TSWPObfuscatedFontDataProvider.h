//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSInputStream;

@interface TSWPObfuscatedFontDataProvider : NSObject
{
    NSInputStream *_stream;
    unsigned char _xorMask[20];
}

- (void)rewind;
- (long long)skipForwardBy:(long long)arg1;
- (unsigned long long)readBytes:(char *)arg1 count:(unsigned long long)arg2;
- (long long)p_currentOffset;
- (void)dealloc;
- (id)initWithPath:(id)arg1 groupUID:(id)arg2;

@end
