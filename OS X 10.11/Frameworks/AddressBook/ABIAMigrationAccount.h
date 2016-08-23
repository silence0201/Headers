//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol ABAccountConfiguration;

__attribute__((visibility("hidden")))
@interface ABIAMigrationAccount : NSObject
{
    NSString *_identifier;
    id <ABAccountConfiguration> _config;
    Class _sourceClass;
    NSURL *_baseUrl;
}

@property(readonly, copy) NSURL *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(readonly) Class sourceClass; // @synthesize sourceClass=_sourceClass;
@property(readonly, retain) id <ABAccountConfiguration> config; // @synthesize config=_config;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
@property(readonly) BOOL hasACAccountIdentifier;
@property(readonly, copy) NSString *password;
- (void)dealloc;
- (id)initWithBuilder:(id)arg1;

@end
