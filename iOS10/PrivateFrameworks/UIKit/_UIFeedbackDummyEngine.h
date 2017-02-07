//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFeedbackEngine.h>

#import <UIKit/_UIFeedbackPlayer-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIFeedbackDummyEngine : _UIFeedbackEngine <_UIFeedbackPlayer>
{
    CDUnknownBlockType _invalidationBlock;
}

+ (_Bool)_supportsPlayingFeedback:(id)arg1;
+ (id)sharedEngine;
@property(copy, nonatomic) CDUnknownBlockType invalidationBlock; // @synthesize invalidationBlock=_invalidationBlock;
- (void).cxx_destruct;
- (id)_stats_key;
- (void)_stopFeedback:(id)arg1;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_activateUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;

@end

