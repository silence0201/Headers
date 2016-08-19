//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SGContact, SGContactMatch;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionMatch : NSObject
{
    SGContact *_contact;
    SGContactMatch *_contactMatch;
    NSString *_mainStoreLinkedIdentifier;
}

+ (void)fetchLinkedIdentifiersForContactSuggestionMatches:(id)arg1 fromSuggestionService:(id)arg2;
+ (id)suggestionFromContactMatch:(id)arg1;
@property(retain, nonatomic) NSString *mainStoreLinkedIdentifier; // @synthesize mainStoreLinkedIdentifier=_mainStoreLinkedIdentifier;
@property(retain, nonatomic) SGContactMatch *contactMatch; // @synthesize contactMatch=_contactMatch;
@property(retain, nonatomic) SGContact *contact; // @synthesize contact=_contact;
- (void)dealloc;

@end

