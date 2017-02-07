//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GKChallengeInternal;
@protocol GKChallengeEventHandlerDelegate, GKChallengeEventHandlerUIDelegate;

@interface GKChallengeEventHandler : NSObject
{
    id <GKChallengeEventHandlerDelegate> _delegateWeak;
    id <GKChallengeEventHandlerUIDelegate> _uiDelegate;
    GKChallengeInternal *_pendingReceivedChallenge;
    GKChallengeInternal *_pendingCompletedChallenge;
}

+ (id)challengeEventHandler;
@property(retain, nonatomic) GKChallengeInternal *pendingCompletedChallenge; // @synthesize pendingCompletedChallenge=_pendingCompletedChallenge;
@property(retain, nonatomic) GKChallengeInternal *pendingReceivedChallenge; // @synthesize pendingReceivedChallenge=_pendingReceivedChallenge;
@property(retain, nonatomic) id <GKChallengeEventHandlerUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
- (void)showBannerForChallenge:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)challengeCompleted:(id)arg1;
- (void)challengeReceived:(id)arg1;
- (void)completedChallengeSelected:(id)arg1;
- (void)receivedChallengeSelected:(id)arg1;
@property(nonatomic) id <GKChallengeEventHandlerDelegate> delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

@end
