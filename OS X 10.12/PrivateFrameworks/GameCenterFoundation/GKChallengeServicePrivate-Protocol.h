//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKChallengeService-Protocol.h>

@class GKChallengeInternal, NSString;

@protocol GKChallengeServicePrivate <GKChallengeService>
- (oneway void)startGame:(NSString *)arg1 withChallenge:(GKChallengeInternal *)arg2;
- (oneway void)getCountOfChallengesWithHandler:(void (^)(unsigned long long, NSError *))arg1;
@end
