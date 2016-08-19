//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNSuggestedContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNSuggestedContactIdentifierPredicate : CNPredicate <CNSuggestedContactPredicate>
{
    unsigned long long _suggestionIdentifier;
}

@property(readonly) unsigned long long suggestionIdentifier; // @synthesize suggestionIdentifier=_suggestionIdentifier;
@property(readonly, copy) NSString *description;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;
- (_Bool)cn_supportsNativeSorting;
- (id)initWithSuggestionIdentifier:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

