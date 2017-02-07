//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSColorSpaceSliders.h>

@interface NSRGBSliders : NSColorSpaceSliders
{
    id redSlider;
    id greenSlider;
    id blueSlider;
    id rgbView;
    id redText;
    id greenText;
    id blueText;
    id rgbText;
    id hexText;
    long long _entryMode;
    id hexContainer;
}

+ (id)genericColorSpace;
- (void)takeColorSpaceFrom:(id)arg1;
- (void)setEntryMode:(long long)arg1;
- (void)_adjustControls:(id)arg1 andSetColor:(BOOL)arg2;
- (void)adjustControls:(id)arg1;
- (void)hexAction:(id)arg1;
- (BOOL)worksWhenModal;
- (id)regularColorIfPossible:(id)arg1;
- (void)setMatchedColor:(id)arg1;
- (id)fieldEditableControl;
- (id)provideNewSubview:(id)arg1;

@end
