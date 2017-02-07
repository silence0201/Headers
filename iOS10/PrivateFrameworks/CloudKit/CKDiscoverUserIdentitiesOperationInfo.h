//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKDiscoverUserIdentitiesOperationInfo : CKOperationInfo <NSSecureCoding>
{
    NSArray *_userIdentityLookupInfos;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *userIdentityLookupInfos; // @synthesize userIdentityLookupInfos=_userIdentityLookupInfos;
- (void).cxx_destruct;
- (id)activityCreate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

