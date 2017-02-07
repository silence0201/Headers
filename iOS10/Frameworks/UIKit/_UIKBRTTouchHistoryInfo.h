//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchHistoryInfo : NSObject
{
    _Bool _isLeftHand;
    _Bool _isActive;
    _Bool _ignoreForDrift;
    _Bool _ignoreTouch;
    id _touchIdentifier;
    double _touchTime;
    struct CGPoint _actualLocation;
    struct CGPoint _errorVector;
}

@property(nonatomic) struct CGPoint errorVector; // @synthesize errorVector=_errorVector;
@property(nonatomic) _Bool ignoreTouch; // @synthesize ignoreTouch=_ignoreTouch;
@property(nonatomic) _Bool ignoreForDrift; // @synthesize ignoreForDrift=_ignoreForDrift;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool isLeftHand; // @synthesize isLeftHand=_isLeftHand;
@property(nonatomic) struct CGPoint actualLocation; // @synthesize actualLocation=_actualLocation;
@property(nonatomic) double touchTime; // @synthesize touchTime=_touchTime;
@property(retain, nonatomic) id touchIdentifier; // @synthesize touchIdentifier=_touchIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

