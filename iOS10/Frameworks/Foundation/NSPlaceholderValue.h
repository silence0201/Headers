//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNumber.h>

__attribute__((visibility("hidden")))
@interface NSPlaceholderValue : NSNumber
{
    struct _NSZone *zoneForInstance;
}

+ (_Bool)supportsSecureCoding;
- (void)getValue:(void *)arg1;
- (const char *)objCType;
- (id)initWithCoder:(id)arg1;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;
- (id)init;
- (void)dealloc;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;

@end

