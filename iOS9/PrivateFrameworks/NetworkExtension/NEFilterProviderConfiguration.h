//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface NEFilterProviderConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _filterBrowsers;
    _Bool _filterSockets;
    _Bool _controlProviderInitialized;
    NSDictionary *_vendorConfiguration;
    NSString *_serverAddress;
    NSString *_username;
    NSString *_organization;
    NSData *_passwordReference;
    NSData *_identityReference;
    NSString *_pluginType;
    NSString *_keychainAccessGroup;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSString *keychainAccessGroup; // @synthesize keychainAccessGroup=_keychainAccessGroup;
@property _Bool controlProviderInitialized; // @synthesize controlProviderInitialized=_controlProviderInitialized;
@property(retain) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property(copy) NSData *identityReference; // @synthesize identityReference=_identityReference;
@property(copy) NSData *passwordReference; // @synthesize passwordReference=_passwordReference;
@property(copy) NSString *organization; // @synthesize organization=_organization;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(copy) NSDictionary *vendorConfiguration; // @synthesize vendorConfiguration=_vendorConfiguration;
@property _Bool filterSockets; // @synthesize filterSockets=_filterSockets;
@property _Bool filterBrowsers; // @synthesize filterBrowsers=_filterBrowsers;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)optionsDict;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

