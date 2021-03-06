//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsObserverProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsObserverProtocol-Protocol.h>

@class CSSearchableItem, NSArray;

@protocol SGSuggestionsServiceMailProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceEventsConfirmRejectProtocol, _SGSuggestionsServiceContactsConfirmRejectProtocol, _SGSuggestionsServiceContactsObserverProtocol, _SGSuggestionsServiceEventsObserverProtocol>
- (void)updateMessages:(NSArray *)arg1 state:(unsigned long long)arg2 withCompletion:(void (^)(NSError *))arg3;
- (BOOL)updateMessages:(NSArray *)arg1 state:(unsigned long long)arg2 error:(id *)arg3;
- (void)reportMessagesFound:(NSArray *)arg1 lost:(NSArray *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (BOOL)reportMessagesFound:(NSArray *)arg1 lost:(NSArray *)arg2 error:(id *)arg3;
- (void)messagesToRefreshWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (NSArray *)messagesToRefreshWithError:(id *)arg1;
- (void)harvestedSuggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)harvestedSuggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)suggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)prepareForRealtimeExtractionWithCompletion:(void (^)(NSError *))arg1;
- (BOOL)prepareForRealtimeExtraction:(id *)arg1;
@end

