//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BKSSystemApplicationClientDelegate-Protocol.h>

@class BKSSystemApplicationClient, NSString;
@protocol BKSSystemApplicationDelegate, OS_dispatch_queue;

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    BKSSystemApplicationClient *_client;
    id <BKSSystemApplicationDelegate> _delegate;
}

@property(nonatomic) id <BKSSystemApplicationDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)clientIsAliveForWatchdog:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)finishBooting;
- (void)restart;
- (void)start;
- (void)bootstrap;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
