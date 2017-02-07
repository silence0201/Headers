//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UISlidingBarState, UISlidingBarStateRequest;

__attribute__((visibility("hidden")))
@interface _UIPanelInteractionState : NSObject <NSCopying>
{
    long long _affectedSides;
    long long _interactingSide;
    double _minLeading;
    double _maxLeading;
    double _minTrailing;
    double _maxTrailing;
    UISlidingBarState *_originalState;
    UISlidingBarStateRequest *_stateRequest;
}

@property(copy, nonatomic) UISlidingBarStateRequest *stateRequest; // @synthesize stateRequest=_stateRequest;
@property(copy, nonatomic) UISlidingBarState *originalState; // @synthesize originalState=_originalState;
@property(nonatomic) double maxTrailing; // @synthesize maxTrailing=_maxTrailing;
@property(nonatomic) double minTrailing; // @synthesize minTrailing=_minTrailing;
@property(nonatomic) double maxLeading; // @synthesize maxLeading=_maxLeading;
@property(nonatomic) double minLeading; // @synthesize minLeading=_minLeading;
@property(nonatomic) long long affectedSides; // @synthesize affectedSides=_affectedSides;
@property(nonatomic) long long interactingSide; // @synthesize interactingSide=_interactingSide;
- (void).cxx_destruct;
- (void)sideWasAffected:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

