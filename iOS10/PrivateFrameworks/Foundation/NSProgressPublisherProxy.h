//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSProgressPublisher-Protocol.h>

@class NSFileAccessNode, NSProgressValues, NSString, NSXPCConnection;
@protocol NSProgressPublisher;

__attribute__((visibility("hidden")))
@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher>
{
    id <NSProgressPublisher> _forwarder;
    id _publisherID;
    NSString *_lowerCaseCategoryName;
    NSFileAccessNode *_itemLocation;
    NSXPCConnection *_connection;
    NSProgressValues *_values;
}

@property(readonly, copy) NSProgressValues *values; // @synthesize values=_values;
@property(copy) NSString *category; // @synthesize category=_lowerCaseCategoryName;
- (void)observeValue:(id)arg1 forKey:(id)arg2 inUserInfo:(_Bool)arg3;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndenting:(id)arg1;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(_Bool)arg2;
- (oneway void)prioritize;
- (oneway void)resume;
- (oneway void)pause;
- (oneway void)cancel;
@property NSFileAccessNode *itemLocation;
- (_Bool)isFromConnection:(id)arg1;
- (id)publisherID;
- (void)dealloc;
- (id)initWithForwarder:(id)arg1 onConnection:(id)arg2 publisherID:(id)arg3 values:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

