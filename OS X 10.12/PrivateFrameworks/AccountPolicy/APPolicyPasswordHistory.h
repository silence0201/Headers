//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountPolicy/APPolicy.h>

#import <AccountPolicy/NSCopying-Protocol.h>
#import <AccountPolicy/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface APPolicyPasswordHistory : APPolicy <NSCopying, NSSecureCoding>
{
    NSNumber *_numberOfHistoryItems;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithIdentifier:(id)arg1 andNumberOfHistoryItems:(id)arg2;
+ (id)policyWithNumberOfHistoryItems:(id)arg1;
- (void).cxx_destruct;
- (id)_parametersForNumItems:(id)arg1;
- (id)_contentDescriptionsForNumItems:(id)arg1;
@property(copy) NSNumber *numberOfHistoryItems; // @synthesize numberOfHistoryItems=_numberOfHistoryItems;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 andNumberOfHistoryItems:(id)arg2;
- (id)initWithNumberOfHistoryItems:(id)arg1;

@end
