//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@interface SGRecordId : NSObject <NSCopying, NSSecureCoding>
{
    long long _internalEntityId;
}

+ (id)recordIdWithNumericValue:(long long)arg1;
+ (id)recordIdWithInternalEntityId:(long long)arg1 foreignHash:(id)arg2;
+ (id)recordIdWithInternalEntityId:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (id)description;
- (BOOL)isEqualToRecordId:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)foreignHash;
- (long long)numericValue;
- (long long)internalEntityId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalEntityId:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
