//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSInlineData : NSData
{
    unsigned short _length;
}

- (id)_createDispatchData;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_isCompact;
- (const void *)bytes;
- (unsigned long long)length;

@end

