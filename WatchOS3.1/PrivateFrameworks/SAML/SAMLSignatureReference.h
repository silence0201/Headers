//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface SAMLSignatureReference : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
@property(readonly, nonatomic) NSData *digestValue;
@property(readonly, nonatomic) NSString *digestMethod;
@property(readonly, nonatomic) NSArray *transforms;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *uri;
@property(readonly, nonatomic) NSString *identifier;

@end

