//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, NSString;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying>
{
    unsigned long long _referenceAction;
    CKRecordID *_recordID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) unsigned long long referenceAction; // @synthesize referenceAction=_referenceAction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecord:(id)arg1 action:(unsigned long long)arg2;
- (id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2;
- (id)_initBare;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

