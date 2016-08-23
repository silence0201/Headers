//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableData.h>

#import <Foundation/NSDiscardableContent-Protocol.h>

@interface NSPurgeableData : NSMutableData <NSDiscardableContent>
{
    unsigned long long _length;
    int _accessCount;
    unsigned char _private[32];
    void *_reserved;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (BOOL)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)_destroyMemory;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (id)description;
- (void)setLength:(unsigned long long)arg1;
- (void *)mutableBytes;
- (const void *)bytes;
- (unsigned long long)length;

@end
