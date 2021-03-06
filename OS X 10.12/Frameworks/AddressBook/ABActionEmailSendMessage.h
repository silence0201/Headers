//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABActionDelegate-Protocol.h>
#import <AddressBook/NSSharingServiceDelegate-Protocol.h>

@class NSString;
@protocol CNUIShareKitTransitionProvider;

@interface ABActionEmailSendMessage : NSObject <ABActionDelegate, NSSharingServiceDelegate>
{
    id <CNUIShareKitTransitionProvider> _transitionProvider;
}

@property(retain) id <CNUIShareKitTransitionProvider> transitionProvider; // @synthesize transitionProvider=_transitionProvider;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (BOOL)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2;
@property(readonly) NSString *actionProperty;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (id)unlocalizedTitle;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2 transitionProvider:(id)arg3;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

