//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPAVController, MPMusicPlayerControllerServerInternal;

@interface MPMusicPlayerControllerServer : NSObject
{
    MPMusicPlayerControllerServerInternal *_internal;
}

+ (id)sharedInstance;
+ (_Bool)isMusicPlayerControllerServerRunning;
+ (void)startMusicPlayerControllerServerWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPAVController *player;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)_runMigServer;

@end

