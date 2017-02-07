//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFLibraryUpgradeStep.h>

@class NSArray;

@interface MFReparseReferenceHeadersUpgradeStep : MFLibraryUpgradeStep
{
    NSArray *_accounts;
}

+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)arg1 initialLastWriteMinorVersion:(unsigned long long)arg2 fromBackBooting:(char *)arg3;
+ (unsigned long long)targetVersion;
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (void)_reparseReferencesForRowIDsByMailboxURL:(id)arg1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;
- (id)initWithSQLHandle:(id)arg1 accounts:(id)arg2;

@end
