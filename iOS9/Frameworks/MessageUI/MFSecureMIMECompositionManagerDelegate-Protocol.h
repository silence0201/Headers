//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFSecureMIMECompositionManager, NSDictionary;

@protocol MFSecureMIMECompositionManagerDelegate <NSObject>

@optional
- (void)secureMIMECompositionManager:(MFSecureMIMECompositionManager *)arg1 encryptionStatusDidChange:(int)arg2 context:(NSDictionary *)arg3;
- (void)secureMIMECompositionManager:(MFSecureMIMECompositionManager *)arg1 signingStatusDidChange:(int)arg2 context:(NSDictionary *)arg3;
@end

