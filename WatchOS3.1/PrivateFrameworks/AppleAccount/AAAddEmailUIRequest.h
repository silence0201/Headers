//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAAddEmailUIRequest : AARequest
{
    ACAccount *_account;
}

@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (id)initWithAccount:(id)arg1;

@end

