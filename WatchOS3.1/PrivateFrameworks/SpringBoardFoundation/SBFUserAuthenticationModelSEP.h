//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFUserAuthenticationModel-Protocol.h>

@class NSString, SBFMobileKeyBag, SBSecurityDefaults;
@protocol SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelSEP : NSObject <SBFUserAuthenticationModel>
{
    SBFMobileKeyBag *_keybag;
    double _unblockTime;
    _Bool _permanentlyBlocked;
    _Bool _pendingWipe;
    SBSecurityDefaults *_securityDefaults;
    id <SBFUserAuthenticationModelDelegate> _delegate;
}

@property(nonatomic) id <SBFUserAuthenticationModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_refreshStateForMkbState:(id)arg1 notify:(_Bool)arg2;
- (void)_refreshStateAndNotify:(_Bool)arg1;
- (id)descriptionBuilder;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property(readonly, nonatomic, getter=isPermanentlyBlocked) _Bool permanentlyBlocked;
@property(readonly, nonatomic, getter=isTemporarilyBlocked) _Bool temporarilyBlocked;
- (void)noteNewMkbDeviceLockState:(id)arg1;
- (void)refreshBlockedState;
- (void)clearBlockedState;
- (void)performPasswordTest:(CDUnknownBlockType)arg1;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeEntryBegan;
- (void)synchronize;
- (id)initWithKeyBag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

