//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAUISnippet;

@interface SAIntentGroupSnippetTemplate : SADomainObject
{
}

+ (id)snippetTemplateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)snippetTemplate;
@property(copy, nonatomic) NSString *key;
@property(copy, nonatomic) NSArray *intentSlotKeyPaths;
@property(retain, nonatomic) SAUISnippet *detailSnippet;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

