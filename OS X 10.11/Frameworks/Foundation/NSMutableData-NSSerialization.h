//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (NSSerialization)
- (void)serializeAlignedBytes:(void *)arg1 length:(unsigned int)arg2;
- (void)serializeAlignedBytesLength:(unsigned int)arg1;
- (void)serializeInts:(int *)arg1 count:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)serializeInt:(int)arg1 atIndex:(unsigned int)arg2;
- (void)serializeInts:(int *)arg1 count:(unsigned int)arg2;
- (void)serializeInt:(int)arg1;
@end

