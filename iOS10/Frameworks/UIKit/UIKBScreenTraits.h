//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIScreen;

@interface UIKBScreenTraits : NSObject
{
    _Bool _knobInput;
    _Bool _touchInput;
    _Bool _touchpadInput;
    _Bool _isKeyboardMinorEdgeWidth;
    UIScreen *_screen;
    long long _orientation;
    double _keyboardWidth;
}

+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2;
@property(readonly, nonatomic) _Bool isKeyboardMinorEdgeWidth; // @synthesize isKeyboardMinorEdgeWidth=_isKeyboardMinorEdgeWidth;
@property(nonatomic) double keyboardWidth; // @synthesize keyboardWidth=_keyboardWidth;
@property(readonly, nonatomic) _Bool touchpadInput; // @synthesize touchpadInput=_touchpadInput;
@property(readonly, nonatomic) _Bool touchInput; // @synthesize touchInput=_touchInput;
@property(readonly, nonatomic) _Bool knobInput; // @synthesize knobInput=_knobInput;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (id)description;
- (void)updateForTextInputTraits:(id)arg1 supportsTouchInput:(id)arg2;
@property(readonly, nonatomic) long long idiom;
- (id)initWithScreen:(id)arg1 orientation:(long long)arg2;

@end

