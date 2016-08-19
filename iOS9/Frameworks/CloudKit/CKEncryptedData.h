//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CKEncryptedData : NSObject <CKRecordValue, NSCopying, NSSecureCoding>
{
    NSData *_data;
    NSData *_encryptedData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEncryptedData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

