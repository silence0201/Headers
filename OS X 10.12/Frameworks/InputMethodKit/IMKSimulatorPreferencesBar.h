//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IMKSimulatorUIDirectionButton, IMKSimulatorUIOrientationButton, NSButton;

@interface IMKSimulatorPreferencesBar : NSView
{
    IMKSimulatorUIOrientationButton *_UIOrientationButton;
    IMKSimulatorUIDirectionButton *_UIDirectionButton;
    NSButton *_spotlightButton;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)hello:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

