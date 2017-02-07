//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

#import <AppKit/NSGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSPanGestureRecognizer, NSPressGestureRecognizer, NSString, NSTouchBarCustomizationPreviewItemContainerView;

__attribute__((visibility("hidden")))
@interface NSTouchBarCustomizationPreviewCollectionViewItem : NSCollectionViewItem <NSGestureRecognizerDelegate>
{
    NSTouchBarCustomizationPreviewItemContainerView *_itemView;
    long long _state;
    long long _jiggleIndex;
    NSPressGestureRecognizer *_pressRecognizer;
    NSPanGestureRecognizer *_panRecognizer;
    CDUnknownBlockType _pressHandler;
    CDUnknownBlockType _panHandler;
    unsigned int _isInteractable:1;
    unsigned int _isSpace:1;
    unsigned int _leadingJiggle:1;
    unsigned int _trailingJiggle:1;
}

@property(readonly) long long state; // @synthesize state=_state;
@property(readonly) long long jiggleIndex; // @synthesize jiggleIndex=_jiggleIndex;
@property(copy) CDUnknownBlockType panHandler; // @synthesize panHandler=_panHandler;
@property(copy) CDUnknownBlockType pressHandler; // @synthesize pressHandler=_pressHandler;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)_shouldTrailingJiggle;
- (BOOL)_shouldLeadingJiggle;
@property(readonly) BOOL _shouldJiggle;
- (void)_updateJiggle;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (id)preferredViewAppearanceShowingAppState:(BOOL)arg1;
@property(readonly) NSTouchBarCustomizationPreviewItemContainerView *itemView;
- (void)_handlePan:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)loadView;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (BOOL)accessibilityIsHiddenAttributeSettable;
- (id)accessibilityHiddenAttribute;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityHidden;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityHelp;
- (id)accessibilityActionNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
@property(copy) NSArray *accessibilityActionEntries;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
