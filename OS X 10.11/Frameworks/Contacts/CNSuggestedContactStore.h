//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNContactStore.h>

@class SGSuggestionsService;

__attribute__((visibility("hidden")))
@interface CNSuggestedContactStore : CNContactStore
{
    SGSuggestionsService *_suggestionService;
}

+ (BOOL)isSuggestionsSupported;
+ (void)initialize;
+ (id)storeIdentifier;
+ (id)storeInfoClasses;
@property(retain, nonatomic) SGSuggestionsService *suggestionService; // @synthesize suggestionService=_suggestionService;
- (BOOL)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (BOOL)_processSuggestions:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithSuggestionsService:(id)arg1;
- (id)init;

@end
