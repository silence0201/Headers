//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SAUIImageResource;

@interface SAUIAlternateProviderResult : SADomainObject
{
}

+ (id)alternateProviderResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)alternateProviderResult;
@property(copy, nonatomic) NSString *providerName;
@property(retain, nonatomic) SAUIImageResource *providerImage;
@property(copy, nonatomic) NSNumber *numberOfResults;
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
