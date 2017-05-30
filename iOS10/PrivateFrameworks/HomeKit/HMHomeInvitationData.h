//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@interface HMHomeInvitationData : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _invitationState;
}

+ (id)homeInvitationStateDescription:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long invitationState; // @synthesize invitationState=_invitationState;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationState:(long long)arg1 invitationIdentifier:(id)arg2 expiryDate:(id)arg3;

@end
