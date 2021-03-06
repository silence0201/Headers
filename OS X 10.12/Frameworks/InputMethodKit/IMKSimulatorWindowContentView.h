//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IMKSimulatorPreferencesBar, NSScrollView, NSTextView;

@interface IMKSimulatorWindowContentView : NSView
{
    NSScrollView *_scrollViewForTextView;
    NSTextView *_textView;
    IMKSimulatorPreferencesBar *_preferencesBar;
    NSView *_delegateView;
}

@property(retain, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSScrollView *scrollViewForTextView; // @synthesize scrollViewForTextView=_scrollViewForTextView;
@property(retain, nonatomic) IMKSimulatorPreferencesBar *preferencesBar; // @synthesize preferencesBar=_preferencesBar;
@property(retain, nonatomic) NSView *delegateView; // @synthesize delegateView=_delegateView;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateSubviewsWithSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

