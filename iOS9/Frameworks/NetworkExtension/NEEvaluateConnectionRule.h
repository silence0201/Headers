//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSArray, NSURL;

@interface NEEvaluateConnectionRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    long long _action;
    NSArray *_matchDomains;
    NSArray *_useDNSServers;
    NSURL *_probeURL;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSURL *probeURL; // @synthesize probeURL=_probeURL;
@property(copy) NSArray *useDNSServers; // @synthesize useDNSServers=_useDNSServers;
@property(readonly) NSArray *matchDomains; // @synthesize matchDomains=_matchDomains;
@property(readonly) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchDomains:(id)arg1 andAction:(long long)arg2;

@end
