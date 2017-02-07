//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLAttribute.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLAttributeInternal : MTLAttribute
{
    unsigned char _flags;
    NSString *_name;
    unsigned long long _attributeIndex;
    unsigned long long _attributeType;
}

- (unsigned long long)attributeType;
- (unsigned long long)attributeIndex;
- (id)name;
- (id)description;
- (_Bool)isPatchControlPointData;
- (_Bool)isPatchData;
- (void)setAttributeType:(unsigned long long)arg1;
- (_Bool)isActive;
- (void)dealloc;
- (id)initWithName:(id)arg1 attributeIndex:(unsigned long long)arg2 attributeType:(unsigned long long)arg3 flags:(struct MTLAttributeFlags)arg4;

@end

