//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

@class CKShareMetadata, NSString;

@interface CKInitiateParticipantVettingOperationInfo : CKOperationInfo
{
    CKShareMetadata *_shareMetadata;
    NSString *_participantID;
    NSString *_address;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(retain, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

