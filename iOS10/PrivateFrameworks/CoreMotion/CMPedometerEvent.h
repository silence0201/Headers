//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CMPedometerEvent : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *fDate;
    long long fType;
}

+ (id)eventStringFromType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long type; // @synthesize type=fType;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=fDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithEventDate:(id)arg1 type:(long long)arg2;

@end

