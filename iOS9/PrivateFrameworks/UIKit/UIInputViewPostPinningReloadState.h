//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface UIInputViewPostPinningReloadState : NSObject
{
    UIResponder *_responderPreventedFromSettingInputViews;
}

+ (id)stateWithResponder:(id)arg1;
@property(retain, nonatomic) UIResponder *responderToReload; // @synthesize responderToReload=_responderPreventedFromSettingInputViews;
- (void)dealloc;

@end

