//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

@class NSData, NSString;

@interface SACFClientFlowScript : SABaseAceObject
{
}

+ (id)clientFlowScriptWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clientFlowScript;
@property(nonatomic) _Bool shouldCacheScript;
@property(copy, nonatomic) NSString *jsScriptIdentifier;
@property(copy, nonatomic) NSData *jsScriptChecksum;
@property(copy, nonatomic) NSString *jsScript;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

