//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKState, NSDictionary;

@interface GKStateMachine : NSObject
{
    NSDictionary *_states;
    GKState *_currentState;
}

+ (id)stateMachineWithStates:(id)arg1;
@property(readonly, nonatomic) GKState *currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (id)stateForClass:(Class)arg1;
- (_Bool)canEnterState:(Class)arg1;
- (_Bool)enterState:(Class)arg1;
- (void)forceEnterState:(Class)arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (id)initWithStates:(id)arg1;
- (id)init;

@end

