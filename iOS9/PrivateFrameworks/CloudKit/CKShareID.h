//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKXPCSuitableString-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZoneID, NSString;

@interface CKShareID : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying>
{
    NSString *_shareName;
    CKRecordZoneID *_zoneID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(copy, nonatomic) NSString *shareName; // @synthesize shareName=_shareName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)ckShortDescription;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithShareName:(id)arg1 zoneID:(id)arg2;
- (id)CKXPCSuitableString;

@end

