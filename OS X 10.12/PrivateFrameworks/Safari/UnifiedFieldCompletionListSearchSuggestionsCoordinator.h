//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UnifiedFieldCompletionListSearchSuggestionsCoordinator : NSObject
{
    NSMutableSet *_expectedSources;
    NSMutableSet *_sourcesThatFailed;
    NSMutableDictionary *_suggestionsBySource;
}

- (void).cxx_destruct;
- (BOOL)hasSufficientSuggestionsToDisplayCompletionList;
- (void)removeAllSuggestions;
- (id)suggestionsFromSource:(int)arg1;
- (void)didFailToReceiveSuggestionsFromSource:(int)arg1;
- (void)setSuggestions:(id)arg1 fromSource:(int)arg2;
- (void)expectSuggestionsFromSource:(int)arg1;
- (BOOL)isExpectingSuggestionsFromSource:(int)arg1;
- (id)init;

@end

