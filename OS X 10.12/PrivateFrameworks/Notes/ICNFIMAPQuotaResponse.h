//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/ICNFIMAPResponse.h>

@class NSArray, NSString;

@interface ICNFIMAPQuotaResponse : ICNFIMAPResponse
{
    NSString *_quotaRootName;
    NSArray *_quotas;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
@property(copy, nonatomic) NSArray *quotas; // @synthesize quotas=_quotas;
@property(copy, nonatomic) NSString *quotaRootName; // @synthesize quotaRootName=_quotaRootName;
- (void).cxx_destruct;
- (id)description;

@end
