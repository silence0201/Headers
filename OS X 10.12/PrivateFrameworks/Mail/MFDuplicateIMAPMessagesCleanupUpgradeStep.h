//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFRemoveMessagesUpgradeStep.h>

@interface MFDuplicateIMAPMessagesCleanupUpgradeStep : MFRemoveMessagesUpgradeStep
{
}

+ (BOOL)requiredAfterBackbooting;
+ (unsigned long long)targetVersion;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;

@end
