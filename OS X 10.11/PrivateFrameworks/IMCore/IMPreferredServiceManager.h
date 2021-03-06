//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/IDSIDQueryControllerDelegate-Protocol.h>

@class NSString;

@interface IMPreferredServiceManager : NSObject <IDSIDQueryControllerDelegate>
{
}

+ (BOOL)isiMessageAvailable;
+ (BOOL)hasActiveiMessageAccount;
+ (BOOL)mmsEnabled;
+ (BOOL)smsEnabled;
+ (id)sharedPreferredServiceManager;
- (void)_handleOperationalAccountsChanged:(id)arg1;
- (void)_handleLoginStatusChange:(id)arg1;
- (void)_handleConnectionChanged:(id)arg1;
- (void)notifyOfServiceAvailabilityChange;
- (id)preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 error:(char *)arg3 serverCheckCompletionBlock:(CDUnknownBlockType)arg4;
- (id)preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(BOOL)arg3 error:(char *)arg4 serverCheckCompletionBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)__preferrediMessageFallbackServiceForRecipientCount:(long long)arg1 iMessageAvailable:(BOOL)arg2 options:(unsigned long long)arg3 error:(char *)arg4;
- (unsigned long long)__preferredServiceTypeForRecipientCount:(long long)arg1 options:(unsigned long long)arg2 error:(char *)arg3;
- (id)_preferredServiceForHandles:(id)arg1 options:(unsigned long long)arg2 error:(char *)arg3 serverCheckCompletionBlock:(CDUnknownBlockType)arg4;
- (id)_preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(BOOL)arg3 error:(char *)arg4 serverCheckCompletionBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)_optionsForRecipients:(id)arg1 inChat:(id)arg2;
- (unsigned long long)__optionsForChat:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

