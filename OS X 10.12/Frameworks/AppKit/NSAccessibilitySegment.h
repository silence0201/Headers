//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAccessibilityIndexedMockUIElement.h>

@interface NSAccessibilitySegment : NSAccessibilityIndexedMockUIElement
{
}

+ (id)segmentWithIndex:(long long)arg1 parent:(id)arg2;
- (void)accessibilitySetFocusedAttribute:(id)arg1;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityFocusedAttribute;
- (void)accessibilityPerformAction:(id)arg1;
- (void)_accessibilityPerformClickAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (id)accessibilityTitleAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityDescriptionAttribute;
- (id)segmentedCell;
- (id)initWithIndex:(long long)arg1 parent:(id)arg2;

@end
