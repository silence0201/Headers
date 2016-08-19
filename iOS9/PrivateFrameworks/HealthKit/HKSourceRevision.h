//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKSource, NSString;

@interface HKSourceRevision : NSObject <NSSecureCoding, NSCopying>
{
    HKSource *_source;
    NSString *_version;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (void)_setVersion:(id)arg1;
- (void)_setSource:(id)arg1;
@property(readonly) NSString *version;
@property(readonly) HKSource *source;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSource:(id)arg1 version:(id)arg2;
- (id)_initWithSource:(id)arg1;
- (id)init;

@end

