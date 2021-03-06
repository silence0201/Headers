//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <AppKit/NSGestureRecognizerDelegate-Protocol.h>

@class NSColor, NSPanGestureRecognizer, NSString, _NSFunctionRowColorPickerSliderKnob, _NSFunctionRowColorPickerSliderTrack;
@protocol NSFunctionRowColorPickerSliderMinimizationDelegate;

__attribute__((visibility("hidden")))
@interface NSFunctionRowColorPickerSlider : NSControl <NSGestureRecognizerDelegate>
{
    _NSFunctionRowColorPickerSliderTrack *_sliderTrack;
    _NSFunctionRowColorPickerSliderKnob *_sliderKnob;
    double _doubleValue;
    long long _representedComponent;
    double _displayedHueComponent;
    double _displayedSaturationComponent;
    NSColor *_displayedColor;
    NSPanGestureRecognizer *_panRecognizer;
    id <NSFunctionRowColorPickerSliderMinimizationDelegate> _minimizationDelegate;
    id _autounbinder;
    unsigned int _valueIsFlipped:1;
    unsigned int _minimized:1;
    unsigned int _highlighted:1;
    unsigned int _active:1;
}

+ (id)keyPathsForValuesInvalidatingConstraints;
+ (BOOL)requiresConstraintBasedLayout;
+ (BOOL)accessibilityIsSingleCelled;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
@property(getter=isActive) BOOL active; // @synthesize active=_active;
@property id <NSFunctionRowColorPickerSliderMinimizationDelegate> minimizationDelegate; // @synthesize minimizationDelegate=_minimizationDelegate;
@property(getter=isMinimized) BOOL minimized; // @synthesize minimized=_minimized;
@property BOOL valueIsFlipped; // @synthesize valueIsFlipped=_valueIsFlipped;
@property long long representedComponent; // @synthesize representedComponent=_representedComponent;
@property double displayedSaturationComponent; // @synthesize displayedSaturationComponent=_displayedSaturationComponent;
@property double displayedHueComponent; // @synthesize displayedHueComponent=_displayedHueComponent;
@property(copy) NSColor *displayedColor; // @synthesize displayedColor=_displayedColor;
- (id)declaredLayoutConstraints;
- (double)doubleValue;
- (void)setDoubleValue:(double)arg1;
- (float)floatValue;
- (void)setFloatValue:(float)arg1;
- (long long)integerValue;
- (void)setIntegerValue:(long long)arg1;
- (int)intValue;
- (void)setIntValue:(int)arg1;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_endUnminimizeGesture;
- (void)_beginUnminimizeGesture;
- (void)_handlePan:(id)arg1;
- (void)_handlePress:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_autounbinder;
- (oneway void)release;
- (void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityExpandedAttribute;
- (BOOL)accessibilityIsActivationPointAttributeSettable;
- (id)accessibilityActivationPointAttribute;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (id)accessibilityOrientationAttribute;
- (BOOL)accessibilityIsAllowedValuesAttributeSettable;
- (BOOL)accessibilityIsMaxValueAttributeSettable;
- (id)accessibilityMaxValueAttribute;
- (BOOL)accessibilityIsMinValueAttributeSettable;
- (id)accessibilityMinValueAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsValueIndicatorAttributeSettable;
- (id)accessibilityValueIndicatorAttribute;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

