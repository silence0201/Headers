//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol INTermsAndConditionsExport <NSObject, JSExport>
@property(readonly, nonatomic) NSURL *termsAndConditionsURL;
@property(readonly, nonatomic) NSURL *privacyPolicyURL;
@property(readonly, nonatomic) NSString *localizedTermsAndConditionsText;
- (id)init;
@end

