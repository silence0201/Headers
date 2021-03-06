//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioServerApplication/ASAPlugin.h>

#import <AudioVideoBridging/ASACoreAudioClient-Protocol.h>

@class NSString;

@interface AVBAudioDriverManager : ASAPlugin <ASACoreAudioClient>
{
}

+ (id)audioDriverManager;
+ (id)sharedAudioDriverManager;
- (BOOL)removeEntityWithEntityID:(unsigned long long)arg1 onInterface:(id)arg2;
- (id)addEntityWithModel:(id)arg1 onInterface:(id)arg2 preaquire:(BOOL)arg3 withControllerID:(unsigned long long)arg4 hidden:(BOOL)arg5;
- (id)addEntityWithModel:(id)arg1 onInterface:(id)arg2 preaquire:(BOOL)arg3 withControllerID:(unsigned long long)arg4;
- (void)coreaudiodDied;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

