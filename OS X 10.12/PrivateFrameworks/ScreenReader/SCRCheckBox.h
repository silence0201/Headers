//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRButton.h>

__attribute__((visibility("hidden")))
@interface SCRCheckBox : SCRButton
{
}

- (BOOL)isCheckbox;
- (BOOL)isControlElement;
- (BOOL)alwaysAllowDrag;
- (void)addActionDescription:(id)arg1 toRequest:(id)arg2;
- (id)statusDescriptionWithOptionsMask:(int)arg1;
- (id)valueDescription;
- (id)_theCorrectDefaultActionDescription;
- (id)defaultActionDescription;
- (id)roleDescription;
- (BOOL)toggleSingleSelectionWithRequest:(id)arg1;
- (BOOL)isSelected;
- (void)echoValueChangeToRequest:(id)arg1;
- (BOOL)canHandleValueChange;

@end
