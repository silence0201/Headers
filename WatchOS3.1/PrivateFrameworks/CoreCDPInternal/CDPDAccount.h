//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPDAccount : NSObject
{
}

+ (id)sharedInstance;
- (id)primaryAccountAltDSID;
- (id)primaryAccountDSID;
- (id)primaryAccountUsername;
- (_Bool)isICDPEnabledForDSID:(id)arg1 checkWithServer:(_Bool)arg2;
- (_Bool)isICDPEnabledForDSID:(id)arg1;
- (id)_primaryiCloudAccount;
@property(nonatomic) _Bool hasDisabledKeychainExplicitly;

@end
