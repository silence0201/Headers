//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSTimeZone.h>

__attribute__((visibility("hidden")))
@interface __NSLocalTimeZone : NSTimeZone
{
}

+ (_Bool)supportsSecureCoding;
- (id)replacementObjectForPortCoder:(id)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)description;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (long long)secondsFromGMTForDate:(id)arg1;
- (id)data;
- (id)name;

@end

