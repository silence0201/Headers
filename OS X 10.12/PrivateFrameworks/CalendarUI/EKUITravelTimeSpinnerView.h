//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSProgressIndicator, NSTextField;

@interface EKUITravelTimeSpinnerView : NSView
{
    NSProgressIndicator *_spinner;
    NSTextField *_textfield;
}

@property(retain) NSTextField *textfield; // @synthesize textfield=_textfield;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)animate;
- (id)init;

@end
