//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>
#import <CloudDocsDaemon/BRCRecentDocumentsNotificationDelegate-Protocol.h>

@class NSString;
@protocol BRCIndexingArbiter;

__attribute__((visibility("hidden")))
@interface BRCApplicationShortcutService : NSObject <BRCModule, BRCRecentDocumentsNotificationDelegate>
{
    id <BRCIndexingArbiter> _indexingArbiter;
}

@property(nonatomic) __weak id <BRCIndexingArbiter> indexingArbiter; // @synthesize indexingArbiter=_indexingArbiter;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isCancelled;
- (void)close;
- (void)cancel;
- (void)resume;
- (void)recentDocumentsListUpdated;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

