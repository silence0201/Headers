//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRGuideView.h>

@class NSLock, NSString;

__attribute__((visibility("hidden")))
@interface SCRSpeechAttributeGuideView : SCRGuideView
{
    NSString *_mainValue;
    NSLock *_guideViewLock;
}

+ (id)_createNewGuideView;
- (void)setMainValue:(id)arg1;
- (double)alphaValue;
- (void)setAlphaValue:(double)arg1;
- (void)setDecrease;
- (void)setIncrease;
- (id)getText:(id)arg1 fontSize:(double)arg2;
- (void)drawText:(struct CGContext *)arg1 textValue:(id)arg2 centeredIn:(struct CGRect)arg3 yOffset:(double)arg4 xOffset:(double)arg5 fontSize:(double)arg6 opacity:(double)arg7;
- (void)drawInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)updateMenu;
- (void)dealloc;
- (void)restoreAlphaValues;
- (id)initWithScreenRect:(struct CGRect)arg1;

@end
