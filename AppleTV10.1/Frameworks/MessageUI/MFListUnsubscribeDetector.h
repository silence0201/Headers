//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol MFMutableDictionaryProtocol;

@interface MFListUnsubscribeDetector : NSObject
{
    id <MFMutableDictionaryProtocol> _persistentDictionary;
}

- (_Bool)_shouldIgnoreMessageWithHeaders:(id)arg1;
- (id)_persistentKeyForHeaders:(id)arg1;
- (id)_senderString:(id)arg1;
- (id)_listIDString:(id)arg1;
- (id)_normalizedAddress:(id)arg1;
- (void)removeAllPersistedSuggestions;
- (void)ignoreSuggestion:(id)arg1;
- (void)acceptSuggestion:(id)arg1;
- (id)suggestionForMessage:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMutableDictionary:(id)arg1;

@end

