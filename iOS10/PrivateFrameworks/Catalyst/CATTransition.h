//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CATState;

@interface CATTransition : NSObject
{
    CATState *_state;
    SEL _action;
}

+ (id)new;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak CATState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (id)initWithState:(id)arg1 action:(SEL)arg2;
- (id)init;

@end
