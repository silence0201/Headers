//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/ADAdSheetConnectionDelegate-Protocol.h>
#import <iAd/ADAdSheetProxyDelegate-Protocol.h>

@class ADAdSheetConnection, NSString;

@interface ADOptInManager : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate>
{
    ADAdSheetConnection *_connection;
}

+ (id)sharedManager;
@property(retain, nonatomic) ADAdSheetConnection *connection; // @synthesize connection=_connection;
- (id)additionalAdSheetLaunchOptions;
- (_Bool)shouldLaunchAdSheet;
- (void)getiAdIDsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleAccountChange;
- (void)refreshOptInStatusRefreshingWeakToken:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshOptInStatus;
- (void)setOptInStatus:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureConnection:(id)arg1;
- (id)adSheetMachServiceName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

