//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

@class CNInstantMessageAddress;

__attribute__((visibility("hidden")))
@interface CNInstantMessageAddressContactPredicate : CNPredicate
{
    CNInstantMessageAddress *_imAddress;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) CNInstantMessageAddress *imAddress; // @synthesize imAddress=_imAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithInstantMessageAddress:(id)arg1;

@end
