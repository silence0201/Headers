//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    _Bool _atomic;
    _Bool _shouldOnlySaveAssetContent;
    _Bool _shouldReportRecordsInFlight;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    NSData *_clientChangeTokenData;
    long long _savePolicy;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldReportRecordsInFlight; // @synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight;
@property(retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property(copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
@property(nonatomic) _Bool shouldOnlySaveAssetContent; // @synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent;
@property(nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property(nonatomic) _Bool atomic; // @synthesize atomic=_atomic;
@property(retain, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property(retain, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

