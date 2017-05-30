//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@interface MPAssistantAnalyticsReportingController : NSObject
{
    NSString *_lastSiriReferenceIdentifierWithLikelyToKeepUp;
    NSHashTable *_players;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)unregisterPlayer:(id)arg1;
- (void)registerPlayer:(id)arg1;
- (id)_init;

@end
